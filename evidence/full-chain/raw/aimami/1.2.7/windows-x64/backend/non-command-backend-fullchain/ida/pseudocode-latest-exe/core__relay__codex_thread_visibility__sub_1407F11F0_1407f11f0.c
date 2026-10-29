// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407f11f0 | successor of pre-update 0x140249f20 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.89, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1407F11F0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rsi
  __int64 v13; // r13
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rdi
  __int64 v19; // rdi
  double result; // xmm0_8
  __int128 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h]
  _QWORD v25[4]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v26; // [rsp+90h] [rbp+10h] BYREF
  __int128 v27; // [rsp+A0h] [rbp+20h]
  __int128 v28; // [rsp+B0h] [rbp+30h]
  __int128 v29; // [rsp+C0h] [rbp+40h]
  __int128 v30; // [rsp+D0h] [rbp+50h]
  __int128 v31; // [rsp+E0h] [rbp+60h]
  __int128 v32; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v33; // [rsp+100h] [rbp+80h]
  __int128 v34; // [rsp+110h] [rbp+90h]
  __int128 v35; // [rsp+120h] [rbp+A0h]
  __int128 v36; // [rsp+130h] [rbp+B0h]
  __int128 v37; // [rsp+140h] [rbp+C0h]
  __int128 v38; // [rsp+150h] [rbp+D0h]
  __int64 v39; // [rsp+160h] [rbp+E0h]
  char v40; // [rsp+16Dh] [rbp+EDh] BYREF
  char v41; // [rsp+16Eh] [rbp+EEh]
  char v42; // [rsp+16Fh] [rbp+EFh]
  __int64 v43; // [rsp+170h] [rbp+F0h]

  v43 = -2;
  v12 = a6[1];
  v13 = a6[2];
  v42 = 1;
  sub_1407F65F0((unsigned int)&v26, (unsigned int)aThreadConverge_0, 24, v12, v13);
  if ( (_DWORD)v26 == -1 )
  {
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v26 = a7;
      *((_QWORD *)&v26 + 1) = sub_140D76130;
      *(_QWORD *)&v35 = 2;
      *((_QWORD *)&v35 + 1) = aCodexmateLibCo_11;
      *(_QWORD *)&v36 = 51;
      *(_QWORD *)&v37 = &unk_141A4B8FB;
      *((_QWORD *)&v37 + 1) = &v26;
      *(_QWORD *)&v32 = 0;
      *((_QWORD *)&v32 + 1) = aCodexmateLibCo_11;
      v33 = 0x33u;
      *(_QWORD *)&v34 = aSrcCoreRelayCo_0;
      *((_QWORD *)&v34 + 1) = 41;
      *((_QWORD *)&v36 + 1) = 0x93C00000001LL;
      v42 = 1;
      sub_141503E20(&v40, &v32);
    }
    v42 = 1;
    sub_1407EF070((__int64)&v32, a2, a3, a4, a5);
    v15 = *((_QWORD *)&v33 + 1);
    v26 = v32;
    *(_QWORD *)&v27 = v33;
    if ( *((_QWORD *)&v33 + 1) == -1 )
    {
      *(_QWORD *)&v14 = v26;
      v23 = v26;
      v24 = v27;
      v42 = 1;
      sub_1407F69E0(a1, a2, a3, a4, a5, (__int64)&v23, a8);
      v41 = 1;
      sub_140778C60(a7);
      if ( v13 )
      {
        v19 = v12;
        do
        {
          sub_1401B1470(v19);
          v19 += 176;
          --v13;
        }
        while ( v13 );
      }
    }
    else
    {
      *(_QWORD *)(a1 + 112) = v39;
      *(_OWORD *)(a1 + 96) = v38;
      v14 = v34;
      v16 = v35;
      v17 = v36;
      *(_OWORD *)(a1 + 80) = v37;
      *(_OWORD *)(a1 + 64) = v17;
      *(_OWORD *)(a1 + 48) = v16;
      *(_OWORD *)(a1 + 32) = v14;
      *(_QWORD *)(a1 + 16) = v27;
      *(_QWORD *)&v14 = v26;
      *(_OWORD *)a1 = v26;
      *(_QWORD *)(a1 + 24) = v15;
      v41 = 1;
      sub_140778C60(a7);
      if ( v13 )
      {
        v18 = v12;
        do
        {
          sub_1401B1470(v18);
          v18 += 176;
          --v13;
        }
        while ( v13 );
      }
    }
    if ( *a6 )
      *(double *)&v14 = sub_140001660(v12, 176LL * *a6, 8);
  }
  else
  {
    v37 = v31;
    v36 = v30;
    v35 = v29;
    v34 = v28;
    v33 = v27;
    v32 = v26;
    v25[0] = a7;
    v25[1] = sub_140D76130;
    v25[2] = &v32;
    v25[3] = sub_140D76130;
    sub_1416DAFA0(&v21, &unk_141A4B89E, v25);
    *(_QWORD *)(a1 + 48) = v22;
    *(_OWORD *)(a1 + 32) = v21;
    *(_QWORD *)(a1 + 16) = a6[2];
    v14 = *(_OWORD *)a6;
    *(_OWORD *)a1 = *(_OWORD *)a6;
    *(_QWORD *)(a1 + 24) = 10;
    v42 = 0;
    sub_140778C60(&v32);
    v41 = 0;
    sub_140778C60(a7);
  }
  *(_QWORD *)&result = v14;
  return result;
}
