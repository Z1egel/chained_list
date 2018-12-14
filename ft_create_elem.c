/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:38:12 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 17:38:15 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list *list;

    if ((list = malloc(sizeof(t_list))))
    {
        list->data = data;
        list->next = NULL;
        return (list);
    }
    return (NULL);
}