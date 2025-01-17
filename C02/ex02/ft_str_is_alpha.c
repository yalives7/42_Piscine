/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:24:48 by sungor            #+#    #+#             */
/*   Updated: 2024/09/02 15:46:06 by sungor           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (! ((65 <= str[i] && str[i] <= 90)
				|| (97 <= str[i] && str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
