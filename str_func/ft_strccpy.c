/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:03:46 by idcornua          #+#    #+#             */
/*   Updated: 2018/12/06 16:22:56 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dest, const char *src, int c)
{
	unsigned char	*uc_dest;
	unsigned char	*uc_src;
	unsigned int	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	while (uc_src[i] != (unsigned char)c && uc_src[i] != '\0')
	{
		uc_dest[i] = uc_src[i];
		i++;
	}
	uc_dest[i] = '\0';
	return ((char *)uc_dest);
}

/*
** === MAN ft_strccpy ===
** -
** DESCRIPTION:
** -
** ft_strccpy copie la chaine de caracteres src dans celle pointee par dest en
** partant du principe qu'elle a assez de memoire allouee.
** Si le caractere c est rencontré lors de la copie, celle ci s'arrete.
** -
** ARGUMENTS:
** -
** [void *dest]:
** la chaine de caracteres dans laquelle copier.
** [const void *src]:
** la chaine de caracteres a copier.
** [int c]:
** le caractere arretant la copie si trouvé.
** -
** RETOUR:
** -
** [char *]:
** ft_strccpy renvoie NULL si dest ou src sont NULL, sinon renvoie dest.
** -
*/
