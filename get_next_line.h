/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:26:23 by aglorios          #+#    #+#             */
/*   Updated: 2019/12/12 12:44:20 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <limits.h>

int		get_next_line(int fd, char **line);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_strchr(const char *s, int c);
int		ft_line(int fd, char **line, char **str);
int		ft_read(int fd, char **line);
size_t	ft_strlen(const char *str);
void	ft_bzero(char *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);

#endif
