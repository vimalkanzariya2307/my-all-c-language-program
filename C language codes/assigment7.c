// #include<stdio.h>
// #include<string.h>
// struct employee
// {
//     char name[100];
//     int id;
//     float salary;
// };
// void main()
// {
//     struct employee e1={"vimal",1,10000};
//     struct employee e2={"tejo",2,20000};
//     struct employee e3={"parth",3,30000};
//     printf("your employee data is: \n");
//     printf("%s\n%d\n%2f\n",e1.name);
//     printf("%s\n%d\n%2f\n",e2.name);
//     printf("%s\n%d\n%2f\n",e3.name);
// }

/*Create a structure named "Book" to store information about books
including their title, author, and price. Write a function to display the
details of a book.*/

// #include<stdio.h>
// #include<string.h>
// struct Book
// {
//     char title[100];
//     char author[100];
//     float price;
// };
// void main()
// {
//     struct Book b={"science","tejash garsondiya",100.00};
//     printf("Title: %s\n",b.title);
//     printf("Author: %s\n",b.author);
//     printf("Price: %f\n",b.price);
// }

/*Design a structure named "Student" to store student information including
name, roll number, and marks in three subjects. Write a function to
calculate the average marks of a student.*/

// #include<stdio.h>
// #include<string.h>
// struct Student
// {
//     char name[100];
//     int roll_number;
//     float mark1,mark2,mark3;
// };
// void main()
// {
//     struct Student s={"vimal",1,45.5,55.5,65.5};
//     float avg;
//     avg=(s.mark1+s.mark2+s.mark3)/3;
//     printf("Name: %s\n",s.name);
//     printf("Roll number: %d\n",s.roll_number);
//     printf("Average marks: %f\n",avg);
// }

#include<stdio.h>
#include<string.h>
struct Student
{
    char name[100];
    int roll_number;
    float mark1,mark2,mark3;
};
        
