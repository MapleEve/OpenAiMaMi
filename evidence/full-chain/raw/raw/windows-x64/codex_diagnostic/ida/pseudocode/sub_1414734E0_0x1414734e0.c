// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1414734e0
// name: sub_1414734E0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
bool __fastcall sub_1414734E0(_BYTE *a1, unsigned __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _BYTE *v12; // rcx
  char v13; // r14
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _BYTE *v18; // rcx
  bool v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  _OWORD v24[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  _OWORD v26[3]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27; // [rsp+88h] [rbp+8h]
  _QWORD v28[2]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v29; // [rsp+A0h] [rbp+20h]
  __int128 v30; // [rsp+B0h] [rbp+30h]
  __int64 v31; // [rsp+C0h] [rbp+40h]
  __int16 v32; // [rsp+C8h] [rbp+48h]
  bool v33; // [rsp+CAh] [rbp+4Ah]
  __int128 v34; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v35; // [rsp+E0h] [rbp+60h]
  __int128 v36; // [rsp+F0h] [rbp+70h]
  __int64 v37; // [rsp+100h] [rbp+80h]
  _OWORD v38[3]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v39; // [rsp+138h] [rbp+B8h]
  _BYTE *v40; // [rsp+140h] [rbp+C0h] BYREF
  unsigned __int64 v41; // [rsp+148h] [rbp+C8h]
  __int128 v42; // [rsp+150h] [rbp+D0h]
  __int128 v43; // [rsp+160h] [rbp+E0h]
  __int64 v44; // [rsp+170h] [rbp+F0h]
  char v45; // [rsp+178h] [rbp+F8h]
  char v46; // [rsp+179h] [rbp+F9h]
  char v47; // [rsp+17Ah] [rbp+FAh]
  __int128 v48; // [rsp+180h] [rbp+100h]
  __int128 v49; // [rsp+190h] [rbp+110h]
  __int64 v50; // [rsp+1A0h] [rbp+120h]

  v6 = a2;
  v7 = a1;
  sub_14148A440(&v34, a1, a2);
  switch ( (char)v34 )
  {
    case 0:
    case 3:
      v8 = v35 + 4;
      goto LABEL_11;
    case 1:
      v10 = v36 + 1;
      if ( !(_QWORD)v36 )
        v10 = 0;
      v8 = v10 + v35 + 8;
      goto LABEL_11;
    case 2:
      v8 = 6;
      goto LABEL_11;
    case 4:
      v9 = v36 + 1;
      if ( !(_QWORD)v36 )
        v9 = 0;
      v8 = v9 + v35 + 2;
      goto LABEL_11;
    case 5:
      v8 = 2;
LABEL_11:
      v11 = v6 - v8;
      if ( v6 < v8 )
        sub_1416C32F0(v8, v6, v6, &off_141A3B0A0);
      v12 = &v7[v8];
      break;
    default:
      v12 = v7;
      v11 = v6;
      break;
  }
  if ( v11 )
    v13 = *v12 == 92 || *v12 == 47;
  else
    v13 = 0;
  v50 = v36;
  v49 = v35;
  v48 = v34;
  sub_14148A440(&v34, a3, a4);
  switch ( (char)v34 )
  {
    case 0:
    case 3:
      v14 = v35 + 4;
      goto LABEL_26;
    case 1:
      v16 = v36 + 1;
      if ( !(_QWORD)v36 )
        v16 = 0;
      v14 = v16 + v35 + 8;
      goto LABEL_26;
    case 2:
      v14 = 6;
      goto LABEL_26;
    case 4:
      v15 = v36 + 1;
      if ( !(_QWORD)v36 )
        v15 = 0;
      v14 = v15 + v35 + 2;
      goto LABEL_26;
    case 5:
      v14 = 2;
LABEL_26:
      v17 = a4 - v14;
      if ( a4 < v14 )
        sub_1416C32F0(v14, a4, a4, &off_141A3B0A0);
      v18 = &a3[v14];
      break;
    default:
      v18 = a3;
      v17 = a4;
      break;
  }
  if ( v17 )
    v19 = *v18 == 92 || *v18 == 47;
  else
    v19 = 0;
  v28[0] = a3;
  v28[1] = a4;
  v29 = v34;
  v30 = v35;
  v31 = v36;
  v33 = v19;
  v32 = 512;
  v20 = 2;
  v21 = 0;
  while ( 1 )
  {
    v44 = v50;
    v43 = v49;
    v42 = v48;
    v40 = v7;
    v41 = v6;
    v47 = v13;
    v45 = v21;
    v46 = v20;
    sub_141491FB0(v26, &v40);
    sub_141491FB0(v24, v28);
    v37 = v27;
    v36 = v26[2];
    v35 = v26[1];
    v34 = v26[0];
    v39 = v25;
    v38[2] = v24[2];
    v38[1] = v24[1];
    v38[0] = v24[0];
    if ( LOBYTE(v26[0]) == 0xFF )
      break;
    if ( LOBYTE(v24[0]) == 0xFF )
      return v13 != 2;
    if ( !(unsigned __int8)sub_14148F1D0(&v34, v38) )
    {
      v13 = 2;
      return v13 != 2;
    }
    v7 = v40;
    v6 = v41;
    v48 = v42;
    v49 = v43;
    v50 = v44;
    v21 = v45;
    v20 = v46;
    v13 = v47;
  }
  v22 = v13;
  v13 = 2;
  if ( LOBYTE(v24[0]) == 0xFF )
    v13 = v22;
  return v13 != 2;
}