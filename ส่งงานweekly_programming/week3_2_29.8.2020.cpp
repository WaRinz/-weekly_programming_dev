/*63010849 WORAWICH TANGPOJTHAWEEPORN SEC119*/
#include<stdio.h>
float normal(float ppl)
{
	float total;
	total = 279 * ppl;
	return total;
}
float silmem(float ppl)
{
	float total;
	total = (279 - (279 * 0.1)) * ppl;
	return total;
}
float goldmem(float ppl)
{
	float total;
	total = (279 - (279 * 0.15)) * ppl;
	return total;
}
int main()
{
	int num, ppl;
	/*MENU*/
	printf("-- EXPENSIVE SHABU --  << 279.- / ppl >>\n");
	printf("$$ CASHIER $$\n");
	printf("CUSTOMER TYPE : \n");
	printf("1-> NORMAL \n2-> 4 PAID 3 PROMOTION \n3-> SILVER MEMBER(-10%%) \n4-> GOLD MEMBER(-15%%)\n\npress the number then ENTER ---> ");
	scanf_s("%d", &num);
	/*IF INPUT NUMBER IS 1,2,3,4 CAN GO TO SOLUTION*/
	if (num == 1 || 2 || 3 || 4)
	{
		/*PRESS 1 -> normal customer*/
		if (num == 1)
		{
			printf("oo NORMAL oo\n");
			printf("AMOUNT OF PEOPLE : ");
			scanf_s("%d", &ppl);
			if (ppl <= 0)
			{
				printf("PEOPLE CAN'T BE 0 OR LESS THAN 0\n");
			}
			else if (((10 * ppl) + 5) % 10 != 5)
			{
				printf("PEOPLE ALWAYS BE INTIGER! \n");
			}
			else
			{
				printf("TOTAL : %.2f BAHT.\n\n", normal(ppl));
			}
			printf("--- THANK YOU! ---\n\n");
		}
		/*PRESS 2 -> 4 paid 3 promotion*/
		else if (num == 2)
		{
			printf("oo PROMOTION oo\n");
			printf("AMOUNT OF PEOPLE : ");
			scanf_s("%d", &ppl);
			if (ppl <= 0)
			{
				printf("PEOPLE CAN'T BE 0 OR LESS THAN 0\n");
			}
			else if (((10 * ppl) + 5) % 10 != 5)
			{
				printf("PEOPLE ALWAYS BE INTIGER! \n");
			}
			else 
			{
				float all;
				int saed = ppl % 4, group = ppl / 4;
				all = (279 * 3 * group) + (279 * saed);
				printf("TOTAL : %.2f BAHT.\n\n", all);
			}
			printf("--- THANK YOU! ---\n\n");
		}
		/*PRESS 3 -> silver member -10% */
		else if (num == 3)
		{
			printf("oo SILVER MEMBER oo\n");
			printf("AMOUNT OF PEOPLE : ");
			scanf_s("%d", &ppl);
			if (ppl <= 0)
			{
				printf("PEOPLE CAN'T BE 0 OR LESS THAN 0\n");
			}
			else if (((10 * ppl) + 5) % 10 != 5)
			{
				printf("PEOPLE ALWAYS BE INTIGER! \n");
			}
			else
			{
				printf("TOTAL : %.2f BAHT.\n\n", silmem(ppl));
			}
			printf("--- THANK YOU! ---\n\n");
		}
		/*PRESS 4 -> gold member -15% */
		else if (num == 4)
		{
			printf("oo GOLD MEMBER oo\n");
			printf("AMOUNT OF PEOPLE : ");
			scanf_s("%d", &ppl);
			if (ppl <= 0)
			{
				printf("PEOPLE CAN'T BE 0 OR LESS THAN 0\n");
			}
			else if (((10 * ppl) + 5) % 10 != 5)
			{
				printf("PEOPLE ALWAYS BE INTIGER! \n");
			}
			else
			{
				printf("TOTAL : %.2f BAHT.\n\n", goldmem(ppl));
			}
			printf("--- THANK YOU! ---\n\n");
		}
		else
		{
			printf("\n\n** ERROR! SELECT MENU 1,2,3,4 ONLY!!! **\n\n");
		}
		/*END LINE*/
		printf("=======================================");
	}
	return 0;
}