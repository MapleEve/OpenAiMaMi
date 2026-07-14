// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_installed_skills node 0x1005692f0 depth=2
char __fastcall _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::h2382fe6e42f05cc2(
        char *a1,
        _BYTE *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  void *v7; // r8
  unsigned __int64 v8; // r11
  __int64 v9; // r11
  char *v10; // rbx
  char result; // al
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16[4]; // [rsp+0h] [rbp-20h] BYREF

  v2 = *(_QWORD *)a2; /*0x1005692f9*/
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 32LL); /*0x1005692fc*/
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 40LL); /*0x100569300*/
  if ( v4 >= v3 ) /*0x100569307*/
  {
LABEL_6:
    v16[0] = 3; /*0x100569344*/
  }
  else
  {
    v5 = *(_QWORD *)(v2 + 24); /*0x100569309*/
    v6 = v4 + 1; /*0x10056930d*/
    v7 = &loc_100002600; /*0x100569316*/
    while ( 1 ) /*0x100569320*/
    {
      v8 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x100569320*/
      if ( v8 > 0x20 || !_bittest64((const __int64 *)&v7, v8) ) /*0x10056932c*/
        break; /*0x10056932c*/
      *(_QWORD *)(v2 + 40) = v6; /*0x100569332*/
      v9 = v6 - v3 + 1; /*0x100569336*/
      ++v6; /*0x10056933b*/
      if ( v9 == 1 ) /*0x100569342*/
        goto LABEL_6; /*0x100569342*/
    }
    if ( (_DWORD)v8 == 125 ) /*0x10056936a*/
    {
      a1[1] = 0; /*0x10056936c*/
LABEL_23:
      result = 0; /*0x1005693e1*/
      goto LABEL_24; /*0x1005693e1*/
    }
    if ( a2[8] ) /*0x100569372*/
    {
      a2[8] = 0; /*0x100569378*/
      if ( (_BYTE)v8 == 34 ) /*0x100569380*/
      {
LABEL_22:
        a1[1] = 1; /*0x1005693dd*/
        goto LABEL_23; /*0x1005693dd*/
      }
      v16[0] = 17; /*0x100569382*/
    }
    else if ( (_BYTE)v8 == 44 ) /*0x100569390*/
    {
      *(_QWORD *)(v2 + 40) = v6; /*0x100569392*/
      if ( v6 < v3 ) /*0x100569399*/
      {
        v12 = v6 + 1; /*0x10056939b*/
        v13 = 1 - v3; /*0x1005693a3*/
        while ( 1 ) /*0x1005693a6*/
        {
          v14 = *(unsigned __int8 *)(v5 + v12 - 1); /*0x1005693a6*/
          if ( v14 > 0x22 ) /*0x1005693b0*/
            break; /*0x1005693b0*/
          if ( !_bittest64((const __int64 *)&v7, v14) ) /*0x1005693b6*/
          {
            if ( v14 == 34 ) /*0x1005693db*/
              goto LABEL_22; /*0x1005693db*/
            break; /*0x1005693db*/
          }
          *(_QWORD *)(v2 + 40) = v12; /*0x1005693b8*/
          v15 = v13 + v12++ + 1; /*0x1005693bc*/
          if ( v15 == 2 ) /*0x1005693c8*/
            goto LABEL_20; /*0x1005693c8*/
        }
        v10 = a1; /*0x1005693ec*/
        if ( (_DWORD)v14 == 125 ) /*0x1005693f3*/
          v16[0] = 21; /*0x1005693f5*/
        else
          v16[0] = 17; /*0x100569413*/
        goto LABEL_8; /*0x100569401*/
      }
LABEL_20:
      v16[0] = 5; /*0x1005693ca*/
    }
    else
    {
      v16[0] = 8; /*0x100569406*/
    }
  }
  v10 = a1; /*0x100569350*/
LABEL_8:
  a1 = v10; /*0x100569353*/
  *((_QWORD *)v10 + 1) = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v2, v16); /*0x10056935e*/
  result = 1; /*0x100569362*/
LABEL_24:
  *a1 = result; /*0x1005693e3*/
  return result; /*0x1005693e5*/
}