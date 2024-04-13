/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:51 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 17:13:34 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares the first size bytes of s1 and s2.

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)ptr1;
	str2 = (const unsigned char *)ptr2;
	i = 0;
	while (size--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    const void *ptr1;
    const void *ptr2;
    size_t size = 8;

    printf("%d", memcmp(ptr1,ptr2,size));
}*/
