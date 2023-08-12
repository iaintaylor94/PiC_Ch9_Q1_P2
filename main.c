// This program prints tomorrows date

#include <stdio.h>

int main(void) {

  // define struct date
  struct date {
  int day;
  int month;
  int year;
  };

  // Initialise today and tomorrow
  struct date today, tomorrow;

  // Define number of days per month
  const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31 };

  // Get input
  printf ("Enter todays date (mm dd yyyy): ");
  scanf ("%d %d %d", &today.month, &today.day, &today.year);

  // Not end of month (if end increase today.month)
  if ( today.day != daysPerMonth [today.month - 1] ) {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  }

  // End of year
  else if ( today.month == 12 ) {
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year +1;
  }

  // End of month
  else {
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }

  // Print tomorrows date
  printf ("Tomorrows date is %d/%d/%.2d\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
  
  return 0;
}