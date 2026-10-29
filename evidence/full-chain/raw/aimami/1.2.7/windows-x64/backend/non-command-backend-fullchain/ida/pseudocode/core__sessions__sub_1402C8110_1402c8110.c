// win 1.2.7 | module src/core/sessions.rs | ea 0x1402c8110 | name sub_1402C8110
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402C8110(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  void *v9; // rax
  __int64 v10; // rbx
  _OWORD *v11; // rdi
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h]
  _BYTE v17[24]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  __int128 v21; // [rsp+80h] [rbp+0h]
  __int128 v22; // [rsp+90h] [rbp+10h]
  __int64 v23; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v24; // [rsp+A8h] [rbp+28h]
  __int64 v25; // [rsp+B8h] [rbp+38h]
  __int128 v26; // [rsp+C0h] [rbp+40h]
  __int128 v27; // [rsp+D0h] [rbp+50h]
  __int128 v28; // [rsp+E0h] [rbp+60h]
  __int128 v29; // [rsp+F0h] [rbp+70h]
  __int128 v30; // [rsp+100h] [rbp+80h]
  __int64 v31; // [rsp+110h] [rbp+90h]
  void *v32; // [rsp+118h] [rbp+98h]
  __int128 v33; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v34; // [rsp+130h] [rbp+B0h]
  __int128 v35; // [rsp+140h] [rbp+C0h] BYREF
  __m256i v36; // [rsp+150h] [rbp+D0h]
  _BYTE v37[96]; // [rsp+170h] [rbp+F0h] BYREF
  char v38; // [rsp+1DFh] [rbp+15Fh] BYREF
  __int64 v39; // [rsp+1E0h] [rbp+160h]

  v39 = -2;
  sub_140C48060(v37);
  v35 = *(_OWORD *)&v37[8];
  v36.m256i_i64[0] = *(_QWORD *)&v37[24];
  if ( *(_QWORD *)v37 == -1 )
  {
    *(_OWORD *)v17 = v35;
    *(_QWORD *)&v17[16] = v36.m256i_i64[0];
    sub_1402DCB00(&v23, a2, v17, 0);
    if ( v23 == -1 )
    {
      *(_QWORD *)(a1 + 24) = v25;
      *(_OWORD *)(a1 + 8) = v24;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)a1 = -1;
      return a1;
    }
  }
  else
  {
    v29 = *(_OWORD *)&v37[80];
    v28 = *(_OWORD *)&v37[64];
    v27 = *(_OWORD *)&v37[48];
    v26 = *(_OWORD *)&v37[32];
    v24 = v35;
    v25 = v36.m256i_i64[0];
    v23 = *(_QWORD *)v37;
  }
  v22 = v29;
  v21 = v28;
  v20 = v27;
  v19 = v26;
  v18 = v25;
  *(_QWORD *)v17 = v23;
  *(_OWORD *)&v17[8] = v24;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)&v35 = v17;
    *((_QWORD *)&v35 + 1) = sub_14104A7D0;
    *(_QWORD *)&v37[48] = 2;
    *(_QWORD *)&v37[56] = aCodexmateLibCo_2;
    *(_QWORD *)&v37[64] = 29;
    *(_QWORD *)&v37[80] = &unk_1419E7B7D;
    *(_QWORD *)&v37[88] = &v35;
    *(_QWORD *)v37 = 0;
    *(_QWORD *)&v37[8] = aCodexmateLibCo_2;
    *(_OWORD *)&v37[16] = 0x1Du;
    *(_QWORD *)&v37[32] = aSrcCoreSession_5;
    *(_QWORD *)&v37[40] = 20;
    *(_QWORD *)&v37[72] = 0x4000000001LL;
    sub_1414D53A0(&v38, v37);
  }
  sub_1402D3890((__int64)v37, a2, nullptr);
  v5 = *(_QWORD *)v37;
  v35 = *(_OWORD *)&v37[8];
  v36 = *(__m256i *)&v37[24];
  if ( *(_QWORD *)v37 == -1 )
  {
    v31 = v36.m256i_i64[0];
    v30 = v35;
    v34 = v36.m256i_i64[3];
    v33 = *(_OWORD *)&v36.m256i_u64[1];
    nullsub_1(v4);
    v9 = (void *)sub_140001650(28, 1);
    if ( !v9 )
      sub_141938D2B(1, 28);
    v32 = v9;
    qmemcpy(v9, "CODEX_APP_SERVER_UNAVAILABLE", 28);
    *(_QWORD *)v37 = v17;
    *(_QWORD *)&v37[8] = sub_14104A7D0;
    sub_1416ABFD0(&v15, &unk_1419E7BF3, v37);
    *(_QWORD *)v37 = 28;
    *(_QWORD *)&v37[8] = v32;
    *(_QWORD *)&v37[16] = 28;
    *(_OWORD *)&v37[24] = v15;
    *(_QWORD *)&v37[40] = v16;
    v10 = v34;
    if ( v34 == (_QWORD)v33 )
      sub_14190F490(&v33);
    v11 = *((_OWORD **)&v33 + 1);
    if ( v10 )
      sub_1418F44E0((__m128i *)(*((_QWORD *)&v33 + 1) + 48LL), *((const __m128i **)&v33 + 1), 48 * v10);
    v12 = *(_OWORD *)v37;
    v13 = *(_OWORD *)&v37[16];
    v11[2] = *(_OWORD *)&v37[32];
    v11[1] = v13;
    *v11 = v12;
    v34 = v10 + 1;
    *(_QWORD *)&v37[16] = v31;
    *(_OWORD *)v37 = v30;
    *(_QWORD *)&v37[40] = v10 + 1;
    *(_OWORD *)&v37[24] = v33;
    *(_OWORD *)(a1 + 8) = v30;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v37[32];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v37[40];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v37[16];
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v37[88];
    v6 = *(_OWORD *)&v37[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v37[72];
    *(_OWORD *)(a1 + 56) = v6;
    v7 = v35;
    v8 = *(_OWORD *)v36.m256i_i8;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v36.m256i_u64[2];
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = v5;
  }
  sub_14029DA50(v17);
  return a1;
}
