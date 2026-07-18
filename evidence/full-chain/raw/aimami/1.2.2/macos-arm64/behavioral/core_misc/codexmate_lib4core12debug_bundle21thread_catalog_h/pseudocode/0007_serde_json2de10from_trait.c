// mac 1.2.2 NEW codexmate_lib4core12debug_bundle21thread_catalog_h 0x1006d81f0 d=1
__int64 *__fastcall serde_json::de::from_trait::hd7f835a315d0fab8(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
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

  v18 = a2[5]; /*0x1006d8205*/
  v17 = a2[4]; /*0x1006d820d*/
  v16 = a2[3]; /*0x1006d8215*/
  v15 = a2[2]; /*0x1006d821d*/
  v3 = *a2; /*0x1006d8221*/
  v14 = a2[1]; /*0x1006d8228*/
  v13 = v3; /*0x1006d822c*/
  v12[0] = 0; /*0x1006d8230*/
  v12[1] = 1; /*0x1006d8238*/
  v12[2] = 0; /*0x1006d8240*/
  v19 = 0x80; /*0x1006d8248*/
  _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::hd1fb146cdfb803a6( /*0x1006d8250*/
    a1,
    v12);
  if ( *(_BYTE *)a1 != 6 ) /*0x1006d8258*/
  {
    v11[3] = a1[3]; /*0x1006d8262*/
    v11[2] = a1[2]; /*0x1006d826a*/
    v4 = *a1; /*0x1006d826e*/
    v11[1] = a1[1]; /*0x1006d8275*/
    v11[0] = v4; /*0x1006d8279*/
    if ( v15 < v14 ) /*0x1006d8288*/
    {
      v5 = v15 + 1; /*0x1006d8291*/
      v6 = 0x100002600LL; /*0x1006d8294*/
      while ( 1 ) /*0x1006d82a0*/
      {
        v7 = *(unsigned __int8 *)(v13 + v5 - 1); /*0x1006d82a0*/
        if ( v7 > 0x20 || !_bittest64(&v6, v7) ) /*0x1006d82ab*/
          break; /*0x1006d82ab*/
        v15 = v5; /*0x1006d82b1*/
        v8 = v5 - v14 + 1; /*0x1006d82b5*/
        ++v5; /*0x1006d82ba*/
        if ( v8 == 1 ) /*0x1006d82c1*/
          goto LABEL_9; /*0x1006d82c1*/
      }
      v10[0] = 22; /*0x1006d82c5*/
      a1[1] = serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(v12, v10, v13); /*0x1006d82e0*/
      *(_BYTE *)a1 = 6; /*0x1006d82e4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v11); /*0x1006d82eb*/
    }
  }
LABEL_9:
  if ( v12[0] ) /*0x1006d82f7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006d8302*/
  return a1; /*0x1006d830a*/
}