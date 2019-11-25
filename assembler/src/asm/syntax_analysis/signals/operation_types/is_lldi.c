/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lldi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:40:00 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:08:16 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"
#include "../../../../../inc/asm/operations.h"

int		is_lldi(t_lexem *lexem)
{
	if (!lexem->translation)
	{
		if (lexem->len == 4 &&
			!ft_memcmp(lexem->first_char, "lldi", lexem->len))
		{
			lexem->translation = OPERATION_LLDI;
			return (1);
		}
	}
	else if (lexem->translation == OPERATION_LLDI)
		return (1);
	return (0);
}
