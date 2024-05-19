#include <stdio.h>

/* 2. Uma loja vende produtos à vista e a prazo (pagamento 30 dias depois da compra). À vista tem um desconto de 5% e a prazo um acréscimo de 10%. 
Faça um programa em C que peça o preço do produto e a forma de pagamento: 1 para à vista e 2 para a prazo. Depois apresente o preço final do produto. */

int main()
{
    double precoFinal;

    double precoProduto;
    printf("Digite o preco do seu produto: \n");
    scanf("%lg", &precoProduto);

    double opcao;
    printf("Digite 1 para pagamento a vista e 2 para pagamento a prazo: \n");
    scanf("%lg", &opcao);

    if (opcao == 1)
    {
        precoFinal = precoProduto * 0.95;
    }
    else if (opcao == 2)
    {
        precoFinal = precoProduto * 1.1;
    }
    else
    {
        printf("Essa opcao nao existe, tente novamente!");
    }

    printf("O preco final do produto: %lg", precoFinal);

    return 0;
}