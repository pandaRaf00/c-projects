#include<stdio.h>
#include<string.h>

int main(){
    char messege[20];
    int count, i;

    strcpy(messege, "Hello World!");

    printf("Repeat how many times?");
    scanf("%d", &count);

    for(i = 0; i < count; i++){
        printf("%3d - %s\n", i, messege);
    }

}