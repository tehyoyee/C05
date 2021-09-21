#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;

    if (nb <= 0)
        return (0);
    while(i * i <= nb)
        i++;
    i--;
    if (i * i == nb)
        return (i);
    else
        return (0);
}

int main(void)
{
    for (int i = 0; i < 20; i++)
        printf("%d : %d\n", i, ft_sqrt(i));
    printf("%d : %d\n", 100000, ft_sqrt(2151253432));
}