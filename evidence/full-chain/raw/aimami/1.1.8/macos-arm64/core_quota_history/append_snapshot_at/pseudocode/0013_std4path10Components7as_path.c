// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND append_snapshot_at node 0x1010a81d0 depth=2
_BYTE *__fastcall std::path::Components::as_path::he4876f57fa839c0b(__int64 a1, double a2, double a3, double a4)
{
  _BYTE *v4; // r14
  unsigned __int64 v5; // rbx
  char v6; // si
  unsigned __int64 v7; // rax
  char v8; // al
  unsigned __int8 v9; // cl
  char v10; // dl
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  bool v15; // zf
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+8h] [rbp-98h]
  __int64 v20; // [rsp+10h] [rbp-90h]
  _BYTE v21[15]; // [rsp+18h] [rbp-88h]
  _BYTE *v22; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-58h]
  char v24; // [rsp+50h] [rbp-50h]
  unsigned __int64 v25; // [rsp+51h] [rbp-4Fh]
  __int64 v26; // [rsp+59h] [rbp-47h]
  __int64 v27; // [rsp+61h] [rbp-3Fh]
  _BYTE v28[15]; // [rsp+69h] [rbp-37h]
  unsigned __int8 v29; // [rsp+78h] [rbp-28h]
  char v30; // [rsp+79h] [rbp-27h]
  char v31; // [rsp+7Ah] [rbp-26h]

  v4 = *(_BYTE **)a1; /*0x1010a81e2*/
  v5 = *(_QWORD *)(a1 + 8); /*0x1010a81e5*/
  v6 = *(_BYTE *)(a1 + 16); /*0x1010a81e9*/
  if ( v6 != 6 ) /*0x1010a81f1*/
  {
    *(_QWORD *)&v21[7] = *(_QWORD *)(a1 + 48); /*0x1010a81f7*/
    *(_QWORD *)v21 = *(_QWORD *)(a1 + 41); /*0x1010a8202*/
    v20 = *(_QWORD *)(a1 + 33); /*0x1010a820d*/
    v7 = *(_QWORD *)(a1 + 17); /*0x1010a8214*/
    v19 = *(_QWORD *)(a1 + 25); /*0x1010a821c*/
    v18 = v7; /*0x1010a8223*/
  }
  v8 = *(_BYTE *)(a1 + 58); /*0x1010a822a*/
  v9 = *(_BYTE *)(a1 + 56); /*0x1010a822e*/
  v10 = *(_BYTE *)(a1 + 57); /*0x1010a8232*/
  v22 = v4; /*0x1010a8236*/
  v23 = v5; /*0x1010a823a*/
  v24 = v6; /*0x1010a823e*/
  v25 = v18; /*0x1010a8250*/
  v26 = v19; /*0x1010a8254*/
  v27 = v20; /*0x1010a825f*/
  *(_QWORD *)v28 = *(_QWORD *)v21; /*0x1010a826a*/
  *(_QWORD *)&v28[7] = *(_QWORD *)&v21[7]; /*0x1010a8275*/
  v31 = v8; /*0x1010a8279*/
  v29 = v9; /*0x1010a827c*/
  v30 = v10; /*0x1010a827f*/
  if ( v9 == 2 ) /*0x1010a8285*/
  {
    if ( !v5 ) /*0x1010a828a*/
      return v4; /*0x1010a828a*/
    while ( 1 ) /*0x1010a8290*/
    {
      v11 = 0; /*0x1010a8290*/
      while ( v4[v11] != 47 ) /*0x1010a82a5*/
      {
        if ( v5 == ++v11 ) /*0x1010a82ad*/
        {
          v11 = v5; /*0x1010a82af*/
          v12 = 0; /*0x1010a82b2*/
          goto LABEL_10; /*0x1010a82b7*/
        }
      }
      v12 = 1; /*0x1010a82c0*/
      if ( v11 ) /*0x1010a82c8*/
        break; /*0x1010a82c8*/
LABEL_12:
      v13 = v11 + v12; /*0x1010a82d6*/
      if ( v5 < v13 ) /*0x1010a82dc*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v13, v5, v5, &off_1015AE5B8, a2, a3, a4); /*0x1010a8480*/
      v4 += v13; /*0x1010a82e2*/
      v5 -= v13; /*0x1010a82e5*/
      if ( !v5 ) /*0x1010a82e8*/
      {
        v5 = 0; /*0x1010a82ea*/
        goto LABEL_15; /*0x1010a82ea*/
      }
    }
LABEL_10:
    if ( v11 == 1 && *v4 == 46 ) /*0x1010a82d4*/
      goto LABEL_12; /*0x1010a82d4*/
LABEL_15:
    v22 = v4; /*0x1010a82ec*/
    v23 = v5; /*0x1010a82f0*/
  }
  if ( v10 != 2 ) /*0x1010a82f7*/
    return v4; /*0x1010a82f7*/
  if ( v9 > 1u ) /*0x1010a8300*/
  {
    if ( v5 ) /*0x1010a8359*/
    {
      do /*0x1010a839b*/
      {
        std::path::Components::parse_next_component_back::h201dfb54389de00e(&v18, &v22); /*0x1010a8376*/
        if ( (_BYTE)v19 != 10 ) /*0x1010a8382*/
          break; /*0x1010a8382*/
        v14 = v5 - v18; /*0x1010a8387*/
        v15 = v5 == v18; /*0x1010a8387*/
        if ( v5 < v18 ) /*0x1010a838e*/
LABEL_44:
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v14, v5, &off_1015AE570, a2, a3, a4); /*0x1010a8462*/
        v23 = v5 - v18; /*0x1010a8394*/
        v5 -= v18; /*0x1010a8398*/
      }
      while ( !v15 ); /*0x1010a839b*/
    }
  }
  else
  {
    if ( v8 ) /*0x1010a8304*/
    {
      if ( v5 >= 2 ) /*0x1010a830e*/
      {
        do /*0x1010a834f*/
        {
          std::path::Components::parse_next_component_back::h201dfb54389de00e(&v18, &v22); /*0x1010a8326*/
          if ( (_BYTE)v19 != 10 ) /*0x1010a8332*/
            break; /*0x1010a8332*/
          v14 = v5 - v18; /*0x1010a8337*/
          if ( v5 < v18 ) /*0x1010a833e*/
            goto LABEL_44; /*0x1010a833e*/
          v23 = v5 - v18; /*0x1010a8344*/
          v5 -= v18; /*0x1010a8348*/
        }
        while ( v14 > 1 ); /*0x1010a834f*/
      }
      return v4; /*0x1010a834f*/
    }
    v17 = v5; /*0x1010a83c0*/
    if ( !v5 ) /*0x1010a83c6*/
      goto LABEL_39; /*0x1010a83c6*/
LABEL_30:
    if ( v5 == 1 ) /*0x1010a83d4*/
    {
      if ( *v4 == 46 ) /*0x1010a83da*/
        goto LABEL_32; /*0x1010a83da*/
LABEL_36:
      if ( v5 ) /*0x1010a8402*/
        goto LABEL_40; /*0x1010a8402*/
      return v4; /*0x1010a8402*/
    }
    if ( *v4 == 46 ) /*0x1010a83f4*/
    {
      if ( v4[1] == 47 ) /*0x1010a83fb*/
      {
LABEL_32:
        if ( v5 > 1 ) /*0x1010a83e4*/
          goto LABEL_40; /*0x1010a83e4*/
        return v4; /*0x1010a83e4*/
      }
      goto LABEL_36; /*0x1010a83fb*/
    }
    v17 = 0; /*0x1010a8410*/
LABEL_39:
    while ( v5 > v17 ) /*0x1010a8423*/
    {
LABEL_40:
      std::path::Components::parse_next_component_back::h201dfb54389de00e(&v18, &v22); /*0x1010a8429*/
      if ( (_BYTE)v19 != 10 ) /*0x1010a843b*/
        return v4; /*0x1010a843b*/
      v14 = v5 - v18; /*0x1010a8444*/
      if ( v5 < v18 ) /*0x1010a844b*/
        goto LABEL_44; /*0x1010a844b*/
      v23 = v5 - v18; /*0x1010a844d*/
      v5 -= v18; /*0x1010a8451*/
      v17 = v14; /*0x1010a8454*/
      if ( v14 ) /*0x1010a845a*/
        goto LABEL_30; /*0x1010a845a*/
    }
  }
  return v4; /*0x1010a83a5*/
}