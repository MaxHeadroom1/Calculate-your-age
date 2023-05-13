#include <iostream>
#include <ctime>
using namespace std;
   int main()
{
      std::time_t t = std::time(0); //get time now
      std::tm* now = std::localtime(&t);
          int nyear = now->tm_year + 1900 ; //year
          int nmonth = now->tm_mon + 1 ; //month
          int nday = now->tm_mday ; //day
          int tage, tmonth, tday; //variable to calculate age and month and day
          int year; //year input
          int month; // month input
          int day;  // day input
          int daytype; // month 30 day's and 31 day's
         /*Start*/
  cout <<"\n\n----------------------\n"
       <<"| Calculate Your Age |\n"
       <<"----------------------\n";
       /*Get Info*/
        cout <<"\nPlease Enter Your Year\n";
        /*get birth year*/
        cin >>year;
        cout <<"\nPlease Enter Your Month\n";
        /*get birth month*/
        cin >>month;
        /*if user enter month = 2[29 or 28 but i set 30 minimum value] or 4 or 6 or 9 or 11 , set daytybe = 30 day*/
        /*if user enter month = 1 or 3 or 5 or 7 or 8 or 10 or 12, set daytybe = 31 day*/
        if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {daytype = 30;}
        else {daytype = 31;} 
        cout <<"\nPlease Enter Your day\n";
        /*get birth day*/
        cin >>day;
        /*if birth month smaller than current month we have a method*/
        if (month > nmonth) {
         tage = nyear - year - 1;
         tmonth = 12 - ( month - nmonth );
         tday = (daytype-day) + nday;
        };
        /*if current month smaller than birth month we have a method*/
        if (month < nmonth) {
         tage = nyear - year;
         tmonth = nmonth - month;
         tday = (daytype-day) + nday;
        };
        /*in both statment day equations are same*/
        
        // month = nmonth and day=<nday
         if (month == nmonth && nday >= day) {
         tage = nyear - year;
         tmonth = nmonth - month;
         tday = nday - day;
         cout << "\nHappy Birth Day To You!\n";
        };
         // month = nmonth and day=<nday
         if (month == nmonth && nday < day) {
         tage = nyear - year - 1;
        tmonth = 11;
         tday =daytype - ( day - nday);
        };
        /*finally get output*/
        cout << "You Have " << tage << " years\n";
        cout << "You Have " << tmonth << " Month\n";
        cout << "You Have " << tday << " Days\n";
        return main();
                                /***************************
                                 * THIS APP BY MOHAMED ALI *
                                 *        13/5/2023        *
                                 ***************************/
}