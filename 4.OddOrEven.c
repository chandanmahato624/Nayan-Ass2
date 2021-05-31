#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n%2==0){
        printf("%d is even number.",n);
    }else{
        printf("%d is odd number.",n);
    }
    return 0;

    // OUTPUT 
    // Enter the number : 45
    // 45 is odd number.

    // Enter the number : 46
    // 46 is even number.
}
