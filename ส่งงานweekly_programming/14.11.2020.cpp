#include <stdio.h>

// function
void alphabet();

void alphabet()
{
    // array
    char alph[27];
    int x;

    // pointer
    char* ptr;
    ptr = alph;
    printf("----------------------------------------\n");
    


    for (x = 0; x < 26; x++)
    {
        *ptr = x + 'A';
        ptr++;
    }
    ptr = alph;

    printf(" The Alphabets are : \n");
    for (x = 0; x < 26; x++)
    {
        printf(" %c ", *ptr);
        ptr++;
    }
    printf("\n\n");
}
int main()
{
    int choice;

    // Input & Output
    printf("\n\n Pointer : Print all the alphabets:\n");
    printf("----------------------------------------\n");
    printf(" Print or Close program ?");
    printf("\n Print = 1 / Close = 2");
    printf("\n ---> ");
    scanf_s("%d", &choice);

    // Expression " or "  " If " Condition
    if (choice == 1 || choice == 2)
    {
        alphabet();
    }

    else
    {
        printf(" Please Try Again --- Type 1 or 2 only");
    }

    printf("\n\n THANK YOU!!");
    printf("\n\n========================================\n");
    return(0);
}