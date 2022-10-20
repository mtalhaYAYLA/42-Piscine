/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:48:02 by myayla            #+#    #+#             */
/*   Updated: 2022/09/05 22:03:24 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power <= -1)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power -1)));
	else
		return (nb);
}
/*
int main()
{
	printf("%d",ft_recursive_power(5, 1));
}*/
