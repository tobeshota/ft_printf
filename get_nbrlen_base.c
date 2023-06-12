/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nbrlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:17:57 by tobeshota         #+#    #+#             */
/*   Updated: 2023/06/12 18:45:41 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	get_nbrlen_base(unsigned long long ullnb, char *base, t_flags *flags)
{
	unsigned long long	base_len;

	base_len = ft_strlen(base);
	if (ullnb < 0)
	{
		ullnb *= -1;
		flags->args += 1;
	}
	if (ullnb >= base_len)
	{
		get_nbrlen_base(ullnb / base_len, base, flags);
		get_nbrlen_base(ullnb % base_len, base, flags);
	}
	else
		flags->args += 1;
}
