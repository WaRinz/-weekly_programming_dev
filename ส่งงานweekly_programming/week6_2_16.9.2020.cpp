#include<stdio.h>
int evenodd(int);
int evenodd(int num)
{
	int* p;
	p = &num;
	if (*p >= 1 && *p <= 100)
	{
		if (*p % 2 == 0)
		{
			printf("\n %d is even!", *p);
		}
		else if (*p % 2 != 0)
		{
			printf("\n %d is odd!", *p);
		}

	}
	else
	{
		printf(" Input must be integer and start at 1 and not more than 100");
	}

	return *p;
}
int main()
{
	int num;
	printf(" !!CAUTIONS!!\n\nIf input isn't an integer -> It will transform to integer\n\nExample : 4.3 -> input is 4!\n\nNOTE : 0 is original even number!\n\n");
	printf(" PLEASE ENTER THE NUMBER (start at 0 and not more than 100): ");
	scanf_s("%d", &num);
	evenodd(num);
	printf("\n\n===========================================");

	return 0;
}