#pragma once
#include "Struct.h"


void placerpiece()
{

    int position = NULL;
    int noirblanc = NULL;
    char ch[1];
    int Piece;
    FILE* fichier = fopen("examenjuin.txt", "w");
    system("cls");
    printf("A quelle coordonnee en chiffre voulez-vous mettre votre piece ?\n");
    scanf("%d",&position);
    printf("A quelle coordonnee en lettre voulez-vous mettre votre piece ?\n");
    scanf(" %c",ch);

    if (fichier)
    {
        printf("Quel type de piece? (en chiffre)");
        scanf("%d",&Piece);

        if (Piece == 1)
        {
            fseek(fichier, position, SEEK_SET);
            printf("Quelle couleur 1=blanc 2=noir\n");
            scanf("%d",&noirblanc);
            if (noirblanc == 1)
            {
                fprintf(fichier, "1");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "2");
                fclose(fichier);
            }
        }
        if (Piece == 2)
        {
            fseek(fichier, position, SEEK_SET);
            printf("Quelle couleur 1=blanc 2=noir\n");
            scanf("%d",&noirblanc);
            if (noirblanc == 1)
            {
                fprintf(fichier, "3");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "4");
                fclose(fichier);
            }
        }
        if (Piece == 3)
        {
            fseek(fichier, position, SEEK_SET);
            printf("Quelle couleur 1=blanc 2=noir\n");
            scanf("%d",&noirblanc);
            if (noirblanc == 1)
            {
                fprintf(fichier, "5");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "6");
                fclose(fichier);
            }
        }
        if (Piece == 4)
        {
            fseek(fichier, position, SEEK_SET);
            printf("Quelle couleur 1=blanc 2=noir\n");
            scanf("%d",&noirblanc);
            if (noirblanc == 1)
            {
                fprintf(fichier, "7");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "8");
                fclose(fichier);
            }
        }
        if (Piece == 5)
        {
            fseek(fichier, position, SEEK_SET);
            printf("Quelle couleur 1=blanc 2=noir\n");
            scanf("%d",&noirblanc);
            if (noirblanc == 1)
            {
                fprintf(fichier, "9");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "A");
                fclose(fichier);
            }
        }
        if (Piece == 6)
        {
            fseek(fichier, position, SEEK_SET);
            printf("Quelle couleur 1=blanc 2=noir\n");
            scanf("%d",&noirblanc);
            if (noirblanc == 1)
            {
                fprintf(fichier, "B");
                fclose(fichier);
            }
            else
            {
                fprintf(fichier, "C");
                fclose(fichier);
            }
        }
    }

}

// essais en recursive mais qui ne marche pas :(...
//void recursive(int a_couleur, char a_ch, FILE a_fichier)
//{
  //  if (a_couleur == 1)
    //{
      //  fprintf(a_fichier, "%c", a_ch);
        //fclose(a_fichier);
    //}
    //else
   // {
     //   fprintf(a_fichier, "%c", a_ch);
       // fclose(a_fichier);
    //}
//}
//recursive(couleur, ch, fichier);
//tu mes la fonction tout en bas
//et le recursive(couleur, ch, fichier en dessous du scanf("%d", &couleur);