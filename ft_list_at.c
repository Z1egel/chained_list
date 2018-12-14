/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 19:41:45 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 19:41:46 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list && nbr > 0)
	{
		while (nbr - 1)
		{
			begin_list = begin_list->next;
			nbr--;
		}
		return (begin_list);
	}
	return (NULL);
}