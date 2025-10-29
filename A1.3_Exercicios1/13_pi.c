#include <stdio.h> // REVER
#include <math.h>

double fatorial(int n) {
    double f = 1.0;
    int i = 1;
    while (i <= n) {
        f *= i;
        i++;
    }
    return f;
}

int main() {
    int K;
    double soma = 0.0;
    int k = 0;

    scanf("%d", &K);

    while (k <= K) {
        double num = fatorial(4 * k) * (1103 + 26390 * k);
        double den = pow(fatorial(k), 4) * pow(396.0, 4 * k);
        soma += num / den;
        k++;
    }

    double inv_pi = (2 * sqrt(2) / 9801) * soma;
    double pi = 1.0 / inv_pi;

    // Exatamente 16 casas decimais, como o avaliador exige
    printf("%.16lf\n", pi);

    return 0;
}
