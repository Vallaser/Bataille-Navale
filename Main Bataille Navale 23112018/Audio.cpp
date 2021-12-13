#include <stdlib.h>
#include <stdio.h>
#include <D:\CodeBlocks\SDL-devel-1.2.15-mingw32\SDL-1.2.15\include\SDL_image.h> // Header image du fichier SDL dans CodeBlocks
#include <D:\CodeBlocks\SDL-devel-1.2.15-mingw32\SDL-1.2.15\lib\SDL_image.lib>
#include <D:\CodeBlocks\FMODSTUDIO/fmod.h>
#include "Audio.h"


void son()
{

/* Paramètre son */
FMOD_SYSTEM *system;
FMOD_SOUND *musique;
FMOD_RESULT resultat;
FMOD_System_Create(&system);
FMOD_System_Init(system, 1, FMOD_INIT_NORMAL, NULL);
    /* Son */
                                    resultat = FMOD_System_CreateSound(system, "Musique InGame.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_LOOP_NORMAL | FMOD_CREATESTREAM, 0, &musique);
                                    FMOD_Sound_SetLoopCount(musique, -1); // On active la répétition de la musique à l'infini
                                    FMOD_System_PlaySound(system, FMOD_CHANNEL_FREE, musique, 0, NULL); // On joue la musique
}
