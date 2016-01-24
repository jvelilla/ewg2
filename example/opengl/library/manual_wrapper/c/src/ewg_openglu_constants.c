#include<ewg_opengl.h>

int ewg_get_constant_glu_ext_object_space_tess ()
{
#ifdef GLU_EXT_object_space_tess
	return (int)GLU_EXT_object_space_tess;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_ext_nurbs_tessellator ()
{
#ifdef GLU_EXT_nurbs_tessellator
	return (int)GLU_EXT_nurbs_tessellator;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_false ()
{
#ifdef GLU_FALSE
	return (int)GLU_FALSE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_true ()
{
#ifdef GLU_TRUE
	return (int)GLU_TRUE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_version_1_1 ()
{
#ifdef GLU_VERSION_1_1
	return (int)GLU_VERSION_1_1;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_version_1_2 ()
{
#ifdef GLU_VERSION_1_2
	return (int)GLU_VERSION_1_2;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_version_1_3 ()
{
#ifdef GLU_VERSION_1_3
	return (int)GLU_VERSION_1_3;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_version ()
{
#ifdef GLU_VERSION
	return (int)GLU_VERSION;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_extensions ()
{
#ifdef GLU_EXTENSIONS
	return (int)GLU_EXTENSIONS;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_invalid_enum ()
{
#ifdef GLU_INVALID_ENUM
	return (int)GLU_INVALID_ENUM;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_invalid_value ()
{
#ifdef GLU_INVALID_VALUE
	return (int)GLU_INVALID_VALUE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_out_of_memory ()
{
#ifdef GLU_OUT_OF_MEMORY
	return (int)GLU_OUT_OF_MEMORY;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_invalid_operation ()
{
#ifdef GLU_INVALID_OPERATION
	return (int)GLU_INVALID_OPERATION;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_outline_polygon ()
{
#ifdef GLU_OUTLINE_POLYGON
	return (int)GLU_OUTLINE_POLYGON;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_outline_patch ()
{
#ifdef GLU_OUTLINE_PATCH
	return (int)GLU_OUTLINE_PATCH;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error ()
{
#ifdef GLU_NURBS_ERROR
	return (int)GLU_NURBS_ERROR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_error ()
{
#ifdef GLU_ERROR
	return (int)GLU_ERROR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_begin ()
{
#ifdef GLU_NURBS_BEGIN
	return (int)GLU_NURBS_BEGIN;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_begin_ext ()
{
#ifdef GLU_NURBS_BEGIN_EXT
	return (int)GLU_NURBS_BEGIN_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_vertex ()
{
#ifdef GLU_NURBS_VERTEX
	return (int)GLU_NURBS_VERTEX;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_vertex_ext ()
{
#ifdef GLU_NURBS_VERTEX_EXT
	return (int)GLU_NURBS_VERTEX_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_normal ()
{
#ifdef GLU_NURBS_NORMAL
	return (int)GLU_NURBS_NORMAL;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_normal_ext ()
{
#ifdef GLU_NURBS_NORMAL_EXT
	return (int)GLU_NURBS_NORMAL_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_color ()
{
#ifdef GLU_NURBS_COLOR
	return (int)GLU_NURBS_COLOR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_color_ext ()
{
#ifdef GLU_NURBS_COLOR_EXT
	return (int)GLU_NURBS_COLOR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_texture_coord ()
{
#ifdef GLU_NURBS_TEXTURE_COORD
	return (int)GLU_NURBS_TEXTURE_COORD;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_tex_coord_ext ()
{
#ifdef GLU_NURBS_TEX_COORD_EXT
	return (int)GLU_NURBS_TEX_COORD_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_end ()
{
#ifdef GLU_NURBS_END
	return (int)GLU_NURBS_END;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_end_ext ()
{
#ifdef GLU_NURBS_END_EXT
	return (int)GLU_NURBS_END_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_begin_data ()
{
#ifdef GLU_NURBS_BEGIN_DATA
	return (int)GLU_NURBS_BEGIN_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_begin_data_ext ()
{
#ifdef GLU_NURBS_BEGIN_DATA_EXT
	return (int)GLU_NURBS_BEGIN_DATA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_vertex_data ()
{
#ifdef GLU_NURBS_VERTEX_DATA
	return (int)GLU_NURBS_VERTEX_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_vertex_data_ext ()
{
#ifdef GLU_NURBS_VERTEX_DATA_EXT
	return (int)GLU_NURBS_VERTEX_DATA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_normal_data ()
{
#ifdef GLU_NURBS_NORMAL_DATA
	return (int)GLU_NURBS_NORMAL_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_normal_data_ext ()
{
#ifdef GLU_NURBS_NORMAL_DATA_EXT
	return (int)GLU_NURBS_NORMAL_DATA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_color_data ()
{
#ifdef GLU_NURBS_COLOR_DATA
	return (int)GLU_NURBS_COLOR_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_color_data_ext ()
{
#ifdef GLU_NURBS_COLOR_DATA_EXT
	return (int)GLU_NURBS_COLOR_DATA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_texture_coord_data ()
{
#ifdef GLU_NURBS_TEXTURE_COORD_DATA
	return (int)GLU_NURBS_TEXTURE_COORD_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_tex_coord_data_ext ()
{
#ifdef GLU_NURBS_TEX_COORD_DATA_EXT
	return (int)GLU_NURBS_TEX_COORD_DATA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_end_data ()
{
#ifdef GLU_NURBS_END_DATA
	return (int)GLU_NURBS_END_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_end_data_ext ()
{
#ifdef GLU_NURBS_END_DATA_EXT
	return (int)GLU_NURBS_END_DATA_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error1 ()
{
#ifdef GLU_NURBS_ERROR1
	return (int)GLU_NURBS_ERROR1;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error2 ()
{
#ifdef GLU_NURBS_ERROR2
	return (int)GLU_NURBS_ERROR2;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error3 ()
{
#ifdef GLU_NURBS_ERROR3
	return (int)GLU_NURBS_ERROR3;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error4 ()
{
#ifdef GLU_NURBS_ERROR4
	return (int)GLU_NURBS_ERROR4;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error5 ()
{
#ifdef GLU_NURBS_ERROR5
	return (int)GLU_NURBS_ERROR5;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error6 ()
{
#ifdef GLU_NURBS_ERROR6
	return (int)GLU_NURBS_ERROR6;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error7 ()
{
#ifdef GLU_NURBS_ERROR7
	return (int)GLU_NURBS_ERROR7;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error8 ()
{
#ifdef GLU_NURBS_ERROR8
	return (int)GLU_NURBS_ERROR8;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error9 ()
{
#ifdef GLU_NURBS_ERROR9
	return (int)GLU_NURBS_ERROR9;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error10 ()
{
#ifdef GLU_NURBS_ERROR10
	return (int)GLU_NURBS_ERROR10;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error11 ()
{
#ifdef GLU_NURBS_ERROR11
	return (int)GLU_NURBS_ERROR11;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error12 ()
{
#ifdef GLU_NURBS_ERROR12
	return (int)GLU_NURBS_ERROR12;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error13 ()
{
#ifdef GLU_NURBS_ERROR13
	return (int)GLU_NURBS_ERROR13;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error14 ()
{
#ifdef GLU_NURBS_ERROR14
	return (int)GLU_NURBS_ERROR14;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error15 ()
{
#ifdef GLU_NURBS_ERROR15
	return (int)GLU_NURBS_ERROR15;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error16 ()
{
#ifdef GLU_NURBS_ERROR16
	return (int)GLU_NURBS_ERROR16;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error17 ()
{
#ifdef GLU_NURBS_ERROR17
	return (int)GLU_NURBS_ERROR17;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error18 ()
{
#ifdef GLU_NURBS_ERROR18
	return (int)GLU_NURBS_ERROR18;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error19 ()
{
#ifdef GLU_NURBS_ERROR19
	return (int)GLU_NURBS_ERROR19;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error20 ()
{
#ifdef GLU_NURBS_ERROR20
	return (int)GLU_NURBS_ERROR20;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error21 ()
{
#ifdef GLU_NURBS_ERROR21
	return (int)GLU_NURBS_ERROR21;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error22 ()
{
#ifdef GLU_NURBS_ERROR22
	return (int)GLU_NURBS_ERROR22;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error23 ()
{
#ifdef GLU_NURBS_ERROR23
	return (int)GLU_NURBS_ERROR23;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error24 ()
{
#ifdef GLU_NURBS_ERROR24
	return (int)GLU_NURBS_ERROR24;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error25 ()
{
#ifdef GLU_NURBS_ERROR25
	return (int)GLU_NURBS_ERROR25;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error26 ()
{
#ifdef GLU_NURBS_ERROR26
	return (int)GLU_NURBS_ERROR26;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error27 ()
{
#ifdef GLU_NURBS_ERROR27
	return (int)GLU_NURBS_ERROR27;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error28 ()
{
#ifdef GLU_NURBS_ERROR28
	return (int)GLU_NURBS_ERROR28;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error29 ()
{
#ifdef GLU_NURBS_ERROR29
	return (int)GLU_NURBS_ERROR29;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error30 ()
{
#ifdef GLU_NURBS_ERROR30
	return (int)GLU_NURBS_ERROR30;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error31 ()
{
#ifdef GLU_NURBS_ERROR31
	return (int)GLU_NURBS_ERROR31;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error32 ()
{
#ifdef GLU_NURBS_ERROR32
	return (int)GLU_NURBS_ERROR32;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error33 ()
{
#ifdef GLU_NURBS_ERROR33
	return (int)GLU_NURBS_ERROR33;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error34 ()
{
#ifdef GLU_NURBS_ERROR34
	return (int)GLU_NURBS_ERROR34;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error35 ()
{
#ifdef GLU_NURBS_ERROR35
	return (int)GLU_NURBS_ERROR35;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error36 ()
{
#ifdef GLU_NURBS_ERROR36
	return (int)GLU_NURBS_ERROR36;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_error37 ()
{
#ifdef GLU_NURBS_ERROR37
	return (int)GLU_NURBS_ERROR37;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_auto_load_matrix ()
{
#ifdef GLU_AUTO_LOAD_MATRIX
	return (int)GLU_AUTO_LOAD_MATRIX;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_culling ()
{
#ifdef GLU_CULLING
	return (int)GLU_CULLING;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_sampling_tolerance ()
{
#ifdef GLU_SAMPLING_TOLERANCE
	return (int)GLU_SAMPLING_TOLERANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_display_mode ()
{
#ifdef GLU_DISPLAY_MODE
	return (int)GLU_DISPLAY_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_parametric_tolerance ()
{
#ifdef GLU_PARAMETRIC_TOLERANCE
	return (int)GLU_PARAMETRIC_TOLERANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_sampling_method ()
{
#ifdef GLU_SAMPLING_METHOD
	return (int)GLU_SAMPLING_METHOD;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_u_step ()
{
#ifdef GLU_U_STEP
	return (int)GLU_U_STEP;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_v_step ()
{
#ifdef GLU_V_STEP
	return (int)GLU_V_STEP;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_mode ()
{
#ifdef GLU_NURBS_MODE
	return (int)GLU_NURBS_MODE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_mode_ext ()
{
#ifdef GLU_NURBS_MODE_EXT
	return (int)GLU_NURBS_MODE_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_tessellator ()
{
#ifdef GLU_NURBS_TESSELLATOR
	return (int)GLU_NURBS_TESSELLATOR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_tessellator_ext ()
{
#ifdef GLU_NURBS_TESSELLATOR_EXT
	return (int)GLU_NURBS_TESSELLATOR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_renderer ()
{
#ifdef GLU_NURBS_RENDERER
	return (int)GLU_NURBS_RENDERER;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_nurbs_renderer_ext ()
{
#ifdef GLU_NURBS_RENDERER_EXT
	return (int)GLU_NURBS_RENDERER_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_object_parametric_error ()
{
#ifdef GLU_OBJECT_PARAMETRIC_ERROR
	return (int)GLU_OBJECT_PARAMETRIC_ERROR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_object_parametric_error_ext ()
{
#ifdef GLU_OBJECT_PARAMETRIC_ERROR_EXT
	return (int)GLU_OBJECT_PARAMETRIC_ERROR_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_object_path_length ()
{
#ifdef GLU_OBJECT_PATH_LENGTH
	return (int)GLU_OBJECT_PATH_LENGTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_object_path_length_ext ()
{
#ifdef GLU_OBJECT_PATH_LENGTH_EXT
	return (int)GLU_OBJECT_PATH_LENGTH_EXT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_path_length ()
{
#ifdef GLU_PATH_LENGTH
	return (int)GLU_PATH_LENGTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_parametric_error ()
{
#ifdef GLU_PARAMETRIC_ERROR
	return (int)GLU_PARAMETRIC_ERROR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_domain_distance ()
{
#ifdef GLU_DOMAIN_DISTANCE
	return (int)GLU_DOMAIN_DISTANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_map1_trim_2 ()
{
#ifdef GLU_MAP1_TRIM_2
	return (int)GLU_MAP1_TRIM_2;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_map1_trim_3 ()
{
#ifdef GLU_MAP1_TRIM_3
	return (int)GLU_MAP1_TRIM_3;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_point ()
{
#ifdef GLU_POINT
	return (int)GLU_POINT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_line ()
{
#ifdef GLU_LINE
	return (int)GLU_LINE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_fill ()
{
#ifdef GLU_FILL
	return (int)GLU_FILL;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_silhouette ()
{
#ifdef GLU_SILHOUETTE
	return (int)GLU_SILHOUETTE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_smooth ()
{
#ifdef GLU_SMOOTH
	return (int)GLU_SMOOTH;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_flat ()
{
#ifdef GLU_FLAT
	return (int)GLU_FLAT;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_none ()
{
#ifdef GLU_NONE
	return (int)GLU_NONE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_outside ()
{
#ifdef GLU_OUTSIDE
	return (int)GLU_OUTSIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_inside ()
{
#ifdef GLU_INSIDE
	return (int)GLU_INSIDE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_begin ()
{
#ifdef GLU_TESS_BEGIN
	return (int)GLU_TESS_BEGIN;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_begin ()
{
#ifdef GLU_BEGIN
	return (int)GLU_BEGIN;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_vertex ()
{
#ifdef GLU_TESS_VERTEX
	return (int)GLU_TESS_VERTEX;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_vertex ()
{
#ifdef GLU_VERTEX
	return (int)GLU_VERTEX;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_end ()
{
#ifdef GLU_TESS_END
	return (int)GLU_TESS_END;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_end ()
{
#ifdef GLU_END
	return (int)GLU_END;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error ()
{
#ifdef GLU_TESS_ERROR
	return (int)GLU_TESS_ERROR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_edge_flag ()
{
#ifdef GLU_TESS_EDGE_FLAG
	return (int)GLU_TESS_EDGE_FLAG;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_edge_flag ()
{
#ifdef GLU_EDGE_FLAG
	return (int)GLU_EDGE_FLAG;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_combine ()
{
#ifdef GLU_TESS_COMBINE
	return (int)GLU_TESS_COMBINE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_begin_data ()
{
#ifdef GLU_TESS_BEGIN_DATA
	return (int)GLU_TESS_BEGIN_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_vertex_data ()
{
#ifdef GLU_TESS_VERTEX_DATA
	return (int)GLU_TESS_VERTEX_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_end_data ()
{
#ifdef GLU_TESS_END_DATA
	return (int)GLU_TESS_END_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error_data ()
{
#ifdef GLU_TESS_ERROR_DATA
	return (int)GLU_TESS_ERROR_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_edge_flag_data ()
{
#ifdef GLU_TESS_EDGE_FLAG_DATA
	return (int)GLU_TESS_EDGE_FLAG_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_combine_data ()
{
#ifdef GLU_TESS_COMBINE_DATA
	return (int)GLU_TESS_COMBINE_DATA;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_cw ()
{
#ifdef GLU_CW
	return (int)GLU_CW;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_ccw ()
{
#ifdef GLU_CCW
	return (int)GLU_CCW;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_interior ()
{
#ifdef GLU_INTERIOR
	return (int)GLU_INTERIOR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_exterior ()
{
#ifdef GLU_EXTERIOR
	return (int)GLU_EXTERIOR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_unknown ()
{
#ifdef GLU_UNKNOWN
	return (int)GLU_UNKNOWN;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_winding_rule ()
{
#ifdef GLU_TESS_WINDING_RULE
	return (int)GLU_TESS_WINDING_RULE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_boundary_only ()
{
#ifdef GLU_TESS_BOUNDARY_ONLY
	return (int)GLU_TESS_BOUNDARY_ONLY;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_tolerance ()
{
#ifdef GLU_TESS_TOLERANCE
	return (int)GLU_TESS_TOLERANCE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error1 ()
{
#ifdef GLU_TESS_ERROR1
	return (int)GLU_TESS_ERROR1;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error2 ()
{
#ifdef GLU_TESS_ERROR2
	return (int)GLU_TESS_ERROR2;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error3 ()
{
#ifdef GLU_TESS_ERROR3
	return (int)GLU_TESS_ERROR3;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error4 ()
{
#ifdef GLU_TESS_ERROR4
	return (int)GLU_TESS_ERROR4;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error5 ()
{
#ifdef GLU_TESS_ERROR5
	return (int)GLU_TESS_ERROR5;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error6 ()
{
#ifdef GLU_TESS_ERROR6
	return (int)GLU_TESS_ERROR6;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error7 ()
{
#ifdef GLU_TESS_ERROR7
	return (int)GLU_TESS_ERROR7;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_error8 ()
{
#ifdef GLU_TESS_ERROR8
	return (int)GLU_TESS_ERROR8;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_missing_begin_polygon ()
{
#ifdef GLU_TESS_MISSING_BEGIN_POLYGON
	return (int)GLU_TESS_MISSING_BEGIN_POLYGON;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_missing_begin_contour ()
{
#ifdef GLU_TESS_MISSING_BEGIN_CONTOUR
	return (int)GLU_TESS_MISSING_BEGIN_CONTOUR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_missing_end_polygon ()
{
#ifdef GLU_TESS_MISSING_END_POLYGON
	return (int)GLU_TESS_MISSING_END_POLYGON;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_missing_end_contour ()
{
#ifdef GLU_TESS_MISSING_END_CONTOUR
	return (int)GLU_TESS_MISSING_END_CONTOUR;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_coord_too_large ()
{
#ifdef GLU_TESS_COORD_TOO_LARGE
	return (int)GLU_TESS_COORD_TOO_LARGE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_need_combine_callback ()
{
#ifdef GLU_TESS_NEED_COMBINE_CALLBACK
	return (int)GLU_TESS_NEED_COMBINE_CALLBACK;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_winding_odd ()
{
#ifdef GLU_TESS_WINDING_ODD
	return (int)GLU_TESS_WINDING_ODD;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_winding_nonzero ()
{
#ifdef GLU_TESS_WINDING_NONZERO
	return (int)GLU_TESS_WINDING_NONZERO;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_winding_positive ()
{
#ifdef GLU_TESS_WINDING_POSITIVE
	return (int)GLU_TESS_WINDING_POSITIVE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_winding_negative ()
{
#ifdef GLU_TESS_WINDING_NEGATIVE
	return (int)GLU_TESS_WINDING_NEGATIVE;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_winding_abs_geq_two ()
{
#ifdef GLU_TESS_WINDING_ABS_GEQ_TWO
	return (int)GLU_TESS_WINDING_ABS_GEQ_TWO;
#else
	return -1;
#endif
}

int ewg_get_constant_glu_tess_max_coord ()
{
#ifdef GLU_TESS_MAX_COORD
	return (int)GLU_TESS_MAX_COORD;
#else
	return -1;
#endif
}

