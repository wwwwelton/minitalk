/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:28:13 by wleite            #+#    #+#             */
/*   Updated: 2021/10/06 00:47:16 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_files(t_pipex *pipex)
{
	pipex->file_in = open(pipex->argv[1], O_RDONLY);
	if (pipex->file_in < 0)
		exit_perror(pipex->argv[1], 1);
	pipex->file_out = open(pipex->argv[pipex->argc - 1],
			O_CREAT | O_WRONLY | O_TRUNC, 0777);
	if (pipex->file_out < 0)
		exit_perror(pipex->argv[pipex->argc - 1], 1);
	return (0);
}
