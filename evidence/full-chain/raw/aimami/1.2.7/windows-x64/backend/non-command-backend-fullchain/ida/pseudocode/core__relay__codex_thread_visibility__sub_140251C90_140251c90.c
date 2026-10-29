// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140251c90 | name sub_140251C90
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140251C90(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  const char *v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  int v13; // eax
  __int128 v14; // kr10_16
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r12
  char *v20; // rcx
  char *v21; // r13
  __int128 v22; // kr20_16
  __int128 v23; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int128 v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+50h] [rbp-30h]
  __int128 v27; // [rsp+60h] [rbp-20h]
  __int128 v28; // [rsp+70h] [rbp-10h]
  _OWORD v29[3]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v30; // [rsp+B0h] [rbp+30h]
  unsigned __int64 *v31; // [rsp+C0h] [rbp+40h] BYREF
  char *v32; // [rsp+C8h] [rbp+48h]
  __int64 v33; // [rsp+D0h] [rbp+50h]
  _QWORD v34[2]; // [rsp+100h] [rbp+80h] BYREF
  __int128 v35; // [rsp+110h] [rbp+90h] BYREF
  __int128 v36; // [rsp+120h] [rbp+A0h]
  __int128 v37; // [rsp+130h] [rbp+B0h]
  __int128 v38; // [rsp+140h] [rbp+C0h]
  __int128 v39; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v40; // [rsp+160h] [rbp+E0h]
  __int128 v41; // [rsp+170h] [rbp+F0h]
  __int128 v42; // [rsp+180h] [rbp+100h]
  unsigned __int64 v43; // [rsp+190h] [rbp+110h] BYREF
  _BYTE v44[65]; // [rsp+198h] [rbp+118h]
  _BYTE v45[23]; // [rsp+1D9h] [rbp+159h]
  char *v46; // [rsp+1F0h] [rbp+170h]
  __int64 v47; // [rsp+1F8h] [rbp+178h]
  __int64 v48; // [rsp+200h] [rbp+180h]
  char v49; // [rsp+20Fh] [rbp+18Fh]
  __int64 v50; // [rsp+210h] [rbp+190h]

  v50 = -2;
  sub_140230510(&v43, a2);
  v4 = v43;
  result = v44[0];
  if ( v43 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v45[15];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)v45;
    v6 = *(_OWORD *)&v44[1];
    v7 = *(_OWORD *)&v44[17];
    v8 = *(_OWORD *)&v44[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v44[49];
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 9) = v6;
    *(_QWORD *)a1 = v4;
    *(_BYTE *)(a1 + 8) = result;
    return result;
  }
  v9 = (const char *)&unk_1419DFAA6;
  if ( (v44[0] & 1) != 0 )
    v9 = aModel_0;
  v34[0] = v9;
  v34[1] = v44[0] | 4LL;
  *(_QWORD *)&v39 = v34;
  *((_QWORD *)&v39 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v35, &unk_1419DFAAA, &v39);
  v47 = *((_QWORD *)&v35 + 1);
  v48 = v35;
  sub_1401C6270(&v43, a2, *((_QWORD *)&v35 + 1), v36);
  if ( (_DWORD)v43 != 1 )
  {
    v25 = *(_OWORD *)v44;
    v26 = *(_OWORD *)&v44[16];
    v27 = *(_OWORD *)&v44[32];
    v28 = *(_OWORD *)&v44[48];
    v29[0] = *(_OWORD *)v44;
    v29[1] = *(_OWORD *)&v44[16];
    v29[2] = *(_OWORD *)&v44[32];
    v30 = *(_OWORD *)&v44[48];
    if ( v48 )
      sub_140001660(v47, v48, 1);
    v13 = sub_1417A9630(*((_QWORD *)&v30 + 1));
    if ( v13 )
    {
      v43 = 0x8000000000000013uLL;
      *(_QWORD *)v44 = 0;
      *(_QWORD *)&v44[8] = v13;
      *(_QWORD *)&v39 = &v43;
      *((_QWORD *)&v39 + 1) = sub_141404740;
      sub_1416ABFD0(&v35, &unk_1419D772A, &v39);
      v14 = v35;
      v15 = v36;
      sub_140193AA0(&v43);
    }
    else
    {
      v43 = -1;
      *(_QWORD *)&v39 = &v43;
      *((_QWORD *)&v39 + 1) = v29;
      *(_QWORD *)&v40 = 0;
      v49 = 1;
      sub_1403CE1B0(&v31, &v39);
      v16 = v43;
      if ( v43 == -1 )
      {
        v43 = (unsigned __int64)v32;
        *(_QWORD *)v44 = v32;
        *(_QWORD *)&v44[8] = v31;
        *(_QWORD *)&v44[16] = &v32[120 * v33];
        sub_14038FB00(&v35, &v43);
        *(_QWORD *)(a1 + 24) = v36;
        *(_OWORD *)(a1 + 8) = v35;
        *(_QWORD *)a1 = -1;
        return sub_140193C30(v29);
      }
      v17 = *(_QWORD *)v44;
      v18 = *(_QWORD *)&v44[8];
      v19 = *(_QWORD *)&v44[16];
      v35 = *(_OWORD *)&v44[24];
      v36 = *(_OWORD *)&v44[40];
      v20 = v32;
      v47 = v33;
      v48 = 0;
      v46 = v32;
      while ( v47 != v48 )
      {
        ++v48;
        v21 = v20 + 120;
        sub_14038F260();
        v20 = v21;
      }
      if ( v31 )
        sub_140001660(v46, 120LL * (_QWORD)v31, 8);
      *(_OWORD *)&v44[40] = v36;
      *(_OWORD *)&v44[24] = v35;
      v43 = v16;
      *(_QWORD *)v44 = v17;
      *(_QWORD *)&v44[8] = v18;
      *(_QWORD *)&v44[16] = v19;
      v31 = &v43;
      v32 = (char *)sub_141404740;
      sub_1416ABFD0(&v39, &unk_1419D774C, &v31);
      v22 = v39;
      v15 = v40;
      sub_140193AA0(&v43);
      v14 = v22;
    }
    *(_QWORD *)a1 = 10;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 24) = v15;
    return sub_140193C30(v29);
  }
  v38 = *(_OWORD *)&v44[48];
  v37 = *(_OWORD *)&v44[32];
  v36 = *(_OWORD *)&v44[16];
  v35 = *(_OWORD *)v44;
  *(_QWORD *)&v39 = &v35;
  *((_QWORD *)&v39 + 1) = sub_141404740;
  sub_1416ABFD0(&v23, &unk_1419D7705, &v39);
  v39 = v23;
  *(_QWORD *)&v40 = v24;
  result = sub_140193AA0(&v35);
  v10 = v39;
  v11 = v40;
  v12 = v41;
  v25 = v39;
  v26 = v40;
  v27 = v41;
  v28 = v42;
  *(_OWORD *)(a1 + 56) = v42;
  *(_OWORD *)(a1 + 40) = v12;
  *(_OWORD *)(a1 + 24) = v11;
  *(_OWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = 10;
  if ( v48 )
    return sub_140001660(v47, v48, 1);
  return result;
}
