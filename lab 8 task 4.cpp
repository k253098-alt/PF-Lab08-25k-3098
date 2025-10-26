#include<stdio.h>
int main(){
	
	
	printf("Enter the elements of matrix :\n");
	int a[2][2][2];
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<2; k++){
				printf("a[%d][%d][%d]: ",i,j,k);
				scanf("%d" ,&a[i][j][k]);
			}
		}
	}
		
	printf("\nThe matrix you entered is :\n");

	for(int i=0; i<2; i++){
		printf("Layer %d:\n", i+1);
		for(int j=0; j<2; j++){
			for(int k=0; k<2; k++){
				printf("%d" ,a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
	
}
