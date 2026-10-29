// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::Lines::next::h3201b2e3005a6786; addr: 0x1009c06b0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
_QWORD *__fastcall codexmate_lib::core::analytics::reader::Lines::next::h3201b2e3005a6786(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  _BYTE *v5; // r13
  unsigned __int64 v6; // r12
  int v7; // ecx
  size_t v8; // rbx
  char v9; // r14
  __int64 v10; // rsi
  size_t v11; // r12
  size_t v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v18; // rcx
  void *__src; // [rsp+8h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-90h]
  _QWORD *v21; // [rsp+18h] [rbp-88h]
  __int64 v22; // [rsp+20h] [rbp-80h]
  unsigned __int8 (__fastcall *v23)(__int64); // [rsp+28h] [rbp-78h]
  __int64 v24; // [rsp+30h] [rbp-70h]
  __int64 v25; // [rsp+38h] [rbp-68h]
  __int64 v26; // [rsp+40h] [rbp-60h]
  __int64 v27; // [rsp+48h] [rbp-58h]
  __int64 v28; // [rsp+50h] [rbp-50h] BYREF
  __int64 v29; // [rsp+58h] [rbp-48h]
  __int64 v30; // [rsp+60h] [rbp-40h]
  _QWORD *v31; // [rsp+68h] [rbp-38h]
  int v32; // [rsp+74h] [rbp-2Ch]

  v22 = a3; /*0x1009c06c1*/
  v31 = a1; /*0x1009c06c5*/
  v28 = 0; /*0x1009c06c9*/
  v29 = 1; /*0x1009c06d1*/
  v30 = 0; /*0x1009c06d9*/
  v23 = *(unsigned __int8 (__fastcall **)(__int64))(a4 + 40); /*0x1009c06e5*/
  v24 = *a2; /*0x1009c06ec*/
  v21 = a2; /*0x1009c06f0*/
  v25 = a2[1]; /*0x1009c06fb*/
  v26 = 1; /*0x1009c0704*/
  v27 = 0; /*0x1009c0708*/
  v32 = 0; /*0x1009c0710*/
  v4 = 0; /*0x1009c0717*/
  do /*0x1009c0824*/
  {
    if ( !v23(v22) ) /*0x1009c0729*/
    {
LABEL_22:
      v13 = 0x8000000000000002LL; /*0x1009c0858*/
LABEL_23:
      v14 = v31; /*0x1009c0862*/
      v31[1] = v13; /*0x1009c0866*/
LABEL_27:
      *v14 = 11; /*0x1009c08a9*/
      v16 = v28; /*0x1009c08b0*/
      if ( !v28 ) /*0x1009c08b7*/
        return v14; /*0x1009c08b7*/
LABEL_28:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v16, 1); /*0x1009c08b9*/
      return v14; /*0x1009c08c2*/
    }
    (*(void (__fastcall **)(void **, __int64))(v25 + 88))(&__src, v24); /*0x1009c073e*/
    v5 = __src; /*0x1009c0741*/
    if ( !__src ) /*0x1009c074b*/
    {
      v15 = v20; /*0x1009c086c*/
      v14 = v31; /*0x1009c0873*/
      *v31 = 2; /*0x1009c0877*/
      v14[1] = v15; /*0x1009c087e*/
      v16 = v28; /*0x1009c0882*/
      if ( !v28 ) /*0x1009c0889*/
        return v14; /*0x1009c0889*/
      goto LABEL_28; /*0x1009c0889*/
    }
    v6 = v20; /*0x1009c0751*/
    if ( !v23(v22) ) /*0x1009c0761*/
      goto LABEL_22; /*0x1009c0761*/
    if ( !v6 ) /*0x1009c076a*/
    {
      v14 = v31; /*0x1009c089d*/
      v31[1] = 0x8000000000000001LL; /*0x1009c08a1*/
      *((_BYTE *)v14 + 16) = v4 != 0; /*0x1009c08a5*/
      goto LABEL_27; /*0x1009c08a5*/
    }
    if ( v6 >= 0x10000 ) /*0x1009c077c*/
      v6 = 0x10000; /*0x1009c077c*/
    v8 = 0; /*0x1009c0780*/
    while ( 1 ) /*0x1009c0790*/
    {
      v9 = v5[v8++]; /*0x1009c0790*/
      if ( v9 == 10 ) /*0x1009c079d*/
        break; /*0x1009c079d*/
      if ( v6 == v8 ) /*0x1009c07a2*/
      {
        v8 = v6; /*0x1009c07a4*/
        break; /*0x1009c07a4*/
      }
    }
    if ( (v32 & 1) != 0 || (v7 = v27 + v8, v27 + v8 > 0x800000) ) /*0x1009c07bc*/
    {
      v12 = 0; /*0x1009c0800*/
      LOBYTE(v7) = 1; /*0x1009c0802*/
      v32 = v7; /*0x1009c0804*/
    }
    else
    {
      if ( v8 > v6 ) /*0x1009c07c1*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v8, v6, &off_101AB9E90); /*0x1009c0934*/
      v10 = v27; /*0x1009c07cb*/
      if ( v8 > v28 - v27 ) /*0x1009c07d5*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v28, v27, v8, 1, 1); /*0x1009c0841*/
        v26 = v29; /*0x1009c084a*/
        v10 = v30; /*0x1009c084e*/
        v11 = v30 + v8; /*0x1009c0852*/
      }
      else
      {
        v11 = v27 + v8; /*0x1009c07d7*/
      }
      memcpy((void *)(v26 + v10), v5, v8); /*0x1009c07e7*/
      v32 = 0; /*0x1009c07ec*/
      v12 = v11; /*0x1009c07f3*/
    }
    v27 = v12; /*0x1009c0807*/
    v30 = v12; /*0x1009c080b*/
    (*(void (__fastcall **)(__int64, size_t))(v25 + 96))(v24, v8); /*0x1009c081a*/
    v4 += v8; /*0x1009c081d*/
  }
  while ( v9 != 10 ); /*0x1009c0824*/
  v21[2] += v4; /*0x1009c08e0*/
  if ( (_BYTE)v32 ) /*0x1009c08e8*/
  {
    v13 = 0x8000000000000000LL; /*0x1009c08f4*/
    goto LABEL_23; /*0x1009c08f8*/
  }
  v14 = v31; /*0x1009c0901*/
  v31[1] = v28; /*0x1009c0905*/
  v18 = v30; /*0x1009c0910*/
  v14[2] = v29; /*0x1009c0914*/
  v14[3] = v18; /*0x1009c0918*/
  *v14 = 11; /*0x1009c091c*/
  return v14; /*0x1009c08ca*/
}