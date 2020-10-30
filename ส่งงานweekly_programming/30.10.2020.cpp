/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include <stdio.h>

void reverse();

// Function
void reverse()
{
	int i, n, a[100];// array a[100] is the storage of input array number
	
	// pointer
	int* pi;
	pi = &i;
	printf("\nInput the number of elements to store in the array : ");
	scanf_s("%d", &n);

	// If
	
	if (n < 0 || n > 9) // EXPRESSION "OR"
	{
		printf("\nSorry, Cannnot do the reverse because : \n\n");
		printf(" 1. There was not a positive integer OR There is a character\n 2. Too much number");
	}
	

	
	else
	{
		// INPUT & OUTPUT
		printf("\nInput %d number of elements in the array : \n", n);
		
		// loop
		for (i = 0; i < n; i++)
		{
			printf("element - %d : ", i);
			scanf_s("%d", &a[*pi]);
		}

		printf("\n\nThe values store into the array are : \n");
		for (i = 0; i < n; i++)
		{
			printf("% 5d", a[*pi]);
		}

		printf("\n\nThe values store into the array in reverse are :\n");
		for (i = n - 1; i >= 0; i--)
		{
			printf("% 5d", a[*pi]);
		}
		printf("\n\n");
	}
}
int main()
{
	printf("\n\nRead n number of values in an array and display it in reverse order (less than 9 must be an integer):\n");
	printf("\nIf the Input isn't correct, it will error or show the wrong number\n");
	printf("-------------------------------------------------------------------------------------------\n");

	reverse();

	printf("\n\nThank You!!\n\n");
	printf("========================================================================\n");

}