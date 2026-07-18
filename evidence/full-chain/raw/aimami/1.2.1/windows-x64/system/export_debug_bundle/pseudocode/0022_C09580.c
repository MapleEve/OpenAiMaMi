// win 1.2.1 NEW export_debug_bundle 0x140c09580 d=1
__int64 __fastcall sub_140C09580(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  volatile signed __int64 *v4; // rsi
  volatile signed __int64 *v5; // rsi

  result = *(unsigned __int8 *)(a1 + 112); /*0x140c09593*/
  if ( *(_BYTE *)(a1 + 112) ) /*0x140c09593*/
  {
    if ( (_DWORD)result == 3 ) /*0x140c0959e*/
    {
      result = *(unsigned __int8 *)(a1 + 104); /*0x140c095a0*/
      if ( (_DWORD)result == 3 ) /*0x140c095a7*/
      {
        v4 = *(volatile signed __int64 **)(a1 + 96); /*0x140c095ea*/
        if ( sub_141221580(v4) ) /*0x140c095f1*/
          sub_14122BD90((__int64)v4); /*0x140c095fe*/
        result = a1; /*0x140c09604*/
        *(_BYTE *)(a1 + 105) = 0; /*0x140c09608*/
      }
      else if ( !*(_BYTE *)(a1 + 104) ) /*0x140c095a0*/
      {
        v2 = *(_QWORD *)(a1 + 56); /*0x140c095ad*/
        if ( v2 ) /*0x140c095b4*/
        {
          v3 = *(_QWORD *)(a1 + 64); /*0x140c095b6*/
          return sub_140001360(v3, v2, 1); /*0x140c095d5*/
        }
      }
    }
  }
  else
  {
    result = *(unsigned __int8 *)(a1 + 48); /*0x140c095bc*/
    if ( (_DWORD)result == 3 ) /*0x140c095c3*/
    {
      v5 = *(volatile signed __int64 **)(a1 + 40); /*0x140c09617*/
      if ( sub_141221580(v5) ) /*0x140c0961e*/
        sub_14122BD90((__int64)v5); /*0x140c0962b*/
      *(_BYTE *)(a1 + 49) = 0; /*0x140c09635*/
      return a1; /*0x140c09631*/
    }
    else if ( !*(_BYTE *)(a1 + 48) ) /*0x140c095bc*/
    {
      v2 = *(_QWORD *)a1; /*0x140c095c9*/
      if ( *(_QWORD *)a1 ) /*0x140c095c9*/
      {
        v3 = *(_QWORD *)(a1 + 8); /*0x140c095d1*/
        return sub_140001360(v3, v2, 1); /*0x140c095d1*/
      }
    }
  }
  return result; /*0x140c095db*/
}