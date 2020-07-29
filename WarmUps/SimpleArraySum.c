#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n;
    scanf(" %d", &n);
    int arr[n];
    int sum = 0;

    fflush(stdin);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);
    return 0;
}
