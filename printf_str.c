/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:36:13 by tobeshota         #+#    #+#             */
/*   Updated: 2023/06/11 12:45:47 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_str(const char **format, int *written_len)
{
	int	len_upto_per;

	len_upto_per = strlen_upto_per(*format);
	put(STDOUT_FILENO, *format, len_upto_per);
	*format += len_upto_per;
	*written_len += len_upto_per;
}
