#include<stdio.h>
int age();
int age()
{
	int a;
	/* pointer */
	int* p;
	/* address */
	p = &a;
	scanf_s("%d", &a);
	if (*p < 1)
	{
		printf("\nAge must start at 1 and can not be characters!");
	}
	if ((*p >= 1) && (*p != 0))
	{
		if (a <= 11)
		{
			printf("%d -> You are Kid", *p);
		}
		else if (a <= 20)
		{
			printf("%d -> You are Teen", *p);
		}
		else if (a <= 60)
		{
			printf("%d -> You are Adult", *p);
		}
		else if (a <= 130)
		{
			printf("%d -> You are Old", *p);
		}
		else
		{
			printf("Are you a human ?? How can you live so many years!");
		}
	}
	
	return *p;
}
int main()
{
	printf("PLEASE ENTER YOUR AGE : ");
	age();
	printf("\n\n======================================================");

}