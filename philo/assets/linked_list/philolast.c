/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philolast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:45:57 by haitkadi          #+#    #+#             */
/*   Updated: 2022/05/12 14:46:10 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../src/philo.h"

t_thread	*philolast(t_thread *lst)
{
	if (lst == NULL)
		return (NULL);
	lst = lst->prev;
	return (lst);
}
