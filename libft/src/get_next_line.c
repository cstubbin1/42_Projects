/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <cstubbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:33:32 by cstubbin          #+#    #+#             */
/*   Updated: 2022/09/01 11:48:53 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"
#include "../include/libft.h"

char	*ft_get_line(char *save)
{
	int		i;
	char	*s;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	s = (char *)malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		s[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		s[i] = save[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_save(char *save)
{
	int		i;
	int		c;
	char	*s;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
	if (!s)
		return (NULL);
	i++;
	c = 0;
	while (save[i])
		s[c++] = save[i++];
	s[c] = '\0';
	free(save);
	return (s);
}

char	*ft_read_and_save(int fd, char *save)
{
	char	*buff;
	int		read_bytes;

	buff = malloc((BUFF_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(save, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFF_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		save = ft_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save[257];

	if (fd < 0 || BUFF_SIZE <= 0 || fd > 256)
		return (0);
	save[fd] = ft_read_and_save(fd, save[fd]);
	if (!save[fd])
		return (NULL);
	line = ft_get_line(save[fd]);
	save[fd] = ft_save(save[fd]);
	return (line);
}