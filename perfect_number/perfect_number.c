/*
    Perfect Number
    But, count how many numbers are perfect numbers, display what they are
*/
#include <stdio.h>
#include <stdlib.h>

int isPerfect(int n)
{
    int sum = 0;
    for(int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;
}


int main()
{
    int range, count = 0;
    printf("Enter a range: ");
    scanf("%d", &range);
    
    int *perf_nums = (int*)malloc(range*sizeof(int));
    
    for(int num = 2; num <= range; num++)
    {
        if(isPerfect(num))
        {
            printf("%d is a perfect number\n", num);
            perf_nums[count++] = num;
        }
    }
    printf("\nThe total perfect numbers found: %d\n", count);
    
    if(count > 0)
    {
        printf("Perfect numbers: ");
        for(int i = 0; i < count; i++)
        {
            printf("%d ", perf_nums[i]);
        }
        printf("\n");
    }
    free(perf_nums);
    
    return 0;
}