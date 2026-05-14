#include <stdio.h>

void multi_table(int n);

int main()
{
	int n;
	
	printf("Enter the number...:");
	scanf("%d",&n);
	multi_table(n);
	
	return 0;
}

void multi_table(int n){
    for(int i = 1;i <= 10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
        }
    
}
