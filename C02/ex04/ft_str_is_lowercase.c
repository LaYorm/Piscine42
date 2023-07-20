/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:19:22 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/03 14:58:31 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		if (str[compt] < 'a' || str[compt] > 'z')
			return (0);
		compt++;
	}
	return (1);
}