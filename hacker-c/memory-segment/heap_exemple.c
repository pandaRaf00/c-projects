#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
    char *char_ptr;  // A char pointer
    int *int_ptr;    // An integer pointer
    int mem_size;

    if(argc < 2)
        mem_size = 50;
    else 
        mem_size = atoi(argv[1]);

        printf("\t[+] allocating %d bytes of memory on the heap of char_ptr\n", mem_size);
        char_ptr = (char *) malloc(mem_size);  // Allocating heap memory

        if(char_ptr == NULL){
            fprintf(stderr, "Error: could not allocate heap memory.\n");
            exit(-1);
        }

    strcpy(char_ptr, "This is memory is located on the heap.");
    printf("(char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);
    
    
}