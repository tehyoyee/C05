/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:50:50 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/25 18:07:21 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;
	long long	nb_n;

	i = 0;
	nb_n = nb;
	if (nb_n <= 0)
		return (0);
	while (i * i <= nb_n)
		i++;
	i--;
	if (i * i == nb_n)
		return (i);
	else
		return (0);
}
