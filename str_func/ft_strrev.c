/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:59:13 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/17 14:07:13 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		beg;
	int		end;
	char	tmp;

	beg = 0;
	end = (int)ft_strlen(str) - 1;
	while (beg < end)
	{
		tmp = str[beg];
		str[beg] = str[end];
		str[end] = tmp;
		beg++;
		end--;
	}
	return (str);
}
