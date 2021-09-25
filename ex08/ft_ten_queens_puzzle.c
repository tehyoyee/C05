/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:41:09 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/25 18:03:24 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check(int *pos, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (pos[i] == pos[j])
			return (0);
		if (i - j == pos[i] - pos[j])
			return (0);
		if (i - j == -pos[i] + pos[j])
			return (0);
		j++;
	}
	return (1);
}

void	ft_print(int *pos)
{
	int		i;
	char	index;

	i = 0;
	while (i < 10)
	{
		index = pos[i] + '0';
		write(1, &index, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_ten_queens(int *pos, int i, int cur, int *result)
{
	if (i == 10)
	{
		ft_print(pos);
		(*result)++;
		return ;
	}
	while (cur < 10)
	{
		pos[i] = cur;
		if (check(pos, i) == 1)
			ft_ten_queens(pos, i + 1, 0, result);
		cur++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	pos[10];
	int	result;

	result = 0;
	ft_ten_queens(pos, 0, 0, &result);
	return (result);
}
