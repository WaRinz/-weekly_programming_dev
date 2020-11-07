#include <stdio.h>

// function
void reverse();

void reverse()
{
    // array
    char string[20];
    char reverse[20];

    //pointer
    char* s = string;
    char* r = reverse;
    int i = -1;


    // input
    scanf_s("%s", &string);

    // loop " if "
    if (*s || i >= 0) // expression "or"
    {
        while (*s)
        {
            s++;
            i++;
        }
        while (i >= 0)
        {
            s--;
            *r = *s;
            r++;
            i--;
        }
    }
    *r = '\0';

    // output
    printf(" Reverse of the string is : %s\n\n", reverse);
}

int main()
{
 	printf("\n\n Pointer : Print a string in reverse order :\n"); 
	printf("------------------------------------------------\n");	
    printf(" Input a string : ");

    reverse();

    printf("\n\n Thank you !");
    printf("\n\n================================================\n");
    return 0;
}