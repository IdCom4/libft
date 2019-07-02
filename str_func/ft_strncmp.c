/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:57:55 by idcornua          #+#    #+#             */
/*   Updated: 2019/02/07 14:13:30 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					i;
	const unsigned char		*s1b;
	const unsigned char		*s2b;

	s1b = (const unsigned char *)s1;
	s2b = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1b[i] == s2b[i] && s1b[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1b[i] - s2b[i]);
}
