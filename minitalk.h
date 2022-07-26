/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:29:08 by akenji-a          #+#    #+#             */
/*   Updated: 2022/07/26 12:36:11 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct byte
{
	unsigned char	b1:1;
	unsigned char	b2:1;
	unsigned char	b3:1;
	unsigned char	b4:1;
	unsigned char	b5:1;
	unsigned char	b6:1;
	unsigned char	b7:1;
	unsigned char	b8:1;
}	t_byte_struct;

int		ft_atoi(const char *nptr);
void	ft_putnbr_fd(int nb, int fd);
void	ft_bzero(void *str, size_t len);
void	ft_usage(void);

#endif