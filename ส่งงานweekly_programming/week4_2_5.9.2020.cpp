#include<stdio.h>
void menu();
void contact();
void menu()
{
	printf("- Cha nom yen		35.- \n");
	printf("- Green Tea 		40.- \n");
	printf("- Mocca			40.- \n");
	printf("- Latte			40.- \n");
	printf("- Strawberry Cake	50.- \n");
	printf("- Cheese Cake		60.- \n");
	printf("- Hot Chocolate		50.- \n");
	printf("- Srawberry Milk	40.- \n");
	printf("- Honey Pancake		85.- \n\n");

}
void contact() 
{
	printf("555/555 Moon road 20100 \n@loonatheword Tel : 084-5965875\n\n");
}
int main()
{
	int num;
	int lolo[8];
	printf("== HAPPY DRINK ONLINE CAFE ==\n\n");
	printf("Select Menu : \n");
	printf("1-> Menu \n2.Contact  \n\n==>");
	scanf_s("%d", &num);
	if (num == 1 || 2)
	{
		/*go to menu*/
		if (num == 1)
		{
			menu();
		}
		/*go to contact*/
		else if (num == 2)
		{
			contact();
		}
		else /*type else*/
		{
			printf("Please Enter 1,2 ONLY!!\n\n");
		}
	}

	printf("THANK YOU!\n");
	/*end line*/
	printf("==================================");
	return 0;
}
