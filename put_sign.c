/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sign.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:02:30 by tobeshota         #+#    #+#             */
/*   Updated: 2023/06/11 12:46:42 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	put_sign(t_flags *flags)
{
	if (flags->sign == -1)
		ft_putchar_fd('-', STDOUT_FILENO);
	else if (flags->plus_flag == 1)
		ft_putchar_fd('+', STDOUT_FILENO);
	else if (flags->space_flag == 1)
		ft_putchar_fd(' ', STDOUT_FILENO);
	return (1);
}
