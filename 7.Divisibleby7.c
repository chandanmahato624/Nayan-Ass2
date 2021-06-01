#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if(i%7==0){
            printf("%d \n",i);
        }
    }
    return 0;

        // OUTPUT 
        // Enter the number : 100
        // 7
        // 14
        // 21
        // 28
        // 35
        // 42
        // 49
        // 56
        // 63
        // 70
        // 77
        // 84
        // 91
        // 98

}