#include <stdio.h>
#include <unistd.h>

int ft_fibo(int index, int a, int b)
{
    if (index == 1)
        return (0);
    if (index == 2)
        return (b);
    return (ft_fibo(index - 1, b, a + b));
}

int ft_fibonacci(int index)
{
    if (index < 0)
        return (0);
    ft_fibo(index, 0, 1);
}

int main(void)
{
    printf("%d", ft_fibonacci(6));
}