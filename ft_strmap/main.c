#include "libft.h"

char	toup(char c)
{
    return((char)toupper(c));
}

int		ft_strmap_check(char const *s)
{
    char	*ans;
    int		i;
    
    ans = ft_strmap(s, &toup);
    i = -1;
    if (!s && !ans)
        return (0);

   
    while (ans[++i])
        if (ans[i] >= 'a' && ans[i] <= 'z')
        {
            printf("[Test fail \"%s\"]\n", s);
            printf(" > My  %s\n", ans);
            return (1);
        }
    return (0);
}

int		main(void)
{
    ft_strmap_check("some");
    ft_strmap_check("yT^7t67N Fhfjsdfjsl $T^#&@*efi ");
    ft_strmap_check("");
    return (0);
}