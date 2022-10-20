/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:08:06 by myayla            #+#    #+#             */
/*   Updated: 2022/09/03 23:41:50 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *string)
{
	int	i;

	i = 0;
	while (*string)
	{
		i++;
		string++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_len(dest);
	while (*src)
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "Benguerir";
	char dest[] = "1337 ";
	printf("%s", ft_strcat(dest, src));
}*/
