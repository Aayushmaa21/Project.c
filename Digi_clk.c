//Digital Clock
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
 int main(){
    time_t t;
    struct tm* real_time;
   
    while(1){
        time(&t);

        real_time=localtime(&t);

        int hour = real_time->tm_hour;
        int minute = real_time->tm_min;
        int second = real_time->tm_sec;
        int day = real_time->tm_mday;
        int month = real_time->tm_mon + 1;   // +1 because months start from 0
        int year = real_time->tm_year + 1900;
        system("cls");

       /* second++;
        if(second == 60){
            minute +=1;
            second = 0;
        }

        if (minute == 60){
            hour+=1;
            minute =0;
    }
       if (hour == 24){
            hour= minute = second =0;
       }*/
           printf("Today's Date is %02d-%02d-%d", day, month, year);
           printf("\n--------------------------\n");
           printf("DIGITAL CLOCK\n");
           printf("%02d : %02d : %02d ",hour, minute, second);
          
          sleep(1);  
    
    

}

    return 0;
 }