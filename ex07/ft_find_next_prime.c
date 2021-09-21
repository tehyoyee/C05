#include <stdio.h>
#include <unistd.h>
#include <time.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb)
    {
        if (!(nb % i))
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    int i;

    if (nb <= 2)
        return (2);
    i = nb;
    while(1)
    {
        if (ft_is_prime(i))
            return (i);
        i++;
    }
}

int main(void)
{
    clock_t begin, end;

    for (int i = 0; i < 30; i++)
    {
        printf("%d  :  %d\n", i, ft_find_next_prime(i));
    }
    begin = clock();
    printf("%d  :  %d\n", 222, ft_find_next_prime(215203256));
    end = clock();

    printf("ms : %lf\n", (double)(end-begin));
    printf("s : %lf\n", (double)(end-begin)/CLOCKS_PER_SEC);
    return 0;
}