/**
 * File              : libft.h
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 29.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <stdlib.h>
#include <unistd.h>

char				*ft_strndup(const char *str, size_t len);
double				ft_pow(double n, int exp);

unsigned long		ft_strlen(char *str);
unsigned int		ft_toupper(unsigned int c);
unsigned int		ft_tolower(unsigned int c);
int					ft_strcmp(char *s1, char *s2);
int					ft_strncmp(char *s1, char *s2, size_t n);
long				ft_abs(int nb);
int					ft_intlen(int nb);
char				*ft_itoa(int nb);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_atoi(char *str);
char				*ft_strcat(char *s1, char *s2);
char				*ft_strncat(char *s1, char *s2, size_t n);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strdup(const char *str);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *b, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ptr);
char				*ft_strnew(size_t size);
void				ft_strdel(char **ptr);
void				ft_strclr(char *str);
void				ft_striter(char *str, void (*f)(char*));
void				ft_striteri(char *str, void (*f)(unsigned int, char*));
char				*ft_strmap(char const *str, char (*f)(char));
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t len);
char				*ft_strsub(char const *str, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *str);
char				**ft_strsplit(char const *str, char c);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

#endif
