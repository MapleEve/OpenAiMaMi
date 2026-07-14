// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100513a20 depth=4
// serde_json2de21Deserializer::ignore_integer
_QWORD *__fastcall serde_json::de::Deserializer$LT$R$GT$::ignore_integer::h224d1fba3358bc91(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rsi
  __int64 v3; // rcx
  char v4; // al
  unsigned __int64 v5; // rsi
  _QWORD *result; // rax
  int v7; // eax
  unsigned __int64 v8; // rsi
  int v9; // r8d
  int v10; // r8d
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned __int64 v13; // rsi
  char v14; // si
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  char v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22[3]; // [rsp+8h] [rbp-18h] BYREF

  v1 = a1[4]; /*0x100513a28*/
  v2 = a1[5]; /*0x100513a2c*/
  if ( v2 >= v1 ) /*0x100513a33*/
    goto LABEL_48; /*0x100513a33*/
  v3 = a1[3]; /*0x100513a39*/
  v4 = *(_BYTE *)(v3 + v2); /*0x100513a3d*/
  v5 = v2 + 1; /*0x100513a41*/
  a1[5] = v5; /*0x100513a44*/
  if ( v4 == 48 ) /*0x100513a4a*/
  {
    if ( v5 < v1 && (unsigned __int8)(*(_BYTE *)(v3 + v5) - 48) <= 9u ) /*0x100513a59*/
      goto LABEL_5; /*0x100513a59*/
  }
  else
  {
    if ( (unsigned __int8)(v4 - 49) > 8u ) /*0x100513a76*/
      goto LABEL_48; /*0x100513a76*/
    if ( v5 < v1 ) /*0x100513a7f*/
    {
      result = nullptr; /*0x100513a81*/
      while ( (unsigned __int8)(*(_BYTE *)(v3 + v5) - 48) <= 9u ) /*0x100513a9d*/
      {
        a1[5] = ++v5; /*0x100513aa2*/
        if ( v1 == v5 ) /*0x100513aa9*/
          return result; /*0x100513aa9*/
      }
    }
  }
  if ( v5 >= v1 ) /*0x100513ab0*/
    return nullptr; /*0x100513ab0*/
  v7 = *(unsigned __int8 *)(v3 + v5); /*0x100513ab6*/
  if ( v7 != 101 && v7 != 69 ) /*0x100513ac6*/
  {
    if ( v7 != 46 ) /*0x100513acf*/
      return nullptr; /*0x100513acf*/
    a1[5] = v5 + 1; /*0x100513ad9*/
    if ( v5 + 1 >= v1 || (unsigned __int8)(*(_BYTE *)(v3 + v5 + 1) - 48) > 9u ) /*0x100513aee*/
    {
LABEL_5:
      v22[0] = 13; /*0x100513a5b*/
      return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v22); /*0x100513a67*/
    }
    v8 = v5 + 3; /*0x100513af4*/
    do /*0x100513b1f*/
    {
      if ( 2 - v1 + v8 == 3 ) /*0x100513b08*/
      {
        a1[5] = v1; /*0x100513bf9*/
        return nullptr; /*0x100513bfd*/
      }
      v9 = *(unsigned __int8 *)(v3 + v8++ - 1); /*0x100513b0e*/
    }
    while ( (unsigned __int8)(v9 - 48) < 0xAu ); /*0x100513b1f*/
    a1[5] = v8 - 2; /*0x100513b25*/
    if ( (v9 | 0x20) != 0x65 ) /*0x100513b31*/
      return nullptr; /*0x100513b31*/
    a1[5] = v8 - 1; /*0x100513b3b*/
    if ( v8 - 1 < v1 && ((v10 = *(unsigned __int8 *)(v3 + v8 - 1), v10 == 43) || v10 == 45) ) /*0x100513b58*/
      a1[5] = v8; /*0x100513b5e*/
    else
      --v8; /*0x100513bff*/
    if ( v8 < v1 ) /*0x100513c05*/
    {
      v18 = *(_BYTE *)(v3 + v8); /*0x100513c07*/
      a1[5] = v8 + 1; /*0x100513c10*/
      if ( (unsigned __int8)(v18 - 48) <= 9u ) /*0x100513c1c*/
      {
        if ( v8 + 1 < v1 ) /*0x100513c21*/
        {
          v19 = 1 - v1; /*0x100513c29*/
          v20 = v8 + 2; /*0x100513c2c*/
          result = nullptr; /*0x100513c30*/
          do /*0x100513c53*/
          {
            if ( (unsigned __int8)(*(_BYTE *)(v3 + v20 - 1) - 48) > 9u ) /*0x100513c3d*/
              break; /*0x100513c3d*/
            a1[5] = v20; /*0x100513c43*/
            v21 = v19 + v20++ + 1; /*0x100513c47*/
          }
          while ( v21 != 2 ); /*0x100513c53*/
          return result; /*0x100513c53*/
        }
        return nullptr; /*0x100513c61*/
      }
    }
LABEL_48:
    v22[0] = 13; /*0x100513c62*/
    return (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::error::h85175ebc8366b145(a1, v22); /*0x100513c6e*/
  }
  v11 = v5 + 1; /*0x100513b67*/
  a1[5] = v5 + 1; /*0x100513b6b*/
  if ( v5 + 1 < v1 ) /*0x100513b72*/
  {
    v12 = *(unsigned __int8 *)(v3 + v11); /*0x100513b74*/
    if ( v12 == 43 || v12 == 45 ) /*0x100513b81*/
    {
      v13 = v5 + 2; /*0x100513b83*/
      a1[5] = v13; /*0x100513b87*/
      v11 = v13; /*0x100513b8b*/
    }
  }
  if ( v11 >= v1 ) /*0x100513b91*/
    goto LABEL_48; /*0x100513b91*/
  v14 = *(_BYTE *)(v3 + v11); /*0x100513b97*/
  a1[5] = v11 + 1; /*0x100513ba0*/
  if ( (unsigned __int8)(v14 - 48) > 9u ) /*0x100513bac*/
    goto LABEL_48; /*0x100513bac*/
  if ( v11 + 1 >= v1 ) /*0x100513bb5*/
    return nullptr; /*0x100513bb5*/
  v15 = 1 - v1; /*0x100513bc0*/
  v16 = v11 + 2; /*0x100513bc3*/
  result = nullptr; /*0x100513bc7*/
  do /*0x100513bf2*/
  {
    if ( (unsigned __int8)(*(_BYTE *)(v3 + v16 - 1) - 48) > 9u ) /*0x100513bdc*/
      break; /*0x100513bdc*/
    a1[5] = v16; /*0x100513be2*/
    v17 = v15 + v16++ + 1; /*0x100513be6*/
  }
  while ( v17 != 2 ); /*0x100513bf2*/
  return result; /*0x100513a6c*/
}