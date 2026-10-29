// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407e63d0 | successor of pre-update 0x14023f0b0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_1407E63D0(__int64 a1)
{
  unsigned __int64 v1; // rdi
  _QWORD *v2; // r14
  __int64 *v3; // rax
  __int64 *v4; // r12
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r13
  __int128 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  __int128 v21; // [rsp+80h] [rbp+0h]
  __int64 v22; // [rsp+90h] [rbp+10h]
  char v23; // [rsp+98h] [rbp+18h]
  _BYTE v24[7]; // [rsp+99h] [rbp+19h]
  __int64 v25; // [rsp+A0h] [rbp+20h]
  _QWORD *v26; // [rsp+A8h] [rbp+28h]
  __int64 v27; // [rsp+B0h] [rbp+30h]
  __int64 v28; // [rsp+B8h] [rbp+38h]
  _QWORD v29[2]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v30; // [rsp+D0h] [rbp+50h]
  __int64 v31; // [rsp+E0h] [rbp+60h]
  __int64 v32; // [rsp+E8h] [rbp+68h]
  __int64 v33; // [rsp+F0h] [rbp+70h]
  __int64 v34; // [rsp+F8h] [rbp+78h]
  __int64 v35; // [rsp+100h] [rbp+80h]
  __int64 v36; // [rsp+108h] [rbp+88h]
  __int128 v37; // [rsp+110h] [rbp+90h] BYREF
  __int128 v38; // [rsp+120h] [rbp+A0h]
  __int128 v39; // [rsp+130h] [rbp+B0h]
  __int128 v40; // [rsp+140h] [rbp+C0h]
  __int128 v41; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v42; // [rsp+160h] [rbp+E0h]
  _BYTE v43[72]; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v44; // [rsp+1D8h] [rbp+158h]
  __int128 v45; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v46; // [rsp+1F0h] [rbp+170h]
  __int128 v47; // [rsp+200h] [rbp+180h]
  __int128 v48; // [rsp+210h] [rbp+190h]
  __int128 v49; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v50; // [rsp+230h] [rbp+1B0h]
  _BYTE v51[80]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v52; // [rsp+290h] [rbp+210h]
  __int64 v53; // [rsp+2A0h] [rbp+220h]
  char v54; // [rsp+2A8h] [rbp+228h]
  _DWORD v55[5]; // [rsp+2A9h] [rbp+229h]
  char v56; // [rsp+2BFh] [rbp+23Fh] BYREF
  __int64 v57; // [rsp+2C0h] [rbp+240h]

  v57 = -2;
  sub_140A2C460(v51, a1);
  v25 = *(_QWORD *)&v51[8];
  v30 = *(_OWORD *)v51;
  v27 = *(_QWORD *)v51;
  v33 = *(_QWORD *)&v51[8] + 32LL * *(_QWORD *)&v51[16];
  v28 = v33;
  v1 = 32LL * *(_QWORD *)&v51[16] - 32;
  v2 = (_QWORD *)(*(_QWORD *)&v51[8] + 40LL);
  v3 = *(__int64 **)&v51[8];
  v34 = 0;
  v35 = 0;
  while ( 1 )
  {
    if ( v3 == (__int64 *)v33 )
      goto LABEL_56;
    v4 = v3 + 4;
    v26 = v3 + 4;
    v31 = *v3;
    if ( v31 == -1 )
      break;
    v5 = v3[2];
    v44 = v3[1];
    sub_1416C49D0(v51, v44, v5);
    if ( *(_DWORD *)v51 == 2 )
    {
      if ( (v51[8] & 3u) - 2 >= 2 && (v51[8] & 3) != 0 )
      {
        --*(_QWORD *)&v51[8];
        v51[0] = 3;
        sub_1416EBAD0(&v51[8]);
      }
      v6 = 0;
      v7 = 0;
      goto LABEL_49;
    }
    sub_1407D83C0((__int64)v51, v44, v5, 32769);
    if ( v54 == -1 )
    {
      *(_OWORD *)&v43[48] = *(_OWORD *)&v51[48];
      *(_OWORD *)&v43[32] = *(_OWORD *)&v51[32];
      *(_OWORD *)&v43[16] = *(_OWORD *)&v51[16];
      *(_OWORD *)v43 = *(_OWORD *)v51;
      v29[0] = v43;
      v29[1] = sub_14142D4D0;
      sub_1416DAFA0(&v45, &unk_141A47418, v29);
      v37 = v45;
      *(_QWORD *)&v38 = v46;
      sub_1407785F0(v43);
      v41 = v37;
      v42 = v38;
      *(_QWORD *)v43 = 10;
      *(_QWORD *)&v43[24] = v38;
      *(_OWORD *)&v43[8] = v37;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v45 = v43;
        *((_QWORD *)&v45 + 1) = sub_140D76130;
        *(_QWORD *)&v51[48] = 2;
        *(_QWORD *)&v51[56] = aCodexmateLibCo_11;
        *(_QWORD *)&v51[64] = 51;
        *(_QWORD *)&v52 = &unk_141A4ADAE;
        *((_QWORD *)&v52 + 1) = &v45;
        *(_QWORD *)v51 = 0;
        *(_QWORD *)&v51[8] = aCodexmateLibCo_11;
        *(_OWORD *)&v51[16] = 0x33u;
        *(_QWORD *)&v51[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v51[40] = 41;
        *(_QWORD *)&v51[72] = 0x1F600000001LL;
        sub_141503E20(&v56, v51);
      }
      sub_140778C60(v43);
      v7 = 0;
      goto LABEL_27;
    }
    v18 = *(_OWORD *)&v51[32];
    v19 = *(_OWORD *)&v51[48];
    v20 = *(_OWORD *)&v51[64];
    v21 = v52;
    *(_DWORD *)&v24[3] = *(_DWORD *)((char *)v55 + 3);
    *(_DWORD *)v24 = v55[0];
    v50 = *(_QWORD *)&v51[24];
    v49 = *(_OWORD *)&v51[8];
    v42 = *(_QWORD *)&v51[24];
    v15 = *(_QWORD *)v51;
    v17 = *(_QWORD *)&v51[24];
    v16 = *(_OWORD *)&v51[8];
    v22 = v53;
    v23 = v54;
    *(_QWORD *)&v41 = aAimai1_1;
    *((_QWORD *)&v41 + 1) = 6;
    *(_QWORD *)&v37 = &v41;
    *((_QWORD *)&v37 + 1) = &unk_141A454D8;
    *(_QWORD *)&v38 = &off_141A4AC18;
    *((_QWORD *)&v38 + 1) = &unk_141A454D8;
    *(_QWORD *)&v39 = &off_141A4A618;
    *((_QWORD *)&v39 + 1) = &unk_141A454D8;
    sub_1407C4200(v51, &v15, aSelectCountFro_2, 136);
    *(_OWORD *)v43 = *(_OWORD *)&v51[8];
    *(_OWORD *)&v43[16] = *(_OWORD *)&v51[24];
    *(_OWORD *)&v43[32] = *(_OWORD *)&v51[40];
    *(_OWORD *)&v43[48] = *(_OWORD *)&v51[56];
    if ( *(_DWORD *)v51 == 1 )
    {
      v48 = *(_OWORD *)&v43[48];
      v47 = *(_OWORD *)&v43[32];
      v46 = *(_OWORD *)&v43[16];
      v45 = *(_OWORD *)v43;
    }
    else
    {
      *(_OWORD *)&v51[48] = *(_OWORD *)&v43[48];
      *(_OWORD *)&v51[32] = *(_OWORD *)&v43[32];
      *(_OWORD *)&v51[16] = *(_OWORD *)&v43[16];
      *(_OWORD *)v51 = *(_OWORD *)v43;
      sub_1409011A0(&v45, v51, &v37, 3);
      sub_140778780(v51);
    }
    v7 = *((_QWORD *)&v45 + 1);
    if ( (_QWORD)v45 == -1 )
    {
      if ( *((__int64 *)&v45 + 1) <= 0 )
        v7 = 0;
    }
    else
    {
      *(_OWORD *)&v43[48] = v48;
      *(_OWORD *)&v43[32] = v47;
      *(_OWORD *)&v43[16] = v46;
      *(_OWORD *)v43 = v45;
      if ( *(_QWORD *)off_14223FF10 > 1u )
      {
        *(_QWORD *)&v45 = v43;
        *((_QWORD *)&v45 + 1) = sub_14142D4D0;
        *(_QWORD *)&v51[48] = 2;
        *(_QWORD *)&v51[56] = aCodexmateLibCo_11;
        *(_QWORD *)&v51[64] = 51;
        *(_QWORD *)&v52 = &unk_141A47660;
        *((_QWORD *)&v52 + 1) = &v45;
        *(_QWORD *)v51 = 0;
        *(_QWORD *)&v51[8] = aCodexmateLibCo_11;
        *(_OWORD *)&v51[16] = 0x33u;
        *(_QWORD *)&v51[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v51[40] = 41;
        *(_QWORD *)&v51[72] = 0x20B00000001LL;
        sub_141503E20(&v56, v51);
      }
      sub_1407785F0(v43);
      v7 = 0;
    }
    sub_1407C4200(v43, &v15, aSelectSourceFr, 82);
    if ( v43[0] )
    {
      v48 = *(_OWORD *)&v43[56];
      v47 = *(_OWORD *)&v43[40];
      v46 = *(_OWORD *)&v43[24];
      v45 = *(_OWORD *)&v43[8];
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v49 = &v45;
        *((_QWORD *)&v49 + 1) = sub_14142D4D0;
        *(_QWORD *)&v51[48] = 2;
        *(_QWORD *)&v51[56] = aCodexmateLibCo_11;
        *(_QWORD *)&v51[64] = 51;
        *(_QWORD *)&v52 = &unk_141A4AD71;
        *((_QWORD *)&v52 + 1) = &v49;
        *(_QWORD *)v51 = 0;
        *(_QWORD *)&v51[8] = aCodexmateLibCo_11;
        *(_OWORD *)&v51[16] = 0x33u;
        *(_QWORD *)&v51[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v51[40] = 41;
        *(_QWORD *)&v51[72] = 0x21700000001LL;
        sub_141503E20(&v56, v51);
      }
      sub_1407785F0(&v45);
      sub_140777BC0(&v15);
LABEL_27:
      v6 = 0;
      goto LABEL_49;
    }
    v40 = *(_OWORD *)&v43[56];
    v39 = *(_OWORD *)&v43[40];
    v38 = *(_OWORD *)&v43[24];
    v37 = *(_OWORD *)&v43[8];
    sub_140A08D80((unsigned int)v51, (unsigned int)aOpenai_1, 6, *(_DWORD *)&v43[8], *(__int64 *)&v43[64]);
    if ( *(_QWORD *)v51 == -1 )
    {
      v49 = (unsigned __int64)&v37;
      v6 = 0;
      while ( 1 )
      {
        sub_1408402E0(v51, &v49);
        *(_QWORD *)&v8 = *(_QWORD *)v51;
        if ( *(_QWORD *)v51 != -1 )
          break;
        if ( !*((_QWORD *)&v49 + 1) )
        {
          sub_1407784E0(&v49);
          goto LABEL_48;
        }
        sub_1406583D0(v51, (char *)&v49 + 8, 0, &off_141A47698);
        v8 = *(_OWORD *)v51;
        v10 = *(_QWORD *)&v51[24];
        if ( *(_QWORD *)v51 == -1 )
        {
          v11 = *(_QWORD *)&v51[16];
          if ( *(_QWORD *)&v51[8] == -1 )
          {
            v11 = 1;
            *((_QWORD *)&v8 + 1) = 0;
          }
          v32 = *((_QWORD *)&v8 + 1);
          if ( *(_QWORD *)&v51[8] == -1 )
            v10 = 0;
          v36 = v11;
          v6 += (unsigned __int8)sub_140842DD0(aSubagent, 10, v11, v10) ^ 1u;
          if ( v32 )
            sub_140001660(v36, v32, 1);
        }
        else
        {
          v9 = *(_QWORD *)&v51[16];
          v45 = *(_OWORD *)&v51[32];
          v46 = *(_OWORD *)&v51[48];
LABEL_38:
          *(_OWORD *)&v43[48] = v46;
          *(_OWORD *)&v43[32] = v45;
          *(_OWORD *)v43 = v8;
          *(_QWORD *)&v43[16] = v9;
          *(_QWORD *)&v43[24] = v10;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)&v45 = v43;
            *((_QWORD *)&v45 + 1) = sub_14142D4D0;
            *(_QWORD *)&v51[48] = 2;
            *(_QWORD *)&v51[56] = aCodexmateLibCo_11;
            *(_QWORD *)&v51[64] = 51;
            *(_QWORD *)&v52 = &unk_141A4AD02;
            *((_QWORD *)&v52 + 1) = &v45;
            *(_QWORD *)v51 = 0;
            *(_QWORD *)&v51[8] = aCodexmateLibCo_11;
            *(_OWORD *)&v51[16] = 0x33u;
            *(_QWORD *)&v51[32] = aSrcCoreRelayCo_0;
            *(_QWORD *)&v51[40] = 41;
            *(_QWORD *)&v51[72] = 0x22E00000001LL;
            sub_141503E20(&v56, v51);
          }
          sub_1407785F0(v43);
          ++v6;
        }
      }
      *((_QWORD *)&v8 + 1) = *(_QWORD *)&v51[8];
      v10 = *(_QWORD *)&v51[24];
      v9 = *(_QWORD *)&v51[16];
      v46 = *(_OWORD *)&v51[48];
      v45 = *(_OWORD *)&v51[32];
      goto LABEL_38;
    }
    *(_QWORD *)&v43[56] = *(_QWORD *)&v51[56];
    *(_OWORD *)&v43[40] = *(_OWORD *)&v51[40];
    *(_OWORD *)&v43[24] = *(_OWORD *)&v51[24];
    *(_QWORD *)v43 = *(_QWORD *)v51;
    *(_OWORD *)&v43[8] = *(_OWORD *)&v51[8];
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v45 = v43;
      *((_QWORD *)&v45 + 1) = sub_14142D4D0;
      *(_QWORD *)&v51[48] = 2;
      *(_QWORD *)&v51[56] = aCodexmateLibCo_11;
      *(_QWORD *)&v51[64] = 51;
      *(_QWORD *)&v52 = &unk_141A4AD3C;
      *((_QWORD *)&v52 + 1) = &v45;
      *(_QWORD *)v51 = 0;
      *(_QWORD *)&v51[8] = aCodexmateLibCo_11;
      *(_OWORD *)&v51[16] = 0x33u;
      *(_QWORD *)&v51[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v51[40] = 41;
      *(_QWORD *)&v51[72] = 0x23800000001LL;
      sub_141503E20(&v56, v51);
    }
    sub_1407785F0(v43);
    v6 = 0;
LABEL_48:
    sub_140778780(&v37);
    sub_140777BC0(&v15);
LABEL_49:
    if ( v31 )
      sub_140001660(v44, v31, 1);
    v34 += v6;
    v35 += v7;
    v1 -= 32LL;
    v2 += 4;
    v3 = v4;
  }
  if ( (__int64 *)v33 != v4 )
  {
    v12 = v1 >> 5;
    do
    {
      v13 = *(v2 - 1);
      if ( v13 )
        sub_140001660(*v2, v13, 1);
      v2 += 4;
      --v12;
    }
    while ( v12 );
  }
LABEL_56:
  if ( (_QWORD)v30 )
    sub_140001660(*((_QWORD *)&v30 + 1), 32 * v30, 8);
  return v35;
}
