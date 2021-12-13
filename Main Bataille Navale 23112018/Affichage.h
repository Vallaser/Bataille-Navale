/*

    Head du fichier Affichage.c

*/

#ifndef AFFICHAGE_H_INCLUDED
#define AFFICHAGE_H_INCLUDED

    void chargerIcone(SDL_Surface *icone);
    void affichageEcran(SDL_Surface *modeIA, SDL_Surface *modePvp, SDL_Surface *jouer, SDL_Rect positionJouer, SDL_Surface *ecran, SDL_Surface *modeDemploi, SDL_Surface *menuPrincipal, SDL_Surface *retour, SDL_Surface *menuMode, SDL_Rect positionEcran, SDL_Rect positionRetour, int *qC);


#endif // AFFICHAGE_H_INCLUDED
