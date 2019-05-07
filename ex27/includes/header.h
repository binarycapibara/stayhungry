/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:42:16 by fjenae            #+#    #+#             */
/*   Updated: 2019/04/19 17:43:30 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define BUF_SIZE 4098
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_display_file(int fd);

#endif
