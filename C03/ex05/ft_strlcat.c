/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:12:11 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/05 13:49:00 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	taille;

	taille = 0;
	while (str[taille])
		taille++;
	return (taille);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	j = ft_strlen(dest);
	i = ft_strlen(src);
	if (j > size)
		return (i + size);
	if (!src)
		return (j);
	if (!size)
		return (ft_strlen(src) + j);
	i = 0;
	while (src[i] && (i + j) < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + ft_strlen(src));
}
