//gregorian calender
#include <stdio.h>

int main() {
    int given_year = 2001;
    int year;

    printf("Enter any year: ");
    scanf("%d", &year);

    int diff = year - given_year;
    int leap = 0;

    for (int i = given_year; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            leap++;
        }
    }

    int days = (diff * 365) + leap;
    int d = (days % 7 + 1); // Adding 1 to adjust for the day of the week (1 = Monday, 2 = Tuesday, ...)

    switch (d) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
