/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include <stdio.h>
char num(char);

char num(char a[])
{
    char* p;/*pointer*/
    p = &a[0];/*index*/

    if (a[50])
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
    char a[50];

    printf("!! CAUTIONS !!\n\n(the answer will blank if don't have a - z or more than 30 characters)\n");
    printf("Type string here (less than 30 characters and no space bar!) : ");
    scanf_s("%s", &a, 50);
    num(a);

    printf("\n\n===============================");
    return 0;
}