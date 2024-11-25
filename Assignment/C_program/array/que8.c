/*
8. WAP to reverse a string and check that the string is palindrome or not 
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address 
andage
b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address andage
*/
// information -print and display empno, empname, address and age
#include <stdio.h>
struct employee {
    int emp_no;
    char emp_name[20];  
    char emp_add[50];  
    int age;
} e1, e2;

int main() {
    printf("Enter details for employee 1.\n");

    printf("Enter name: ");
    scanf("%s", e1.emp_name);

    printf("Enter emp_no: ");
    scanf("%d", &e1.emp_no);

    printf("Enter age: ");
    scanf("%d", &e1.age);

    printf("Enter Address: ");
    scanf(" %[^\n]s", e1.emp_add);  

    printf("\nEmployee 1 details:\n");
    printf("Employee-no = %d\n", e1.emp_no);
    printf("Employee-name = %s\n", e1.emp_name);
    printf("Employee-Address = %s\n", e1.emp_add);
    printf("Age = %d\n", e1.age);

    printf("\nEnter details for employee 2.\n");

    printf("Enter name: ");
    scanf("%s", e2.emp_name);

    printf("Enter emp_no: ");
    scanf("%d", &e2.emp_no);

    printf("Enter age: ");
    scanf("%d", &e2.age);

    printf("Enter Address: ");
    scanf(" %[^\n]s", e2.emp_add);

    printf("\nEmployee 2 details:\n");
    printf("Employee-no = %d\n", e2.emp_no);
    printf("Employee-name = %s\n", e2.emp_name);
    printf("Employee-Address = %s\n", e2.emp_add);
    printf("Age = %d\n", e2.age);

    printf("\nDetails needed:\n");
    printf("Employee 1 name: %s\n", e1.emp_name);
    printf("Employee 2 age: %d\n", e2.age);
    printf("Employee 2 name: %s\n", e2.emp_name);
    printf("Employee 2 address: %s\n", e2.emp_add);
    printf("Employee 1 address: %s\n", e1.emp_add);
}