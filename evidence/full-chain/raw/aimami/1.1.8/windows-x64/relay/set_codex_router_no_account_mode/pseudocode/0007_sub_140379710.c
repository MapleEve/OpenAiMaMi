// win 1.1.8 set_codex_router_no_account_mode node va=0x140379710 depth=1
// sub_140379710
__int64 __fastcall sub_140379710(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  _BYTE *v7; // rdx
  _BYTE v9[31]; // [rsp+49h] [rbp-37h]
  _QWORD v10[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v11[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v12; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+40h]
  char v14; // [rsp+CFh] [rbp+4Fh] BYREF
  __int64 v15; // [rsp+D0h] [rbp+50h]

  v15 = -2; /*0x140379727*/
  v3 = *a2; /*0x140379732*/
  v4 = a2[1]; /*0x140379735*/
  v5 = a2[2]; /*0x140379739*/
  v6 = a2[3]; /*0x14037973d*/
  if ( (sub_1403747D0(a2) & 1) == 0 ) /*0x14037974b*/
  {
    if ( *v7 == 1 ) /*0x1403797e7*/
    {
      *(_BYTE *)(a1 + 1) = v7[1]; /*0x1403797ed*/
      *(_BYTE *)a1 = 6; /*0x1403797f0*/
      return a1; /*0x1403797f0*/
    }
    v7 = (_BYTE *)sub_1412794B0((__int64)v7, (__int64)&v14, (__int64)&unk_1413330A8); /*0x140379847*/
  }
  v11[1] = v3; /*0x140379751*/
  v11[2] = v4; /*0x140379755*/
  v11[3] = v5; /*0x140379759*/
  v11[4] = v6; /*0x14037975d*/
  v11[5] = v7; /*0x140379761*/
  v11[0] = 0x8000000000000008uLL; /*0x14037976f*/
  *(_QWORD *)&v12 = 0; /*0x140379773*/
  *((_QWORD *)&v12 + 1) = 1; /*0x14037977b*/
  v13 = 0; /*0x140379783*/
  v10[2] = 1610612768; /*0x14037978b*/
  v10[0] = &v12; /*0x140379797*/
  v10[1] = &off_1413360B0; /*0x1403797a2*/
  if ( (unsigned __int8)sub_140E156C0((__int64)v11, v10) ) /*0x1403797ad*/
    sub_1412AD780((__int64)aADisplayImplem_4, 55, (__int64)&v14, (__int64)&unk_1413362D8, (__int64)&off_141336168); /*0x140379829*/
  *(_OWORD *)&v9[7] = v12; /*0x1403797bf*/
  *(_QWORD *)&v9[23] = v13; /*0x1403797c3*/
  sub_1403620E0(v11); /*0x1403797ca*/
  *(_BYTE *)a1 = 3; /*0x1403797cf*/
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v9; /*0x1403797da*/
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v9[15]; /*0x1403797de*/
  return a1; /*0x1403797f6*/
}