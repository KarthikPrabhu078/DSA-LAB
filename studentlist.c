#include <stdio.h>
struct student
{
    char name[100];
};
int main()
{
    struct student s[100];
    int n,i,num;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
    }
    printf("Enter the number of student to be displayed: ");
    scanf("%d",&num);
    if(num<=n)
    {
        printf("The %d student names are:\n",num);
        for(i=0;i<num;i++)
        {
            printf("%s\n",s[i].name);
        }
    }
    else
    {
        printf("Invalid input!");
    }
    return 0;
}