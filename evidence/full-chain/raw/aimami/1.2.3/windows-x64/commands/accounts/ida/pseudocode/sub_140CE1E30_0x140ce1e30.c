// module: codexmate_lib/commands/accounts
// addr: 0x140ce1e30
// name: sub_140CE1E30
// win 1.2.1 | module src/commands/accounts.rs | attributed via panic-Location xref (win-native)
bool __fastcall sub_140CE1E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rdi
  char v9; // bl
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  _BYTE v15[832]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v16; // [rsp+378h] [rbp+2F8h]
  __int64 v17; // [rsp+388h] [rbp+308h]
  __int64 v18; // [rsp+390h] [rbp+310h] BYREF
  __int128 v19; // [rsp+398h] [rbp+318h]
  __int64 v20; // [rsp+3A8h] [rbp+328h]
  _BYTE v21[784]; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v22; // [rsp+6C0h] [rbp+640h]
  __int64 v23; // [rsp+6C8h] [rbp+648h]
  __int64 v24; // [rsp+6D8h] [rbp+658h]
  __int64 v25; // [rsp+6E0h] [rbp+660h]
  __int64 v26; // [rsp+708h] [rbp+688h]
  __int64 v27; // [rsp+710h] [rbp+690h]
  __int128 v28; // [rsp+718h] [rbp+698h]
  __int64 v29; // [rsp+728h] [rbp+6A8h]
  __int128 v30; // [rsp+730h] [rbp+6B0h]
  __int64 v31; // [rsp+740h] [rbp+6C0h]
  __int64 v32; // [rsp+748h] [rbp+6C8h]
  __int64 v33; // [rsp+750h] [rbp+6D0h]
  __int64 v34; // [rsp+758h] [rbp+6D8h]

  v34 = -2;
  switch ( *(_BYTE *)(a1 + 760) )
  {
    case 0:
      v6 = *(_QWORD *)(a1 + 168);
      *(_OWORD *)(a1 + 208) = *(_OWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 224) = v6;
      *(_OWORD *)(a1 + 232) = *(_OWORD *)(a1 + 176);
      v7 = *(_OWORD *)(a1 + 192);
      sub_141684120(a1 + 248, a1, 152);
      *(_OWORD *)(a1 + 400) = v7;
      *(_BYTE *)(a1 + 752) = 0;
      break;
    case 1:
      sub_1416C3400(&off_1417B8060, a2, a3, a4);
    case 2:
      sub_1416C3420(&off_1417B8060, a2, a3, a4);
    case 3:
      break;
  }
  v33 = a1;
  v32 = a1 + 248;
  sub_140CF87B0(&v18, a1 + 248, a2);
  v8 = v18;
  if ( v18 == -2 )
  {
    v9 = 3;
    goto LABEL_23;
  }
  v31 = v20;
  v30 = v19;
  sub_141684120(v15, v21, 856);
  v10 = v26;
  if ( *(_BYTE *)(v33 + 752) == 3 )
  {
    if ( *(_BYTE *)(v33 + 744) == 3 )
    {
      v12 = *(_QWORD *)(v33 + 736);
      if ( (unsigned __int8)sub_1412F2A80(v12) )
        sub_1412E7580(v12);
    }
    else if ( !*(_BYTE *)(v33 + 744) )
    {
      sub_140014150(v33 + 584);
    }
    v11 = v33 + 416;
  }
  else
  {
    v11 = v32;
    if ( *(_BYTE *)(v33 + 752) )
      goto LABEL_15;
  }
  sub_140014150(v11);
LABEL_15:
  if ( (_DWORD)v8 == -1 )
  {
    v29 = v31;
    v28 = v30;
    v13 = 1;
  }
  else
  {
    v18 = v8;
    v19 = v30;
    v20 = v31;
    sub_141684120(v21, v15, 856);
    v26 = v10;
    if ( v22 )
      sub_140001660(v23, v22, 1);
    if ( v24 )
      sub_140001660(v25, v24, 1);
    sub_140A8ED10(&v18);
    v28 = v16;
    v29 = v17;
    v13 = 0;
  }
  v27 = v13;
  v9 = 1;
  sub_140354D30(*(__int128 **)(v33 + 208));
LABEL_23:
  *(_BYTE *)(v33 + 760) = v9;
  return (_DWORD)v8 == -2;
}