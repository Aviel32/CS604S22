#include <stdio.h>
#include <math.h>
int main() {

    short min_short, max_short;

    //TODO: Please find the range of short type (meaning the smallest and largest values a short type variable can represent), and print out these values in decimals (store the smallest value in min_short and the largest value in max_short)
    //You are not allowed to hard-code any numbers in decimals
    //You are not allowed to use INT_MAX or INT_MIN
    //Please use binaries/hex values (such as 0b, 0x, etc)
    //No loop or if statement is allowed
    //-(2^N-1)
    min_short = - pow(2, ((sizeof(short) * 8) - 1));
    
    //(2^N-1) - 1
    max_short = ((pow(2, ((sizeof(short) * 8) - 1 ))) - 1);
    printf("%hd ", min_short);
    printf("%hd\n", max_short);
    return 0;
    
}
