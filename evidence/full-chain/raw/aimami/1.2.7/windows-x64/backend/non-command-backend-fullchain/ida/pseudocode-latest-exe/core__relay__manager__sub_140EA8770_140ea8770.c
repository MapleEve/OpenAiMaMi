// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140ea8770 | successor of pre-update 0x140d8be20 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.786, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EA8770(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v9; // kr00_16
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int128 v12; // kr20_16
  __int128 v13; // kr30_16
  _QWORD *v14; // r13
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  _BYTE v23[40]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+78h] [rbp-8h]
  __int128 v25; // [rsp+88h] [rbp+8h]
  __int128 v26; // [rsp+98h] [rbp+18h]
  __int128 v27; // [rsp+A8h] [rbp+28h]
  __int128 v28; // [rsp+B8h] [rbp+38h]
  __int128 v29; // [rsp+C8h] [rbp+48h]
  __int128 v30; // [rsp+D8h] [rbp+58h]
  __int128 v31; // [rsp+E8h] [rbp+68h]
  __int64 v32; // [rsp+F8h] [rbp+78h]
  __int128 v33; // [rsp+100h] [rbp+80h] BYREF
  __int128 v34; // [rsp+110h] [rbp+90h]
  __int128 v35; // [rsp+120h] [rbp+A0h]
  __int128 v36; // [rsp+130h] [rbp+B0h]
  __int128 v37; // [rsp+140h] [rbp+C0h]
  __int128 v38; // [rsp+150h] [rbp+D0h]
  _QWORD v39[2]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v40[2]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v41; // [rsp+180h] [rbp+100h] BYREF
  __int128 v42; // [rsp+190h] [rbp+110h]
  __int128 v43; // [rsp+1A0h] [rbp+120h]
  __int128 v44; // [rsp+1B0h] [rbp+130h]
  __int128 v45; // [rsp+1C0h] [rbp+140h]
  __int128 v46; // [rsp+1D0h] [rbp+150h]
  __int128 v47; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v48; // [rsp+1F0h] [rbp+170h]
  _BYTE v49[104]; // [rsp+200h] [rbp+180h] BYREF
  _BYTE v50[104]; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v51; // [rsp+318h] [rbp+298h]
  __int128 v52; // [rsp+328h] [rbp+2A8h]
  __int128 v53; // [rsp+338h] [rbp+2B8h]
  __int128 v54; // [rsp+348h] [rbp+2C8h]
  __int64 v55; // [rsp+358h] [rbp+2D8h]
  char v56; // [rsp+36Fh] [rbp+2EFh] BYREF
  __int64 v57; // [rsp+370h] [rbp+2F0h]

  v57 = -2;
  v40[0] = a4;
  v40[1] = a5;
  sub_1407D5CC0(v49);
  v9 = *(_OWORD *)&v49[32];
  *(_OWORD *)v23 = *(_OWORD *)&v49[48];
  *(_OWORD *)&v23[16] = *(_OWORD *)&v49[64];
  if ( *(_QWORD *)v49 != -1 )
  {
    *(_OWORD *)&v50[80] = *(_OWORD *)&v49[80];
    *(_QWORD *)&v50[16] = *(_QWORD *)&v49[16];
    *(_OWORD *)&v50[24] = *(_OWORD *)&v49[24];
    *(_QWORD *)&v50[40] = *(_QWORD *)&v49[40];
    *(_OWORD *)&v50[48] = *(_OWORD *)v23;
    *(_OWORD *)&v50[64] = *(_OWORD *)&v23[16];
    *(_OWORD *)v50 = *(_OWORD *)v49;
LABEL_10:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v50[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v50[64];
    v11 = *(_QWORD *)&v50[8];
    result = *(_QWORD *)v50;
    v12 = *(_OWORD *)&v50[16];
    v13 = *(_OWORD *)&v50[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v50[48];
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = __PAIR128__(v11, result);
    return result;
  }
  if ( *(_QWORD *)&v49[8] != -1 )
  {
    if ( *(_QWORD *)&v49[8] )
      sub_140001660(*(_QWORD *)&v49[16], *(_QWORD *)&v49[8], 1);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v9 + 1), v9, 1);
  }
  sub_1407E52E0(v49);
  if ( *(_DWORD *)v49 == -1 )
  {
    sub_1408D1F30(v50, a3);
    if ( *(_QWORD *)v50 != -1 )
      goto LABEL_10;
  }
  else
  {
    *(_OWORD *)&v50[80] = *(_OWORD *)&v49[80];
    *(_OWORD *)&v50[64] = *(_OWORD *)&v49[64];
    *(_OWORD *)&v50[48] = *(_OWORD *)&v49[48];
    *(_OWORD *)&v50[32] = *(_OWORD *)&v49[32];
    *(_OWORD *)&v50[16] = *(_OWORD *)&v49[16];
    *(_OWORD *)v50 = *(_OWORD *)v49;
    if ( *(_QWORD *)v49 != -1 )
      goto LABEL_10;
  }
  v14 = off_14223FF10;
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    *(_QWORD *)v50 = v40;
    *(_QWORD *)&v50[8] = sub_140191200;
    *(_QWORD *)&v49[48] = 2;
    *(_QWORD *)&v49[56] = aCodexmateLibCo_50;
    *(_QWORD *)&v49[64] = 35;
    *(_QWORD *)&v49[80] = &unk_141AA0150;
    *(_QWORD *)&v49[88] = v50;
    *(_QWORD *)v49 = 0;
    *(_QWORD *)&v49[8] = aCodexmateLibCo_50;
    *(_OWORD *)&v49[16] = 0x23u;
    *(_QWORD *)&v49[32] = aSrcCoreRelayMa_4;
    *(_QWORD *)&v49[40] = 25;
    *(_QWORD *)&v49[72] = 0x9CE00000001LL;
    sub_141503E20(&v56, v49);
  }
  sub_1401DFE20(v49, a6);
  sub_1401E01F0(v50, v49, a3);
  result = *(_QWORD *)v50;
  v41 = *(_OWORD *)&v50[8];
  v42 = *(_OWORD *)&v50[24];
  v43 = *(_OWORD *)&v50[40];
  v44 = *(_OWORD *)&v50[56];
  v45 = *(_OWORD *)&v50[72];
  v46 = *(_OWORD *)&v50[88];
  if ( *(_QWORD *)v50 == -2 )
  {
    *(_OWORD *)(a1 + 80) = v46;
    *(_OWORD *)(a1 + 64) = v45;
    v15 = v41;
    v16 = v42;
    v17 = v43;
    *(_OWORD *)(a1 + 48) = v44;
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
    return result;
  }
  v32 = v55;
  v31 = v54;
  v30 = v53;
  v29 = v52;
  v28 = v51;
  *(_OWORD *)&v23[8] = v41;
  *(_OWORD *)&v23[24] = v42;
  v24 = v43;
  v25 = v44;
  v26 = v45;
  v27 = v46;
  *(_QWORD *)v23 = *(_QWORD *)v50;
  *(_QWORD *)v50 = a6;
  *(_QWORD *)&v50[8] = a3;
  *(_QWORD *)&v50[16] = a2;
  *(_QWORD *)&v50[24] = v23;
  sub_140DC2880((__int64)v49, a3, (__int64)a3, 0, 0, (__int64 *)v50, *(_QWORD *)(a2 + 24), (__int64)a3, a2, a6);
  v18 = *(_QWORD *)v49;
  v33 = *(_OWORD *)&v49[8];
  v34 = *(_OWORD *)&v49[24];
  v35 = *(_OWORD *)&v49[40];
  v36 = *(_OWORD *)&v49[56];
  v37 = *(_OWORD *)&v49[72];
  v38 = *(_OWORD *)&v49[88];
  if ( *(_QWORD *)v49 == -1 )
  {
    sub_140EB8E30(v49, &v33);
    v18 = *(_QWORD *)v49;
    *(_OWORD *)v50 = *(_OWORD *)&v49[8];
    *(_OWORD *)&v50[16] = *(_OWORD *)&v49[24];
    *(_OWORD *)&v50[32] = *(_OWORD *)&v49[40];
    *(_OWORD *)&v50[48] = *(_OWORD *)&v49[56];
    *(_OWORD *)&v50[64] = *(_OWORD *)&v49[72];
    *(_QWORD *)&v50[80] = *(_QWORD *)&v49[88];
    if ( *(_QWORD *)v49 == -1 )
    {
      *(_OWORD *)&v49[48] = *(_OWORD *)&v50[48];
      *(_OWORD *)&v49[32] = *(_OWORD *)&v50[32];
      *(_OWORD *)&v49[16] = *(_OWORD *)&v50[16];
      *(_OWORD *)v49 = *(_OWORD *)v50;
      v48 = *(_QWORD *)&v50[80];
      v47 = *(_OWORD *)&v50[64];
      if ( *(_QWORD *)&v50[80] )
      {
        if ( *v14 >= 2u )
        {
          sub_1406C5480((unsigned int)v50, DWORD2(v47), *(_DWORD *)&v50[80], (unsigned int)&unk_141A9B28E, 3);
          *(_QWORD *)&v42 = *(_QWORD *)&v50[16];
          v41 = *(_OWORD *)v50;
          v39[0] = &v41;
          v39[1] = sub_1400015F0;
          *(_QWORD *)v50 = aCodexmateLibCo_50;
          *(_QWORD *)&v50[8] = 35;
          *(_QWORD *)&v50[16] = aCodexmateLibCo_50;
          *(_QWORD *)&v50[24] = 35;
          *(_QWORD *)&v50[32] = &off_141AA01C8;
          sub_140AF72B0(&unk_141AA0187, v39, 2, v50);
          if ( (_QWORD)v41 )
            sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
        }
      }
      *(_QWORD *)a1 = -1;
      sub_1402346F0(&v47);
      if ( (_QWORD)v47 )
        sub_140001660(*((_QWORD *)&v47 + 1), 24 * v47, 8);
      sub_140D8A7D0(v49);
      return sub_140D8A630(v23);
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v50[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v50[64];
    v19 = *(_OWORD *)v50;
    v20 = *(_OWORD *)&v50[16];
    v21 = *(_OWORD *)&v50[32];
    v22 = *(_OWORD *)&v50[48];
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v38;
    *(_OWORD *)(a1 + 72) = v37;
    v19 = v33;
    v20 = v34;
    v21 = v35;
    v22 = v36;
  }
  *(_OWORD *)(a1 + 56) = v22;
  *(_OWORD *)(a1 + 40) = v21;
  *(_OWORD *)(a1 + 24) = v20;
  *(_OWORD *)(a1 + 8) = v19;
  *(_QWORD *)a1 = v18;
  return sub_140D8A630(v23);
}
