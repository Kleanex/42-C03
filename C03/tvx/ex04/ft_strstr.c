/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:59:39 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/27 12:47:29 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
	i++;
	}
	return (0);
}
#include <stdio.h>

int main()
{
	char str[155] = "Nous sommes le dimanche 24 juillet 2022";
	char to_find[100] = "le";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
