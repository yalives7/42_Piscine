/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:01:08 by sungor            #+#    #+#             */
/*   Updated: 2024/09/03 19:49:04 by sungor           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 1;
	if (nb >= 2)
	{
		while (a <= nb)
		{
			if (nb % a == 0 && a != nb && a != 1)
				return (0
			a++;
		}
		return (1);
	}
	return (0);
}
