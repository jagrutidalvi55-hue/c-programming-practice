#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter Two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Sum=%d\n", a + b);
    printf("Difference=%d\n", a - b);
    printf("Product=%d\n", a * b);
    printf("quotient=%d\n", a / b);
    printf("Reminder=%d\n", a % b);
    return 0;
}