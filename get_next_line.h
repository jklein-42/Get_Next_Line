/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:21:22 by jklein            #+#    #+#             */
/*   Updated: 2022/03/31 12:22:25 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t		fd_strlen(const char *str);
char		*fd_substr(const char *str, unsigned int start, size_t len);
char		*fd_strchr(const char *s1, int i);
char		*fd_strdup(const char *str);
char		*fd_strjoin(const char *s1, const char *s2);

char		*get_next_line(int fd);

#endif
