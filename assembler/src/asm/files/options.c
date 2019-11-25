/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 02:01:33 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/17 13:16:02 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/asm/asm.h"

void		options(void)
{
	if (!g_data.error)
	{
		if (g_flags.translation)
			print_lines(g_data.lines);
		if (g_flags.exec_size)
			display_exec_code();
	}
}
