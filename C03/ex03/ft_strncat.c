/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:10:49 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/06 10:18:35 by yrimek           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	compt;
	unsigned int	dest_taille;

	compt = 0;
	dest_taille = ft_strlen(dest);
	while (src[compt] && compt < n)
	{
		dest[dest_taille + compt] = src[compt];
		compt++;
	}
	dest[dest_taille + compt] = '\0';
	return (dest);
}
