/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_or.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:39:58 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:08:20 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"
#include "../../../../../inc/asm/operations.h"

int		is_or(t_lexem *lexem)
{
	if (!lexem->translation)
	{
		if (lexem->len == 2 && !ft_memcmp(lexem->first_char, "or", lexem->len))
		{
			lexem->translation = OPERATION_OR;
			return (1);
		}
	}
	else if (lexem->translation == OPERATION_OR)
		return (1);
	return (0);
}
