// Question 1-Create a function to check if a given number is prime or not.

/*#include <stdio.h>
int isprime(int N)
{
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N = 5;
    printf("your %d is prime?\n", N);
    if (isprime(N))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}*/

// Question 2-Create a function to check if a given number is prime or not.

/*#include <stdio.h>
int main()
{
    int i, f = 1, num;
    printf("enter your number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    printf("%d\n", f);
    return 0;
}*/

// question 3 fibbonacci series
//  0 1 1 2 3 5 13

/*#include <stdio.h>
int main()
{
    int a = 0, b = 1, i= 1, next = 0;
    while (i <= 6)
    {
        printf("%d\n", next);
        a = b;
        b = next;
        next = a + b;
        i++;
    }

    return 0;
}*/

// question 4

/*#include<stdio.h>
int vk(int r)
{
    float v=3.1416*(r*r);
    return v;
}
int main()
{
    int r=4;
    float ans=vk(r);
    printf("%f",ans);
    return 0;
}*/

// question 5

/*#include <stdio.h>
int vimal(int C)
{
    int f = (C * 9 / 5) + 32;
    return f;
}
int main()
{
    int C = 10;
    int ans =vimal(C);
    printf("%d",ans);
    return 0;
}*/