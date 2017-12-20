#include "libft.h"

int		main(void)
{
 if (strcmp(ft_strjoin("Test", "String"), "TestString") == 0)
            ft_putstr("char     *ft_strjoin  -> test1:   OK\n");
        else
            ft_putstr("char     *ft_strjoin  -> test1:     KO\n");
        if (ft_strjoin("", "") == 0)
            ft_putstr("char     *ft_strjoin  -> test2:   OK\n");
        else
            ft_putstr("char     *ft_strjoin  -> test2:     KO\n");
        if (strcmp(ft_strjoin("", "Test String"), "Test String") == 0)
            ft_putstr("char     *ft_strjoin  -> test3:   OK\n");
        else
            ft_putstr("char     *ft_strjoin  -> test3:     KO\n");
        if (strcmp(ft_strjoin("Test", ""), "Test\0") == 0)
            ft_putstr("char     *ft_strjoin  -> test4:   OK\n");
        else
            ft_putstr("char     *ft_strjoin  -> test4:     KO\n");
        if (strcmp(ft_strjoin("Test\0", "\0"), "Test\0") == 0)
            ft_putstr("char     *ft_strjoin  -> test5:   OK\n");
        else
            ft_putstr("char     *ft_strjoin  -> test5:     KO\n");

	return (0);
}