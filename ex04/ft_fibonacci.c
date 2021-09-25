/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:49:15 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/25 17:50:01 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibo(int index, int a, int b)
{
	if (index == 1)
		return (0);
	if (index == 2)
		return (b);
	return (ft_fibo(index - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (0);
	return (ft_fibo(index, 0, 1));
}
