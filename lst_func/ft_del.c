/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:23:55 by idcornua          #+#    #+#             */
/*   Updated: 2018/11/15 12:25:49 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}

/*
** === MAN ft_del ===
** -
** DESCRIPTION:
** -
** ft_del libere la memoire prealablement dynamiquement allouee pointee par
** content.
** -
** ARGUMENTS:
** -
** [void *content]:
** un pointeur sur le debut de la zone memoire a liberer.
** [size_t content_size] (remarque: argument inutilise ici)
** la taille de la zone memoire pointee.
** -
** RETOUR:
** -
** [void]
** -
*/
