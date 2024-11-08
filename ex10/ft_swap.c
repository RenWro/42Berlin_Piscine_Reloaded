/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:41:36 by rwrobles          #+#    #+#             */
/*   Updated: 2024/11/08 17:41:51 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	a = 1;
	b = 2;
	ptr1 = &a;
	ptr2 = &b;
	ft_swap (ptr1, ptr2);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
