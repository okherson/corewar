/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_endline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:39:54 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/14 19:28:22 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../../inc/asm/asm.h"

int		is_endline(t_lexem *lexem)
{
	return (lexem->type == ENDLINE);
}
