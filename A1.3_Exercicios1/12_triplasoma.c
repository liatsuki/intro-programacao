#include <stdio.h> // REVER

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int a = N - 2; // a >= 1
    while (a >= 1) {
        int b = a; // b <= a
        while (b >= 1) {
            int c = N - a - b;
            if (c >= 1 && c <= b) { // c <= b garante triplas distintas
                count++;
            }
            b--;
        }
        a--;
    }

    printf("%d\n", count);

    return 0;
}
