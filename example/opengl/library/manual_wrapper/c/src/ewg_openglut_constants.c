#include<ewg_opengl.h>

int ewg_get_constant_glut_api_version ()
{
#ifdef GLUT_API_VERSION
	return (int)GLUT_API_VERSION;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_xlib_implementation ()
{
#ifdef GLUT_XLIB_IMPLEMENTATION
	return (int)GLUT_XLIB_IMPLEMENTATION;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_rgb ()
{
#ifdef GLUT_RGB
	return (int)GLUT_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_rgba ()
{
#ifdef GLUT_RGBA
	return (int)GLUT_RGBA;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_index ()
{
#ifdef GLUT_INDEX
	return (int)GLUT_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_single ()
{
#ifdef GLUT_SINGLE
	return (int)GLUT_SINGLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_double ()
{
#ifdef GLUT_DOUBLE
	return (int)GLUT_DOUBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_accum ()
{
#ifdef GLUT_ACCUM
	return (int)GLUT_ACCUM;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_alpha ()
{
#ifdef GLUT_ALPHA
	return (int)GLUT_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_depth ()
{
#ifdef GLUT_DEPTH
	return (int)GLUT_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_stencil ()
{
#ifdef GLUT_STENCIL
	return (int)GLUT_STENCIL;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_multisample ()
{
#ifdef GLUT_MULTISAMPLE
	return (int)GLUT_MULTISAMPLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_stereo ()
{
#ifdef GLUT_STEREO
	return (int)GLUT_STEREO;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_luminance ()
{
#ifdef GLUT_LUMINANCE
	return (int)GLUT_LUMINANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_left_button ()
{
#ifdef GLUT_LEFT_BUTTON
	return (int)GLUT_LEFT_BUTTON;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_middle_button ()
{
#ifdef GLUT_MIDDLE_BUTTON
	return (int)GLUT_MIDDLE_BUTTON;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_right_button ()
{
#ifdef GLUT_RIGHT_BUTTON
	return (int)GLUT_RIGHT_BUTTON;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_down ()
{
#ifdef GLUT_DOWN
	return (int)GLUT_DOWN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_up ()
{
#ifdef GLUT_UP
	return (int)GLUT_UP;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f1 ()
{
#ifdef GLUT_KEY_F1
	return (int)GLUT_KEY_F1;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f2 ()
{
#ifdef GLUT_KEY_F2
	return (int)GLUT_KEY_F2;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f3 ()
{
#ifdef GLUT_KEY_F3
	return (int)GLUT_KEY_F3;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f4 ()
{
#ifdef GLUT_KEY_F4
	return (int)GLUT_KEY_F4;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f5 ()
{
#ifdef GLUT_KEY_F5
	return (int)GLUT_KEY_F5;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f6 ()
{
#ifdef GLUT_KEY_F6
	return (int)GLUT_KEY_F6;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f7 ()
{
#ifdef GLUT_KEY_F7
	return (int)GLUT_KEY_F7;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f8 ()
{
#ifdef GLUT_KEY_F8
	return (int)GLUT_KEY_F8;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f9 ()
{
#ifdef GLUT_KEY_F9
	return (int)GLUT_KEY_F9;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f10 ()
{
#ifdef GLUT_KEY_F10
	return (int)GLUT_KEY_F10;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f11 ()
{
#ifdef GLUT_KEY_F11
	return (int)GLUT_KEY_F11;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_f12 ()
{
#ifdef GLUT_KEY_F12
	return (int)GLUT_KEY_F12;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_left ()
{
#ifdef GLUT_KEY_LEFT
	return (int)GLUT_KEY_LEFT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_up ()
{
#ifdef GLUT_KEY_UP
	return (int)GLUT_KEY_UP;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_right ()
{
#ifdef GLUT_KEY_RIGHT
	return (int)GLUT_KEY_RIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_down ()
{
#ifdef GLUT_KEY_DOWN
	return (int)GLUT_KEY_DOWN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_page_up ()
{
#ifdef GLUT_KEY_PAGE_UP
	return (int)GLUT_KEY_PAGE_UP;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_page_down ()
{
#ifdef GLUT_KEY_PAGE_DOWN
	return (int)GLUT_KEY_PAGE_DOWN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_home ()
{
#ifdef GLUT_KEY_HOME
	return (int)GLUT_KEY_HOME;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_end ()
{
#ifdef GLUT_KEY_END
	return (int)GLUT_KEY_END;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_insert ()
{
#ifdef GLUT_KEY_INSERT
	return (int)GLUT_KEY_INSERT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_left ()
{
#ifdef GLUT_LEFT
	return (int)GLUT_LEFT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_entered ()
{
#ifdef GLUT_ENTERED
	return (int)GLUT_ENTERED;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_menu_not_in_use ()
{
#ifdef GLUT_MENU_NOT_IN_USE
	return (int)GLUT_MENU_NOT_IN_USE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_menu_in_use ()
{
#ifdef GLUT_MENU_IN_USE
	return (int)GLUT_MENU_IN_USE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_not_visible ()
{
#ifdef GLUT_NOT_VISIBLE
	return (int)GLUT_NOT_VISIBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_visible ()
{
#ifdef GLUT_VISIBLE
	return (int)GLUT_VISIBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_hidden ()
{
#ifdef GLUT_HIDDEN
	return (int)GLUT_HIDDEN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_fully_retained ()
{
#ifdef GLUT_FULLY_RETAINED
	return (int)GLUT_FULLY_RETAINED;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_partially_retained ()
{
#ifdef GLUT_PARTIALLY_RETAINED
	return (int)GLUT_PARTIALLY_RETAINED;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_fully_covered ()
{
#ifdef GLUT_FULLY_COVERED
	return (int)GLUT_FULLY_COVERED;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_red ()
{
#ifdef GLUT_RED
	return (int)GLUT_RED;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_green ()
{
#ifdef GLUT_GREEN
	return (int)GLUT_GREEN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_blue ()
{
#ifdef GLUT_BLUE
	return (int)GLUT_BLUE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_normal ()
{
#ifdef GLUT_NORMAL
	return (int)GLUT_NORMAL;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_overlay ()
{
#ifdef GLUT_OVERLAY
	return (int)GLUT_OVERLAY;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_stroke_roman ()
{
#ifdef GLUT_STROKE_ROMAN
	return (int)GLUT_STROKE_ROMAN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_stroke_mono_roman ()
{
#ifdef GLUT_STROKE_MONO_ROMAN
	return (int)GLUT_STROKE_MONO_ROMAN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_bitmap_9_by_15 ()
{
#ifdef GLUT_BITMAP_9_BY_15
	return (int)GLUT_BITMAP_9_BY_15;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_bitmap_8_by_13 ()
{
#ifdef GLUT_BITMAP_8_BY_13
	return (int)GLUT_BITMAP_8_BY_13;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_bitmap_times_roman_10 ()
{
#ifdef GLUT_BITMAP_TIMES_ROMAN_10
	return (int)GLUT_BITMAP_TIMES_ROMAN_10;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_bitmap_times_roman_24 ()
{
#ifdef GLUT_BITMAP_TIMES_ROMAN_24
	return (int)GLUT_BITMAP_TIMES_ROMAN_24;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_bitmap_helvetica_10 ()
{
#ifdef GLUT_BITMAP_HELVETICA_10
	return (int)GLUT_BITMAP_HELVETICA_10;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_bitmap_helvetica_12 ()
{
#ifdef GLUT_BITMAP_HELVETICA_12
	return (int)GLUT_BITMAP_HELVETICA_12;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_bitmap_helvetica_18 ()
{
#ifdef GLUT_BITMAP_HELVETICA_18
	return (int)GLUT_BITMAP_HELVETICA_18;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_x ()
{
#ifdef GLUT_WINDOW_X
	return (int)GLUT_WINDOW_X;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_y ()
{
#ifdef GLUT_WINDOW_Y
	return (int)GLUT_WINDOW_Y;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_width ()
{
#ifdef GLUT_WINDOW_WIDTH
	return (int)GLUT_WINDOW_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_height ()
{
#ifdef GLUT_WINDOW_HEIGHT
	return (int)GLUT_WINDOW_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_buffer_size ()
{
#ifdef GLUT_WINDOW_BUFFER_SIZE
	return (int)GLUT_WINDOW_BUFFER_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_stencil_size ()
{
#ifdef GLUT_WINDOW_STENCIL_SIZE
	return (int)GLUT_WINDOW_STENCIL_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_depth_size ()
{
#ifdef GLUT_WINDOW_DEPTH_SIZE
	return (int)GLUT_WINDOW_DEPTH_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_red_size ()
{
#ifdef GLUT_WINDOW_RED_SIZE
	return (int)GLUT_WINDOW_RED_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_green_size ()
{
#ifdef GLUT_WINDOW_GREEN_SIZE
	return (int)GLUT_WINDOW_GREEN_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_blue_size ()
{
#ifdef GLUT_WINDOW_BLUE_SIZE
	return (int)GLUT_WINDOW_BLUE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_alpha_size ()
{
#ifdef GLUT_WINDOW_ALPHA_SIZE
	return (int)GLUT_WINDOW_ALPHA_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_accum_red_size ()
{
#ifdef GLUT_WINDOW_ACCUM_RED_SIZE
	return (int)GLUT_WINDOW_ACCUM_RED_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_accum_green_size ()
{
#ifdef GLUT_WINDOW_ACCUM_GREEN_SIZE
	return (int)GLUT_WINDOW_ACCUM_GREEN_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_accum_blue_size ()
{
#ifdef GLUT_WINDOW_ACCUM_BLUE_SIZE
	return (int)GLUT_WINDOW_ACCUM_BLUE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_accum_alpha_size ()
{
#ifdef GLUT_WINDOW_ACCUM_ALPHA_SIZE
	return (int)GLUT_WINDOW_ACCUM_ALPHA_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_doublebuffer ()
{
#ifdef GLUT_WINDOW_DOUBLEBUFFER
	return (int)GLUT_WINDOW_DOUBLEBUFFER;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_rgba ()
{
#ifdef GLUT_WINDOW_RGBA
	return (int)GLUT_WINDOW_RGBA;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_parent ()
{
#ifdef GLUT_WINDOW_PARENT
	return (int)GLUT_WINDOW_PARENT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_num_children ()
{
#ifdef GLUT_WINDOW_NUM_CHILDREN
	return (int)GLUT_WINDOW_NUM_CHILDREN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_colormap_size ()
{
#ifdef GLUT_WINDOW_COLORMAP_SIZE
	return (int)GLUT_WINDOW_COLORMAP_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_num_samples ()
{
#ifdef GLUT_WINDOW_NUM_SAMPLES
	return (int)GLUT_WINDOW_NUM_SAMPLES;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_stereo ()
{
#ifdef GLUT_WINDOW_STEREO
	return (int)GLUT_WINDOW_STEREO;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_cursor ()
{
#ifdef GLUT_WINDOW_CURSOR
	return (int)GLUT_WINDOW_CURSOR;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_screen_width ()
{
#ifdef GLUT_SCREEN_WIDTH
	return (int)GLUT_SCREEN_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_screen_height ()
{
#ifdef GLUT_SCREEN_HEIGHT
	return (int)GLUT_SCREEN_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_screen_width_mm ()
{
#ifdef GLUT_SCREEN_WIDTH_MM
	return (int)GLUT_SCREEN_WIDTH_MM;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_screen_height_mm ()
{
#ifdef GLUT_SCREEN_HEIGHT_MM
	return (int)GLUT_SCREEN_HEIGHT_MM;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_menu_num_items ()
{
#ifdef GLUT_MENU_NUM_ITEMS
	return (int)GLUT_MENU_NUM_ITEMS;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_display_mode_possible ()
{
#ifdef GLUT_DISPLAY_MODE_POSSIBLE
	return (int)GLUT_DISPLAY_MODE_POSSIBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_init_window_x ()
{
#ifdef GLUT_INIT_WINDOW_X
	return (int)GLUT_INIT_WINDOW_X;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_init_window_y ()
{
#ifdef GLUT_INIT_WINDOW_Y
	return (int)GLUT_INIT_WINDOW_Y;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_init_window_width ()
{
#ifdef GLUT_INIT_WINDOW_WIDTH
	return (int)GLUT_INIT_WINDOW_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_init_window_height ()
{
#ifdef GLUT_INIT_WINDOW_HEIGHT
	return (int)GLUT_INIT_WINDOW_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_init_display_mode ()
{
#ifdef GLUT_INIT_DISPLAY_MODE
	return (int)GLUT_INIT_DISPLAY_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_elapsed_time ()
{
#ifdef GLUT_ELAPSED_TIME
	return (int)GLUT_ELAPSED_TIME;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_window_format_id ()
{
#ifdef GLUT_WINDOW_FORMAT_ID
	return (int)GLUT_WINDOW_FORMAT_ID;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_has_keyboard ()
{
#ifdef GLUT_HAS_KEYBOARD
	return (int)GLUT_HAS_KEYBOARD;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_has_mouse ()
{
#ifdef GLUT_HAS_MOUSE
	return (int)GLUT_HAS_MOUSE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_has_spaceball ()
{
#ifdef GLUT_HAS_SPACEBALL
	return (int)GLUT_HAS_SPACEBALL;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_has_dial_and_button_box ()
{
#ifdef GLUT_HAS_DIAL_AND_BUTTON_BOX
	return (int)GLUT_HAS_DIAL_AND_BUTTON_BOX;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_has_tablet ()
{
#ifdef GLUT_HAS_TABLET
	return (int)GLUT_HAS_TABLET;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_num_mouse_buttons ()
{
#ifdef GLUT_NUM_MOUSE_BUTTONS
	return (int)GLUT_NUM_MOUSE_BUTTONS;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_num_spaceball_buttons ()
{
#ifdef GLUT_NUM_SPACEBALL_BUTTONS
	return (int)GLUT_NUM_SPACEBALL_BUTTONS;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_num_button_box_buttons ()
{
#ifdef GLUT_NUM_BUTTON_BOX_BUTTONS
	return (int)GLUT_NUM_BUTTON_BOX_BUTTONS;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_num_dials ()
{
#ifdef GLUT_NUM_DIALS
	return (int)GLUT_NUM_DIALS;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_num_tablet_buttons ()
{
#ifdef GLUT_NUM_TABLET_BUTTONS
	return (int)GLUT_NUM_TABLET_BUTTONS;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_device_ignore_key_repeat ()
{
#ifdef GLUT_DEVICE_IGNORE_KEY_REPEAT
	return (int)GLUT_DEVICE_IGNORE_KEY_REPEAT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_device_key_repeat ()
{
#ifdef GLUT_DEVICE_KEY_REPEAT
	return (int)GLUT_DEVICE_KEY_REPEAT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_has_joystick ()
{
#ifdef GLUT_HAS_JOYSTICK
	return (int)GLUT_HAS_JOYSTICK;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_owns_joystick ()
{
#ifdef GLUT_OWNS_JOYSTICK
	return (int)GLUT_OWNS_JOYSTICK;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_joystick_buttons ()
{
#ifdef GLUT_JOYSTICK_BUTTONS
	return (int)GLUT_JOYSTICK_BUTTONS;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_joystick_axes ()
{
#ifdef GLUT_JOYSTICK_AXES
	return (int)GLUT_JOYSTICK_AXES;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_joystick_poll_rate ()
{
#ifdef GLUT_JOYSTICK_POLL_RATE
	return (int)GLUT_JOYSTICK_POLL_RATE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_overlay_possible ()
{
#ifdef GLUT_OVERLAY_POSSIBLE
	return (int)GLUT_OVERLAY_POSSIBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_layer_in_use ()
{
#ifdef GLUT_LAYER_IN_USE
	return (int)GLUT_LAYER_IN_USE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_has_overlay ()
{
#ifdef GLUT_HAS_OVERLAY
	return (int)GLUT_HAS_OVERLAY;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_transparent_index ()
{
#ifdef GLUT_TRANSPARENT_INDEX
	return (int)GLUT_TRANSPARENT_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_normal_damaged ()
{
#ifdef GLUT_NORMAL_DAMAGED
	return (int)GLUT_NORMAL_DAMAGED;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_overlay_damaged ()
{
#ifdef GLUT_OVERLAY_DAMAGED
	return (int)GLUT_OVERLAY_DAMAGED;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_possible ()
{
#ifdef GLUT_VIDEO_RESIZE_POSSIBLE
	return (int)GLUT_VIDEO_RESIZE_POSSIBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_in_use ()
{
#ifdef GLUT_VIDEO_RESIZE_IN_USE
	return (int)GLUT_VIDEO_RESIZE_IN_USE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_x_delta ()
{
#ifdef GLUT_VIDEO_RESIZE_X_DELTA
	return (int)GLUT_VIDEO_RESIZE_X_DELTA;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_y_delta ()
{
#ifdef GLUT_VIDEO_RESIZE_Y_DELTA
	return (int)GLUT_VIDEO_RESIZE_Y_DELTA;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_width_delta ()
{
#ifdef GLUT_VIDEO_RESIZE_WIDTH_DELTA
	return (int)GLUT_VIDEO_RESIZE_WIDTH_DELTA;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_height_delta ()
{
#ifdef GLUT_VIDEO_RESIZE_HEIGHT_DELTA
	return (int)GLUT_VIDEO_RESIZE_HEIGHT_DELTA;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_x ()
{
#ifdef GLUT_VIDEO_RESIZE_X
	return (int)GLUT_VIDEO_RESIZE_X;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_y ()
{
#ifdef GLUT_VIDEO_RESIZE_Y
	return (int)GLUT_VIDEO_RESIZE_Y;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_width ()
{
#ifdef GLUT_VIDEO_RESIZE_WIDTH
	return (int)GLUT_VIDEO_RESIZE_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_video_resize_height ()
{
#ifdef GLUT_VIDEO_RESIZE_HEIGHT
	return (int)GLUT_VIDEO_RESIZE_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_active_shift ()
{
#ifdef GLUT_ACTIVE_SHIFT
	return (int)GLUT_ACTIVE_SHIFT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_active_ctrl ()
{
#ifdef GLUT_ACTIVE_CTRL
	return (int)GLUT_ACTIVE_CTRL;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_active_alt ()
{
#ifdef GLUT_ACTIVE_ALT
	return (int)GLUT_ACTIVE_ALT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_right_arrow ()
{
#ifdef GLUT_CURSOR_RIGHT_ARROW
	return (int)GLUT_CURSOR_RIGHT_ARROW;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_left_arrow ()
{
#ifdef GLUT_CURSOR_LEFT_ARROW
	return (int)GLUT_CURSOR_LEFT_ARROW;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_info ()
{
#ifdef GLUT_CURSOR_INFO
	return (int)GLUT_CURSOR_INFO;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_destroy ()
{
#ifdef GLUT_CURSOR_DESTROY
	return (int)GLUT_CURSOR_DESTROY;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_help ()
{
#ifdef GLUT_CURSOR_HELP
	return (int)GLUT_CURSOR_HELP;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_cycle ()
{
#ifdef GLUT_CURSOR_CYCLE
	return (int)GLUT_CURSOR_CYCLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_spray ()
{
#ifdef GLUT_CURSOR_SPRAY
	return (int)GLUT_CURSOR_SPRAY;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_wait ()
{
#ifdef GLUT_CURSOR_WAIT
	return (int)GLUT_CURSOR_WAIT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_text ()
{
#ifdef GLUT_CURSOR_TEXT
	return (int)GLUT_CURSOR_TEXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_crosshair ()
{
#ifdef GLUT_CURSOR_CROSSHAIR
	return (int)GLUT_CURSOR_CROSSHAIR;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_up_down ()
{
#ifdef GLUT_CURSOR_UP_DOWN
	return (int)GLUT_CURSOR_UP_DOWN;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_left_right ()
{
#ifdef GLUT_CURSOR_LEFT_RIGHT
	return (int)GLUT_CURSOR_LEFT_RIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_top_side ()
{
#ifdef GLUT_CURSOR_TOP_SIDE
	return (int)GLUT_CURSOR_TOP_SIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_bottom_side ()
{
#ifdef GLUT_CURSOR_BOTTOM_SIDE
	return (int)GLUT_CURSOR_BOTTOM_SIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_left_side ()
{
#ifdef GLUT_CURSOR_LEFT_SIDE
	return (int)GLUT_CURSOR_LEFT_SIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_right_side ()
{
#ifdef GLUT_CURSOR_RIGHT_SIDE
	return (int)GLUT_CURSOR_RIGHT_SIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_top_left_corner ()
{
#ifdef GLUT_CURSOR_TOP_LEFT_CORNER
	return (int)GLUT_CURSOR_TOP_LEFT_CORNER;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_top_right_corner ()
{
#ifdef GLUT_CURSOR_TOP_RIGHT_CORNER
	return (int)GLUT_CURSOR_TOP_RIGHT_CORNER;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_bottom_right_corner ()
{
#ifdef GLUT_CURSOR_BOTTOM_RIGHT_CORNER
	return (int)GLUT_CURSOR_BOTTOM_RIGHT_CORNER;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_bottom_left_corner ()
{
#ifdef GLUT_CURSOR_BOTTOM_LEFT_CORNER
	return (int)GLUT_CURSOR_BOTTOM_LEFT_CORNER;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_inherit ()
{
#ifdef GLUT_CURSOR_INHERIT
	return (int)GLUT_CURSOR_INHERIT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_none ()
{
#ifdef GLUT_CURSOR_NONE
	return (int)GLUT_CURSOR_NONE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_cursor_full_crosshair ()
{
#ifdef GLUT_CURSOR_FULL_CROSSHAIR
	return (int)GLUT_CURSOR_FULL_CROSSHAIR;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_repeat_off ()
{
#ifdef GLUT_KEY_REPEAT_OFF
	return (int)GLUT_KEY_REPEAT_OFF;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_repeat_on ()
{
#ifdef GLUT_KEY_REPEAT_ON
	return (int)GLUT_KEY_REPEAT_ON;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_key_repeat_default ()
{
#ifdef GLUT_KEY_REPEAT_DEFAULT
	return (int)GLUT_KEY_REPEAT_DEFAULT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_joystick_button_a ()
{
#ifdef GLUT_JOYSTICK_BUTTON_A
	return (int)GLUT_JOYSTICK_BUTTON_A;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_joystick_button_b ()
{
#ifdef GLUT_JOYSTICK_BUTTON_B
	return (int)GLUT_JOYSTICK_BUTTON_B;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_joystick_button_c ()
{
#ifdef GLUT_JOYSTICK_BUTTON_C
	return (int)GLUT_JOYSTICK_BUTTON_C;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_joystick_button_d ()
{
#ifdef GLUT_JOYSTICK_BUTTON_D
	return (int)GLUT_JOYSTICK_BUTTON_D;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_game_mode_active ()
{
#ifdef GLUT_GAME_MODE_ACTIVE
	return (int)GLUT_GAME_MODE_ACTIVE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_game_mode_possible ()
{
#ifdef GLUT_GAME_MODE_POSSIBLE
	return (int)GLUT_GAME_MODE_POSSIBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_game_mode_width ()
{
#ifdef GLUT_GAME_MODE_WIDTH
	return (int)GLUT_GAME_MODE_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_game_mode_height ()
{
#ifdef GLUT_GAME_MODE_HEIGHT
	return (int)GLUT_GAME_MODE_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_game_mode_pixel_depth ()
{
#ifdef GLUT_GAME_MODE_PIXEL_DEPTH
	return (int)GLUT_GAME_MODE_PIXEL_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_game_mode_refresh_rate ()
{
#ifdef GLUT_GAME_MODE_REFRESH_RATE
	return (int)GLUT_GAME_MODE_REFRESH_RATE;
#else
	return -1;
#endif
}

int ewg_get_constant_glut_game_mode_display_changed ()
{
#ifdef GLUT_GAME_MODE_DISPLAY_CHANGED
	return (int)GLUT_GAME_MODE_DISPLAY_CHANGED;
#else
	return -1;
#endif
}

