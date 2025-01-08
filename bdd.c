#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string nome;
    string numero;
} pessoa;

int main(void)
{
    pessoa pessoas[3];

    pessoas[0].nome = "Davi";
    pessoas[0].numero = "+1-617-495-1000";

    pessoas[1].nome = "João";
    pessoas[1].numero = "+1-949-468-2750";

    pessoas[2].nome = "Lidia";
    pessoas[2].numero = "+1-617-495-1000";

    string nome = get_string("Nome: ");

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(pessoas[i].nome, nome) == 0)
        {
            printf("Achei %s\n", pessoas[i].numero);
            return 0;
        }
    }
    
    printf("Não achado\n");
    return 1;
}