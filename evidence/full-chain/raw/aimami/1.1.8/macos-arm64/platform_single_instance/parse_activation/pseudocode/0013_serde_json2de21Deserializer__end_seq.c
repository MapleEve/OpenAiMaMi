// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100514580 depth=3
// serde_json2de21Deserializer::end_seq
_QWORD *__fastcall serde_json::de::Deserializer$LT$R$GT$::end_seq::h8a430273f2e00f21(_QWORD *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  void *v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13[3]; // [rsp+8h] [rbp-18h] BYREF

  v1 = a1[4]; /*0x100514588*/
  v2 = a1[5]; /*0x10051458c*/
  if ( v2 >= v1 ) /*0x100514593*/
  {
LABEL_6:
    v13[0] = 2; /*0x1005145d0*/
  }
  else
  {
    v3 = a1[3]; /*0x100514595*/
    v4 = v2 + 1; /*0x100514599*/
    v5 = &loc_100002600; /*0x1005145a2*/
    while ( 1 ) /*0x1005145ac*/
    {
      v6 = *(unsigned __int8 *)(v3 + v4 - 1); /*0x1005145ac*/
      if ( v6 > 0x2C ) /*0x1005145b6*/
        goto LABEL_15; /*0x1005145b6*/
      if ( !_bittest64((const __int64 *)&v5, v6) ) /*0x1005145b8*/
        break; /*0x1005145b8*/
      a1[5] = v4; /*0x1005145be*/
      v7 = v4 - v1 + 1; /*0x1005145c2*/
      ++v4; /*0x1005145c7*/
      if ( v7 == 1 ) /*0x1005145ce*/
        goto LABEL_6; /*0x1005145ce*/
    }
    if ( v6 != 44 ) /*0x1005145eb*/
    {
LABEL_15:
      if ( (_DWORD)v6 == 93 ) /*0x10051462b*/
      {
        a1[5] = v4; /*0x10051462d*/
        return nullptr; /*0x100514638*/
      }
      goto LABEL_19; /*0x10051462b*/
    }
    a1[5] = v4; /*0x1005145ed*/
    if ( v4 < v1 ) /*0x1005145f4*/
    {
      v9 = v4 + 1; /*0x1005145f6*/
      v10 = 1 - v1; /*0x1005145ff*/
      while ( 1 ) /*0x100514602*/
      {
        v11 = *(unsigned __int8 *)(v3 + v9 - 1); /*0x100514602*/
        if ( v11 > 0x20 || !_bittest64((const __int64 *)&v5, v11) ) /*0x10051460d*/
          break; /*0x10051460d*/
        a1[5] = v9; /*0x100514613*/
        v12 = v10 + v9++ + 1; /*0x100514617*/
        if ( v12 == 2 ) /*0x100514623*/
          goto LABEL_19; /*0x100514623*/
      }
      if ( (_DWORD)v11 == 93 ) /*0x10051463c*/
      {
        v13[0] = 21; /*0x10051463e*/
        return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v13); /*0x100514646*/
      }
    }
LABEL_19:
    v13[0] = 22; /*0x100514648*/
  }
  return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v13); /*0x1005145e1*/
}