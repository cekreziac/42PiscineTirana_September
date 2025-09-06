#include <stdio.h>

// int ft_recursive_power(int nb, int power)
// {
//     if(power < 0)
//         return (0);
//     else if((power == 0 && nb == 0) || power == 0)
//         return (0);
//     return (base * ft_recursive_power(nb, power - 1));
// }
int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);  // even 0^0 returns 1
    return (nb * ft_recursive_power(nb, power - 1));
}


int main()
{
    int product;
    product = ft_recursive_power(0, 0);
    printf("%d", product);
    printf("\n");
    product = ft_recursive_power(34, 0);
    printf("%d", product);
    printf("\n");
    product = ft_recursive_power(2, -1);
    printf("%d", product);
    printf("\n");
    product = ft_recursive_power(6, 3);
    printf("%d", product);
    printf("\n");
    product = ft_recursive_power(-1, 3);
    printf("%d", product);
    return (0);
}
