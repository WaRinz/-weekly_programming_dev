
/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include <stdio.h>
int headache(int);
int headache(int a)
{
    int b = 1;
    /*pointer*/
    int* p;
    /*to address*/
    p = &b;
    /*... x 12 loop*/
    for (b = 1; b <= 12; b++)
    {
        printf("\n%d x %d = %d", a, *p, a * *p);/*num x pointer */
    }
    return *p;
}
int main()
{
    int a;
    printf("--- Multiplication Table ---\n\n");
    printf("If you type the number like 2.8 -> It will transform to 2\n\n");
    printf("Type Number in integer : ");
    scanf_s("%d", &a);
    if (a < 0 || a == 0 || a > 0)
    {
        if (a == 0)
        {
            printf("\nMultiplication Table should start at 1 or can not be characters");
        }
        if (a < 0)
        {
            printf("\nMultiplication Table should start at 1 or can not be characters");
        }
        if (a >= 1 && a < 1000)
        {
            headache(a);
        }
        if (a > 25 && a < 1000)
        {
            printf("\n\nYou are crazy!! normal student remember 25 table is enough!\n(But I'll show the table for you (-_-);");
        }
        if (a >= 1000)
        {
            printf("\n\nNoooooo!! That's too much!!");
        }

    }


    printf("\n\nThank You!");
    printf("\n\n==========================");
    return 0;
}
