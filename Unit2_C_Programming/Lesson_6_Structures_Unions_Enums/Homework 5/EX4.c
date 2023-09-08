#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student getData(){
    struct Student s1;
    printf("Enter Student Name: ");
    gets(s1.name);
    printf("Enter Student Marks: ");
    scanf("%f", &s1.marks);
    return s1;
}
void displayData(struct Student s1){
    printf("Information for roll number %d",s1.roll);
    printf("\nName: %s",s1.name);
    printf("\nMarks: %.1f\n",s1.marks);

}
void main(){
    struct Student students[10];
    int i;
    for (i=0;i<10;i++){
        printf("For roll number %d: \n", i+1);
        students[i] = getData();
        students[i].roll=i+1;
        fflush(stdout); fflush (stdin);
    }
    printf("Displaying students information: \n");
    for (i=0;i<10;i++){
        displayData(students[i]);
    }
}
