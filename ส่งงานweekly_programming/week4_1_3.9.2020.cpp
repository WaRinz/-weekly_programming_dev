/*63010849 WORAWICH TANGPOJTHAWEEPORN SEC119*/
#include<stdio.h>
int total(int);
int change(int);
int total(int hr)
{
	int total;
	total = (hr * 300);
	return total;
}
int main()
{
	int num, hr, c;
	/*MENU*/
	printf("-3- TUTOR BKK YEP -3-\n");
	printf("(( 300.- / hour ))\n\n");
	printf("Press\n 1-> Contact\n 2->Purchase\n");
	printf("Enter Number : ");
	scanf_s("%d", &num);
	if (num == 1 || 2)
	{
		if (num == 1)/*contact*/
		{
			printf("CONTACT US : \n");
			printf("TUTOR BKK YEP \n");
			printf("555/555 soi lactasoy. KFC kookkook road. 10110 Bangkok Thailand\n");
			printf("Call : 02-222-2222 , 088-888-8888\n\n");
		}
		else if (num == 2)/*purchase*/
		{
			printf("ENTER HOUR : ");
			scanf_s("%d", &hr);
			/*Bill*/
			if (hr > 0) {
				printf("Total : %d\n\n", total(hr));
				printf("Receive Money : ");
				scanf_s("%d", &c);
				if (c >= total(hr)) {
					printf("Change : %d\n", c - total(hr));
					printf("THANK YOU!\n\n");
				}
				else {
					printf("YOU DON'T HAVE ENOUGH MONEY (RECEIVE < TOTAL) or\nPLEASE ENTER THE <NUMBER> AND MORE THAN 0(RECEIVE = 0 / letter) \n\n");
				}
			}
			else if (hr <= 0) {
				printf("HOUR MUST BE MORE THAN ZERO or CAN NOT BE CHARACTER\n\n");
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
