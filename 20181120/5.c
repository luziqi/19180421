#include <string.h>
#include <stdio.h>

int substr(const char* str, const char* substr);

int main()
{
    char str[300];
    char a[300];
    gets(str);
    gets(a);
    printf("%d\n",substr(str,a));

    return 0;
}

int substr(const char* str, const char* substr)
{
	char check[300];
    int len1,len2;
    len1=strlen(str);
    len2=strlen(substr);
    for(int i=0;i<len1;i++)
    {
    	if(str[i]==substr[0])
    	{
    		for(int j=0;j<=len2;j++)
    		{
    			if(j==len2)
    			return i;
    			if(str[i+j]==substr[j])
    			continue;
    			else
    			break;
			}
		}
	
	}	return -1;
    
}
