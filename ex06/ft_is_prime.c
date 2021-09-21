#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb < 2)
        return (0);
    i = 2;
    while (i < nb)
    {
        if (!(nb % i))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    for (int i = 0; i < 30; i++)
        printf("%d  :  %d\n", i, ft_is_prime(i));
}