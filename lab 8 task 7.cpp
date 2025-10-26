#include <stdio.h>

int main() {
    int start, end, i, j, Prime;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++) {
        if(i < 2)
            continue;  

        Prime = 1; 

        
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                Prime = 0;
                break;
            }
        }

        if(Prime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
