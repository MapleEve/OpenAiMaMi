// spine node va=0x1010cc3c0 _::next
__int64 __fastcall _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(
        __int64 a1)
{
  __int128 v1; // xmm0
  _BYTE __dst[1040]; // [rsp+8h] [rbp-858h] BYREF
  int v4; // [rsp+418h] [rbp-448h] BYREF
  __int128 v5; // [rsp+420h] [rbp-440h]
  _BYTE __src[1040]; // [rsp+430h] [rbp-430h] BYREF
  __int128 v7; // [rsp+840h] [rbp-20h]

  _$LT$std..sys..fs..unix..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf943974358f34bb(&v4); /*0x1010cc3d6*/
  if ( v4 == 1 ) /*0x1010cc3e2*/
  {
    v1 = v5; /*0x1010cc3e4*/
    if ( (_QWORD)v5 ) /*0x1010cc3f3*/
    {
      v7 = v5; /*0x1010cc408*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x1010cc40c*/
      v1 = v5; /*0x1010cc411*/
    }
    *(_OWORD *)(a1 + 8) = v1; /*0x1010cc415*/
    memcpy((void *)(a1 + 24), __dst, 0x410u); /*0x1010cc429*/
    *(_QWORD *)a1 = 1; /*0x1010cc42e*/
  }
  else
  {
    *(_QWORD *)a1 = 0; /*0x1010cc437*/
  }
  return a1; /*0x1010cc441*/
}