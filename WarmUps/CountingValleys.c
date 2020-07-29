#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int countingValleys() {
    int n, ucount = 0, dcount = 0;
    int count = 0;
    char* s = malloc(sizeof(s));
    scanf(" %d", &n);
    scanf(" %s", s);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'D') {
            dcount += 1;
        } else if (s[i] == 'U') {
            if (dcount <= 0) {
                dcount -= 1;
            } else {
                ucount+=1;
            }
        }
        printf("%d %d\n", ucount, dcount);
        if ((dcount != 0 && ucount != 0) && dcount - ucount == 0) {
            count += 1;
            ucount = dcount = 0;
            printf("ij\n");
        }
    }
    return count;
}

int main(int argc, char const *argv[]) {
    printf("%d\n", countingValleys());
    return 0;
}
