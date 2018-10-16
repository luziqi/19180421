#include<stdio.h>
int main()
{
	char r;                   //将r定义为char型变量
	int i;                    //将i定义为int型变量
	float x;                  //将x定义为float型变量
	double z;                 //将z定义为double型变量
    long int a;               //将a定义为long int型变量
    signed long int b;        //将b定义为signed long int型变量
	unsigned int c;           //将c定义为unsigne int型变量
	unsigned long int d;      //将d定义为unsigned long int型变量
	short int e;              //将e定义为short int型变量
	signed short int f;       //将f定义为signed short int型变量
	unsigned short int g;     //将g定义为unsigned short int型变量

	printf("char size=%d\n",sizeof(r));
    printf("int  size=%d\n",sizeof(i));
	printf("float size=%d\n",sizeof(x));
	printf("double size=%d\n",sizeof(z));
    printf("long int size=%d\n",sizeof(a));
	printf("signed long int size=%d\n",sizeof(b));
	printf("unsigned int size=%d\n",sizeof(c));
	printf("signed short int size=%d\n",sizeof(f));
	printf("unsigned short int size=%d\n",sizeof(g));
	
	return 0;
}
