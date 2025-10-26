#include<stdio.h>
int main(){
	int a,b;
	printf("Entre the number of rows you want to enter:\n");
	scanf("%d" ,&a);
	printf("Entre the number of columns you want to enter:\n");
	scanf("%d" ,&b);
	
	printf("Enter the elements of the matrix :\n");
	int arr[a][b];
	int rev[b][a];
	
	for (int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			scanf("%d" ,&arr[i][j]);
		}
	}
	
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			rev[j][i] = arr[i][j];
		}
	}
	
	printf("Transposed matrix :\n");

	for (int i=0; i<b; i++){
		for(int j=0; j<a; j++){
			printf("%d", rev[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}