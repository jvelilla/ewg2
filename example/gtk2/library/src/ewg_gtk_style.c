#include<ewg_gtk.h>

GdkGC* ewg_gtk_style_get_fg_gc_array_address (GtkStyle* a_style)
{
  return &(a_style->fg_gc);
}

int ewg_gtk_style_get_fg_gc_array_sizeof (GtkStyle* a_style)
{
  return sizeof (a_style->fg_gc);
}

