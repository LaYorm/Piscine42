/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 08:46:48 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/06 10:17:03 by yrimek           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	compt;
	int	dest_taille;

	compt = 0;
	dest_taille = ft_strlen(dest);
	while (src[compt])
	{
		dest[dest_taille + compt] = src[compt];
		compt++;
	}
	dest[dest_taille + compt] = '\0';
	return (dest);
}
