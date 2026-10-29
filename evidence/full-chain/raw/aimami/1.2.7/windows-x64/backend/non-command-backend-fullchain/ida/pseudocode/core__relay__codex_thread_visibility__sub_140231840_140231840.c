// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140231840 | name sub_140231840
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140231840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int128 v6; // xmm0
  char v7; // cl
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // edx
  _BYTE v12[24]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+80h] [rbp+0h]
  char v19; // [rsp+88h] [rbp+8h]
  _BYTE v20[7]; // [rsp+89h] [rbp+9h]
  __int128 v21; // [rsp+90h] [rbp+10h]
  __int128 v22; // [rsp+A0h] [rbp+20h]
  __int128 v23; // [rsp+B0h] [rbp+30h]
  __int128 v24; // [rsp+C0h] [rbp+40h]
  __int64 v25; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v26; // [rsp+D8h] [rbp+58h]
  __int64 v27; // [rsp+E8h] [rbp+68h]
  __int128 v28; // [rsp+F0h] [rbp+70h]
  __int128 v29; // [rsp+100h] [rbp+80h]
  __int128 v30; // [rsp+110h] [rbp+90h]
  __int128 v31; // [rsp+120h] [rbp+A0h]
  __int64 v32; // [rsp+130h] [rbp+B0h]
  char v33; // [rsp+138h] [rbp+B8h]
  _BYTE v34[7]; // [rsp+139h] [rbp+B9h]
  __int128 v35; // [rsp+140h] [rbp+C0h]
  __int64 v36; // [rsp+150h] [rbp+D0h]
  __int128 v37; // [rsp+160h] [rbp+E0h]
  __int64 v38; // [rsp+170h] [rbp+F0h]
  __int128 v39; // [rsp+180h] [rbp+100h] BYREF
  __int128 v40; // [rsp+190h] [rbp+110h]
  __int128 v41; // [rsp+1A0h] [rbp+120h]
  __int64 v42; // [rsp+1B0h] [rbp+130h]
  __int128 v43; // [rsp+1C0h] [rbp+140h]
  __int64 v44; // [rsp+1D0h] [rbp+150h]
  _BYTE v45[7]; // [rsp+1D8h] [rbp+158h]
  __int64 v46; // [rsp+1E0h] [rbp+160h]

  v46 = -2;
  sub_140189230(&v25, a2, a3, 32769);
  v4 = v25;
  v35 = v26;
  v36 = v27;
  v39 = v28;
  v40 = v29;
  if ( v33 == -1 )
  {
    v43 = v35;
    v44 = v36;
    v21 = v39;
    v22 = v40;
    goto LABEL_5;
  }
  v18 = v32;
  v17 = v31;
  v16 = v30;
  *(_DWORD *)v20 = *(_DWORD *)v34;
  *(_DWORD *)&v20[3] = *(_DWORD *)&v34[3];
  *(_QWORD *)v12 = v25;
  *(_OWORD *)&v12[8] = v35;
  v13 = v36;
  v14 = v39;
  v15 = v40;
  v19 = v33;
  sub_141403910(&v25, v12, 5, 0);
  v4 = v25;
  if ( v25 != -1 )
  {
    v44 = v27;
    v43 = v26;
    v21 = v28;
    v22 = v29;
    sub_1401923E0(v12);
LABEL_5:
    v27 = v44;
    v26 = v43;
    v28 = v21;
    v29 = v22;
    v25 = v4;
    *(_QWORD *)&v39 = &v25;
    *((_QWORD *)&v39 + 1) = sub_141404740;
    sub_1416ABFD0(v12, &unk_1419D726B, &v39);
    v41 = *(_OWORD *)v12;
    v42 = *(_QWORD *)&v12[16];
    sub_140193AA0(&v25);
    result = v42;
    v38 = v42;
    v6 = v41;
    v37 = v41;
    *(_QWORD *)(a1 + 24) = v42;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 10;
    *(_BYTE *)(a1 + 104) = -1;
    return result;
  }
  v4 = *(_QWORD *)v12;
  result = v18;
  v44 = v13;
  v43 = *(_OWORD *)&v12[8];
  v24 = v17;
  v23 = v16;
  v22 = v15;
  v21 = v14;
  v7 = v19;
  *(_DWORD *)&v45[3] = *(_DWORD *)&v20[3];
  *(_DWORD *)v45 = *(_DWORD *)v20;
  if ( v19 == -1 )
    goto LABEL_5;
  v42 = v44;
  v41 = v43;
  v8 = v21;
  v9 = v22;
  v10 = v23;
  *(_OWORD *)(a1 + 80) = v24;
  *(_OWORD *)(a1 + 64) = v10;
  *(_OWORD *)(a1 + 48) = v9;
  *(_OWORD *)(a1 + 32) = v8;
  v11 = *(_DWORD *)v45;
  *(_DWORD *)(a1 + 108) = *(_DWORD *)&v45[3];
  *(_DWORD *)(a1 + 105) = v11;
  v37 = v41;
  *(_QWORD *)(a1 + 24) = v42;
  *(_OWORD *)(a1 + 8) = v37;
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 96) = result;
  *(_BYTE *)(a1 + 104) = v7;
  return result;
}
