/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbobrov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:32:18 by kbobrov           #+#    #+#             */
/*   Updated: 2017/02/01 20:33:50 by kbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <string.h>
# include "libft/libft.h"
# define BUFF_SIZE 10

typedef struct	s_str
{
	char			*s;
	int				fl;
	struct s_str	*next;
}				t_str;

int				get_next_line(const int fd, char **file);

#endif
