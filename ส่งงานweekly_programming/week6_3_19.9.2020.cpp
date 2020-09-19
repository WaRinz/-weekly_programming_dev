#include<stdio.h>
void mg();
void ap();
void gv();
void mg()
{
	printf(" ---> Mangoes :\n\n");
	printf("- Alphonso Mangoes\n");
	printf("- Kesar Mangoes\n");
	printf("- Dasheri Mangoes\n");
	printf("- Chausa Mangoes\n");
	printf("- Badami Mangoes\n");
	printf("- Amrapali Mangoes\n");
}
void ap()
{
	printf(" ---> Apples :\n\n");
	printf("- Jonagold Apple\n");
	printf("- Cameo Apple\n");
	printf("- Empire Apple\n");
	printf("- Golden Delicious Apple\n");
	printf("- Fuji Apple\n");
	printf("- Granny Smith Apple\n");
}
void gv()
{
	printf(" ---> Guavas :\n\n");
	printf("- Tropical Guavas\n");
	printf("- Pineapple Guava\n");
	printf("- China White Guava\n");
	printf("- White Indian Guava\n");
	printf("- Mexican Cream Guava\n");
	printf("- Red Malaysian Guava\n");
}
int main()
{
	int num[3] = { 1,2,3 };/* array = 1,2,3*/
	int* p;
	int  num1;
	p = num;/* pointer same with array num*/
	printf("!! Cautions !!\n\n");
	printf("If you put the number like 1.999 or 2.2, It will transform to 1, 2 (Integer)!\n\n");
	printf("Please select fruit : \n");
	printf("\n1-> Mangoes \n2-> Apples \n3-> Guavas \n\nType Number ---> ");
	scanf_s("%d", &num1);
	
	if (num1 == 1 || 2 || 3)
	{
		if (num1 == 1)/* mangoes */
		{
			printf("%d", num1);
			*p == 1;
			mg();
		}
		else if (num1 == 2)/* apples */
		{
			printf("%d", num1);
			*p == 2;
			ap();
		}
		else if (num1 == 3)/* guavas */
		{
			printf("%d", num1);
			*p == 3;
			gv();
		}
		else/* type else */
		{
			printf("Please Enter 1,2,3 ONLY!!\n\nThank You!\n");
		}
	}
	/*end line*/
	printf("\n\n==================================");
	return 0;
}