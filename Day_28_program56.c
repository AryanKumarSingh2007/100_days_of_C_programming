#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    printf("Enter number of elements: ");

    scanf("%d", &n);
printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
