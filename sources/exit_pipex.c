/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_pipex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 07:11:39 by wleite            #+#    #+#             */
/*   Updated: 2021/10/05 19:35:48 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	exit_pipex(t_pipex *pipex)
{
	close_std_fd();
	close_pipes(pipex);
	free_pipes(pipex);
	return (0);
}
