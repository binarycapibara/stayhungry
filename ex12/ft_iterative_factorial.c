/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:05:52 by fjenae            #+#    #+#             */
/*   Updated: 2019/04/19 18:06:26 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int counter;

	i = 1;
	counter = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb >= 0 && nb <= 1)
		return (1);
	else
	{
		while (i < counter)
		{
			nb = nb * i;
			i++;
		}
		return (nb);
	}
}
