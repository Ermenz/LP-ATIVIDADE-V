#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

float estoqueQuantidade(int quantidade, float preco, float *somaQuantidade, float *somaPreco) {
    *somaQuantidade += quantidade;
    *somaPreco += quantidade * preco;

    return *somaQuantidade;
}

void estoqueConsulta(float somaQuantidade, float somaPreco) {
    printf("Quantidade de produto %.2f\n", somaQuantidade);
    printf("Preco do Material %.2f\n", somaPreco);
}

float retirada(float *somaQuantidade, int retirar, float *somaPreco, float precoUnitario) {
    if (*somaQuantidade >= retirar) {
        *somaQuantidade -= retirar;
        *somaPreco -= retirar * precoUnitario;
        return retirar;
    } else {
        printf("Quantidade insuficiente em estoque.\n");
        return 0; 
    }
}

void datadevenda(char *data, char *dataRetirada) {
    printf("Ultima que foi adicionada o produto %s\n", data);
    printf("\n");
    printf("Ultima da de retirada do produto%s", dataRetirada);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    int retirar;
    float precoUnitario;
    int quantidade = 0;
    float somaQuantidade = 0;
    float somaPreco = 0;
    char data[50];
    char dataRetirada[50];
    float retirado = 0; 

    printf("----------------------------------TABELA DE COMANDOS-----------------------------------\n");
    printf("1 - Deposito\n");
    printf("2 - Consultar quantidade e preco\n");
    printf("3 - Retirar\n");
    printf("4 - Consultar última data que foi adicionada mercadoria e a ultima data que retirada\n");
    printf("5 - Sair do programa\n");
      printf("-------------------------------------------------------------------------------------\n");
    do {
        printf("Informe uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        	
            case 1: {
                printf("Informe a quantidade que deseja adicionar: ");
                scanf("%d", &quantidade);

                printf("Informe o preço por unidade do produto: ");
                scanf("%f", &precoUnitario);

                fflush(stdin);
                printf("Informe a data que foi adicionado o produto: ");
                gets(data);

                somaQuantidade = estoqueQuantidade(quantidade, precoUnitario, &somaQuantidade, &somaPreco);
                break;
            }
            case 2:
            	
                estoqueConsulta(somaQuantidade, somaPreco);
                break;

            case 3: {
            	
                printf("Informe quantidade que deseja retirar: ");
                scanf("%d", &retirar);
                
                fflush(stdin);
                printf("informe a data de retirada do produto");
                gets(dataRetirada);
                
                
                retirado = retirada(&somaQuantidade, retirar, &somaPreco, precoUnitario);
                if (retirado > 0) {
                    printf("Retirado com sucesso: %.f\n", retirado);
                }
                break;
            }
            case 4: {
                datadevenda(data, dataRetirada); 
                break;
            }
            case 5:
                printf("FECHANDO PROGRAMA\n");
                break;

            default:
                printf("OPÇÃO INVÁLIDA\n");
                break;
        }

    } while (opcao != 5);

    return 0;
}
