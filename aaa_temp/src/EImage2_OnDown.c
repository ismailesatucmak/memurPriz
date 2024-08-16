#include "stk.h"
#include "stdio.h"

BuzzerSet(50);

int q,mininint,hourinint,houroutint,minoutint;
char hourin[20],minin[20],hourout[20],minout[20];
char a[30],b[30],c[30],d[30];

VarGet("no",&q);
q++;
VarSet("no",&q);

LabelGet("ELabelBox7","Text",hourin);
LabelGet("ELabelBox8","Text",minin);
LabelGet("ELabelBox10","Text",hourout);
LabelGet("ELabelBox9","Text",minout);


Convert_StringToInt(minin,&mininint);
Convert_StringToInt(hourin,&hourinint);
Convert_StringToInt(minout,&minoutint);
Convert_StringToInt(hourout,&houroutint);


if(mininint >= 0 && mininint <= 9)
{
    sprintf(a,"0%d",mininint);
    LabelSet("ELabelBox8","Text",a);
}

if(hourinint >= 0 && hourinint <= 9)
{
    sprintf(b,"0%d",hourinint);
    LabelSet("ELabelBox7","Text",b);
}

if(minoutint >= 0 && minoutint <= 9)
{
    sprintf(c,"0%d",minoutint);
    LabelSet("ELabelBox9","Text",c);
}

if(houroutint >= 0 && houroutint <= 9)
{
    sprintf(d,"0%d",houroutint);
    LabelSet("ELabelBox10","Text",d);
}




