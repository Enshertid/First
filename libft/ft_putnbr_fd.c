/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 21:59:16 by ymanilow          #+#    #+#             */
/*   Updated: 2019/04/18 20:07:35 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int baze;

	baze = 1;
	if (n == -2147483648)
	{
		n = 8;
		ft_putstr_fd((const char*)"-214748364", fd);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		baze = -1;
	}
	if (n / 10)
	{
		ft_putnbr_fd(baze * (n / 10), fd);
		ft_putchar_fd(baze * (n % 10) + '0', fd);
	}
	else
		ft_putchar_fd(baze * (n % 10) + '0', fd);
}
