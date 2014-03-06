#include "graphic.h"

#include <gtk/gtk.h>

void initialiser(int *argc, char ***argv)
{
  gtk_init(argc, argv);
}

void boucle_principale()
{
  gtk_main();
}
