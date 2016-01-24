
#include <ewg_gtk.h>

GdkEventType ewg_gdk_event_get_event_type (GdkEvent* a_event)
{
  return a_event->type;
}

GdkRectangle* ewg_gtk_event_expose_get_area (GdkEventExpose* a_event)
{
  return &(a_event->area);
}

