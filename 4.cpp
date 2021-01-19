
#include <stdio.h>

int main()
{
    double a, b, c;
    char d;
    int p = 1;
    while (p != 2)
    {

        if (p != 1) break;
        printf("\"Ivan Alexsandrovich, please, enter your expression: \": ");
        scanf("%lf%c%lf", &a,&d,&b); // считывание числа и запись в перемнную
        while(getchar() != '\n');
        switch(d)
        {
            case '+': c = a + b; break;
            case '-': c = a - b; break;
            case '*': c = a * b; break;
            case '/': c = a / b; break;
            default:
                printf("Incorrect expression, please, try again!\n");
                continue;
        }
        printf("Result = %lf\n", c);
    }
}