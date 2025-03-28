// lecture 1
/*
#include<stdio.h>
int main()
{
    int i=1,count=1;
   while (i<=100)
   {
    printf("%d-Dhundhu\n",count);
    count++;
    i++;
   }
   return 0;

}*/

// printf 20 even number

/*#include<stdio.h>
int main()
{
    int i=0;
    while (i<=38)
    {
      if(i%2==0)
      {
        printf("%d\n",i);
      }
      i++;
    }
    return 0;

}*/

// print 20 odd number

/*#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 39)
    {

        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}*/

// pattern 50 49 48 47 46 45 44 43 42 41

/*#include<stdio.h>
int main()
{
    int i=50;
    while (i>=41)
    {
        printf("%d\n",i);
        i--;
    }

}*/

// squre pattern

/*#include <stdio.h>
int main()
{
    int i = 2;
    while (i <= 2048)
    {
        printf("%d\n",i);
        i*=2;
    }
    return 0;
}*/

// fibbonacci series
// 0 1 1 2 3 5 13

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

/*#include <stdio.h>
int main()
{
    int n = 6;
    int term = 2;

    printf("The series is: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term = term * 2 + i;
    }
    return 0;
}*/

// #include<stdio.h>
// int main()
// {
//     int a=10;
//     int b=20;
//     if(a<b)
//     {
//         printf("Number is gretar");
//     }
//     else
//     {
//         printf("Number is not gretar");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// void countvowel(char str[100]);

// int main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     countvowel(str);
//     return 0;
// }

// void countvowel(char str[100])
// {
//     char vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//     int count = 0;
//     while (*str != '\0')
//     {
//         if (strchr(vowel, *str))
//         {
//             count++;
//         }
//         str++;
//     }
//     printf("Number of vowels: %d\n", count);
// }

// #include<stdio.h>
// #include<string.h>
// void find(char str[100]);
// int main()
// {
//     char name[100];
//     printf("Enter your name: ");
//     fgets(name, 100, stdin);
//     find(name);
//     return 0;
// }

// void find(char str[100])
// {
//     char word[100];
//     scanf("%s", word);

//     int count = 0;
//     while (*str != '\0')
//     {
//         if (strchr(word, *str))
//         {
//             count++;
//         }
//         str++;
//     }
//     printf("postion of char: %d\n", count);
// }

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//  char str[]="hello word";
//  char *ptr= strchr(str,'w');
//  if(ptr)
//  {
//      printf("charcter found at : %d",ptr-str);
//  }
//  else
//  {
//      printf("not found");
//  }
// }

// #include<stdio.h>
// void main()
// {
// char fname[100];
// char lname[100];

// fgets(fname,100,stdin);
// fgets(lname,100,stdin);

// strcat(fname,lname);
// puts(fname);

// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]="my name is vimal kanzariya";
//     char str1[]="my intresht is gamming";
//     strcat(str,str1);
//     printf("%s",str);
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     char str[100]="hello word";
//     int i;
//     for(i=15;i<str;i--)
//     {
//         printf("%c",str[i]);
//     }
//     return 0;
//}

// #include<stdio.h>
// #include<string.h>
// struct Student
// {
//     char name[100];
//     int roll_num;
//     float mark;

// };
// int main()
// {
//     struct Student v;
//     for(int i=0;i<2;i++)
//     {
//         printf("Enter your data %d:",i+1);
//         scanf("%s",v.name);
//         printf("Enter your roll number %d:",i+1);
//         scanf("%d",&v.roll_num);
//         printf("Enter your mark %d:",i+1);
//         scanf("%f",&v.mark);
//     }

//     for(int i=0;i<2;i++)
//     {
//         printf("print your data %d:",i+1);
//         printf("%s\n",v.name);
//         printf("print your roll number %d:",i+1);
//         printf("%d\n",v.roll_num);
//         printf("print your mark %d:",i+1);
//         printf("%f\n",v.mark);
//     }

//     return 0;
// }

// #include<stdio.h>
// void fect(int n);
// int main()
// {
//     int n,fectorial;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     fectorial=fect(n);
//     printf("Fectorial of %d is: %d\n", n, fectorial);
// }
// void fect(int n)
// {
//     int i, fact = 1;
//     for (i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
//     printf("Fectorial of %d is: %d\n", n, fact);
// }

// #include <stdio.h>
//  int fact(int);
//  void main()
//  {
//   int no,factorial;
//    	printf("Enter a number: \n");
//    	scanf("%d",&no);
//    	factorial=fact(no);
//      printf("The Factorial is: %d" ,factorial);
//  }

// int fact(int n)
// {
//     int i,f=1;
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }

// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     char name[100];
//     char name1[100];
//     char name2[100];
// };
// int main()
// {
//     struct student v;
//     printf("Enter your name: ");
//     scanf("%s",v.name);
//     printf("Enter your name1: ");
//     scanf("%s",v.name1);
//     printf("Enter your name2: ");
//     scanf("%s",v.name2);
//     printf("Your name is: %s\n",v.name);
//     printf("Your name1 is: %s\n",v.name1);
//     printf("Your name2 is: %s\n",v.name2);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char name[3][20];
//     int i;
//     for(i=0;i<3;i++)
//     {
//         printf("Enter your name: ");
//         scanf("%s",name[i]);
//     }
//     for(i=0;i<3;i++)
//     {
//         printf("Your name is: %s\n",name[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
//  struct Student
//  {
//     char Name[100];
//     int roll_number;
//     float markes;
//  };
//  int main()
//  {
//     struct Student v;
//     int i;
//     for(i=0;i<2;i++)
//     {
//         printf("enter your data %d :",i+1);
//         printf("Enter your name: ");
//         scanf("%s",v.Name);
//         printf("Enter your roll number: ");
//         scanf("%d",&v.roll_number);
//         printf("Enter your markes: ");
//         scanf("%f",&v.markes);
//     }
//     for(i=0;i<2;i++)
//     {
//         printf("enter your data %d :",i+1);
//         printf("Your name is: %s\n",v.Name);
//         printf("Your roll number is: %d\n",v.roll_number);
//         printf("Your markes is: %f\n",v.markes);

//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
//  struct Student
//  {
//     char Name[100];
//     int roll_number;
//     float markes;
//  }v;
//  int main()
//  {
//     printf("%d",sizeof(v));
//     // strcpy(v.Name,"vimal");
//     // v.roll_number=1;
//     // v.markes=100;
//     //  printf(" your data : \n");
//     // printf("%s\n%d\n%f\n",v.Name,v.roll_number,v.markes);
//     return 0;
//  }

// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     char name[100];
//     int roll_number;
//     float mark;
//     int id;
// };
// int main()
// {
//     struct student v;
//     strcpy(v.name,"vimal");
//     v.roll_number=65;
//     v.mark=45.5;
//     v.id=5822;
//     printf("%s\n%d\n%f\n%d\n",v.name,v.roll_number,v.mark,v.id);
//     printf("your structure size is :%d",sizeof(v));
//     return 0;

// }

// #include<stdio.h>
// int a[2][2]={1,2,3,4};
// int b[2][2]={1,2,3,4};
// int metrix[2][2];
// int main()
// {
//     int i,j;
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             metrix[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("Sum of two matrix is: \n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d\t",metrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }.

// #include<stdio.h>
// struct Test
// {
//     int x;
//     char y;
// }t1={10,'A'};
// void main()
// {
//     struct Test t2=t1;
//     t2.x=20;
//     printf("%d %c",t1.x,t1.y);
// }

// #include<stdio.h>
// void evenodd(int number){
//     if (number%2==0)
//     {
//         printf("even");
//     }
//     else
//     {
//         printf("odd");
//     }
// }
// void main()
// {
//     int num;
//     printf("Enter your num:");
//     scanf("%d",&num);
//     evenodd(num);
// }

// #include<stdio.h>
// void fectorial(int number);
// void main()
// {
//     int num;
//     printf("Enter your num :");
//     scanf("%d",&num);
//     fectorial(num);
// }
// void fectorial(int number)
// {
//     int ans=1,i;
//     for(i=number;i>=1;i--)
//     {
//     ans=i*ans;
//     }
//     printf("%d",ans);
// }

// #include <stdio.h>
// void sum(int a, int b);
// void main()
// {
//     int a, b;
//     printf("Enter your a and b:\n");
//     scanf("%d", &a);
//     scanf("%d", &b);

//     sum(a, b);
// }
// void sum(int a, int b)
// {
//     int sum;
//     sum = a + b;

//     printf("your ans is : %d", sum);
// }

/*how many way to delclar function */
/**
 * with return type & with argument
 * with return type & without argument
 * without return type & with argument
 * without return type & without argument
 *
 */


 #include<stdio.h>
 void sum();
 int main()
 {
    sum();
    return 0;
 }
 void sum()
 {
    int num1,num2,result;
    printf("enter your num:");
    scanf("%d %d",&num1,&num2);
    result = num1+num2;
    printf("your ans is : %d ",result);
 }