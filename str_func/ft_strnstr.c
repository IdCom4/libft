/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:36:50 by idcornua          #+#    #+#             */
/*   Updated: 2018/11/09 15:51:10 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long i;
	unsigned long n;

	if (ft_strlen(little) == 0)
		return ((char *)(big));
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		n = 0;
		while (big[i + n] == little[n] && i + n < len && big[i + n] != '\0')
		{
			n++;
		}
		if (little[n] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}
