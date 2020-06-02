/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfun2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:08:46 by vpozniak          #+#    #+#             */
/*   Updated: 2019/04/05 12:08:47 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)dest;
	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (dest);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_memalloc(size_t size)
{
	void			*rez;
	unsigned char	*help;
	unsigned int	i;

	i = 0;
	rez = malloc(size);
	if (rez == NULL)
		return (rez);
	help = rez;
	while (i < size)
	{
		help[i] = '\0';
		i++;
	}
	return (rez);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		z;
	char	*str;

	i = -1;
	z = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		ft_strdup(s2);
	if (!s2)
		ft_strdup(s1);
	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[z])
	{
		str[i] = s2[z];
		i++;
		z++;
	}
	str[i] = '\0';
	return (str);
}
