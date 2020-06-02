/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfan1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:08:32 by vpozniak          #+#    #+#             */
/*   Updated: 2019/04/05 12:08:33 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	const char *p;

	p = str;
	while (*p)
		p++;
	return (p - str);
}

int		minzero(double src)
{
	long long *tmp;
	long long bit;
	long long j;

	tmp = (long long *)(&src);
	bit = *tmp;
	j = bit >> 63;
	if (j < 0)
		return (1);
	return (0);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		ft_atoi(const char *str)
{
	int		i;
	long	nb;
	int		j;

	i = 0;
	nb = 0;
	j = 1;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\r' || str[i] == '\t' || str[i] == '\f')
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		j = -1;
		if (str[i] == 43)
			j = 1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		if (9223372036854775807 - nb < str[i] - '0')
			return (j == -1 ? 0 : -1);
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * j);
}

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
