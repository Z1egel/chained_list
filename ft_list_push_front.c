/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:11:03 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 18:11:05 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list  *list;

    if (!(list = ft_create_elem(data)))
        return ;
    if (*begin_list)
        list->next = *begin_list;
    *begin_list = list;
}