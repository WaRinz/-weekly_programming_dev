#include <stdio.h>
char num();

char num()
{
    char a[30];
    char* p;
    p = a;
    scanf_s("%s", &a, 30);
    if (a)
    {
        printf("\nAnswer is ----> ");
        while (*p != '\0')
        {
            if ((*p >= 'a') && (*p <= 'z'))
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
    
    printf("!! CAUTIONS !!\n\n(the answer will blank if don't have a - z or more than 30 characters)\n");
    printf("Type string here (less than 30 characters and no space bar!) : ");
    num();
    
    printf("\n\n===============================");
    return 0;
}
