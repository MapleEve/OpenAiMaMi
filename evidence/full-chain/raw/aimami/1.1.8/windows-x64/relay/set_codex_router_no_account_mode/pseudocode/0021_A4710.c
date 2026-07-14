// win 1.1.8 set_codex_router_no_account_mode node va=0x1409a4710 depth=1
// A4710
volatile signed __int64 *__fastcall sub_1409A4710(__int64 a1)
{
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // [rsp+20h] [rbp-10h]

  result = (volatile signed __int64 *)*(unsigned __int8 *)(a1 + 672); /*0x1409a4727*/
  if ( *(_BYTE *)(a1 + 672) ) /*0x1409a4727*/
  {
    if ( (_DWORD)result != 3 ) /*0x1409a4735*/
      return result; /*0x1409a4735*/
    result = (volatile signed __int64 *)*(unsigned __int8 *)(a1 + 666); /*0x1409a473b*/
    if ( *(_BYTE *)(a1 + 666) ) /*0x1409a473b*/
    {
      if ( (_DWORD)result == 3 ) /*0x1409a474d*/
      {
        v6 = a1; /*0x1409a4753*/
        v2 = *(volatile signed __int64 **)(a1 + 656); /*0x1409a4757*/
        v3 = 496; /*0x1409a4767*/
        v4 = 668; /*0x1409a476c*/
        v5 = 667; /*0x1409a4771*/
        if ( sub_140EE8B80(v2) ) /*0x1409a4761*/
          goto LABEL_10; /*0x1409a4779*/
        goto LABEL_11; /*0x1409a4779*/
      }
      return result; /*0x1409a474d*/
    }
    a1 += 336; /*0x1409a47e4*/
    return sub_1400453B0(a1); /*0x1409a47f5*/
  }
  result = (volatile signed __int64 *)*(unsigned __int8 *)(a1 + 330); /*0x1409a4786*/
  if ( !*(_BYTE *)(a1 + 330) ) /*0x1409a478f*/
    return sub_1400453B0(a1); /*0x1409a478f*/
  if ( (_DWORD)result == 3 ) /*0x1409a4794*/
  {
    v6 = a1; /*0x1409a4796*/
    v2 = *(volatile signed __int64 **)(a1 + 320); /*0x1409a479a*/
    v3 = 160; /*0x1409a47aa*/
    v4 = 332; /*0x1409a47af*/
    v5 = 331; /*0x1409a47b4*/
    if ( sub_140EE8B80(v2) ) /*0x1409a47a4*/
LABEL_10:
      sub_140EE5BB0((__int64)v2); /*0x1409a47be*/
LABEL_11:
    *(_BYTE *)(v6 + v5) = 0; /*0x1409a47c7*/
    *(_BYTE *)(v6 + v4) = 0; /*0x1409a47d0*/
    return sub_1400453B0(v3 + v6); /*0x1409a47d7*/
  }
  return result; /*0x1409a47d9*/
}