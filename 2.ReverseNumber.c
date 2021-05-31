#include <stdio.h>
int main()
{
    int n, rem, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reversed number = %d", rev);

    return 0;

        // OUTPUT 
        // Enter the number : 125
        // Reversed number = 521
}
