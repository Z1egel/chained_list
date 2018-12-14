/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:33:51 by mbennis           #+#    #+#             */
/*   Updated: 2018/12/13 17:34:23 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(int argc, char **argv)
{
	t_list	*list;
	t_list	*list_arg;
	t_list	*list_nth;
	t_list	*tmp;
	int  list_size;
	t_list	*list_last;

	list = NULL;
	list = ft_create_elem("start");
	ft_list_push_back(&list, "back");
    ft_list_push_back(&list, "back1");
    ft_list_push_front(&list, "front1");
    ft_list_push_front(&list, "front");

    tmp = list;
	printf("List: ");
    while (tmp)
	{
        printf("%s -> ", tmp->data);
        tmp = tmp->next;
    }

	list_size = ft_list_size(list);
    printf("\nList size = %d\n", list_size);

    list_last = ft_list_last(list);
    if (list_last)
    	printf("The last element of list: %s\n", list_last->data);

    list_nth = ft_list_at(list, 4);
    if (list_nth)
    	printf("The 4th element of list: %s\n", list_nth->data);

	tmp = list;
	printf("Result of foreach: ");
	ft_list_foreach(tmp, ft_print_letter);

	tmp = list;
	printf("\nResult of foreach_if: ");
	ft_list_foreach_if(tmp, ft_print_letter, (void*)"b", ft_list_cmp);

	printf("\nResult of find: ");
	tmp = ft_list_find(tmp, (void*)"s", ft_list_cmp);
	if (tmp)
		printf("%s\n", tmp->data);

	ft_list_remove_if(&list, (void*)"s", ft_list_cmp);
	tmp = list;
	printf("List after remove_if: ");
	while (tmp)
	{
		printf("%s -> ", tmp->data);
		tmp = tmp->next;
	}

    ft_list_reverse(&list);
	printf("\nList after reverse: ");
	while (list)
	{
		printf("%s -> ", list->data);
		list = list->next;
	}

	ft_list_clear(&list);
	printf("\nList after clear: %p\n", list);


    list_arg = ft_list_push_params(argc, argv);
    tmp = list_arg;
	printf("List_arg content: ");
    while (tmp)
	{
		printf("%s -> ", tmp->data);
		tmp = tmp->next;
	}

	return (0);
}