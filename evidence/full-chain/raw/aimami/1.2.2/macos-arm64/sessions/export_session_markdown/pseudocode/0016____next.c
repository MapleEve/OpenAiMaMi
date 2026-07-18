// mac 1.2.2 NEW export_session_markdown 0x100552580 d=1
_QWORD *__fastcall _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h46a3e152254ccfa0(
        _QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-20h] BYREF
  __int64 v7; // [rsp+8h] [rbp-18h]
  __int64 v8; // [rsp+10h] [rbp-10h]

  v6 = 0; /*0x10055258c*/
  v7 = 1; /*0x100552594*/
  v8 = 0; /*0x10055259c*/
  if ( (std::io::append_to_string::hc71aa028b9a2a7eb(&v6) & 1) != 0 ) /*0x1005525af*/
  {
    *a1 = 0x8000000000000000LL; /*0x1005525bb*/
    a1[1] = v1; /*0x1005525be*/
    if ( !v6 ) /*0x1005525c9*/
      return a1; /*0x1005525c9*/
    goto LABEL_12; /*0x1005525c9*/
  }
  if ( v1 ) /*0x1005525d0*/
  {
    v2 = v8; /*0x1005525d2*/
    if ( v8 ) /*0x1005525d9*/
    {
      if ( *(_BYTE *)(v7 + v8 - 1) == 10 ) /*0x1005525e4*/
      {
        v3 = --v8; /*0x1005525e9*/
        if ( v2 != 1 && *(_BYTE *)(v7 + v3 - 1) == 13 ) /*0x1005525f7*/
          v8 = v2 - 2; /*0x1005525fd*/
      }
    }
    a1[2] = v8; /*0x100552605*/
    v4 = v6; /*0x100552609*/
    a1[1] = v7; /*0x100552611*/
    *a1 = v4; /*0x100552615*/
  }
  else
  {
    *a1 = 0x8000000000000001LL; /*0x100552627*/
    if ( v6 ) /*0x100552631*/
LABEL_12:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100552633*/
  }
  return a1; /*0x100552644*/
}