#include<stdio.h>
#include<string.h>
 
int main(){
    char str_a[20];  // A 20- element character array
	char *pointer;   // A pointer , meant for the char array
	char *pointer2;  // And yet another one
   	
	strcpy(str_a, "Hello, World!\n");
	pointer = str_a; // set the first pointer to the start of the array.
	printf(pointer);

	pointer2 = pointer + 2; // set the second one 2 bytes further one
	printf(pointer2);   // print it 
	strcpy(pointer2, "y you guys\n"); // copy into that  spot.
	printf(pointer); 
	return 0;
}
