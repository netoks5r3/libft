/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wremelli <nremelli@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 04:07:41 by wremelli          #+#    #+#             */
/*   Updated: 2022/10/16 16:46:50 by wremelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lenght;

	lenght = ft_strlen(s);
	while (lenght >= 0)
	{
		if (s[lenght] == (unsigned char) c)
			return ((char *) s + lenght);
		lenght--;
	}
	return (NULL);
}
