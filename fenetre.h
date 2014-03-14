#ifndef LIB_H
#define LIB_H

/** Le type fenetre **/
typedef struct Fenetre Fenetre;

Fenetre *fenetre_creer();

void fenetre_detruire(Fenetre **fenetre);

void fenetre_afficher(Fenetre *fen);

void fenetre_changer_titre(Fenetre *fen, char titre[100]);

const char* fenetre_titre(Fenetre *fen);

#endif // LIB_H
