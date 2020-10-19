/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include<stdio.h>
float velocity(int, int);

float velocity(int a, int b)
{
    // In array "area rectangle" have a & b
    float velo[2] = { a, b };

    // pointer
    float* p;

    // *p = can get in selium address
    p = velo;

    //p[0] is 1st number NOT p[1]
    printf("\n\nVelocity is : %f / %f = %f m/s", p[0], p[1], p[0] / p[1]);

    return *p;

}

int main()
{
    float a, b;
    printf(" //// VELOCITY //// \n\n");
    printf("In this program, It will calculate which answer is + only\n\n");
    printf("Distance (in meter) : ");
    scanf_s("%f", &a);
    printf("\n\nTime (in meter) : ");
    scanf_s("%f", &b);

    if (a || b < 0 || a || b == 0 || a || b > 0)
    {
        if (a < 0 || b < 0 || a * b == 0)
        {
            printf("\n\nVelocity must more than zero or can not be characters");
        }
        if (a > 0 && b > 0)
        {
            velocity(a, b);
        }
        if (a >= 100 && b >= 100)
        {
            printf("\n\nOh! That's too fast");
        }
    }

    printf("\n\nEND PROGRAM !");
    printf("\n\n=================================");

    return 0;
}