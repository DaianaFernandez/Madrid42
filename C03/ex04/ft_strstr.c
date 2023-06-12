/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiferna <daiferna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:01:55 by daiferna          #+#    #+#             */
/*   Updated: 2023/06/11 16:34:33 by daiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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

char	*ft_strstr(char *str, char *to_find)
{
	int	str_len;
	int	to_find_len;	
	int	i;
	int	j;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	i = 0;
	if (to_find_len == 0)
		return (str);
	while (i <= str_len - to_find_len)
	{
		j = 0;
		while (j < to_find_len && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == to_find_len)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	char	grande[] = "asdfghjkcatsdfghjk";
	char	pequeña[] = "cat";
	char	*result = ft_strstr(grande, pequeña);
	if (result != NULL)
	{
		printf("%p", (void *)result);
	}
	else
	{
		printf("NULL");
	}
	return (0);
}*/
