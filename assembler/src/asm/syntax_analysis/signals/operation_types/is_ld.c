/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ld.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:40:07 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:07:07 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"
#include "../../../../../inc/asm/operations.h"

int		is_ld(t_lexem *lexem)
{
	if (!lexem->translation)
	{
		if (lexem->len == 2 && !ft_memcmp(lexem->first_char, "ld", lexem->len))
		{
			lexem->translation = OPERATION_LD;
			return (1);
		}
	}
	else if (lexem->translation == OPERATION_LD)
		return (1);
	return (0);
}
