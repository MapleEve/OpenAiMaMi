// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d8be20 | name sub_140D8BE20
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D8BE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  _QWORD *v14; // r12
  char v15; // r15
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int64 v21; // rbx
  __int64 v22; // rdi
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  _OWORD v25[6]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v27; // [rsp+D0h] [rbp+50h]
  __int128 v28; // [rsp+E0h] [rbp+60h]
  __int128 v29; // [rsp+F0h] [rbp+70h]
  __int128 v30; // [rsp+100h] [rbp+80h]
  __int128 v31; // [rsp+110h] [rbp+90h]
  __int128 v32; // [rsp+120h] [rbp+A0h]
  __int128 v33; // [rsp+130h] [rbp+B0h]
  __int128 v34; // [rsp+140h] [rbp+C0h]
  __int128 v35; // [rsp+150h] [rbp+D0h]
  __int128 v36; // [rsp+160h] [rbp+E0h]
  __int64 v37; // [rsp+170h] [rbp+F0h]
  __int128 v38; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v39; // [rsp+188h] [rbp+108h]
  _QWORD v40[2]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v41; // [rsp+1A0h] [rbp+120h]
  __int128 v42; // [rsp+1B0h] [rbp+130h]
  __int128 v43; // [rsp+1C0h] [rbp+140h]
  __int128 v44; // [rsp+1D0h] [rbp+150h]
  __int128 v45; // [rsp+1E0h] [rbp+160h]
  __int128 v46; // [rsp+1F0h] [rbp+170h]
  __int128 v47; // [rsp+200h] [rbp+180h] BYREF
  __int128 v48; // [rsp+210h] [rbp+190h]
  __int128 v49; // [rsp+220h] [rbp+1A0h]
  __int128 v50; // [rsp+230h] [rbp+1B0h]
  __int128 v51; // [rsp+240h] [rbp+1C0h]
  __int128 v52; // [rsp+250h] [rbp+1D0h]
  _BYTE v53[88]; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v54; // [rsp+2B8h] [rbp+238h]
  __int128 v55; // [rsp+2C8h] [rbp+248h]
  __int128 v56; // [rsp+2D8h] [rbp+258h]
  __int128 v57; // [rsp+2E8h] [rbp+268h]
  __int128 v58; // [rsp+2F8h] [rbp+278h]
  __int64 v59; // [rsp+308h] [rbp+288h]
  __int128 v60; // [rsp+318h] [rbp+298h] BYREF
  __int64 v61; // [rsp+328h] [rbp+2A8h]
  _BYTE v62[112]; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v63; // [rsp+3A0h] [rbp+320h]
  __int128 v64; // [rsp+3A8h] [rbp+328h]
  __int64 v65; // [rsp+3B8h] [rbp+338h]
  __int128 v66; // [rsp+3C0h] [rbp+340h]
  __int64 v67; // [rsp+3D0h] [rbp+350h]
  char v68; // [rsp+3D8h] [rbp+358h]
  __int128 v69; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v70; // [rsp+3F0h] [rbp+370h]
  char v71; // [rsp+407h] [rbp+387h] BYREF
  __int64 v72; // [rsp+408h] [rbp+388h]

  v72 = -2;
  v40[0] = a4;
  v40[1] = a5;
  result = sub_140C751D0((__int64)v62, a3);
  if ( *(_DWORD *)v62 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v62[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v62[64];
    v10 = *(_OWORD *)v62;
    v11 = *(_OWORD *)&v62[16];
    v12 = *(_OWORD *)&v62[32];
    v13 = *(_OWORD *)&v62[48];
LABEL_10:
    *(_OWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    return result;
  }
  v14 = off_1421E6EC0;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)v53 = v40;
    *(_QWORD *)&v53[8] = sub_140186EE0;
    *(_QWORD *)&v62[48] = 2;
    *(_QWORD *)&v62[56] = aCodexmateLibCo_36;
    *(_QWORD *)&v62[64] = 35;
    *(_QWORD *)&v62[80] = &unk_141A4AD58;
    *(_QWORD *)&v62[88] = v53;
    *(_QWORD *)v62 = 0;
    *(_QWORD *)&v62[8] = aCodexmateLibCo_36;
    *(_OWORD *)&v62[16] = 0x23u;
    *(_QWORD *)&v62[32] = aSrcCoreRelayMa_5;
    *(_QWORD *)&v62[40] = 25;
    *(_QWORD *)&v62[72] = 0x9B400000001LL;
    sub_1414D53A0(&v71, v62);
  }
  sub_1403DCEA0(&v38, *(_QWORD *)(a6 + 8), *(_QWORD *)(a6 + 8) + (*(_QWORD *)(a6 + 16) << 8));
  sub_140229570(&v60, a6);
  v15 = *(_BYTE *)(a6 + 382);
  if ( v15 )
  {
    sub_1403F7D40(&v69, a6 + 128);
  }
  else
  {
    *(_QWORD *)&v69 = 0;
    *((_QWORD *)&v69 + 1) = 8;
    v70 = 0;
  }
  v63 = v39;
  *(_OWORD *)&v62[96] = v38;
  v64 = v60;
  v65 = v61;
  v68 = v15;
  v66 = v69;
  v67 = v70;
  *(_QWORD *)v62 = -1;
  sub_1401BDEC0((__int64)v53, (const __m128i *)v62, a3);
  result = *(_QWORD *)v53;
  v47 = *(_OWORD *)&v53[8];
  v48 = *(_OWORD *)&v53[24];
  v49 = *(_OWORD *)&v53[40];
  v50 = *(_OWORD *)&v53[56];
  v51 = *(_OWORD *)&v53[72];
  v52 = v54;
  if ( *(_QWORD *)v53 == -2 )
  {
    *(_OWORD *)(a1 + 80) = v52;
    *(_OWORD *)(a1 + 64) = v51;
    v10 = v47;
    v11 = v48;
    v12 = v49;
    v13 = v50;
    goto LABEL_10;
  }
  v37 = v59;
  v36 = v58;
  v35 = v57;
  v34 = v56;
  v33 = v55;
  v27 = v47;
  v28 = v48;
  v29 = v49;
  v30 = v50;
  v31 = v51;
  v32 = v52;
  v26 = *(_QWORD *)v53;
  *(_QWORD *)v53 = a6;
  *(_QWORD *)&v53[8] = a3;
  *(_QWORD *)&v53[16] = a2;
  *(_QWORD *)&v53[24] = &v26;
  sub_140BD3740((__int128 *)v62, a3, 0, 0, (__int64)aNativeoffCompe_0, 22);
  v16 = *(_QWORD *)v62;
  v41 = *(_OWORD *)&v62[8];
  v42 = *(_OWORD *)&v62[24];
  v43 = *(_OWORD *)&v62[40];
  v44 = *(_OWORD *)&v62[56];
  v45 = *(_OWORD *)&v62[72];
  v46 = *(_OWORD *)&v62[88];
  if ( *(_QWORD *)v62 == -1 )
  {
    v25[5] = v46;
    v25[4] = v45;
    v25[3] = v44;
    v25[2] = v43;
    v25[1] = v42;
    v25[0] = v41;
    sub_140C1E360((__int64)v62, (__int64)v25);
    v16 = *(_QWORD *)v62;
    *(_OWORD *)v53 = *(_OWORD *)&v62[8];
    *(_OWORD *)&v53[16] = *(_OWORD *)&v62[24];
    *(_OWORD *)&v53[32] = *(_OWORD *)&v62[40];
    *(_OWORD *)&v53[48] = *(_OWORD *)&v62[56];
    *(_OWORD *)&v53[64] = *(_OWORD *)&v62[72];
    *(_QWORD *)&v53[80] = *(_QWORD *)&v62[88];
    if ( *(_QWORD *)v62 == -1 )
    {
      *(_OWORD *)&v62[48] = *(_OWORD *)&v53[48];
      *(_OWORD *)&v62[32] = *(_OWORD *)&v53[32];
      *(_OWORD *)&v62[16] = *(_OWORD *)&v53[16];
      *(_OWORD *)v62 = *(_OWORD *)v53;
      v21 = *(_QWORD *)&v53[80];
      v70 = *(_QWORD *)&v53[80];
      v69 = *(_OWORD *)&v53[64];
      if ( *(_QWORD *)&v53[80] )
      {
        if ( *v14 <= 1u )
        {
          v22 = *((_QWORD *)&v69 + 1);
        }
        else
        {
          v22 = *((_QWORD *)&v69 + 1);
          sub_140D1EE10((unsigned int)v53, DWORD2(v69), *(_DWORD *)&v53[80], (unsigned int)&unk_141A4AB0B, 3);
          *(_QWORD *)&v48 = *(_QWORD *)&v53[16];
          v47 = *(_OWORD *)v53;
          *(_QWORD *)&v60 = &v47;
          *((_QWORD *)&v60 + 1) = sub_1400015F0;
          *(_QWORD *)v53 = aCodexmateLibCo_36;
          *(_QWORD *)&v53[8] = 35;
          *(_QWORD *)&v53[16] = aCodexmateLibCo_36;
          *(_QWORD *)&v53[24] = 35;
          *(_QWORD *)&v53[32] = &off_141A4ADE8;
          sub_140BAD520(&unk_141A4ADA5, &v60, 2, v53);
          if ( (_QWORD)v47 )
            sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
        }
        *(_QWORD *)a1 = -1;
        v23 = (_QWORD *)(v22 + 8);
        do
        {
          v24 = *(v23 - 1);
          if ( v24 )
            sub_140001660(*v23, v24, 1);
          v23 += 3;
          --v21;
        }
        while ( v21 );
      }
      else
      {
        *(_QWORD *)a1 = -1;
        v22 = *((_QWORD *)&v69 + 1);
      }
      if ( (_QWORD)v69 )
        sub_140001660(v22, 24 * v69, 8);
      sub_140BAD350(v62);
      return sub_140D1CCF0(&v26);
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v53[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v53[64];
    v17 = *(_OWORD *)v53;
    v18 = *(_OWORD *)&v53[16];
    v19 = *(_OWORD *)&v53[32];
    v20 = *(_OWORD *)&v53[48];
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v46;
    *(_OWORD *)(a1 + 72) = v45;
    v17 = v41;
    v18 = v42;
    v19 = v43;
    v20 = v44;
  }
  *(_OWORD *)(a1 + 56) = v20;
  *(_OWORD *)(a1 + 40) = v19;
  *(_OWORD *)(a1 + 24) = v18;
  *(_OWORD *)(a1 + 8) = v17;
  *(_QWORD *)a1 = v16;
  return sub_140D1CCF0(&v26);
}
