#include <unistd.h>
#include <stdio.h>

void	init(int (*arr)[10], int *path);
void	ft_print_path(int *path);
void	recursive(int (*arr)[10], int i, int j, int *path);
void	sort_path(int (*arr)[10], int i, int j);
void	ft_ten_queens_puzzle();

void	init(int (*arr)[10], int *path)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		path[i] = -1;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			arr[i][j] = 0;
			j ++;
		}
		i++;
	}
}

void	ft_print_path(int *path)
{
	int	i;
	char c;

	while(i < 10)
	{
		c = path[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	recursive(int (*arr)[10], int i, int j, int *path)
{
	j = 0;
	int	k;

	k = 0;
	if (i == 10)
	{
		ft_print_path(path);
		return ;
	}

	while (j < 10)
	{
//		write(1, "\n", 1);
//		printf("\ni = %d / j = %d \n", i, j);
//		ft_print_path(path);

		path[i] = j;
		if (arr[i][j] == 1)
		{
			if (j == 10)
				return ;
			return ;
		}
		arr[i][j] = 1;
		sort_path(arr, i, j);
		
		printf("\n");
		for (int m = 0; m < 10; m++)
		{
			for (int n = 0; n < 10; n++)
				printf("%d", arr[m][n]);
			printf("\n");
		}
		for (int n = 0; n < 10; n++)
				printf("%d", path[n]);
			printf("\n");

		recursive(arr, i + 1, j, path);		
		j++;
	}
}

void	sort_path(int (*arr)[10], int i, int j)
{
	int	k;

	k = 0;
	while (k < 10)
	{
		arr[k][j] = 1;
		arr[i][k] = 1;
		if (i - k >= 0 && j - k >= 0)
			arr[i - k][j - k] = 1;
		if (i + k <= 9 && j - k >= 0)
			arr[i + k][j - k] = 1;
		if (i - k >= 0 && j + k <= 9)
			arr[i - k][j + k] = 1;
		if (i + k <= 9 && j + k <= 9)
			arr[i + k][j + k] = 1;
		k++;
	}
}

void	ft_ten_queens_puzzle()
{
	int	arr[10][10];
	int	path[10];


	init(arr, path);
	recursive(arr, 0, 0, path);
/*	recursive(arr, 0, 1, path);
	recursive(arr, 0, 2, path);
	recursive(arr, 0, 3, path);
	recursive(arr, 0, 4, path);
	recursive(arr, 0, 5, path);
	recursive(arr, 0, 6, path);
	recursive(arr, 0, 7, path);
	recursive(arr, 0, 8, path);
*/
}

int	main(void)
{

	ft_ten_queens_puzzle();
}