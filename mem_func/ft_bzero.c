/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:16:24 by idcornua          #+#    #+#             */
/*   Updated: 2018/12/24 14:32:09 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *s2;

	s2 = s;
	while (n != 0)
	{
		s2[n - 1] = 0;
		n--;
	}
}

/*
** === MAN ft_bzero ===
** -
** DESCRIPTION:
** -
** ft_bzero met a 0 la zone memoire pointee par s.
** -
** ARGUMENTS:
** -
** [void *s]:
** un pointeur sur le debut de la zone memoire a mettre a 0.
** [size_t n]:
** la longeur de la zone memoire a mettre a 0.
** -
** RETOUR:
** -
** [void]
** -
*/
