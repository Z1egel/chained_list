/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:55:20 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 18:55:23 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*curptr;
	t_list	*begin_list;

	if (ac < 2)
		return (NULL);
	if (!(list = ft_create_elem(av[--ac])))
		return (NULL);
	begin_list = list;
	curptr = list;
	while (--ac)
	{
		if (!(list = ft_create_elem(av[ac])))
			return (NULL);
		curptr->next = list;
		curptr = list;
	}
	return (begin_list);
}