// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x10050f120 depth=1
__int64 *__fastcall serde_json::de::from_trait::h28ab99648eaf8581(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  void *v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v10[3]; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+20h] [rbp-70h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v13; // [rsp+58h] [rbp-38h]
  unsigned __int64 v14; // [rsp+60h] [rbp-30h]
  unsigned __int64 v15; // [rsp+68h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-20h]
  char v17; // [rsp+78h] [rbp-18h]

  v16 = a2[3]; /*0x10050f135*/
  v15 = a2[2]; /*0x10050f13d*/
  v3 = *a2; /*0x10050f141*/
  v14 = a2[1]; /*0x10050f148*/
  v13 = v3; /*0x10050f14c*/
  v12[0] = 0; /*0x10050f150*/
  v12[1] = 1; /*0x10050f158*/
  v12[2] = 0; /*0x10050f160*/
  v17 = 0x80; /*0x10050f168*/
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$serde_json..value..Value$GT$::deserialize::h1fb2130191468038( /*0x10050f170*/
    a1,
    v12);
  if ( *(_BYTE *)a1 != 6 ) /*0x10050f178*/
  {
    v11[3] = a1[3]; /*0x10050f182*/
    v11[2] = a1[2]; /*0x10050f18a*/
    v4 = *a1; /*0x10050f18e*/
    v11[1] = a1[1]; /*0x10050f195*/
    v11[0] = v4; /*0x10050f199*/
    if ( v15 < v14 ) /*0x10050f1a8*/
    {
      v5 = v15 + 1; /*0x10050f1b1*/
      v6 = &loc_100002600; /*0x10050f1b4*/
      while ( 1 ) /*0x10050f1c0*/
      {
        v7 = *(unsigned __int8 *)(v13 + v5 - 1); /*0x10050f1c0*/
        if ( v7 > 0x20 || !_bittest64((const __int64 *)&v6, v7) ) /*0x10050f1cb*/
          break; /*0x10050f1cb*/
        v15 = v5; /*0x10050f1d1*/
        v8 = v5 - v14 + 1; /*0x10050f1d5*/
        ++v5; /*0x10050f1da*/
        if ( v8 == 1 ) /*0x10050f1e1*/
          goto LABEL_9; /*0x10050f1e1*/
      }
      v10[0] = 22; /*0x10050f1e5*/
      a1[1] = serde_json::de::Deserializer$LT$R$GT$::peek_error::h08c1b627cd1d0144(v12, v10, v13, v5); /*0x10050f200*/
      *(_BYTE *)a1 = 6; /*0x10050f204*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v11); /*0x10050f20b*/
    }
  }
LABEL_9:
  if ( v12[0] ) /*0x10050f217*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050f222*/
  return a1; /*0x10050f22a*/
}