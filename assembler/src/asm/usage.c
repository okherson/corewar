/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 13:33:14 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:11:38 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

void		usage(void)
{
	ft_printf("Usage:\t");
	ft_printf("$>./asm <input_file>\n");
	ft_printf("\t$>./asm <input_file_0> <input_file_1> <input_file_n>\n\n");
	ft_printf("\tflag -t for display translations\n");
	ft_printf("\tflag -s for display exec size code\n");
}
