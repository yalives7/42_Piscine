/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:33:01 by sungor            #+#    #+#             */
/*   Updated: 2024/09/02 15:33:19 by sungor           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	j;
	int	control;

	j = 0;
	control = 1;
	ft_strlowcase(str);
	while (str[j])
	{
		if ('a' <= str[j] && str[j] <= 'z')
		{
			if (control == 1)
			{
				str[j] -= 32;
				control = 0;
			}
		}
		else if ('0' <= str[j] && str[j] <= '9')
			control = 0;
		else
			control = 1;
		j++;
	}
	return (str);
}
