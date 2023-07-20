/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:35:53 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/03 15:14:52 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str)
{
	unsigned int	taille;

	taille = 0;
	while (str[taille] != '\0')
	{
		taille ++;
	}
	return (taille);
}

unsigned int	ft_strlcpy(char	*dest, char *src, unsigned int size)
{
	unsigned int	compt;

	if (size == 0)
		return (ft_strlen(src));
	compt = 0;
	while (src[compt] && compt < size - 1)
	{
		dest[compt] = src[compt];
		compt++;
	}
	dest[compt] = '\0';
	return (ft_strlen(src));
}
