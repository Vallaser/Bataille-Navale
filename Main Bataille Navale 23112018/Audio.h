/*

    Head du fichier Audio.c

*/

#ifndef AUDIO_H_INCLUDED
#define AUDIO_H_INCLUDED


    void sonInGame(FMOD_SYSTEM *system, FMOD_SOUND *musique, FMOD_RESULT resultat); // Musique en jeu
    void sonMenu(FMOD_SYSTEM *system, FMOD_SOUND *musique, FMOD_RESULT resultat); // Musique Menu
    void libererSon(FMOD_SYSTEM *system, FMOD_SOUND *musique, FMOD_RESULT resultat);

#endif // AUDIO_H_INCLUDED
