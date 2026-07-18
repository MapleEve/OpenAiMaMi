// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1013a0920 d=6
__int64 __fastcall core::slice::memchr::memchr_aligned::hda948616f04379f9(
        unsigned __int8 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  v4 = ((a2 + 7) & 0xFFFFFFFFFFFFFFF8LL) - a2; /*0x1013a0932*/
  if ( !v4 ) /*0x1013a0935*/
  {
    v5 = a3 - 16; /*0x1013a0937*/
    v4 = 0; /*0x1013a093b*/
    do /*0x1013a09c3*/
    {
LABEL_10:
      if ( (((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4 + 8) /*0x1013a09ba*/
           | (0x101010101010100LL - ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4 + 8))))
          & ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4)
           | (0x101010101010100LL - ((0x101010101010101LL * a1) ^ *(_QWORD *)(a2 + v4))))
          & 0x8080808080808080LL) != 0x8080808080808080LL )
        break; /*0x1013a09ba*/
      v4 += 16LL; /*0x1013a09bc*/
    }
    while ( v4 <= v5 ); /*0x1013a09c3*/
LABEL_12:
    result = 0; /*0x1013a09c5*/
    if ( a3 != v4 ) /*0x1013a09ca*/
    {
      while ( *(_BYTE *)(a2 + v4) != a1 ) /*0x1013a09d4*/
      {
        if ( a3 == ++v4 ) /*0x1013a09dc*/
          return result; /*0x1013a09dc*/
      }
      return 1; /*0x1013a09e3*/
    }
    return result; /*0x1013a09ec*/
  }
  if ( a3 < v4 ) /*0x1013a0942*/
    v4 = a3; /*0x1013a0942*/
  if ( !a3 ) /*0x1013a0949*/
  {
LABEL_9:
    v5 = a3 - 16; /*0x1013a0962*/
    if ( v4 > a3 - 16 ) /*0x1013a0969*/
      goto LABEL_12; /*0x1013a0969*/
    goto LABEL_10; /*0x1013a0969*/
  }
  v6 = 0; /*0x1013a094b*/
  while ( *(_BYTE *)(a2 + v6) != a1 ) /*0x1013a0954*/
  {
    if ( v4 == ++v6 ) /*0x1013a0960*/
      goto LABEL_9; /*0x1013a0960*/
  }
  return 1; /*0x1013a09de*/
}