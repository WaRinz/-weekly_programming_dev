/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include <stdio.h>

// function
void findFact(int, int*);

void findFact(int x, int* f) // *f is a pointer
{
    int i;

    *f = 1; // pointer = 1

    for (i = 1; i <= x; i++) // i is a number that <= x , x is the input num
    {
        *f = *f * i;
    }
}

int main()
{
    // array of char ( main progress of the program ) 
    char textmenu[50] = { "Pointer : Find the factorial of a given number :" };
    
    // to tell how to use the program ( the conditions )
    char con1[15] = { "1.Less than 10" };
    char con2[19] = { "2.Positive integer" };
    char con3[23] = { "3.Can't be a character" };

    int factorial;
    int num;

    // input
    printf("\n %s\n", textmenu);
    printf(" %s\n %s\n %s\n", con1, con2, con3);

    printf("------------------------------------------------------\n");
    printf(" Input a number : ");

    scanf_s("%d", &num);

    // condition " if " 
    if (num > 0 && num <= 10) // expression " and " num must > 0 and num <= 10; more than 10 will not calculate 
    {
        // output
        findFact(num, &factorial);
      //findFact(int x, int* f);

        printf("\n The Factorial of %d is : %d \n\n", num, factorial);

    }
    else // not in the following condition
    {
        // output
        printf("ERROR : \n   1.Too much number\n   2.The number is not a positive integer\n   3.The input is not a number\n\n");
        
    }

    printf("======================================================");
    return 0;
}



