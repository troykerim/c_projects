#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void print_lex(int n)
{
    int m, j, i = 1;
    printf("\nPrint numbers from 1 to %d in lexicographic order-\n", n);
    while(i <= 9)
    {
        j = 1;
        while(j <= n)
        {
            m = 0;
            while(m < j)
            {
                if((m + j * i) <= n)
                {
                    printf("%d ", m + j * i);
                }
                m = m + 1;
            }
            j = j * 10;
        }
        i = i + 1;
    }
    printf("\n");
}
int main()
{
    print_lex(10);
    print_lex(25);
    return 0;
}