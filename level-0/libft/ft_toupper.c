#include "libft"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32)//minus-32=mayus
    return (c);//si no, devuelve sin cambios
}