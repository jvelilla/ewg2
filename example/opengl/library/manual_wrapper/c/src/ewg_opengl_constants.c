#include<ewg_opengl.h>

int ewg_get_constant_gl_version_1_1 ()
{
#ifdef GL_VERSION_1_1
	return (int)GL_VERSION_1_1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_version_1_2 ()
{
#ifdef GL_VERSION_1_2
	return (int)GL_VERSION_1_2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_version_1_3 ()
{
#ifdef GL_VERSION_1_3
	return (int)GL_VERSION_1_3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_arb_imaging ()
{
#ifdef GL_ARB_imaging
	return (int)GL_ARB_imaging;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_false ()
{
#ifdef GL_FALSE
	return (int)GL_FALSE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_true ()
{
#ifdef GL_TRUE
	return (int)GL_TRUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_byte ()
{
#ifdef GL_BYTE
	return (int)GL_BYTE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_byte ()
{
#ifdef GL_UNSIGNED_BYTE
	return (int)GL_UNSIGNED_BYTE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_short ()
{
#ifdef GL_SHORT
	return (int)GL_SHORT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short ()
{
#ifdef GL_UNSIGNED_SHORT
	return (int)GL_UNSIGNED_SHORT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_int ()
{
#ifdef GL_INT
	return (int)GL_INT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_int ()
{
#ifdef GL_UNSIGNED_INT
	return (int)GL_UNSIGNED_INT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_float ()
{
#ifdef GL_FLOAT
	return (int)GL_FLOAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_double ()
{
#ifdef GL_DOUBLE
	return (int)GL_DOUBLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_2_bytes ()
{
#ifdef GL_2_BYTES
	return (int)GL_2_BYTES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_3_bytes ()
{
#ifdef GL_3_BYTES
	return (int)GL_3_BYTES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_4_bytes ()
{
#ifdef GL_4_BYTES
	return (int)GL_4_BYTES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_points ()
{
#ifdef GL_POINTS
	return (int)GL_POINTS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_lines ()
{
#ifdef GL_LINES
	return (int)GL_LINES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_loop ()
{
#ifdef GL_LINE_LOOP
	return (int)GL_LINE_LOOP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_strip ()
{
#ifdef GL_LINE_STRIP
	return (int)GL_LINE_STRIP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_triangles ()
{
#ifdef GL_TRIANGLES
	return (int)GL_TRIANGLES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_triangle_strip ()
{
#ifdef GL_TRIANGLE_STRIP
	return (int)GL_TRIANGLE_STRIP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_triangle_fan ()
{
#ifdef GL_TRIANGLE_FAN
	return (int)GL_TRIANGLE_FAN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_quads ()
{
#ifdef GL_QUADS
	return (int)GL_QUADS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_quad_strip ()
{
#ifdef GL_QUAD_STRIP
	return (int)GL_QUAD_STRIP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon ()
{
#ifdef GL_POLYGON
	return (int)GL_POLYGON;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array ()
{
#ifdef GL_VERTEX_ARRAY
	return (int)GL_VERTEX_ARRAY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array ()
{
#ifdef GL_NORMAL_ARRAY
	return (int)GL_NORMAL_ARRAY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array ()
{
#ifdef GL_COLOR_ARRAY
	return (int)GL_COLOR_ARRAY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array ()
{
#ifdef GL_INDEX_ARRAY
	return (int)GL_INDEX_ARRAY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array ()
{
#ifdef GL_TEXTURE_COORD_ARRAY
	return (int)GL_TEXTURE_COORD_ARRAY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag_array ()
{
#ifdef GL_EDGE_FLAG_ARRAY
	return (int)GL_EDGE_FLAG_ARRAY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_size ()
{
#ifdef GL_VERTEX_ARRAY_SIZE
	return (int)GL_VERTEX_ARRAY_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_type ()
{
#ifdef GL_VERTEX_ARRAY_TYPE
	return (int)GL_VERTEX_ARRAY_TYPE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_stride ()
{
#ifdef GL_VERTEX_ARRAY_STRIDE
	return (int)GL_VERTEX_ARRAY_STRIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_type ()
{
#ifdef GL_NORMAL_ARRAY_TYPE
	return (int)GL_NORMAL_ARRAY_TYPE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_stride ()
{
#ifdef GL_NORMAL_ARRAY_STRIDE
	return (int)GL_NORMAL_ARRAY_STRIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_size ()
{
#ifdef GL_COLOR_ARRAY_SIZE
	return (int)GL_COLOR_ARRAY_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_type ()
{
#ifdef GL_COLOR_ARRAY_TYPE
	return (int)GL_COLOR_ARRAY_TYPE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_stride ()
{
#ifdef GL_COLOR_ARRAY_STRIDE
	return (int)GL_COLOR_ARRAY_STRIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_type ()
{
#ifdef GL_INDEX_ARRAY_TYPE
	return (int)GL_INDEX_ARRAY_TYPE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_stride ()
{
#ifdef GL_INDEX_ARRAY_STRIDE
	return (int)GL_INDEX_ARRAY_STRIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_size ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_SIZE
	return (int)GL_TEXTURE_COORD_ARRAY_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_type ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_TYPE
	return (int)GL_TEXTURE_COORD_ARRAY_TYPE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_stride ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE
	return (int)GL_TEXTURE_COORD_ARRAY_STRIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag_array_stride ()
{
#ifdef GL_EDGE_FLAG_ARRAY_STRIDE
	return (int)GL_EDGE_FLAG_ARRAY_STRIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_pointer ()
{
#ifdef GL_VERTEX_ARRAY_POINTER
	return (int)GL_VERTEX_ARRAY_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_pointer ()
{
#ifdef GL_NORMAL_ARRAY_POINTER
	return (int)GL_NORMAL_ARRAY_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_pointer ()
{
#ifdef GL_COLOR_ARRAY_POINTER
	return (int)GL_COLOR_ARRAY_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_pointer ()
{
#ifdef GL_INDEX_ARRAY_POINTER
	return (int)GL_INDEX_ARRAY_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_pointer ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_POINTER
	return (int)GL_TEXTURE_COORD_ARRAY_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag_array_pointer ()
{
#ifdef GL_EDGE_FLAG_ARRAY_POINTER
	return (int)GL_EDGE_FLAG_ARRAY_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_v2f ()
{
#ifdef GL_V2F
	return (int)GL_V2F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_v3f ()
{
#ifdef GL_V3F
	return (int)GL_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_c4ub_v2f ()
{
#ifdef GL_C4UB_V2F
	return (int)GL_C4UB_V2F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_c4ub_v3f ()
{
#ifdef GL_C4UB_V3F
	return (int)GL_C4UB_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_c3f_v3f ()
{
#ifdef GL_C3F_V3F
	return (int)GL_C3F_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_n3f_v3f ()
{
#ifdef GL_N3F_V3F
	return (int)GL_N3F_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_c4f_n3f_v3f ()
{
#ifdef GL_C4F_N3F_V3F
	return (int)GL_C4F_N3F_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t2f_v3f ()
{
#ifdef GL_T2F_V3F
	return (int)GL_T2F_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t4f_v4f ()
{
#ifdef GL_T4F_V4F
	return (int)GL_T4F_V4F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t2f_c4ub_v3f ()
{
#ifdef GL_T2F_C4UB_V3F
	return (int)GL_T2F_C4UB_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t2f_c3f_v3f ()
{
#ifdef GL_T2F_C3F_V3F
	return (int)GL_T2F_C3F_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t2f_n3f_v3f ()
{
#ifdef GL_T2F_N3F_V3F
	return (int)GL_T2F_N3F_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t2f_c4f_n3f_v3f ()
{
#ifdef GL_T2F_C4F_N3F_V3F
	return (int)GL_T2F_C4F_N3F_V3F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t4f_c4f_n3f_v4f ()
{
#ifdef GL_T4F_C4F_N3F_V4F
	return (int)GL_T4F_C4F_N3F_V4F;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_matrix_mode ()
{
#ifdef GL_MATRIX_MODE
	return (int)GL_MATRIX_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_modelview ()
{
#ifdef GL_MODELVIEW
	return (int)GL_MODELVIEW;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_projection ()
{
#ifdef GL_PROJECTION
	return (int)GL_PROJECTION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture ()
{
#ifdef GL_TEXTURE
	return (int)GL_TEXTURE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_smooth ()
{
#ifdef GL_POINT_SMOOTH
	return (int)GL_POINT_SMOOTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_size ()
{
#ifdef GL_POINT_SIZE
	return (int)GL_POINT_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_size_granularity ()
{
#ifdef GL_POINT_SIZE_GRANULARITY
	return (int)GL_POINT_SIZE_GRANULARITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_size_range ()
{
#ifdef GL_POINT_SIZE_RANGE
	return (int)GL_POINT_SIZE_RANGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_smooth ()
{
#ifdef GL_LINE_SMOOTH
	return (int)GL_LINE_SMOOTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_stipple ()
{
#ifdef GL_LINE_STIPPLE
	return (int)GL_LINE_STIPPLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_stipple_pattern ()
{
#ifdef GL_LINE_STIPPLE_PATTERN
	return (int)GL_LINE_STIPPLE_PATTERN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_stipple_repeat ()
{
#ifdef GL_LINE_STIPPLE_REPEAT
	return (int)GL_LINE_STIPPLE_REPEAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_width ()
{
#ifdef GL_LINE_WIDTH
	return (int)GL_LINE_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_width_granularity ()
{
#ifdef GL_LINE_WIDTH_GRANULARITY
	return (int)GL_LINE_WIDTH_GRANULARITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_width_range ()
{
#ifdef GL_LINE_WIDTH_RANGE
	return (int)GL_LINE_WIDTH_RANGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point ()
{
#ifdef GL_POINT
	return (int)GL_POINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line ()
{
#ifdef GL_LINE
	return (int)GL_LINE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fill ()
{
#ifdef GL_FILL
	return (int)GL_FILL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_cw ()
{
#ifdef GL_CW
	return (int)GL_CW;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ccw ()
{
#ifdef GL_CCW
	return (int)GL_CCW;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_front ()
{
#ifdef GL_FRONT
	return (int)GL_FRONT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_back ()
{
#ifdef GL_BACK
	return (int)GL_BACK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_mode ()
{
#ifdef GL_POLYGON_MODE
	return (int)GL_POLYGON_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_smooth ()
{
#ifdef GL_POLYGON_SMOOTH
	return (int)GL_POLYGON_SMOOTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_stipple ()
{
#ifdef GL_POLYGON_STIPPLE
	return (int)GL_POLYGON_STIPPLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag ()
{
#ifdef GL_EDGE_FLAG
	return (int)GL_EDGE_FLAG;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_cull_face ()
{
#ifdef GL_CULL_FACE
	return (int)GL_CULL_FACE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_cull_face_mode ()
{
#ifdef GL_CULL_FACE_MODE
	return (int)GL_CULL_FACE_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_front_face ()
{
#ifdef GL_FRONT_FACE
	return (int)GL_FRONT_FACE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_factor ()
{
#ifdef GL_POLYGON_OFFSET_FACTOR
	return (int)GL_POLYGON_OFFSET_FACTOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_units ()
{
#ifdef GL_POLYGON_OFFSET_UNITS
	return (int)GL_POLYGON_OFFSET_UNITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_point ()
{
#ifdef GL_POLYGON_OFFSET_POINT
	return (int)GL_POLYGON_OFFSET_POINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_line ()
{
#ifdef GL_POLYGON_OFFSET_LINE
	return (int)GL_POLYGON_OFFSET_LINE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_fill ()
{
#ifdef GL_POLYGON_OFFSET_FILL
	return (int)GL_POLYGON_OFFSET_FILL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compile ()
{
#ifdef GL_COMPILE
	return (int)GL_COMPILE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compile_and_execute ()
{
#ifdef GL_COMPILE_AND_EXECUTE
	return (int)GL_COMPILE_AND_EXECUTE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_list_base ()
{
#ifdef GL_LIST_BASE
	return (int)GL_LIST_BASE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_list_index ()
{
#ifdef GL_LIST_INDEX
	return (int)GL_LIST_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_list_mode ()
{
#ifdef GL_LIST_MODE
	return (int)GL_LIST_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_never ()
{
#ifdef GL_NEVER
	return (int)GL_NEVER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_less ()
{
#ifdef GL_LESS
	return (int)GL_LESS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_equal ()
{
#ifdef GL_EQUAL
	return (int)GL_EQUAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_lequal ()
{
#ifdef GL_LEQUAL
	return (int)GL_LEQUAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_greater ()
{
#ifdef GL_GREATER
	return (int)GL_GREATER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_notequal ()
{
#ifdef GL_NOTEQUAL
	return (int)GL_NOTEQUAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_gequal ()
{
#ifdef GL_GEQUAL
	return (int)GL_GEQUAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_always ()
{
#ifdef GL_ALWAYS
	return (int)GL_ALWAYS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_test ()
{
#ifdef GL_DEPTH_TEST
	return (int)GL_DEPTH_TEST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_bits ()
{
#ifdef GL_DEPTH_BITS
	return (int)GL_DEPTH_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_clear_value ()
{
#ifdef GL_DEPTH_CLEAR_VALUE
	return (int)GL_DEPTH_CLEAR_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_func ()
{
#ifdef GL_DEPTH_FUNC
	return (int)GL_DEPTH_FUNC;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_range ()
{
#ifdef GL_DEPTH_RANGE
	return (int)GL_DEPTH_RANGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_writemask ()
{
#ifdef GL_DEPTH_WRITEMASK
	return (int)GL_DEPTH_WRITEMASK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_component ()
{
#ifdef GL_DEPTH_COMPONENT
	return (int)GL_DEPTH_COMPONENT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_lighting ()
{
#ifdef GL_LIGHTING
	return (int)GL_LIGHTING;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light0 ()
{
#ifdef GL_LIGHT0
	return (int)GL_LIGHT0;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light1 ()
{
#ifdef GL_LIGHT1
	return (int)GL_LIGHT1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light2 ()
{
#ifdef GL_LIGHT2
	return (int)GL_LIGHT2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light3 ()
{
#ifdef GL_LIGHT3
	return (int)GL_LIGHT3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light4 ()
{
#ifdef GL_LIGHT4
	return (int)GL_LIGHT4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light5 ()
{
#ifdef GL_LIGHT5
	return (int)GL_LIGHT5;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light6 ()
{
#ifdef GL_LIGHT6
	return (int)GL_LIGHT6;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light7 ()
{
#ifdef GL_LIGHT7
	return (int)GL_LIGHT7;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_spot_exponent ()
{
#ifdef GL_SPOT_EXPONENT
	return (int)GL_SPOT_EXPONENT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_spot_cutoff ()
{
#ifdef GL_SPOT_CUTOFF
	return (int)GL_SPOT_CUTOFF;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_constant_attenuation ()
{
#ifdef GL_CONSTANT_ATTENUATION
	return (int)GL_CONSTANT_ATTENUATION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_linear_attenuation ()
{
#ifdef GL_LINEAR_ATTENUATION
	return (int)GL_LINEAR_ATTENUATION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_quadratic_attenuation ()
{
#ifdef GL_QUADRATIC_ATTENUATION
	return (int)GL_QUADRATIC_ATTENUATION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ambient ()
{
#ifdef GL_AMBIENT
	return (int)GL_AMBIENT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_diffuse ()
{
#ifdef GL_DIFFUSE
	return (int)GL_DIFFUSE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_specular ()
{
#ifdef GL_SPECULAR
	return (int)GL_SPECULAR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_shininess ()
{
#ifdef GL_SHININESS
	return (int)GL_SHININESS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_emission ()
{
#ifdef GL_EMISSION
	return (int)GL_EMISSION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_position ()
{
#ifdef GL_POSITION
	return (int)GL_POSITION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_spot_direction ()
{
#ifdef GL_SPOT_DIRECTION
	return (int)GL_SPOT_DIRECTION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ambient_and_diffuse ()
{
#ifdef GL_AMBIENT_AND_DIFFUSE
	return (int)GL_AMBIENT_AND_DIFFUSE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_indexes ()
{
#ifdef GL_COLOR_INDEXES
	return (int)GL_COLOR_INDEXES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light_model_two_side ()
{
#ifdef GL_LIGHT_MODEL_TWO_SIDE
	return (int)GL_LIGHT_MODEL_TWO_SIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light_model_local_viewer ()
{
#ifdef GL_LIGHT_MODEL_LOCAL_VIEWER
	return (int)GL_LIGHT_MODEL_LOCAL_VIEWER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light_model_ambient ()
{
#ifdef GL_LIGHT_MODEL_AMBIENT
	return (int)GL_LIGHT_MODEL_AMBIENT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_front_and_back ()
{
#ifdef GL_FRONT_AND_BACK
	return (int)GL_FRONT_AND_BACK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_shade_model ()
{
#ifdef GL_SHADE_MODEL
	return (int)GL_SHADE_MODEL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_flat ()
{
#ifdef GL_FLAT
	return (int)GL_FLAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_smooth ()
{
#ifdef GL_SMOOTH
	return (int)GL_SMOOTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_material ()
{
#ifdef GL_COLOR_MATERIAL
	return (int)GL_COLOR_MATERIAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_material_face ()
{
#ifdef GL_COLOR_MATERIAL_FACE
	return (int)GL_COLOR_MATERIAL_FACE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_material_parameter ()
{
#ifdef GL_COLOR_MATERIAL_PARAMETER
	return (int)GL_COLOR_MATERIAL_PARAMETER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normalize ()
{
#ifdef GL_NORMALIZE
	return (int)GL_NORMALIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clip_plane0 ()
{
#ifdef GL_CLIP_PLANE0
	return (int)GL_CLIP_PLANE0;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clip_plane1 ()
{
#ifdef GL_CLIP_PLANE1
	return (int)GL_CLIP_PLANE1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clip_plane2 ()
{
#ifdef GL_CLIP_PLANE2
	return (int)GL_CLIP_PLANE2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clip_plane3 ()
{
#ifdef GL_CLIP_PLANE3
	return (int)GL_CLIP_PLANE3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clip_plane4 ()
{
#ifdef GL_CLIP_PLANE4
	return (int)GL_CLIP_PLANE4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clip_plane5 ()
{
#ifdef GL_CLIP_PLANE5
	return (int)GL_CLIP_PLANE5;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_accum_red_bits ()
{
#ifdef GL_ACCUM_RED_BITS
	return (int)GL_ACCUM_RED_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_accum_green_bits ()
{
#ifdef GL_ACCUM_GREEN_BITS
	return (int)GL_ACCUM_GREEN_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_accum_blue_bits ()
{
#ifdef GL_ACCUM_BLUE_BITS
	return (int)GL_ACCUM_BLUE_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_accum_alpha_bits ()
{
#ifdef GL_ACCUM_ALPHA_BITS
	return (int)GL_ACCUM_ALPHA_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_accum_clear_value ()
{
#ifdef GL_ACCUM_CLEAR_VALUE
	return (int)GL_ACCUM_CLEAR_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_accum ()
{
#ifdef GL_ACCUM
	return (int)GL_ACCUM;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_add ()
{
#ifdef GL_ADD
	return (int)GL_ADD;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_load ()
{
#ifdef GL_LOAD
	return (int)GL_LOAD;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_mult ()
{
#ifdef GL_MULT
	return (int)GL_MULT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_return ()
{
#ifdef GL_RETURN
	return (int)GL_RETURN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha_test ()
{
#ifdef GL_ALPHA_TEST
	return (int)GL_ALPHA_TEST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha_test_ref ()
{
#ifdef GL_ALPHA_TEST_REF
	return (int)GL_ALPHA_TEST_REF;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha_test_func ()
{
#ifdef GL_ALPHA_TEST_FUNC
	return (int)GL_ALPHA_TEST_FUNC;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blend ()
{
#ifdef GL_BLEND
	return (int)GL_BLEND;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blend_src ()
{
#ifdef GL_BLEND_SRC
	return (int)GL_BLEND_SRC;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blend_dst ()
{
#ifdef GL_BLEND_DST
	return (int)GL_BLEND_DST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_zero ()
{
#ifdef GL_ZERO
	return (int)GL_ZERO;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one ()
{
#ifdef GL_ONE
	return (int)GL_ONE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_src_color ()
{
#ifdef GL_SRC_COLOR
	return (int)GL_SRC_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_src_color ()
{
#ifdef GL_ONE_MINUS_SRC_COLOR
	return (int)GL_ONE_MINUS_SRC_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_src_alpha ()
{
#ifdef GL_SRC_ALPHA
	return (int)GL_SRC_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_src_alpha ()
{
#ifdef GL_ONE_MINUS_SRC_ALPHA
	return (int)GL_ONE_MINUS_SRC_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dst_alpha ()
{
#ifdef GL_DST_ALPHA
	return (int)GL_DST_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_dst_alpha ()
{
#ifdef GL_ONE_MINUS_DST_ALPHA
	return (int)GL_ONE_MINUS_DST_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dst_color ()
{
#ifdef GL_DST_COLOR
	return (int)GL_DST_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_dst_color ()
{
#ifdef GL_ONE_MINUS_DST_COLOR
	return (int)GL_ONE_MINUS_DST_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_src_alpha_saturate ()
{
#ifdef GL_SRC_ALPHA_SATURATE
	return (int)GL_SRC_ALPHA_SATURATE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_constant_color ()
{
#ifdef GL_CONSTANT_COLOR
	return (int)GL_CONSTANT_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_constant_color ()
{
#ifdef GL_ONE_MINUS_CONSTANT_COLOR
	return (int)GL_ONE_MINUS_CONSTANT_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_constant_alpha ()
{
#ifdef GL_CONSTANT_ALPHA
	return (int)GL_CONSTANT_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_constant_alpha ()
{
#ifdef GL_ONE_MINUS_CONSTANT_ALPHA
	return (int)GL_ONE_MINUS_CONSTANT_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_feedback ()
{
#ifdef GL_FEEDBACK
	return (int)GL_FEEDBACK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_render ()
{
#ifdef GL_RENDER
	return (int)GL_RENDER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_select ()
{
#ifdef GL_SELECT
	return (int)GL_SELECT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_2d ()
{
#ifdef GL_2D
	return (int)GL_2D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_3d ()
{
#ifdef GL_3D
	return (int)GL_3D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_3d_color ()
{
#ifdef GL_3D_COLOR
	return (int)GL_3D_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_3d_color_texture ()
{
#ifdef GL_3D_COLOR_TEXTURE
	return (int)GL_3D_COLOR_TEXTURE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_4d_color_texture ()
{
#ifdef GL_4D_COLOR_TEXTURE
	return (int)GL_4D_COLOR_TEXTURE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_token ()
{
#ifdef GL_POINT_TOKEN
	return (int)GL_POINT_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_token ()
{
#ifdef GL_LINE_TOKEN
	return (int)GL_LINE_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_reset_token ()
{
#ifdef GL_LINE_RESET_TOKEN
	return (int)GL_LINE_RESET_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_token ()
{
#ifdef GL_POLYGON_TOKEN
	return (int)GL_POLYGON_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_bitmap_token ()
{
#ifdef GL_BITMAP_TOKEN
	return (int)GL_BITMAP_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_draw_pixel_token ()
{
#ifdef GL_DRAW_PIXEL_TOKEN
	return (int)GL_DRAW_PIXEL_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_copy_pixel_token ()
{
#ifdef GL_COPY_PIXEL_TOKEN
	return (int)GL_COPY_PIXEL_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pass_through_token ()
{
#ifdef GL_PASS_THROUGH_TOKEN
	return (int)GL_PASS_THROUGH_TOKEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_feedback_buffer_pointer ()
{
#ifdef GL_FEEDBACK_BUFFER_POINTER
	return (int)GL_FEEDBACK_BUFFER_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_feedback_buffer_size ()
{
#ifdef GL_FEEDBACK_BUFFER_SIZE
	return (int)GL_FEEDBACK_BUFFER_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_feedback_buffer_type ()
{
#ifdef GL_FEEDBACK_BUFFER_TYPE
	return (int)GL_FEEDBACK_BUFFER_TYPE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_selection_buffer_pointer ()
{
#ifdef GL_SELECTION_BUFFER_POINTER
	return (int)GL_SELECTION_BUFFER_POINTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_selection_buffer_size ()
{
#ifdef GL_SELECTION_BUFFER_SIZE
	return (int)GL_SELECTION_BUFFER_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog ()
{
#ifdef GL_FOG
	return (int)GL_FOG;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_mode ()
{
#ifdef GL_FOG_MODE
	return (int)GL_FOG_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_density ()
{
#ifdef GL_FOG_DENSITY
	return (int)GL_FOG_DENSITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_color ()
{
#ifdef GL_FOG_COLOR
	return (int)GL_FOG_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_index ()
{
#ifdef GL_FOG_INDEX
	return (int)GL_FOG_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_start ()
{
#ifdef GL_FOG_START
	return (int)GL_FOG_START;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_end ()
{
#ifdef GL_FOG_END
	return (int)GL_FOG_END;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_linear ()
{
#ifdef GL_LINEAR
	return (int)GL_LINEAR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_exp ()
{
#ifdef GL_EXP
	return (int)GL_EXP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_exp2 ()
{
#ifdef GL_EXP2
	return (int)GL_EXP2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_logic_op ()
{
#ifdef GL_LOGIC_OP
	return (int)GL_LOGIC_OP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_logic_op ()
{
#ifdef GL_INDEX_LOGIC_OP
	return (int)GL_INDEX_LOGIC_OP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_logic_op ()
{
#ifdef GL_COLOR_LOGIC_OP
	return (int)GL_COLOR_LOGIC_OP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_logic_op_mode ()
{
#ifdef GL_LOGIC_OP_MODE
	return (int)GL_LOGIC_OP_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clear ()
{
#ifdef GL_CLEAR
	return (int)GL_CLEAR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_set ()
{
#ifdef GL_SET
	return (int)GL_SET;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_copy ()
{
#ifdef GL_COPY
	return (int)GL_COPY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_copy_inverted ()
{
#ifdef GL_COPY_INVERTED
	return (int)GL_COPY_INVERTED;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_noop ()
{
#ifdef GL_NOOP
	return (int)GL_NOOP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_invert ()
{
#ifdef GL_INVERT
	return (int)GL_INVERT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_and ()
{
#ifdef GL_AND
	return (int)GL_AND;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_nand ()
{
#ifdef GL_NAND
	return (int)GL_NAND;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_or ()
{
#ifdef GL_OR
	return (int)GL_OR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_nor ()
{
#ifdef GL_NOR
	return (int)GL_NOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_xor ()
{
#ifdef GL_XOR
	return (int)GL_XOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_equiv ()
{
#ifdef GL_EQUIV
	return (int)GL_EQUIV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_and_reverse ()
{
#ifdef GL_AND_REVERSE
	return (int)GL_AND_REVERSE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_and_inverted ()
{
#ifdef GL_AND_INVERTED
	return (int)GL_AND_INVERTED;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_or_reverse ()
{
#ifdef GL_OR_REVERSE
	return (int)GL_OR_REVERSE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_or_inverted ()
{
#ifdef GL_OR_INVERTED
	return (int)GL_OR_INVERTED;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_test ()
{
#ifdef GL_STENCIL_TEST
	return (int)GL_STENCIL_TEST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_writemask ()
{
#ifdef GL_STENCIL_WRITEMASK
	return (int)GL_STENCIL_WRITEMASK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_bits ()
{
#ifdef GL_STENCIL_BITS
	return (int)GL_STENCIL_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_func ()
{
#ifdef GL_STENCIL_FUNC
	return (int)GL_STENCIL_FUNC;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_value_mask ()
{
#ifdef GL_STENCIL_VALUE_MASK
	return (int)GL_STENCIL_VALUE_MASK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_ref ()
{
#ifdef GL_STENCIL_REF
	return (int)GL_STENCIL_REF;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_fail ()
{
#ifdef GL_STENCIL_FAIL
	return (int)GL_STENCIL_FAIL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_pass_depth_pass ()
{
#ifdef GL_STENCIL_PASS_DEPTH_PASS
	return (int)GL_STENCIL_PASS_DEPTH_PASS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_pass_depth_fail ()
{
#ifdef GL_STENCIL_PASS_DEPTH_FAIL
	return (int)GL_STENCIL_PASS_DEPTH_FAIL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_clear_value ()
{
#ifdef GL_STENCIL_CLEAR_VALUE
	return (int)GL_STENCIL_CLEAR_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_index ()
{
#ifdef GL_STENCIL_INDEX
	return (int)GL_STENCIL_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_keep ()
{
#ifdef GL_KEEP
	return (int)GL_KEEP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_replace ()
{
#ifdef GL_REPLACE
	return (int)GL_REPLACE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_incr ()
{
#ifdef GL_INCR
	return (int)GL_INCR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_decr ()
{
#ifdef GL_DECR
	return (int)GL_DECR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_none ()
{
#ifdef GL_NONE
	return (int)GL_NONE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_left ()
{
#ifdef GL_LEFT
	return (int)GL_LEFT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_right ()
{
#ifdef GL_RIGHT
	return (int)GL_RIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_front_left ()
{
#ifdef GL_FRONT_LEFT
	return (int)GL_FRONT_LEFT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_front_right ()
{
#ifdef GL_FRONT_RIGHT
	return (int)GL_FRONT_RIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_back_left ()
{
#ifdef GL_BACK_LEFT
	return (int)GL_BACK_LEFT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_back_right ()
{
#ifdef GL_BACK_RIGHT
	return (int)GL_BACK_RIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_aux0 ()
{
#ifdef GL_AUX0
	return (int)GL_AUX0;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_aux1 ()
{
#ifdef GL_AUX1
	return (int)GL_AUX1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_aux2 ()
{
#ifdef GL_AUX2
	return (int)GL_AUX2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_aux3 ()
{
#ifdef GL_AUX3
	return (int)GL_AUX3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_index ()
{
#ifdef GL_COLOR_INDEX
	return (int)GL_COLOR_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_red ()
{
#ifdef GL_RED
	return (int)GL_RED;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_green ()
{
#ifdef GL_GREEN
	return (int)GL_GREEN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blue ()
{
#ifdef GL_BLUE
	return (int)GL_BLUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha ()
{
#ifdef GL_ALPHA
	return (int)GL_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance ()
{
#ifdef GL_LUMINANCE
	return (int)GL_LUMINANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance_alpha ()
{
#ifdef GL_LUMINANCE_ALPHA
	return (int)GL_LUMINANCE_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha_bits ()
{
#ifdef GL_ALPHA_BITS
	return (int)GL_ALPHA_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_red_bits ()
{
#ifdef GL_RED_BITS
	return (int)GL_RED_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_green_bits ()
{
#ifdef GL_GREEN_BITS
	return (int)GL_GREEN_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blue_bits ()
{
#ifdef GL_BLUE_BITS
	return (int)GL_BLUE_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_bits ()
{
#ifdef GL_INDEX_BITS
	return (int)GL_INDEX_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_subpixel_bits ()
{
#ifdef GL_SUBPIXEL_BITS
	return (int)GL_SUBPIXEL_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_aux_buffers ()
{
#ifdef GL_AUX_BUFFERS
	return (int)GL_AUX_BUFFERS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_read_buffer ()
{
#ifdef GL_READ_BUFFER
	return (int)GL_READ_BUFFER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_draw_buffer ()
{
#ifdef GL_DRAW_BUFFER
	return (int)GL_DRAW_BUFFER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_doublebuffer ()
{
#ifdef GL_DOUBLEBUFFER
	return (int)GL_DOUBLEBUFFER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stereo ()
{
#ifdef GL_STEREO
	return (int)GL_STEREO;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_bitmap ()
{
#ifdef GL_BITMAP
	return (int)GL_BITMAP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color ()
{
#ifdef GL_COLOR
	return (int)GL_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth ()
{
#ifdef GL_DEPTH
	return (int)GL_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil ()
{
#ifdef GL_STENCIL
	return (int)GL_STENCIL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dither ()
{
#ifdef GL_DITHER
	return (int)GL_DITHER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb ()
{
#ifdef GL_RGB
	return (int)GL_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgba ()
{
#ifdef GL_RGBA
	return (int)GL_RGBA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_list_nesting ()
{
#ifdef GL_MAX_LIST_NESTING
	return (int)GL_MAX_LIST_NESTING;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_attrib_stack_depth ()
{
#ifdef GL_MAX_ATTRIB_STACK_DEPTH
	return (int)GL_MAX_ATTRIB_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_modelview_stack_depth ()
{
#ifdef GL_MAX_MODELVIEW_STACK_DEPTH
	return (int)GL_MAX_MODELVIEW_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_name_stack_depth ()
{
#ifdef GL_MAX_NAME_STACK_DEPTH
	return (int)GL_MAX_NAME_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_projection_stack_depth ()
{
#ifdef GL_MAX_PROJECTION_STACK_DEPTH
	return (int)GL_MAX_PROJECTION_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_texture_stack_depth ()
{
#ifdef GL_MAX_TEXTURE_STACK_DEPTH
	return (int)GL_MAX_TEXTURE_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_eval_order ()
{
#ifdef GL_MAX_EVAL_ORDER
	return (int)GL_MAX_EVAL_ORDER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_lights ()
{
#ifdef GL_MAX_LIGHTS
	return (int)GL_MAX_LIGHTS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_clip_planes ()
{
#ifdef GL_MAX_CLIP_PLANES
	return (int)GL_MAX_CLIP_PLANES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_texture_size ()
{
#ifdef GL_MAX_TEXTURE_SIZE
	return (int)GL_MAX_TEXTURE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_pixel_map_table ()
{
#ifdef GL_MAX_PIXEL_MAP_TABLE
	return (int)GL_MAX_PIXEL_MAP_TABLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_viewport_dims ()
{
#ifdef GL_MAX_VIEWPORT_DIMS
	return (int)GL_MAX_VIEWPORT_DIMS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_client_attrib_stack_depth ()
{
#ifdef GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
	return (int)GL_MAX_CLIENT_ATTRIB_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_attrib_stack_depth ()
{
#ifdef GL_ATTRIB_STACK_DEPTH
	return (int)GL_ATTRIB_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_client_attrib_stack_depth ()
{
#ifdef GL_CLIENT_ATTRIB_STACK_DEPTH
	return (int)GL_CLIENT_ATTRIB_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_clear_value ()
{
#ifdef GL_COLOR_CLEAR_VALUE
	return (int)GL_COLOR_CLEAR_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_writemask ()
{
#ifdef GL_COLOR_WRITEMASK
	return (int)GL_COLOR_WRITEMASK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_index ()
{
#ifdef GL_CURRENT_INDEX
	return (int)GL_CURRENT_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_color ()
{
#ifdef GL_CURRENT_COLOR
	return (int)GL_CURRENT_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_normal ()
{
#ifdef GL_CURRENT_NORMAL
	return (int)GL_CURRENT_NORMAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_raster_color ()
{
#ifdef GL_CURRENT_RASTER_COLOR
	return (int)GL_CURRENT_RASTER_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_raster_distance ()
{
#ifdef GL_CURRENT_RASTER_DISTANCE
	return (int)GL_CURRENT_RASTER_DISTANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_raster_index ()
{
#ifdef GL_CURRENT_RASTER_INDEX
	return (int)GL_CURRENT_RASTER_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_raster_position ()
{
#ifdef GL_CURRENT_RASTER_POSITION
	return (int)GL_CURRENT_RASTER_POSITION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_raster_texture_coords ()
{
#ifdef GL_CURRENT_RASTER_TEXTURE_COORDS
	return (int)GL_CURRENT_RASTER_TEXTURE_COORDS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_raster_position_valid ()
{
#ifdef GL_CURRENT_RASTER_POSITION_VALID
	return (int)GL_CURRENT_RASTER_POSITION_VALID;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_texture_coords ()
{
#ifdef GL_CURRENT_TEXTURE_COORDS
	return (int)GL_CURRENT_TEXTURE_COORDS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_clear_value ()
{
#ifdef GL_INDEX_CLEAR_VALUE
	return (int)GL_INDEX_CLEAR_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_mode ()
{
#ifdef GL_INDEX_MODE
	return (int)GL_INDEX_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_writemask ()
{
#ifdef GL_INDEX_WRITEMASK
	return (int)GL_INDEX_WRITEMASK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_modelview_matrix ()
{
#ifdef GL_MODELVIEW_MATRIX
	return (int)GL_MODELVIEW_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_modelview_stack_depth ()
{
#ifdef GL_MODELVIEW_STACK_DEPTH
	return (int)GL_MODELVIEW_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_name_stack_depth ()
{
#ifdef GL_NAME_STACK_DEPTH
	return (int)GL_NAME_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_projection_matrix ()
{
#ifdef GL_PROJECTION_MATRIX
	return (int)GL_PROJECTION_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_projection_stack_depth ()
{
#ifdef GL_PROJECTION_STACK_DEPTH
	return (int)GL_PROJECTION_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_render_mode ()
{
#ifdef GL_RENDER_MODE
	return (int)GL_RENDER_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgba_mode ()
{
#ifdef GL_RGBA_MODE
	return (int)GL_RGBA_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_matrix ()
{
#ifdef GL_TEXTURE_MATRIX
	return (int)GL_TEXTURE_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_stack_depth ()
{
#ifdef GL_TEXTURE_STACK_DEPTH
	return (int)GL_TEXTURE_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_viewport ()
{
#ifdef GL_VIEWPORT
	return (int)GL_VIEWPORT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_auto_normal ()
{
#ifdef GL_AUTO_NORMAL
	return (int)GL_AUTO_NORMAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_color_4 ()
{
#ifdef GL_MAP1_COLOR_4
	return (int)GL_MAP1_COLOR_4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_grid_domain ()
{
#ifdef GL_MAP1_GRID_DOMAIN
	return (int)GL_MAP1_GRID_DOMAIN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_grid_segments ()
{
#ifdef GL_MAP1_GRID_SEGMENTS
	return (int)GL_MAP1_GRID_SEGMENTS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_index ()
{
#ifdef GL_MAP1_INDEX
	return (int)GL_MAP1_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_normal ()
{
#ifdef GL_MAP1_NORMAL
	return (int)GL_MAP1_NORMAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_texture_coord_1 ()
{
#ifdef GL_MAP1_TEXTURE_COORD_1
	return (int)GL_MAP1_TEXTURE_COORD_1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_texture_coord_2 ()
{
#ifdef GL_MAP1_TEXTURE_COORD_2
	return (int)GL_MAP1_TEXTURE_COORD_2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_texture_coord_3 ()
{
#ifdef GL_MAP1_TEXTURE_COORD_3
	return (int)GL_MAP1_TEXTURE_COORD_3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_texture_coord_4 ()
{
#ifdef GL_MAP1_TEXTURE_COORD_4
	return (int)GL_MAP1_TEXTURE_COORD_4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_vertex_3 ()
{
#ifdef GL_MAP1_VERTEX_3
	return (int)GL_MAP1_VERTEX_3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map1_vertex_4 ()
{
#ifdef GL_MAP1_VERTEX_4
	return (int)GL_MAP1_VERTEX_4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_color_4 ()
{
#ifdef GL_MAP2_COLOR_4
	return (int)GL_MAP2_COLOR_4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_grid_domain ()
{
#ifdef GL_MAP2_GRID_DOMAIN
	return (int)GL_MAP2_GRID_DOMAIN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_grid_segments ()
{
#ifdef GL_MAP2_GRID_SEGMENTS
	return (int)GL_MAP2_GRID_SEGMENTS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_index ()
{
#ifdef GL_MAP2_INDEX
	return (int)GL_MAP2_INDEX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_normal ()
{
#ifdef GL_MAP2_NORMAL
	return (int)GL_MAP2_NORMAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_texture_coord_1 ()
{
#ifdef GL_MAP2_TEXTURE_COORD_1
	return (int)GL_MAP2_TEXTURE_COORD_1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_texture_coord_2 ()
{
#ifdef GL_MAP2_TEXTURE_COORD_2
	return (int)GL_MAP2_TEXTURE_COORD_2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_texture_coord_3 ()
{
#ifdef GL_MAP2_TEXTURE_COORD_3
	return (int)GL_MAP2_TEXTURE_COORD_3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_texture_coord_4 ()
{
#ifdef GL_MAP2_TEXTURE_COORD_4
	return (int)GL_MAP2_TEXTURE_COORD_4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_vertex_3 ()
{
#ifdef GL_MAP2_VERTEX_3
	return (int)GL_MAP2_VERTEX_3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map2_vertex_4 ()
{
#ifdef GL_MAP2_VERTEX_4
	return (int)GL_MAP2_VERTEX_4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_coeff ()
{
#ifdef GL_COEFF
	return (int)GL_COEFF;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_domain ()
{
#ifdef GL_DOMAIN
	return (int)GL_DOMAIN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_order ()
{
#ifdef GL_ORDER
	return (int)GL_ORDER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_hint ()
{
#ifdef GL_FOG_HINT
	return (int)GL_FOG_HINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_smooth_hint ()
{
#ifdef GL_LINE_SMOOTH_HINT
	return (int)GL_LINE_SMOOTH_HINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_perspective_correction_hint ()
{
#ifdef GL_PERSPECTIVE_CORRECTION_HINT
	return (int)GL_PERSPECTIVE_CORRECTION_HINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_smooth_hint ()
{
#ifdef GL_POINT_SMOOTH_HINT
	return (int)GL_POINT_SMOOTH_HINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_smooth_hint ()
{
#ifdef GL_POLYGON_SMOOTH_HINT
	return (int)GL_POLYGON_SMOOTH_HINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dont_care ()
{
#ifdef GL_DONT_CARE
	return (int)GL_DONT_CARE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fastest ()
{
#ifdef GL_FASTEST
	return (int)GL_FASTEST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_nicest ()
{
#ifdef GL_NICEST
	return (int)GL_NICEST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_scissor_test ()
{
#ifdef GL_SCISSOR_TEST
	return (int)GL_SCISSOR_TEST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_scissor_box ()
{
#ifdef GL_SCISSOR_BOX
	return (int)GL_SCISSOR_BOX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map_color ()
{
#ifdef GL_MAP_COLOR
	return (int)GL_MAP_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_map_stencil ()
{
#ifdef GL_MAP_STENCIL
	return (int)GL_MAP_STENCIL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_shift ()
{
#ifdef GL_INDEX_SHIFT
	return (int)GL_INDEX_SHIFT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_offset ()
{
#ifdef GL_INDEX_OFFSET
	return (int)GL_INDEX_OFFSET;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_red_scale ()
{
#ifdef GL_RED_SCALE
	return (int)GL_RED_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_red_bias ()
{
#ifdef GL_RED_BIAS
	return (int)GL_RED_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_green_scale ()
{
#ifdef GL_GREEN_SCALE
	return (int)GL_GREEN_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_green_bias ()
{
#ifdef GL_GREEN_BIAS
	return (int)GL_GREEN_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blue_scale ()
{
#ifdef GL_BLUE_SCALE
	return (int)GL_BLUE_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blue_bias ()
{
#ifdef GL_BLUE_BIAS
	return (int)GL_BLUE_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha_scale ()
{
#ifdef GL_ALPHA_SCALE
	return (int)GL_ALPHA_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha_bias ()
{
#ifdef GL_ALPHA_BIAS
	return (int)GL_ALPHA_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_scale ()
{
#ifdef GL_DEPTH_SCALE
	return (int)GL_DEPTH_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_bias ()
{
#ifdef GL_DEPTH_BIAS
	return (int)GL_DEPTH_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_s_to_s_size ()
{
#ifdef GL_PIXEL_MAP_S_TO_S_SIZE
	return (int)GL_PIXEL_MAP_S_TO_S_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_i_size ()
{
#ifdef GL_PIXEL_MAP_I_TO_I_SIZE
	return (int)GL_PIXEL_MAP_I_TO_I_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_r_size ()
{
#ifdef GL_PIXEL_MAP_I_TO_R_SIZE
	return (int)GL_PIXEL_MAP_I_TO_R_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_g_size ()
{
#ifdef GL_PIXEL_MAP_I_TO_G_SIZE
	return (int)GL_PIXEL_MAP_I_TO_G_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_b_size ()
{
#ifdef GL_PIXEL_MAP_I_TO_B_SIZE
	return (int)GL_PIXEL_MAP_I_TO_B_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_a_size ()
{
#ifdef GL_PIXEL_MAP_I_TO_A_SIZE
	return (int)GL_PIXEL_MAP_I_TO_A_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_r_to_r_size ()
{
#ifdef GL_PIXEL_MAP_R_TO_R_SIZE
	return (int)GL_PIXEL_MAP_R_TO_R_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_g_to_g_size ()
{
#ifdef GL_PIXEL_MAP_G_TO_G_SIZE
	return (int)GL_PIXEL_MAP_G_TO_G_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_b_to_b_size ()
{
#ifdef GL_PIXEL_MAP_B_TO_B_SIZE
	return (int)GL_PIXEL_MAP_B_TO_B_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_a_to_a_size ()
{
#ifdef GL_PIXEL_MAP_A_TO_A_SIZE
	return (int)GL_PIXEL_MAP_A_TO_A_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_s_to_s ()
{
#ifdef GL_PIXEL_MAP_S_TO_S
	return (int)GL_PIXEL_MAP_S_TO_S;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_i ()
{
#ifdef GL_PIXEL_MAP_I_TO_I
	return (int)GL_PIXEL_MAP_I_TO_I;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_r ()
{
#ifdef GL_PIXEL_MAP_I_TO_R
	return (int)GL_PIXEL_MAP_I_TO_R;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_g ()
{
#ifdef GL_PIXEL_MAP_I_TO_G
	return (int)GL_PIXEL_MAP_I_TO_G;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_b ()
{
#ifdef GL_PIXEL_MAP_I_TO_B
	return (int)GL_PIXEL_MAP_I_TO_B;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_i_to_a ()
{
#ifdef GL_PIXEL_MAP_I_TO_A
	return (int)GL_PIXEL_MAP_I_TO_A;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_r_to_r ()
{
#ifdef GL_PIXEL_MAP_R_TO_R
	return (int)GL_PIXEL_MAP_R_TO_R;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_g_to_g ()
{
#ifdef GL_PIXEL_MAP_G_TO_G
	return (int)GL_PIXEL_MAP_G_TO_G;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_b_to_b ()
{
#ifdef GL_PIXEL_MAP_B_TO_B
	return (int)GL_PIXEL_MAP_B_TO_B;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_map_a_to_a ()
{
#ifdef GL_PIXEL_MAP_A_TO_A
	return (int)GL_PIXEL_MAP_A_TO_A;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_alignment ()
{
#ifdef GL_PACK_ALIGNMENT
	return (int)GL_PACK_ALIGNMENT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_lsb_first ()
{
#ifdef GL_PACK_LSB_FIRST
	return (int)GL_PACK_LSB_FIRST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_row_length ()
{
#ifdef GL_PACK_ROW_LENGTH
	return (int)GL_PACK_ROW_LENGTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_skip_pixels ()
{
#ifdef GL_PACK_SKIP_PIXELS
	return (int)GL_PACK_SKIP_PIXELS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_skip_rows ()
{
#ifdef GL_PACK_SKIP_ROWS
	return (int)GL_PACK_SKIP_ROWS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_swap_bytes ()
{
#ifdef GL_PACK_SWAP_BYTES
	return (int)GL_PACK_SWAP_BYTES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_alignment ()
{
#ifdef GL_UNPACK_ALIGNMENT
	return (int)GL_UNPACK_ALIGNMENT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_lsb_first ()
{
#ifdef GL_UNPACK_LSB_FIRST
	return (int)GL_UNPACK_LSB_FIRST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_row_length ()
{
#ifdef GL_UNPACK_ROW_LENGTH
	return (int)GL_UNPACK_ROW_LENGTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_skip_pixels ()
{
#ifdef GL_UNPACK_SKIP_PIXELS
	return (int)GL_UNPACK_SKIP_PIXELS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_skip_rows ()
{
#ifdef GL_UNPACK_SKIP_ROWS
	return (int)GL_UNPACK_SKIP_ROWS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_swap_bytes ()
{
#ifdef GL_UNPACK_SWAP_BYTES
	return (int)GL_UNPACK_SWAP_BYTES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_zoom_x ()
{
#ifdef GL_ZOOM_X
	return (int)GL_ZOOM_X;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_zoom_y ()
{
#ifdef GL_ZOOM_Y
	return (int)GL_ZOOM_Y;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_env ()
{
#ifdef GL_TEXTURE_ENV
	return (int)GL_TEXTURE_ENV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_env_mode ()
{
#ifdef GL_TEXTURE_ENV_MODE
	return (int)GL_TEXTURE_ENV_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_1d ()
{
#ifdef GL_TEXTURE_1D
	return (int)GL_TEXTURE_1D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_2d ()
{
#ifdef GL_TEXTURE_2D
	return (int)GL_TEXTURE_2D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_wrap_s ()
{
#ifdef GL_TEXTURE_WRAP_S
	return (int)GL_TEXTURE_WRAP_S;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_wrap_t ()
{
#ifdef GL_TEXTURE_WRAP_T
	return (int)GL_TEXTURE_WRAP_T;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_mag_filter ()
{
#ifdef GL_TEXTURE_MAG_FILTER
	return (int)GL_TEXTURE_MAG_FILTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_min_filter ()
{
#ifdef GL_TEXTURE_MIN_FILTER
	return (int)GL_TEXTURE_MIN_FILTER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_env_color ()
{
#ifdef GL_TEXTURE_ENV_COLOR
	return (int)GL_TEXTURE_ENV_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_gen_s ()
{
#ifdef GL_TEXTURE_GEN_S
	return (int)GL_TEXTURE_GEN_S;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_gen_t ()
{
#ifdef GL_TEXTURE_GEN_T
	return (int)GL_TEXTURE_GEN_T;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_gen_mode ()
{
#ifdef GL_TEXTURE_GEN_MODE
	return (int)GL_TEXTURE_GEN_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_border_color ()
{
#ifdef GL_TEXTURE_BORDER_COLOR
	return (int)GL_TEXTURE_BORDER_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_width ()
{
#ifdef GL_TEXTURE_WIDTH
	return (int)GL_TEXTURE_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_height ()
{
#ifdef GL_TEXTURE_HEIGHT
	return (int)GL_TEXTURE_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_border ()
{
#ifdef GL_TEXTURE_BORDER
	return (int)GL_TEXTURE_BORDER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_components ()
{
#ifdef GL_TEXTURE_COMPONENTS
	return (int)GL_TEXTURE_COMPONENTS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_red_size ()
{
#ifdef GL_TEXTURE_RED_SIZE
	return (int)GL_TEXTURE_RED_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_green_size ()
{
#ifdef GL_TEXTURE_GREEN_SIZE
	return (int)GL_TEXTURE_GREEN_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_blue_size ()
{
#ifdef GL_TEXTURE_BLUE_SIZE
	return (int)GL_TEXTURE_BLUE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_alpha_size ()
{
#ifdef GL_TEXTURE_ALPHA_SIZE
	return (int)GL_TEXTURE_ALPHA_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_luminance_size ()
{
#ifdef GL_TEXTURE_LUMINANCE_SIZE
	return (int)GL_TEXTURE_LUMINANCE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_intensity_size ()
{
#ifdef GL_TEXTURE_INTENSITY_SIZE
	return (int)GL_TEXTURE_INTENSITY_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_nearest_mipmap_nearest ()
{
#ifdef GL_NEAREST_MIPMAP_NEAREST
	return (int)GL_NEAREST_MIPMAP_NEAREST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_nearest_mipmap_linear ()
{
#ifdef GL_NEAREST_MIPMAP_LINEAR
	return (int)GL_NEAREST_MIPMAP_LINEAR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_linear_mipmap_nearest ()
{
#ifdef GL_LINEAR_MIPMAP_NEAREST
	return (int)GL_LINEAR_MIPMAP_NEAREST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_linear_mipmap_linear ()
{
#ifdef GL_LINEAR_MIPMAP_LINEAR
	return (int)GL_LINEAR_MIPMAP_LINEAR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_object_linear ()
{
#ifdef GL_OBJECT_LINEAR
	return (int)GL_OBJECT_LINEAR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_object_plane ()
{
#ifdef GL_OBJECT_PLANE
	return (int)GL_OBJECT_PLANE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_eye_linear ()
{
#ifdef GL_EYE_LINEAR
	return (int)GL_EYE_LINEAR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_eye_plane ()
{
#ifdef GL_EYE_PLANE
	return (int)GL_EYE_PLANE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sphere_map ()
{
#ifdef GL_SPHERE_MAP
	return (int)GL_SPHERE_MAP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_decal ()
{
#ifdef GL_DECAL
	return (int)GL_DECAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_modulate ()
{
#ifdef GL_MODULATE
	return (int)GL_MODULATE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_nearest ()
{
#ifdef GL_NEAREST
	return (int)GL_NEAREST;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_repeat ()
{
#ifdef GL_REPEAT
	return (int)GL_REPEAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clamp ()
{
#ifdef GL_CLAMP
	return (int)GL_CLAMP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_s ()
{
#ifdef GL_S
	return (int)GL_S;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_t ()
{
#ifdef GL_T
	return (int)GL_T;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_r ()
{
#ifdef GL_R
	return (int)GL_R;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_q ()
{
#ifdef GL_Q
	return (int)GL_Q;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_gen_r ()
{
#ifdef GL_TEXTURE_GEN_R
	return (int)GL_TEXTURE_GEN_R;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_gen_q ()
{
#ifdef GL_TEXTURE_GEN_Q
	return (int)GL_TEXTURE_GEN_Q;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vendor ()
{
#ifdef GL_VENDOR
	return (int)GL_VENDOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_renderer ()
{
#ifdef GL_RENDERER
	return (int)GL_RENDERER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_version ()
{
#ifdef GL_VERSION
	return (int)GL_VERSION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_extensions ()
{
#ifdef GL_EXTENSIONS
	return (int)GL_EXTENSIONS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_no_error ()
{
#ifdef GL_NO_ERROR
	return (int)GL_NO_ERROR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_invalid_value ()
{
#ifdef GL_INVALID_VALUE
	return (int)GL_INVALID_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_invalid_enum ()
{
#ifdef GL_INVALID_ENUM
	return (int)GL_INVALID_ENUM;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_invalid_operation ()
{
#ifdef GL_INVALID_OPERATION
	return (int)GL_INVALID_OPERATION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stack_overflow ()
{
#ifdef GL_STACK_OVERFLOW
	return (int)GL_STACK_OVERFLOW;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stack_underflow ()
{
#ifdef GL_STACK_UNDERFLOW
	return (int)GL_STACK_UNDERFLOW;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_out_of_memory ()
{
#ifdef GL_OUT_OF_MEMORY
	return (int)GL_OUT_OF_MEMORY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_current_bit ()
{
#ifdef GL_CURRENT_BIT
	return (int)GL_CURRENT_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_bit ()
{
#ifdef GL_POINT_BIT
	return (int)GL_POINT_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_line_bit ()
{
#ifdef GL_LINE_BIT
	return (int)GL_LINE_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_bit ()
{
#ifdef GL_POLYGON_BIT
	return (int)GL_POLYGON_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_stipple_bit ()
{
#ifdef GL_POLYGON_STIPPLE_BIT
	return (int)GL_POLYGON_STIPPLE_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pixel_mode_bit ()
{
#ifdef GL_PIXEL_MODE_BIT
	return (int)GL_PIXEL_MODE_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_lighting_bit ()
{
#ifdef GL_LIGHTING_BIT
	return (int)GL_LIGHTING_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_fog_bit ()
{
#ifdef GL_FOG_BIT
	return (int)GL_FOG_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_depth_buffer_bit ()
{
#ifdef GL_DEPTH_BUFFER_BIT
	return (int)GL_DEPTH_BUFFER_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_accum_buffer_bit ()
{
#ifdef GL_ACCUM_BUFFER_BIT
	return (int)GL_ACCUM_BUFFER_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_stencil_buffer_bit ()
{
#ifdef GL_STENCIL_BUFFER_BIT
	return (int)GL_STENCIL_BUFFER_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_viewport_bit ()
{
#ifdef GL_VIEWPORT_BIT
	return (int)GL_VIEWPORT_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_transform_bit ()
{
#ifdef GL_TRANSFORM_BIT
	return (int)GL_TRANSFORM_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_enable_bit ()
{
#ifdef GL_ENABLE_BIT
	return (int)GL_ENABLE_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_buffer_bit ()
{
#ifdef GL_COLOR_BUFFER_BIT
	return (int)GL_COLOR_BUFFER_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_hint_bit ()
{
#ifdef GL_HINT_BIT
	return (int)GL_HINT_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_eval_bit ()
{
#ifdef GL_EVAL_BIT
	return (int)GL_EVAL_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_list_bit ()
{
#ifdef GL_LIST_BIT
	return (int)GL_LIST_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_bit ()
{
#ifdef GL_TEXTURE_BIT
	return (int)GL_TEXTURE_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_scissor_bit ()
{
#ifdef GL_SCISSOR_BIT
	return (int)GL_SCISSOR_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_all_attrib_bits ()
{
#ifdef GL_ALL_ATTRIB_BITS
	return (int)GL_ALL_ATTRIB_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_texture_1d ()
{
#ifdef GL_PROXY_TEXTURE_1D
	return (int)GL_PROXY_TEXTURE_1D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_texture_2d ()
{
#ifdef GL_PROXY_TEXTURE_2D
	return (int)GL_PROXY_TEXTURE_2D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_priority ()
{
#ifdef GL_TEXTURE_PRIORITY
	return (int)GL_TEXTURE_PRIORITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_resident ()
{
#ifdef GL_TEXTURE_RESIDENT
	return (int)GL_TEXTURE_RESIDENT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_binding_1d ()
{
#ifdef GL_TEXTURE_BINDING_1D
	return (int)GL_TEXTURE_BINDING_1D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_binding_2d ()
{
#ifdef GL_TEXTURE_BINDING_2D
	return (int)GL_TEXTURE_BINDING_2D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_internal_format ()
{
#ifdef GL_TEXTURE_INTERNAL_FORMAT
	return (int)GL_TEXTURE_INTERNAL_FORMAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha4 ()
{
#ifdef GL_ALPHA4
	return (int)GL_ALPHA4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha8 ()
{
#ifdef GL_ALPHA8
	return (int)GL_ALPHA8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha12 ()
{
#ifdef GL_ALPHA12
	return (int)GL_ALPHA12;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_alpha16 ()
{
#ifdef GL_ALPHA16
	return (int)GL_ALPHA16;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance4 ()
{
#ifdef GL_LUMINANCE4
	return (int)GL_LUMINANCE4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance8 ()
{
#ifdef GL_LUMINANCE8
	return (int)GL_LUMINANCE8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance12 ()
{
#ifdef GL_LUMINANCE12
	return (int)GL_LUMINANCE12;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance16 ()
{
#ifdef GL_LUMINANCE16
	return (int)GL_LUMINANCE16;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance4_alpha4 ()
{
#ifdef GL_LUMINANCE4_ALPHA4
	return (int)GL_LUMINANCE4_ALPHA4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance6_alpha2 ()
{
#ifdef GL_LUMINANCE6_ALPHA2
	return (int)GL_LUMINANCE6_ALPHA2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance8_alpha8 ()
{
#ifdef GL_LUMINANCE8_ALPHA8
	return (int)GL_LUMINANCE8_ALPHA8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance12_alpha4 ()
{
#ifdef GL_LUMINANCE12_ALPHA4
	return (int)GL_LUMINANCE12_ALPHA4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance12_alpha12 ()
{
#ifdef GL_LUMINANCE12_ALPHA12
	return (int)GL_LUMINANCE12_ALPHA12;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_luminance16_alpha16 ()
{
#ifdef GL_LUMINANCE16_ALPHA16
	return (int)GL_LUMINANCE16_ALPHA16;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_intensity ()
{
#ifdef GL_INTENSITY
	return (int)GL_INTENSITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_intensity4 ()
{
#ifdef GL_INTENSITY4
	return (int)GL_INTENSITY4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_intensity8 ()
{
#ifdef GL_INTENSITY8
	return (int)GL_INTENSITY8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_intensity12 ()
{
#ifdef GL_INTENSITY12
	return (int)GL_INTENSITY12;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_intensity16 ()
{
#ifdef GL_INTENSITY16
	return (int)GL_INTENSITY16;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_r3_g3_b2 ()
{
#ifdef GL_R3_G3_B2
	return (int)GL_R3_G3_B2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb4 ()
{
#ifdef GL_RGB4
	return (int)GL_RGB4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb5 ()
{
#ifdef GL_RGB5
	return (int)GL_RGB5;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb8 ()
{
#ifdef GL_RGB8
	return (int)GL_RGB8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb10 ()
{
#ifdef GL_RGB10
	return (int)GL_RGB10;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb12 ()
{
#ifdef GL_RGB12
	return (int)GL_RGB12;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb16 ()
{
#ifdef GL_RGB16
	return (int)GL_RGB16;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgba2 ()
{
#ifdef GL_RGBA2
	return (int)GL_RGBA2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgba4 ()
{
#ifdef GL_RGBA4
	return (int)GL_RGBA4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb5_a1 ()
{
#ifdef GL_RGB5_A1
	return (int)GL_RGB5_A1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgba8 ()
{
#ifdef GL_RGBA8
	return (int)GL_RGBA8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb10_a2 ()
{
#ifdef GL_RGB10_A2
	return (int)GL_RGB10_A2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgba12 ()
{
#ifdef GL_RGBA12
	return (int)GL_RGBA12;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgba16 ()
{
#ifdef GL_RGBA16
	return (int)GL_RGBA16;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_client_pixel_store_bit ()
{
#ifdef GL_CLIENT_PIXEL_STORE_BIT
	return (int)GL_CLIENT_PIXEL_STORE_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_client_vertex_array_bit ()
{
#ifdef GL_CLIENT_VERTEX_ARRAY_BIT
	return (int)GL_CLIENT_VERTEX_ARRAY_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_all_client_attrib_bits ()
{
#ifdef GL_ALL_CLIENT_ATTRIB_BITS
	return (int)GL_ALL_CLIENT_ATTRIB_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_client_all_attrib_bits ()
{
#ifdef GL_CLIENT_ALL_ATTRIB_BITS
	return (int)GL_CLIENT_ALL_ATTRIB_BITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rescale_normal ()
{
#ifdef GL_RESCALE_NORMAL
	return (int)GL_RESCALE_NORMAL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clamp_to_edge ()
{
#ifdef GL_CLAMP_TO_EDGE
	return (int)GL_CLAMP_TO_EDGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_elements_vertices ()
{
#ifdef GL_MAX_ELEMENTS_VERTICES
	return (int)GL_MAX_ELEMENTS_VERTICES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_elements_indices ()
{
#ifdef GL_MAX_ELEMENTS_INDICES
	return (int)GL_MAX_ELEMENTS_INDICES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_bgr ()
{
#ifdef GL_BGR
	return (int)GL_BGR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_bgra ()
{
#ifdef GL_BGRA
	return (int)GL_BGRA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_byte_3_3_2 ()
{
#ifdef GL_UNSIGNED_BYTE_3_3_2
	return (int)GL_UNSIGNED_BYTE_3_3_2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_byte_2_3_3_rev ()
{
#ifdef GL_UNSIGNED_BYTE_2_3_3_REV
	return (int)GL_UNSIGNED_BYTE_2_3_3_REV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_5_6_5 ()
{
#ifdef GL_UNSIGNED_SHORT_5_6_5
	return (int)GL_UNSIGNED_SHORT_5_6_5;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_5_6_5_rev ()
{
#ifdef GL_UNSIGNED_SHORT_5_6_5_REV
	return (int)GL_UNSIGNED_SHORT_5_6_5_REV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_4_4_4_4 ()
{
#ifdef GL_UNSIGNED_SHORT_4_4_4_4
	return (int)GL_UNSIGNED_SHORT_4_4_4_4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_4_4_4_4_rev ()
{
#ifdef GL_UNSIGNED_SHORT_4_4_4_4_REV
	return (int)GL_UNSIGNED_SHORT_4_4_4_4_REV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_5_5_5_1 ()
{
#ifdef GL_UNSIGNED_SHORT_5_5_5_1
	return (int)GL_UNSIGNED_SHORT_5_5_5_1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_1_5_5_5_rev ()
{
#ifdef GL_UNSIGNED_SHORT_1_5_5_5_REV
	return (int)GL_UNSIGNED_SHORT_1_5_5_5_REV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_int_8_8_8_8 ()
{
#ifdef GL_UNSIGNED_INT_8_8_8_8
	return (int)GL_UNSIGNED_INT_8_8_8_8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_int_8_8_8_8_rev ()
{
#ifdef GL_UNSIGNED_INT_8_8_8_8_REV
	return (int)GL_UNSIGNED_INT_8_8_8_8_REV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_int_10_10_10_2 ()
{
#ifdef GL_UNSIGNED_INT_10_10_10_2
	return (int)GL_UNSIGNED_INT_10_10_10_2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_int_2_10_10_10_rev ()
{
#ifdef GL_UNSIGNED_INT_2_10_10_10_REV
	return (int)GL_UNSIGNED_INT_2_10_10_10_REV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_light_model_color_control ()
{
#ifdef GL_LIGHT_MODEL_COLOR_CONTROL
	return (int)GL_LIGHT_MODEL_COLOR_CONTROL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_single_color ()
{
#ifdef GL_SINGLE_COLOR
	return (int)GL_SINGLE_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_separate_specular_color ()
{
#ifdef GL_SEPARATE_SPECULAR_COLOR
	return (int)GL_SEPARATE_SPECULAR_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_min_lod ()
{
#ifdef GL_TEXTURE_MIN_LOD
	return (int)GL_TEXTURE_MIN_LOD;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_max_lod ()
{
#ifdef GL_TEXTURE_MAX_LOD
	return (int)GL_TEXTURE_MAX_LOD;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_base_level ()
{
#ifdef GL_TEXTURE_BASE_LEVEL
	return (int)GL_TEXTURE_BASE_LEVEL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_max_level ()
{
#ifdef GL_TEXTURE_MAX_LEVEL
	return (int)GL_TEXTURE_MAX_LEVEL;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_smooth_point_size_range ()
{
#ifdef GL_SMOOTH_POINT_SIZE_RANGE
	return (int)GL_SMOOTH_POINT_SIZE_RANGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_smooth_point_size_granularity ()
{
#ifdef GL_SMOOTH_POINT_SIZE_GRANULARITY
	return (int)GL_SMOOTH_POINT_SIZE_GRANULARITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_smooth_line_width_range ()
{
#ifdef GL_SMOOTH_LINE_WIDTH_RANGE
	return (int)GL_SMOOTH_LINE_WIDTH_RANGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_smooth_line_width_granularity ()
{
#ifdef GL_SMOOTH_LINE_WIDTH_GRANULARITY
	return (int)GL_SMOOTH_LINE_WIDTH_GRANULARITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_aliased_point_size_range ()
{
#ifdef GL_ALIASED_POINT_SIZE_RANGE
	return (int)GL_ALIASED_POINT_SIZE_RANGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_aliased_line_width_range ()
{
#ifdef GL_ALIASED_LINE_WIDTH_RANGE
	return (int)GL_ALIASED_LINE_WIDTH_RANGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_skip_images ()
{
#ifdef GL_PACK_SKIP_IMAGES
	return (int)GL_PACK_SKIP_IMAGES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_image_height ()
{
#ifdef GL_PACK_IMAGE_HEIGHT
	return (int)GL_PACK_IMAGE_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_skip_images ()
{
#ifdef GL_UNPACK_SKIP_IMAGES
	return (int)GL_UNPACK_SKIP_IMAGES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_image_height ()
{
#ifdef GL_UNPACK_IMAGE_HEIGHT
	return (int)GL_UNPACK_IMAGE_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_3d ()
{
#ifdef GL_TEXTURE_3D
	return (int)GL_TEXTURE_3D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_texture_3d ()
{
#ifdef GL_PROXY_TEXTURE_3D
	return (int)GL_PROXY_TEXTURE_3D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_depth ()
{
#ifdef GL_TEXTURE_DEPTH
	return (int)GL_TEXTURE_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_wrap_r ()
{
#ifdef GL_TEXTURE_WRAP_R
	return (int)GL_TEXTURE_WRAP_R;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_3d_texture_size ()
{
#ifdef GL_MAX_3D_TEXTURE_SIZE
	return (int)GL_MAX_3D_TEXTURE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_binding_3d ()
{
#ifdef GL_TEXTURE_BINDING_3D
	return (int)GL_TEXTURE_BINDING_3D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table ()
{
#ifdef GL_COLOR_TABLE
	return (int)GL_COLOR_TABLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_color_table ()
{
#ifdef GL_POST_CONVOLUTION_COLOR_TABLE
	return (int)GL_POST_CONVOLUTION_COLOR_TABLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_color_table ()
{
#ifdef GL_POST_COLOR_MATRIX_COLOR_TABLE
	return (int)GL_POST_COLOR_MATRIX_COLOR_TABLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_color_table ()
{
#ifdef GL_PROXY_COLOR_TABLE
	return (int)GL_PROXY_COLOR_TABLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_post_convolution_color_table ()
{
#ifdef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE
	return (int)GL_PROXY_POST_CONVOLUTION_COLOR_TABLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_post_color_matrix_color_table ()
{
#ifdef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE
	return (int)GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_scale ()
{
#ifdef GL_COLOR_TABLE_SCALE
	return (int)GL_COLOR_TABLE_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_bias ()
{
#ifdef GL_COLOR_TABLE_BIAS
	return (int)GL_COLOR_TABLE_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_format ()
{
#ifdef GL_COLOR_TABLE_FORMAT
	return (int)GL_COLOR_TABLE_FORMAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_width ()
{
#ifdef GL_COLOR_TABLE_WIDTH
	return (int)GL_COLOR_TABLE_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_red_size ()
{
#ifdef GL_COLOR_TABLE_RED_SIZE
	return (int)GL_COLOR_TABLE_RED_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_green_size ()
{
#ifdef GL_COLOR_TABLE_GREEN_SIZE
	return (int)GL_COLOR_TABLE_GREEN_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_blue_size ()
{
#ifdef GL_COLOR_TABLE_BLUE_SIZE
	return (int)GL_COLOR_TABLE_BLUE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_alpha_size ()
{
#ifdef GL_COLOR_TABLE_ALPHA_SIZE
	return (int)GL_COLOR_TABLE_ALPHA_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_luminance_size ()
{
#ifdef GL_COLOR_TABLE_LUMINANCE_SIZE
	return (int)GL_COLOR_TABLE_LUMINANCE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_intensity_size ()
{
#ifdef GL_COLOR_TABLE_INTENSITY_SIZE
	return (int)GL_COLOR_TABLE_INTENSITY_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_1d ()
{
#ifdef GL_CONVOLUTION_1D
	return (int)GL_CONVOLUTION_1D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_2d ()
{
#ifdef GL_CONVOLUTION_2D
	return (int)GL_CONVOLUTION_2D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_separable_2d ()
{
#ifdef GL_SEPARABLE_2D
	return (int)GL_SEPARABLE_2D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_border_mode ()
{
#ifdef GL_CONVOLUTION_BORDER_MODE
	return (int)GL_CONVOLUTION_BORDER_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_filter_scale ()
{
#ifdef GL_CONVOLUTION_FILTER_SCALE
	return (int)GL_CONVOLUTION_FILTER_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_filter_bias ()
{
#ifdef GL_CONVOLUTION_FILTER_BIAS
	return (int)GL_CONVOLUTION_FILTER_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_reduce ()
{
#ifdef GL_REDUCE
	return (int)GL_REDUCE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_format ()
{
#ifdef GL_CONVOLUTION_FORMAT
	return (int)GL_CONVOLUTION_FORMAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_width ()
{
#ifdef GL_CONVOLUTION_WIDTH
	return (int)GL_CONVOLUTION_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_height ()
{
#ifdef GL_CONVOLUTION_HEIGHT
	return (int)GL_CONVOLUTION_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_convolution_width ()
{
#ifdef GL_MAX_CONVOLUTION_WIDTH
	return (int)GL_MAX_CONVOLUTION_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_convolution_height ()
{
#ifdef GL_MAX_CONVOLUTION_HEIGHT
	return (int)GL_MAX_CONVOLUTION_HEIGHT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_red_scale ()
{
#ifdef GL_POST_CONVOLUTION_RED_SCALE
	return (int)GL_POST_CONVOLUTION_RED_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_green_scale ()
{
#ifdef GL_POST_CONVOLUTION_GREEN_SCALE
	return (int)GL_POST_CONVOLUTION_GREEN_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_blue_scale ()
{
#ifdef GL_POST_CONVOLUTION_BLUE_SCALE
	return (int)GL_POST_CONVOLUTION_BLUE_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_alpha_scale ()
{
#ifdef GL_POST_CONVOLUTION_ALPHA_SCALE
	return (int)GL_POST_CONVOLUTION_ALPHA_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_red_bias ()
{
#ifdef GL_POST_CONVOLUTION_RED_BIAS
	return (int)GL_POST_CONVOLUTION_RED_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_green_bias ()
{
#ifdef GL_POST_CONVOLUTION_GREEN_BIAS
	return (int)GL_POST_CONVOLUTION_GREEN_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_blue_bias ()
{
#ifdef GL_POST_CONVOLUTION_BLUE_BIAS
	return (int)GL_POST_CONVOLUTION_BLUE_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_convolution_alpha_bias ()
{
#ifdef GL_POST_CONVOLUTION_ALPHA_BIAS
	return (int)GL_POST_CONVOLUTION_ALPHA_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_constant_border ()
{
#ifdef GL_CONSTANT_BORDER
	return (int)GL_CONSTANT_BORDER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_replicate_border ()
{
#ifdef GL_REPLICATE_BORDER
	return (int)GL_REPLICATE_BORDER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_convolution_border_color ()
{
#ifdef GL_CONVOLUTION_BORDER_COLOR
	return (int)GL_CONVOLUTION_BORDER_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_matrix ()
{
#ifdef GL_COLOR_MATRIX
	return (int)GL_COLOR_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_matrix_stack_depth ()
{
#ifdef GL_COLOR_MATRIX_STACK_DEPTH
	return (int)GL_COLOR_MATRIX_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_color_matrix_stack_depth ()
{
#ifdef GL_MAX_COLOR_MATRIX_STACK_DEPTH
	return (int)GL_MAX_COLOR_MATRIX_STACK_DEPTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_red_scale ()
{
#ifdef GL_POST_COLOR_MATRIX_RED_SCALE
	return (int)GL_POST_COLOR_MATRIX_RED_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_green_scale ()
{
#ifdef GL_POST_COLOR_MATRIX_GREEN_SCALE
	return (int)GL_POST_COLOR_MATRIX_GREEN_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_blue_scale ()
{
#ifdef GL_POST_COLOR_MATRIX_BLUE_SCALE
	return (int)GL_POST_COLOR_MATRIX_BLUE_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_alpha_scale ()
{
#ifdef GL_POST_COLOR_MATRIX_ALPHA_SCALE
	return (int)GL_POST_COLOR_MATRIX_ALPHA_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_red_bias ()
{
#ifdef GL_POST_COLOR_MATRIX_RED_BIAS
	return (int)GL_POST_COLOR_MATRIX_RED_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_green_bias ()
{
#ifdef GL_POST_COLOR_MATRIX_GREEN_BIAS
	return (int)GL_POST_COLOR_MATRIX_GREEN_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_blue_bias ()
{
#ifdef GL_POST_COLOR_MATRIX_BLUE_BIAS
	return (int)GL_POST_COLOR_MATRIX_BLUE_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_post_color_matrix_alpha_bias ()
{
#ifdef GL_POST_COLOR_MATRIX_ALPHA_BIAS
	return (int)GL_POST_COLOR_MATRIX_ALPHA_BIAS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram ()
{
#ifdef GL_HISTOGRAM
	return (int)GL_HISTOGRAM;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_histogram ()
{
#ifdef GL_PROXY_HISTOGRAM
	return (int)GL_PROXY_HISTOGRAM;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_width ()
{
#ifdef GL_HISTOGRAM_WIDTH
	return (int)GL_HISTOGRAM_WIDTH;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_format ()
{
#ifdef GL_HISTOGRAM_FORMAT
	return (int)GL_HISTOGRAM_FORMAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_red_size ()
{
#ifdef GL_HISTOGRAM_RED_SIZE
	return (int)GL_HISTOGRAM_RED_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_green_size ()
{
#ifdef GL_HISTOGRAM_GREEN_SIZE
	return (int)GL_HISTOGRAM_GREEN_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_blue_size ()
{
#ifdef GL_HISTOGRAM_BLUE_SIZE
	return (int)GL_HISTOGRAM_BLUE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_alpha_size ()
{
#ifdef GL_HISTOGRAM_ALPHA_SIZE
	return (int)GL_HISTOGRAM_ALPHA_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_luminance_size ()
{
#ifdef GL_HISTOGRAM_LUMINANCE_SIZE
	return (int)GL_HISTOGRAM_LUMINANCE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_histogram_sink ()
{
#ifdef GL_HISTOGRAM_SINK
	return (int)GL_HISTOGRAM_SINK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_minmax ()
{
#ifdef GL_MINMAX
	return (int)GL_MINMAX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_minmax_format ()
{
#ifdef GL_MINMAX_FORMAT
	return (int)GL_MINMAX_FORMAT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_minmax_sink ()
{
#ifdef GL_MINMAX_SINK
	return (int)GL_MINMAX_SINK;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_table_too_large ()
{
#ifdef GL_TABLE_TOO_LARGE
	return (int)GL_TABLE_TOO_LARGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blend_equation ()
{
#ifdef GL_BLEND_EQUATION
	return (int)GL_BLEND_EQUATION;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_min ()
{
#ifdef GL_MIN
	return (int)GL_MIN;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max ()
{
#ifdef GL_MAX
	return (int)GL_MAX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_func_add ()
{
#ifdef GL_FUNC_ADD
	return (int)GL_FUNC_ADD;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_func_subtract ()
{
#ifdef GL_FUNC_SUBTRACT
	return (int)GL_FUNC_SUBTRACT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_func_reverse_subtract ()
{
#ifdef GL_FUNC_REVERSE_SUBTRACT
	return (int)GL_FUNC_REVERSE_SUBTRACT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blend_color ()
{
#ifdef GL_BLEND_COLOR
	return (int)GL_BLEND_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture0 ()
{
#ifdef GL_TEXTURE0
	return (int)GL_TEXTURE0;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture1 ()
{
#ifdef GL_TEXTURE1
	return (int)GL_TEXTURE1;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture2 ()
{
#ifdef GL_TEXTURE2
	return (int)GL_TEXTURE2;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture3 ()
{
#ifdef GL_TEXTURE3
	return (int)GL_TEXTURE3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture4 ()
{
#ifdef GL_TEXTURE4
	return (int)GL_TEXTURE4;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture5 ()
{
#ifdef GL_TEXTURE5
	return (int)GL_TEXTURE5;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture6 ()
{
#ifdef GL_TEXTURE6
	return (int)GL_TEXTURE6;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture7 ()
{
#ifdef GL_TEXTURE7
	return (int)GL_TEXTURE7;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture8 ()
{
#ifdef GL_TEXTURE8
	return (int)GL_TEXTURE8;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture9 ()
{
#ifdef GL_TEXTURE9
	return (int)GL_TEXTURE9;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture10 ()
{
#ifdef GL_TEXTURE10
	return (int)GL_TEXTURE10;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture11 ()
{
#ifdef GL_TEXTURE11
	return (int)GL_TEXTURE11;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture12 ()
{
#ifdef GL_TEXTURE12
	return (int)GL_TEXTURE12;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture13 ()
{
#ifdef GL_TEXTURE13
	return (int)GL_TEXTURE13;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture14 ()
{
#ifdef GL_TEXTURE14
	return (int)GL_TEXTURE14;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture15 ()
{
#ifdef GL_TEXTURE15
	return (int)GL_TEXTURE15;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture16 ()
{
#ifdef GL_TEXTURE16
	return (int)GL_TEXTURE16;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture17 ()
{
#ifdef GL_TEXTURE17
	return (int)GL_TEXTURE17;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture18 ()
{
#ifdef GL_TEXTURE18
	return (int)GL_TEXTURE18;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture19 ()
{
#ifdef GL_TEXTURE19
	return (int)GL_TEXTURE19;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture20 ()
{
#ifdef GL_TEXTURE20
	return (int)GL_TEXTURE20;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture21 ()
{
#ifdef GL_TEXTURE21
	return (int)GL_TEXTURE21;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture22 ()
{
#ifdef GL_TEXTURE22
	return (int)GL_TEXTURE22;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture23 ()
{
#ifdef GL_TEXTURE23
	return (int)GL_TEXTURE23;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture24 ()
{
#ifdef GL_TEXTURE24
	return (int)GL_TEXTURE24;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture25 ()
{
#ifdef GL_TEXTURE25
	return (int)GL_TEXTURE25;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture26 ()
{
#ifdef GL_TEXTURE26
	return (int)GL_TEXTURE26;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture27 ()
{
#ifdef GL_TEXTURE27
	return (int)GL_TEXTURE27;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture28 ()
{
#ifdef GL_TEXTURE28
	return (int)GL_TEXTURE28;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture29 ()
{
#ifdef GL_TEXTURE29
	return (int)GL_TEXTURE29;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture30 ()
{
#ifdef GL_TEXTURE30
	return (int)GL_TEXTURE30;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture31 ()
{
#ifdef GL_TEXTURE31
	return (int)GL_TEXTURE31;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_active_texture ()
{
#ifdef GL_ACTIVE_TEXTURE
	return (int)GL_ACTIVE_TEXTURE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_client_active_texture ()
{
#ifdef GL_CLIENT_ACTIVE_TEXTURE
	return (int)GL_CLIENT_ACTIVE_TEXTURE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_texture_units ()
{
#ifdef GL_MAX_TEXTURE_UNITS
	return (int)GL_MAX_TEXTURE_UNITS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_map ()
{
#ifdef GL_NORMAL_MAP
	return (int)GL_NORMAL_MAP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_reflection_map ()
{
#ifdef GL_REFLECTION_MAP
	return (int)GL_REFLECTION_MAP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_cube_map ()
{
#ifdef GL_TEXTURE_CUBE_MAP
	return (int)GL_TEXTURE_CUBE_MAP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_binding_cube_map ()
{
#ifdef GL_TEXTURE_BINDING_CUBE_MAP
	return (int)GL_TEXTURE_BINDING_CUBE_MAP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_cube_map_positive_x ()
{
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_X
	return (int)GL_TEXTURE_CUBE_MAP_POSITIVE_X;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_cube_map_negative_x ()
{
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
	return (int)GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_cube_map_positive_y ()
{
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
	return (int)GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_cube_map_negative_y ()
{
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
	return (int)GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_cube_map_positive_z ()
{
#ifdef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
	return (int)GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_cube_map_negative_z ()
{
#ifdef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
	return (int)GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_texture_cube_map ()
{
#ifdef GL_PROXY_TEXTURE_CUBE_MAP
	return (int)GL_PROXY_TEXTURE_CUBE_MAP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_cube_map_texture_size ()
{
#ifdef GL_MAX_CUBE_MAP_TEXTURE_SIZE
	return (int)GL_MAX_CUBE_MAP_TEXTURE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compressed_alpha ()
{
#ifdef GL_COMPRESSED_ALPHA
	return (int)GL_COMPRESSED_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compressed_luminance ()
{
#ifdef GL_COMPRESSED_LUMINANCE
	return (int)GL_COMPRESSED_LUMINANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compressed_luminance_alpha ()
{
#ifdef GL_COMPRESSED_LUMINANCE_ALPHA
	return (int)GL_COMPRESSED_LUMINANCE_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compressed_intensity ()
{
#ifdef GL_COMPRESSED_INTENSITY
	return (int)GL_COMPRESSED_INTENSITY;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compressed_rgb ()
{
#ifdef GL_COMPRESSED_RGB
	return (int)GL_COMPRESSED_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compressed_rgba ()
{
#ifdef GL_COMPRESSED_RGBA
	return (int)GL_COMPRESSED_RGBA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_compression_hint ()
{
#ifdef GL_TEXTURE_COMPRESSION_HINT
	return (int)GL_TEXTURE_COMPRESSION_HINT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_compressed_image_size ()
{
#ifdef GL_TEXTURE_COMPRESSED_IMAGE_SIZE
	return (int)GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_compressed ()
{
#ifdef GL_TEXTURE_COMPRESSED
	return (int)GL_TEXTURE_COMPRESSED;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_num_compressed_texture_formats ()
{
#ifdef GL_NUM_COMPRESSED_TEXTURE_FORMATS
	return (int)GL_NUM_COMPRESSED_TEXTURE_FORMATS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_compressed_texture_formats ()
{
#ifdef GL_COMPRESSED_TEXTURE_FORMATS
	return (int)GL_COMPRESSED_TEXTURE_FORMATS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_multisample ()
{
#ifdef GL_MULTISAMPLE
	return (int)GL_MULTISAMPLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sample_alpha_to_coverage ()
{
#ifdef GL_SAMPLE_ALPHA_TO_COVERAGE
	return (int)GL_SAMPLE_ALPHA_TO_COVERAGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sample_alpha_to_one ()
{
#ifdef GL_SAMPLE_ALPHA_TO_ONE
	return (int)GL_SAMPLE_ALPHA_TO_ONE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sample_coverage ()
{
#ifdef GL_SAMPLE_COVERAGE
	return (int)GL_SAMPLE_COVERAGE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sample_buffers ()
{
#ifdef GL_SAMPLE_BUFFERS
	return (int)GL_SAMPLE_BUFFERS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_samples ()
{
#ifdef GL_SAMPLES
	return (int)GL_SAMPLES;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sample_coverage_value ()
{
#ifdef GL_SAMPLE_COVERAGE_VALUE
	return (int)GL_SAMPLE_COVERAGE_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sample_coverage_invert ()
{
#ifdef GL_SAMPLE_COVERAGE_INVERT
	return (int)GL_SAMPLE_COVERAGE_INVERT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_multisample_bit ()
{
#ifdef GL_MULTISAMPLE_BIT
	return (int)GL_MULTISAMPLE_BIT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_transpose_modelview_matrix ()
{
#ifdef GL_TRANSPOSE_MODELVIEW_MATRIX
	return (int)GL_TRANSPOSE_MODELVIEW_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_transpose_projection_matrix ()
{
#ifdef GL_TRANSPOSE_PROJECTION_MATRIX
	return (int)GL_TRANSPOSE_PROJECTION_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_transpose_texture_matrix ()
{
#ifdef GL_TRANSPOSE_TEXTURE_MATRIX
	return (int)GL_TRANSPOSE_TEXTURE_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_transpose_color_matrix ()
{
#ifdef GL_TRANSPOSE_COLOR_MATRIX
	return (int)GL_TRANSPOSE_COLOR_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_combine ()
{
#ifdef GL_COMBINE
	return (int)GL_COMBINE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_combine_rgb ()
{
#ifdef GL_COMBINE_RGB
	return (int)GL_COMBINE_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_combine_alpha ()
{
#ifdef GL_COMBINE_ALPHA
	return (int)GL_COMBINE_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_source0_rgb ()
{
#ifdef GL_SOURCE0_RGB
	return (int)GL_SOURCE0_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_source1_rgb ()
{
#ifdef GL_SOURCE1_RGB
	return (int)GL_SOURCE1_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_source2_rgb ()
{
#ifdef GL_SOURCE2_RGB
	return (int)GL_SOURCE2_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_source0_alpha ()
{
#ifdef GL_SOURCE0_ALPHA
	return (int)GL_SOURCE0_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_source1_alpha ()
{
#ifdef GL_SOURCE1_ALPHA
	return (int)GL_SOURCE1_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_source2_alpha ()
{
#ifdef GL_SOURCE2_ALPHA
	return (int)GL_SOURCE2_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_operand0_rgb ()
{
#ifdef GL_OPERAND0_RGB
	return (int)GL_OPERAND0_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_operand1_rgb ()
{
#ifdef GL_OPERAND1_RGB
	return (int)GL_OPERAND1_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_operand2_rgb ()
{
#ifdef GL_OPERAND2_RGB
	return (int)GL_OPERAND2_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_operand0_alpha ()
{
#ifdef GL_OPERAND0_ALPHA
	return (int)GL_OPERAND0_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_operand1_alpha ()
{
#ifdef GL_OPERAND1_ALPHA
	return (int)GL_OPERAND1_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_operand2_alpha ()
{
#ifdef GL_OPERAND2_ALPHA
	return (int)GL_OPERAND2_ALPHA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rgb_scale ()
{
#ifdef GL_RGB_SCALE
	return (int)GL_RGB_SCALE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_add_signed ()
{
#ifdef GL_ADD_SIGNED
	return (int)GL_ADD_SIGNED;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_interpolate ()
{
#ifdef GL_INTERPOLATE
	return (int)GL_INTERPOLATE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_subtract ()
{
#ifdef GL_SUBTRACT
	return (int)GL_SUBTRACT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_constant ()
{
#ifdef GL_CONSTANT
	return (int)GL_CONSTANT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_primary_color ()
{
#ifdef GL_PRIMARY_COLOR
	return (int)GL_PRIMARY_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_previous ()
{
#ifdef GL_PREVIOUS
	return (int)GL_PREVIOUS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dot3_rgb ()
{
#ifdef GL_DOT3_RGB
	return (int)GL_DOT3_RGB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dot3_rgba ()
{
#ifdef GL_DOT3_RGBA
	return (int)GL_DOT3_RGBA;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clamp_to_border ()
{
#ifdef GL_CLAMP_TO_BORDER
	return (int)GL_CLAMP_TO_BORDER;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_arb_multitexture ()
{
#ifdef GL_ARB_multitexture
	return (int)GL_ARB_multitexture;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture0_arb ()
{
#ifdef GL_TEXTURE0_ARB
	return (int)GL_TEXTURE0_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture1_arb ()
{
#ifdef GL_TEXTURE1_ARB
	return (int)GL_TEXTURE1_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture2_arb ()
{
#ifdef GL_TEXTURE2_ARB
	return (int)GL_TEXTURE2_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture3_arb ()
{
#ifdef GL_TEXTURE3_ARB
	return (int)GL_TEXTURE3_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture4_arb ()
{
#ifdef GL_TEXTURE4_ARB
	return (int)GL_TEXTURE4_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture5_arb ()
{
#ifdef GL_TEXTURE5_ARB
	return (int)GL_TEXTURE5_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture6_arb ()
{
#ifdef GL_TEXTURE6_ARB
	return (int)GL_TEXTURE6_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture7_arb ()
{
#ifdef GL_TEXTURE7_ARB
	return (int)GL_TEXTURE7_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture8_arb ()
{
#ifdef GL_TEXTURE8_ARB
	return (int)GL_TEXTURE8_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture9_arb ()
{
#ifdef GL_TEXTURE9_ARB
	return (int)GL_TEXTURE9_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture10_arb ()
{
#ifdef GL_TEXTURE10_ARB
	return (int)GL_TEXTURE10_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture11_arb ()
{
#ifdef GL_TEXTURE11_ARB
	return (int)GL_TEXTURE11_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture12_arb ()
{
#ifdef GL_TEXTURE12_ARB
	return (int)GL_TEXTURE12_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture13_arb ()
{
#ifdef GL_TEXTURE13_ARB
	return (int)GL_TEXTURE13_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture14_arb ()
{
#ifdef GL_TEXTURE14_ARB
	return (int)GL_TEXTURE14_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture15_arb ()
{
#ifdef GL_TEXTURE15_ARB
	return (int)GL_TEXTURE15_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture16_arb ()
{
#ifdef GL_TEXTURE16_ARB
	return (int)GL_TEXTURE16_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture17_arb ()
{
#ifdef GL_TEXTURE17_ARB
	return (int)GL_TEXTURE17_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture18_arb ()
{
#ifdef GL_TEXTURE18_ARB
	return (int)GL_TEXTURE18_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture19_arb ()
{
#ifdef GL_TEXTURE19_ARB
	return (int)GL_TEXTURE19_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture20_arb ()
{
#ifdef GL_TEXTURE20_ARB
	return (int)GL_TEXTURE20_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture21_arb ()
{
#ifdef GL_TEXTURE21_ARB
	return (int)GL_TEXTURE21_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture22_arb ()
{
#ifdef GL_TEXTURE22_ARB
	return (int)GL_TEXTURE22_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture23_arb ()
{
#ifdef GL_TEXTURE23_ARB
	return (int)GL_TEXTURE23_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture24_arb ()
{
#ifdef GL_TEXTURE24_ARB
	return (int)GL_TEXTURE24_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture25_arb ()
{
#ifdef GL_TEXTURE25_ARB
	return (int)GL_TEXTURE25_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture26_arb ()
{
#ifdef GL_TEXTURE26_ARB
	return (int)GL_TEXTURE26_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture27_arb ()
{
#ifdef GL_TEXTURE27_ARB
	return (int)GL_TEXTURE27_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture28_arb ()
{
#ifdef GL_TEXTURE28_ARB
	return (int)GL_TEXTURE28_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture29_arb ()
{
#ifdef GL_TEXTURE29_ARB
	return (int)GL_TEXTURE29_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture30_arb ()
{
#ifdef GL_TEXTURE30_ARB
	return (int)GL_TEXTURE30_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture31_arb ()
{
#ifdef GL_TEXTURE31_ARB
	return (int)GL_TEXTURE31_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_active_texture_arb ()
{
#ifdef GL_ACTIVE_TEXTURE_ARB
	return (int)GL_ACTIVE_TEXTURE_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_client_active_texture_arb ()
{
#ifdef GL_CLIENT_ACTIVE_TEXTURE_ARB
	return (int)GL_CLIENT_ACTIVE_TEXTURE_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_texture_units_arb ()
{
#ifdef GL_MAX_TEXTURE_UNITS_ARB
	return (int)GL_MAX_TEXTURE_UNITS_ARB;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_abgr ()
{
#ifdef GL_EXT_abgr
	return (int)GL_EXT_abgr;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_abgr_ext ()
{
#ifdef GL_ABGR_EXT
	return (int)GL_ABGR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_blend_color ()
{
#ifdef GL_EXT_blend_color
	return (int)GL_EXT_blend_color;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_constant_color_ext ()
{
#ifdef GL_CONSTANT_COLOR_EXT
	return (int)GL_CONSTANT_COLOR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_constant_color_ext ()
{
#ifdef GL_ONE_MINUS_CONSTANT_COLOR_EXT
	return (int)GL_ONE_MINUS_CONSTANT_COLOR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_constant_alpha_ext ()
{
#ifdef GL_CONSTANT_ALPHA_EXT
	return (int)GL_CONSTANT_ALPHA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_one_minus_constant_alpha_ext ()
{
#ifdef GL_ONE_MINUS_CONSTANT_ALPHA_EXT
	return (int)GL_ONE_MINUS_CONSTANT_ALPHA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blend_color_ext ()
{
#ifdef GL_BLEND_COLOR_EXT
	return (int)GL_BLEND_COLOR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_polygon_offset ()
{
#ifdef GL_EXT_polygon_offset
	return (int)GL_EXT_polygon_offset;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_ext ()
{
#ifdef GL_POLYGON_OFFSET_EXT
	return (int)GL_POLYGON_OFFSET_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_factor_ext ()
{
#ifdef GL_POLYGON_OFFSET_FACTOR_EXT
	return (int)GL_POLYGON_OFFSET_FACTOR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_polygon_offset_bias_ext ()
{
#ifdef GL_POLYGON_OFFSET_BIAS_EXT
	return (int)GL_POLYGON_OFFSET_BIAS_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_texture3d ()
{
#ifdef GL_EXT_texture3D
	return (int)GL_EXT_texture3D;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_skip_images_ext ()
{
#ifdef GL_PACK_SKIP_IMAGES_EXT
	return (int)GL_PACK_SKIP_IMAGES_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_pack_image_height_ext ()
{
#ifdef GL_PACK_IMAGE_HEIGHT_EXT
	return (int)GL_PACK_IMAGE_HEIGHT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_skip_images_ext ()
{
#ifdef GL_UNPACK_SKIP_IMAGES_EXT
	return (int)GL_UNPACK_SKIP_IMAGES_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_image_height_ext ()
{
#ifdef GL_UNPACK_IMAGE_HEIGHT_EXT
	return (int)GL_UNPACK_IMAGE_HEIGHT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_3d_ext ()
{
#ifdef GL_TEXTURE_3D_EXT
	return (int)GL_TEXTURE_3D_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_proxy_texture_3d_ext ()
{
#ifdef GL_PROXY_TEXTURE_3D_EXT
	return (int)GL_PROXY_TEXTURE_3D_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_depth_ext ()
{
#ifdef GL_TEXTURE_DEPTH_EXT
	return (int)GL_TEXTURE_DEPTH_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_wrap_r_ext ()
{
#ifdef GL_TEXTURE_WRAP_R_EXT
	return (int)GL_TEXTURE_WRAP_R_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_3d_texture_size_ext ()
{
#ifdef GL_MAX_3D_TEXTURE_SIZE_EXT
	return (int)GL_MAX_3D_TEXTURE_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_3d_binding_ext ()
{
#ifdef GL_TEXTURE_3D_BINDING_EXT
	return (int)GL_TEXTURE_3D_BINDING_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_texture_object ()
{
#ifdef GL_EXT_texture_object
	return (int)GL_EXT_texture_object;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_priority_ext ()
{
#ifdef GL_TEXTURE_PRIORITY_EXT
	return (int)GL_TEXTURE_PRIORITY_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_resident_ext ()
{
#ifdef GL_TEXTURE_RESIDENT_EXT
	return (int)GL_TEXTURE_RESIDENT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_1d_binding_ext ()
{
#ifdef GL_TEXTURE_1D_BINDING_EXT
	return (int)GL_TEXTURE_1D_BINDING_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_2d_binding_ext ()
{
#ifdef GL_TEXTURE_2D_BINDING_EXT
	return (int)GL_TEXTURE_2D_BINDING_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_rescale_normal ()
{
#ifdef GL_EXT_rescale_normal
	return (int)GL_EXT_rescale_normal;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_rescale_normal_ext ()
{
#ifdef GL_RESCALE_NORMAL_EXT
	return (int)GL_RESCALE_NORMAL_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_vertex_array ()
{
#ifdef GL_EXT_vertex_array
	return (int)GL_EXT_vertex_array;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_ext ()
{
#ifdef GL_VERTEX_ARRAY_EXT
	return (int)GL_VERTEX_ARRAY_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_ext ()
{
#ifdef GL_NORMAL_ARRAY_EXT
	return (int)GL_NORMAL_ARRAY_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_ext ()
{
#ifdef GL_COLOR_ARRAY_EXT
	return (int)GL_COLOR_ARRAY_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_ext ()
{
#ifdef GL_INDEX_ARRAY_EXT
	return (int)GL_INDEX_ARRAY_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_ext ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_EXT
	return (int)GL_TEXTURE_COORD_ARRAY_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag_array_ext ()
{
#ifdef GL_EDGE_FLAG_ARRAY_EXT
	return (int)GL_EDGE_FLAG_ARRAY_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_size_ext ()
{
#ifdef GL_VERTEX_ARRAY_SIZE_EXT
	return (int)GL_VERTEX_ARRAY_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_type_ext ()
{
#ifdef GL_VERTEX_ARRAY_TYPE_EXT
	return (int)GL_VERTEX_ARRAY_TYPE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_stride_ext ()
{
#ifdef GL_VERTEX_ARRAY_STRIDE_EXT
	return (int)GL_VERTEX_ARRAY_STRIDE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_count_ext ()
{
#ifdef GL_VERTEX_ARRAY_COUNT_EXT
	return (int)GL_VERTEX_ARRAY_COUNT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_type_ext ()
{
#ifdef GL_NORMAL_ARRAY_TYPE_EXT
	return (int)GL_NORMAL_ARRAY_TYPE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_stride_ext ()
{
#ifdef GL_NORMAL_ARRAY_STRIDE_EXT
	return (int)GL_NORMAL_ARRAY_STRIDE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_count_ext ()
{
#ifdef GL_NORMAL_ARRAY_COUNT_EXT
	return (int)GL_NORMAL_ARRAY_COUNT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_size_ext ()
{
#ifdef GL_COLOR_ARRAY_SIZE_EXT
	return (int)GL_COLOR_ARRAY_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_type_ext ()
{
#ifdef GL_COLOR_ARRAY_TYPE_EXT
	return (int)GL_COLOR_ARRAY_TYPE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_stride_ext ()
{
#ifdef GL_COLOR_ARRAY_STRIDE_EXT
	return (int)GL_COLOR_ARRAY_STRIDE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_count_ext ()
{
#ifdef GL_COLOR_ARRAY_COUNT_EXT
	return (int)GL_COLOR_ARRAY_COUNT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_type_ext ()
{
#ifdef GL_INDEX_ARRAY_TYPE_EXT
	return (int)GL_INDEX_ARRAY_TYPE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_stride_ext ()
{
#ifdef GL_INDEX_ARRAY_STRIDE_EXT
	return (int)GL_INDEX_ARRAY_STRIDE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_count_ext ()
{
#ifdef GL_INDEX_ARRAY_COUNT_EXT
	return (int)GL_INDEX_ARRAY_COUNT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_size_ext ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_SIZE_EXT
	return (int)GL_TEXTURE_COORD_ARRAY_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_type_ext ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_TYPE_EXT
	return (int)GL_TEXTURE_COORD_ARRAY_TYPE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_stride_ext ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_STRIDE_EXT
	return (int)GL_TEXTURE_COORD_ARRAY_STRIDE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_count_ext ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_COUNT_EXT
	return (int)GL_TEXTURE_COORD_ARRAY_COUNT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag_array_stride_ext ()
{
#ifdef GL_EDGE_FLAG_ARRAY_STRIDE_EXT
	return (int)GL_EDGE_FLAG_ARRAY_STRIDE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag_array_count_ext ()
{
#ifdef GL_EDGE_FLAG_ARRAY_COUNT_EXT
	return (int)GL_EDGE_FLAG_ARRAY_COUNT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_vertex_array_pointer_ext ()
{
#ifdef GL_VERTEX_ARRAY_POINTER_EXT
	return (int)GL_VERTEX_ARRAY_POINTER_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_array_pointer_ext ()
{
#ifdef GL_NORMAL_ARRAY_POINTER_EXT
	return (int)GL_NORMAL_ARRAY_POINTER_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_array_pointer_ext ()
{
#ifdef GL_COLOR_ARRAY_POINTER_EXT
	return (int)GL_COLOR_ARRAY_POINTER_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_index_array_pointer_ext ()
{
#ifdef GL_INDEX_ARRAY_POINTER_EXT
	return (int)GL_INDEX_ARRAY_POINTER_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_coord_array_pointer_ext ()
{
#ifdef GL_TEXTURE_COORD_ARRAY_POINTER_EXT
	return (int)GL_TEXTURE_COORD_ARRAY_POINTER_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_edge_flag_array_pointer_ext ()
{
#ifdef GL_EDGE_FLAG_ARRAY_POINTER_EXT
	return (int)GL_EDGE_FLAG_ARRAY_POINTER_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_sgis_texture_edge_clamp ()
{
#ifdef GL_SGIS_texture_edge_clamp
	return (int)GL_SGIS_texture_edge_clamp;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clamp_to_edge_sgis ()
{
#ifdef GL_CLAMP_TO_EDGE_SGIS
	return (int)GL_CLAMP_TO_EDGE_SGIS;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_blend_minmax ()
{
#ifdef GL_EXT_blend_minmax
	return (int)GL_EXT_blend_minmax;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_func_add_ext ()
{
#ifdef GL_FUNC_ADD_EXT
	return (int)GL_FUNC_ADD_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_min_ext ()
{
#ifdef GL_MIN_EXT
	return (int)GL_MIN_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_max_ext ()
{
#ifdef GL_MAX_EXT
	return (int)GL_MAX_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_blend_equation_ext ()
{
#ifdef GL_BLEND_EQUATION_EXT
	return (int)GL_BLEND_EQUATION_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_blend_subtract ()
{
#ifdef GL_EXT_blend_subtract
	return (int)GL_EXT_blend_subtract;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_func_subtract_ext ()
{
#ifdef GL_FUNC_SUBTRACT_EXT
	return (int)GL_FUNC_SUBTRACT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_func_reverse_subtract_ext ()
{
#ifdef GL_FUNC_REVERSE_SUBTRACT_EXT
	return (int)GL_FUNC_REVERSE_SUBTRACT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_blend_logic_op ()
{
#ifdef GL_EXT_blend_logic_op
	return (int)GL_EXT_blend_logic_op;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_point_parameters ()
{
#ifdef GL_EXT_point_parameters
	return (int)GL_EXT_point_parameters;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_size_min_ext ()
{
#ifdef GL_POINT_SIZE_MIN_EXT
	return (int)GL_POINT_SIZE_MIN_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_size_max_ext ()
{
#ifdef GL_POINT_SIZE_MAX_EXT
	return (int)GL_POINT_SIZE_MAX_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_point_fade_threshold_size_ext ()
{
#ifdef GL_POINT_FADE_THRESHOLD_SIZE_EXT
	return (int)GL_POINT_FADE_THRESHOLD_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_distance_attenuation_ext ()
{
#ifdef GL_DISTANCE_ATTENUATION_EXT
	return (int)GL_DISTANCE_ATTENUATION_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_paletted_texture ()
{
#ifdef GL_EXT_paletted_texture
	return (int)GL_EXT_paletted_texture;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_table_too_large_ext ()
{
#ifdef GL_TABLE_TOO_LARGE_EXT
	return (int)GL_TABLE_TOO_LARGE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_format_ext ()
{
#ifdef GL_COLOR_TABLE_FORMAT_EXT
	return (int)GL_COLOR_TABLE_FORMAT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_width_ext ()
{
#ifdef GL_COLOR_TABLE_WIDTH_EXT
	return (int)GL_COLOR_TABLE_WIDTH_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_red_size_ext ()
{
#ifdef GL_COLOR_TABLE_RED_SIZE_EXT
	return (int)GL_COLOR_TABLE_RED_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_green_size_ext ()
{
#ifdef GL_COLOR_TABLE_GREEN_SIZE_EXT
	return (int)GL_COLOR_TABLE_GREEN_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_blue_size_ext ()
{
#ifdef GL_COLOR_TABLE_BLUE_SIZE_EXT
	return (int)GL_COLOR_TABLE_BLUE_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_alpha_size_ext ()
{
#ifdef GL_COLOR_TABLE_ALPHA_SIZE_EXT
	return (int)GL_COLOR_TABLE_ALPHA_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_luminance_size_ext ()
{
#ifdef GL_COLOR_TABLE_LUMINANCE_SIZE_EXT
	return (int)GL_COLOR_TABLE_LUMINANCE_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_table_intensity_size_ext ()
{
#ifdef GL_COLOR_TABLE_INTENSITY_SIZE_EXT
	return (int)GL_COLOR_TABLE_INTENSITY_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_texture_index_size_ext ()
{
#ifdef GL_TEXTURE_INDEX_SIZE_EXT
	return (int)GL_TEXTURE_INDEX_SIZE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_index1_ext ()
{
#ifdef GL_COLOR_INDEX1_EXT
	return (int)GL_COLOR_INDEX1_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_index2_ext ()
{
#ifdef GL_COLOR_INDEX2_EXT
	return (int)GL_COLOR_INDEX2_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_index4_ext ()
{
#ifdef GL_COLOR_INDEX4_EXT
	return (int)GL_COLOR_INDEX4_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_index8_ext ()
{
#ifdef GL_COLOR_INDEX8_EXT
	return (int)GL_COLOR_INDEX8_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_index12_ext ()
{
#ifdef GL_COLOR_INDEX12_EXT
	return (int)GL_COLOR_INDEX12_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_color_index16_ext ()
{
#ifdef GL_COLOR_INDEX16_EXT
	return (int)GL_COLOR_INDEX16_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_clip_volume_hint ()
{
#ifdef GL_EXT_clip_volume_hint
	return (int)GL_EXT_clip_volume_hint;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_clip_volume_clipping_hint_ext ()
{
#ifdef GL_CLIP_VOLUME_CLIPPING_HINT_EXT
	return (int)GL_CLIP_VOLUME_CLIPPING_HINT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_compiled_vertex_array ()
{
#ifdef GL_EXT_compiled_vertex_array
	return (int)GL_EXT_compiled_vertex_array;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_array_element_lock_first_ext ()
{
#ifdef GL_ARRAY_ELEMENT_LOCK_FIRST_EXT
	return (int)GL_ARRAY_ELEMENT_LOCK_FIRST_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_array_element_lock_count_ext ()
{
#ifdef GL_ARRAY_ELEMENT_LOCK_COUNT_EXT
	return (int)GL_ARRAY_ELEMENT_LOCK_COUNT_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_hp_occlusion_test ()
{
#ifdef GL_HP_occlusion_test
	return (int)GL_HP_occlusion_test;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_occlusion_test_hp ()
{
#ifdef GL_OCCLUSION_TEST_HP
	return (int)GL_OCCLUSION_TEST_HP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_occlusion_test_result_hp ()
{
#ifdef GL_OCCLUSION_TEST_RESULT_HP
	return (int)GL_OCCLUSION_TEST_RESULT_HP;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_shared_texture_palette ()
{
#ifdef GL_EXT_shared_texture_palette
	return (int)GL_EXT_shared_texture_palette;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_shared_texture_palette_ext ()
{
#ifdef GL_SHARED_TEXTURE_PALETTE_EXT
	return (int)GL_SHARED_TEXTURE_PALETTE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_stencil_wrap ()
{
#ifdef GL_EXT_stencil_wrap
	return (int)GL_EXT_stencil_wrap;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_incr_wrap_ext ()
{
#ifdef GL_INCR_WRAP_EXT
	return (int)GL_INCR_WRAP_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_decr_wrap_ext ()
{
#ifdef GL_DECR_WRAP_EXT
	return (int)GL_DECR_WRAP_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_nv_texgen_reflection ()
{
#ifdef GL_NV_texgen_reflection
	return (int)GL_NV_texgen_reflection;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_normal_map_nv ()
{
#ifdef GL_NORMAL_MAP_NV
	return (int)GL_NORMAL_MAP_NV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_reflection_map_nv ()
{
#ifdef GL_REFLECTION_MAP_NV
	return (int)GL_REFLECTION_MAP_NV;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_texture_env_add ()
{
#ifdef GL_EXT_texture_env_add
	return (int)GL_EXT_texture_env_add;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ext_texture_env_dot3 ()
{
#ifdef GL_EXT_texture_env_dot3
	return (int)GL_EXT_texture_env_dot3;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dot3_rgb_ext ()
{
#ifdef GL_DOT3_RGB_EXT
	return (int)GL_DOT3_RGB_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_dot3_rgba_ext ()
{
#ifdef GL_DOT3_RGBA_EXT
	return (int)GL_DOT3_RGBA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_apple_client_storage ()
{
#ifdef GL_APPLE_client_storage
	return (int)GL_APPLE_client_storage;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unpack_client_storage_apple ()
{
#ifdef GL_UNPACK_CLIENT_STORAGE_APPLE
	return (int)GL_UNPACK_CLIENT_STORAGE_APPLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_apple_ycbcr_422 ()
{
#ifdef GL_APPLE_ycbcr_422
	return (int)GL_APPLE_ycbcr_422;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_ycbcr_422_apple ()
{
#ifdef GL_YCBCR_422_APPLE
	return (int)GL_YCBCR_422_APPLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_8_8_apple ()
{
#ifdef GL_UNSIGNED_SHORT_8_8_APPLE
	return (int)GL_UNSIGNED_SHORT_8_8_APPLE;
#else
	return -1;
#endif
}

int ewg_get_constant_gl_unsigned_short_8_8_rev_apple ()
{
#ifdef GL_UNSIGNED_SHORT_8_8_REV_APPLE
	return (int)GL_UNSIGNED_SHORT_8_8_REV_APPLE;
#else
	return -1;
#endif
}

