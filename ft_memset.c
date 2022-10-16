/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wremelli <nremelli@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 02:49:52 by wremelli          #+#    #+#             */
/*   Updated: 2022/10/16 16:45:59 by wremelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char				*cptr;
	unsigned int		i;

	i = 0;
	cptr = (char *) s;
	while (i < n)
	{
		cptr[i] = c;
		i++;
	}
	return ((void *) cptr);
}
