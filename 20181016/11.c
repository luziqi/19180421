#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    int max;
    int n = 0;
    max = A + 3;
    for(int i = A; i<=max; i++){
    	    for(int j = A; j<=max; j++){
    	        	if(i == j) continue;
    	        	for(int k = A; k<=max; k++){
    	            	 if(k == j) continue;
                 	 if(k == i) continue;
                  n++;
    	            	 if(n%6!=0){
    	                	 printf("%d ", i*100+j*10+k);
    	            	 }else{
    	        	       	 printf("%d\n", i*100+j*10+k);
    	            }
    	        	}
    	    }
    }
}

