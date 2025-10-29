#include <stdio.h> // REVER
#include <math.h>

int main()
{
    int N, i, primo = 1;

    scanf("%d", &N);

    if (N <= 1) {
        printf("1\n");
        return 0;
    }

    for (i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            primo = 0;
            printf("%d\n", i);
            break;
        }
    }

    if (primo)
        printf("0\n");

    return 0;
}
