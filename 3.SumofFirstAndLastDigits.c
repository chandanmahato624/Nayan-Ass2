#include<stdio.h>
int main(){
    int n,f=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int l=n%10;
    while(n>0){
        f = n%10;
        n=n/10;
    }
    int sum = f+l;
    printf("Sum of last and first number : %d",sum);
    return 0;

            // OUTPUT 
            // Enter the Number : 55555
            // Sum of last and first number : 10
}
