/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TrainC04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:57:58 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/19 18:48:35 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;
	int	i;

	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr >= 0 && nbr <=9)
		ft_putchar(nbr + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (sign * nb);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while(str[size])
		size++;
	return (size);
}

int	ft_error_base(char *str)
{
	int	size_base;
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	size_base = ft_strlen(str);
	if (size_base < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '-')
			return (0);
		while (j < size_base)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
		
void	ft_putnbr_base(int nb, char *base)
{
	int	size;
	long	nbr;

	nbr = nb;
	size = ft_strlen(base);
	if (ft_error_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= size)
	{
		ft_putnbr_base(nbr / size, base);
		ft_putnbr_base(nbr % size, base);
	}
	if (nbr >= 0 && nbr <= size)
		ft_putchar(base[nbr]);
}

void	ft_atoi_base(char *str, char *base)
{
	long	nb;
	int	size;

	size = ft_strlen(base);
	if (ft_error_base(base) == 0)
		return ;
	nb = ft_atoi(str);
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= size)
	{
		ft_putnbr_base(nb / size, base);
		ft_putnbr_base(nb % size, base);
	}
	if (nb >= 0 && nb <= size)
		ft_putchar(base[nb]);
}


int	main()
{
	int	tab = 758;

	ft_putnbr_base(tab, "0123456789ABCDEF");
}



















