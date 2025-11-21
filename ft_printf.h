/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:19:41 by macamach          #+#    #+#             */
/*   Updated: 2025/11/12 17:19:46 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_base(unsigned long n, char *base, int *count);
void	ft_helper_s(char *s, int *count);
void	ft_helper_p(unsigned long ul, int *count);
void	ft_helper_u(unsigned int n, int *count);
void	ft_helper_x(unsigned int n, int lower, int *count);
int		ft_printf(const char *format, ...);

#endif
