#include "fatorial.h"

long fatorial(long n) {
    int fat = 1, i;
    for(i=2; i<=n; i++) {
        fat *= i;
    }
    return fat;
}
