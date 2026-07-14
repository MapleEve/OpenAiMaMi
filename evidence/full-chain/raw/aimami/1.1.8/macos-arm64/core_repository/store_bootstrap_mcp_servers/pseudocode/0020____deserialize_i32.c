// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x100572760 depth=2
__int64 __fastcall _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i32::hb5f8d7095dc734cd(
        __int64 a1,
        _QWORD *a2,
        double a3,
        double a4,
        double a5)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-38h]
  __int64 v23; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-28h]
  _BYTE v25[17]; // [rsp+2Fh] [rbp-11h] BYREF

  v7 = a2[4]; /*0x100572771*/
  v8 = a2[5]; /*0x100572775*/
  if ( v8 >= v7 ) /*0x10057277c*/
  {
LABEL_6:
    v23 = 5; /*0x1005727c3*/
    v15 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a2, &v23); /*0x1005727d2*/
LABEL_13:
    *(_QWORD *)(a1 + 8) = v15; /*0x100572817*/
    *(_DWORD *)a1 = 1; /*0x10057281b*/
    return a1; /*0x10057281b*/
  }
  v9 = a2[3]; /*0x10057277e*/
  v10 = v8 + 1; /*0x100572782*/
  v11 = -(__int64)v7; /*0x100572785*/
  v12 = &loc_100002600; /*0x100572788*/
  while ( 1 ) /*0x1005727a0*/
  {
    v13 = *(unsigned __int8 *)(v9 + v10 - 1); /*0x1005727a0*/
    if ( v13 > 0x2D ) /*0x1005727a9*/
      goto LABEL_9; /*0x1005727a9*/
    if ( !_bittest64((const __int64 *)&v12, v13) ) /*0x1005727ab*/
      break; /*0x1005727ab*/
    a2[5] = v10; /*0x1005727b1*/
    v14 = v11 + v10++ + 1; /*0x1005727b5*/
    if ( v14 == 1 ) /*0x1005727c1*/
      goto LABEL_6; /*0x1005727c1*/
  }
  if ( v13 == 45 ) /*0x1005727dd*/
  {
    a2[5] = v10; /*0x1005727df*/
    v16 = a2; /*0x1005727e7*/
    v17 = 0; /*0x1005727ea*/
  }
  else
  {
LABEL_9:
    if ( (unsigned __int8)(v13 - 48) >= 0xAu ) /*0x1005727f6*/
    {
      v19 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f( /*0x10057283b*/
              a2,
              (__int64)v25,
              (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_9,
              a3,
              a4,
              a5);
LABEL_16:
      *(_QWORD *)(a1 + 8) = serde_json::error::Error::fix_position::hcddea6c8e528a7ec(v19, (__int64)a2); /*0x100572840*/
      v20 = 1; /*0x10057284f*/
      goto LABEL_23; /*0x100572854*/
    }
    v16 = a2; /*0x1005727fc*/
    v17 = 1; /*0x1005727ff*/
  }
  serde_json::de::Deserializer$LT$R$GT$::parse_integer::h1ef8129122f17302(&v21, v16, v17); /*0x100572804*/
  if ( v21 == 3 ) /*0x100572811*/
  {
    v15 = (_QWORD *)v22; /*0x100572813*/
    goto LABEL_13; /*0x100572813*/
  }
  if ( (_DWORD)v21 == 1 ) /*0x10057285d*/
  {
    if ( v22 >> 31 ) /*0x100572879*/
    {
      v24 = v22; /*0x1005728a6*/
      LOBYTE(v23) = 1; /*0x1005728aa*/
      goto LABEL_26; /*0x1005728aa*/
    }
    goto LABEL_22; /*0x10057287d*/
  }
  if ( (_DWORD)v21 != 2 ) /*0x100572862*/
  {
    v24 = v22; /*0x100572888*/
    LOBYTE(v23) = 3; /*0x10057288c*/
    v19 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_type::h13d4925c1d6aa5cd( /*0x10057289f*/
            &v23,
            v25,
            &anon_3e4c14ac1826b92abbb84b981a88c995_15);
    goto LABEL_16; /*0x1005728a4*/
  }
  if ( (int)v22 != v22 ) /*0x10057286a*/
  {
    v24 = v22; /*0x10057286c*/
    LOBYTE(v23) = 2; /*0x100572870*/
LABEL_26:
    v19 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_value::h3824955b1139f3d1( /*0x1005728ae*/
            &v23,
            v25,
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_9);
    goto LABEL_16; /*0x1005728c2*/
  }
LABEL_22:
  *(_DWORD *)(a1 + 4) = v22; /*0x10057287f*/
  v20 = 0; /*0x100572882*/
LABEL_23:
  *(_DWORD *)a1 = v20; /*0x100572884*/
  return a1; /*0x100572824*/
}