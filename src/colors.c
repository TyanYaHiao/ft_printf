/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmills <kmills@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:18:18 by kmills            #+#    #+#             */
/*   Updated: 2019/09/07 12:53:46 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	color(t_buf **buf, const char *restrict *format)
{
	int	len;

	if (!ft_strncmp(*format, "{red}", (len = 5)))
		put_str_to_buf(buf, RED);
	else if (!ft_strncmp(*format, "{green}", (len = 7)))
		put_str_to_buf(buf, GREEN);
	else if (!ft_strncmp(*format, "{black}", (len = 7)))
		put_str_to_buf(buf, BLACK);
	else if (!ft_strncmp(*format, "{white}", (len = 7)))
		put_str_to_buf(buf, WHITE);
	else if (!ft_strncmp(*format, "{yellow}", (len = 8)))
		put_str_to_buf(buf, YELLOW);
	else if (!ft_strncmp(*format, "{blue}", (len = 6)))
		put_str_to_buf(buf, BLUE);
	else if (!ft_strncmp(*format, "{purple}", (len = 8)))
		put_str_to_buf(buf, PURPLE);
	else if (!ft_strncmp(*format, "{cyan}", (len = 6)))
		put_str_to_buf(buf, CYAN);
	else if (!ft_strncmp(*format, "{eoc}", (len = 5)))
		put_str_to_buf(buf, RESET);
	*format += len;
}
