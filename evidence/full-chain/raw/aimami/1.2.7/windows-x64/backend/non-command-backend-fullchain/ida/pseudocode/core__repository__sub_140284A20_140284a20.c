// win 1.2.7 | module src/core/repository.rs | ea 0x140284a20 | name sub_140284A20
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140284A20(__m128i *a1, _QWORD **a2, __int64 a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  char v18; // r9
  __int64 v19; // [rsp+20h] [rbp-60h]
  _QWORD v20[4]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v21[312]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v23; // [rsp+1D8h] [rbp+158h]
  __int64 v24; // [rsp+1E0h] [rbp+160h]
  __m128i v25; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v26; // [rsp+200h] [rbp+180h]
  __int128 v27; // [rsp+210h] [rbp+190h]
  __int128 v28; // [rsp+220h] [rbp+1A0h]
  __int128 v29; // [rsp+230h] [rbp+1B0h]
  __int128 v30; // [rsp+240h] [rbp+1C0h]
  __int128 v31; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v32; // [rsp+2B0h] [rbp+230h]
  __int128 v33; // [rsp+2C0h] [rbp+240h]
  __int128 v34; // [rsp+2D0h] [rbp+250h]
  __int128 v35; // [rsp+2E0h] [rbp+260h]
  __int128 v36; // [rsp+2F0h] [rbp+270h]
  const char *v37; // [rsp+308h] [rbp+288h] BYREF
  __int64 v38; // [rsp+310h] [rbp+290h]
  const char *v39; // [rsp+318h] [rbp+298h]
  __int64 v40; // [rsp+320h] [rbp+2A0h]
  char **v41; // [rsp+328h] [rbp+2A8h]
  __m128i v42; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v43; // [rsp+340h] [rbp+2C0h]
  __int128 v44; // [rsp+350h] [rbp+2D0h]
  __int128 v45; // [rsp+360h] [rbp+2E0h]
  __int128 v46; // [rsp+370h] [rbp+2F0h]
  __int128 v47; // [rsp+380h] [rbp+300h]
  __int64 v48; // [rsp+390h] [rbp+310h]
  __int64 v49; // [rsp+398h] [rbp+318h]
  __int64 v50; // [rsp+3A8h] [rbp+328h]
  __int64 v51; // [rsp+3B0h] [rbp+330h]
  __int64 v52; // [rsp+3C0h] [rbp+340h]
  __int64 v53; // [rsp+3C8h] [rbp+348h]
  __int64 v54; // [rsp+3E0h] [rbp+360h]
  char v55; // [rsp+3EFh] [rbp+36Fh] BYREF
  __int64 v56; // [rsp+3F0h] [rbp+370h]

  v56 = -2;
  v5 = *a2;
  v6 = *(_QWORD *)(a3 + 200);
  v7 = *(_QWORD *)(a3 + 208);
  sub_1416B2790((unsigned int)v21, v6, v7, (unsigned int)asc_141A5745D, 2);
  sub_140F9D3E0(&v25, v21);
  if ( v25.m128i_i32[0] == 1 && v7 - (_QWORD)v26 == 36 )
  {
    v8 = v25.m128i_u64[1];
    if ( (unsigned int)sub_1418F4B70(v6 + v26, a00000000000040) == 0
      && v8 >= 7
      && !(*(_DWORD *)(v6 + v8 - 7) ^ 0x6C6E752D | *(_DWORD *)(v6 + v8 - 4) ^ 0x6B636F6C) )
    {
      a1->m128i_i64[0] = 2;
      return a1;
    }
  }
  sub_1416AB9B0(&v22, *(_QWORD *)(a3 + 224), *(_QWORD *)(a3 + 232));
  v9 = v24;
  v10 = *(_QWORD *)(*v5 + 328LL);
  v19 = *(_QWORD *)(*v5 + 336LL);
  v54 = v23;
  sub_140ED9AE0((unsigned int)v21, v23, v24, v10, v19);
  if ( *(_DWORD *)v21 != -1 )
  {
    v47 = *(_OWORD *)&v21[80];
    v46 = *(_OWORD *)&v21[64];
    v45 = *(_OWORD *)&v21[48];
    v44 = *(_OWORD *)&v21[32];
    v43 = *(_OWORD *)&v21[16];
    v42 = *(__m128i *)v21;
    if ( *(_QWORD *)v21 == -1 )
      goto LABEL_12;
LABEL_22:
    v30 = v47;
    v29 = v46;
    v28 = v45;
    v27 = v44;
    v26 = v43;
    v25 = v42;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v31 = a3 + 192;
      *((_QWORD *)&v31 + 1) = sub_1400015F0;
      *(_QWORD *)&v32 = &v25;
      *((_QWORD *)&v32 + 1) = sub_14104A7D0;
      *(_QWORD *)&v21[48] = 2;
      *(_QWORD *)&v21[56] = aCodexmateLibCo_21;
      *(_QWORD *)&v21[64] = 31;
      *(_QWORD *)&v21[80] = &unk_1419D6B68;
      *(_QWORD *)&v21[88] = &v31;
      *(_QWORD *)v21 = 0;
      *(_QWORD *)&v21[8] = aCodexmateLibCo_21;
      *(_OWORD *)&v21[16] = 0x1Fu;
      *(_QWORD *)&v21[32] = aSrcCoreReposit;
      *(_QWORD *)&v21[40] = 22;
      *(_QWORD *)&v21[72] = 0x77500000001LL;
      sub_1414D53A0(&v55, v21);
    }
    a1->m128i_i64[0] = 2;
    sub_1401954F0(&v25);
    goto LABEL_25;
  }
  sub_141695550(v21, v54, v9);
  if ( *(_DWORD *)v21 == 2 )
  {
    v42.m128i_i64[0] = 2;
    v42.m128i_i64[1] = *(_QWORD *)&v21[8];
    goto LABEL_22;
  }
  if ( (v21[76] & 0x10) != 0 || (*(_DWORD *)&v21[80] & 0x20000000) != 0 && (*(_WORD *)&v21[76] & 0x400) != 0 )
  {
    v25.m128i_i64[0] = v54;
    v25.m128i_i64[1] = v9;
    *(_QWORD *)v21 = &v25;
    *(_QWORD *)&v21[8] = sub_14169F630;
    sub_1416ABFD0(&v42.m128i_u64[1], &unk_141A5A094, v21);
    v42.m128i_i64[0] = 9;
    goto LABEL_22;
  }
LABEL_12:
  sub_140ED4870(v21, v54, v9);
  if ( *(_QWORD *)v21 != -2 )
  {
    sub_1418F44E0(&v42, (const __m128i *)v21, 0xB0u);
    if ( (unsigned __int8)sub_140ED7E50(&v42) )
    {
      sub_140ED5630(v21, &v42, v54, v9);
      if ( *(_DWORD *)v21 != 2 )
      {
        sub_1418F44E0(&v25, (const __m128i *)v21, 0xB0u);
        v13 = v5[1];
        v14 = *(_QWORD *)(v13 + 16);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v13 + 8);
          v16 = 192 * v14;
          while ( *(_QWORD *)(v15 + 160) != v7 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v15 + 152), v6) )
          {
            v15 += 192;
            v16 -= 192;
            if ( !v16 )
              goto LABEL_59;
          }
        }
        else
        {
LABEL_59:
          v15 = 0;
        }
        v17 = v5[2];
        v18 = *(_DWORD *)v17 != 2
           && *(_QWORD *)(v17 + 56) == v7
           && (unsigned int)sub_1418F4B70(*(_QWORD *)(v17 + 48), v6) == 0;
        sub_1401E88B0((__int64)v21, (__int128 *)a3, (__int64)&v25, v18, v15);
        sub_1418F44E0(a1, (const __m128i *)v21, 0x180u);
        sub_140034220(&v25);
        v12 = v42.m128i_i64[0];
        if ( v42.m128i_i64[0] == -1 )
          goto LABEL_34;
        goto LABEL_32;
      }
      v36 = *(_OWORD *)&v21[88];
      v35 = *(_OWORD *)&v21[72];
      v34 = *(_OWORD *)&v21[56];
      v33 = *(_OWORD *)&v21[40];
      v32 = *(_OWORD *)&v21[24];
      v31 = *(_OWORD *)&v21[8];
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v20[0] = a3 + 192;
        v20[1] = sub_1400015F0;
        v20[2] = &v31;
        v20[3] = sub_14104A7D0;
        v37 = aCodexmateLibCo_21;
        v38 = 31;
        v39 = aCodexmateLibCo_21;
        v40 = 31;
        v41 = &off_1419D6C80;
        sub_140BAD520(&unk_1419D6C36, v20, 2, &v37);
      }
      a1->m128i_i64[0] = 2;
      sub_1401954F0(&v31);
    }
    else
    {
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v25.m128i_i64[0] = a3 + 192;
        v25.m128i_i64[1] = (__int64)sub_1400015F0;
        *(_QWORD *)&v21[48] = 2;
        *(_QWORD *)&v21[56] = aCodexmateLibCo_21;
        *(_QWORD *)&v21[64] = 31;
        *(_QWORD *)&v21[80] = &unk_1419D6BEB;
        *(_QWORD *)&v21[88] = &v25;
        *(_QWORD *)v21 = 0;
        *(_QWORD *)&v21[8] = aCodexmateLibCo_21;
        *(_OWORD *)&v21[16] = 0x1Fu;
        *(_QWORD *)&v21[32] = aSrcCoreReposit;
        *(_QWORD *)&v21[40] = 22;
        *(_QWORD *)&v21[72] = 0x78600000001LL;
        sub_1414D53A0(&v55, v21);
      }
      a1->m128i_i64[0] = 2;
    }
    v12 = v42.m128i_i64[0];
    if ( v42.m128i_i64[0] == -1 )
    {
LABEL_34:
      if ( *((_QWORD *)&v43 + 1) != -1 && *((_QWORD *)&v43 + 1) )
        sub_140001660(v44, *((_QWORD *)&v43 + 1), 1);
      if ( (_QWORD)v45 != -1 && (_QWORD)v45 )
        sub_140001660(*((_QWORD *)&v45 + 1), v45, 1);
      if ( *((_QWORD *)&v46 + 1) != -1 && *((_QWORD *)&v46 + 1) )
        sub_140001660(v47, *((_QWORD *)&v46 + 1), 1);
      if ( v48 != -1 && v48 )
        sub_140001660(v49, v48, 1);
      if ( v50 != -1 && v50 )
        sub_140001660(v51, v50, 1);
      if ( v52 != -1 && v52 )
        sub_140001660(v53, v52, 1);
      goto LABEL_25;
    }
LABEL_32:
    if ( v12 )
      sub_140001660(v42.m128i_i64[1], v12, 1);
    goto LABEL_34;
  }
  v36 = *(_OWORD *)&v21[88];
  v35 = *(_OWORD *)&v21[72];
  v34 = *(_OWORD *)&v21[56];
  v33 = *(_OWORD *)&v21[40];
  v32 = *(_OWORD *)&v21[24];
  v31 = *(_OWORD *)&v21[8];
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v37 = (const char *)(a3 + 192);
    v38 = (__int64)sub_1400015F0;
    v39 = (const char *)&v31;
    v40 = (__int64)sub_14104A7D0;
    *(_QWORD *)&v28 = 2;
    *((_QWORD *)&v28 + 1) = aCodexmateLibCo_21;
    *(_QWORD *)&v29 = 31;
    *(_QWORD *)&v30 = &unk_1419D6C98;
    *((_QWORD *)&v30 + 1) = &v37;
    v25.m128i_i64[0] = 0;
    v25.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
    v26 = 0x1Fu;
    *(_QWORD *)&v27 = aSrcCoreReposit;
    *((_QWORD *)&v27 + 1) = 22;
    *((_QWORD *)&v29 + 1) = 0x77E00000001LL;
    sub_1414D53A0(&v55, &v25);
  }
  a1->m128i_i64[0] = 2;
  sub_1401954F0(&v31);
LABEL_25:
  if ( v22 )
    sub_140001660(v54, v22, 1);
  return a1;
}
