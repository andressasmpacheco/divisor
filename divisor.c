#include <stdio.h>
int main()
{
    int resto, div1, div2;
    printf("Digite o dividendo\n\n");
    scanf("%d", &div1);
    printf("Digite o divisor\n\n");
    scanf("%d", &div2);
    resto = div1 % div2;
    if (resto==0)
    {
       printf("\nO primeiro numero e divisivel pelo segundo numero\n");
    }
    else
    {
        printf("\nO primeiro numero nao e divisivel pelo segundo numero \n");
    }
    
}
