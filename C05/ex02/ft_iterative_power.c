/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:39:49 by sungor            #+#    #+#             */
/*   Updated: 2024/09/03 20:01:33 by sungor           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result ;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (1 <= power)
		{
			result = nb * result;
			power --;
		}
	}
	return (result);
}
