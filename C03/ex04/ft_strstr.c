/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:49:48 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/05 13:53:44 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	taille;

	taille = 0;
	while (str[taille])
		taille++;
	return (taille);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	compt;
	int	index;

	if (!to_find[0])
		return (str);
	compt = 0;
	while (str[compt])
	{
		index = 0;
		if (str[compt] != to_find[index])
		{
			compt++;
		}
		while (to_find[index] && str[compt] == to_find[index])
		{
			index++;
			compt++;
		}
		if (index == ft_strlen(to_find))
		{
			return (&str[compt - index]);
		}			
	}
	return (0);
}
