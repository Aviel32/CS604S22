#include <stdio.h>
int main()
{	//TODO: replace ??? in line 4 to declare the right type for _c and _f
    float _c, f;
    printf("Input Temp in Fahrenheit: ");
    scanf("%f", &f);
    //TODO: convert fahrenheit to celsius. the formula is
    // _c = (_f - 32) * 5/9;
    _c = (f - 32) * (5.00/9.00);

    //TODO: replace ??? in line 11 to print out the celsius with two digits to the right of decimal point
    printf("\nTemp in Celsius is: %.2f\n", _c);
    return 0;
}
