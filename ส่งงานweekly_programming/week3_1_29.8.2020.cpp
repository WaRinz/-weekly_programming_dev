/*63010849 WORAWICH TANGPOJTHAWEEPORN SEC119*/
#include<stdio.h>
double speed(double s,double t)
{
	double v;
	v = s / t;
	return v;
}
double distance(double v,double t)
{
	double s;
	s = v * t;
	return s;
}
double time(double s,double v)
{
	double t;
	t = s / v;
	return t;
}
int main()
{
	double s, v, t;
	int num;
	/*MENU*/
	printf("< SPEED, DISTANCE AND TIME >\n");
	printf("YOU WANT TO FIND >>> : \n");
	printf("1-> SPEED \n2-> DISTANCE \n3-> TIME \n\npress the number then ENTER ---> ");
	scanf_s("%d", &num);
	/*IF INPUT NUMBER IS 1,2,3 CAN GO TO SOLUTION*/
	if (num == 1 || 2 || 3)
	{
		/*PRESS 1 -> FIND SPEED*/
		if (num == 1)
		{
			printf("< SPEED >\n");
			printf("ENTER DISTANCE in km : ");
			scanf_s("%lf", &s);
			printf("YOUR DISTANCE > %lf km\n", s);
			printf("ENTER TIME in hr : ");
			scanf_s("%lf", &t);
			printf("YOUR TIME > %lf hr\n", t);
			if (s && t > 0)
			{
				printf("THE SPEED IS >>> %lf km/hr !\n\n", speed(s,t));
			}
			if (t <= 0)
			{
				printf("!! CAN NOT FIND !! (TIME CANNOT BE ZERO OR LESS THAN ZERO)\n\n");
			}
			printf("--- END ---\n\n");
		}
		/*PRESS 2 -> FIND DISTANCE*/
		else if (num == 2)
		{
			printf("< DISTANCE >\n");
			printf("ENTER SPEED in km/hr : ");
			scanf_s("%lf", &v);
			printf("YOUR SPEED > %lf km/hr\n", v);
			printf("ENTER TIME in hr : ");
			scanf_s("%lf", &t);
			printf("YOUR TIME > %lf hr\n", t);
			if (v && t > 0)
			{
				printf("THE DISTANCE IS >>> %lf km !\n\n", distance(v, t));
			}
			if (t <= 0)
			{
				printf("!! CAN NOT FIND !! (TIME CANNOT BE ZERO OR LESS THAN ZERO)\n\n");
			}
			printf("--- END ---\n\n");
		}
		/*PRESS 3 -> FIND TIME*/
		else if (num == 3)
		{
			printf("< TIME >\n");
			printf("ENTER DISTANCE in km : ");
			scanf_s("%lf", &s);
			printf("YOUR DISTANCE > %lf km\n", s);
			printf("ENTER SPEED in km/hr : ");
			scanf_s("%lf", &v);
			printf("YOUR TIME > %lf hr\n", v);
			if (s && v > 0)
			{
				printf("THE TIME IS >>> %lf hr !\n\n", time(s, v));
			}
			if (v <= 0)
			{
				printf("!! CAN NOT FIND !! (SPEED CANNOT BE ZERO OR LESS THAN ZERO)\n\n");
			}
			printf("--- END ---\n\n");
		}
		else
		{
			printf("\n\n** ERROR! SELECT MENU 1,2,3 ONLY!!! **\n\n");
		}
		/*END LINE*/
		printf("=======================================");
	}
	return 0;
}