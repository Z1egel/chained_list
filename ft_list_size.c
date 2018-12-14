/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:27:23 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 18:27:25 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int     len;

    len = 0;
    if (begin_list)
    {
        while(begin_list)
        {
            len++;
            begin_list = begin_list->next;
        }
        return (len);
    }
    return (0);
}