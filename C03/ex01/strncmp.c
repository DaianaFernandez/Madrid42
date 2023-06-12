/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiferna <daiferna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:28:53 by daiferna          #+#    #+#             */
/*   Updated: 2023/06/11 16:28:10 by daiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (i == n)
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
int	main(void)
{
	int	result = ft_strncmp("yyyarusel", "yyyzillon", 4);
	printf("%d", result);
	return (0);
	}
