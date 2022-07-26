/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:39:06 by akenji-a          #+#    #+#             */
/*   Updated: 2022/07/26 06:18:14 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"minitalk.h"

static void	*ft_memset(void *str, int c, size_t len)
{
	size_t	cont;

	cont = 0;
	while (cont < len)
	{
		((unsigned char *)str)[cont] = c;
		cont++;
	}
	return (str);
}

void	ft_bzero(void *str, size_t len)
{
	ft_memset(str, '\0', len);
}

void	ft_usage(void)
{
	write(1, "\nUSAGE: ./client <PID> <MESSAGE>\n\n", 34);
}