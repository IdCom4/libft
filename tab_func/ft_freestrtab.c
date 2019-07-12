/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrtab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:00:59 by idcornua          #+#    #+#             */
/*   Updated: 2019/07/12 14:37:04 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_freestrtab(char **tab, size_t size, int fullf)
{
	size_t i;

	if (!tab || size == 0)
		return (NULL);
	i = 0;
	while (i < size && tab[i])
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	if (fullf)
		free(tab);
	return (NULL);
}

/*
** === MAN ft_freestrtab ===
** -
** DESCRIPTION:
** -
** ft_freestrtab libere la memoire prealablement dynamiquement allouee de
** chaque chaine de caracteres pointees par tab, puis, selon fullf, tab lui
** meme.
** -
** ARGUMENTS:
** -
** [char **tab]:
** un pointeur sur la premiere chaine de caracteres a liberer.
** [size_t size]
** le nombre de chaines de caracteres pointee par tab.
** [int fullf]
** in int permettant de choisir de liberer tab lui meme, ou non.
** -
** RETOUR:
** -
** [void *]
** ft_freestrtab renvoie NULL dans tous les cas.
** -
*/
