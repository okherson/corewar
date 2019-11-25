/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsm_table_lexical.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:24:34 by ishyian           #+#    #+#             */
/*   Updated: 2019/09/15 13:14:18 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FSM_TABLE_LEXICAL_H
# define FSM_TABLE_LEXICAL_H
# include "./asm.h"
# include "./fsm_lexical_analysis.h"

struct s_transition	fsm_table[19][15] =
{
	[0][null] = {0, &set_as_finished},
	[0][eol_char] = {0, &create_endline},
	[0][cmd_char] = {1, NULL},
	[0][comment_char] = {3, NULL},
	[0][label_char] = {4, NULL},
	[0][direct_char] = {6, NULL},
	[0][sign] = {11, NULL},
	[0][separator_char] = {0, &create_separator},
	[0][underline_char] = {16, NULL},
	[0][alpha] = {15, NULL},
	[0][reg_aplha] = {13, NULL},
	[0][digits] = {17, NULL},
	[0][space_char] = {0, &set_begin_equal_to_current},
	[0][quote] = {18, NULL},
	[0][other] = {0, &lexical_error},
	[1][null] = {0, &lexical_error_move_back},
	[1][eol_char] = {0, &lexical_error_move_back},
	[1][cmd_char] = {0, &lexical_error_move_back},
	[1][comment_char] = {0, &lexical_error_move_back},
	[1][label_char] = {0, &lexical_error_move_back},
	[1][direct_char] = {0, &lexical_error_move_back},
	[1][sign] = {0, &lexical_error_move_back},
	[1][separator_char] = {0, &lexical_error_move_back},
	[1][underline_char] = {0, &lexical_error_move_back},
	[1][alpha] = {2, NULL},
	[1][reg_aplha] = {2, NULL},
	[1][digits] = {0, &lexical_error_move_back},
	[1][space_char] = {0, &lexical_error_move_back},
	[1][quote] = {0, &lexical_error_move_back},
	[1][other] = {0, &lexical_error_move_back},
	[2][null] = {0, &create_command},
	[2][eol_char] = {0, &create_command},
	[2][cmd_char] = {0, &create_command},
	[2][comment_char] = {0, &create_command},
	[2][label_char] = {0, &create_command},
	[2][direct_char] = {0, &create_command},
	[2][sign] = {0, &create_command},
	[2][separator_char] = {0, &create_command},
	[2][underline_char] = {0, &create_command},
	[2][alpha] = {2, NULL},
	[2][reg_aplha] = {2, NULL},
	[2][digits] = {0, &create_command},
	[2][space_char] = {0, &create_command},
	[2][quote] = {0, &create_command},
	[2][other] = {0, &create_command},
	[3][null] = {0, &lexical_error_move_back},
	[3][eol_char] = {0, &end_of_comment},
	[3][cmd_char] = {3, NULL},
	[3][comment_char] = {3, NULL},
	[3][label_char] = {3, NULL},
	[3][direct_char] = {3, NULL},
	[3][sign] = {3, NULL},
	[3][separator_char] = {3, NULL},
	[3][underline_char] = {3, NULL},
	[3][alpha] = {3, NULL},
	[3][reg_aplha] = {3, NULL},
	[3][digits] = {3, NULL},
	[3][space_char] = {3, NULL},
	[3][quote] = {3, NULL},
	[3][other] = {3, NULL},
	[4][null] = {0, &lexical_error_move_back},
	[4][eol_char] = {0, &lexical_error_move_back},
	[4][cmd_char] = {0, &lexical_error_move_back},
	[4][comment_char] = {0, &lexical_error_move_back},
	[4][label_char] = {0, &lexical_error_move_back},
	[4][direct_char] = {0, &lexical_error_move_back},
	[4][sign] = {0, &lexical_error_move_back},
	[4][separator_char] = {0, &lexical_error_move_back},
	[4][underline_char] = {5, NULL},
	[4][alpha] = {5, NULL},
	[4][reg_aplha] = {5, NULL},
	[4][digits] = {5, NULL},
	[4][space_char] = {0, &lexical_error_move_back},
	[4][quote] = {0, &lexical_error_move_back},
	[4][other] = {0, &lexical_error_move_back},
	[5][null] = {0, &lexical_error_move_back},
	[5][eol_char] = {0, &create_indirect_label},
	[5][cmd_char] = {0, &create_indirect_label},
	[5][comment_char] = {0, &create_indirect_label},
	[5][label_char] = {0, &create_indirect_label},
	[5][direct_char] = {0, &create_indirect_label},
	[5][sign] = {0, &create_indirect_label},
	[5][separator_char] = {0, &create_indirect_label},
	[5][underline_char] = {5, NULL},
	[5][alpha] = {5, NULL},
	[5][reg_aplha] = {5, NULL},
	[5][digits] = {5, NULL},
	[5][space_char] = {0, &create_indirect_label},
	[5][quote] = {0, &create_indirect_label},
	[5][other] = {0, &create_indirect_label},
	[6][null] = {0, &lexical_error_move_back},
	[6][eol_char] = {0, &lexical_error_move_back},
	[6][cmd_char] = {0, &lexical_error_move_back},
	[6][comment_char] = {0, &lexical_error_move_back},
	[6][label_char] = {7, NULL},
	[6][direct_char] = {0, &lexical_error_move_back},
	[6][sign] = {10, NULL},
	[6][separator_char] = {0, &lexical_error_move_back},
	[6][underline_char] = {0, &lexical_error_move_back},
	[6][alpha] = {0, &lexical_error_move_back},
	[6][reg_aplha] = {0, &lexical_error_move_back},
	[6][digits] = {9, NULL},
	[6][space_char] = {0, &lexical_error_move_back},
	[6][quote] = {0, &lexical_error_move_back},
	[6][other] = {0, &lexical_error_move_back},
	[7][null] = {0, &lexical_error_move_back},
	[7][eol_char] = {0, &lexical_error_move_back},
	[7][cmd_char] = {0, &lexical_error_move_back},
	[7][comment_char] = {0, &lexical_error_move_back},
	[7][label_char] = {0, &lexical_error_move_back},
	[7][direct_char] = {0, &lexical_error_move_back},
	[7][sign] = {0, &lexical_error_move_back},
	[7][separator_char] = {0, &lexical_error_move_back},
	[7][underline_char] = {8, NULL},
	[7][alpha] = {8, NULL},
	[7][reg_aplha] = {8, NULL},
	[7][digits] = {8, NULL},
	[7][space_char] = {0, &lexical_error_move_back},
	[7][quote] = {0, &lexical_error_move_back},
	[7][other] = {0, &lexical_error_move_back},
	[8][null] = {0, &lexical_error_move_back},
	[8][eol_char] = {0, &create_direct_label},
	[8][cmd_char] = {0, &create_direct_label},
	[8][comment_char] = {0, &create_direct_label},
	[8][label_char] = {0, &create_direct_label},
	[8][direct_char] = {0, &create_direct_label},
	[8][sign] = {0, &create_direct_label},
	[8][separator_char] = {0, &create_direct_label},
	[8][underline_char] = {8, NULL},
	[8][alpha] = {8, NULL},
	[8][reg_aplha] = {8, NULL},
	[8][digits] = {8, NULL},
	[8][space_char] = {0, &create_direct_label},
	[8][quote] = {0, &create_direct_label},
	[8][other] = {0, &create_direct_label},
	[9][null] = {0, &lexical_error_move_back},
	[9][eol_char] = {0, &create_direct},
	[9][cmd_char] = {0, &create_direct},
	[9][comment_char] = {0, &create_direct},
	[9][label_char] = {0, &create_direct},
	[9][direct_char] = {0, &create_direct},
	[9][sign] = {0, &create_direct},
	[9][separator_char] = {0, &create_direct},
	[9][underline_char] = {0, &create_direct},
	[9][alpha] = {0, &create_direct},
	[9][reg_aplha] = {0, &create_direct},
	[9][digits] = {9, NULL},
	[9][space_char] = {0, &create_direct},
	[9][quote] = {0, &create_direct},
	[9][other] = {0, &create_direct},
	[10][null] = {0, &lexical_error_move_back},
	[10][eol_char] = {0, &lexical_error_move_back},
	[10][cmd_char] = {0, &lexical_error_move_back},
	[10][comment_char] = {0, &lexical_error_move_back},
	[10][label_char] = {0, &lexical_error_move_back},
	[10][direct_char] = {0, &lexical_error_move_back},
	[10][sign] = {0, &lexical_error_move_back},
	[10][separator_char] = {0, &lexical_error_move_back},
	[10][underline_char] = {0, &lexical_error_move_back},
	[10][alpha] = {0, &lexical_error_move_back},
	[10][reg_aplha] = {0, &lexical_error_move_back},
	[10][digits] = {9, NULL},
	[10][space_char] = {0, &lexical_error_move_back},
	[10][quote] = {0, &lexical_error_move_back},
	[10][other] = {0, &lexical_error_move_back},
	[11][null] = {0, &lexical_error_move_back},
	[11][eol_char] = {0, &lexical_error_move_back},
	[11][cmd_char] = {0, &lexical_error_move_back},
	[11][comment_char] = {0, &lexical_error_move_back},
	[11][label_char] = {0, &lexical_error_move_back},
	[11][direct_char] = {0, &lexical_error_move_back},
	[11][sign] = {0, &lexical_error_move_back},
	[11][separator_char] = {0, &lexical_error_move_back},
	[11][underline_char] = {0, &lexical_error_move_back},
	[11][alpha] = {0, &lexical_error_move_back},
	[11][reg_aplha] = {0, &lexical_error_move_back},
	[11][digits] = {12, NULL},
	[11][space_char] = {0, &lexical_error_move_back},
	[11][quote] = {0, &lexical_error_move_back},
	[11][other] = {0, &lexical_error_move_back},
	[12][null] = {0, &lexical_error_move_back},
	[12][eol_char] = {0, &create_indirect},
	[12][cmd_char] = {0, &create_indirect},
	[12][comment_char] = {0, &create_indirect},
	[12][label_char] = {0, &create_indirect},
	[12][direct_char] = {0, &create_indirect},
	[12][sign] = {0, &create_indirect},
	[12][separator_char] = {0, &create_indirect},
	[12][underline_char] = {0, &create_indirect},
	[12][alpha] = {0, &create_indirect},
	[12][reg_aplha] = {0, &create_indirect},
	[12][digits] = {12, NULL},
	[12][space_char] = {0, &create_indirect},
	[12][quote] = {0, &create_indirect},
	[12][other] = {0, &create_indirect},
	[13][null] = {0, &lexical_error_move_back},
	[13][eol_char] = {0, &lexical_error_move_back},
	[13][cmd_char] = {0, &lexical_error_move_back},
	[13][comment_char] = {0, &lexical_error_move_back},
	[13][label_char] = {0, &lexical_error_move_back},
	[13][direct_char] = {0, &lexical_error_move_back},
	[13][sign] = {0, &lexical_error_move_back},
	[13][separator_char] = {0, &lexical_error_move_back},
	[13][underline_char] = {16, NULL},
	[13][alpha] = {15, NULL},
	[13][reg_aplha] = {15, NULL},
	[13][digits] = {14, NULL},
	[13][space_char] = {0, &lexical_error_move_back},
	[13][quote] = {0, &lexical_error_move_back},
	[13][other] = {0, &lexical_error_move_back},
	[14][null] = {0, &lexical_error_move_back},
	[14][eol_char] = {0, &create_registry},
	[14][cmd_char] = {0, &create_registry},
	[14][comment_char] = {0, &create_registry},
	[14][label_char] = {0, &create_label},
	[14][direct_char] = {0, &create_registry},
	[14][sign] = {0, &create_registry},
	[14][separator_char] = {0, &create_registry},
	[14][underline_char] = {16, NULL},
	[14][alpha] = {16, NULL},
	[14][reg_aplha] = {16, NULL},
	[14][digits] = {14, NULL},
	[14][space_char] = {0, &create_registry},
	[14][quote] = {0, &create_registry},
	[14][other] = {0, &create_registry},
	[15][null] = {0, &lexical_error_move_back},
	[15][eol_char] = {0, &create_operation},
	[15][cmd_char] = {0, &create_operation},
	[15][comment_char] = {0, &create_operation},
	[15][label_char] = {0, &create_label},
	[15][direct_char] = {0, &create_operation},
	[15][sign] = {0, &create_operation},
	[15][separator_char] = {0, &create_operation},
	[15][underline_char] = {16, NULL},
	[15][alpha] = {15, NULL},
	[15][reg_aplha] = {15, NULL},
	[15][digits] = {16, NULL},
	[15][space_char] = {0, &create_operation},
	[15][quote] = {0, &create_operation},
	[15][other] = {0, &create_operation},
	[16][null] = {0, &lexical_error_move_back},
	[16][eol_char] = {0, &lexical_error_move_back},
	[16][cmd_char] = {0, &lexical_error_move_back},
	[16][comment_char] = {0, &lexical_error_move_back},
	[16][label_char] = {0, &create_label},
	[16][direct_char] = {0, &lexical_error_move_back},
	[16][sign] = {0, &lexical_error_move_back},
	[16][separator_char] = {0, &lexical_error_move_back},
	[16][underline_char] = {16, NULL},
	[16][alpha] = {16, NULL},
	[16][reg_aplha] = {16, NULL},
	[16][digits] = {16, NULL},
	[16][space_char] = {0, &lexical_error_move_back},
	[16][quote] = {0, &lexical_error_move_back},
	[16][other] = {0, &lexical_error_move_back},
	[17][null] = {0, &lexical_error_move_back},
	[17][eol_char] = {0, &create_indirect},
	[17][cmd_char] = {0, &create_indirect},
	[17][comment_char] = {0, &create_indirect},
	[17][label_char] = {0, &create_label},
	[17][direct_char] = {0, &create_indirect},
	[17][sign] = {0, &create_indirect},
	[17][separator_char] = {0, &create_indirect},
	[17][underline_char] = {16, NULL},
	[17][alpha] = {15, NULL},
	[17][reg_aplha] = {15, NULL},
	[17][digits] = {17, NULL},
	[17][space_char] = {0, &create_indirect},
	[17][quote] = {0, &create_indirect},
	[17][other] = {0, &create_indirect},
	[18][null] = {0, &lexical_error_move_back},
	[18][eol_char] = {18, &eol},
	[18][cmd_char] = {18, NULL},
	[18][comment_char] = {18, NULL},
	[18][label_char] = {18, NULL},
	[18][direct_char] = {18, NULL},
	[18][sign] = {18, NULL},
	[18][separator_char] = {18, NULL},
	[18][underline_char] = {18, NULL},
	[18][alpha] = {18, NULL},
	[18][reg_aplha] = {18, NULL},
	[18][digits] = {18, NULL},
	[18][space_char] = {18, NULL},
	[18][quote] = {0, &create_string},
	[18][other] = {18, NULL},
};

#endif