/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_ll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:11:33 by fsmith            #+#    #+#             */
/*   Updated: 2019/09/06 20:11:33 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	*keks(int l, unsigned long long m, unsigned long long nl)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)ft_memalloc(sizeof(char) * (l + 2))))
		return (NULL);
	while (m > 0)
	{
		str[i++] = (nl / m + '0');
		nl = nl % m;
		m = m / 10;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_utoa_ll(unsigned long long n)
{
	unsigned long long	m;
	unsigned long long	nl;
	int					l;

	m = 1;
	nl = n;
	l = 0;
	while (((m * 10) > 0) ? ((nl / 10) / (m) > 0) : 0)
	{
		m = m * 10;
		l++;
	}
	return (keks(l, m, nl));
}
