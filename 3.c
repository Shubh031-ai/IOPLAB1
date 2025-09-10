#include <stdio.h>

int main()
{
    int base_sal, allowances, bonus, g_sal;
    
    printf("Enter base salary: ");
    scanf("%d",&base_sal);

    printf("Enter allowances: ");
    scanf("%d",&allowances);

    printf("Enter bonus: ");
    scanf("%d",&bonus);
    g_sal = base_sal+allowances+bonus;
    printf("\n Gross Salary = %d", g_sal);
}