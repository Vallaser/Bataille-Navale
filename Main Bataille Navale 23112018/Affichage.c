/*

    Fichier Audio qui va générer tous les différents sons du jeu

*/

#include <stdlib.h>
#include <stdio.h>
#include <D:\CodeBlocks\SDL-devel-1.2.15-mingw32\SDL-1.2.15\include\SDL_image.h>
#include <D:\CodeBlocks\FMODSTUDIO/fmod.h>

#include "Affichage.h"
#include "constantes.h"


void chargerIcone(SDL_Surface *icone)
{
    icone = IMG_Load("Sprites/Icone.png");
    SDL_WM_SetIcon(icone,NULL); // Doit se trouver avant SetVideoMode / NULL pour la transparence
}

void affichageEcran(SDL_Surface *modeIA, SDL_Surface *modePvp, SDL_Surface *jouer, SDL_Rect positionJouer, SDL_Surface *ecran, SDL_Surface *modeDemploi, SDL_Surface *menuPrincipal, SDL_Surface *retour, SDL_Surface *menuMode, SDL_Rect positionEcran, SDL_Rect positionRetour, int *qC)
{
    ecran = SDL_SetVideoMode(HAUTEUR_FENETRE, LARGEUR_FENETRE, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_FULLSCREEN);

    if(*qC == 1)
    {
        chargerMenuPrincipal(jouer,positionJouer,ecran,menuPrincipal,positionEcran);
    }

    if(*qC == 2)
    {
        chargerMenuMode(jouer,positionJouer,ecran,menuMode,retour,positionEcran,positionRetour);
    }

    if(*qC == 3)
    {
        chargerModeDemploi(ecran,modeDemploi,retour,positionEcran,positionRetour);
    }

    if(*qC == 4)
    {
        chargerPlayerVsPlayer(ecran,modePvp,retour,positionEcran,positionRetour);
    }
    if(*qC == 5)
    {
        chargerPlayerVsIA(ecran,modeIA,retour,positionEcran,positionRetour);
    }
}

void chargerMenuPrincipal(SDL_Surface *jouer, SDL_Rect positionJouer, SDL_Surface *ecran, SDL_Surface *menuPrincipal, SDL_Rect positionEcran)
{
    menuPrincipal = IMG_Load("Sprites/Menu Principal FS.png");
    SDL_BlitSurface(menuPrincipal, NULL, ecran, &positionEcran); // On colle le fond sur l'écran

    SDL_Flip(ecran);
}

void chargerMenuMode(SDL_Surface *jouer, SDL_Rect positionJouer, SDL_Surface *ecran, SDL_Surface *menuMode, SDL_Surface *retour, SDL_Rect positionEcran, SDL_Rect positionRetour)
{
    menuMode = IMG_Load("Sprites/Menu Mode FS.jpg");
    SDL_BlitSurface(menuMode, NULL, ecran, &positionEcran);

    retour = IMG_Load("Sprites/Retour.png");
    SDL_BlitSurface(retour, NULL, ecran, &positionRetour);

    SDL_Flip(ecran);
}

void chargerModeDemploi(SDL_Surface *ecran, SDL_Surface *modeDemploi, SDL_Surface *retour, SDL_Rect positionEcran, SDL_Rect positionRetour)
{
    modeDemploi = IMG_Load("Sprites/Mode demploi.JPG");
    SDL_BlitSurface(modeDemploi, NULL, ecran, &positionEcran);

    retour = IMG_Load("Sprites/Retour.png");
    SDL_BlitSurface(retour, NULL, ecran, &positionRetour);

    SDL_Flip(ecran);
}

void chargerPlayerVsPlayer(SDL_Surface *ecran, SDL_Surface *modePvp, SDL_Surface *retour, SDL_Rect positionEcran, SDL_Rect positionRetour)
{
    modePvp = IMG_Load("Sprites/Player Vs Player FS.jpg");
    SDL_BlitSurface(modePvp, NULL, ecran, &positionEcran);

    retour = IMG_Load("Sprites/Retour.png");
    SDL_BlitSurface(retour, NULL, ecran, &positionRetour);

    SDL_Flip(ecran);
}

void chargerPlayerVsIA(SDL_Surface *ecran, SDL_Surface *modeIA, SDL_Surface *retour, SDL_Rect positionEcran, SDL_Rect positionRetour)
{
    modeIA = IMG_Load("Sprites/Player Vs IA FS.jpg");
    SDL_BlitSurface(modeIA, NULL, ecran, &positionEcran);

    retour = IMG_Load("Sprites/Retour.png");
    SDL_BlitSurface(retour, NULL, ecran, &positionRetour);

    SDL_Flip(ecran);
}
