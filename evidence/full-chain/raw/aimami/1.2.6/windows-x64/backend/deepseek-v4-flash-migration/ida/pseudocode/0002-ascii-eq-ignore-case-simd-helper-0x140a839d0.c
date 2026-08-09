// sub_140A839D0 @ win EA 0x140a839d0
// 通用 ASCII 大小写不敏感字符串相等比较 helper（SIMD，16 字节分块 + 尾部处理），非 deepseek 专属。
// xrefs_to 确认该函数至少被 4 处不同调用方复用：
//   sub_140B414C0 (0x140b414c0), migrate_legacy_deepseek_v4_flash_official_protocol (0x140b5f590, 3 处),
//   sub_140B66350 (0x140b66350), sub_14127D460 (0x14127d460, 3 处)
// 因此本轮未重命名为 deepseek 专属名称，仅加注释说明其在本迁移函数中的具体用途
// （比较 model_id 末段是否等于 "deepseek-v4-flash"，等价于 mac 版本手写的逐字节 |32 大小写折叠比较）。
//
// 算法：用 xmmword_1417EB690 做偏移偏置，xmmword_1417EB6A0 做范围 clamp（min_epu8），
// xmmword_1417EB6B0 做掩码 OR，实现大小写不敏感的 SIMD 字节比较（经典 toupper/tolower 无分支技巧），
// 16 字节整块比较 + 尾部不足 16 字节时用重叠窗口再比较一次。

char __fastcall sub_140A839D0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r10
  __m128i si128; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  char result; // al
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __m128i v19; // xmm3
  __m128i v20; // xmm1

  v4 = a4 >> 4; /*0x140a839e3*/
  if ( a2 >> 4 < a4 >> 4 ) /*0x140a839ea*/
    v4 = a2 >> 4; /*0x140a839ea*/
  v5 = 16 * v4; /*0x140a839ee*/
  v6 = 0; /*0x140a839f2*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1417EB690); /*0x140a839f5*/
  v8 = _mm_load_si128((const __m128i *)&xmmword_1417EB6A0); /*0x140a839fd*/
  v9 = _mm_load_si128((const __m128i *)&xmmword_1417EB6B0); /*0x140a83a05*/
  do /*0x140a83a6d*/
  {
    v10 = _mm_loadu_si128((const __m128i *)(a1 + v6)); /*0x140a83a10*/
    v11 = _mm_add_epi8(v10, si128); /*0x140a83a1a*/
    v12 = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v11, v8), v11), v9), v10); /*0x140a83a2e*/
    v13 = _mm_loadu_si128((const __m128i *)(a3 + v6)); /*0x140a83a32*/
    v14 = _mm_add_epi8(v13, si128); /*0x140a83a3c*/
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v14, v8), v14), v9), v13), v12)) != 0xFFFF ) /*0x140a83a5d*/
      return 0; /*0x140a83a64*/
    v6 += 16; /*0x140a83a66*/
  }
  while ( v5 != v6 ); /*0x140a83a6d*/
  result = 1; /*0x140a83a6f*/
  if ( (a2 & 0xF) != 0 ) /*0x140a83a74*/
  {
    v16 = _mm_loadu_si128((const __m128i *)(a1 + a2 - 16)); /*0x140a83a76*/
    v17 = _mm_add_epi8(v16, si128); /*0x140a83a80*/
    v18 = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v8), v17), v9), v16); /*0x140a83a94*/
    v19 = _mm_loadu_si128((const __m128i *)(a3 + a4 - 16)); /*0x140a83a98*/
    v20 = _mm_add_epi8(si128, v19); /*0x140a83a9f*/
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v8, v20), v20), v9), v19), v18)) != 0xFFFF ) /*0x140a83abb*/
      return 0; /*0x140a83ac3*/
  }
  return result; /*0x140a83ac5*/
}

// refs: xmmword_1417EB690, xmmword_1417EB6A0, xmmword_1417EB6B0
