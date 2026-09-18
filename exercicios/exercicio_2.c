#include <stdio.h>

int somatoria(int n)
{
    // caso base
    if (n == 0) return 0;
    // caso recursivo
    return n + somatoria(n - 1);
}
int main()
{
    printf("%d", somatoria(5));
    return 0;
}