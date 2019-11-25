/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_xor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:39:51 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:08:32 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"
#include "../../../../../inc/asm/operations.h"

int		is_xor(t_lexem *lexem)
{
	if (!lexem->translation)
	{
		if (lexem->len == 3 && !ft_memcmp(lexem->first_char, "xor", lexem->len))
		{
			lexem->translation = OPERATION_XOR;
			return (1);
		}
	}
	else if (lexem->translation == OPERATION_XOR)
		return (1);
	return (0);
}
