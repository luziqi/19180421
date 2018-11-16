#include<stdio.h>
#include<string.h>
void k_reverse(char *str,int k);

int main() {
	int k;
	char str[30];
	scanf("%d",&k);
	scanf("%s",str);
	k_reverse(str,k);
	printf("%s\n",str);
	return 0;
}
void k_reverse(char *str,int k) {
	int len,mod,i,j,e;
	char temp;
	len = strlen(str);
	mod = len%k;
	len = len - mod;
	for(i=1; i<=len/k; i++) 
	{
		for(j=k*(i-1),e=j+k-1; j<=e; j++,e--)
		 {
			temp = str[j];
			str[j]=str[e];
			str[e]= temp;
		}
	}
}
