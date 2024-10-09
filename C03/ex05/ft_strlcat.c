/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 06:41:27 by sungor            #+#    #+#             */
/*   Updated: 2024/08/31 06:48:43 by sungor           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	len(char *ptr)
{
	unsigned int	i;

	i = 0;
	while (ptr[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = len(dest);
	while (i < size - 1 && src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (i);
}
