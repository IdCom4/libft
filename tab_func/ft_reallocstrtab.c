/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reallocstrtab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:49:59 by idcornua          #+#    #+#             */
/*   Updated: 2019/07/12 14:46:20 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_reallocstrtab(char **tab, size_t old_size, size_t new_size)
{
	size_t	i;
	char	**new;

	if (new_size == 0 || !(new = ft_mallstrtab(new_size, 0)))
		return (NULL);
	if (!tab || old_size == 0)
		return (new);
	i = 0;
	while (i < old_size)
	{
		new[i] = tab[i];
		i++;
	}
	free(tab);
	return (new);
}
