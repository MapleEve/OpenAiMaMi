// mac 1.1.8 delete_sessions node va=0x10050ee60 depth=1
// serde_json2de10from_trait
__int64 *__fastcall serde_json::de::from_trait::h13c6255c2aa0fc50(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  void *v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v10[3]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-60h] BYREF
  __int64 v13; // [rsp+58h] [rbp-48h]
  unsigned __int64 v14; // [rsp+60h] [rbp-40h]
  unsigned __int64 v15; // [rsp+68h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp-30h]
  __int64 v17; // [rsp+78h] [rbp-28h]
  __int64 v18; // [rsp+80h] [rbp-20h]
  char v19; // [rsp+88h] [rbp-18h]

  v18 = a2[5]; /*0x10050ee75*/
  v17 = a2[4]; /*0x10050ee7d*/
  v16 = a2[3]; /*0x10050ee85*/
  v15 = a2[2]; /*0x10050ee8d*/
  v3 = *a2; /*0x10050ee91*/
  v14 = a2[1]; /*0x10050ee98*/
  v13 = v3; /*0x10050ee9c*/
  v12[0] = 0; /*0x10050eea0*/
  v12[1] = 1; /*0x10050eea8*/
  v12[2] = 0; /*0x10050eeb0*/
  v19 = 0x80; /*0x10050eeb8*/
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$serde_json..value..Value$GT$::deserialize::h5a36059dcb2b7542( /*0x10050eec0*/
    a1,
    v12);
  if ( *(_BYTE *)a1 != 6 ) /*0x10050eec8*/
  {
    v11[3] = a1[3]; /*0x10050eed2*/
    v11[2] = a1[2]; /*0x10050eeda*/
    v4 = *a1; /*0x10050eede*/
    v11[1] = a1[1]; /*0x10050eee5*/
    v11[0] = v4; /*0x10050eee9*/
    if ( v15 < v14 ) /*0x10050eef8*/
    {
      v5 = v15 + 1; /*0x10050ef01*/
      v6 = &loc_100002600; /*0x10050ef04*/
      while ( 1 ) /*0x10050ef10*/
      {
        v7 = *(unsigned __int8 *)(v13 + v5 - 1); /*0x10050ef10*/
        if ( v7 > 0x20 || !_bittest64((const __int64 *)&v6, v7) ) /*0x10050ef1b*/
          break; /*0x10050ef1b*/
        v15 = v5; /*0x10050ef21*/
        v8 = v5 - v14 + 1; /*0x10050ef25*/
        ++v5; /*0x10050ef2a*/
        if ( v8 == 1 ) /*0x10050ef31*/
          goto LABEL_9; /*0x10050ef31*/
      }
      v10[0] = 22; /*0x10050ef35*/
      a1[1] = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v12, v10, v13); /*0x10050ef50*/
      *(_BYTE *)a1 = 6; /*0x10050ef54*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v11); /*0x10050ef5b*/
    }
  }
LABEL_9:
  if ( v12[0] ) /*0x10050ef67*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050ef72*/
  return a1; /*0x10050ef7a*/
}