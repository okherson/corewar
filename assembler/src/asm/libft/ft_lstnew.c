/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishyian <ishyian@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 13:13:06 by ishyian           #+#    #+#             */
/*   Updated: 2019/05/27 12:26:39 by ishyian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
	ft_bzero(list, sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (content != NULL)
	{
		list->content = ft_memdup(content, content_size);
		if (list->content == NULL)
		{
			free(list);
			return (NULL);
		}
		list->content_size = content_size;
	}
	return (list);
}
