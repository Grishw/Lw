#include <cstdio>

int main()
{
	// 1. prompt user to enter coefficients
    puts("Write coefficients (a,b) for 'ax + b = 0 ' : ");
	// 2. read coefficients for equation `ax + b = 0`
    float a = 0;
    float b = 0;
    scanf("%f %f", &a,&b);
	// 3. solve equation `ax + b = 0`
	// solution: `x = -b / a`
    float x = -b/a;
    printf("solution: %f\n", x);
}