// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14023f0b0 | name sub_14023F0B0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14023F0B0(__int64 a1)
{
  unsigned __int64 v1; // r13
  _QWORD *v2; // r14
  __int64 *v3; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r9
  __int128 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // r13
  __int64 v14; // rdx
  _OWORD v16[7]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+20h]
  _QWORD *v18; // [rsp+A8h] [rbp+28h]
  __int64 v19; // [rsp+B0h] [rbp+30h]
  __int64 v20; // [rsp+B8h] [rbp+38h]
  _QWORD v21[2]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v22; // [rsp+D0h] [rbp+50h]
  __int128 v23; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v24; // [rsp+F0h] [rbp+70h]
  __int128 v25; // [rsp+100h] [rbp+80h]
  __int128 v26; // [rsp+110h] [rbp+90h]
  __int64 v27; // [rsp+120h] [rbp+A0h]
  __int64 v28; // [rsp+128h] [rbp+A8h]
  __int64 v29; // [rsp+130h] [rbp+B0h]
  __int64 v30; // [rsp+138h] [rbp+B8h]
  __int64 v31; // [rsp+140h] [rbp+C0h]
  __int64 v32; // [rsp+148h] [rbp+C8h]
  __int128 v33; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v34; // [rsp+160h] [rbp+E0h]
  __int128 v35; // [rsp+170h] [rbp+F0h]
  __int128 v36; // [rsp+180h] [rbp+100h]
  __int128 v37; // [rsp+190h] [rbp+110h]
  __int128 v38; // [rsp+1A0h] [rbp+120h]
  _BYTE v39[72]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v40; // [rsp+1F8h] [rbp+178h]
  void *v41; // [rsp+200h] [rbp+180h]
  __int128 *v42; // [rsp+208h] [rbp+188h]
  __int64 v43; // [rsp+218h] [rbp+198h]
  __int128 *v44; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 (__fastcall *v45)(_QWORD, _QWORD); // [rsp+228h] [rbp+1A8h] BYREF
  _BYTE v46[80]; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v47; // [rsp+280h] [rbp+200h]
  __int128 v48; // [rsp+290h] [rbp+210h]
  char v49; // [rsp+2AFh] [rbp+22Fh] BYREF
  __int64 v50; // [rsp+2B0h] [rbp+230h]

  v50 = -2;
  sub_1401B7010(v46, a1);
  v17 = *(_QWORD *)&v46[8];
  v22 = *(_OWORD *)v46;
  v19 = *(_QWORD *)v46;
  v29 = *(_QWORD *)&v46[8] + 32LL * *(_QWORD *)&v46[16];
  v20 = v29;
  v1 = 32LL * *(_QWORD *)&v46[16] - 32;
  v2 = (_QWORD *)(*(_QWORD *)&v46[8] + 40LL);
  v3 = *(__int64 **)&v46[8];
  v30 = 0;
  v31 = 0;
  while ( 1 )
  {
    if ( v3 == (__int64 *)v29 )
      goto LABEL_56;
    v4 = v3 + 4;
    v18 = v3 + 4;
    v27 = *v3;
    if ( v27 == -1 )
      break;
    v5 = v3[2];
    v43 = v3[1];
    sub_141695A00(v46, v43, v5);
    if ( *(_DWORD *)v46 == 2 )
    {
      if ( (v46[8] & 3u) - 2 >= 2 && (v46[8] & 3) != 0 )
      {
        --*(_QWORD *)&v46[8];
        v46[0] = 3;
        sub_1416BCB00(&v46[8]);
      }
      v6 = 0;
      v7 = 0;
      goto LABEL_49;
    }
    sub_140231840((__int64)v46, v43, v5);
    if ( BYTE8(v48) == 0xFF )
    {
      v38 = v47;
      v37 = *(_OWORD *)&v46[64];
      v36 = *(_OWORD *)&v46[48];
      v35 = *(_OWORD *)&v46[32];
      v34 = *(_OWORD *)&v46[16];
      v33 = *(_OWORD *)v46;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v23 = &v33;
        *((_QWORD *)&v23 + 1) = sub_14104A7D0;
        *(_QWORD *)&v39[48] = 2;
        *(_QWORD *)&v39[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v39[64] = 51;
        v41 = &unk_1419DEA76;
        v42 = &v23;
        *(_QWORD *)v39 = 0;
        *(_QWORD *)&v39[8] = aCodexmateLibCo_0;
        *(_OWORD *)&v39[16] = 0x33u;
        *(_QWORD *)&v39[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v39[40] = 41;
        v40 = 0x1F600000001LL;
        sub_1414D53A0(&v49, v39);
      }
      sub_1401954F0(&v33);
      v7 = 0;
      goto LABEL_27;
    }
    v16[6] = v48;
    v16[5] = v47;
    v16[4] = *(_OWORD *)&v46[64];
    v16[3] = *(_OWORD *)&v46[48];
    v16[2] = *(_OWORD *)&v46[32];
    v16[1] = *(_OWORD *)&v46[16];
    v16[0] = *(_OWORD *)v46;
    v21[0] = aAimai1_0;
    v21[1] = 6;
    *(_QWORD *)&v23 = v21;
    *((_QWORD *)&v23 + 1) = &unk_1419D4100;
    *(_QWORD *)&v24 = &off_1419DE8E0;
    *((_QWORD *)&v24 + 1) = &unk_1419D4100;
    *(_QWORD *)&v25 = &off_1419DE160;
    *((_QWORD *)&v25 + 1) = &unk_1419D4100;
    sub_1401C6270(v46, v16, aSelectCountFro_4, 136);
    *(_OWORD *)v39 = *(_OWORD *)&v46[8];
    *(_OWORD *)&v39[16] = *(_OWORD *)&v46[24];
    *(_OWORD *)&v39[32] = *(_OWORD *)&v46[40];
    *(_OWORD *)&v39[48] = *(_OWORD *)&v46[56];
    if ( *(_DWORD *)v46 == 1 )
    {
      v36 = *(_OWORD *)&v39[48];
      v35 = *(_OWORD *)&v39[32];
      v34 = *(_OWORD *)&v39[16];
      v33 = *(_OWORD *)v39;
    }
    else
    {
      *(_OWORD *)&v46[48] = *(_OWORD *)&v39[48];
      *(_OWORD *)&v46[32] = *(_OWORD *)&v39[32];
      *(_OWORD *)&v46[16] = *(_OWORD *)&v39[16];
      *(_OWORD *)v46 = *(_OWORD *)v39;
      sub_140E935A0(&v33, v46, &v23, 3);
      sub_140193C30(v46);
    }
    v7 = *((_QWORD *)&v33 + 1);
    if ( (_QWORD)v33 == -1 )
    {
      if ( *((__int64 *)&v33 + 1) <= 0 )
        v7 = 0;
    }
    else
    {
      *(_OWORD *)&v39[48] = v36;
      *(_OWORD *)&v39[32] = v35;
      *(_OWORD *)&v39[16] = v34;
      *(_OWORD *)v39 = v33;
      if ( *(_QWORD *)off_1421E6EC0 > 1u )
      {
        *(_QWORD *)&v33 = v39;
        *((_QWORD *)&v33 + 1) = sub_141404740;
        *(_QWORD *)&v46[48] = 2;
        *(_QWORD *)&v46[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v46[64] = 51;
        *(_QWORD *)&v47 = &unk_1419D743B;
        *((_QWORD *)&v47 + 1) = &v33;
        *(_QWORD *)v46 = 0;
        *(_QWORD *)&v46[8] = aCodexmateLibCo_0;
        *(_OWORD *)&v46[16] = 0x33u;
        *(_QWORD *)&v46[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v46[40] = 41;
        *(_QWORD *)&v46[72] = 0x20B00000001LL;
        sub_1414D53A0(&v49, v46);
      }
      sub_140193AA0(v39);
      v7 = 0;
    }
    sub_1401C6270(v39, v16, aSelectSourceFr, 82);
    if ( v39[0] )
    {
      v36 = *(_OWORD *)&v39[56];
      v35 = *(_OWORD *)&v39[40];
      v34 = *(_OWORD *)&v39[24];
      v33 = *(_OWORD *)&v39[8];
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v44 = &v33;
        v45 = sub_141404740;
        *(_QWORD *)&v46[48] = 2;
        *(_QWORD *)&v46[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v46[64] = 51;
        *(_QWORD *)&v47 = &unk_1419DEA39;
        *((_QWORD *)&v47 + 1) = &v44;
        *(_QWORD *)v46 = 0;
        *(_QWORD *)&v46[8] = aCodexmateLibCo_0;
        *(_OWORD *)&v46[16] = 0x33u;
        *(_QWORD *)&v46[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v46[40] = 41;
        *(_QWORD *)&v46[72] = 0x21700000001LL;
        sub_1414D53A0(&v49, v46);
      }
      sub_140193AA0(&v33);
      sub_1401923E0(v16);
LABEL_27:
      v6 = 0;
      goto LABEL_49;
    }
    v26 = *(_OWORD *)&v39[56];
    v25 = *(_OWORD *)&v39[40];
    v24 = *(_OWORD *)&v39[24];
    v23 = *(_OWORD *)&v39[8];
    sub_140F9C140((unsigned int)v46, (unsigned int)aOpenai_0, 6, *(_DWORD *)&v39[8], *(__int64 *)&v39[64]);
    if ( *(_QWORD *)v46 == -1 )
    {
      v44 = &v23;
      v45 = nullptr;
      v6 = 0;
      while ( 1 )
      {
        sub_140287FB0(v46, &v44);
        *(_QWORD *)&v9 = *(_QWORD *)v46;
        if ( *(_QWORD *)v46 != -1 )
          break;
        if ( !v45 )
        {
          sub_140193890(&v44);
          goto LABEL_48;
        }
        sub_14018E430(v46, &v45, 0, v8);
        v9 = *(_OWORD *)v46;
        v11 = *(_QWORD *)&v46[24];
        if ( *(_QWORD *)v46 == -1 )
        {
          v12 = *(_QWORD *)&v46[16];
          if ( *(_QWORD *)&v46[8] == -1 )
          {
            v12 = 1;
            *((_QWORD *)&v9 + 1) = 0;
          }
          v28 = *((_QWORD *)&v9 + 1);
          if ( *(_QWORD *)&v46[8] == -1 )
            v11 = 0;
          v32 = v12;
          v6 += (unsigned __int8)sub_140291D70(aSubagent_0, 10, v12, v11) ^ 1u;
          if ( v28 )
            sub_140001660(v32, v28, 1);
        }
        else
        {
          v10 = *(_QWORD *)&v46[16];
          v33 = *(_OWORD *)&v46[32];
          v34 = *(_OWORD *)&v46[48];
LABEL_38:
          *(_OWORD *)&v39[48] = v34;
          *(_OWORD *)&v39[32] = v33;
          *(_OWORD *)v39 = v9;
          *(_QWORD *)&v39[16] = v10;
          *(_QWORD *)&v39[24] = v11;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            *(_QWORD *)&v33 = v39;
            *((_QWORD *)&v33 + 1) = sub_141404740;
            *(_QWORD *)&v46[48] = 2;
            *(_QWORD *)&v46[56] = aCodexmateLibCo_0;
            *(_QWORD *)&v46[64] = 51;
            *(_QWORD *)&v47 = &unk_1419DE9CA;
            *((_QWORD *)&v47 + 1) = &v33;
            *(_QWORD *)v46 = 0;
            *(_QWORD *)&v46[8] = aCodexmateLibCo_0;
            *(_OWORD *)&v46[16] = 0x33u;
            *(_QWORD *)&v46[32] = aSrcCoreRelayCo_0;
            *(_QWORD *)&v46[40] = 41;
            *(_QWORD *)&v46[72] = 0x22E00000001LL;
            sub_1414D53A0(&v49, v46);
          }
          sub_140193AA0(v39);
          ++v6;
        }
      }
      *((_QWORD *)&v9 + 1) = *(_QWORD *)&v46[8];
      v11 = *(_QWORD *)&v46[24];
      v10 = *(_QWORD *)&v46[16];
      v34 = *(_OWORD *)&v46[48];
      v33 = *(_OWORD *)&v46[32];
      goto LABEL_38;
    }
    *(_QWORD *)&v39[56] = *(_QWORD *)&v46[56];
    *(_OWORD *)&v39[40] = *(_OWORD *)&v46[40];
    *(_OWORD *)&v39[24] = *(_OWORD *)&v46[24];
    *(_QWORD *)v39 = *(_QWORD *)v46;
    *(_OWORD *)&v39[8] = *(_OWORD *)&v46[8];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v33 = v39;
      *((_QWORD *)&v33 + 1) = sub_141404740;
      *(_QWORD *)&v46[48] = 2;
      *(_QWORD *)&v46[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v46[64] = 51;
      *(_QWORD *)&v47 = &unk_1419DEA04;
      *((_QWORD *)&v47 + 1) = &v33;
      *(_QWORD *)v46 = 0;
      *(_QWORD *)&v46[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v46[16] = 0x33u;
      *(_QWORD *)&v46[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v46[40] = 41;
      *(_QWORD *)&v46[72] = 0x23800000001LL;
      sub_1414D53A0(&v49, v46);
    }
    sub_140193AA0(v39);
    v6 = 0;
LABEL_48:
    sub_140193C30(&v23);
    sub_1401923E0(v16);
LABEL_49:
    if ( v27 )
      sub_140001660(v43, v27, 1);
    v30 += v6;
    v31 += v7;
    v1 -= 32LL;
    v2 += 4;
    v3 = v4;
  }
  if ( (__int64 *)v29 != v4 )
  {
    v13 = v1 >> 5;
    do
    {
      v14 = *(v2 - 1);
      if ( v14 )
        sub_140001660(*v2, v14, 1);
      v2 += 4;
      --v13;
    }
    while ( v13 );
  }
LABEL_56:
  if ( (_QWORD)v22 )
    sub_140001660(*((_QWORD *)&v22 + 1), 32 * v22, 8);
  return v31;
}
