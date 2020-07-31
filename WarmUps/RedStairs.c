#include <stdio.h>

int stair(int n, int space, int star) {

    if (star <= n) {
        for(int i = 0; i < space; ++i) {
            printf(" ");
        }
        for(int i = 0; i < star; ++i) {
            printf("#");
        }
        printf("\n");

        // Recursion
        return stair(n, space-1, star+1);
    } else {
        return 1;
    }

}
int main(int argc, char const *argv[]) {
    int n;
    scanf(" %d", &n);
    stair(n, n-1, 1);
    return 0;
}
