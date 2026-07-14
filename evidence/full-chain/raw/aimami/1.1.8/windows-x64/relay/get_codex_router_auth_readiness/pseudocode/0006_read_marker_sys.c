// router_unlock_auth_read_marker_sys @ 0x1406045f0 size=387 proto=__int64 __fastcall(__int64, int, int)
__int64 __fastcall router_unlock_auth_read_marker_sys(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rdx
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-48h]
  __int128 v14; // [rsp+48h] [rbp-38h]
  __int128 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  __int128 v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+88h] [rbp+8h]
  __int64 v20; // [rsp+90h] [rbp+10h]
  __int64 v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+A8h] [rbp+28h]
  __int64 v24; // [rsp+B0h] [rbp+30h]

  v24 = -2; /*0x140604601*/
  sub_1410675B0((unsigned int)&v12, a2, a3, (unsigned int)&aRouterUnlockAu[30], 30); /*0x140604620*/
  v23 = *((_QWORD *)&v12 + 1); /*0x140604631*/
  sub_1410807C0(&v16, *((_QWORD *)&v12 + 1), v13); /*0x140604635*/
  if ( (_QWORD)v12 ) /*0x140604642*/
    sub_140001370(v23, v12, 1); /*0x14060464e*/
  if ( __OFSUB__(-v16, 1) ) /*0x14060465a*/
  {
    sub_1400450F0(&v17); /*0x140604663*/
    result = 0x8000000000000000uLL; /*0x140604668*/
    *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x140604672*/
    return result; /*0x140604672*/
  }
  v23 = v16; /*0x14060467f*/
  v16 = v17; /*0x14060468b*/
  v17 = v18; /*0x14060468f*/
  v18 = 0; /*0x140604696*/
  v21 = v16; /*0x14060469a*/
  v19 = v16; /*0x14060469e*/
  v20 = v17; /*0x1406046a2*/
  sub_140385160(&v12, &v16); /*0x1406046ae*/
  result = 0; /*0x1406046b4*/
  if ( __OFSUB__(0, (_QWORD)v12) ) /*0x1406046b6*/
  {
    *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x1406046c6*/
    v5 = **((_QWORD **)&v12 + 1); /*0x1406046cd*/
    v6 = **((_QWORD **)&v12 + 1) == 1; /*0x1406046d0*/
    v22 = *((_QWORD *)&v12 + 1); /*0x1406046d4*/
    if ( v6 ) /*0x1406046d8*/
    {
      sub_1400450F0(*((_QWORD *)&v12 + 1) + 8LL); /*0x140604732*/
    }
    else if ( !v5 ) /*0x1406046dd*/
    {
      v7 = *(_QWORD *)(v22 + 16); /*0x1406046e3*/
      if ( v7 ) /*0x1406046ea*/
        sub_140001370(*(_QWORD *)(v22 + 8), v7, 1); /*0x1406046fa*/
    }
    result = sub_140001370(v22, 40, 8); /*0x140604747*/
    v11 = v23; /*0x14060474c*/
    if ( v23 ) /*0x140604753*/
      return sub_140001370(v21, v11, 1); /*0x140604753*/
  }
  else
  {
    v8 = v12; /*0x140604701*/
    v9 = v13; /*0x140604705*/
    v10 = v14; /*0x140604709*/
    *(_OWORD *)(a1 + 48) = v15; /*0x140604711*/
    *(_OWORD *)(a1 + 32) = v10; /*0x140604715*/
    *(_OWORD *)(a1 + 16) = v9; /*0x140604719*/
    *(_OWORD *)a1 = v8; /*0x14060471d*/
    v11 = v23; /*0x140604720*/
    if ( v23 ) /*0x140604727*/
      return sub_140001370(v21, v11, 1); /*0x140604759*/
  }
  return result; /*0x140604675*/
}