// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1007c8560 depth=2
__int64 __fastcall http::header::map::HeaderMap$LT$T$GT$::remove_all_extra_values::hf7fb0f0adc1b950f(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  char *v6; // r15
  unsigned __int64 v7; // rdi
  char v8; // dl
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r12
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  char **v23; // rdi
  char **v24; // rax
  _QWORD v25[9]; // [rsp+8h] [rbp-D8h] BYREF
  _QWORD v26[9]; // [rsp+50h] [rbp-90h] BYREF
  _QWORD *v27; // [rsp+98h] [rbp-48h]
  __int64 v28; // [rsp+A0h] [rbp-40h]
  char **v29; // [rsp+A8h] [rbp-38h]
  unsigned __int64 v30; // [rsp+B0h] [rbp-30h]

  v2 = a2; /*0x1007c8574*/
  v3 = a1[8]; /*0x1007c8577*/
  if ( a2 >= v3 ) /*0x1007c857e*/
LABEL_40:
    core::panicking::panic_bounds_check::h56740b1198b22635(v2, v3, (__int64)&off_101539E20); /*0x1007c881f*/
  v4 = a1[4]; /*0x1007c8584*/
  v30 = a1[5]; /*0x1007c858c*/
  v27 = a1; /*0x1007c8590*/
  v5 = a1[7]; /*0x1007c8594*/
  v6 = (char *)(v5 + 72 * v3 - 72); /*0x1007c859c*/
  v29 = &off_101539F10; /*0x1007c85a8*/
  v28 = v4; /*0x1007c85ac*/
  while ( 1 ) /*0x1007c85b5*/
  {
    v7 = *(_QWORD *)(v5 + 72 * v2 + 8); /*0x1007c85b5*/
    v8 = *(_BYTE *)(v5 + 72 * v2 + 16); /*0x1007c85ba*/
    v9 = *(_QWORD *)(v5 + 72 * v2 + 24); /*0x1007c85c0*/
    if ( *(_BYTE *)(v5 + 72 * v2) ) /*0x1007c85c5*/
    {
      if ( v8 ) /*0x1007c85ce*/
      {
        if ( v7 >= v3 ) /*0x1007c85d7*/
          core::panicking::panic_bounds_check::h56740b1198b22635(v7, v3, (__int64)&off_101539EE0); /*0x1007c88a6*/
        v10 = 9 * v7; /*0x1007c85dd*/
        *(_QWORD *)(v5 + 8 * v10 + 16) = 1; /*0x1007c85e1*/
        *(_QWORD *)(v5 + 8 * v10 + 24) = v9; /*0x1007c85ea*/
        if ( v9 >= v3 ) /*0x1007c85f2*/
          core::panicking::panic_bounds_check::h56740b1198b22635(v9, v3, (__int64)&off_101539EF8); /*0x1007c88b8*/
        v11 = 9 * v9; /*0x1007c85f8*/
        *(_QWORD *)(v5 + 8 * v11) = 1; /*0x1007c85fc*/
        *(_QWORD *)(v5 + 8 * v11 + 8) = v7; /*0x1007c8604*/
      }
      else
      {
        if ( v9 >= v30 ) /*0x1007c8654*/
          core::panicking::panic_bounds_check::h56740b1198b22635( /*0x1007c88db*/
            *(_QWORD *)(v5 + 72 * v2 + 24),
            v30,
            (__int64)&off_101539E98);
        if ( !*(_BYTE *)(v4 + 104 * v9) ) /*0x1007c8662*/
          core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101539EB0); /*0x1007c8869*/
        *(_QWORD *)(v4 + 104 * v9 + 16) = v7; /*0x1007c866b*/
        if ( v7 >= v3 ) /*0x1007c8672*/
          core::panicking::panic_bounds_check::h56740b1198b22635(v7, v3, (__int64)&off_101539EC8); /*0x1007c891c*/
        v13 = 9 * v7; /*0x1007c8678*/
        *(_QWORD *)(v5 + 8 * v13 + 16) = 0; /*0x1007c867c*/
        *(_QWORD *)(v5 + 8 * v13 + 24) = v9; /*0x1007c8685*/
      }
    }
    else if ( v8 ) /*0x1007c8612*/
    {
      if ( v7 >= v30 ) /*0x1007c8618*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v7, v30, (__int64)&off_101539E50); /*0x1007c88eb*/
      if ( !*(_BYTE *)(v4 + 104 * v7) ) /*0x1007c8626*/
        core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101539E68); /*0x1007c8875*/
      *(_QWORD *)(v4 + 104 * v7 + 8) = v9; /*0x1007c862f*/
      if ( v9 >= v3 ) /*0x1007c8636*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v9, v3, (__int64)&off_101539E80); /*0x1007c892e*/
      v12 = 9 * v9; /*0x1007c863c*/
      *(_QWORD *)(v5 + 8 * v12) = 0; /*0x1007c8640*/
      *(_QWORD *)(v5 + 8 * v12 + 8) = v7; /*0x1007c8648*/
    }
    else
    {
      if ( v7 >= v30 ) /*0x1007c8694*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v7, v30, (__int64)&off_101539E38); /*0x1007c88c8*/
      *(_QWORD *)(v4 + 104 * v7) = 0; /*0x1007c869e*/
    }
    v14 = (_QWORD *)(v5 + 72 * v2); /*0x1007c86a6*/
    qmemcpy(v26, v14, sizeof(v26)); /*0x1007c86b9*/
    --v3; /*0x1007c86bc*/
    memmove(v14, v6, 0x48u); /*0x1007c86ca*/
    v27[8] = v3; /*0x1007c86d3*/
    if ( v26[0] && v3 == v26[1] ) /*0x1007c86e8*/
    {
      v26[0] = 1; /*0x1007c86ea*/
      v26[1] = v2; /*0x1007c86f5*/
    }
    if ( v26[2] && v3 == v26[3] ) /*0x1007c8707*/
    {
      v26[2] = 1; /*0x1007c8709*/
      v26[3] = v2; /*0x1007c8711*/
    }
    if ( v3 != v2 ) /*0x1007c8718*/
    {
      if ( v3 <= v2 ) /*0x1007c871e*/
      {
        v15 = v2; /*0x1007c8894*/
        goto LABEL_60; /*0x1007c8897*/
      }
      v15 = v14[1]; /*0x1007c8724*/
      v16 = v14[2]; /*0x1007c8729*/
      v17 = v14[3]; /*0x1007c872e*/
      if ( *(_BYTE *)v14 ) /*0x1007c8733*/
      {
        v18 = v28; /*0x1007c873d*/
        if ( v15 < v3 ) /*0x1007c8741*/
        {
          v19 = 9 * v15; /*0x1007c8747*/
          *(_QWORD *)(v5 + 8 * v19 + 16) = 1; /*0x1007c8750*/
          *(_QWORD *)(v5 + 8 * v19 + 24) = v2; /*0x1007c8759*/
          if ( v16 ) /*0x1007c8760*/
            goto LABEL_30; /*0x1007c8760*/
LABEL_35:
          if ( v17 < v30 ) /*0x1007c87ad*/
          {
            v21 = 104 * v17; /*0x1007c87b3*/
            if ( *(_DWORD *)(v18 + v21) == 1 ) /*0x1007c87bc*/
            {
              *(_QWORD *)(v18 + v21 + 16) = v2; /*0x1007c87c5*/
              goto LABEL_38; /*0x1007c87c5*/
            }
            v23 = &off_101539F88; /*0x1007c8883*/
LABEL_46:
            core::option::unwrap_failed::h44626cade04bbf1e((__int64)v23); /*0x1007c888a*/
          }
          v15 = v17; /*0x1007c8933*/
          v3 = v30; /*0x1007c8936*/
          v24 = &off_101539F70; /*0x1007c893a*/
          goto LABEL_59; /*0x1007c893a*/
        }
        v24 = &off_101539F58; /*0x1007c88f0*/
      }
      else
      {
        v18 = v28; /*0x1007c8784*/
        if ( v15 >= v30 ) /*0x1007c8788*/
        {
          v3 = v30; /*0x1007c88f9*/
          v24 = &off_101539F28; /*0x1007c88fd*/
        }
        else
        {
          if ( *(_DWORD *)(v28 + 104 * v15) != 1 ) /*0x1007c8797*/
          {
            v23 = &off_101539F40; /*0x1007c887a*/
            goto LABEL_46; /*0x1007c8881*/
          }
          *(_QWORD *)(v28 + 104 * v15 + 8) = v2; /*0x1007c87a0*/
          if ( !v16 ) /*0x1007c87a7*/
            goto LABEL_35; /*0x1007c87a7*/
LABEL_30:
          if ( v17 < v3 ) /*0x1007c8765*/
          {
            v20 = 9 * v17; /*0x1007c876b*/
            *(_QWORD *)(v5 + 8 * v20) = 1; /*0x1007c876f*/
            *(_QWORD *)(v5 + 8 * v20 + 8) = v2; /*0x1007c8777*/
            goto LABEL_38; /*0x1007c877c*/
          }
          v15 = v17; /*0x1007c8906*/
          v24 = &off_101539FA0; /*0x1007c8909*/
        }
      }
LABEL_59:
      v29 = v24; /*0x1007c8941*/
LABEL_60:
      core::panicking::panic_bounds_check::h56740b1198b22635(v15, v3, (__int64)v29); /*0x1007c8945*/
    }
LABEL_38:
    qmemcpy(v25, v26, sizeof(v25)); /*0x1007c87dc*/
    if ( LODWORD(v25[2]) != 1 ) /*0x1007c87e6*/
      return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v25[4] + 32LL))(&v25[7], v25[5], v25[6]); /*0x1007c8850*/
    v2 = v25[3]; /*0x1007c87e8*/
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v25[4] + 32LL))(&v25[7], v25[5], v25[6]); /*0x1007c880b*/
    v6 -= 72; /*0x1007c880e*/
    v4 = v28; /*0x1007c8815*/
    if ( v2 >= v3 ) /*0x1007c8819*/
      goto LABEL_40; /*0x1007c8819*/
  }
}