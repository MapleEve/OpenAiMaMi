// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100514410 depth=3
// serde_json2de21Deserializer::end_map
_QWORD *__fastcall serde_json::de::Deserializer$LT$R$GT$::end_map::hbe0dd76bfbe93b26(_QWORD *a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // r8
  __int64 v10[3]; // [rsp+8h] [rbp-18h] BYREF

  v1 = a1[4]; /*0x100514418*/
  v2 = a1[5]; /*0x10051441c*/
  if ( v2 >= v1 ) /*0x100514423*/
  {
LABEL_6:
    v10[0] = 3; /*0x10051445d*/
    return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v10); /*0x100514473*/
  }
  v3 = a1[3]; /*0x100514425*/
  v4 = v2 + 1; /*0x100514429*/
  v5 = -(__int64)v1; /*0x10051442c*/
  v6 = &loc_100002600; /*0x10051442f*/
  while ( 1 ) /*0x100514439*/
  {
    v7 = *(unsigned __int8 *)(v3 + v4 - 1); /*0x100514439*/
    if ( v7 > 0x2C ) /*0x100514443*/
      break; /*0x100514443*/
    if ( !_bittest64((const __int64 *)&v6, v7) ) /*0x100514449*/
    {
      if ( v7 == 44 ) /*0x100514478*/
      {
        v10[0] = 21; /*0x10051447a*/
        return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v10); /*0x100514482*/
      }
      break; /*0x100514478*/
    }
    a1[5] = v4; /*0x10051444b*/
    v8 = v5 + v4++ + 1; /*0x10051444f*/
    if ( v8 == 1 ) /*0x10051445b*/
      goto LABEL_6; /*0x10051445b*/
  }
  if ( (_DWORD)v7 != 125 ) /*0x100514488*/
  {
    v10[0] = 22; /*0x100514496*/
    return serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a1, v10); /*0x10051449e*/
  }
  a1[5] = v4; /*0x10051448a*/
  return nullptr; /*0x10051446e*/
}