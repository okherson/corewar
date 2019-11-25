/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lfork.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:40:04 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:07:55 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"
#include "../../../../../inc/asm/operations.h"

int		is_lfork(t_lexem *lexem)
{
	if (!lexem->translation)
	{
		if (lexem->len == 5 &&
			!ft_memcmp(lexem->first_char, "lfork", lexem->len))
		{
			lexem->translation = OPERATION_LFORK;
			return (1);
		}
	}
	else if (lexem->translation == OPERATION_LFORK)
		return (1);
	return (0);
}
