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
	int num[1];/* array = one number only*/
	int* p;
	p = &num[0];/* pointer same with array num*/
	printf("!! Cautions !!\n\n");
	printf("If you put the number like 1.999 or 2.2, It will transform to 1, 2 (Integer)!\n\n");
	printf("Please select fruit : \n");
	printf("\n1-> Mangoes \n2-> Apples \n3-> Guavas \n\nType Number ---> ");
	scanf_s("%d", p);

	if (*p < 0 || *p == 0 || *p > 0)
{
	if (*p == 0)/* type else */
	{
		printf("Please Enter 1,2,3 ONLY!!\n\nThank You!\n");
	}
	if (*p < 0)/* type else */
	{
		printf("Please Enter 1,2,3 ONLY!!\n\nThank You!\n");
	}
	if (*p >= 1 && *p <= 3)/* type else */
	{
		if (*p == 1)/* mangoes */
		{
			printf("%d", *p);
			mg();
		}
		else if (*p == 2)/* apples */
		{
			printf("%d", *p);
			ap();
		}
		else if (*p == 3)/* guavas */
		{
			printf("%d", *p);
			gv();
		}
		
	}
	if (*p > 3)
		{
			printf("Please Enter 1,2,3 ONLY!!\n\nThank You!\n");
		}
	
}
	/*end line*/
	printf("\n\n==================================");
	return 0;
}
