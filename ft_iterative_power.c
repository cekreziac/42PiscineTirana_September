#include <stdio.h>

int     ft_iterative_power(int nb, int power)
{
    int product;
    int counter;

    if(power < 0)
    {
        return (0);
    }
    else if((power == 0 && nb == 0) || power == 0)
    {
        return (1);
    }

    counter = 0;
    product = 1;
    while(counter < power)
    {
        product *= nb;
        counter++;    
    }

    return product;
}

int main()
{
    int product;
    product = ft_iterative_power(0, 0);
    printf("%d", product);
    printf("\n");
    product = ft_iterative_power(34, 0);
    printf("%d", product);
    printf("\n");
    product = ft_iterative_power(2, -1);
    printf("%d", product);
    printf("\n");
    product = ft_iterative_power(6, 3);
    printf("%d", product);
    printf("\n");
    product = ft_iterative_power(-1, 3);
    printf("%d", product);
    return (0);
}