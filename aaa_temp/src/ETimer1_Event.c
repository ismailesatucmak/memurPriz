#include "stk.h"
#include "stdio.h"

unsigned char day , month , year , min , hour ;
int day_of_week;

dateGet(&day,&month,&year);

if (month < 3) {
        month += 12;
        year--;
    }
day_of_week = (day + (13 * (month + 1) / 5) + (year % 100) +((year % 100) / 4) + ((year / 100) / 4) + 5 * (year / 100)) % 7;

 switch (day_of_week) {
        case 0:
            printf("The day is Saturday.\n");
            LabelSet("ELabel7","Text","Cumartesi");
            LabelSet("ELabel9","Text","0");
            Delay(1000);
            break;
        case 1:
            printf("The day is Sunday.\n");
            LabelSet("ELabel7","Text","Pazar");
            LabelSet("ELabel9","Text","1");
            Delay(1000);
            break;
        case 2:
            printf("The day is Monday.\n");
            LabelSet("ELabel7","Text","Pazartesi");
            LabelSet("ELabel9","Text","2"); 
            Delay(1000);
            break;
        case 3:
            printf("The day is Tuesday.\n");
            LabelSet("ELabel7","Text","Salı");
            LabelSet("ELabel9","Text","3");
            Delay(1000);
            break;
        case 4:
            printf("The day is Wednesday.\n");
            LabelSet("ELabel7","Text","Çarşamba");
            LabelSet("ELabel9","Text","4");
            Delay(1000);
            break;
        case 5:
            printf("The day is Thursday.\n");
            LabelSet("ELabel7","Text","Perşembe");
            LabelSet("ELabel9","Text","5");
            Delay(1000);
            break;
        case 6:
            printf("The day is Friday.\n");
            LabelSet("ELabel7","Text","Cuma");
            LabelSet("ELabel9","Text","6");
            Delay(1000);
            break;
    }