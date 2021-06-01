#include<stdio.h>
int main(){
    int n,i,k;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        k*=i;
    }
    printf("factoria of %d = %d",n,k);
    return 0;

        // OUTPUT 
        // Enter the number : 5
        // factoria of 5 = 120
}