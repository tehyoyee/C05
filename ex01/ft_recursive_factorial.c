#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb <= 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
    printf("%d", ft_recursive_factorial(0));
        printf("%d", ft_recursive_factorial(1));
            printf("%d", ft_recursive_factorial(-1));
}