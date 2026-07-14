// mac 1.1.8 parse_aimami_deeplink node va=0x1006a09a0 depth=1
// core3str21_::trim_end_matches
__int64 __fastcall core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h0c082587eae75803(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edi
  char v7; // r8
  char v8; // r9
  char v9; // r10
  __int64 v10; // rsi
  int v11; // r9d
  int v12; // r8d

  result = a1; /*0x1006a09a4*/
  while ( 1 ) /*0x1006a09ba*/
  {
    v4 = a2; /*0x1006a09ba*/
    if ( !a2 ) /*0x1006a09c0*/
      break; /*0x1006a09c0*/
    v5 = result + a2; /*0x1006a09c2*/
    v6 = *(char *)(result + v4 - 1); /*0x1006a09c6*/
    if ( v6 >= 0 ) /*0x1006a09cc*/
    {
      a2 = v4 - 1; /*0x1006a09b3*/
      if ( v6 != a3 ) /*0x1006a09b8*/
        return result; /*0x1006a09b8*/
    }
    else
    {
      v7 = *(_BYTE *)(v5 - 2); /*0x1006a09ce*/
      if ( v7 >= -64 ) /*0x1006a09d7*/
      {
        v10 = v5 - 2; /*0x1006a09fe*/
        v12 = v7 & 0x1F; /*0x1006a0a02*/
      }
      else
      {
        v8 = *(_BYTE *)(v5 - 3); /*0x1006a09d9*/
        if ( v8 >= -64 ) /*0x1006a09e2*/
        {
          v10 = v5 - 3; /*0x1006a0a08*/
          v11 = v8 & 0xF; /*0x1006a0a0c*/
        }
        else
        {
          v9 = *(_BYTE *)(v5 - 4); /*0x1006a09e4*/
          v10 = v5 - 4; /*0x1006a09e9*/
          v11 = ((v9 & 7) << 6) | v8 & 0x3F; /*0x1006a09f9*/
        }
        v12 = (v11 << 6) | v7 & 0x3F; /*0x1006a0a18*/
      }
      a2 = v10 - result; /*0x1006a0a25*/
      if ( ((v12 << 6) | v6 & 0x3F) != a3 ) /*0x1006a0a2a*/
        return result; /*0x1006a0a2a*/
    }
  }
  return result; /*0x1006a0a2f*/
}