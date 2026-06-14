#include<stdio.h>
int main(){
    int a, b;
    float c, d;

    a = 13;
    b = 5;

    c = a / b;                 // Divide using integers.
    d = (float) a / (float) b; // Divide integers typecast as float.

    printf("[integers]\t a = %d\t b = %d\n", a, b);
    printf("[float]\t c = %f\t d = %f\n", c, d);
}