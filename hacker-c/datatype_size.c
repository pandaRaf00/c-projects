#include<stdio.h>

int main(){
    printf("The 'int' data_type is\t\t\t  %d bytes\n", sizeof(int));
    printf("The 'unsigned int' data_type is\t\t  %d bytes\n", sizeof(unsigned int));
    printf("The 'short int' data_type is\t\t  %d bytes\n", sizeof(short int));
    printf("The 'long int' data_type is\t\t  %d bytes\n", sizeof(long int));
    printf("The 'long long int' data_type is\t  %d bytes\n", sizeof(long long int));
    printf("The 'float' data_type is\t\t  %d bytes \n", sizeof(float));
    printf("The 'char' data_type is\t\t\t  %d bytes\n", sizeof(char));
    return 0;
}