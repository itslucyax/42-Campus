#include "libft"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);//mayus + 32=minus
    return (c);//devuelve sin cambios
}