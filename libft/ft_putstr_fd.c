/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:39:55 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/29 19:57:46 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}

// int	main(void)
// {
// 	char	*s;
// 	int		fd;

// 	s = strdup("hello world!");
// 	fd = 1;
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }
