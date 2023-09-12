/*Write a program in C to show a pointer to an array which contents
are pointer to structure.*/
#include "stdio.h"
struct Employee {
        char* name;
        int id;
    };
void main(){
    static struct Employee emp1 = {"Ahmed",1001},emp2 = {"Ali",1002}, emp3 = {"Zaki",1003};
    struct Employee (*arr[])= {&emp1, &emp2, &emp3};
    struct Employee (*(*pt)[3]) = &arr;
    printf("Employee Name: %s\n",(**(*pt+1)).name);
    printf("Employee ID : %d",(*(*pt+1))->id);

}
