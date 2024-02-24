#include <stdio.h>

int main(){
    // Print all even numbers from 1 to 40
    int even = 0;
    for(int i = 0; i <= 20; i++){
        even *= 2;
        printf("%d : %d\n", i+1, even);
    }
    return 0;
}