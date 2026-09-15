#include <stdio.h>

int main() {
    long long n;
    int digit, i, max = 0, most;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            most = i;
        }
    }

    printf("Most occurring digit = %d", most);

    return 0;
}