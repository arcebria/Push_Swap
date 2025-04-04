/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcebria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:44:58 by arcebria          #+#    #+#             */
/*   Updated: 2024/11/25 15:45:00 by arcebria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
}
/*
#include <stdio.h>
int main(void)
{
    t_list    *node = ft_lstnew("hola");
    t_list    *node2 = ft_lstnew("nuevo hola");

    ft_lstadd_front(&node, node2);
    printf("%s \n", (char *)node->next);
    free(node);
    return (0);
}*/
