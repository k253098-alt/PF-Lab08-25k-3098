#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of N :\n");
	scanf("%d",&n);
	
	
	for(int i=0; i<10; i++){
		int a = i + 1;
		int b = a*n;
		printf("n * %d = %d\n",a, b );
	}
	return 0;
}