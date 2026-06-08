#include<stdio.h>

int main(){
    char string[10];
    int A = -73;
    unsigned int B = 31337;

    strcpy(string, "sample");
    // example of printing with diffrent format string

    printf("[A] Dec :%d Hex :%x Unsigned :%u\n", A, A, A);
    printf("[B] Dec :%d Hex :%x Unsigned :%u\n", B, B, B);
    printf("[Field width on B] 3: '%3u', 10: '10%u', '%08x'\n", B, B, B);
    printf("[string] %s Address of %08x\n", string, string);


    //Example of unary address operator(defferencing) and %x format string
    printf("variable A is at address : %08x\n", &A);
    
}