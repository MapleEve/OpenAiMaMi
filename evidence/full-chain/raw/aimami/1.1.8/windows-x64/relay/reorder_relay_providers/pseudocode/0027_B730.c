// win 1.1.8 reorder_relay_providers node va=0x14001b730 depth=2
// B730
__int64 __fastcall sub_14001B730(__int64 a1, __int64 a2)
{
  _WORD *v4; // rax
  _WORD *v5; // r14
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  __int64 result; // rax

  nullsub_1(); /*0x14001b74d*/
  v4 = (_WORD *)sub_140001360(2, 1); /*0x14001b75c*/
  if ( !v4 ) /*0x14001b764*/
    sub_1412AD46B(1, 2); /*0x14001b81a*/
  v5 = v4; /*0x14001b76a*/
  *v4 = 27503; /*0x14001b76d*/
  nullsub_1(); /*0x14001b772*/
  v6 = (_DWORD *)sub_140001360(7, 1); /*0x14001b781*/
  if ( !v6 ) /*0x14001b789*/
    sub_1412AD46B(1, 7); /*0x14001b834*/
  v7 = v6; /*0x14001b78f*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x14001b792*/
  *v6 = 1667462483; /*0x14001b799*/
  result = sub_1412762D0(a1 + 72, a2, 344); /*0x14001b7ac*/
  *(_DWORD *)(a1 + 416) = 1; /*0x14001b7b1*/
  *(_BYTE *)(a1 + 420) = 1; /*0x14001b7bb*/
  *(_QWORD *)a1 = 2; /*0x14001b7c2*/
  *(_QWORD *)(a1 + 8) = v5; /*0x14001b7c9*/
  *(_QWORD *)(a1 + 16) = 2; /*0x14001b7cd*/
  *(_QWORD *)(a1 + 24) = 7; /*0x14001b7d5*/
  *(_QWORD *)(a1 + 32) = v7; /*0x14001b7dd*/
  *(_QWORD *)(a1 + 40) = 7; /*0x14001b7e1*/
  *(_QWORD *)(a1 + 48) = 0; /*0x14001b7e9*/
  *(_QWORD *)(a1 + 56) = 8; /*0x14001b7f1*/
  *(_QWORD *)(a1 + 64) = 0; /*0x14001b7f9*/
  return result; /*0x14001b801*/
}