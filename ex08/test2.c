#include <stdio.h>
#include <unistd.h>
void	init(int (*arr)[10], int *path);

void	init(int (*arr)[10], int *path)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		path[i] = 10;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			arr[i][j] = 1;
			j ++;
		}
		i++;
	}
}
int	main(void)
{
	int	arr[10][10];
	int	path[10];
	init(arr, path);

	for (int m = 0; m < 10; m++)
	{
		for (int n = 0; n < 10; n++)
			printf("%d", arr[m][n]);
		printf("\n");
	}
}