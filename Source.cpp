#include "Struct.h"
int main(void)
{
    FILE* fichier = fopen("DemianC.txt", "r+");
    int ligne;
    int colonnes;
    // int x [8]= {'1','2','3','4','5','6','7','8'};
     //int y[8] = { 'a','b','c','d','e','f','g','h'};
    int i;
    int j;
    int Couleur;


    printf("Entrer le nombre de rangees => ");
    scanf("%d", &ligne);
    printf("\n");
    printf("Entrer le nombre de colonnes => ");
    scanf("%d", &colonnes);
    printf("\n");
    printf("============================================== \n");
    printf("voici votre Echiquier: \n");
    printf("\n Les - X - representent les cases noires\n");
    printf("\n");
    printf("Les trous representent les cases blanches\n");
    printf("\n");
    printf("============================================== \n");
    printf("\n");
    Couleur = 1;

    for (i = 1; i <= ligne; i++)
    {
        for (j = 1; j <= colonnes; j++)
        {
            if (Couleur == 1)
            {
                printf("0");
                fprintf(fichier, "0");
            }
            else
            {
                printf("X");
                fprintf(fichier, "X");
            }

            Couleur *= -1;
        }

        if (colonnes % 2 == 0)
        {
            Couleur *= -1;
        }

        printf("\n");
        fprintf(fichier, "\n");
    }

    printf("==============================================");
    system("pause");
    fclose(fichier);
    printf("\n");
    printf("\n");
    printf("============================================== \n");
    placerpiece();
    return 0;
}


