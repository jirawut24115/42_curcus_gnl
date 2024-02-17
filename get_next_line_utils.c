/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <jichompo@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:17:52 by jichompo          #+#    #+#             */
/*   Updated: 2024/02/17 23:42:44 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(int count, int size)
{
	void	*buff;
	int		i;
	char	*s;

	if (count * size > 2147483647)
		return ((void *)0);
	buff = malloc(size * count);
	if (!buff)
		return ((void *)0);
	s = (char *)buff;
	i = 0;
	while (i < size * count)
	{
		*(s + i) = 0;
		i++;
	}
	return (buff);
}

char	*ft_strchr(const char *string, int c)
{
	char	*str;

	str = (char *)string;
	while (*str != c && *str != 0)
		str++;
	if (*str == c)
		return (str);
	else
		return (NULL);
}

int	ft_strlen(char *s)
{
	int	result;

	result = 0;
	while (*s)
	{
		s++;
		result++;
	}
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		total_len;
	int		index;
	char	*result;

	index = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * total_len + 1);
	if (!result || !s1 || !s2)
		return ((void *)0);
	while (*s1)
	{
		result[index] = *s1;
		s1++;
		index++;
	}
	while (*s2)
	{
		result[index] = *s2;
		s2++;
		index++;
	}
	result[index] = '\0';
	return (result);
}

char	*ft_strdup(char *str)
{
	int		str_len;
	int		index;
	char	*result;

	str_len = ft_strlen(str);
	result = malloc(sizeof(char) * str_len + 1);
	if (!result)
		return ((void *)0);
	index = 0;
	while (index < str_len)
	{
		result[index] = str[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
