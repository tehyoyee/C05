#include <stdio.h>
#include <unistd.h>
#include <time.h>

int		ft_is_prime(int nb)
{
	long long	sqrt;
	int			i;

	sqrt = 1;
	i = 2;
	if (nb > 1)
	{
		while (sqrt * sqrt <= (long long)nb)
		{
			sqrt++;
		}
		while (i <= sqrt)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
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
