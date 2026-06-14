#include<stdio.h>

int main(int argc, char *argv[]){
    int i, count;
    
    // if(argc < 3)        //If fewer than 3 argument are used 
    //     usage(argv[0]); //display usage message and exit.

        count = atoi(argv[2]);  // convert the second argument into integer 
        printf("Repeating %d times..\n", count);

        for(i = 0; i < count; i++)
          printf("%3d - %s\n", i, argv[1]);  //print The first arg.
}