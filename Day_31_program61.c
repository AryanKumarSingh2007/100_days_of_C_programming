#include <stdio.h>

int main() {
    int n, i, key, index = -1;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        printf("Found at index %d", index);
    }
    else {
        printf("-1");
    }

    return 0;
}