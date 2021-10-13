#include <cstdio>
#include <cmath>

int main()
{
	
    puts("Write coefficients (a,b,c) for 'ax^2+bx+c=0 ' : ");
	
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f %f", &a, &b, &c);

    float d = b*b - 4*a*c;
    if (d < 0 ) 
    {
        printf("solution: none");
    } 
    else if (d > 0)
    {
        float x1 = (sqrt(d) - b) /(2*a);
        float x2 = (-sqrt(d) - b) / (2*a);
        printf("solution1: %f solution2: %f\n", x1, x2);
    } 
    else
    {
        float x = (-sqrt(d) - b) / (2*a);
        printf("solution: %f\n", x);
    }
    
}