#include "spu_test.spu.h"

int main(void)
{		
	TEST_2_vl_6(spu_convtf, vec_int4_t, int32_t, vec_float4_t)
	TEST_2_vl_6(spu_convtf, vec_uint4_t, int32_t, vec_float4_t)
	TEST_2_vl(spu_add, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2_vl(spu_add, vec_short8_t, int16_t, vec_short8_t)
	TEST_2_vl(spu_add, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2_vl(spu_add, vec_int4_t, int32_t, vec_int4_t)
	TEST_2_vl(spu_mulo, vec_short8_t, int16_t, vec_int4_t)
	TEST_2_vl(spu_mulo, vec_ushort8_t, uint16_t, vec_uint4_t)
	TEST_2_lv(spu_sub, uint16_t, vec_ushort8_t, vec_ushort8_t)
	TEST_2_lv(spu_sub, int16_t, vec_short8_t, vec_short8_t)
	TEST_2_lv(spu_sub, uint32_t, vec_uint4_t, vec_uint4_t)
	TEST_2_lv(spu_sub, int32_t, vec_int4_t, vec_int4_t)
	TEST_2_vl(spu_cmpeq, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2_vl(spu_cmpeq, vec_char16_t, int8_t, vec_uchar16_t)
	TEST_2_vl(spu_cmpeq, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2_vl(spu_cmpeq, vec_short8_t, int16_t, vec_ushort8_t)
	TEST_2_vl(spu_cmpeq, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2_vl(spu_cmpeq, vec_int4_t, int32_t, vec_uint4_t)
	TEST_2_vl(spu_cmpgt, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2_vl(spu_cmpgt, vec_char16_t, int8_t, vec_uchar16_t)
	TEST_2_vl(spu_cmpgt, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2_vl(spu_cmpgt, vec_short8_t, int16_t, vec_ushort8_t)
	TEST_2_vl(spu_cmpgt, vec_int4_t, int32_t, vec_uint4_t)
	TEST_2_vl(spu_cmpgt, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_1_l(spu_maskb, uint16_t, vec_uchar16_t)
	TEST_1_l(spu_maskb, int16_t, vec_uchar16_t)
	TEST_1_l(spu_maskb, uint32_t, vec_uchar16_t)
	TEST_1_l(spu_maskb, int32_t, vec_uchar16_t)
	TEST_1_l(spu_maskh, uint8_t, vec_ushort8_t)
	TEST_1_l(spu_maskh, int8_t, vec_ushort8_t)
	TEST_1_l(spu_maskh, char, vec_ushort8_t)
	TEST_1_l(spu_maskh, uint16_t, vec_ushort8_t)
	TEST_1_l(spu_maskh, int16_t, vec_ushort8_t)
	TEST_1_l(spu_maskh, uint32_t, vec_ushort8_t)
	TEST_1_l(spu_maskh, int32_t, vec_ushort8_t)
	TEST_1_l(spu_maskw, uint8_t, vec_uint4_t)
	TEST_1_l(spu_maskw, int8_t, vec_uint4_t)
	TEST_1_l(spu_maskw, char, vec_uint4_t)
	TEST_1_l(spu_maskw, uint16_t, vec_uint4_t)
	TEST_1_l(spu_maskw, int16_t, vec_uint4_t)
	TEST_1_l(spu_maskw, uint32_t, vec_uint4_t)
	TEST_1_l(spu_maskw, int32_t, vec_uint4_t)
	TEST_2_vl(spu_and, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2_vl(spu_and, vec_char16_t, int8_t, vec_char16_t)
	TEST_2_vl(spu_and, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2_vl(spu_and, vec_short8_t, int16_t, vec_short8_t)
	TEST_2_vl(spu_and, vec_uint4_t, uint32_t, vec_uint4_t)
	TEST_2_vl(spu_and, vec_int4_t, int32_t, vec_int4_t)
	TEST_2_vl(spu_or, vec_uchar16_t, uint8_t, vec_uchar16_t)
	TEST_2_vl(spu_or, vec_char16_t, int8_t, vec_char16_t)
	TEST_2_vl(spu_or, vec_ushort8_t, uint16_t, vec_ushort8_t)
	TEST_2_vl(spu_or, vec_short8_t, int16_t, vec_short8_t)
	
	return 0;
}
