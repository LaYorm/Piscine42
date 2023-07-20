/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:06:04 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/05 13:56:49 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	compt;

	compt = 0;
	while (str[compt])
	{
		if (str[compt] != '\0')
		{
			if (str[compt] >= 'A' && str[compt] <= 'Z')
				str[compt] = str[compt] + 32;
		}
		compt++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] < '0' || str[i - 1] > '9')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i] >= 'a' && str[i] <= 'z'))
						str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
