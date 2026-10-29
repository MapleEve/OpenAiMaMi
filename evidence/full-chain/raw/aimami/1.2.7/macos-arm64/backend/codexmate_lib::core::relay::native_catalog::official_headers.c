// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_catalog::official_headers::h1cafa30fea1555af; addr: 0x1005d2710; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void *__fastcall codexmate_lib::core::relay::native_catalog::official_headers::h1cafa30fea1555af(_WORD *a1, __int64 a2)
{
  __int64 v2; // r14
  void *v3; // rbx
  unsigned __int64 v4; // r15
  _DWORD *v5; // r13
  __int64 v6; // rax
  unsigned __int64 v8; // r15
  char *v9; // r13
  __int64 v10; // rdx
  __int64 i; // r13
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r14
  char v16; // al
  _QWORD v17[12]; // [rsp+0h] [rbp-1B0h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-140h]
  __int64 v20; // [rsp+78h] [rbp-138h]
  void *v21; // [rsp+80h] [rbp-130h]
  __int64 v22; // [rsp+88h] [rbp-128h]
  void *v23; // [rsp+90h] [rbp-120h]
  __int64 v24; // [rsp+98h] [rbp-118h]
  void *v25; // [rsp+A0h] [rbp-110h]
  __int64 v26; // [rsp+A8h] [rbp-108h]
  void *v27; // [rsp+B0h] [rbp-100h]
  __int64 v28; // [rsp+B8h] [rbp-F8h]
  void *v29; // [rsp+C0h] [rbp-F0h]
  __int64 v30; // [rsp+C8h] [rbp-E8h]
  void *v31; // [rsp+D0h] [rbp-E0h]
  __int64 v32; // [rsp+D8h] [rbp-D8h]
  void *v33; // [rsp+E0h] [rbp-D0h]
  __int64 v34; // [rsp+E8h] [rbp-C8h]
  _QWORD v35[2]; // [rsp+F0h] [rbp-C0h] BYREF
  unsigned __int64 v36; // [rsp+100h] [rbp-B0h]
  __int64 v37; // [rsp+108h] [rbp-A8h]
  __int64 v38; // [rsp+110h] [rbp-A0h]
  char v39; // [rsp+118h] [rbp-98h]
  __int64 v40; // [rsp+120h] [rbp-90h]
  unsigned __int64 v41; // [rsp+128h] [rbp-88h]
  __int64 v42; // [rsp+130h] [rbp-80h]
  _QWORD v43[2]; // [rsp+138h] [rbp-78h] BYREF
  void *v44; // [rsp+148h] [rbp-68h]
  __int64 v45; // [rsp+150h] [rbp-60h] BYREF
  unsigned __int64 v46; // [rsp+158h] [rbp-58h]
  __int64 v47; // [rsp+160h] [rbp-50h]
  __int64 v48; // [rsp+168h] [rbp-48h]
  __int64 v49; // [rsp+170h] [rbp-40h]
  __int64 v50; // [rsp+178h] [rbp-38h]
  unsigned __int64 v51; // [rsp+180h] [rbp-30h]

  v2 = a2; /*0x1005d2724*/
  v3 = a1; /*0x1005d2727*/
  _$LT$$RF$str$u20$as$u20$http..header..map..as_header_name..Sealed$GT$::find::h7616d1f84037a1f3( /*0x1005d2743*/
    v18,
    &unk_1016FD545,
    13,
    a2);
  if ( v18[0] ) /*0x1005d274f*/
  {
    v51 = *(_QWORD *)(a2 + 40); /*0x1005d275c*/
    if ( v19 >= v51 ) /*0x1005d2763*/
      core::panicking::panic_bounds_check::h56740b1198b22635(v19, v51, &anon_90096945ae5392e7faa4fe68e375fd44_1073); /*0x1005d2b0d*/
    v50 = *(_QWORD *)(a2 + 32); /*0x1005d2771*/
    v4 = *(_QWORD *)(v50 + 104 * v19 + 40); /*0x1005d2775*/
    if ( v4 ) /*0x1005d277d*/
    {
      v5 = *(_DWORD **)(v50 + 104 * v19 + 32); /*0x1005d2783*/
      v6 = 0; /*0x1005d2788*/
      while ( (unsigned __int8)(*((_BYTE *)v5 + v6) - 32) < 0x5Fu || *((_BYTE *)v5 + v6) == 9 ) /*0x1005d27a7*/
      {
        if ( v4 == ++v6 ) /*0x1005d27af*/
        {
          if ( v4 < 7 ) /*0x1005d27b5*/
            break; /*0x1005d27b5*/
          if ( *v5 ^ 0x72616542 | *(_DWORD *)((char *)v5 + 3) ^ 0x20726572 ) /*0x1005d27c9*/
            break; /*0x1005d27c9*/
          v8 = v4 - 7; /*0x1005d27ef*/
          v9 = (char *)v5 + 7; /*0x1005d27f3*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v9, v8); /*0x1005d27fd*/
          if ( !v10 /*0x1005d2843*/
            || v8 >= 7
            && (!(*(_DWORD *)v9 ^ 0x616D6961 | *(_DWORD *)(v9 + 3) ^ 0x2D696D61)
             || v8 >= 0xA && !(*(_QWORD *)v9 ^ 0x6D616D69612D6B73LL | *((unsigned __int16 *)v9 + 4) ^ 0x2D69LL)) )
          {
            break; /*0x1005d2846*/
          }
          v44 = a1; /*0x1005d2848*/
          LOWORD(v17[11]) = 0; /*0x1005d284c*/
          v17[9] = 2; /*0x1005d2855*/
          v17[10] = 0; /*0x1005d2860*/
          v17[3] = 0; /*0x1005d286b*/
          v17[4] = 8; /*0x1005d2876*/
          v17[5] = 0; /*0x1005d2881*/
          v17[6] = 0; /*0x1005d288c*/
          v17[7] = 8; /*0x1005d2897*/
          v17[8] = 0; /*0x1005d28a2*/
          v17[0] = 0; /*0x1005d28ad*/
          v19 = (unsigned __int64)&unk_1016FD545; /*0x1005d28b8*/
          v20 = 13; /*0x1005d28bf*/
          v21 = &unk_1016FD552; /*0x1005d28d1*/
          v22 = 18; /*0x1005d28d8*/
          v23 = &unk_1016FD564; /*0x1005d28ea*/
          v24 = 10; /*0x1005d28f1*/
          v25 = &unk_1016FD56E; /*0x1005d2903*/
          v26 = 10; /*0x1005d290a*/
          v27 = &unk_1016FD578; /*0x1005d291c*/
          v28 = 7; /*0x1005d2923*/
          v29 = &unk_1016FD57F; /*0x1005d2935*/
          v30 = 19; /*0x1005d293c*/
          v31 = &unk_1016FD592; /*0x1005d294e*/
          v32 = 14; /*0x1005d2955*/
          v33 = &unk_1016FD5A0; /*0x1005d2967*/
          v34 = 33; /*0x1005d296e*/
          for ( i = 3; i != 19; i += 2 ) /*0x1005d2979*/
          {
            v12 = v17[i + 11]; /*0x1005d29a4*/
            v13 = *(_QWORD *)&v18[i * 8]; /*0x1005d29ac*/
            v14 = v2; /*0x1005d29c1*/
            _$LT$$RF$str$u20$as$u20$http..header..map..as_header_name..Sealed$GT$::find::h7616d1f84037a1f3( /*0x1005d29c7*/
              v35,
              v12,
              v13,
              v2);
            if ( LOBYTE(v35[0]) ) /*0x1005d29d3*/
            {
              if ( v36 >= v51 ) /*0x1005d29e0*/
                core::panicking::panic_bounds_check::h56740b1198b22635( /*0x1005d2b1d*/
                  v36,
                  v51,
                  &anon_90096945ae5392e7faa4fe68e375fd44_1073);
              v15 = 104 * v36; /*0x1005d29e6*/
              (**(void (__fastcall ***)(__int64 *, __int64, _QWORD, _QWORD))(v50 + 104 * v36 + 24))( /*0x1005d2a06*/
                &v45,
                v50 + 104 * v36 + 48,
                *(_QWORD *)(v50 + 104 * v36 + 32),
                *(_QWORD *)(v50 + 104 * v36 + 40));
              v16 = *(_BYTE *)(v50 + v15 + 56); /*0x1005d2a11*/
              v38 = v48; /*0x1005d2a20*/
              v37 = v47; /*0x1005d2a28*/
              v36 = v46; /*0x1005d2a34*/
              v35[1] = v45; /*0x1005d2a38*/
              v35[0] = v17; /*0x1005d2a42*/
              v39 = v16; /*0x1005d2a49*/
              http::header::name::HdrName::from_static::h5a775c628bc69215(&v45, v12, v13, v35); /*0x1005d2a60*/
              if ( (_BYTE)v49 == 3 ) /*0x1005d2a69*/
                core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016FD4B3, 23, v35, &unk_101AACFF8, &off_101AAC4F0); /*0x1005d2afb*/
              v43[1] = v49; /*0x1005d2a6f*/
              v43[0] = v48; /*0x1005d2a77*/
              v42 = v47; /*0x1005d2a7f*/
              v41 = v46; /*0x1005d2a8b*/
              v40 = v45; /*0x1005d2a92*/
              if ( (_BYTE)v49 != 2 ) /*0x1005d2a9b*/
                (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(v40 + 32))(v43, v41, v42); /*0x1005d2ab7*/
            }
            v2 = v14; /*0x1005d299b*/
          }
          v3 = v44; /*0x1005d2acb*/
          qmemcpy(v44, v17, 0x60u); /*0x1005d2ad2*/
          return v3; /*0x1005d2ad2*/
        }
      }
    }
  }
  a1[4] = 0; /*0x1005d27cd*/
  *(_QWORD *)a1 = 3; /*0x1005d27d3*/
  return v3; /*0x1005d27dd*/
}
