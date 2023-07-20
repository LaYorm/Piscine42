/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:00:59 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/09 10:40:57 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	int		size_src;
	int		i;
	char	*new_tab;

	i = 0;
	size_src = ft_strlen(src);
	new_tab = malloc (size_src * sizeof(char));
	if (new_tab == 0)
		return (0);
	while (src[i])
	{
		new_tab[i] = src[i];
		i++;
	}
	new_tab[i] = '\0';
	return (new_tab);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", argv[1]);
	printf("%s\n", ft_strdup(argv[1]));
}*/
