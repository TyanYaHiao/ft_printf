/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:07:50 by fsmith            #+#    #+#             */
/*   Updated: 2019/09/06 20:07:50 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		s;
	char	t;

	i = 0;
	s = 0;
	while (str[i] != '\0')
		i++;
	while (s < i / 2)
	{
		t = str[s];
		str[s] = str[i - s - 1];
		str[i - s - 1] = t;
		s++;
	}
	return (str);
}
