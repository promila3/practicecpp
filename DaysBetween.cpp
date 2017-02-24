
int getMonthDays(int month, int year){
    int result = 0;
    if (month == 1)
        return 0;
    for (int i = 1 ; i < month ; i++){
        result += DaysInMonth(i,year);
    }
    return result;
}
int getLeapYears(int years){
    int result = ((years-1)/4) -(years-1)/100 + (years-1)/400;
    return result;
}
int DaysBetween(int year1, int month1, int day1, int year2, int month2, int day2) {
    int result = 0;
    
    int numberOfDaysTillFirst = year1 * 365 + getMonthDays(month1, year1) + day1 + getLeapYears(year1);
    int numberOfDaysTillSecond = year2 * 365 + getMonthDays(month2, year2) + day2 + getLeapYears(year2);
    int diff = numberOfDaysTillSecond - numberOfDaysTillFirst;
     return diff;
}
