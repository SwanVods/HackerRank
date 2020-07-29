#include <stdio.h>
#ifndef MAX
#define MAX 100
#endif

int * insertSort(int a[], int n) {
    int i, j, key;
    for (i = n-1; i >= 0; i--) {
        key = a[i];
        j = i+1;
        while (j <= n && (a[j] < key)) {
            a[j-1] = a[j];
            j++;
        }
        a[j-1] = key;
    }
    return a;
} //fix

int sockMerchant() {
    int n, ar[MAX], count = 0;
    int *f;
    int temp = 0;
    // input 1
    scanf(" %d", &n);

    // input 2
    for (int i = 0; i < n; i++) {
        scanf(" %d", &ar[i]);
    }
    // sort
    f = insertSort(ar, n-1);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (ar[i] == ar[j]) {
                ++count;
                ++i;
                break;
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[]) {

    printf("%d ", sockMerchant());
    return 0;
}
