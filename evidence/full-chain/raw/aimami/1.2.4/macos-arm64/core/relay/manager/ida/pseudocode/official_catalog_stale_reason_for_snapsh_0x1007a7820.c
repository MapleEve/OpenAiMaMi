// __ZN13codexmate_lib4core5relay7manager12RelayManager42official_catalog_stale_reason_for_snapshot @ 0x1007a7820 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::official_catalog_stale_reason_for_snapshot::h2c6dc71d99772def(
        unsigned __int64 *a1,
        __int64 *a2,
        char a3,
        char a4)
{
  __m128i v6; // xmm2
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // rcx
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13[8]; // [rsp+0h] [rbp-110h] BYREF
  __int64 v14; // [rsp+8h] [rbp-108h]
  __int64 v15; // [rsp+10h] [rbp-100h]
  __int64 v16; // [rsp+18h] [rbp-F8h]
  char *v17; // [rsp+20h] [rbp-F0h]
  __int64 v18; // [rsp+28h] [rbp-E8h]
  __int64 v19; // [rsp+30h] [rbp-E0h]
  char *v20; // [rsp+38h] [rbp-D8h]
  __int64 v21; // [rsp+40h] [rbp-D0h]
  const __m128i *v22[5]; // [rsp+60h] [rbp-B0h] BYREF
  char v23; // [rsp+88h] [rbp-88h]
  _QWORD v24[3]; // [rsp+90h] [rbp-80h] BYREF
  const __m128i **v25; // [rsp+A8h] [rbp-68h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+B0h] [rbp-60h]
  _QWORD **v27; // [rsp+B8h] [rbp-58h]
  __int64 (__fastcall *v28)(); // [rsp+C0h] [rbp-50h]
  char **v29; // [rsp+C8h] [rbp-48h]
  __int64 (__fastcall *v30)(); // [rsp+D0h] [rbp-40h]
  char *v31; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-30h]
  unsigned __int64 v33; // [rsp+E8h] [rbp-28h]
  _QWORD *v34; // [rsp+F0h] [rbp-20h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+F8h] [rbp-18h]

  if ( ((a3 & 1) == 0) | a4 & 1 ) /*0x1007a7835*/
  {
    *a1 = 0x8000000000000000LL; /*0x1007a7844*/
    return 0x8000000000000000LL; /*0x1007a7847*/
  }
  codexmate_lib::core::relay::codex_catalog::inspect_official_catalog_freshness::hf4c809afff3654aa((__int64)v13, a2); /*0x1007a7853*/
  if ( v22[1] == (const __m128i *)24 ) /*0x1007a7860*/
  {
    v6 = _mm_or_si128( /*0x1007a788a*/
           _mm_xor_si128(_mm_loadl_epi64(&qword_1015E0B38), _mm_loadl_epi64(v22[0] + 1)),
           _mm_xor_si128(
             _mm_loadu_si128((const __m128i *)&anon_7245a3145add9b93f83b0a9aa358a664_215),
             _mm_loadu_si128(v22[0])));
    if ( _mm_testz_si128(v6, v6) ) /*0x1007a7893*/
      goto LABEL_18; /*0x1007a7893*/
  }
  if ( !v23 ) /*0x1007a78a0*/
  {
    v9 = "unknownapikeyaccount-removal-quarantine"; /*0x1007a7931*/
    v10 = v17; /*0x1007a7938*/
    if ( __OFSUB__(0, v16) ) /*0x1007a792a*/
      v10 = "unknownapikeyaccount-removal-quarantine"; /*0x1007a793f*/
    v11 = 7; /*0x1007a7943*/
    v12 = v18; /*0x1007a7948*/
    if ( __OFSUB__(0, v16) ) /*0x1007a792a*/
      v12 = 7; /*0x1007a794f*/
    v34 = v10; /*0x1007a7953*/
    v35 = (__int64 (__fastcall *)())v12; /*0x1007a7957*/
    if ( !__OFSUB__(0, v19) ) /*0x1007a7962*/
    {
      v9 = v20; /*0x1007a7964*/
      v11 = v21; /*0x1007a796b*/
    }
    v31 = v9; /*0x1007a7972*/
    v32 = v11; /*0x1007a7976*/
    v25 = v22; /*0x1007a797a*/
    v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1007a7985*/
    v27 = &v34; /*0x1007a798d*/
    v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1007a7991*/
    v29 = &v31; /*0x1007a7999*/
    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1007a799d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017CD517, &v25); /*0x1007a79b0*/
    a1[2] = v24[2]; /*0x1007a79b9*/
    v7 = v24[0]; /*0x1007a79bd*/
    v8 = v24[1]; /*0x1007a79c1*/
    goto LABEL_17; /*0x1007a79c1*/
  }
  if ( !v15 ) /*0x1007a78ac*/
  {
LABEL_18:
    v7 = 0x8000000000000000LL; /*0x1007a79cb*/
    goto LABEL_19; /*0x1007a79cb*/
  }
  alloc::str::join_generic_copy::h1b385c7941ba5aef(&v25, v14, v15, &unk_1016785D6, 3); /*0x1007a78cd*/
  v34 = &v25; /*0x1007a78d2*/
  v35 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1007a78dd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v31, &unk_1017CD572, &v34); /*0x1007a78f0*/
  if ( v25 ) /*0x1007a78fc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1007a7907*/
  a1[2] = v33; /*0x1007a7910*/
  v7 = (unsigned __int64)v31; /*0x1007a7914*/
  v8 = v32; /*0x1007a7918*/
LABEL_17:
  a1[1] = v8; /*0x1007a79c5*/
LABEL_19:
  *a1 = v7; /*0x1007a79d5*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..OfficialCatalogFreshness$GT$::ha199feef7629d1bb(v13); /*0x1007a79e4*/
}