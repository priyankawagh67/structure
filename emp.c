#include<stdio.h>

   struct employee
   {
    char name[10];int age;
    int phone_number; int salary;
    };
    int main()
 {
    printf("Name\t Age\t  Phone_number\t  Salary\n");
    struct employee
        emp1={"Chirag",24,1234567788,20000};
        {
        printf("%s",emp1.name);
        printf("   %d",emp1.age);
        printf("     %d",emp1.phone_number);
        printf("      %d",emp1.salary);
        }
        struct employee
        emp2={"Arnav",31,1234567891,56000};
        {
        printf("     \n%s",emp2.name);
        printf("    %d",emp2.age);
        printf("     %d",emp2.phone_number);
        printf("      %d",emp2.salary);
        }
        struct employee
        emp3={"Shivam",45,8881101111,30500};
        {
        printf(" \n%s",emp3.name);
        printf("   %d",emp3.age);
        printf("     %d",emp3.phone_number);
        printf("       %d",emp3.salary);
        }
        return 0;

 }
