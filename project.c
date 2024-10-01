#include <stdio.h>
#include<stdlib.h>
// Function prototypes
void centemeter_meter();
void kellometer_meter();
void decimeter_meter();
void nanometer_meter();
void joule_calorie();
void newton_dyne();
void watt_horsepower();

int main() {
    int choice,f=0;
    while(1)
    {
    printf("**************** Welcome to Converter ****************\n");
    printf("\nChoose a type of operation from the following:");  
    printf("\n\t1. CENTIMETER TO METER");
    printf("\n\t2. KILOMETER TO METER");
    printf("\n\t3. DECIMETER TO METER");
    printf("\n\t4. NANOMETER TO METER");
    printf("\n\t5. JOULE TO CALORIE");
    printf("\n\t6. NEWTON TO DYNE");
    printf("\n\t7. WATT TO HORSEPOWER");
    printf("\n\t8. EXIT");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Using switch statement to choose the correct function
    switch(choice) {
        case 1:
            centemeter_meter(); // Calling the centemeter_meter function
            break;
        case 2:
            kellometer_meter(); // Calling the kellometer_meter function
            break;
        case 3:
            decimeter_meter(); // Calling the decimeter_meter function
            break;
        case 4:
            nanometer_meter(); // Calling the nanometer_meter function
            break;
        case 5:
            joule_calorie(); // Calling the joule_calorie function
            break;
        case 6:
            newton_dyne(); // Calling the newton_dyne function
            break;
        case 7:
            watt_horsepower(); // Calling the watt_horsepower function
            break;
        case 8:
             f=1;
            break;
        default:
            printf("\nINCORRECT CHOICE!\n");
            break;
    }
    if(f)
    {
        break;
    }
    getchar();
    // system("cls");
    }
    return 0;
}

// Function definitions for length conversions
void centemeter_meter() {
    float cm;
    printf("\nEnter value in centimeters: ");
    scanf("%f", &cm);
    printf("%f meters\n", cm / 100);
}

void kellometer_meter() {
    float km;
    printf("\nEnter value in kilometers: ");
    scanf("%f", &km);
    printf("%f meters\n", km * 1000);
}

void decimeter_meter() {
    float dm;
    printf("\nEnter value in decimeters: ");
    scanf("%f", &dm);
    printf("%f meters\n", dm / 10);
}

void nanometer_meter() {
    float nm;
    printf("\nEnter value in nanometers: ");
    scanf("%f", &nm);
    printf("%f meters\n", nm / 1e9);
}
// Function definitions for physics conversions
void joule_calorie() {
    float joules;
    printf("\nEnter value in Joules: ");
    scanf("%f", &joules);
    printf("%f calories\n", joules / 4.184);
}

void newton_dyne() {
    float newtons;
    printf("\nEnter value in Newtons: ");
    scanf("%f", &newtons);
    printf("%f dynes\n", newtons * 1e5);
}

void watt_horsepower() {
    float watts;
    printf("\nEnter value in Watts: ");
    scanf("%f", &watts);
    printf("%f horsepower\n", watts / 745.7);
}