// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::storage::lazy_load_api_key::hc2561dada7c11554; addr: 0x1009add50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::relay::storage::lazy_load_api_key::hc2561dada7c11554(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v14; // [rsp+30h] [rbp-60h] BYREF
  __int64 v15; // [rsp+38h] [rbp-58h]
  __int64 v16; // [rsp+40h] [rbp-50h]
  __int64 v17; // [rsp+48h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-40h] BYREF
  __int64 v19; // [rsp+58h] [rbp-38h]
  __int64 v20; // [rsp+60h] [rbp-30h]
  __int64 v21; // [rsp+68h] [rbp-28h]

  if ( a3[11] ) /*0x1009add5f*/
    goto LABEL_2; /*0x1009add64*/
  v4 = 2; /*0x1009add9b*/
  if ( (__int64)a3[24] < 0 ) /*0x1009adda0*/
    v4 = a3[24] ^ 0x8000000000000000LL; /*0x1009adda0*/
  if ( !v4 ) /*0x1009adda7*/
  {
    v5 = a1; /*0x1009ade6c*/
    v6 = a3; /*0x1009ade73*/
    codexmate_lib::core::relay::keychain::get_api_key::hfa7f3d92c3c6faa2(&v14, a2, a3[1], a3[2]); /*0x1009ade81*/
    if ( !v14 ) /*0x1009ade8d*/
      goto LABEL_10; /*0x1009ade8d*/
LABEL_18:
    v20 = v17; /*0x1009ade93*/
    v19 = v16; /*0x1009adea3*/
    v18 = v15; /*0x1009adea7*/
    v13[0] = &v18; /*0x1009adeaf*/
    v13[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1009adeba*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v12, &unk_101904037, v13); /*0x1009aded0*/
    a1 = v5; /*0x1009aded9*/
    v5[3] = v12[2]; /*0x1009adedc*/
    v10 = v12[0]; /*0x1009adee0*/
    v5[2] = v12[1]; /*0x1009adeeb*/
    v5[1] = v10; /*0x1009adeef*/
    *v5 = 10; /*0x1009adef3*/
    v7 = v18; /*0x1009adefa*/
    if ( !v18 ) /*0x1009adf01*/
      return a1; /*0x1009adf01*/
    v11 = v19; /*0x1009adf07*/
    goto LABEL_20; /*0x1009adf07*/
  }
  if ( v4 == 1 ) /*0x1009addb1*/
    goto LABEL_2; /*0x1009addb1*/
  v5 = a1; /*0x1009addb3*/
  v6 = a3; /*0x1009addc1*/
  codexmate_lib::core::relay::keychain::revisions::read::h4e0b0eb3b22cf5fc(&v18, a2, a3[1], a3[2], a3 + 24); /*0x1009addcf*/
  v15 = v19; /*0x1009adddc*/
  v16 = v20; /*0x1009adde4*/
  v17 = v21; /*0x1009addec*/
  if ( v18 ) /*0x1009addf3*/
    goto LABEL_18; /*0x1009addf3*/
LABEL_10:
  v7 = v15; /*0x1009addf9*/
  a1 = v5; /*0x1009ade00*/
  if ( v15 != 0x8000000000000000LL ) /*0x1009ade03*/
  {
    if ( v17 ) /*0x1009ade0e*/
    {
      v8 = v6[9]; /*0x1009ade1c*/
      if ( v8 ) /*0x1009ade22*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6[10], v8, 1); /*0x1009ade33*/
      v6[11] = v17; /*0x1009ade3f*/
      v9 = v15; /*0x1009ade43*/
      v6[10] = v16; /*0x1009ade4a*/
      v6[9] = v9; /*0x1009ade4e*/
      if ( !*((_BYTE *)v6 + 252) ) /*0x1009ade51*/
        *((_BYTE *)v6 + 252) = 1; /*0x1009ade5b*/
      *((_BYTE *)v5 + 8) = 1; /*0x1009ade63*/
      goto LABEL_3; /*0x1009ade67*/
    }
    *((_BYTE *)v5 + 8) = 0; /*0x1009adf23*/
    *v5 = 11; /*0x1009adf27*/
    if ( !v7 ) /*0x1009adf31*/
      return a1; /*0x1009adf31*/
    v11 = v16; /*0x1009adf37*/
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v7, 1); /*0x1009adf0b*/
    return a1; /*0x1009adf1e*/
  }
LABEL_2:
  *((_BYTE *)a1 + 8) = 0; /*0x1009add66*/
LABEL_3:
  *a1 = 11; /*0x1009add6a*/
  return a1; /*0x1009add74*/
}