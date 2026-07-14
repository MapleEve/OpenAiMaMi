// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x10049f240 depth=3
// serde_core2de5impls87_::deserialize
unsigned __int64 *__fastcall serde_core::de::impls::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$core..option..Option$LT$T$GT$$GT$::deserialize::ha9f66098727b1eaa(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  void *v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  char v10; // di
  char v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-18h]
  unsigned __int64 v17; // [rsp+10h] [rbp-10h]

  v3 = a2[4]; /*0x10049f24c*/
  v4 = a2[5]; /*0x10049f250*/
  if ( v4 >= v3 ) /*0x10049f257*/
    goto LABEL_15; /*0x10049f257*/
  v5 = a2[3]; /*0x10049f25d*/
  v6 = v4 + 2; /*0x10049f261*/
  v7 = &loc_100002600; /*0x10049f26b*/
  while ( 1 ) /*0x10049f280*/
  {
    v8 = *(unsigned __int8 *)(v5 + v6 - 2); /*0x10049f280*/
    if ( v8 > 0x20 || !_bittest64((const __int64 *)&v7, v8) ) /*0x10049f28c*/
      break; /*0x10049f28c*/
    a2[5] = v6 - 1; /*0x10049f296*/
    v9 = v6 - v3 + 1; /*0x10049f29a*/
    ++v6; /*0x10049f29f*/
    if ( v9 == 2 ) /*0x10049f2a6*/
      goto LABEL_15; /*0x10049f2a6*/
  }
  if ( (_DWORD)v8 != 110 ) /*0x10049f2ae*/
  {
LABEL_15:
    _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6( /*0x10049f317*/
      &v15,
      a2);
    if ( !__OFSUB__(0, v15) ) /*0x10049f326*/
    {
      a1[2] = v17; /*0x10049f343*/
      v13 = v15; /*0x10049f347*/
      a1[1] = v16; /*0x10049f34f*/
      goto LABEL_19; /*0x10049f34f*/
    }
    a1[1] = v16; /*0x10049f336*/
    goto LABEL_17; /*0x10049f336*/
  }
  a2[5] = v6 - 1; /*0x10049f2b4*/
  if ( v6 - 1 >= v3 ) /*0x10049f2bb*/
    goto LABEL_20; /*0x10049f2bb*/
  v10 = *(_BYTE *)(v5 + v6 - 1); /*0x10049f2c1*/
  a2[5] = v6; /*0x10049f2c6*/
  if ( v10 != 117 ) /*0x10049f2ce*/
    goto LABEL_22; /*0x10049f2ce*/
  if ( v6 >= v3 ) /*0x10049f2d7*/
  {
LABEL_20:
    v15 = 5; /*0x10049f360*/
LABEL_21:
    a1[1] = serde_json::de::Deserializer$LT$R$GT$::error::h85175ebc8366b145(a2, &v15); /*0x10049f368*/
LABEL_17:
    v13 = 0x8000000000000001LL; /*0x10049f33a*/
    goto LABEL_19; /*0x10049f33d*/
  }
  v11 = *(_BYTE *)(v5 + v6); /*0x10049f2dd*/
  a2[5] = v6 + 1; /*0x10049f2e6*/
  if ( v11 != 108 ) /*0x10049f2ee*/
  {
LABEL_22:
    v15 = 9; /*0x10049f387*/
    goto LABEL_21; /*0x10049f38f*/
  }
  if ( v6 + 1 >= v3 ) /*0x10049f2f7*/
    goto LABEL_20; /*0x10049f2f7*/
  v12 = *(_BYTE *)(v5 + v6 + 1); /*0x10049f2f9*/
  a2[5] = v6 + 2; /*0x10049f302*/
  if ( v12 != 108 ) /*0x10049f309*/
    goto LABEL_22; /*0x10049f309*/
  v13 = 0x8000000000000000LL; /*0x10049f30b*/
LABEL_19:
  *a1 = v13; /*0x10049f353*/
  return a1; /*0x10049f359*/
}