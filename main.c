#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a , b, c;
    printf("enter the first value:");
    scanf("%d" , &a);
    printf("enter the second value:");
    scanf("%d" , &b);
    c = a + b;
    printf("%d + %d = %d\n" , a,b,c);
    return 0;
}
