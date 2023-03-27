#include <stdio.h>

// Function to calculate the day of the week for the given year, month and month days
int calculateStartingDay(int year, int month, int monthDays[]);

int main() {
    int year, month, day, daysInMonth, weekDay, startingDay;

    printf("*************************  Coded by :Ahmed Samy Mohamed Mohamed - 20010099  *************************\n");
    printf("*************************  As an assignment for Prof : Mohammed El Habrouk  *************************\n\n");

    printf("Please enter the year: ");
    scanf("%d", &year);

    printf("Please enter the month: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month entered!\n");
        return 0;
    }

    // Define the months and their corresponding number of days
    char* months[] = {"January", "February", "March", "April", "May",
     "June", "July", "August", "September", "October", "November", "December"};
    int monthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Adjust the number of days in February if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        monthDays[1] = 29;
    }

    startingDay = calculateStartingDay(year, month, monthDays);

    printf("\n\n-----------------%s-----------------\n", months[month - 1]);
    printf("\n   Mon  Tue  Wed  Thu  Fri  Sat  Sun   \n");

    // Print spaces for the days before the starting day of the month
    for (weekDay = 0; weekDay < startingDay; weekDay++) {
        printf("     ");
    }

    // Print the days of the month
    for (day = 1; day <= monthDays[month - 1]; day++) {
        printf("%5d", day);

        if (++weekDay > 6) {
            printf("\n");
            weekDay = 0;
        }
    }

    if (weekDay) {
        printf("\n");
    }

    return 0;
}

// Function to calculate the day of the week for the given year, month and month days
int calculateStartingDay(int year, int month, int monthDays[]) {
    int day;

    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400)) % 7;

    for (int i = 1; i < month; i++) {
        if (i == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
            day += 29;
        } else {
            day += monthDays[i - 1];
        }
    }

    return day % 7;
}
