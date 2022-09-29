//////////////////////////////////////////////// Ma function ////////////////////////////////////////
// hello youcode

helloYoucode()
{
    system("COLOR 1");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t _ __\n"
"\t\t\t\t/// / __ /7/7 _    _ __  _         __  _    _// __\n"
 "\t\t\t\t/ ` /,'o/////,'o|   \V /,'o| /7/7 ,',','o| ,'o/,'o/ \n"
"\t\t\t\t/_n_/ |_(//// |_,'    )/ |_,'/__/  \_\ |_,'|__/ |_( \n"
 "\t\t\t\t                    //                            \n");
}
// function seeyou whine you exist Program
seeyou()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t.oPYo. .oPYo. .oPYo.   o    o .oPYo. o    o\n"
"\t\t\t\tYb..   8oooo8 8oooo8   8    8 8    8 8    8 \n"
"\t\t\t\t  'Yb. 8.     8.       8    8 8    8 8    8 \n"
"\t\t\t\t`YooP' `Yooo' `Yooo'   `YooP8 `YooP' `YooP' \n"
"\t\t\t\t:.....::.....::.....::::....8 :.....::.....:\n"
"\t\t\t\t:::::::::::::::::::::::::ooP'.::::::::::::::\n"
"\t\t\t\t:::::::::::::::::::::::::...::::::::::::::::\n");
}
//// function ajoute un produit
 int index = 1  ,i , indexVendre ,totalQvendre;
 Produit prdT[150] ;
 Vendre vendre[150];
 ajouteProduit(Produit prd)
{
      int test;
        do{

    PrintHead();
    printf("\t donne le code de produit \n");
    scanf("%d",&prd.Code);
    test = isExist(prd.Code);
    if (test!=0)
            {
               printf("ce code deja existe !!!! \n");
            }
           else
            {
    printf("\t donne le nom de produit \n");
    scanf("%s",prd.Nom);
    printf("\t donne le Quantité de produit \n");
    scanf("%d",&prd.Quantie);
    printf("\t donne le prix de produit \n");
    scanf("%f",&prd.prix);
    prd.prix=(prd.prix+(prd.prix*0,15));
    prdT[index++] =prd ;
            }
     }while(test);
    system("PAUSE") ;
    PrintHead();
    Menu();
}
//// function Ajouter plusieurs nouveaux produits
  ajoutePlusieursProduit(Produit prd)
    {
        PrintHead();
         int numbreProduit ;
                printf("\t donne le nombre de produit se que tu veux ajoute \n ");
                scanf("%d",&numbreProduit) ;
            //    prd=(Produit *)realloc( numbreProduit , sizeof(prd));
            //     prd=prd+1;
    for (i=1 ; i<=numbreProduit; i++)
    {
        int test;
        do{


             printf("\t donne le code de produit \n");
             int code ;
           scanf("%d",&prd.Code);
             test = isExist(prd.Code);
           if (test!=0)
            {
               printf("ce code deja existe !!!! \n");
            }
           else
            {
            printf("\t donne le nom de produit \n");
            scanf("%s",prd.Nom);
            printf("\t donne le Quantité de produit \n");
            scanf("%d",&prd.Quantie);
            printf("\t donne le prix de produit \n");
            scanf("%f",&prd.prix);
            prd.prix=(prd.prix+(prd.prix*0,15));
            printChar('_',70);
            printf("\n \n");
                prdT[index++] =prd ;
            }
        }while(test);

    }

        system("PAUSE") ;
        PrintHead();
        Menu();

}
// function isExist() pour verifier que le code dons le tablou ou bien no .
int isExist(int code)
{
   int i ;
    int test = 0 ;
    for (i=0 ; i< index ; i++)
        {
            if (prdT[i].Code == code)
                {
                  test++;
                }
        }
        return test ;
}

// function pour affiche One product ;
afficheOneProduct(int i)
{
    printf(" code :%d \n Nom :%s \nQuantite :%d \nPrix :%.2f \n",prdT[i].Code,prdT[i].Nom,prdT[i].Quantie,prdT[i].prix);
}
//// function lister tous les produits
 listerDeTousLesProduits()
{
    PrintHead();
    for (i=0 ; i<index ; i++)
        {
            printf("\t %d : le code de produit et : %d \n",i+1,prdT[i].Code);
            printf("\t %d : le Nom de produit et : %s \n",i+1,prdT[i].Nom);
            printf("\t %d : le Quantie de produit et : %d \n",i+1,prdT[i].Quantie);
            printf("\t %d : le prix de produit et : %.2f \n",i+1,prdT[i].prix);
            printChar('_',70);
            printf("\n\n");
        }
        system("PAUSE");
       Menu();

}
//// function lister tous les produits selon l’ordre  décroissant du prix.
 listerDeTousLesProduitsDecPrix()
{
    int i , j ;
  Produit temprd[10];
  for (i = 0 ; i< index-1 ; i++)
    {
        for(j=i+1 ; j<index ;j++)
        {
            if(prdT[i].prix < prdT[j].prix)
            {
                temprd[i]=prdT[i] ;
                prdT[i]=prdT[j];
                prdT[j] = temprd[i];
            }
        }
    }
     listerDeTousLesProduits() ;
}
//// function lister tous les produits selon l’ordre alphabétique  croissant du nom.
 listerDeTousLesProduitsCroNom()
{
  int i , j ;
  Produit temprd[10];
  for (i = 0 ; i< index-1 ; i++)
    {
        for(j=i+1 ; j<index ;j++)
        {
            if(strcmp(prdT[i].Nom,prdT[j].Nom)> 0)
            {
                temprd[i]=prdT[i] ;
                prdT[i]=prdT[j];
                prdT[j] = temprd[i];
            }
        }
    }
     listerDeTousLesProduits() ;
}
//// function Acheter produit

 acheterLesProduits()
{
    time_t timestamp = time(NULL) ;
    struct  tm * dt =localtime( & timestamp );
    PrintHead();
     for (i=0 ; i<index ; i++)
        {
            printf("\t %d : le code de produit et : %d \n",i+1,prdT[i].Code);
            printf("\t %d : le Nom de produit et : %s \n",i+1,prdT[i].Nom);
            printf("\t %d : le Quantie de produit et : %d \n",i+1,prdT[i].Quantie);
            printf("\t %d : le prix de produit et : %.2f \n",i+1,prdT[i].prix);
            printChar('_',70);
            printf("\n\n");
        }
    int code , Quantite;
    printf("\n");
    printf("\t \n donnee le code de produit que vous voulez vendre : \n");
    scanf("%d",&code);
    printf("\t \n donnee le quantite de produit que vous voulez vendre : \n");
    scanf("%d",&Quantite);
    totalQvendre+=Quantite ;
     int test=0 , indexDeProduit ;
     for (i=0; i< index ;i++)
    {
         if(prdT[i].Code == code){
                if(prdT[i].Quantie > Quantite){
                        vendre[indexVendre].Quantite =Quantite ;
                        vendre[indexVendre].Code= code ;
                        vendre[indexVendre].day= dt->tm_mday;
                        vendre[indexVendre].month= dt->tm_mon  ;
                        vendre[indexVendre].year=dt->tm_year +1900 ;
                    prdT[i].Quantie -= Quantite;
                    printf("\n \t votre demande bien enregistre \n");
                   //printf("\n \t --------- \t %d \n",dt->tm_year));
                    system("pause");
                    indexVendre++;
                }else
                    printf("\n \t Error le stock insuffisant \n");
         }
    }
    system("PAUSE");
       Menu();
}
// function pour afficher les produit vender
affichePVender()
{
    int i ;
    for( i=0 ; i < indexVendre ; i++ )
    {
        printf(" \n \t code :%d  Quantite  : %d date d'achat : %d/%d/%d \n", vendre[i].Code ,vendre[i].Quantite, vendre[i].day,vendre[i].month,vendre[i].year);
    }
    system("\t PAUSE");
    Menu();
}

//// function Rechercher les produits
 rechercherProduits(int code)
 {
    int i , test =0;
    for ( i=0 ; i< index+1 ; i++ )
        {

            if ( prdT[i].Code == code)
                {
                    test++;
                    afficheOneProduct(i);
                }
        }
        if (!test)
            {
                printf("le code ne pas existe sur ");
            }

        system("PAUSE") ;
        PrintHead();
        Menu();

 }
//// function recherche par  Quantité ;
 quantiteProduits(int code)
{
     int i , test =0 ,numbreQen;
    for ( i=0 ; i< index+1 ; i++ )
        {

            if ( prdT[i].Code == code)
                {
                     int i , test =0;
    for ( i=0 ; i< index+1 ; i++ )
        {

            if ( prdT[i].Code == code)
                {
                    test++;
                   printf(" \t \n Quantite de le produit %s et : %d \n",prdT[i].Nom,prdT[i].Quantie);
                   printf("donne le nombre de produit que vous voulez ajoute au stoke \n ");
                   scanf("%d",&numbreQen);
                   prdT[i].Quantie += numbreQen ;
                   printf(" \t \n Quantite de le produit %s et : %d \n",prdT[i].Nom,prdT[i].Quantie);

                }
        }
        if (!test)
            {
                printf("le code ne pas existe sur ");
            }

        system("PAUSE") ;
        PrintHead();
        Menu();
                  }
         }
}

//// function Alimenter le stock
alimenterStock()
{
    for(i=0; i<index ;i++)
        {
            if(prdT[i].Quantie<= 3)
                {
                     printf(" \n \t code :%d  Quantite  : %d  \n", prdT[i].Code ,prdT[i].Quantie);
                }
        }
          system("PAUSE") ;
          PrintHead();
          Menu();
}
//// function Supprimer les produits;
supprimerProduit()
{
    int i=0 ,j=0 , code ;
    printf(" \t Donner le code de produit que vous voulez Suppreme : \n ");
    scanf("%d",&code);
    for (i=0 ; i<index ; i++)
        {
            if ( prdT[i].Code == code)
                {
                    for (j=i;j<index ; j++)
                        {
                            prdT[i]=prdT[i+1];
                        }
                }

        }
        index -- ;
        listerDeTousLesProduits() ;
}
//// function Afficher le total des prix des produits vendus en journée courante
 afficherTotalPrixV()
{
     float total=0 ;
    time_t timestamp = time(NULL) ;
    struct  tm * dt =localtime( & timestamp );
    for (i=0 ; i< indexVendre ; i++)
        {
    if (vendre[i].day == dt->tm_mday && vendre[i].month ==dt->tm_mon && vendre[i].year == dt->tm_year +1900)
        {

            if(prdT[i].Code==vendre[i].Code)
                {
                    int prix = prdT[i].prix ;
                    total += vendre[i].Quantite * prix ;
                }
        }
        }
   printf("\t \n total des prix des Produits  %.2f \n", total);
   system("PAUSE") ;
        PrintHead();
        Menu();



}
//// function Afficher la moyenne des prix des produits vendus en journée courante
afficherMoyennePrixV()
{

    float total;
    float Moyenne ;
     time_t timestamp = time(NULL) ;
    struct  tm * dt =localtime( & timestamp );
    for (i=0 ; i< indexVendre ; i++)
        {
    if (vendre[i].day == dt->tm_mday && vendre[i].month ==dt->tm_mon && vendre[i].year == dt->tm_year +1900)
        {

            if(prdT[i].Code==vendre[i].Code)
                {
                    int prix = prdT[i].prix ;
                    total += vendre[i].Quantite * prix ;
                }
                Moyenne = total/totalQvendre;
        }
        }


    printf("\t \n Moyenne des prix des Produits  %.2f ", Moyenne);
    system("PAUSE") ;
     PrintHead();
        Menu();
}
//function Triee  table vender
trierVendre()
{
      time_t timestamp = time(NULL) ;
    struct  tm * dt =localtime( & timestamp );
    for (i=0 ; i< indexVendre ; i++)
        {
    if (vendre[i].day == dt->tm_mday && vendre[i].month ==dt->tm_mon && vendre[i].year == dt->tm_year +1900)
        {

            if(prdT[i].Code==vendre[i].Code)
                {
    Vendre vtemp[1] ;
    for (i=0 ; i<indexVendre ; i++){
        if (prdT[i].prix>prdT[i+1].prix)
            {
                vtemp[1]= vendre[i];
                vendre[i] = vendre[i+1];
                vendre[i+1] = vtemp[1];
            }
                                    }
                }
        }
        }
        return vendre;
}
//// function Afficher le Max des prix des produits vendus en journée courante
//Produit v;
afficherMaxPrixV()
{
// v = trierVendre();
// printf("MAx : %d",v[index].prix);
}
//// function Afficher le Min des prix des produits vendus en journée courante
afficherMinPrixV()
{

//v = trierVendre();
//printf("Min :%d",v[0].prix);
}

