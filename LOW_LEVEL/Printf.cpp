#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
int Page = 1, TotalPages = 10;
// print string and int variable
printf("The page number = %d \n", Page);
printf("You are in Page %d of %d \n", Page, TotalPages);
//Width specification
printf("The page number = %0*d \n", 2, Page);
printf("The page number = %0*d \n", 3, Page);
printf("The page number = %0*d \n", 4 , Page);
printf("The page number = %0*d \n", 5, Page);

int Number1 = 20, Number2 = 30;
printf("The Result of %d + %d = %d \n", Number1, Number2,
Number1+ Number2);

return 0;
}

/*
! this is float formating
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
float PI = 3.14159265;
//Precision specification
printf("Precision specification of %.*f\n", 1, PI);
printf("Precision specification of %.*f\n", 2, PI);
printf("Precision specification of %.*f\n", 3, PI);
printf("Precision specification of %.*f\n", 4, PI);
float x = 7.0, y = 9.0;
printf("\nThe float division is : %.3f / %.3f = %.3f \n\n", x,
y, x / y);
double d = 12.45;
printf("The double value is : %.3f \n", d);
printf("The double value is : %.4f \n", d);
return 0;
}
*/


/*
!string and char formating 
ProgrammingAdvices.com
© Copyright 2022
Lesson #25 String and Char Format (printf)
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
char Name[] = "Mohammed Abu-Hadhoud";
char SchoolName[] = "Programming Advices";
// print string and String
printf("Dear %s, How are you?\n\n", Name);
printf("Welcome to %s School!\n\n", SchoolName);
char c = 'S';
printf("Setting the width of c :%*c \n", 1, c);
printf("Setting the width of c :%*c \n", 2, c);
printf("Setting the width of c :%*c \n", 3, c);
printf("Setting the width of c :%*c \n", 4, c);
printf("Setting the width of c :%*c \n", 5, c);
return 0;
}
*/