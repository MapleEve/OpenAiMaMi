// win 1.2.1 NEW migrate_session_worktree 0x140c09460 d=1
__int64 __fastcall sub_140C09460(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  volatile signed __int64 *v4; // rsi
  volatile signed __int64 *v5; // rsi

  result = *(unsigned __int8 *)(a1 + 144); /*0x140c09473*/
  if ( *(_BYTE *)(a1 + 144) ) /*0x140c09473*/
  {
    if ( (_DWORD)result == 3 ) /*0x140c09481*/
    {
      result = *(unsigned __int8 *)(a1 + 136); /*0x140c09483*/
      if ( (_DWORD)result == 3 ) /*0x140c0948d*/
      {
        v4 = *(volatile signed __int64 **)(a1 + 128); /*0x140c094d0*/
        if ( sub_141221580(v4) ) /*0x140c094da*/
          sub_14122BD90((__int64)v4); /*0x140c094e7*/
        result = a1; /*0x140c094ed*/
        *(_WORD *)(a1 + 137) = 0; /*0x140c094f1*/
      }
      else if ( !*(_BYTE *)(a1 + 136) ) /*0x140c09483*/
      {
        v2 = *(_QWORD *)(a1 + 72); /*0x140c09493*/
        if ( v2 ) /*0x140c0949a*/
        {
          v3 = *(_QWORD *)(a1 + 80); /*0x140c0949c*/
          return sub_140001360(v3, v2, 1); /*0x140c094bb*/
        }
      }
    }
  }
  else
  {
    result = *(unsigned __int8 *)(a1 + 64); /*0x140c094a2*/
    if ( (_DWORD)result == 3 ) /*0x140c094a9*/
    {
      v5 = *(volatile signed __int64 **)(a1 + 56); /*0x140c09505*/
      if ( sub_141221580(v5) ) /*0x140c0950c*/
        sub_14122BD90((__int64)v5); /*0x140c09519*/
      *(_WORD *)(a1 + 65) = 0; /*0x140c09523*/
      return a1; /*0x140c0951f*/
    }
    else if ( !*(_BYTE *)(a1 + 64) ) /*0x140c094a2*/
    {
      v2 = *(_QWORD *)a1; /*0x140c094af*/
      if ( *(_QWORD *)a1 ) /*0x140c094af*/
      {
        v3 = *(_QWORD *)(a1 + 8); /*0x140c094b7*/
        return sub_140001360(v3, v2, 1); /*0x140c094b7*/
      }
    }
  }
  return result; /*0x140c094c1*/
}