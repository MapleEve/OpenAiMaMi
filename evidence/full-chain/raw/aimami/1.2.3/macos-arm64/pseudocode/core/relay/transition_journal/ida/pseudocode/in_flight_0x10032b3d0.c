// __ZN13codexmate_lib4core5relay18transition_journal9in_flight @ 0x10032b3d0
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::in_flight::hb734cd1dd4b34015(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD v4[13]; // [rsp+8h] [rbp-68h] BYREF

  codexmate_lib::core::relay::transition_journal::read::h98e7602a0e4c21b7(v4); /*0x10032b3f0*/
  if ( !__OFSUB__(-v4[0], 1) ) /*0x10032b3ff*/
  {
    v1 = v4[3]; /*0x10032b40d*/
    v2 = v4[4]; /*0x10032b411*/
    if ( v4[2] == 8 ) /*0x10032b419*/
    {
      if ( *(_QWORD *)v4[1] != 0x676E697972746572LL ) /*0x10032b4b9*/
        goto LABEL_8; /*0x10032b4b9*/
    }
    else
    {
      if ( v4[2] != 11 ) /*0x10032b423*/
      {
        if ( v4[2] == 14 && !(*(_QWORD *)v4[1] ^ 0x676E6970706F7473LL | *(_QWORD *)(v4[1] + 6LL) ^ 0x7865646F635F676ELL) ) /*0x10032b446*/
          goto LABEL_15; /*0x10032b449*/
        goto LABEL_8; /*0x10032b449*/
      }
      if ( *(_QWORD *)v4[1] ^ 0x6C69636E6F636572LL | *(_QWORD *)(v4[1] + 3LL) ^ 0x676E696C69636E6FLL ) /*0x10032b468*/
      {
LABEL_8:
        if ( v4[0] ) /*0x10032b470*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4[1], v4[0], 1); /*0x10032b477*/
        if ( 2 * v1 ) /*0x10032b47c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v1, 1); /*0x10032b494*/
        goto LABEL_12; /*0x10032b494*/
      }
    }
LABEL_15:
    qmemcpy(a1, v4, 0x48u); /*0x10032b4c7*/
    return a1; /*0x10032b4c7*/
  }
LABEL_12:
  *a1 = 0x8000000000000000LL; /*0x10032b499*/
  return a1; /*0x10032b49f*/
}