/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:34:18 by myayla            #+#    #+#             */
/*   Updated: 2022/09/07 15:46:49 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc >= 2)
	{
		while (argv[j])
		{
			while (argv[j][i])
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			j++;
		}
	}
	return (0);
}
