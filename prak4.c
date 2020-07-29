#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() {
    char* s = (char*)malloc(512000 * sizeof(s));
    long n;
    long count = 0, mcount = 0;

    scanf(" %s", s);
    scanf(" %ld", &n);
    long len = strlen(s);

    long d = n / len;
    long m = n % len;

    for(int i = 0; i < len; i++) {
        if (s[i] == 'a') {
            if (i < m) {
                ++mcount;
            }
            ++count;
        }
    }
    count = count*d + mcount;
    printf("%ld", count);
}
