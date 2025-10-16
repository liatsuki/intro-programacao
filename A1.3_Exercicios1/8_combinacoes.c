#include <stdio.h>

int main() {
    int n, r, i=1, comb=1, fator, produto, comb_ant;

    printf("Calculo das combinacoes de N, R a R:\n");
    
    printf("Indique N: ");
    scanf("%d", &n);

    printf("Indique R: ");
    scanf("%d", &r);

    if(n<r || r<1) {
        printf("Erro: N tem de ser maior que R e este maior que 0.\n");
    } else {
        while(i<=r) {
            fator=n-r+i;
            comb_ant = comb;
            produto = comb_ant * fator;
            comb = produto / i;
            printf(" %d*%d=%d, %d/%d=%d\n", comb_ant, fator, produto, produto, i, comb);
            i++;
        }
        printf("Resultado: %d\n", comb);
    }
}