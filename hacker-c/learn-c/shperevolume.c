#include<stdio.h>

int main(){
    float radius;
    double pi, volume;

    pi = 3.14159;
    radius = 1.5f;
    volume = (4.0/3.0) * pi * radius * radius * radius;

    printf("The volume of a sphere with radius %1.f is %1.f cubic units", radius, volume);
    return 0;
}