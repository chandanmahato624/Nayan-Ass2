#include<stdio.h>
int main(){
    int n,m=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n>0){
        m+=n%10;
        n=n/10;
    }
    printf("sum of all digits = %d",m);
    return 0;

    // OUTPUT 
    // Enter the number : 99999
    // sum of all digits = 45
}
