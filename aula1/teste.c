#include "fatorial.h" 
#include <stdio.h>

int main(int argc, char* argv[]) {
    int n;


    while(1) {
        scanf("%d", &n);
        if(n == -1)
            break;
        printf("%ld\n", fatorial(n));
    }

}
