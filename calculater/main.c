/* this is a calculater  programe 
 that is functional calculater
  This-Programe-Created-By-Aksh38 @pandaraf */

#include<stdio.h>

void ad(int a, int b);
void sub(int a, int b);
void mlt(int a, int b);
void div(int a, int b);

int main(){
    int a, b;
    int choice;
    char e = 'exit';
    printf("Enter Two  Num : \n");
    scanf("%d %d", &a, &b);
    printf("|| Calculater ||\n");
    printf(" 1. Addition\n 2. subtraction\n 3. multiplication \n 4. dividation\n e. To Exit");
    scanf("%d", &choice);
  while(choice == e){
    switch (choice)
    {
    case 1:
        ad(a, b);
        break;
    case 2:
        sub(a, b);
        break;
    case 3:
        mlt(a, b);
        break;
    case 4:
        div(a, b);
    default:
        printf(">>>invald \n Try Again>>> \n");
        break;
    }
  }
return 0;
}

void ad(int a, int b){
     int sum = a + b;
     printf("%d\n", sum);
}

void sub(int a, int b){
    int sub = a - b;
    printf("%d\n", sub);
}

void mlt(int a, int b){
    int multi = a * b;
    printf("%d\n", multi);
}

void div(int a, int b){
    int div = a / b;
    printf("%d\n", div);
}