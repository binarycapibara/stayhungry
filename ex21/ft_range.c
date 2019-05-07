/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:21:39 by fjenae            #+#    #+#             */
/*   Updated: 2019/04/19 18:24:24 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ar;
	int i;

	if (min >= max)
		return (0);
	ar = (int *)malloc(sizeof(int) * (max - min));
	if (ar == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
