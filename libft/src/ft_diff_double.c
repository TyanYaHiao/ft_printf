/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diff_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 18:44:12 by fsmith            #+#    #+#             */
/*   Updated: 2019/07/13 18:44:20 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

double		ft_diff_double(double x0, double x1)
{
	double	d;

	d = x1 - x0;
	if (d < 0)
		return (-1 * d);
	return (d);
}