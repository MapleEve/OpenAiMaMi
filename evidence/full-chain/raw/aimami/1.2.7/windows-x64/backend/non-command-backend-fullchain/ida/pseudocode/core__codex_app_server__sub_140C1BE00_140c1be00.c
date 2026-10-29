// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140c1be00 | name sub_140C1BE00
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140C1BE00(__int64 a1, _QWORD *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int128 v7; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __m128i *v13; // rax
  __int64 v14; // rcx
  _WORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _OWORD *v18; // rsi
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  int v22; // eax
  int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rax
  _BYTE *v30; // rax
  _BYTE *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  const __m128i *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  _BOOL8 v37; // r15
  __int64 v38; // rdx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int64 v42; // r8
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int64 v47; // rax
  __int128 v48; // xmm0
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // r14
  _QWORD *v52; // rax
  _OWORD *v53; // rcx
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  _QWORD v57[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v58; // [rsp+48h] [rbp-38h] BYREF
  __int64 v59; // [rsp+58h] [rbp-28h]
  const __m128i *v60; // [rsp+60h] [rbp-20h]
  __int64 v61; // [rsp+68h] [rbp-18h]
  _BYTE v62[96]; // [rsp+70h] [rbp-10h] BYREF
  __m256i v63; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v64; // [rsp+F8h] [rbp+78h] BYREF
  _WORD *v65; // [rsp+100h] [rbp+80h]
  __int64 v66; // [rsp+108h] [rbp+88h]
  __m256i v67; // [rsp+110h] [rbp+90h] BYREF
  __int64 v68; // [rsp+130h] [rbp+B0h]
  char v69; // [rsp+13Eh] [rbp+BEh]
  char v70; // [rsp+13Fh] [rbp+BFh]
  __int64 v71; // [rsp+140h] [rbp+C0h]

  v71 = -2;
  *(_QWORD *)&v7 = a4;
  v68 = a1;
  v60 = a3;
  v57[0] = a3;
  v61 = a2[21];
  v9 = -1;
  if ( v61 != -1 )
    v9 = v61 + 1;
  v57[1] = a4;
  a2[21] = v9;
  *(_QWORD *)&v58 = 0;
  v59 = 0;
  nullsub_1(v9);
  v10 = sub_140001650(6, 1);
  if ( !v10 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v10 + 4) = 25711;
  *(_DWORD *)v10 = 1752458605;
  v64 = 6;
  v65 = (_WORD *)v10;
  v66 = 6;
  if ( (__int64)v7 < 0 )
  {
    v12 = 0;
    goto LABEL_6;
  }
  if ( (_QWORD)v7 )
  {
    nullsub_1(v11);
    v12 = 1;
    v13 = (__m128i *)sub_140001650(v7, 1);
    if ( !v13 )
    {
LABEL_6:
      v69 = 1;
      sub_141938D2B(v12, v7);
    }
    *((_QWORD *)&v7 + 1) = v13;
    sub_1418F44E0(v13, v60, v7);
  }
  else
  {
    *((_QWORD *)&v7 + 1) = 1;
  }
  v67.m256i_i8[0] = 3;
  *(_OWORD *)&v67.m256i_u64[1] = v7;
  v67.m256i_i64[3] = v7;
  v69 = 0;
  sub_140E72AA0(&v63, &v58, &v64, &v67);
  if ( v63.m256i_i8[0] != -1 )
    sub_14002F9D0(&v63);
  nullsub_1(v14);
  v15 = (_WORD *)sub_140001650(2, 1);
  if ( !v15 )
    sub_141938D2B(1, 2);
  *v15 = 25705;
  v64 = 2;
  v65 = v15;
  v66 = 2;
  v67.m256i_i8[0] = 2;
  v67.m256i_i64[1] = 0;
  v67.m256i_i64[2] = v61;
  sub_140E72AA0(&v63, &v58, &v64, &v67);
  if ( v63.m256i_i8[0] != -1 )
    sub_14002F9D0(&v63);
  nullsub_1(v16);
  v17 = sub_140001650(6, 1);
  if ( !v17 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v17 + 4) = 29549;
  *(_DWORD *)v17 = 1634886000;
  v64 = 6;
  v65 = (_WORD *)v17;
  v66 = 6;
  v70 = 1;
  sub_140412420(&v67, a5);
  if ( v67.m256i_i8[0] == -1 )
  {
    v63.m256i_i64[0] = v67.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v63,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3C430);
  }
  v63 = v67;
  v70 = 0;
  sub_140E72AA0(&v67, &v58, &v64, &v63);
  if ( v67.m256i_i8[0] != -1 )
    sub_14002F9D0(&v67);
  *(_OWORD *)&v67.m256i_u64[1] = v58;
  v67.m256i_i64[3] = v59;
  v67.m256i_i8[0] = 5;
  sub_140C1C730(v62, a2, &v67);
  if ( *(_DWORD *)v62 == -1 )
  {
    v22 = sub_14167FC00();
    sub_1416A1240(v22, v23, a6, a7, (__int64)&off_141A3C448);
    v25 = v24;
    while ( 1 )
    {
      sub_140C1B230((__int128 *)v62);
      v26 = *(_QWORD *)v62;
      v67 = *(__m256i *)&v62[8];
      if ( *(_QWORD *)v62 != -1 )
      {
        v38 = v68;
        *(_QWORD *)(v68 + 88) = *(_QWORD *)&v62[88];
        v39 = *(_OWORD *)&v62[40];
        v40 = *(_OWORD *)&v62[56];
        *(_OWORD *)(v38 + 72) = *(_OWORD *)&v62[72];
        *(_OWORD *)(v38 + 56) = v40;
        *(_OWORD *)(v38 + 40) = v39;
        v41 = *(_OWORD *)v67.m256i_i8;
        *(_OWORD *)(v38 + 24) = *(_OWORD *)&v67.m256i_u64[2];
        *(_OWORD *)(v38 + 8) = v41;
        *(_QWORD *)v38 = v26;
        goto LABEL_44;
      }
      v63 = v67;
      sub_140C1B4D0((__int64)v62, a2, (__int64)&v63);
      v27 = *(_QWORD *)v62;
      v28 = v62[8];
      if ( *(_QWORD *)v62 != -1 )
      {
        v42 = v68;
        *(_QWORD *)(v68 + 88) = *(_QWORD *)&v62[88];
        *(_OWORD *)(v42 + 73) = *(_OWORD *)&v62[73];
        v43 = *(_OWORD *)&v62[9];
        v44 = *(_OWORD *)&v62[25];
        v45 = *(_OWORD *)&v62[41];
        *(_OWORD *)(v42 + 57) = *(_OWORD *)&v62[57];
        *(_OWORD *)(v42 + 41) = v45;
        *(_OWORD *)(v42 + 25) = v44;
        *(_OWORD *)(v42 + 9) = v43;
        *(_QWORD *)v42 = v27;
        *(_BYTE *)(v42 + 8) = v28;
        goto LABEL_43;
      }
      if ( (v62[8] & 1) == 0 )
      {
        v29 = sub_1416419F0(aId_7, 2, &v63);
        if ( v29 )
        {
          if ( *(_BYTE *)v29 == 2 && !*(_QWORD *)(v29 + 8) && *(_QWORD *)(v29 + 16) == v61 )
            break;
        }
      }
      sub_14002F9D0(&v63);
    }
    v30 = (_BYTE *)sub_1416419F0(aError_44, 5, &v63);
    v31 = v30;
    if ( v30 && *v30 )
    {
      v32 = sub_1416419F0(aMessage_5, 7, v30);
      v33 = 24;
      v34 = (const __m128i *)aUnknownAppServ;
      if ( v32 && *(_BYTE *)v32 == 3 )
      {
        v34 = *(const __m128i **)(v32 + 16);
        v33 = *(_QWORD *)(v32 + 24);
      }
      v35 = sub_1416419F0(aCode_5, 4, v31);
      if ( v35 && *(_BYTE *)v35 == 2 && (v36 = *(_QWORD *)(v35 + 8), v36 != 2) )
      {
        v25 = *(_QWORD *)(v35 + 16);
        v37 = (_DWORD)v36 == 1 || v25 >= 0;
      }
      else
      {
        v37 = 0;
      }
      sub_14072C410((unsigned int)v62, v33, 0, 1, 1);
      v50 = *(_QWORD *)&v62[8];
      if ( v62[0] )
        sub_141938D2B(*(_QWORD *)&v62[8], *(_QWORD *)&v62[16]);
      v51 = *(_QWORD *)&v62[16];
      if ( v33 )
        sub_1418F44E0(*(__m128i **)&v62[16], v34, v33);
      v52 = (_QWORD *)v68;
      *(_QWORD *)v68 = -1;
      v52[1] = v37;
      v52[2] = v25;
      v52[3] = v50;
      v52[4] = v51;
      v52[5] = v33;
    }
    else
    {
      v47 = sub_1416419F0(aResult, 6, &v63);
      if ( v47 )
      {
        sub_140C9AC90(v62, v47);
        v48 = *(_OWORD *)v62;
        v49 = v68;
        *(_OWORD *)(v68 + 24) = *(_OWORD *)&v62[16];
        *(_OWORD *)(v49 + 8) = v48;
        *(_QWORD *)v49 = -2;
      }
      else
      {
        v67.m256i_i64[0] = (__int64)v57;
        v67.m256i_i64[1] = (__int64)sub_140186EE0;
        sub_1416ABFD0(&v62[8], &unk_141A3AFF5, &v67);
        *(_QWORD *)v62 = 10;
        v53 = (_OWORD *)v68;
        *(_OWORD *)(v68 + 80) = *(_OWORD *)&v62[80];
        v54 = *(_OWORD *)&v62[16];
        v55 = *(_OWORD *)&v62[32];
        v56 = *(_OWORD *)&v62[48];
        v53[4] = *(_OWORD *)&v62[64];
        v53[3] = v56;
        v53[2] = v55;
        v53[1] = v54;
        *v53 = *(_OWORD *)v62;
      }
    }
LABEL_43:
    sub_14002F9D0(&v63);
LABEL_44:
    v18 = (_OWORD *)v68;
  }
  else
  {
    v18 = (_OWORD *)v68;
    *(_OWORD *)(v68 + 80) = *(_OWORD *)&v62[80];
    v18[4] = *(_OWORD *)&v62[64];
    v19 = *(_OWORD *)v62;
    v20 = *(_OWORD *)&v62[16];
    v21 = *(_OWORD *)&v62[32];
    v18[3] = *(_OWORD *)&v62[48];
    v18[2] = v21;
    v18[1] = v20;
    *v18 = v19;
  }
  sub_14002F9D0(a5);
  return v18;
}
