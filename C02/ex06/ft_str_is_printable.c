/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:47:18 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/03 15:01:00 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	compt;

	compt = 0;
	while (str[compt] != '\0')
	{
		if (str[compt] < ' ' || str[compt] > '~')
			return (0);
		compt++;
	}
	return (1);
}
