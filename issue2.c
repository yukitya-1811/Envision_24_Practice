/// Make sure program prints all even numbers from 1 to 40

#include <stdio.h>

int main(){
    int even = 0;
    for(int i = 0; i <= 20; i++){
       printf("%d\t", even);
               even+=2;//updation error
    }
    printf("\n");
    return 0;
}
