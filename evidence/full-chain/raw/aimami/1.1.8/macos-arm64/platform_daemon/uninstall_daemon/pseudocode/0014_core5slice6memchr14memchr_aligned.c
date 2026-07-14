// mac 1.1.8 BEHAVIORAL-BACKEND uninstall_daemon node 0x1010e9610 depth=2
// core5slice6memchr14memchr_aligned
__int64 __fastcall core::slice::memchr::memchr_aligned::hda948616f04379f9(
        unsigned __int8 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  v4 = ((a2 + 7) & 0xFFFFFFFFFFFFFFF8LL) - a2; /*0x1010e9622*/
  if ( !v4 ) /*0x1010e9625*/
  {
    v5 = a3 - 16; /*0x1010e9627*/
    v4 = 0; /*0x1010e962b*/
    do /*0x1010e96b3*/
    {
LABEL_10:
      if ( (((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4 + 8) /*0x1010e96aa*/
           | (0x101010101010100LL - ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4 + 8))))
          & ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4)
           | (0x101010101010100LL - ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4))))
          & 0x8080808080808080LL) != 0x8080808080808080LL )
        break; /*0x1010e96aa*/
      v4 += 16LL; /*0x1010e96ac*/
    }
    while ( v4 <= v5 ); /*0x1010e96b3*/
LABEL_12:
    result = 0; /*0x1010e96b5*/
    if ( a3 != v4 ) /*0x1010e96ba*/
    {
      while ( *(_BYTE *)(a2 + v4) != a1 ) /*0x1010e96c4*/
      {
        if ( a3 == ++v4 ) /*0x1010e96cc*/
          return result; /*0x1010e96cc*/
      }
      return 1; /*0x1010e96d3*/
    }
    return result; /*0x1010e96dc*/
  }
  if ( a3 < v4 ) /*0x1010e9632*/
    v4 = a3; /*0x1010e9632*/
  if ( !a3 ) /*0x1010e9639*/
  {
LABEL_9:
    v5 = a3 - 16; /*0x1010e9652*/
    if ( v4 > a3 - 16 ) /*0x1010e9659*/
      goto LABEL_12; /*0x1010e9659*/
    goto LABEL_10; /*0x1010e9659*/
  }
  v6 = 0; /*0x1010e963b*/
  while ( *(_BYTE *)(a2 + v6) != a1 ) /*0x1010e9644*/
  {
    if ( v4 == ++v6 ) /*0x1010e9650*/
      goto LABEL_9; /*0x1010e9650*/
  }
  return 1; /*0x1010e96ce*/
}