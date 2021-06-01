#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            printf("1 ");
        }
        printf("\n");
    }
    return 0;

        // OUTPUT 
        // Enter the number : 5
        // 1
        // 1 1
        // 1 1 1
        // 1 1 1 1
        // 1 1 1 1 1
}
