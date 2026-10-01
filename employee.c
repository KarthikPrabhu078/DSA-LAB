#include<stdio.h>
struct employee{
    int emp_id;
    char name[20];
    float emp_salary;
};
int main()
{
    struct employee e;
    float tax;
    printf("Enter the employee id = ");
    scanf("%d",&e.emp_id);
    printf("Enter the employee name = ");
    scanf("%s",&e.name);
    printf("Enter the employee salary = ");
    scanf("%f",&e.emp_salary);
    tax=e.emp_salary*10/100;
    printf("\n------Employee Details -------\n");
    printf("\nEmployee id = %d\n",e.emp_id);
    printf("Employee name = %s\n",e.name);
    printf("Employee salary = %.2f\n",e.emp_salary);
    printf("Income tax for %s = %.2f\n",e.name,tax);
    return 0;
}