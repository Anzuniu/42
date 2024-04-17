/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:00 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/15 01:07:47 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies a function to each character of a string.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	ft_upperc(unsigned int i, char c);

/*int main()
{
    char *s = "Hola Mundo";
    char *result = ft_strmapi(s, ft_upper);

    printf("Resultado: %s\n", result);
    free(result);
    return 0;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	while (i--)
		str[i] = f(i, s[i]);
	return (str);
}

char	ft_upperc(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
	i++;
}
