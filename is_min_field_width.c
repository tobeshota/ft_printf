/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_min_field_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:58:32 by tobeshota         #+#    #+#             */
/*   Updated: 2023/06/11 12:45:35 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	is_min_field_width(int c)
{
	return (ft_isdigit(c) || c == '*');
}
