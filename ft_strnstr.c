/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wremelli <nremelli@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 04:07:44 by wremelli          #+#    #+#             */
/*   Updated: 2022/10/16 16:46:45 by wremelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *) big);
	while (*big && little_len <= len--)
	{
		if (!ft_memcmp(big, little, little_len))
			return ((char *) big);
		big++;
	}
	return (NULL);
}
