/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:42:23 by haitkadi          #+#    #+#             */
/*   Updated: 2021/11/15 15:42:25 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../src/philo.h"

void	philodelone(t_thread *lst)
{
	if (lst == NULL)
		return ;
	free(lst);
}
