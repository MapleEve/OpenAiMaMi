// router_unlock_auth_readiness_core_sys @ 0x14060e6b0 size=180 proto=__int64 __fastcall(__int64, __int64)
__int64 __fastcall router_unlock_auth_readiness_core_sys(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  _OWORD *v7; // rax
  char v8; // r14
  char v9; // al
  _OWORD *v11; // [rsp+20h] [rbp-10h]

  v4 = sub_14060C510(a2); /*0x14060e6d5*/
  nullsub_1(v6, v5); /*0x14060e6d7*/
  v7 = (_OWORD *)sub_140001360(16, 1); /*0x14060e6e6*/
  if ( !v7 ) /*0x14060e6ee*/
    sub_1412AD46B(1, 16); /*0x14060e75d*/
  v11 = v7; /*0x14060e6f7*/
  *v7 = xmmword_14134D5EC; /*0x14060e6fb*/
  v8 = sub_140604950(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48)); /*0x14060e70c*/
  v9 = sub_14060C310(a2); /*0x14060e712*/
  *(_BYTE *)(a1 + 24) = v4; /*0x14060e721*/
  *(_BYTE *)(a1 + 25) = v4 ^ 1; /*0x14060e724*/
  *(_QWORD *)a1 = 16; /*0x14060e727*/
  *(_QWORD *)(a1 + 8) = v11; /*0x14060e732*/
  *(_QWORD *)(a1 + 16) = 16; /*0x14060e736*/
  *(_BYTE *)(a1 + 26) = v8 == 1; /*0x14060e73e*/
  *(_BYTE *)(a1 + 27) = v9; /*0x14060e742*/
  return a1; /*0x14060e748*/
}