/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:54:45 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/27 10:26:09 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest [i+size] = src[i];
		i++;	
	}
	return (dest);	
	
}
#include <stdio.h>

int main(void)
{
	char	dest[20] = "ABCD";
	char	src[10] = "1234";

	printf("%i", ft_strlcat (dest, src, 3));
	return (0);
}
