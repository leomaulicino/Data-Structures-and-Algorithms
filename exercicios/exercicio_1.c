#include <stdio.h>

void contagem(int n)
{
    // caso base
    if (n == 0)
    {
        printf("FIM!");
        return;
    }
    // caso recursivo
    // printf("%d\n", n);
    contagem(n - 1);
    printf("%d\n", n);
}
int main()
{
    contagem(10);
    return 0;
}