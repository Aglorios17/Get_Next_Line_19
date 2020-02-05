/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:20:36 by aglorios          #+#    #+#             */
/*   Updated: 2019/11/26 15:55:45 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(char *str, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	if (!(ptr = (char *)malloc(sizeof(char) * (size * count))))
		return (0);
	i = 0;
	ft_bzero(ptr, count * size);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	if (s1)
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	if (s2)
		while (s2[j])
		{
			str[i + j] = s2[j];
			j++;
		}
	str[i + j] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	if (s1 == NULL)
		return (ft_calloc(1, 1));
	if (!(str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
