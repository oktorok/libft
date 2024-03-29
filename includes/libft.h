/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:15:11 by jagarcia          #+#    #+#             */
/*   Updated: 2018/07/01 21:37:27 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
void				ft_putchar(char c);
void				ft_putstr(const char *str);
size_t				ft_strlen(const char *str);
void				*ft_memset(void *str, int a, size_t b);
void				ft_bzero(void *str, size_t a);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int a, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t a);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				ft_toupper(char c);
char				ft_tolower(char c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void	**ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char	**as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoinfree(char *s1, char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
void				ft_putendl(const char *str);
void				ft_putendl_fd(const char *str, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstsplit(char const *s, char c);
t_list				*ft_lstnext(t_list *lt1, t_list *lt2, char *cnt, int a);
void				ft_swap(void *a, void *b);
int					ft_pow(int a, int b);
void				ft_sort_pos_int(int *arr);
void				ft_debug(const char a, const char *str);
void				ft_debug_num(const char a, const int str);
void				ft_putbytes(void *src, int size);
size_t				ft_wstrlen(const wchar_t *str);
char				*ft_strnjoin(const char *s1, const char *s2,
						unsigned int n);
size_t				ft_strlen_free(char *str);
char				*ft_strnjoinfree(char *s1, char *s2, unsigned int n);
char				ft_issdigit(char *str);
char				*ft_memjoinfree(void *s1, void *s2, size_t l1, size_t l2);
int					ft_abs(int n);
char				*ft_strinsert(char *dst, char *str, int pos);
char				*ft_strinsertfree(char *dst, char *str, int pos);
char				*ft_strcut(char *str, int start, int end);
char				*ft_strcutfree(char *str, int start, int end);
char				*ft_strinvert(const char *str);
void				ft_error(char *err);
int					ft_numint(int *array, int length, int num);
int					ft_min(int a, int b);
char				*ft_strrealloc(char **ptr, size_t size);
void				ft_putbits(char src);
void				*ft_memrealloc(void *ptr, size_t ptr_size,
						size_t final_size);
#endif
