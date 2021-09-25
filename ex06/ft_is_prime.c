/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:52:52 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/25 17:54:40 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	root;
	int			i;

	root = 1;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (root * root <= (long long)nb)
		root++;
	i = 2;
	while (i <= root)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
