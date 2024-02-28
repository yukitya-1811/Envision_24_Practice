// print correct factorial of the variable "num"

#include<stdio.h>
int factorial(int n){
    if(n == 0 || n == 1)//modified the logic
        return 1;
    else
        return n*factorial(n-1);
}

int main(void){
    int num = 6;
    printf("%d\n", factorial(num));
}
