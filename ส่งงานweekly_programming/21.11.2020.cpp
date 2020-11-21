/*63010849 Worawich Tangpojthaweeporn sec 119*/
#include<stdio.h>

float volume(float, float, float);

float volume(float a, float b, float c)
{
    // In array "cubic volume" have a, b, c
    float vol[3] = { a, b, c };

    // pointer
    float* p;

    // *p = can get in cubic address
    p = vol;

    //p[0] is 1st number NOT p[1]
    printf("\n\n The Volume is : %f * %f * %f = %f Cubic Meters", p[0], p[1], p[2], p[0] * p[1] * p[2]);

    return *p;

}

int main()
{
    float a, b, c;
    printf(" <<< CUBIC VOLUME >>> \n\n");
    printf(" In this program, It will calculate which INPUT is + only\n\n");
    printf(" Width (in meter) : ");
    scanf_s("%f", &a);
    printf("\n\n Length (in meter) : ");
    scanf_s("%f", &b);
    printf("\n\n Height (in meter) : ");
    scanf_s("%f", &c);

    if (a || b || c < 0 || a || b || c == 0 || a || b || c > 0)
    {
        if (a < 0 || b < 0 || c < 0 || a * b * c == 0)
        {
            printf("\n\n Your INPUT must more than zero or can not be characters");
        }
        if (a > 0 && b > 0 && c > 0)
        {
            volume(a, b, c);
        }
        if (a >= 100 && b >= 100 && c >= 100)
        {
            printf("\n\n Oh! That's too much volume");
        }
    }

    printf("\n\n END PROGRAM !");
    printf("\n\n=================================");

    return 0;
}