/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:51:55 by idcornua          #+#    #+#             */
/*   Updated: 2018/12/06 17:16:03 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndel(char *s, int direction, size_t to_remove)
{
	char	*temp;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < to_remove)
		return (NULL);
	if (direction >= 0)
	{
		temp = ft_strdup(&s[to_remove]);
		ft_strdel(&s);
		return (temp);
	}
	temp = ft_strndup(s, ft_strlen(s) - to_remove);
	ft_strdel(&s);
	return (temp);
}
