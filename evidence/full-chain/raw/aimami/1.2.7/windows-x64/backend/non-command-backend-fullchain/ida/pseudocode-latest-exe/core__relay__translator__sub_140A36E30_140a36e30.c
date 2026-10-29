// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a36e30 | successor of pre-update 0x140e4cbc0 | session <审计会话>
// match evidence: {"body_sim": 0.5, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_140A36E30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
  _QWORD *v21; // [rsp+70h] [rbp-10h] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h]
  unsigned __int64 v23; // [rsp+80h] [rbp+0h]
  __int64 v24; // [rsp+88h] [rbp+8h]
  __int64 v25; // [rsp+90h] [rbp+10h]
  char v26; // [rsp+9Fh] [rbp+1Fh] BYREF
  _QWORD *v27; // [rsp+A0h] [rbp+20h]
  __int64 v28; // [rsp+A8h] [rbp+28h]

  v28 = -2;
  if ( a3 < 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  v18 = a3;
  if ( a3 )
  {
    nullsub_1(a1, a2);
    v4 = 1;
    v7 = sub_140001650(a3, 1);
    if ( !v7 )
LABEL_3:
      sub_14196B2DB(v4, a3);
    v24 = v7;
    sub_1419234B0(v7, a2, a3);
  }
  else
  {
    v24 = 1;
  }
  sub_141597890(&v19);
  v16 = v19;
  v21 = nullptr;
  v22 = 1;
  v23 = 0;
  v20 = 1610612768;
  *(_QWORD *)&v19 = &v21;
  *((_QWORD *)&v19 + 1) = &off_141A6D298;
  if ( (unsigned __int8)sub_141598A30(&v16, &v19) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v26,
      (unsigned int)&unk_141A69A18,
      (__int64)&off_141A6D350);
  v27 = v21;
  v25 = v22;
  if ( v23 <= 0x10 )
  {
    if ( v23 != 16 )
LABEL_11:
      sub_14196B4F0(v22, v23, 0, 16, (__int64)&off_141A6A4C0);
  }
  else if ( *(char *)(v22 + 16) <= -65 )
  {
    goto LABEL_11;
  }
  v17[0] = v22;
  v17[1] = 16;
  v21 = v17;
  v22 = (__int64)sub_140191200;
  sub_1416DAFA0(&v19, &unk_141A6A4D8, &v21);
  if ( v27 )
    sub_140001660(v25, v27, 1);
  v25 = *((_QWORD *)&v19 + 1);
  v27 = (_QWORD *)v19;
  v9 = v20;
  v10 = sub_1416AE140(v8);
  v11 = v10;
  if ( *(_BYTE *)(v10 + 16) == 1 )
  {
    v12 = *(_QWORD *)v10;
    v13 = *(_QWORD *)(v11 + 8);
  }
  else
  {
    v12 = sub_1416C5230();
    *(_QWORD *)v11 = v12;
    *(_QWORD *)(v11 + 8) = v13;
    *(_BYTE *)(v11 + 16) = 1;
  }
  *(_QWORD *)v11 = v12 + 1;
  v14 = v18;
  *(_QWORD *)a1 = v18;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = v27;
  *(_QWORD *)(a1 + 32) = v25;
  *(_QWORD *)(a1 + 40) = v9;
  *(_WORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&off_141A68E20;
  *(_OWORD *)(a1 + 72) = xmmword_141A68E30;
  *(_QWORD *)(a1 + 88) = v12;
  *(_QWORD *)(a1 + 96) = v13;
  *(_DWORD *)(a1 + 104) = 0;
  return a1;
}
