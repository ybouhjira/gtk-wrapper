#include <stdio.h>

#include "graphic.h"
#include "fenetre.h"

int main(int argc, char **argv)
{
  initialiser(&argc, &argv);

  Fenetre *fen = fenetre_creer();

  fenetre_afficher(fen);

  boucle_principale();
  return 0;
}

