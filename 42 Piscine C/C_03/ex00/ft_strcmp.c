/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:23:46 by myayla            #+#    #+#             */
/*   Updated: 2022/09/03 23:39:31 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*int		main()
{
	char s1[] = "Nada a ver";
	char s2[] = "Teste de Comparacao";
	printf("s12: %d, s21: %d", ft_strcmp(s1, s2), ft_strcmp(s2, s1));
}*/
