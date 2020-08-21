/*63010849 WORAWICH TANGPOJTHAWEEPORN SEC119*/
#include<stdio.h>
double bht(double u)
	{
		double b;
		b = u*31.55;
		return b;
	}
double usd(double b)
	{
		double u;
		u = b/31.55;
		return u;
	}
int main()
{
	double b, u;
	int num;
	/*MENU*/
	printf("-- CONVERT THB and USD -- < AT 21/08/2020 1USD = 31.55THB >\n");
	printf("CONVERT TO.... : \n");
	printf("1-> THB \n2-> USD \n\npress the number then ENTER ---> ");
	scanf_s("%d", &num);
	/*IF INPUT NUMBER IS 1,2 CAN GO TO SOLUTION*/
	if (num == 1 || 2)
	{
		/*PRESS 1 -> THB*/
	if (num == 1)
		{
			printf("-- CONVERT TO THB --\n");
			printf("ENTER USD : ");
			scanf_s("%lf", &b);
			if (b > 0)
			{
				printf("YOU WILL GAIN : %lf BAHT !\n\n", bht(b));
			}
			if (b < 0)
			{
				printf("!! YOU DIDN'T HAVE MONEY TO CHANGE ENOUGH !!\n\n");
			}
			printf("--- END ---\n\n");
		}
		/*PRESS 2 -> USD*/
	else if (num == 2)
		{
			printf("-- USD --\n");
			printf("ENTER THB : ");
			scanf_s("%lf", &u);
			if (u > 0)
			{
				printf("YOU WILL GAIN : %lf US Dollar !\n\n", usd(u));
			}
			if (u < 0)
			{
				printf("!! YOU DIDN'T HAVE MONEY TO CHANGE ENOUGH !!\n\n");
			}
			printf("--- END ---\n\n");
		}
	else
		{
			printf("\n\n** ERROR! SELECT MENU 1,2 ONLY!!! **\n\n");
		}
		/*END LINE*/
		printf("=======================================");
	}
	return 0;
}