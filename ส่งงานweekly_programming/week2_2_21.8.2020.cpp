/*63010849 WORAWICH TANGPOJTHAWEEPORN SEC119*/
#include<stdio.h>
double celcius(double f)
{
	double c;
	c = ((f - 32) * 5) / 9;
	return c;
}
double farenheit(double c)
{
	double f;
	f = ((9 * c) + 32) / 5;
	return f;
}
int main()
{
	double c, f;
	int num;
	/*MENU*/
	printf("-- MENU --\n");
	printf("FIND THE TEMPERATURE : \n");
	printf("1-> CELCIUS \n2-> FARENHEIT \n\npress the number then ENTER ---> ");
	scanf_s("%d", &num);
	/*IF INPUT NUMBER IS 1,2 CAN GO TO SOLUTION*/
	if (num == 1 || 2)
	{
		/*PRESS 1 -> CELCIUS*/
		if (num == 1)
		{
			printf("-- CELCIUS --\n");
			printf("ENTER FARENHEIT : ");
			scanf_s("%lf", &f);
			printf("TEMPERATURE IS : %lf CELCIUS !\n\n", celcius(f));
			printf("--- END ---\n\n");
		}
		/*PRESS 2 -> FARENHEIT*/
		if (num == 2)
		{
			printf("-- FARENHEIT --\n");
			printf("ENTER CELCIUS : ");
			scanf_s("%lf", &c);
			printf("TEMPREATURE IS : %lf CELCIUS !\n\n", farenheit(c));
			printf("--- END ---\n\n");
		}
		/*END LINE*/
		printf("=======================================");
	}
	return 0;
}