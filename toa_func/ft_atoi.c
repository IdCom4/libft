/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idcornua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:09:20 by idcornua          #+#    #+#             */
/*   Updated: 2019/01/17 18:15:43 by idcornua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] != '\0'
		&& ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	else if (nptr[i] == '+')
		i++;
	i = (sign == 1) ? i : i + 1;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - 48);
		i++;
	}
	return (result * sign);
}

/*
** === MAN ft_atoi ===
** -
** DESCRIPTION:
** ft_atoi converti une chaine de caracteres en sa valeur en int.
** -
** ARGUMENTS:
** [const char *nptr]:
** un pointeur sur le debut de la chaine de caracteres a convertir.
** -
** RETOUR:
** [int]
** ft_atoi renvoie un int correspondant a la chaine de caracteres, ou 0 si elle
** ne commence pas ou n'a pas du tout de valeur chiffree.
*/
