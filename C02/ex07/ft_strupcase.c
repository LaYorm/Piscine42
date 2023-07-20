/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:01:58 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/03 16:57:00 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	int	compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		if (str[compt] >= 'a' && str[compt] <= 'z')
			str[compt] = str[compt] - 32;
		compt++;
	}
	return (str);
}
