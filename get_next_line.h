/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:59:52 by dwinky            #+#    #+#             */
/*   Updated: 2020/11/12 21:59:53 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

void	*ft_calloc(size_t number, size_t size);

size_t	ft_strlen(const char *str);

char	*ft_strchr(char *str, int c);

char	*ft_strdup(const char *str);

int		ft_clear(char **str, char *str2);

char	*ft_strjoin_to_endline_and_free(char **s1, char *s2);

int		check_tail(char **line, char **s_tail, char **find_end, char **array);

int		set_line(char **array, char **s_tail, char **find_end);

int		get_next_line(int fd, char **line);

#endif
