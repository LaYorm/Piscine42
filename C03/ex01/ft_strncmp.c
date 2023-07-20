/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 08:23:52 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/06 14:15:03 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	compt;

	compt = 0;
	while ((s1[compt] || s2[compt]) && compt < n)
	{
		if (s1[compt] != s2[compt])
			return (s1[compt] - s2[compt]);
		else
			compt++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	tab1[] = "10";
	char	tab2[] = "10";
	unsigned int	n = 100000;

	ft_strncmp(tab1, tab2, n);
	printf("%d\n", ft_strncmp(tab1, tab2, n));
	printf("%d", strncmp(tab1, tab2, n));
	return (0);
}*/
