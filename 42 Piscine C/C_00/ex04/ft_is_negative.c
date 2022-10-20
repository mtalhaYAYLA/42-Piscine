/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:07:27 by myayla            #+#    #+#             */
/*   Updated: 2022/08/24 20:07:29 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int x)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (x >= 0)
	{
		write (1, &pos, 1);
	}
	else
	{
		write (1, &neg, 1);
	}
}
