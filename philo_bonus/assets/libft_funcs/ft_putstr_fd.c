/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:22:45 by haitkadi          #+#    #+#             */
/*   Updated: 2021/11/13 11:22:48 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../src/philo.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], sizeof(s[i]));
		i++;
	}
}
