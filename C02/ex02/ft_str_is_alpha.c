/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:16:46 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/03 14:48:24 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		if (str[compt] < 'A' || str[compt] > 'z')
			return (0);
		else if (str[compt] < 'a' && str[compt] > 'Z')
			return (0);
		compt++;
	}
	return (1);
}
