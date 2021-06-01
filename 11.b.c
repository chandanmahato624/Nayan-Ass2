#include<stdio.h>
int main(){
    int n,i,j,k=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
        	k++;
            printf("%d ",k);
            
        }
        printf("\n");
    }
    return 0;

            // OUTPUT 
            // Enter the number : 5
            // 1
            // 2 3
            // 4 5 6
            // 7 8 9 10
            // 11 12 13 14 15


}
