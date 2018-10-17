#include<stdio.h>
int main()
{
	char r;                   
	int i;                  
	float x;                
	double z;                 
    long int a;              
    signed long int b;        
	unsigned int c;           
	unsigned long int d;     
	short int e;            
	signed short int f;       
	unsigned short int g;     

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
