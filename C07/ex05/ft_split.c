/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:30:58 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/17 13:42:18 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

int	count_words(char *str, char *charset)
{
	int	i;
	int	wrd;

	i = 0;
	wrd = 0;
	while (str[i])
	{
		if (ft_check(str[i], charset) == 0)
		{
			wrd++;
			while ((ft_check(str[i], charset) == 0) && str[i])
				i++;
		}
		i++;
	}
	return (wrd);
}

char	*ft_strdup(char *src, char *charset, int *pos_str)
{
	int		prem_pos;
	int		i;
	char	*new_tab;

	while (ft_check(src[*pos_str], charset))
		(*pos_str)++;
	prem_pos = *pos_str;
	while (src[*pos_str] && (ft_check(src[*pos_str], charset) == 0))
		(*pos_str)++;
	new_tab = (char *)malloc((*pos_str - prem_pos + 1) * sizeof(char));
	if (!new_tab)
		return (NULL);
	i = 0;
	while ((prem_pos + i) < (*pos_str))
	{
		new_tab[i] = src[prem_pos + i];
		i++;
	}
	new_tab[i] = '\0';
	return (new_tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		pos;
	int		size;
	char	**tab;

	size = count_words(str, charset);
	tab = (char **)malloc((size + 1) * sizeof(char *));
	i = 0;
	pos = 0;
	if (!tab)
		return (NULL);
	tab[size] = 0;
	while (i < count_words(str, charset))
	{
		tab[i] = ft_strdup(str, charset, &pos);
		i++;
	}
	return (tab);
}

/*#include <stdio.h>
int main(int ac, char **av)
{
	(void) ac;

	char **tab;
	int	i;
	int	number;

	tab =ft_split(av[1], av[2]);
	i = 0;
	number = count_words(av[1], av[2]);
	while (i < number)
	{
		printf("||%s||\n", tab[i]);
		i++;
	}	
}*/
