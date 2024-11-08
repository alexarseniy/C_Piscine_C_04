/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 03:48:44 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:33:10 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	i = 0;
	while (base[i] != '-' && base[i] != '+' && base[i])
		i++;
	if (base[i])
		return (0);
	return (1);
}

void	ft_write_nbr(long nbr, char *base, int base_n)
{
	if (nbr / base_n != 0)
		ft_write_nbr(nbr / base_n, base, base_n);
	ft_putchar(base[nbr % base_n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_n;
	long	n;

	base_n = 0;
	if (!ft_is_base_correct(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = (long) nbr * (-1);
	}
	else
		n = nbr;
	while (base[base_n])
		base_n++;
	ft_write_nbr(n, base, base_n);
}
//
//int	main(void)
//{
//	ft_putnbr_base(0, "01");
//	ft_putchar('\n');
//	ft_putnbr_base(-1, "01");
//	ft_putchar('\n');
//	ft_putnbr_base(2, "01");
//	ft_putchar('\n');
//	ft_putnbr_base(-2, "01");
//	ft_putchar('\n');
//	ft_putnbr_base(10, "01");
//	ft_putchar('\n');
//	ft_putnbr_base(-10, "01");
//	ft_putchar('\n');
//	ft_putnbr_base(129034982, "01");
//	ft_putchar('\n');
//	ft_putnbr_base(15, "0123456789ABCDEF");
//	ft_putchar('\n');
//	ft_putnbr_base(16, "0123456789ABCDEF");
//	ft_putchar('\n');
//	ft_putnbr_base(255, "0123456789ABCDEF");
//	ft_putchar('\n');
//	ft_putnbr_base(1, "poniguay");
//	ft_putchar('\n');
//	ft_putnbr_base(1, "");
//	ft_putchar('\n');
//	ft_putnbr_base(1, "11");
//	ft_putchar('\n');
//	ft_putnbr_base(1, "010");
//	ft_putchar('\n');
//	ft_putnbr_base(1, "01-asdasdas");
//	ft_putchar('\n');
//	ft_putnbr_base(7327, "0123456789");
//	ft_putchar('\n');
//	ft_putnbr_base(-2147483648, "0123456789");
//	ft_putchar('\n');
//}
