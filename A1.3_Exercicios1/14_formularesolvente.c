#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);

    int a = -K;
    while (a <= K) {
        if (a == 0) { a++; continue; }
        int b = -K;
        while (b <= K) {
            if (b == 0) { b++; continue; }
            int c = -K;
            while (c <= K) {
                if (c == 0) { c++; continue; }

                int delta = b*b - 4*a*c;
                if (delta >= 0) {
                    // testa quadrado perfeito
                    int r = 0;
                    while (r*r < delta) r++;
                    if (r*r == delta) {
                        // testa se as raízes são inteiras
                        int x1_num = -b + r;
                        int x2_num = -b - r;
                        if (x1_num % (2*a) == 0 && x2_num % (2*a) == 0) {
                            printf("%d %d %d\n", a, b, c);
                        }
                    }
                }

                c++;
            }
            b++;
        }
        a++;
    }

    return 0;
}
