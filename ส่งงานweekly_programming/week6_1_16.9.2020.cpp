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
	if (*p)
	{

		if (a <= 11 && a > 0)
		{
			printf("%d -> You are Kid", *p);
		}
		else if (a <= 20 && a > 0)
		{
			printf("%d -> You are Teen", *p);
		}
		else if (a <= 60 && a > 0)
		{
			printf("%d -> You are Adult", *p);
		}
		else if (a <= 130 && a > 0)
		{
			printf("%d -> You are Old", *p);
		}
		else
		{
			printf("!!CAUTIONS!!\n\nAge must start at 0 and can not be characters!\n(normal people can't live more than 130 years!)");
		}
	}

	return *p;
}
int main()
{
	printf("PLEASE ENTER YOUR AGE : ");
	age();
	printf("\n\n======================================================");

	return 0;
}
