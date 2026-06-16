#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *errorchecked_malloc(unsigned int);  //function prototype for errorchecked_malloc()

int main(int argc, char *argv[]){
    char *char_ptr;  // A char pointer
    int *int_ptr;
    int mem_size;

    if(argc < 2)        // If there aren't command line argrument 
        mem_size = 50;  // use 50 of default value
    else 
        mem_size = atoi(argv[1]);

    printf("\t[+] allocating %d bytes of memory on the heap for char_ptr\n", mem_size);
    char_ptr = (char *) errorchecked_malloc(mem_size);  // Allocating heap memory 

    strcpy(char_ptr, "This is memory is located in the heap.");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);
    printf("\t[+] Allocating 12 bytes of memory on the heap for int_ptr\n");
    int_ptr = (int *) errorchecked_molloc(12);  // Allocating heap memory again.
    
    *int_ptr = 31337;   // Put the value of 31337 where int_ptr is pointing 
    printf("int_ptr (%p) --> %d\n", int_ptr, *int_ptr);

    printf("\t[+] freeing char_ptr's heap memory..\n");
    free(char_ptr);  // freeing heap memory

    printf("\t[+] allocating another 15 bytes for char_ptr\n");
    char_ptr = (char *) errorchecked_malloc(15);  // Allocating more heap memory.

    strcpy(char_ptr, "new memory");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, *char_ptr);

    printf("\t[-] freeing int_ptr's heap memory..\n");
    free(int_ptr); // Freeing heap memory
    printf("\t[-] freeing char_ptr's heap memory..\n");
    free(char_ptr);
} 

void *errorchecked_molloc(unsigned int size){
    void *ptr;
    ptr = molloc(size);
    if(ptr == NULL){
        fpritnf(stderr, "Error: could not allocate heap memory.\n");
        exit(-1);
    }
    return ptr;
}