#ifndef LIBFT__h
# define LIBFT__h

#include <unistd.h>
#include <stdlib.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_isalpha(int c);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strncat(char *dest, char *src, int nb);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);

#endif
