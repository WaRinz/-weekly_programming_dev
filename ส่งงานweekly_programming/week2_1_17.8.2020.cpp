/*63010849 WORAWICH TANGPOJTHAWEEPORN SEC119*/
#include<stdio.h>
/*AREA OF CIRCLE*/
double circle(double r)
{
	double area;
	area = 3.14159 * r * r;
	return area;
}
/*AREA OF RECTANGLE*/
double rectangle(double w, double h)
{
	double area;
	area = w * h;
	return area;
}
/*AREA OF TRIANGLE*/
double triangle(double w, double h)
{
	double area;
	area = w * h * 0.5;
	return area;
}
/*DISPLAY*/
int main()
{
	double w, h, r;
	int num;
/*MENU*/
	printf("-- MENU --\n");
	printf("FIND THE AREA OF : \n");
	printf("1-> CIRCLE \n2-> RECTANGLE \n3-> TRIANGLE \n\npress the number then ENTER ---> ");
	scanf_s("%d", &num);
/*IF INPUT NUMBER IS 1,2,3 CAN GO TO SOLUTION*/
	if (num == 1 || 2 || 3) 
	{
/*PRESS 1 -> GO TO CIRCLE*/
		if (num == 1)
		{
			printf("-- CIRCLE --\n");
			printf("ENTER RADIUS : ");
			scanf_s("%lf", &r);
	/*Area cannot less than zero*/
			if (r < 0)
			{
				printf("!! Area cannot less than zero !!\n\n");
			}
			if (r > 0)
			{
				printf("AREA OF CIRCLE IS : %lf\n\n", circle(r));
			}
			printf("--- END ---\n\n");

		}
/*PRESS 2 -> GO TO RECTANGLE*/
		else if (num == 2)
		{
			printf("-- RECTANGLE --\n");
			printf("ENTER WIDTH : ");
			scanf_s("%lf", &w);
			printf("ENTER HEIGHT : ");
			scanf_s("%lf", &h);
	/*Area cannot less than zero*/
			if (w * h < 0)
			{
				printf("!! Area cannot less than zero !!\n\n");
			}
			if (w * h > 0) 
			{
				printf("AREA OF RECTANGLE IS : %lf\n\n", rectangle(w, h));
			}
			printf("--- END ---\n\n");
		}
/*PRESS 3 -> GO TO TRIANGLE*/
		else if (num == 3)
		{
			printf("-- TRIANGLE --\n");
			printf("ENTER WIDTH : ");
			scanf_s("%lf", &w);
			printf("ENTER HEIGHT : ");
			scanf_s("%lf", &h);
	/*Area cannot less than zero*/
			if (w * h < 0)
			{
				printf("!! Area cannot less than zero !!\n\n");
			}
			if (w * h > 0) {
				printf("AREA OF TRIANGLE IS : %lf\n\n", triangle(w, h));
			}
			printf("--- END ---\n\n");
		}
/*IF INPUT NUMBER IS NOT 1,2,3 --> ERROR CAN'T PROCESS*/
		else
		{
			printf("\n\n** ERROR! SELECT MENU 1,2,3 ONLY!!! **\n\n");
		}
	}
/*END LINE*/
	printf("=======================================");

	return 0;
}