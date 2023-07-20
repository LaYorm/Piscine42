/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TrainC03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:16:28 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/19 16:57:10 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int	size;

	size = 0;
	i = 0;
	while (dest[size])
		size++;
	printf("%d\n", size);
	while (src[i] && i < n)
	{
		dest[size + i] = src [i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
		
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	if (to_find[0] == '\0')
		return(str);
	while (str[i])
	{
		if (str[i] != to_find[y])
			i++;
		while (to_find[y] && str[i] == to_find[y])
		{
			i++;
			y++;
		}
		if (y == ft_strlen(to_find))
			return (&str[i - y]);
	}
	return(0);
}

















int main()
{
	char s1[] = "1234ihwuiri";
	char s2[] = "rinjknlkj";
//	unsigned int	n = 2;

	printf("%s\n", ft_strstr(s1, s2));
}
