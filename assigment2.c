/*question 1*/

// #include<stdio.h>
// void prime(int a)
// {
//     if(a%2!=0)
//     {
//         printf("your num is prime");
//     }
//     else
//     {
//         printf("your num is not prim");
//     }

// }
// int main()
// {
//     prime(6);
//     return 0;
// }

/*Question 2*/

// #include <stdio.h>
// int fact(int);
// void main()
// {
//  int no,factorial;
//   	printf("Enter a number: \n");
//   	scanf("%d",&no);
//   	factorial=fact(no);
//     printf("The Factorial is: %d" ,factorial);
// }

// int fact(int n)
// {
//     int i,f=1;
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }

/*Question 3*/

// #include <stdio.h>
// int main()
// {
//     int i, a = 0, b = 1, next = 0;
//     for (i = 1; i <= 5; i++)
//     {
//         printf("%d\n", next);
//         a = b;
//         b = next;
//         next = a + b;
//     }
//     return 0;
// }


/*Question 4*/

// #include<stdio.h>
// void area(int r)
// {
//     float a;
//     a=3.14*r*r;
//     printf("%f",a);
// }
// int main()
// {
//     area(4);
//     return 0;
// }
