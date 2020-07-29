#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    long bigint[10];
    long sum = 0;
    int n;

    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %ld", &bigint[i]);
        sum += bigint[i];
    }
    printf("%ld\n", sum);
    return 0;
}
