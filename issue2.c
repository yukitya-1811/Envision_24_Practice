// Make sure program prints all even numbers from 1 to 40

#include <stdio.h>

int main(){
    int even = 0;
    for(int i = 0; i <= 19; i++){
        even += 2;
        printf("%d\t", even);
    }
    printf("\n");
    return 0;
}
