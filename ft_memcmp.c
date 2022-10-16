/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wremelli <nremelli@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 04:08:12 by wremelli          #+#    #+#             */
/*   Updated: 2022/10/16 16:53:56 by wremelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*this;
	unsigned char	*that;
	unsigned int	i;

	this = (unsigned char *) s1;
	that = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (*this != *that)
			return (*this - *that);
		this++;
		that++;
		i++;
	}
	return (0);
}
