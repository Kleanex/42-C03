/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:36:41 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/27 17:53:57 by dosteine         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	i;

	a = ft_strlen (dest);
	i = 0;
	while (src[i] && nb > 0)
	{
		dest [a + i] = src[i];
		i++;
		nb--;
	}
	dest [a + i] = '\0';
	return (dest);
}
