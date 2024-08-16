
#include "stk.h"
#include "stdio.h"

BuzzerSet(50);

ListViewSet("ListView1","Row2","");
ListViewSet("ListView1","Row3","");
ListViewSet("ListView1","Row4","");

GPIO_Write("GPIO_3",0);
GPIO_Write("GPIO_4",0);
GPIO_Write("GPIO_5",0);

//ListViewSet("ListView1","Delete_Selected",0);

ListViewSet("ListView1","update",0);
