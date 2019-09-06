/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrejoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:08:39 by fsmith            #+#    #+#             */
/*   Updated: 2019/09/06 20:08:39 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrejoin(char *s1, char *s2)
{
	char	*str;
	size_t	len;

	len = (size_t)(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(str = ft_strnew(len)))
		return (NULL);
	str = ft_strcat(str, s1);
	str = ft_strcat(str, s2);
	ft_strdel(&s1);
	return (str);
}
