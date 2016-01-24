#include<ewg_gtkglext.h>

GdkGLDrawable* ewg_gtk_widget_get_gl_drawable (GtkWidget *widget)
{
  return gtk_widget_get_gl_drawable (widget);
}

