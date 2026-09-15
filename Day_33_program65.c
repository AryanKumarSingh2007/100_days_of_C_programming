#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int low, high, mid, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = mid;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found != -1) {
        printf("Found at index %d", found);
    }
    else {
        printf("-1");
    }

    return 0;
}