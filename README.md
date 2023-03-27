# Gregorian-calendar
the code generates a calendar for a given year and month by calculating the starting day of the month and printing the days of the month with appropriate spacing. The function calculateStartingDay is used to determine the day of the week for the first day of the given month and year. 

The code generates a calendar for a specified year and month. 

 The user is prompted to enter the year and month, and the input is validated to ensure that the month is within the range of 1 to 12. 

Arrays are used to store the months and their corresponding number of days. If it's a leap year, February is adjusted to have 29 days. The starting day of the month is calculated using the given year, month, and month days. 

The calendar is printed by displaying the name of the month and the weekdays (Monday to Sunday). 

The days of the month are printed with appropriate spacing, and the week is wrapped up if the seventh day is reached 
The function calculateStartingDay takes three arguments: 

 year, month, and monthDays. It calculates the day of the week for the first day of the given month and year. 

The function first calculates the day of the week for January 1st of the given year using the Zeller's congruence formula.  

It then adds the number of days for each month prior to the given month to this value. If the year is a leap year, the number of days in February is set to 29.  

The function returns the resulting value modulo 7, which corresponds to the day of the week of the first day of the given month. 

In summary, the code generates a calendar for a given year and month by calculating the starting day of the month and printing the days of the month with
appropriate spacing. The function calculateStartingDay is used to determine the day of the week for the first day of the given month and year. 
