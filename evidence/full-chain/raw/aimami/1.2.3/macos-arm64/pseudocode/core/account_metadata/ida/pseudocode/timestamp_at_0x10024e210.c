// __ZN13codexmate_lib4core16account_metadata12timestamp_at @ 0x10024e210
__int64 __fastcall codexmate_lib::core::account_metadata::timestamp_at::h176b86e27b6b7357(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE *v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  _BYTE *v17; // rsi
  __int64 v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // kr00_8
  unsigned int v25; // r9d
  bool v26; // of
  __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // kr10_8
  unsigned int v30; // edi
  int v32; // [rsp+8h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+Ch] [rbp-34h]

  v4 = 0; /*0x10024e235*/
  while ( 1 ) /*0x10024e26a*/
  {
    v5 = (_QWORD *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x10024e26a*/
                     a1,
                     *(_QWORD *)(a2 + v4),
                     *(_QWORD *)(a2 + v4 + 8));
    if ( !v5 ) /*0x10024e272*/
      goto LABEL_3; /*0x10024e272*/
    v6 = *(unsigned __int8 *)v5; /*0x10024e274*/
    if ( v6 == 3 ) /*0x10024e27a*/
      break; /*0x10024e27a*/
    if ( v6 == 2 ) /*0x10024e27f*/
    {
      v7 = v5[1]; /*0x10024e281*/
      if ( v7 ) /*0x10024e288*/
      {
        if ( (_DWORD)v7 != 1 ) /*0x10024e291*/
          goto LABEL_3; /*0x10024e291*/
        v8 = v5[2]; /*0x10024e293*/
      }
      else
      {
        v8 = v5[2]; /*0x10024e36d*/
        if ( v8 < 0 ) /*0x10024e374*/
          goto LABEL_3; /*0x10024e374*/
      }
LABEL_49:
      if ( v8 > 10000000000LL ) /*0x10024e4c0*/
        v8 /= 0x3E8uLL; /*0x10024e4dd*/
      if ( v8 > 0 ) /*0x10024e23c*/
        return 1; /*0x10024e23c*/
    }
LABEL_3:
    v4 += 16; /*0x10024e250*/
    if ( v4 == 48 ) /*0x10024e258*/
      return 0; /*0x10024e4e8*/
  }
  v9 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v5[2], v5[3]); /*0x10024e2a8*/
  if ( !v10 ) /*0x10024e2b0*/
    goto LABEL_14; /*0x10024e2b0*/
  if ( v10 == 1 ) /*0x10024e2b6*/
  {
    v11 = (unsigned __int8)*v9; /*0x10024e2bc*/
    if ( v11 == 43 || v11 == 45 ) /*0x10024e2c7*/
      goto LABEL_14; /*0x10024e2c7*/
  }
  else
  {
    LOBYTE(v11) = *v9; /*0x10024e37f*/
  }
  if ( (_BYTE)v11 != 45 ) /*0x10024e385*/
  {
    v16 = v10; /*0x10024e38a*/
    v17 = v9; /*0x10024e38d*/
    if ( (unsigned __int8)v11 == 43 ) /*0x10024e393*/
    {
      v17 = v9 + 1; /*0x10024e398*/
      v16 = v10 - 1; /*0x10024e39e*/
    }
    if ( v16 >= 0x10 ) /*0x10024e3a5*/
    {
      v22 = 0; /*0x10024e446*/
      v8 = 0; /*0x10024e449*/
      while ( 1 ) /*0x10024e450*/
      {
        v24 = v8; /*0x10024e450*/
        v23 = 10 * v8; /*0x10024e450*/
        if ( !is_mul_ok(0xAu, v24) ) /*0x10024e450*/
          goto LABEL_14; /*0x10024e473*/
        v25 = (unsigned __int8)v17[v22] - 48; /*0x10024e45f*/
        if ( v25 > 9 ) /*0x10024e467*/
          goto LABEL_14; /*0x10024e473*/
        v26 = __OFADD__(v25, v23); /*0x10024e470*/
        v8 = v25 + v23; /*0x10024e470*/
        if ( v26 ) /*0x10024e473*/
          goto LABEL_14; /*0x10024e473*/
        if ( v16 == ++v22 ) /*0x10024e47f*/
          goto LABEL_49; /*0x10024e47f*/
      }
    }
    if ( v16 ) /*0x10024e3ae*/
    {
      v18 = 0; /*0x10024e3b4*/
      v8 = 0; /*0x10024e3b7*/
      while ( 1 ) /*0x10024e3c5*/
      {
        v19 = (unsigned __int8)v17[v18] - 48; /*0x10024e3c5*/
        if ( v19 > 9 ) /*0x10024e3cd*/
          goto LABEL_14; /*0x10024e3cd*/
        v8 = v19 + 10 * v8; /*0x10024e3da*/
        if ( v16 == ++v18 ) /*0x10024e3e4*/
          goto LABEL_49; /*0x10024e3e4*/
      }
    }
    goto LABEL_3; /*0x10024e3ae*/
  }
  if ( v10 < 0x11 ) /*0x10024e3fe*/
  {
    if ( v10 != 1 ) /*0x10024e40a*/
    {
      v20 = 1; /*0x10024e410*/
      v8 = 0; /*0x10024e415*/
      while ( 1 ) /*0x10024e424*/
      {
        v21 = (unsigned __int8)v9[v20] - 48; /*0x10024e424*/
        if ( v21 > 9 ) /*0x10024e42a*/
          goto LABEL_14; /*0x10024e42a*/
        v8 = 10 * v8 - v21; /*0x10024e439*/
        if ( v10 == ++v20 ) /*0x10024e442*/
          goto LABEL_49; /*0x10024e442*/
      }
    }
    goto LABEL_3; /*0x10024e40a*/
  }
  v27 = 1; /*0x10024e483*/
  v8 = 0; /*0x10024e488*/
  while ( 1 ) /*0x10024e490*/
  {
    v29 = v8; /*0x10024e490*/
    v28 = 10 * v8; /*0x10024e490*/
    if ( !is_mul_ok(0xAu, v29) ) /*0x10024e490*/
      break; /*0x10024e490*/
    v30 = (unsigned __int8)v9[v27] - 48; /*0x10024e49e*/
    if ( v30 > 9 ) /*0x10024e4a4*/
      break; /*0x10024e4a4*/
    v26 = __OFSUB__(v28, v30); /*0x10024e4ac*/
    v8 = v28 - v30; /*0x10024e4ac*/
    if ( v26 ) /*0x10024e4af*/
      break; /*0x10024e4af*/
    if ( v10 == ++v27 ) /*0x10024e4bb*/
      goto LABEL_49; /*0x10024e4bb*/
  }
LABEL_14:
  chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x10024e2cd*/
    &v32,
    v9,
    v10);
  if ( !v32 ) /*0x10024e2dd*/
    goto LABEL_3; /*0x10024e2dd*/
  v12 = (v32 >> 13) - 1; /*0x10024e2e8*/
  v13 = 0; /*0x10024e2eb*/
  if ( v32 >> 13 <= 0 ) /*0x10024e2ef*/
  {
    v14 = (1 - (v32 >> 13)) / 0x190u + 1; /*0x10024e303*/
    v12 += 400 * v14; /*0x10024e30b*/
    v13 = -146097 * v14; /*0x10024e30d*/
  }
  v15 = 86400LL /*0x10024e351*/
      * (int)(((v12 / 100) >> 2) + ((1461 * v12) >> 2) + v13 + (((unsigned int)v32 >> 4) & 0x1FF) - v12 / 100 - 719163);
  if ( (v33 + v15 < 0) ^ __OFADD__(v33, v15) | (v33 + v15 == 0) ) /*0x10024e35d*/
    goto LABEL_3; /*0x10024e362*/
  return 1; /*0x10024e4f2*/
}