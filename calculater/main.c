/* this is a calculater  programe 
 that is functional calculater
  This-Programe-Created-By-Aksh38 @pandaraf */

#include<stdio.h>

void ad(int a, int b);

int main(){
    int a, b;
    printf("Enter Two  Num : \n");
    scanf("%d %d", &a, &b);
    ad(a, b);
return 0;
}

void ad(int a, int b){
     int sum = a + b;
     printf("%d\n", sum);
}
