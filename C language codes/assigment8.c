/*Write a program to define a structure Company that contains
companyName, location, and an embedded structure CEO with name and
age. Accept details from the user and display them.*/

// #include <stdio.h>
// #include <string.h>
// struct CEO
// {
//     char name[20];
//     int age;
// };
// struct Company
// {
//     char companyName[20];
//     char location[20];
//     struct CEO ceo;
// };
// void main()
// {
//     struct Company c;
//     strcpy(c.companyName, "TCS");
//     strcpy(c.location, "Mumbai");
//     strcpy(c.ceo.name, "Ratan Tata");
//     c.ceo.age = 65;
//     printf("Company Name: %s\n", c.companyName);
//     printf("Location: %s\n", c.location);
//     printf("CEO Name: %s\n", c.ceo.name);
//     printf("CEO Age: %d\n", c.ceo.age);

// }

/**Define a structure Student with fields name, rollNo, and marks. Write a
function displayStudent() that takes a Student structure as an argument and
prints the details. */

// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     char name[20];
//     int rollNo;
//     int marks;
// };
// void studentinfo(struct Student st)
// {
//     printf("Name: %s\n", st.name);
//     printf("Roll No: %d\n", st.rollNo);
//     printf("Marks: %d\n", st.marks);
// }
// void main()
// {
//     struct Student s;
//     strcpy(s.name, "Rahul");
//     s.rollNo = 101;
//     s.marks = 90;
//     studentinfo(s);
// }

/*Define a structure Car with brand, model, and price. Store details of n cars
using a structure array and sort them in ascending order of price.*/

// #include <stdio.h>
// struct car
// {
//     char brand[100];
//     char model[100];
//     float price;
// };
// void main()
// {
//     struct car c;
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("enter your car infor mation %d: \n", i + 1);
//         scanf("%s", &c.brand);
//         scanf("%s", &c.model);
//         scanf("%f", &c.price);
//     }
//     printf("your car details is: \n");
//     for (i = 0; i < 5; i++)
//     {

//         printf("%s\n", c.brand);
//         printf("%s\n", c.model);
//         printf("%f\n", c.price);
//     }
// }
