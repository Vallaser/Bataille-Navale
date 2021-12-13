/*

    Fichier Audio qui va générer tous les différents sons du jeu

*/

#include <stdlib.h>
#include <stdbool.h>
#include <D:\CodeBlocks\SDL-devel-1.2.15-mingw32\SDL-1.2.15\include\SDL_image.h>
#include <D:\CodeBlocks\FMODSTUDIO/fmod.h>
#include "Audio.h"

void sonMenu(FMOD_SYSTEM *system, FMOD_SOUND *musique, FMOD_RESULT resultat)
{
/* Son Menu */

    if(resultat!=NULL)
    {
        FMOD_Sound_Release(musique);
        FMOD_System_Close(system);
        FMOD_System_Release(system);
    }

    resultat = FMOD_System_CreateSound(system, "Sound/Musique Menu.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_LOOP_NORMAL | FMOD_CREATESTREAM, 0, &musique);
    FMOD_Sound_SetLoopCount(musique, -1); // On active la répétition de la musique à l'infini
    FMOD_System_PlaySound(system, FMOD_CHANNEL_FREE, musique, 0, NULL); // On joue la musique
}

void sonInGame(FMOD_SYSTEM *system, FMOD_SOUND *musique, FMOD_RESULT resultat)
{
/* Son InGame */

    if(resultat!=NULL)
    {
        FMOD_Sound_Release(musique);
        FMOD_System_Close(system);
        FMOD_System_Release(system);
    }

    resultat = FMOD_System_CreateSound(system, "Sound/Musique InGame.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_LOOP_NORMAL | FMOD_CREATESTREAM, 0, &musique);
    FMOD_Sound_SetLoopCount(musique, -1); // On active la répétition de la musique à l'infini
    FMOD_System_PlaySound(system, FMOD_CHANNEL_FREE, musique, 0, NULL); // On joue la musique
}

void libererSon(FMOD_SYSTEM *system, FMOD_SOUND *musique, FMOD_RESULT resultat)
{
/* Libérer espace mémoire du son */

    FMOD_Sound_Release(musique);
    FMOD_System_Close(system);
    FMOD_System_Release(system);
}
