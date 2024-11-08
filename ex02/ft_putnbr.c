/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 05:03:01 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:32:53 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nb_char;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb_char = '0' + nb;
		write(1, &nb_char, 1);
	}
}
//
//int	main(void)
//{
//	ft_putnbr(0);
//	write(1, "\n", 1);
//	ft_putnbr(1);
//	write(1, "\n", 1);
//	ft_putnbr(-1);
//	write(1, "\n", 1);
//	ft_putnbr(12);
//	write(1, "\n", 1);
//	ft_putnbr(-12);
//	write(1, "\n", 1);
//	ft_putnbr(2147483647);
//	write(1, "\n", 1);
//	ft_putnbr(-2147483648);
//	write(1, "\n", 1);
//}
