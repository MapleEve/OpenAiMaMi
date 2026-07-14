// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100569850 depth=3
// _::next_element_seed16has_next_element
char __fastcall _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1(
        char *a1,
        _BYTE *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  void *v8; // r8
  unsigned __int64 v9; // r11
  __int64 v10; // r11
  char *v11; // rbx
  _QWORD *v12; // rax
  char result; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17[4]; // [rsp+0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)a2; /*0x10056985c*/
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 32LL); /*0x10056985f*/
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 40LL); /*0x100569863*/
  if ( v5 >= v4 ) /*0x10056986a*/
  {
LABEL_6:
    v17[0] = 2; /*0x1005698b4*/
    v11 = a1; /*0x1005698c0*/
  }
  else
  {
    v6 = *(_QWORD *)(v3 + 24); /*0x10056986c*/
    v7 = v5 + 1; /*0x100569870*/
    v8 = &loc_100002600; /*0x100569879*/
    while ( 1 ) /*0x100569890*/
    {
      v9 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x100569890*/
      if ( v9 > 0x20 || !_bittest64((const __int64 *)&v8, v9) ) /*0x10056989c*/
        break; /*0x10056989c*/
      *(_QWORD *)(v3 + 40) = v7; /*0x1005698a2*/
      v10 = v7 - v4 + 1; /*0x1005698a6*/
      ++v7; /*0x1005698ab*/
      if ( v10 == 1 ) /*0x1005698b2*/
        goto LABEL_6; /*0x1005698b2*/
    }
    if ( (_DWORD)v9 == 93 ) /*0x1005698d7*/
    {
      a1[1] = 0; /*0x1005698d9*/
LABEL_21:
      result = 0; /*0x100569949*/
      goto LABEL_22; /*0x100569949*/
    }
    if ( a2[8] ) /*0x1005698df*/
    {
      a2[8] = 0; /*0x1005698e5*/
      a1[1] = 1; /*0x1005698e9*/
      goto LABEL_21; /*0x1005698ed*/
    }
    v11 = a1; /*0x1005698ef*/
    if ( (_BYTE)v9 == 44 ) /*0x1005698f6*/
    {
      *(_QWORD *)(v3 + 40) = v7; /*0x1005698f8*/
      if ( v7 >= v4 ) /*0x1005698ff*/
      {
LABEL_18:
        v17[0] = 5; /*0x10056992f*/
      }
      else
      {
        v14 = v7 + 1; /*0x100569901*/
        while ( 1 ) /*0x10056990c*/
        {
          v15 = *(unsigned __int8 *)(v6 + v14 - 1); /*0x10056990c*/
          if ( v15 > 0x20 || !_bittest64((const __int64 *)&v8, v15) ) /*0x100569917*/
            break; /*0x100569917*/
          *(_QWORD *)(v3 + 40) = v14; /*0x10056991d*/
          v16 = 1 - v4 + v14++ + 1; /*0x100569921*/
          if ( v16 == 2 ) /*0x10056992d*/
            goto LABEL_18; /*0x10056992d*/
        }
        if ( (_DWORD)v15 != 93 ) /*0x100569940*/
        {
          a1[1] = 1; /*0x100569945*/
          goto LABEL_21; /*0x100569945*/
        }
        v17[0] = 21; /*0x10056995e*/
      }
    }
    else
    {
      v17[0] = 7; /*0x100569954*/
    }
  }
  v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v3, v17); /*0x1005698c3*/
  a1 = v11; /*0x1005698c8*/
  *((_QWORD *)v11 + 1) = v12; /*0x1005698cb*/
  result = 1; /*0x1005698cf*/
LABEL_22:
  *a1 = result; /*0x10056994b*/
  return result; /*0x10056994d*/
}