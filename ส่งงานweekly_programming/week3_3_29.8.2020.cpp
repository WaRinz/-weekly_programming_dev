/*63010849 WORAWICH TANGPOJTHAWEEPORN SEC119*/
#include<stdio.h>
int notlate (int salary)
{
	int c;
	c = salary + 1500;
	return c;
}
int ot(int hr)
{
	int ot;
	ot = (hr * 150);
	return ot;
}
int main()
{
	int num, num2, hr, salary;
	/*MENU*/
	printf("-- SALARY --\n");
	printf("HAPPY COMPANY.CO.LTD\n");
	printf("Rule : \n\n");
	printf("WORK IN TIME / HASN'T LATE --> +1500.- BAHT\n");
	printf("HAS OT --> +150.- /hr\n\n");
	printf("ENTER SALARY : ");
	scanf_s("%d", &salary);
	/*CURRENT SALARY*/
	printf("HAS LATE? (Yes = 1 / No = 2) : ");
	scanf_s("%d", &num);
	if (num == 1 || 2) 
	{
		if (num == 1)/*late*/
		{
			printf("WORK LATE!\n");
			printf("HAS OT? (Yes = 1 /No = 2) : ");
			scanf_s("%d", &num2);
			if (num2 == 1) /*has ot*/
			{
				printf("HOUR : ");
				scanf_s("%d", &hr);
				if (hr > 0) 
				{
					printf("TOTAL SALARY : %d BAHT\n\n", salary + ot(hr));
				}
				else
				{
					printf("HOUR MUST BE MORE THAN 0 !\n\n");
				}
			}
			else if (num2 == 2) /*hasn't ot*/
			{
				printf("TOTAL SALARY : %d BAHT\n\n", salary);
			}
			else
			{
				printf("!! PLEASE ENTER 1,2 ONLY !!\n\n");
			}
		}
		else if (num == 2)/*not late*/
		{
			printf("NOT WORK LATE!\n");
			printf("HAS OT? (Yes = 1 /No = 2) : ");
			scanf_s("%d", &num2);
			if (num2 == 1) /*has ot*/
			{
				printf("HOUR : ");
				scanf_s("%d", &hr);
				if (hr > 0)
				{
					printf("TOTAL SALARY : %d BAHT\n\n", notlate(salary) + ot(hr));
				}
				else
				{
					printf("HOUR MUST BE MORE THAN 0 !\n\n");
				}
			}
			else if (num2 == 2) /*hasn't ot*/
			{
				printf("TOTAL SALARY : %d BAHT\n\n", notlate(salary));
			}
			else
			{
				printf("!! PLEASE ENTER 1,2 ONLY !!\n\n");
			}
		}
		else
		{
			printf("!! PLEASE ENTER 1,2 ONLY !!\n\n");
		}
	}

		/*END LINE*/
		printf("=======================================");
	return 0;
}