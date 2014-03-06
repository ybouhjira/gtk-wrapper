#ifndef LIB_H
#define LIB_H

/** Le type fenetre **/
typedef struct Fenetre Fenetre;

Fenetre *fenetre_creer();

void fenetre_detruire(Fenetre **fenetre);

void fenetre_afficher(Fenetre *fen);

#endif // LIB_H
