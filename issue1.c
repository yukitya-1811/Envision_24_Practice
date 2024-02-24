#include <stdio.h>

void func(int c){
    float x = 0;
    for(int i = 0; i < c; i++){
        x += 0.5;
        printf("%d", x);
    }
}

int main(){
    // Printing numbers up to a fraction
    int a = 10;
    int b = 20;

    float c = (float)a/b;
    
    func(c);
    printf("%d\n", c);

    return 0;
}