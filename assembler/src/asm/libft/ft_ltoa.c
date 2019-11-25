/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:45:49 by ishyian           #+#    #+#             */
/*   Updated: 2019/02/15 19:11:47 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		calc(long nbr, char *str, size_t *i, int sign)
{
	long	tmp;

	if (nbr > 9 || nbr < -9)
	{
		tmp = nbr % 10 * sign;
		nbr = nbr / 10;
		calc(nbr, str, i, sign);
	}
	else
		tmp = nbr % 10 * sign;
	str[*i] = tmp + '0';
	*i = *i + 1;
}

char			*ft_ltoa(long n)
{
	char	str[20];
	char	*res;
	size_t	i;
	int		sign;

	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		i = i + 1;
		sign = -1;
	}
	else
		sign = 1;
	calc(n, str, &i, sign);
	str[i] = '\0';
	res = ft_strdup(str);
	return (res);
}
