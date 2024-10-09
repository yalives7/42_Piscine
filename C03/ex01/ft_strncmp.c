/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:40:21 by sungor            #+#    #+#             */
/*   Updated: 2024/08/31 07:27:42 by sungor           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		else
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
