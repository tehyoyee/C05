/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:54:54 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/25 17:55:54 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int			i;
	long long	root;

	root = 1;
	i = 2;
	while (root * root <= (long long)nb)
		root++;
	while (i <= root)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
}
