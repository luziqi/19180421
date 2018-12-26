#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"book.h"

int main()
{
	struct Book *head,*mo,*de;
	char cmd,cmd1;
	char name[50],writer[30],ISBN[8];
	head=readfile();
	do{
		menu();
                printf("请选择操作数字：");
                cmd='\0';
		cmd=getchar();
                getchar();
		if(cmd=='7')
		{
			rewritefile(head);
			break;
		}
		switch(cmd)
		{
			case '1':
				printf("你要通过何种方式查询？\n");
				printf("(1)书名查询\n");
				printf("(2)作者查询\n");
				printf("(3)ISBN码查询\n");
				printf("(4)返回上一级\n");
				printf("请输入序号：");
				cmd1=getchar();
				getchar();
				if(cmd1=='4')
					break;
				switch(cmd1)
				{
					case '1':
						printf("你要查找的书名是：");
						gets(name);
						printf("\n");
						searchname(head,name);
                                                break;
					case '2':
						printf("你要查找的作者是：");
						gets(writer);
						printf("\n");
						searchwriter(head,writer);
                                                break;
					case '3':
						printf("你要查找的ISBN码是：");
						gets(ISBN);
						printf("\n");
						searchISBN(head,ISBN);
					        break;
                                        
				}break;
			case '2':
				addbook(head);
                                printf("\n");
                                while(getchar()!='\n')
                                continue;
				break;
			case '3':
                                printf("请输入你要修改图书的ISBN码：");
                                gets(ISBN);
                                printf("\n");
                                mo=searchISBN(head,ISBN);
				modify(mo);
                                printf("\n");
                                while(getchar()!='\n')
                                  continue;
                                break;
			case '4':
				printf("请输入你需要删除图书的ISBN码：");
				gets(ISBN);
				printf("\n");
				de=searchISBN(head,ISBN);
				head=deleteBook(head,de);
				break;
			case '5':
				showBooks(head);
				break;
                       case '6':
                                information(head);
                                break;
                        default : printf("无此操作。\n");
		}
          }while(1);
           return 0;
}

void showBooks(struct Book *head)
{
	struct Book *p;
	p=head;
	if(p==NULL)
	{
		printf("库中无图书\n");return;
	}
	while(p!=NULL)
	{
		printf("%-35s%-20s%-10s%-5.2f\n",p->name,p->writer,p->ISBN,p->price);
		p=p->next;
	}
	return;
}

struct Book* constructNode()
{
	struct Book *p;
	p = NULL;
	p=(struct Book *)malloc(sizeof(struct Book));
	p->next = NULL;
	return p;
}
struct Book* readfile()
{
        struct Book *head=NULL,*p=NULL,*q=NULL;
        FILE *fp = NULL;
	char *line,*record;
	char buffer[1024],test[100];
	if ((fp = fopen("test.csv", "r")) != NULL)
	{
		while ((line = fgets(buffer, sizeof(buffer), fp))!=NULL)//当没有读取到文件末尾时循环继续
		{
			 p=(struct Book *)malloc(sizeof(struct Book));
	         p->next = NULL;
            if(q!=NULL)
               q->next=p;
            q=p;
            if(head==NULL)           
                head =p;
			record = strtok(line, ",");
			while (record != NULL)//读取每一行的数据
			{
				strcpy(p->name,record);
				record = strtok(NULL, ",");
                                strcpy(p->writer,record);
				record = strtok(NULL, ",");
                                strcpy(p->ISBN,record);
				record = strtok(NULL, ",");
                                p->price=atof(record);
                record = strtok(NULL, ",");
			}
 
		}
		fclose(fp);
		fp = NULL;
	}
           return head;
}
void addbook(struct Book *head)
{
	double price;
        int n;
        struct Book *p,*q;
	q=(struct Book*)malloc(sizeof(struct Book));
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=q;
	q->next=NULL;
        printf("请输入书名：");
	gets(q->name);                   //录入书名 
        printf("\n");
        printf("请输入作者名：");
	gets(q->writer);                 //录入作者 
        printf("\n");
        printf("请输入价格：");
    scanf("%lf",&q->price);    //录入价格 
        printf("\n添加完成！\n");
    sscanf(p->ISBN,"%d",&n);  //自动生成ISBN 
    n++;
    sprintf(q->ISBN,"%d",n);	
	return;
}
struct Book* deleteBook(struct Book *head,struct Book *target)
{
	struct Book *p;
	p=head;
	if(head==target)
	{
		head=head->next;
		free(target);
		return head;
	}
	while(p->next!=target)
	{
		p=p->next;

	}
	p->next=target->next;
	free(target);
        printf("删除成功！\n");
	return head;

}


void modify(struct Book *target)
{
	char a;
        printf("(n)修改书名\n");
        printf("(w)修改作者\n");
        printf("(p)修改价格\n");
        printf("(b)返回\n");
        printf("请输入操作代号：");
	a=getchar();
        getchar();
        if(a=='b')
        return;
	if(a=='n')
	{
		fflush(stdin);
		memset(target->name, 0, sizeof(target->name));
                printf("新的书名为：");
		gets(target->name);
	}
	else if(a=='w')
	{
		fflush(stdin);
		memset(target->writer,0,sizeof(target->writer));
                printf("新的作者名为：");
		gets(target->writer);
	}
	else if(a=='p')
	{
		fflush(stdin);
                printf("新的价格为：");
		scanf("%lf",&target->price);
	}
        else
        {
                printf("您输入的命令有误。\n");
                return;
        }
	printf("修改成功！\n");
        return;
}
void rewritefile(struct Book *head)
{
	FILE *fp=NULL;
	char price[30];
	struct Book *p;
	p=head;
	if((fp = fopen("/home/lzq1098004807/19180421/20181204/test.csv", "w")) != NULL)
	{
		while(p!=NULL)
		{
			fprintf(fp,"%s,%s,%s,%.2lf\n",p->name,p->writer,p->ISBN,p->price);
			p=p->next;
		}
	}
	fclose(fp);
	fp = NULL;
	
}
struct Book* searchISBN(struct Book *head,char isbn[])
{
	//ISBN查询
	struct Book *p;
	p=head;
	while(strcmp(p->ISBN,isbn)!=0)
	{
		if(p->next==NULL)
	        {
                     printf("没有找到");
		     return NULL;
		}
		p=p->next;
	}
        printf("%-35s%-20s%-10s%-5.2f\n",p->name,p->writer,p->ISBN,p->price);
	return p;
}
void searchname(struct Book *head,char name[])
{
	int n;
	struct Book *p;
	char *res;
        if(head==NULL)    //遍历完成
       
        return;
	p=head;
	res = (char *)memchr(p, name[0], strlen(p->name));
	if (res == NULL)
       {
	       p=p->next;
               return searchname(p,name);
       }
       while (1)
  {
    n = memcmp(res, name, strlen(name)); //比较
    if (n != 0)
    {
      if (strlen(res) <= strlen(name))  //切割出的字符串小于要查找字符串的长度
      {
               p=p->next;
               return searchname(p,name);
      }
      else
      {  
       //根据要查找的第一个字符继续切割
        res = (char *)memchr(res + 1, name[0], strlen(res));  
        if (res == NULL)
        {
                 p=p->next;
               return searchname(p,name);
        }
          
      }
    }
    else
    { //如果n = 0，找到
      printf("%-35s%-20s%-10s%-5.2f\n",p->name,p->writer,p->ISBN,p->price);
      p=p->next;
      return searchname(p,name);
 
    }
  }
}
void searchwriter(struct Book *head,char writer[])
{
	struct Book *p;
	p=head;
	if(p==NULL)
		return;//遍历结束
	if(strcmp(p->writer,writer)==0)
	{
		printf("%-35s%-20s%-10s%-5.2f\n",p->name,p->writer,p->ISBN,p->price);
		
	}
	p=p->next;
	return searchwriter(p,writer);
	
}
void menu()
{
    printf("______             _   ___  ________ _____ \n");
    printf("| ___ \\           | |  |  \\/  |_   _/  ___|\n");
    printf("| |_/ / ___   ___ | | _| .  . | | | \\ `--.\n");
    printf("| ___ \\/ _ \\ / _ \\| |/ / |\\/| | | |  `--. \\\n");
    printf("| |_/ / (_) | (_) |   <| |  | |_| |_/\\__/ /\n");
    printf("\\____/ \\___/ \\___/|_|\\_\\_|  |_/\\___/\\____/ \n");
    printf("                 图书管理系统               \n");
    printf("*=========================================* \n");
    printf("| * - * - * - * - * --- * - * - * - * - * |\n");
    printf("| |        [1]   查询图书条目.            | |\n");
    printf("| *        [2]   添加图书条目.            * |\n");
    printf("| |        [3]   修改图书条目.(需要ISBN码)| |\n");
    printf("| *        [4]   删除图书条目.(需要ISBN码)* |\n");
    printf("| |        [5]   显示图书条目.            | |\n");
    printf("| *        [6]   图书统计信息.            * |\n");
    printf("| |        [7]   退出这个界面.            | |\n");
    printf("| * - * - * - * - * --- * - * - * - * - * |\n");
    printf("*=========================================*\n");
     
    return;
}
int pcmp(double a,double b)
{
	if(a==b)
	return 1;
	if(a!=b)
	return -1;
 }  
int information(struct Book* pBook)
{   
	int count=-1;//头链表为目录,记录书本数目
	int countw=0;//作者数
        double max,min,a,b;
	struct Book *y,*t;
	y=pBook;
	t=pBook;
	int flag=0;//标记
	int piece=0,pieced=0;//作品数目，和上一个作品数目
	char wr[20];//作者名字
	char hp[50];//价格最高作品名称
	char lp[50];//价格最低作品名称
	struct Book* hand=newcpy(pBook),*y1,*y2,*y3;
        y3=hand;

    while(y!=NULL)
{      
    count++;
    y=y->next;
} //计算书本数目  
	
    	while(y3!=NULL)
{
		y1=hand;
                y2=hand;
	        y2=y1;
		y1=y1->next;

        while(y1!=NULL)
{
    if(strcmp(y1->writer,y3->writer)==0&&flag==0)
{
		countw++;
		piece++;
		flag=1;
		y2->next=y1->next;
		y1=y2->next;
}	
    else if(strcmp(y1->writer,y3->writer)==0&&flag==1) 
	{
		y2->next=y1->next; 
		y1=y2->next;
		piece++;
	}
	else 
	{
		y2=y1;
	    y1=y1->next;
	}
}
	if(piece>pieced) 
{
	strcpy(wr,y3->writer);	
	pieced=piece;
}
	piece=0;
	y3=y3->next;
	flag=0;
}

t=t->next;
 max=t->price;
 min=t->price;
while(t!=NULL)
{
    a=0;
    b=0;
   a=t->price;
   if(a>max)
   {max=a;
    strcpy(hp,t->name);}
   if(a<min)
   {min=a;
    strcpy(lp,t->name);}
   t=t->next;
}

printf("图书数目为 %d\n",count);
printf("作者数目为 %d\n",countw);
printf("作品最多作家是%s\n",wr);
printf("价格最高作品是%s\n",hp);
printf("价格最低作品是%s\n",lp);
y=NULL;
t=NULL;
hand=NULL;
y1=NULL;
y2=NULL;
y3=NULL;
   return 0;      
}

int newcpy(struct Book* pBook)
{
	struct Book* pNode=pBook;
	struct Book* pCloneHead=NULL,*pCloneNode=NULL;
        struct Book* pTempNode=NULL;
	if(pNode!=NULL)
	{
	 pCloneHead=(struct Book*)malloc(sizeof(struct Book));
	 strcpy(pCloneHead->name,pNode->name);
	 strcpy(pCloneHead->writer,pNode->writer);
	 strcpy(pCloneHead->ISBN,pNode->ISBN);
	 (pCloneHead->price)=(pNode->price);
	 pCloneHead->next=NULL;
	 pCloneNode=pCloneNode;
	 pNode=pNode->next;
	}
	while(pNode!=NULL)
	{
	 pTempNode=(struct Book*)malloc(sizeof(struct Book));
	 pTempNode=(struct Book*)malloc(sizeof(struct Book));
	 strcpy(pTempNode->name,pNode->name);
	 strcpy(pTempNode->writer,pNode->writer);
	 strcpy(pTempNode->ISBN,pNode->ISBN);
	 (pTempNode->price)=(pNode->price);
	 pTempNode->next=NULL;
	 pCloneNode->next=pTempNode;
	 pCloneNode=pCloneNode->next;
	 pNode=pNode->next;
	}
        pCloneNode=NULL;
        pTempNode=NULL;
	return pCloneHead;
}

