#include<stdio.h>
int main(){
    int n;
    printf("Enter the Year : ");
    scanf("%d",&n);
    if(n%4==0){
        printf("%d its leap Year |",n);
    }else{
    	printf("%d its not leap Year |",n);
	}
    return 0;

        // OUTPUT 
        // Enter the Year : 2021
        // 2021 its not leap Year |
}
