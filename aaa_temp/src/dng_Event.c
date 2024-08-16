#include "stk.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"


char gunler[20];
char no[30],day[30],totin[30],totout[30],outp[30];
char saat[20],gpo[20],gun[30],gunno[20],dayno[20];
int say = 0;
int noint,outpint,dayint,gunnoint,daynoint;


VarGet("hour",&saat);

printf("baslangic\n");

while(1)
{
   ListViewGetXY("ListView1", 0 , say , no );
   Convert_StringToInt(no,&noint);
   printf("\n%d",noint);
   
   ListViewGetXY("ListView1", 1 , say , day ); 
   printf(day);

   LabelGet("ELabel7","Text",gun);
   printf("\nBugun %s\n",gun);
   
   ListViewGetXY("ListView1", 2 , say , totin ); 
   printf(totin);
   
   ListViewGetXY("ListView1", 3 , say , totout ); 
   printf(totout);
   
   ListViewGetXY("ListView1", 4 , say , outp ); 
   Convert_StringToInt(outp,&outpint); 
   outpint = outpint+2;
   sprintf(gpo,"GPIO_%d",outpint);
   printf("\n%d\n",outpint);

   ListViewGetXY("ListView1", 5 , say , dayno );
   Convert_StringToInt(dayno,&daynoint);
   printf("\n%d",daynoint);  
   
   LabelGet("ELabel9","Text",gunno);
   Convert_StringToInt(gunno,&gunnoint);
   printf("\n%d",gunnoint);
   
   
   if(daynoint == gunnoint)
   {
       printf("\nif ici\n");

      if( strcmp(saat,totin)==0 || strcmp(saat,totout)==0)
       {
           if(strcmp(saat,totin)==0)
           {
               GPIO_Write(gpo,1);
               BuzzerSet(500);
               printf("\nRoleAcildi");
               Delay(70000);
           }
           if(strcmp(saat,totout)==0)
           {
               GPIO_Write(gpo,0);
               BuzzerSet(500);
               printf("\nRoleKapatildi");
               Delay(70000);      
           }
       }
       
   }

      say++;
   
   if(noint == 0)
   {
       printf("dongu bitti\n");
       break;
   }

}
