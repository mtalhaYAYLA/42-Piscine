/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:52:31 by myayla            #+#    #+#             */
/*   Updated: 2022/09/05 20:43:52 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}
/*
int main()
{
	printf("%d",ft_iterative_factorial(0));
}*/
