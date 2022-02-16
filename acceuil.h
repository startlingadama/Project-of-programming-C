// Ce programme represente le programme acceuil de l'executable notefice
// Il permet de contenir les fonctions dependantes de main

#include <stdlib.h>
#include <stdio.h>


/* definitions de fonctions  */

// les prototypes  de fonctions definies
void titre(void);

// la fonciton de titre


void titre(void){
    puts("#############################################################################################################################");
    puts("#           *         *          *         **********   *******         ******   *    ********   *     *   *******          #");
    puts("#           *  *      *      *       *          *       *               *        *    *      *   *     *   *                #");
    puts("#           *   *     *     *          *        *       *               *        *    *          *     *   *                #");
    puts("#           *    *    *    *            *       *       *******         ******   *    *          *******   *******          #");
    puts("#           *     *   *    *            *       *       *               *        *    *          *     *   *                #");
    puts("#           *      *  *    *            *       *       *               *        *    *          *     *   *                #");
    puts("#           *       * *      *       *          *       *               *        *    *      *   *     *   *                #");
    puts("#           *         *          *              *       *******         *        *    ********   *     *   *******          #");
    puts("#############################################################################################################################\n");
    puts("                                       1. CREER UN NOUVEAU FICHIER POUR LA NOTE");
    puts("                                       2. OUVRIR UNE NOTE EXISTANTE");
    puts("                                       3. APPRENDRE VOTRE NOTE");
    puts("                                       5. CONVERTIR EN PDF");
    puts("                                       6. QUITTER\n");
}



