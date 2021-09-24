#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
    long long   i;
    long long   nb_n;

    i = 0;
    nb_n = nb;
    if (nb_n <= 0)
        return (0);
    while(i * i <= nb_n)
        i++;
    i--;
    if (i * i == nb_n)
        return (i);
    else
        return (0);
}

int main(void)
{
    for (int i = 0; i < 20; i++)
        printf("%d : %d\n", i, ft_sqrt(i));
    printf("%d : %d\n", 100000, ft_sqrt(1600000000));
}