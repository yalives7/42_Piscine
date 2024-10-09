/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:35:14 by sungor            #+#    #+#             */
/*   Updated: 2024/08/25 07:34:31 by sungor           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	control;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		control = tab[end];
		tab[end] = tab[start];
		tab[start] = control;
		start++;
		end--;
	}
}
