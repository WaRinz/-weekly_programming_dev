/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include<stdio.h>
float area(int, int);

float area(int a, int b)
{
    // In array "area rectangle" have a & b
    float selium[2] = { a, b }; 
    
    // pointer
	float* p;	
    
    // *p = can get in selium address
	p = selium; 
	
    //p[0] is 1st number NOT p[1]
    printf("\n\nArea of rectangle is : %f x %f = %f Square meters", p[0], p[1], p[0] * p[1]); 

	return *p;

}

int main()
{
    float a, b;
	printf(" -- AREA OF RECTANGLE -- \n\n");
    printf("Width (in meter) : ");
    scanf_s("%f", &a);
    printf("\n\nLength (in meter) : ");
    scanf_s("%f", &b);

    if (a || b < 0 || a || b == 0 || a || b > 0)
    {
        if (a < 0 || b < 0 || a * b == 0)
        {
            printf("\n\nArea must more than zero or can not be characters");
        }
        if (a > 0 && b > 0)
        {
            area(a, b);
        }
        if (a >= 100 && b >= 100)
        {
            printf("\n\nOh! That's is a big square(3_3)");
        }
    }

    printf("\n\nEND PROGRAM !");
    printf("\n\n=================================");

	return 0;
}