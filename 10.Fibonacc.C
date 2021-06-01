#include<stdio.h>
int main(){
    int n;
    printf("Enter The fibonacci Range : ");
    scanf("%d",n);
    int i,a=0,b=1,c;
    for(i=0; i<n; i++){
        c = a+b;
        a = b;
        b = c;
        printf("%d",c);
    }
    return 0;

}
