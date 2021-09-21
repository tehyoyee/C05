#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    if (nb < 0)
        return (0);
    else if (nb <= 1)
        return (1);
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
}

int main(void)
{
    printf("%d", ft_iterative_factorial(1));
}