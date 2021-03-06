/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:14:07 by lnemor            #+#    #+#             */
/*   Updated: 2021/11/08 16:12:14 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *sch, const char *str, size_t length);
char	*ft_strrchr(const char *str, int chr);
char	*ft_strchr(const char *str, int chr);
void	*ft_memset(void *s, int c, size_t n);
int		ft_isalnum(int c);
int		ft_strncmp(const char *first, const char *second, size_t length);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_isspace(char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free_s1(char *s1, char const *s2);
char	*ft_strtrim(const char *str, const char *set);
char	**ft_split(char const *str, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi_base(const char *str, int str_base);
char	*ft_strjoin_free_s1(char *s1, char const *s2);

#endif
