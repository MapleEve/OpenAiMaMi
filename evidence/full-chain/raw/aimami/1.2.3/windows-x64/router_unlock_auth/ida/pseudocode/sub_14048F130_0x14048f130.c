// module: codexmate_lib/core/relay/router_unlock_auth
// addr: 0x14048f130
// name: sub_14048F130
// win 1.2.1 | module src/core/relay/router_unlock_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14048F130(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char v11[8]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+28h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  __int128 *v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int64 *v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  __int64 *v21; // [rsp+80h] [rbp+0h]
  __int64 v22; // [rsp+88h] [rbp+8h] BYREF
  __int64 v23; // [rsp+90h] [rbp+10h]
  __int64 v24; // [rsp+98h] [rbp+18h]
  __int64 v25; // [rsp+A0h] [rbp+20h]

  v25 = -2;
  v20 = a2;
  *(_QWORD *)&v18 = 0;
  v19 = 0;
  nullsub_1(a1);
  v3 = sub_140001650(3, 1);
  if ( !v3 )
    sub_1416C2D4B(1, 3);
  *(_BYTE *)(v3 + 2) = 103;
  *(_WORD *)v3 = 27745;
  v22 = 3;
  v23 = v3;
  v24 = 3;
  nullsub_1(v4);
  v5 = (__int64 *)sub_140001650(4, 1);
  v21 = v5;
  if ( !v5 )
    sub_1416C2D4B(1, 4);
  *(_DWORD *)v5 = 1701736302;
  LOBYTE(v14) = 3;
  v15 = 4;
  v16 = v5;
  v17 = 4;
  sub_140307860(v11, &v18, &v22, &v14);
  if ( v11[0] != -1 )
    sub_1400104F0(v11);
  nullsub_1(v6);
  v7 = sub_140001650(3, 1);
  if ( !v7 )
    sub_1416C2D4B(1, 3);
  *(_BYTE *)(v7 + 2) = 112;
  *(_WORD *)v7 = 31092;
  v22 = 3;
  v23 = v7;
  v24 = 3;
  nullsub_1(v8);
  v9 = sub_140001650(3, 1);
  v21 = (__int64 *)v9;
  if ( !v9 )
    sub_1416C2D4B(1, 3);
  *(_BYTE *)(v9 + 2) = 84;
  *(_WORD *)v9 = 22346;
  LOBYTE(v14) = 3;
  v15 = 3;
  v16 = (__int64 *)v9;
  v17 = 3;
  sub_140307860(v11, &v18, &v22, &v14);
  if ( v11[0] != -1 )
    sub_1400104F0(v11);
  v12 = v18;
  v13 = v19;
  v11[0] = 5;
  sub_14048EF50((__int64)&v18, (__int64)v11);
  sub_14048EF50((__int64)&v22, v20);
  v14 = &v18;
  v15 = (__int64)sub_1400015F0;
  v16 = &v22;
  v17 = (__int64)sub_1400015F0;
  sub_14149C0F0(a1, &unk_14175A08B, &v14);
  if ( v22 )
    sub_140001660(v23, v22, 1);
  if ( (_QWORD)v18 )
    sub_140001660(*((_QWORD *)&v18 + 1), v18, 1);
  sub_1400104F0(v11);
  return sub_1400104F0(v20);
}