#include <stdio.h>

int main() {
    int n, r, i, arranjos=1;

    printf("Calculo dos arranjos de N, R a R:\n");
    
    printf("Indique N: ");
    scanf("%d", &n);

    printf("Indique R: ");
    scanf("%d", &r);

    i = n-r+1;

    if(n<r || r<1) {
        printf("Erro: N tem de ser maior que R e este maior que 0.\n");
    } else {
        while(i<=n) {
            arranjos*=i;
            printf("  i=%d; arranjos=%d\n", i, arranjos);
            i++;
        }
        
        printf("Resultado: %d\n", arranjos);
    }

}