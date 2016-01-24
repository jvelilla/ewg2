
#include <ewg_gtk.h>

GdkRectangle* ewg_gtk_widget_get_allocation (GtkWidget* a_widget)
{
  return &(a_widget->allocation);
}

GtkStateType ewg_gtk_widget_get_state (GtkWidget* a_widget)
{
  return GTK_WIDGET_STATE (a_widget);
}



