/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:10:04 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/27 11:12:11 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	i;

	a = ft_strlen (dest);
	i = -1;
	while (src[++i])
		dest [a + i] = src[i];
	dest [a + i] = '\0';
	return (dest);
}
