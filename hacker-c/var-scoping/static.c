#include<stdio.h>
void function(){ // An Example function, with its own context
    int var = 5;
    static int static_var = 5; // Static variable initialization

    printf("\t[in function] var = %d\n", var);
    printf("\t[in function] static_var = %d\n", static_var);
    var++;            // Add one to var.
    static_var++;     // Add one to static_var.
}

int main(){
    // The main function, with the own context
    int i;
    static int static_var = 1337; // Another static, with different context

    for(i = 0; i < 5; i++){  // loop 5 times.
        printf("[in main] static_var = %d\n", static_var);
        function();  // call the function
    }
}