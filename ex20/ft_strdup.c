/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:19:49 by fjenae            #+#    #+#             */
/*   Updated: 2019/04/19 18:19:33 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		m;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	m = 0;
	while (m <= i)
	{
		copy[m] = src[m];
		m++;
	}
	return (copy);
}
