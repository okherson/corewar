/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:39:52 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:08:30 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"
#include "../../../../../inc/asm/operations.h"

int		is_sub(t_lexem *lexem)
{
	if (!lexem->translation)
	{
		if (lexem->len == 3 && !ft_memcmp(lexem->first_char, "sub", lexem->len))
		{
			lexem->translation = OPERATION_SUB;
			return (1);
		}
	}
	else if (lexem->translation == OPERATION_SUB)
		return (1);
	return (0);
}
