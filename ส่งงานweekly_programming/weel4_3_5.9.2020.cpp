#include<stdio.h>
int scanage();
float para();
float bmi();
int scanage()
{
	int age;
	printf("Please Enter Your Age : ");
	scanf_s("%d", &age);
	if (age <= 0)
	{
		printf("Age can not less than 0 !!\n\n");
	}
	else if (age <= 11)
	{
		printf("%d -> is Kid\n\n", age);
	}
	else if (age <= 20)
	{
		printf("%d -> is Teen\n\n", age);
	}
	else if (age <= 60)
	{
		printf("%d -> is Adult\n\n", age);
	}
	else
	{
		printf("%d -> is Old\n\n", age);
	}
	return age;
}
float para()
{
	float par;
	printf("Please Enter Your Weight : ");
	scanf_s("%f", &par);
	printf("Your weight is : %.2f", par);
	printf("\nPrepare paracetamol 500mg ->");
	if (par <= 0)
	{
		printf("Weight can not be 0 or less than 0 !!\n\n");
	}
	else if (par <= 33)
	{
		printf("weight less than 33 kg : 1/2 tablet 5-6 times per day!\n\n");
	}
	else if (par <= 50)
	{
		printf("weight in 34-50 kg : 1 tablet 5-6 times per day!\n\n");
	}
	else if (par <= 75)
	{
		printf("weight in 51-75 kg : 1 and 1/2 tablet 4-5 times per day!\n\n");
	}
	else
	{
		printf("more than 75 kg : 2 tablet 3-4 times per day!\n\n");
	}
	return par;
}
float bmi()
{
	float BMI, w, h;
	printf("Enter weight (example 68.16 kg) : ");
	scanf_s("%f", &w);
	if (w <= 0)
	{
		printf("weight cannot be zero or less than zero!\n");
	}
	printf("Enter height (example 1.75 m) : ");
	scanf_s("%f", &h);
	if (h <= 0)
	{
		printf("height cannot be zero or less than zero!\n");
	}
	BMI = w / (h * h);
	if (w && h > 0)
	{
		if (BMI <= 18.5)
		{
			printf("Your BMI is : % .2f -> TOO THIN! eat more and exercise!\n\n",BMI);
		}
		else if (BMI <= 24)
		{
			printf("Your BMI is : % .2f -> NORMAL! Healthy and Happy!\n\n",BMI);
		}
		else if (BMI <= 29.9)
		{
			printf("Your BMI is : % .2f -> FAT! go to exercise now!\n\n",BMI);
		}
		else
		{
			printf("Your BMI is : % .2f -> TOO FAT! go to hospital to see doctor!\n\n",BMI);
		}
	}
	else
	{
		printf("weight and height should more than zero!\n\n");
	}
	return BMI;

}
int main()
{
	int num, num2;
	printf("<< JAIDEE CLINIC >>\n");
	printf("select Menu : \n\n");
	printf("1-> Find Age \n2-> I have a fever \n3-> Body Mass Index (BMI)\n\n");
	printf("Enter Number : ");
	scanf_s("%d", &num2);
	if (num2 == 1 || 2 || 3) 
	{
		if (num2 == 1)/*type 1 range of age*/
		{
			scanage();
		}
		else if (num2 == 2)/*type 2 Find paracetamol*/
		{

			para();
		}
		else if (num2 == 3)/*type 3 BMI*/
		{
			bmi();
		}
		else /*type else*/
		{
			printf("Please Enter 1,2,3 ONLY!!\n\n");
		}
	}
	
	printf("THANK YOU!\n");
	/*end line*/
	printf("==================================");
}