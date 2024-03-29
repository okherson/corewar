/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dir.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:39:36 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/14 14:32:33 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"

int		is_dir(t_lexem *lexem)
{
	return (lexem->type == DIRECT || lexem->type == DIRECT_LABEL);
}
