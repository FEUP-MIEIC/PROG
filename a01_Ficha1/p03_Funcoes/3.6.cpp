#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/* (a) */
bool isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}

/* (b) */
int getMonthLastDay(int month, int year)
{
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2: 
            if(isLeapYear(year)) return 29;
            else return 28;
        default:
            return -1;
    }
}

/* (c) */
/* Magic! DO NOT TOUCH */
int calcMonthCode(int month, int year)
{
    bool isleap = isLeapYear(year);

    switch(month)
    {
        case 3: case 11:
            return 3;
        case 4: case 7:
            return 6;
        case 5:
            return 1;
        case 6:
            return 4;
        case 8:
            return 2;
        case 9: case 12:
            return 5;
        case 10:
            return 0;           
    }

    if(isleap)
        if(month == 1) return 6;
        else return 2;
    else
        if(month == 1) return 0;
        else return 3;
}

int getWeekDay(int day, int month, int year)
{
    int s,a,c;

    /* Gets the two first digits from year */
    s = year / 100;

    /* Gets the two last digits from year */
    a = year % 100;

    /* Calculate month code ... whatever that is */
    c = calcMonthCode(month, year);

    return (5*a/4 + c + day - 2*(s%4) + 7)%7;

}


string MonthName(int n)
{
    switch (n)
    {
        case 1: return "Janeiro";
        case 2: return "Fevereiro";
        case 3: return "Março";
        case 4: return "Abril";
        case 5: return "Maio";
        case 6: return "Junho";
        case 7: return "Julho";
        case 8: return "Agosto";
        case 9: return "Setembro";
        case 10: return "Outubro";
        case 11: return "Novembro";
        case 12: return "Dezembro";
    }
}

void printMonth(int month, int year)
{
    int i = 0, firstDayWeek, lastDay, day = 1, width = 5;

    // Get last day for current month/year
    lastDay = getMonthLastDay(month, year);

    // Determine first day week
    /* 0 -> Saturday but let 0 be Sunday ... 6 to be Saturday */
    firstDayWeek = (getWeekDay(1, month, year) + 6) % 7;
    
    // Header
    cout << setfill('*') << setw(35) << " " << setfill(' ') << endl;
    cout << MonthName(month) << "/" << year << endl;
    cout << setfill('*') << setw(35) << " " << setfill(' ') << endl;
    
    // Weekdays name
    cout << setw(width) << "Dom" << setw(width) << " Seg" << setw(width) << " Ter" << setw(width) << " Qua" 
        << setw(width) << " Qui" << setw(width) << " Sex" << setw(width) << " Sab" << endl;
    
    // Prints spaces until the correct spot for day 1
    for(i = 0; i < firstDayWeek; i++)
        cout << setw(width) << " ";
    
    //  Prints remaining days
    for(; day <= lastDay; day++, i++)
    {
        cout << setw(width) << day;

        if(i == 6) 
        {
            cout << endl;
            i=-1;
        }
    }

    cout << endl;

}



int main()
{
    /*
    /* TEST - isLeapYear
	cout << "2017 ? " << isLeapYear(2017) << endl;
	cout << "2016 ? " << isLeapYear(2016) << endl;
	cout << "2015 ? " << isLeapYear(2015) << endl;
	cout << "2014 ? " << isLeapYear(2014) << endl;
	cout << "2000 ? " << isLeapYear(2000) << endl;
	cout << "1900 ? " << isLeapYear(1900) << endl;

    /* TEST - calcMonthCode
	cout << "Expected:6 \tReturn: " << calcMonthCode(1, 2016) << endl;
	cout << "Expected:0 \tReturn: " << calcMonthCode(1, 2017) << endl;
	cout << "Expected:6 \tReturn: " << calcMonthCode(1, 2000) << endl;
	cout << "Expected:2 \tReturn: " << calcMonthCode(2, 2016) << endl;
	cout << "Expected:3 \tReturn: " << calcMonthCode(2, 2017) << endl;
	cout << "Expected:3 \tReturn: " << calcMonthCode(3, 2017) << endl;
    */
    int year;

    cout << "Indique um ano: ";
    cin >> year;

    for(int i = 1; i < 13; i++)
        printMonth(i, year);
}