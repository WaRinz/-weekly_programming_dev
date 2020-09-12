/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include <stdio.h>
char num();

char num()
{
    char a[50];
    char* p;/*pointer*/
    p = a;/*index*/
    scanf("%s", a, 50);
    if (a)
    {
        printf("\nAnswer is ----> ");
        while (*p != '\0')
        {
            if ((*p >= '0') && (*p <= '9'))/* 0-9 */
            {
                printf("%c", *p);
            }
            p = p + 1;
        }
    }

    return *p;
}
int main()
{

    printf("!! CAUTIONS !!\n\n(the answer will blank if don't have a - z or more than 50 characters)\n");
    printf("Type string here (less than 50 characters and no space bar!) : ");
    num();

    printf("\n\n===============================");
    return 0;
}
