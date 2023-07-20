/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:05:14 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/05 09:33:28 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		if (str[compt] >= 'A' && str[compt] <= 'Z')
			str[compt] = str[compt] + 32;
		compt++;
	}
	return (str);
}
