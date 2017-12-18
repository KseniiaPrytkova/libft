#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);

int main()
{
//    char *given_character = "0";
//    int result = atoi(given_character);
//    printf("%i", result);
    char *given_str = "-2a5";
    ft_atoi(given_str);
    
    printf("%i", ft_atoi(given_str));
    return (0);
}
