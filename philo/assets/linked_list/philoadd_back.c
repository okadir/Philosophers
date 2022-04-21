/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:26:14 by haitkadi          #+#    #+#             */
/*   Updated: 2022/03/30 20:15:41 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../src/philo.h"

void	philoadd_back(t_thread **lst, t_thread *new)
{
	t_thread	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else if (philosize(*lst) == 1)
	{
		(*lst)->next = new;
		(*lst)->prev = new;
		new->next = *lst;
		new->prev = *lst;
	}
	else
	{
		last = philolast(*lst);
		last->next->prev = new;
		new->next = last->next;
		last->next = new;
		new->prev = last;
	}
}
