/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:06:43 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/10 14:33:43 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-5));
}*/
