#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


struct SStudent{
    int ID;
    char name [50];
    float height;
    struct SStudent* pNextStudent;
};
struct SStudent* gpFirstStudent = NULL;

void add_student(){
    struct SStudent* pLastStudent;
    struct SStudent* pNewStudent;
    //case 1: the list is empty
    if (gpFirstStudent == NULL){
        pNewStudent = (struct SStudent*) malloc(sizeof(struct SStudent)); //create a new record
        gpFirstStudent = pNewStudent;
    }
    else {
    //case 2 : the list is not empty
    //navigate the list till we reach the last student
        pLastStudent = gpFirstStudent;
        while (pLastStudent->pNextStudent){
            pLastStudent = pLastStudent->pNextStudent; //take a step
        }
        pNewStudent = (struct SStudent*) malloc(sizeof(struct SStudent)); //create a new record
        pLastStudent->pNextStudent = pNewStudent ;
    }
    //fill the record
    char temps [50];
    printf("\nEnter Student ID: \n");
    gets(temps);
    pNewStudent->ID = atoi(temps);

    printf("\nEnter Student Name: \n");
    gets(pNewStudent->name);

    printf("\nEnter Student Height: \n");
    gets(temps);
    pNewStudent->height = atof(temps);

    pLastStudent->pNextStudent = NULL;
}

int delete_student(){

    int selected_id;

    printf("\nEnter the student ID to be deleted: \n");
    scanf("%d",&selected_id);

    if (gpFirstStudent){//if the list exists
        struct SStudent* pPreviousStudent = NULL;
        struct SStudent* pSelectedStudent = gpFirstStudent;

        while (pSelectedStudent->pNextStudent)
            if (pSelectedStudent->ID = selected_id)
            {
                if(pPreviousStudent) //not the 1st record
                {
                    pPreviousStudent=pSelectedStudent->pNextStudent;
                }
                else //if it's the 1st record
                {
                    gpFirstStudent = pSelectedStudent->pNextStudent;
                }
                free(pSelectedStudent);
                return 1; //means we found it
            }
            pPreviousStudent = pSelectedStudent;
            pSelectedStudent = pSelectedStudent->pNextStudent;
    }
    //if we cant find it
    printf("\nCan't find the student\n");
    return 0;
}

void view_students(){
    int count = 0;
    struct SStudent* pCurrentStudent =  gpFirstStudent;
    if (gpFirstStudent == NULL){
        printf("\nEmpty List!\n");
    }
    while (pCurrentStudent)
    {
        printf ("\nRecord Number: %d", count+1);
        printf ("\nID = %d", pCurrentStudent->ID);
        printf ("\nName = %s", pCurrentStudent->name);
        printf ("\nHeight = %.2f", pCurrentStudent->height);
        pCurrentStudent = pCurrentStudent->pNextStudent;
        count++ ;
    }
}

void delete_all(){
    struct SStudent* pCurrentStudent =  gpFirstStudent;
    if (gpFirstStudent == NULL){
        printf("\nEmpty List!\n");
    }
    while (pCurrentStudent)
    {
        struct SStudent* pTempStudent = pCurrentStudent;
        pCurrentStudent = pCurrentStudent->pNextStudent;
        free(pTempStudent);
    }
    gpFirstStudent = NULL;
}




int main(){
    char temps [40];
    while (1){
        printf("\nChoose  one of the following options:\n");
        printf("1: Add Student \n");
        printf("2: Delete Student \n");
        printf("3: View All Students \n");
        printf("4: Delete All Students \n");
        gets(temps);

        switch(atoi(temps))
        {
            case 1:
            add_student();
            break;
            case 2:
            delete_student();
            break;
            case 3:
            view_students();
            case 4:
            delete_all();
            break;
            default:
            printf("\nWrong option, try again\n");
            break;
        }

    }
    return 0;
}
