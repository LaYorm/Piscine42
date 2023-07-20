/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:43:32 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/17 12:30:08 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	base_error(char *str);

int	ft_strlen(char *str)
{
	int	taille;

	taille = 0;
	while (str[taille])
		taille++;
	return (taille);
}

int	get_nbr(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	sign;
	int	base_len;

	sign = 1;
	i = 0;
	nb = 0;
	base_len = ft_strlen(base);
	if (base_error(base) == 0)
		return (0);
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] && (ft_check(str[i], base)))
	{
		nb = (nb * base_len) + get_nbr(str[i], base);
		i++;
	}
	return (sign * nb);
}
