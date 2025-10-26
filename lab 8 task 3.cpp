#include<stdio.h>
int main(){
	int sum[2][2] = {{0,0},{0,0}};
	int arr1[2][2];
	int arr2[2][2];
	printf("Enter the elements of first matrix :");
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
		
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter elements of second matrix :");
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
		
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for(int i =0; i<2; i++){
		for (int j=0; j<2; j++){
			sum[i][j] = arr2[i][j] + arr1[i][j];
		}
	}

    printf("Sum of two matrices is :\n");
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
		
			printf(" %d", sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}