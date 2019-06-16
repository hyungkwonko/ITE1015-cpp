#include "calendar.h"

using namespace std;

Date::Date() { }

Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::~Date() { }

void Date::NextDay(int n) {
    int x = ComputeDaysFromYearStart(year, month, day);
    int daysToMonth[2][13] = {
        {0,31,59,90,120,151,181,212,243,273,304,334,365},
        {0,31,60,91,121,152,182,213,244,274,305,335,366}
    };

    if(n == 0) {
        cout << *this;
        return;
    } else if(n + x <= 0) {
        year -= 1;
        n = GetDayInYear(year) + n + x;
    } else if(n + x > GetDayInYear(year)) {
        n = n + x - GetDayInYear(year);
        year += 1;
    } else {
        n = n + x;
    }

    int flag;

    if(isLeap(year))
        flag = 1;
    else
        flag = 0;
    
    for(int i=0; i<13; i++) {
        if(daysToMonth[flag][i] >= n) {
            month = i;
            day = n - daysToMonth[flag][i-1];
            cout << *this;
            return;
        }
    }
}

bool Date::SetDate(int year, int month, int day) {
    if(month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12) {
        if(day <=0 || day > 31) {
            cout << "INVALID: " << year << "." << month << "."
                 << day << endl;
            return false;
        } else {
            this->year = year;
            this->month = month;
            this->day = day;
            cout << *this;
            return true;
        }
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day <=0 || day > 30) {
            cout << "INVALID: " << year << "." << month << "."
                 << day << endl;
            return false;
        } else {
            this->year = year;
            this->month = month;
            this->day = day;
            cout << *this;
            return true;
        } 
    } else if(month == 2 && isLeap(year)) {
        if(day <=0 || day > 29) {
            cout << "INVALID: " << year << "." << month << "."
                 << day << endl;
            return false;
        } else {
            this->year = year;
            this->month = month;
            this->day = day;
            cout << *this;
            return true;
        } 
    } else if(month == 2) {
        if(day <=0 || day > 28) {
            cout << "INVALID: " << year << "." << month << "."
                 << day << endl;
            return false;
        } else {
            this->year = year;
            this->month = month;
            this->day = day;
            cout << *this;
            return true;
        } 
    } else {
        cout << "INVALID: " << year << "." << month << "."
             << day << endl;
        return false;
    }
}

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::GetDayInYear(int year) {
    if(((year%4 == 0) && (year%100 != 0)) ||
       ((year%100 == 0) && (year%400 == 0)))
        return 366;
    else
        return 365;
}

bool Date::isLeap(int year) {
    if(((year%4 == 0) && (year%100 != 0)) ||
       ((year%100 == 0) && (year%400 == 0)))
        return true;
    else
        return false;
}

int Date::ComputeDaysFromYearStart(int year, int month, int day) {
    int daysToMonth[2][12] = {
        {0,31,59,90,120,151,181,212,243,273,304,334},
        {0,31,60,91,121,152,182,213,244,274,305,335}
    };
    if(isLeap(year))
        return daysToMonth[1][month-1] + day; 
    else
        return daysToMonth[0][month-1] + day;
}

void Date::setS(string s) {
    int tmp_y, tmp_m, tmp_d;
    string tok;
    string x[3];
    istringstream iss(s);
    for(int i=0; i<3; i++) {
        getline(iss, tok, '.');
        x[i] = tok;
    }
    tmp_y = atoi(x[0].c_str());
    tmp_m = atoi(x[1].c_str());
    tmp_d = atoi(x[2].c_str());
    SetDate(tmp_y, tmp_m, tmp_d);
}

ostream& operator<<(ostream& os, const Date& c) {
    os << "SET DATE: " << c.getYear() << "." << c.getMonth()
       << "." << c.getDay() << endl;
    return os;
}

istream& operator>>(istream& is, Date& c) {
    string s;
    is >> s;
    c.setS(s);
    return is;
}
