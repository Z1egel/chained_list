/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:48:10 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 17:48:13 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list  *list;
    t_list  *curptr;

    curptr = *begin_list;
    if (!(list = ft_create_elem(data)))
            return ;
    if (curptr)
    {
        while (curptr->next)
            curptr = curptr->next;
        curptr->next = list;
    }
    else
        *begin_list = list;
}