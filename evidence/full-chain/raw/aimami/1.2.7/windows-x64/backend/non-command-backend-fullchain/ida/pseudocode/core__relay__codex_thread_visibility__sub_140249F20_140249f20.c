// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140249f20 | name sub_140249F20
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140249F20(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        const __m128i *a4,
        unsigned __int64 a5,
        __int64 *a6,
        __int64 a7,
        char a8)
{
  _QWORD *v12; // r12
  __int64 v13; // r13
  __int64 result; // rax
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  _QWORD *v19; // rcx
  _QWORD *v20; // rsi
  _QWORD *v21; // rcx
  _QWORD *v22; // rsi
  __int128 v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int128 v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  _QWORD v27[4]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v28; // [rsp+90h] [rbp+10h] BYREF
  __int128 v29; // [rsp+A0h] [rbp+20h]
  __int128 v30; // [rsp+B0h] [rbp+30h]
  __int128 v31; // [rsp+C0h] [rbp+40h]
  __int128 v32; // [rsp+D0h] [rbp+50h]
  __int128 v33; // [rsp+E0h] [rbp+60h]
  __int128 v34; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v35; // [rsp+100h] [rbp+80h]
  __int128 v36; // [rsp+110h] [rbp+90h]
  __int128 v37; // [rsp+120h] [rbp+A0h]
  __int128 v38; // [rsp+130h] [rbp+B0h]
  __int128 v39; // [rsp+140h] [rbp+C0h]
  __int128 v40; // [rsp+150h] [rbp+D0h]
  __int64 v41; // [rsp+160h] [rbp+E0h]
  __int64 v42; // [rsp+168h] [rbp+E8h]
  _QWORD *v43; // [rsp+170h] [rbp+F0h]
  char v44; // [rsp+17Fh] [rbp+FFh] BYREF
  __int64 v45; // [rsp+180h] [rbp+100h]
  char v46; // [rsp+18Eh] [rbp+10Eh]
  char v47; // [rsp+18Fh] [rbp+10Fh]
  __int64 v48; // [rsp+190h] [rbp+110h]

  v48 = -2;
  v12 = (_QWORD *)a6[1];
  v13 = a6[2];
  v47 = 1;
  sub_14024F320((unsigned int)&v28, (unsigned int)aThreadConverge_0, 24, (_DWORD)v12, v13);
  if ( (_DWORD)v28 == -1 )
  {
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v28 = a7;
      *((_QWORD *)&v28 + 1) = sub_14104A7D0;
      *(_QWORD *)&v37 = 2;
      *((_QWORD *)&v37 + 1) = aCodexmateLibCo_0;
      *(_QWORD *)&v38 = 51;
      *(_QWORD *)&v39 = &unk_1419DF563;
      *((_QWORD *)&v39 + 1) = &v28;
      *(_QWORD *)&v34 = 0;
      *((_QWORD *)&v34 + 1) = aCodexmateLibCo_0;
      v35 = 0x33u;
      *(_QWORD *)&v36 = aSrcCoreRelayCo_0;
      *((_QWORD *)&v36 + 1) = 41;
      *((_QWORD *)&v38 + 1) = 0x93C00000001LL;
      v47 = 1;
      sub_1414D53A0(&v44, &v34);
    }
    v47 = 1;
    sub_140247B30((__int64)&v34, a2, a3, a4, a5);
    v15 = *((_QWORD *)&v35 + 1);
    v28 = v34;
    *(_QWORD *)&v29 = v35;
    v42 = v13;
    v43 = v12;
    if ( *((_QWORD *)&v35 + 1) == -1 )
    {
      v25 = v28;
      v26 = v29;
      v47 = 1;
      sub_14024F710(a1, (_DWORD)a2, a3, (_DWORD)a4, a5, (__int64)&v25, a8);
      v46 = 1;
      sub_1401954F0(a7);
      v45 = 0;
      v21 = v12;
      while ( v42 != v45 )
      {
        ++v45;
        v22 = v21 + 22;
        sub_140196740(v21);
        v21 = v22;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 112) = v41;
      *(_OWORD *)(a1 + 96) = v40;
      v16 = v36;
      v17 = v37;
      v18 = v38;
      *(_OWORD *)(a1 + 80) = v39;
      *(_OWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_OWORD *)(a1 + 32) = v16;
      *(_QWORD *)(a1 + 16) = v29;
      *(_OWORD *)a1 = v28;
      *(_QWORD *)(a1 + 24) = v15;
      v46 = 1;
      sub_1401954F0(a7);
      v45 = 0;
      v19 = v12;
      while ( v42 != v45 )
      {
        ++v45;
        v20 = v19 + 22;
        sub_140196740(v19);
        v19 = v20;
      }
    }
    result = *a6;
    if ( *a6 )
      return sub_140001660(v43, 176 * result, 8);
  }
  else
  {
    v39 = v33;
    v38 = v32;
    v37 = v31;
    v36 = v30;
    v35 = v29;
    v34 = v28;
    v27[0] = a7;
    v27[1] = sub_14104A7D0;
    v27[2] = &v34;
    v27[3] = sub_14104A7D0;
    sub_1416ABFD0(&v23, &unk_1419DF506, v27);
    *(_QWORD *)(a1 + 48) = v24;
    *(_OWORD *)(a1 + 32) = v23;
    *(_QWORD *)(a1 + 16) = a6[2];
    *(_OWORD *)a1 = *(_OWORD *)a6;
    *(_QWORD *)(a1 + 24) = 10;
    v47 = 0;
    sub_1401954F0(&v34);
    v46 = 0;
    return sub_1401954F0(a7);
  }
  return result;
}
