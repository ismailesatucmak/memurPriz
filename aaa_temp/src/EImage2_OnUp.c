
#include "stk.h"
#include "stdio.h"

char minin[20],hourin[20],totin[40];
char minout[20],hourout[20],totout[40];
char tot[30],day[20],outp[20];
int no,say;

//LabelGet("ELabelBox1","Text",day);
LabelGet("ELabelBox3","Text",outp);
LabelGet("ELabelBox7","Text",hourin);
LabelGet("ELabelBox8","Text",minin);
LabelGet("ELabelBox10","Text",hourout);
LabelGet("ELabelBox9","Text",minout);

VarGet("no",&no);

sprintf(totin,"%s:%s",hourin,minin);
printf(totin);

sprintf(totout,"%s:%s",hourout,minout);
printf(totout);

sprintf(tot,"%d^%s^%s^%s^%s",no,day,totin,totout,outp);

//ListViewSet("ListView1","insert",tot);

ListViewSetXY("ListView1", 5 , 0 , "2" );
ListViewSetXY("ListView1", 5 , 1 , "3" );
ListViewSetXY("ListView1", 5 , 2 , "4" );
ListViewSetXY("ListView1", 5 , 3 , "5" );
ListViewSetXY("ListView1", 5 , 4 , "6" );
ListViewSetXY("ListView1", 5 , 5 , "0" );
ListViewSetXY("ListView1", 5 , 6 , "1" );

ListViewSet("ListView1","Row2",totin);
ListViewSet("ListView1","Row3",totout);
ListViewSet("ListView1","Row4",outp);


TimerSet("dng","Enable","True");
ListViewSet("ListView1","update",0);
