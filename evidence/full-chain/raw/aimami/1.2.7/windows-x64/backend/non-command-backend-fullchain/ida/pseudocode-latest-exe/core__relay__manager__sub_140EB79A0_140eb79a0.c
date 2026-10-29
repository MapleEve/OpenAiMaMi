// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb79a0 | successor of pre-update 0x140d9a740 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
void __fastcall sub_140EB79A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // rsi
  __int64 v5; // r12
  char *v6; // rdi
  __int64 *v7; // r13
  unsigned int v8; // ebx
  char v9; // al
  _BOOL8 v10; // rcx
  char v11; // al
  __int64 v12; // rbx
  __int128 *v13; // rdi
  __int128 v14; // kr00_16
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // rsi
  char v19; // al
  char v20; // r15
  int v21; // r9d
  int v22; // r8d
  char v23; // di
  unsigned __int128 *v24; // rsi
  unsigned __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  __m256i v26; // [rsp+50h] [rbp-30h]
  unsigned __int128 v27; // [rsp+70h] [rbp-10h]
  __int128 v28; // [rsp+80h] [rbp+0h]
  __int128 v29; // [rsp+90h] [rbp+10h]
  __int64 v30; // [rsp+348h] [rbp+2C8h]
  __int64 v31; // [rsp+350h] [rbp+2D0h]
  _BYTE v32[1040]; // [rsp+450h] [rbp+3D0h] BYREF
  unsigned __int128 v33; // [rsp+860h] [rbp+7E0h] BYREF
  __m256i v34; // [rsp+870h] [rbp+7F0h]
  unsigned __int128 v35; // [rsp+890h] [rbp+810h]
  __int128 v36; // [rsp+8A0h] [rbp+820h]
  __int128 v37; // [rsp+8B0h] [rbp+830h]
  char v38; // [rsp+9CCh] [rbp+94Ch]
  char v39[8]; // [rsp+9E8h] [rbp+968h] BYREF
  __int64 v40; // [rsp+9F0h] [rbp+970h]
  unsigned __int128 *v41; // [rsp+9F8h] [rbp+978h]
  __int64 v42; // [rsp+A00h] [rbp+980h]
  __int64 v43; // [rsp+A08h] [rbp+988h]
  __int128 v44; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v45; // [rsp+A20h] [rbp+9A0h]
  _BYTE *v46; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 (__fastcall *v47)(_QWORD, _QWORD); // [rsp+A30h] [rbp+9B0h]
  __int64 v48; // [rsp+A38h] [rbp+9B8h]
  __int128 v49; // [rsp+A40h] [rbp+9C0h] BYREF
  __int128 v50; // [rsp+A50h] [rbp+9D0h]
  __int128 v51; // [rsp+A60h] [rbp+9E0h]
  __int128 v52; // [rsp+A70h] [rbp+9F0h]
  __int128 v53; // [rsp+A80h] [rbp+A00h]
  __int128 v54; // [rsp+A90h] [rbp+A10h]
  unsigned __int128 *v55; // [rsp+AA0h] [rbp+A20h] BYREF
  __int64 v56; // [rsp+AA8h] [rbp+A28h]
  const char *v57; // [rsp+AB0h] [rbp+A30h]
  __int64 v58; // [rsp+AB8h] [rbp+A38h]
  char **v59; // [rsp+AC0h] [rbp+A40h]
  __int64 v60; // [rsp+AC8h] [rbp+A48h]
  char v61; // [rsp+AD7h] [rbp+A57h] BYREF
  unsigned int v62; // [rsp+AD8h] [rbp+A58h]
  char v63; // [rsp+ADFh] [rbp+A5Fh] BYREF
  __int64 v64; // [rsp+AE0h] [rbp+A60h]

  v64 = -2;
  v3 = a1[2];
  if ( *(_QWORD *)(v3 + 16) != -1 )
  {
    sub_1416DB410((char *)&v33 + 8, v3 + 16);
    *(_QWORD *)&v33 = 9;
    v29 = v37;
    v28 = v36;
    v27 = v35;
    v26 = v34;
    v25 = __PAIR128__(*((unsigned __int64 *)&v33 + 1), 9);
    if ( *(_QWORD *)off_14223FF10 )
    {
      *(_QWORD *)&v49 = &v25;
      *((_QWORD *)&v49 + 1) = sub_140D76130;
      *(_QWORD *)&v32[48] = 1;
      *(_QWORD *)&v32[56] = aCodexmateLibCo_50;
      *(_QWORD *)&v32[64] = 35;
      *(_QWORD *)&v32[80] = &unk_141AA0CE0;
      *(_QWORD *)&v32[88] = &v49;
      *(_QWORD *)v32 = 0;
      *(_QWORD *)&v32[8] = aCodexmateLibCo_50;
      *(_OWORD *)&v32[16] = 0x23u;
      *(_QWORD *)&v32[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v32[40] = 25;
      *(_QWORD *)&v32[72] = 0x10600000001LL;
      sub_141503E20(&v63, v32);
    }
    sub_140D8A3A0(&v25);
    return;
  }
  v4 = a1;
  v5 = a1[4];
  v6 = (char *)(v5 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v5 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v5 + 16));
  v7 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v8 = sub_14196A710(a1, v3, a3);
    LOBYTE(v8) = v8 ^ 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_BYTE *)(v5 + 17);
  v10 = v9 != 0;
  *((_QWORD *)&v25 + 1) = v5 + 16;
  v26.m256i_i8[0] = v8;
  *(_QWORD *)&v25 = v10;
  if ( v9 )
  {
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v32[48] = 2;
      *(_QWORD *)&v32[56] = aCodexmateLibCo_50;
      *(_QWORD *)&v32[64] = 35;
      *(_QWORD *)&v32[80] = &unk_141AA0FD0;
      *(_QWORD *)&v32[88] = 153;
      *(_QWORD *)v32 = 0;
      *(_QWORD *)&v32[8] = aCodexmateLibCo_50;
      *(_OWORD *)&v32[16] = 0x23u;
      *(_QWORD *)&v32[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v32[40] = 25;
      *(_QWORD *)&v32[72] = 0x10C00000001LL;
      sub_141503E20(&v63, v32);
    }
    if ( !(_BYTE)v8 && 2 * *v7 && !(unsigned __int8)sub_14196A710(v10, v3, a3) )
      *(_BYTE *)(v5 + 17) = 1;
    v11 = *v6;
    *v6 = 0;
    if ( v11 == 2 )
      WakeByAddressSingle((PVOID)(v5 + 16));
    return;
  }
  v62 = v8;
  v42 = v5 + 16;
  sub_140EA0010(&v33, v4);
  if ( (_DWORD)v33 != -1 )
  {
    v29 = v37;
    v28 = v36;
    v27 = v35;
    v26 = v34;
    v25 = v33;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v49 = &v25;
      *((_QWORD *)&v49 + 1) = sub_140D76130;
      *(_QWORD *)&v32[48] = 2;
      *(_QWORD *)&v32[56] = aCodexmateLibCo_50;
      *(_QWORD *)&v32[64] = 35;
      *(_QWORD *)&v32[80] = &unk_141A9F9D0;
      *(_QWORD *)&v32[88] = &v49;
      *(_QWORD *)v32 = 0;
      *(_QWORD *)&v32[8] = aCodexmateLibCo_50;
      *(_OWORD *)&v32[16] = 0x23u;
      *(_QWORD *)&v32[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v32[40] = 25;
      *(_QWORD *)&v32[72] = 0xAA000000001LL;
      sub_141503E20(&v63, v32);
    }
    sub_140D8A3A0(&v25);
  }
  v12 = *v4;
  v13 = (__int128 *)(*v4 + 16LL);
  sub_1407D5CC0(v32);
  v14 = *(_OWORD *)&v32[32];
  v25 = *(_OWORD *)&v32[48];
  *(_OWORD *)v26.m256i_i8 = *(_OWORD *)&v32[64];
  if ( *(_QWORD *)v32 != -1 )
  {
    v37 = *(_OWORD *)&v32[80];
    v34 = *(__m256i *)&v32[16];
    v35 = v25;
    v36 = *(_OWORD *)v26.m256i_i8;
    v33 = *(_OWORD *)v32;
LABEL_31:
    v29 = v37;
    v28 = v36;
    v27 = v35;
    v26 = v34;
    v25 = v33;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v49 = &v25;
      *((_QWORD *)&v49 + 1) = sub_140D76130;
      *(_QWORD *)&v32[48] = 2;
      *(_QWORD *)&v32[56] = aCodexmateLibCo_50;
      *(_QWORD *)&v32[64] = 35;
      *(_QWORD *)&v32[80] = &unk_141AA0D0C;
      *(_QWORD *)&v32[88] = &v49;
      *(_QWORD *)v32 = 0;
      *(_QWORD *)&v32[8] = aCodexmateLibCo_50;
      *(_OWORD *)&v32[16] = 0x23u;
      *(_QWORD *)&v32[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v32[40] = 25;
      *(_QWORD *)&v32[72] = 0x11400000001LL;
      sub_141503E20(&v63, v32);
    }
    sub_140D8A3A0(&v25);
    goto LABEL_34;
  }
  if ( *(_QWORD *)&v32[8] != -1 )
  {
    if ( *(_QWORD *)&v32[8] )
      sub_140001660(*(_QWORD *)&v32[16], *(_QWORD *)&v32[8], 1);
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
  }
  sub_1407E52E0((__int64)v32, (__int64)v13);
  if ( *(_DWORD *)v32 == -1 )
  {
    sub_1408D1F30(&v33, v13);
  }
  else
  {
    v37 = *(_OWORD *)&v32[80];
    v36 = *(_OWORD *)&v32[64];
    v35 = *(_OWORD *)&v32[48];
    v34 = *(__m256i *)&v32[16];
    v33 = *(_OWORD *)v32;
  }
  if ( (_QWORD)v33 != -1 )
    goto LABEL_31;
  sub_140EB7850(v32, v4);
  sub_140EA81D0(&v33, v12, v32);
  if ( (_DWORD)v33 == -1 )
  {
    sub_140292E20(v32);
    if ( !(unsigned __int8)sub_140980290() )
    {
      sub_140EB0550(v4);
      sub_14002B980(v42, v62);
      return;
    }
    sub_1407D66C0(&v25, v13);
    if ( (_DWORD)v25 == -1 )
    {
      if ( !BYTE8(v25) )
      {
        sub_140EB7850(&v33, v4);
        v20 = v38;
        v61 = v38 ^ 1;
        sub_140A5CBE0(v32, v13, 0);
        if ( *(_QWORD *)v32 == -1 )
        {
          v29 = *(_OWORD *)&v32[88];
          v28 = *(_OWORD *)&v32[72];
          v27 = *(_OWORD *)&v32[56];
          v26 = *(__m256i *)&v32[24];
          v25 = *(_OWORD *)&v32[8];
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v55 = &v25;
            v56 = (__int64)sub_140D76130;
            *(_QWORD *)&v49 = aCodexmateLibCo_50;
            *((_QWORD *)&v49 + 1) = 35;
            *(_QWORD *)&v50 = aCodexmateLibCo_50;
            *((_QWORD *)&v50 + 1) = 35;
            *(_QWORD *)&v51 = &off_141AA0EF8;
            sub_140AF72B0(&unk_141AA0A89, &v55, 2, &v49);
          }
          sub_140D8A3A0(&v25);
          v18 = (char *)(v5 + 16);
          v23 = v62;
        }
        else
        {
          sub_1419234B0(&v25, v32, 1032);
          LOBYTE(v21) = v20 == 0;
          sub_140EAD220((unsigned int)v39, v4[3], (unsigned int)&v25, v21, 0);
          sub_140EA5910((__int64)v32, v4);
          if ( *(_QWORD *)v32 == -1 )
          {
            sub_140EADA10(&v44, v30, v31, &v33);
          }
          else
          {
            v45 = *(_QWORD *)&v32[16];
            v44 = *(_OWORD *)v32;
          }
          v24 = v41;
          if ( (unsigned __int64)v41 | ~(_QWORD)v44 )
          {
            v55 = v41;
            LOBYTE(v46) = (_QWORD)v44 != -1;
            *(_QWORD *)v32 = &v55;
            *(_QWORD *)&v32[8] = sub_1416EBAE0;
            *(_QWORD *)&v32[16] = &v46;
            *(_QWORD *)&v32[24] = sub_1416EBC20;
            v60 = v44;
            sub_1416DAFA0(&v49, &unk_141AA0DB0, v32);
            v43 = *((_QWORD *)&v49 + 1);
            v48 = v49;
            sub_1407D7620((__int64)&v49, v13);
            if ( (_DWORD)v49 != -1 )
            {
              *(_OWORD *)&v32[80] = v54;
              *(_OWORD *)&v32[64] = v53;
              *(_OWORD *)&v32[48] = v52;
              *(_OWORD *)&v32[32] = v51;
              *(_OWORD *)&v32[16] = v50;
              *(_OWORD *)v32 = v49;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                v46 = v32;
                v47 = sub_140D76130;
                v55 = (unsigned __int128 *)aCodexmateLibCo_50;
                v56 = 35;
                v57 = aCodexmateLibCo_50;
                v58 = 35;
                v59 = &off_141AA0E50;
                sub_140AF72B0(&unk_141AA0E01, &v46, 2, &v55);
              }
              sub_140D8A3A0(v32);
            }
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              sub_140ED3DE0(&v55, v40, v24);
              *(_QWORD *)v32 = &v61;
              *(_QWORD *)&v32[8] = sub_140ED78B0;
              *(_QWORD *)&v32[16] = &v55;
              *(_QWORD *)&v32[24] = sub_1400015F0;
              *(_QWORD *)&v32[32] = &v44;
              *(_QWORD *)&v32[40] = sub_140EDA660;
              *(_QWORD *)&v49 = aCodexmateLibCo_50;
              *((_QWORD *)&v49 + 1) = 35;
              *(_QWORD *)&v50 = aCodexmateLibCo_50;
              *((_QWORD *)&v50 + 1) = 35;
              *(_QWORD *)&v51 = &off_141AA0EE0;
              sub_140AF72B0(&unk_141AA0E68, v32, 2, &v49);
              if ( v55 )
                sub_140001660(v56, v55, 1);
            }
            v18 = (char *)(v5 + 16);
            v23 = v62;
            if ( v48 )
              sub_140001660(v43, v48, 1);
          }
          else
          {
            v60 = -1;
            LOBYTE(v22) = 2;
            sub_1407D2600((__int64)&v49, (__int64)v13, v22);
            if ( (_DWORD)v49 != -1 )
            {
              *(_OWORD *)&v32[80] = v54;
              *(_OWORD *)&v32[64] = v53;
              *(_OWORD *)&v32[48] = v52;
              *(_OWORD *)&v32[32] = v51;
              *(_OWORD *)&v32[16] = v50;
              *(_OWORD *)v32 = v49;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                v46 = v32;
                v47 = sub_140D76130;
                v55 = (unsigned __int128 *)aCodexmateLibCo_50;
                v56 = 35;
                v57 = aCodexmateLibCo_50;
                v58 = 35;
                v59 = &off_141AA0D98;
                sub_140AF72B0(&unk_141AA0923, &v46, 2, &v55);
              }
              v60 = -1;
              sub_140D8A3A0(v32);
            }
            v18 = (char *)(v5 + 16);
            v23 = v62;
          }
          if ( (_QWORD)v44 != -1 && (_QWORD)v44 )
            sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
          sub_1400293E0(v39);
          sub_140906D20(&v25);
        }
        sub_140292E20(&v33);
        if ( v23 )
          goto LABEL_36;
        goto LABEL_35;
      }
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v32 = aCodexmateLibCo_50;
        *(_QWORD *)&v32[8] = 35;
        *(_QWORD *)&v32[16] = aCodexmateLibCo_50;
        *(_QWORD *)&v32[24] = 35;
        *(_QWORD *)&v32[32] = &off_141AA0F60;
        sub_140AF72B0(&unk_141AA0F10, 161, 2, v32);
      }
    }
    else
    {
      *(_OWORD *)&v32[80] = v29;
      *(_OWORD *)&v32[64] = v28;
      *(_OWORD *)&v32[48] = v27;
      *(__m256i *)&v32[16] = v26;
      *(_OWORD *)v32 = v25;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v49 = v32;
        *((_QWORD *)&v49 + 1) = sub_140D76130;
        *(_QWORD *)&v33 = aCodexmateLibCo_50;
        *((_QWORD *)&v33 + 1) = 35;
        v34.m256i_i64[0] = (__int64)aCodexmateLibCo_50;
        v34.m256i_i64[1] = 35;
        v34.m256i_i64[2] = (__int64)&off_141AA0FB8;
        sub_140AF72B0(&unk_141AA0F78, &v49, 2, &v33);
      }
      sub_140D8A3A0(v32);
    }
  }
  else
  {
    v29 = v37;
    v28 = v36;
    v27 = v35;
    v26 = v34;
    v25 = v33;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v55 = &v25;
      v56 = (__int64)sub_140D76130;
      *(_QWORD *)&v49 = aCodexmateLibCo_50;
      *((_QWORD *)&v49 + 1) = 35;
      *(_QWORD *)&v50 = aCodexmateLibCo_50;
      *((_QWORD *)&v50 + 1) = 35;
      *(_QWORD *)&v51 = &off_141AA0D80;
      sub_140AF72B0(&unk_141AA0D45, &v55, 2, &v49);
    }
    sub_140D8A3A0(&v25);
    sub_140292E20(v32);
  }
LABEL_34:
  v18 = (char *)(v5 + 16);
  if ( !(_BYTE)v62 )
  {
LABEL_35:
    if ( 2 * *v7 && !(unsigned __int8)sub_14196A710(v16, v15, v17) )
      *(_BYTE *)(v5 + 17) = 1;
  }
LABEL_36:
  v19 = *v18;
  *v18 = 0;
  if ( v19 == 2 )
    WakeByAddressSingle(v18);
}
