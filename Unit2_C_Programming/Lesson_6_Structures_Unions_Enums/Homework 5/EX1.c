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
    printf("Enter Student Roll Number: ");
    scanf("%d", &s1.roll);
    printf("Enter Student Marks: ");
    scanf("%f", &s1.marks);
    return s1;
}
void displayData(struct Student s1){
    printf("Displaying Information");
    printf("\nName: %s",s1.name);
    printf("\nRoll Number: %d",s1.roll);
    printf("\nMarks: %.2f",s1.marks);

}
void main(){
    struct Student s1;
    s1 = getData();
    displayData(s1);

}
