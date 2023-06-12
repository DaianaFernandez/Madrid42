/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiferna <daiferna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:22:28 by daiferna          #+#    #+#             */
/*   Updated: 2023/06/11 16:46:23 by daiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				src_length;

	i = 0;
	j = 0;
	src_length = ft_strlen(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_length);
}
/*int	main(void)
{
	char	str[] = "Hola\n";
	char	str2[] = "12345";

	ft_strlcat(str, str2, 8);
	printf("%s", str);

	return (0);
	}*/
