/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:35:46 by tobeshota         #+#    #+#             */
/*   Updated: 2023/06/12 18:46:18 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_putnbr_base(unsigned long long nb, char *base)
{
	unsigned long long	base_len;

	base_len = ft_strlen(base);
	if (nb < 0)
	{
		put(STDOUT_FILENO, "-", 1);
		nb *= -1;
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putnbr_base(nb % base_len, base);
	}
	else
		put(STDOUT_FILENO, &base[nb], 1);
}
