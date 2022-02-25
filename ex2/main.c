#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    short jour;
    short mois;
    short annee;
}DATE;
typedef struct {
    int numero;
    char titre[20];
    DATE annee_edition;
    char categorie;
    short nombre_exemplaire;
}LIVRE;

int main()
{
    LIVRE tab[3];
    int  i,total;

    for(i=0;i<4;i++){
        printf("Livre numero %d\n",i+1);

        printf("Entrez numero\n");
        fflush(stdin);
        scanf("%d",&(tab[i].numero));

        printf("Entrez titre\n");
        fflush(stdin);
        gets(tab[i].titre);

        printf("Entrez la date\n");
        printf("jour: ");
        fflush(stdin);
        scanf("%hd",&(tab[i].annee_edition.jour));
        printf("\n");
        printf("mois: ");
        scanf("%hd",&(tab[i].annee_edition.mois));
        printf("\n");
        printf("annee: ");
        scanf("%hd",&(tab[i].annee_edition.annee));
        printf("\n");

        printf("Entrez la categorie\n");
        fflush(stdin);
        tab[i].categorie=getchar();

        printf("Entrez le nombre d exemplaire\n");
        fflush(stdin);
        scanf("%hd",&(tab[i].nombre_exemplaire));

        printf("\n");
    }

    for(i=0,total=0;i<4;i++){
        printf("Livre numero %d\n",i+1);
        printf("%d\t", tab[i].numero);
        printf("%s\t", tab[i].titre);
        printf("%hd\t", tab[i].annee_edition.jour);
        printf("%hd\t", tab[i].annee_edition.mois);
        printf("%hd\t", tab[i].annee_edition.annee);
        printf("%c\t", tab[i].categorie);
        printf("%hd\t", tab[i].nombre_exemplaire);
        total+=tab[i].nombre_exemplaire;
        printf("\n");
    }
    printf("le nombre total d exemplaire est de %d", total);
    return 0;
}
