// spine node va=0x1010cd130 _::next
_QWORD *__fastcall _$LT$std..sys..fs..unix..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf943974358f34bb(
        _QWORD *a1,
        __int64 a2)
{
  volatile signed __int64 *v2; // r13
  __int64 v3; // rax
  volatile signed __int64 *__src[132]; // [rsp+0h] [rbp-450h] BYREF
  dirent *v6[6]; // [rsp+420h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a2 + 8) ) /*0x1010cd147*/
  {
    *a1 = 0; /*0x1010cd14d*/
    return a1; /*0x1010cd154*/
  }
  v2 = *(volatile signed __int64 **)a2; /*0x1010cd15c*/
  if ( _InterlockedIncrement64(*(volatile signed __int64 **)a2) <= 0 ) /*0x1010cd164*/
    BUG(); /*0x1010cd28d*/
  __src[0] = v2; /*0x1010cd16a*/
  __bzero(&__src[1], 1048); /*0x1010cd180*/
  v6[0] = nullptr; /*0x1010cd185*/
  LODWORD(v3) = readdir_r_INODE64(*((DIR **)v2 + 5), (dirent *)&__src[1], v6); /*0x1010cd198*/
  if ( (_DWORD)v3 ) /*0x1010cd19f*/
  {
LABEL_5:
    if ( !v6[0] ) /*0x1010cd1a6*/
      *(_BYTE *)(a2 + 8) = 1; /*0x1010cd1a8*/
    a1[1] = 0; /*0x1010cd1b5*/
    a1[2] = (v3 << 32) | 2; /*0x1010cd1bd*/
    *a1 = 1; /*0x1010cd1c6*/
    if ( !_InterlockedDecrement64(__src[0]) ) /*0x1010cd1d0*/
LABEL_8:
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__src); /*0x1010cd1da*/
  }
  else
  {
    while ( v6[0] ) /*0x1010cd221*/
    {
      if ( WORD1(__src[3]) == 1 ) /*0x1010cd22e*/
      {
        if ( BYTE5(__src[3]) != 46 ) /*0x1010cd207*/
          goto LABEL_16; /*0x1010cd207*/
      }
      else if ( WORD1(__src[3]) != 2 || *(unsigned __int16 *)((char *)&__src[3] + 5) != 11822 ) /*0x1010cd242*/
      {
LABEL_16:
        memcpy(a1 + 1, __src, 0x420u); /*0x1010cd244*/
        *a1 = 1; /*0x1010cd259*/
        return a1; /*0x1010cd260*/
      }
      LODWORD(v3) = readdir_r_INODE64(*((DIR **)v2 + 5), (dirent *)&__src[1], v6); /*0x1010cd213*/
      if ( (_DWORD)v3 ) /*0x1010cd21a*/
        goto LABEL_5; /*0x1010cd21a*/
    }
    *a1 = 0; /*0x1010cd264*/
    if ( !_InterlockedDecrement64(__src[0]) ) /*0x1010cd272*/
      goto LABEL_8; /*0x1010cd272*/
  }
  return a1; /*0x1010cd27b*/
}