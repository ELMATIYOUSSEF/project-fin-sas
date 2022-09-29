// --------------------------------------------------           Menu            ---------
void Menu()
{
     Produit prd ;
     Vendre v ;
     int entre ,code ,reslteRecherche ;
    // prd = (Produit *)malloc(sizeof(Produit));
    do{
            system ("cls");
            PrintHead();
   // printf("%d\n",sizeof(prd));
    printf("\t bonjour !! \n \t s'il vous plait choisissez ce que vous voulez : \n");
    printf("\t 01 : Ajouter un nouveau produit . \n");
    printf("\t 02 : Ajouter plusieurs nouveaux produits . \n");
    printf("\n");
    printf("\t 03 : lister tous les produits . \n");
    printf("\t 04 : lister tous les produits selon l’ordre alphabetique  croissant du nom . \n");
    printf("\t 05 : lister tous les produits selon l’ordre  decroissant du prix . \n");
    printf("\n");
    printf("\t 06 : Acheter produit .\n");
    printf("\t 07 : Rechercher les produits . \n");
    printf("\n");
    printf("\t 08 : quantite de Produit . \n");
    printf("\t 09 : Alimenter le stock . \n");
    printf("\t 10 : Supprimer les produits. \n");
    printf("\t 11 : Afficher le total des prix des produits vendus en journee courante . \n");
    printf("\t 12 : Afficher la moyenne des prix des produits vendus en journee courante .  \n");
    printf("\t 13 : Afficher le Max des prix des produits vendus en journee courante . \n");
    printf("\t 14 : Afficher le Min des prix des produits vendus en journee courante . \n");
    printf("\t 15 : Afficher les produits vendre  . \n");
    printf("\t 16 : Quitter l'application  . \n");
        scanf("%d",&entre);
    switch(entre)
    {
    case 1 :
                ajouteProduit(prd);
        break;
    case 2 :
        ajoutePlusieursProduit(prd) ;
        break;
    case 3 :
        listerDeTousLesProduits() ;
        break;
    case 4 :
         listerDeTousLesProduitsCroNom();
        break;
    case 5 :
        listerDeTousLesProduitsDecPrix();
        break;
    case 6 :
         acheterLesProduits();
        break;
    case 7 :
        printf(" \t \n please give me code Product : \n ");
        scanf("%d",&code);
           rechercherProduits(code);
        break;
    case 8  :
    printf("\t \n donne le code de produit : ");
    scanf("%d",&code);
            quantiteProduits(code) ;
        break;
    case 9 :
    alimenterStock();
        break;
    case 10 :
        supprimerProduit();
        break;
    case 11 :
        afficherTotalPrixV();
        break;
    case 12 :
        afficherMoyennePrixV();
        break;
    case 13 :
        system("cls");
        system("COLOR 4");
         printf("\n\n\n\n Erreur je seus en court de rechercher un algorithme pour oubteni le les prix \n\n\n\n ");
        break;
    case 14 :
        system("cls");
        system("COLOR 4");
         printf("\n\n\n\n Erreur je seus en court de rechercher un algorithme pour oubteni le les prix \n\n\n\n ");
        break;
    case 15 :
            affichePVender();
        break ;
    case 16 :
        seeyou();
        sleep(2);
            system("exit");
        break ;

    }

}while(entre > 16 || entre <= 0);
}
// menu treir
// -------------------------------------------------- function  head of Program ---------
void printChar(char n , int num)
{
    while(num)
        {
            printf("%c",n);
            num--;
        }
}
void PrintHead()
{
    system("cls");
    system("COLOR 0A");
    printf("\t \t");
    printChar('=',70);
    printf("\n \t \t");
    printChar('=',23);
    printf("# Gestion de Pharmacie #");
    printChar('=',23);
    printf("\n \t  \t");
    printChar('=',70);
    printf("\n \n \n \n \n");
}
