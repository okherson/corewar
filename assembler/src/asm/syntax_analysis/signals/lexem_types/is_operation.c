/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:06:00 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/14 14:28:04 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"

int		is_operation(t_lexem *lexem)
{
	return (lexem->type == OPERATION);
}
