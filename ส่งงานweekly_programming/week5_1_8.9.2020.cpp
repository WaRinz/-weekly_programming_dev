#include <stdio.h>
char num(char);

char num(char a[])
{
    char* p;
    p = &a[0];
   
    if (a[30])
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
    char a[30];
   
    printf("Type string here (less than 30 characters and no space bar!) : \n\n");
    printf("!! CAUTIONS !!\n\n(the answer will blank if don't have a - z or more than 30 characters)\n");
    scanf_s("%s", &a,30);
    num(a);
    
    printf("\n\n===============================");
    return 0;
}