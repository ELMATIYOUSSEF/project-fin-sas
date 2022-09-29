#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include "Structers.h"
#include "prototipe.h"
#include "Menu.h"
#include "functions.h"




main(){
// head of programe
prdT[0].Code =1 ;
strcpy(prdT[0].Nom,"dolipran") ;
prdT[0].prix=20;
prdT[0].Quantie=30 ;

prdT[1].Code =2 ;
strcpy(prdT[1].Nom,"AAAA") ;
prdT[1].prix=40;
prdT[1].Quantie=50 ;

helloYoucode();
sleep(2);
PrintHead();
Menu();
}
