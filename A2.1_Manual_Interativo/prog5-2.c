#include <stdio.h>

int Menu()
{
    int opcao;
    /* mostrar as opções do menu */
    printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
    printf("\nOpcao: ");
    scanf("%d",&opcao);
    /* retornar a opção seleccionada */
    return opcao;
}

int main()
{
	int opcao;

	opcao=Menu(); // chama a função "menu"
	
	while(opcao>0)
    {
         /* ver qual é a opção */
        if(opcao==1)
            printf("Opcao escolhida A");
        else if(opcao==2)
            printf("Opcao escolhida B");
        else if(opcao==3)
            printf("Opcao escolhida C");
        else
            printf("Opcao invalida");

		opcao=Menu(); // chama novamente a função "menu"
	}
    printf("Fim do programa.");
}