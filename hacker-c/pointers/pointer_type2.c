#include<stdio.h>
int main(){
    int i;

    char char_array = {'a','b','c','d','e'};
    int int_array = {1, 2, 3, 4, 5};

    char *char_pointer;
    int *int_pointer;

    char_pointer = int_array;  // The char_pointer and int_pointer now.
    int_pointer = char_array;  // point to incompatable data types.

    for(i = 0; i < 5; i++){   // Iterate through the int array with the int pointer.
        printf("[int pointer] points to %p, which contains the char '%c'\n", int_pointer, *int_pointer);
        int_pointer = int_pointer + 1;
    }
    
    for(i = 0; i < 5; i++){  //Iterate through the char array with the char pointer.
        printf("[char pointer] points to %p, which contains the int %d\n", char_pointer, *char_pointer);
        char_pointer = char_pointer + 1;
    }

}