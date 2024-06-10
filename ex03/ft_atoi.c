/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:33:06 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/05 20:40:42 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' \
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*str != 0 && ft_isspace(*str))
		str++;
	while (*str != 0 && (*str == '-' || *str == '+'))
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

//int	main(int argc, char **argv)
//{
//	int	result;
//
//	if (argc == 1)
//	{
//		printf("No has pasado argumentos...\n");
//		return (0);
//	}
//	argv++;
//	while (*argv != 0)
//	{
//		result = ft_atoi(*(argv++));
//		printf("El resultado: %i\n", result);
//	}
//	return (0);
//}
