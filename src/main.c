#include <stdio.h>

void hanoi_tower(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("Mover disco %i de %c para %c.\n", n, a, b);
        return;
    }
    hanoi_tower(n - 1, a, c, b);
    printf("Mover disco %i de %c para %c.\n", n, a, b);
    hanoi_tower(n - 1, c, b, a);
}

int main()
{
    int n;
    printf("Digite o número de discos: ");
    scanf("%i", &n);
    hanoi_tower(n, 'A', 'B', 'C');
    return 0;
}
