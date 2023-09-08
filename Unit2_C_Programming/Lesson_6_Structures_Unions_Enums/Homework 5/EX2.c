#include <stdio.h>
void main(){
    struct distance {
        float feet;
        float inches;
    }d1,d2,sum;
    printf("Enter the 1st distance: \nEnter feet: ");
    scanf("%f",&d1.feet);
    printf("Enter inches: ");
    scanf("%f",&d1.inches);
    printf("Enter the 2nd distance: \nEnter feet: ");
    scanf("%f",&d2.feet);
    printf("Enter inches: ");
    scanf("%f",&d2.inches);
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches+d2.inches;
    if (d1.inches+d2.inches >= 12.0f){
        sum.inches -=12;
        sum.feet++;
    }

    printf("Sum of distances = %.1f' -%.1f\"",sum.feet,sum.inches);


}
