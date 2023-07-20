/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:51:01 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/10 14:32:12 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	taille;

	taille = 0;
	while (str[taille])
	{
		taille++;
	}
	return (taille);
}

int	ft_error(char *str)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(str);
	i = 0;
	if (base_len < 2)
		return (0);
	while (str[i])
	{
		j = i + 1;
		while (j < base_len)
		{
			if ((str[i] == str[j]) || (str[i] == '+' || str[i] == '-'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	limit_minus(long int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= ft_strlen(base))
	{
		limit_minus(nb / ft_strlen(base), base);
		limit_minus(nb % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nb]);
}		

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (ft_error(base) == 0)
		return ;
	if (nbr >= 0 && nbr < base_len)
	{
		ft_putchar(base[nbr]);
	}
	else if (nbr == -2147483648)
	{
		limit_minus(nbr, base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr * -1, base);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}

/*#include <stdio.h>
int		main()
{
	int	nbr;
	char	tab[] = "0123456789ABCDEF";
	char	tab2[] = "poneyvif";

	nbr = -2147483648;
	ft_putnbr_base(nbr, tab);
	ft_putnbr_base(nbr, tab2);
	return (0);
}*/
