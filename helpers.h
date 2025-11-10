/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:27:43 by macamach          #+#    #+#             */
/*   Updated: 2025/11/10 14:37:15 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

//# include <unistd.h>

void	ft_putchar_fd_helper(char c, int fd, int *count);
void	ft_putstr_fd_helper(char *s, int fd, int *count);
void	ft_putnbr_fd_helper(int n, int fd, int *count);
void	ft_putnbr_base_fd_helper(unsigned long n, char *b, int fd, int *count);

#endif
