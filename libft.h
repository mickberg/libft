/**
 * File              : libft.h
 * Author            : Mikael Berglund <mikael.berglund2@gmail.com>
 * Date              : 20.10.2019
 * Last Modified Date: 22.10.2019
 * Last Modified By  : Mikael Berglund <mikael.berglund2@gmail.com>
 */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

unsigned long		ft_strlen(char *str);
unsigned int		ft_toupper(unsigned int c);
unsigned int		ft_tolower(unsigned int c);
int					ft_strcmp(char *s1, char *s2);
long				ft_abs(int nb);
int					ft_intlen(int nb);
char				*ft_itoa(int nb);
int					ft_isalpha(int c);
int					ft_isdigit(int c);

#endif
