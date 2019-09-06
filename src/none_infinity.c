/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   none_infinity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <fsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:18:54 by fsmith            #+#    #+#             */
/*   Updated: 2019/09/06 20:18:54 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_none(t_buf **buf, t_flags fl)
{
	fl.zero = 0;
	fl.precision = -1;
	s_flag("nan", buf, fl);
}

static void	ft_minus_inf(t_buf **buf, t_flags fl)
{
	fl.zero = 0;
	fl.precision = -1;
	s_flag("-inf", buf, fl);
}

static void	ft_plus_inf(t_buf **buf, t_flags fl)
{
	fl.zero = 0;
	fl.precision = -1;
	if (fl.plus)
		s_flag("+inf", buf, fl);
	else if (fl.space)
		s_flag(" inf", buf, fl);
	else
		s_flag("inf", buf, fl);
}

int			ft_double_exception(double n, t_buf **buf, t_flags fl)
{
	if (n != n)
	{
		ft_none(buf, fl);
		return (1);
	}
	else if (n == 1.0 / 0.0)
	{
		ft_plus_inf(buf, fl);
		return (1);
	}
	else if (n == -1.0 / 0.0)
	{
		ft_minus_inf(buf, fl);
		return (1);
	}
	return (0);
}

int			ft_long_double_exception(long double n, t_buf **buf, t_flags fl)
{
	{
		if (n != n)
		{
			ft_none(buf, fl);
			return (1);
		}
		else if (n == 1.0 / 0.0)
		{
			ft_plus_inf(buf, fl);
			return (1);
		}
		else if (n == -1.0 / 0.0)
		{
			ft_minus_inf(buf, fl);
			return (1);
		}
		return (0);
	}
}
