// Exercício disponível em: https://olimpiada.ic.unicamp.br/pratique/p2/2012/f1/frequencia/

#include <stdio.h>

int main()
{

    int n, aux;
    int cont = 0;
    int num[100000];

   scanf("%i", &n) ; 

    for (int i = 1; i <= n; i++)
    {
    scanf("%i", &aux); 
        num[i] = aux;
    }

    for (int i = 1, j = 0; j < n; --i, j++)
    {
        if (num[i] != num[j])
            cont++;
    }
    printf("%i", cont);
    return 0;
}
