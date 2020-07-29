#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#ifndef MAX
#define MAX 101
#endif
int jump() {
    int n, c[MAX];
    int jumps = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &c[i]);
    }
    for (int i = 0; i < n; i++) {
        if (c[i+1] == 0 || c[i+1] == 1) {
            if (c[i+2] == 0) {
                i = i+1;
                jumps+=1;
            } else if (c[i+1] == 0) {
                jumps+=1;
            } else {
                break;
            }
        } else {
            break;
        }
    } return jumps;
}

int main(int argc, char const *argv[]) {
    printf("%d\n", jump());
    return 0;
}
