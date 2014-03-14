#include <gtk/gtk.h>
#include <stdlib.h>

#include "fenetre.h"

struct Fenetre
{
  GtkWidget *gtkWindow;
};

Fenetre* fenetre_creer()
{
  Fenetre *fen = malloc(sizeof(Fenetre));
  fen->gtkWindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  return fen;
}

void fenetre_detruire(Fenetre **fen)
{
  gtk_widget_destroy((*fen)->gtkWindow);
  free(*fen);
  *fen = NULL;
}

void fenetre_afficher(Fenetre *fen)
{
  gtk_widget_show_all(fen->gtkWindow);
}

void fenetre_changer_titre(Fenetre *fen, char titre[100])
{
  gtk_window_set_title(GTK_WINDOW(fen->gtkWindow), titre);
}

const char *fenetre_titre(Fenetre *fen)
{
  return gtk_window_get_title(GTK_WINDOW(fen->gtkWindow));
}
