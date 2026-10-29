// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x14099f2f0 | successor of pre-update 0x140f0bc00 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.921, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_14099F2F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __m128i *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int32 v17; // edx
  unsigned __int128 v18; // kr10_16
  __int64 v19; // rdx
  unsigned __int8 (__fastcall *v20)(unsigned __int64); // rax
  __int64 v21; // r14
  __m128i v22; // xmm0
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  __int64 *v31; // rbx
  __int64 v32; // r15
  _QWORD *v33; // rcx
  __int64 *v34; // rax
  unsigned __int64 v35; // r12
  _QWORD *v36; // r13
  __int64 *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // r12
  __int64 v41; // rdx
  __m128i v42; // [rsp+30h] [rbp-50h] BYREF
  __m128i *v43; // [rsp+40h] [rbp-40h]
  __int64 (__fastcall *v44)(_QWORD, _QWORD); // [rsp+48h] [rbp-38h]
  unsigned __int64 v45; // [rsp+50h] [rbp-30h]
  __m128i v46; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int64 v47; // [rsp+2B0h] [rbp+230h]
  __m128i v48; // [rsp+518h] [rbp+498h] BYREF
  __int64 v49; // [rsp+528h] [rbp+4A8h]
  __m128i v50; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v51; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v52; // [rsp+548h] [rbp+4C8h]
  __int64 v53; // [rsp+550h] [rbp+4D0h]
  unsigned __int128 v54; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v55; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v56; // [rsp+578h] [rbp+4F8h]
  __int64 v57; // [rsp+580h] [rbp+500h]
  __int64 v58; // [rsp+588h] [rbp+508h]
  __int64 v59; // [rsp+590h] [rbp+510h]
  __int64 v60; // [rsp+598h] [rbp+518h]
  __m128i v61; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v62; // [rsp+5B0h] [rbp+530h]
  __int64 v63; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v64; // [rsp+5C8h] [rbp+548h]
  __int64 v65; // [rsp+5D0h] [rbp+550h] BYREF
  __int64 v66; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v67; // [rsp+5E0h] [rbp+560h]
  __int64 v68; // [rsp+5E8h] [rbp+568h]
  __int64 v69; // [rsp+5F0h] [rbp+570h]
  char v70; // [rsp+5FFh] [rbp+57Fh] BYREF
  __int64 v71; // [rsp+600h] [rbp+580h]
  char v72; // [rsp+60Eh] [rbp+58Eh]
  char v73; // [rsp+60Fh] [rbp+58Fh]
  __int64 v74; // [rsp+610h] [rbp+590h]

  v74 = -2;
  sub_1416CC450(&v42, a2[9], a2[10]);
  v6 = v42.m128i_u64[1];
  if ( v42.m128i_i64[0] == -1 )
  {
    switch ( v42.m128i_i8[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(v42.m128i_i64[1] + 16) )
          goto LABEL_28;
        goto LABEL_32;
      case 1:
        if ( !*(_BYTE *)(v42.m128i_i64[1] + 31) )
          goto LABEL_32;
        goto LABEL_28;
      case 2:
        v73 = 1;
        v20 = *(unsigned __int8 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v5, v4) + 8);
        v73 = 1;
        if ( v20(HIDWORD(v6)) )
          goto LABEL_28;
        goto LABEL_32;
      case 3:
        if ( v42.m128i_i8[12] )
        {
LABEL_28:
          v61.m128i_i64[0] = v6;
          v46.m128i_i64[0] = (__int64)&v61;
          v46.m128i_i64[1] = (__int64)sub_1416EA080;
          sub_1416DAFA0(&v48, &unk_141A5FBBF, &v46);
          *(_QWORD *)(a1 + 24) = v49;
          *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v48);
          *(_QWORD *)a1 = 10;
          if ( (v61.m128i_i8[0] & 3u) - 2 >= 2 && (v61.m128i_i8[0] & 3) != 0 )
          {
            v46.m128i_i64[1] = v61.m128i_i64[0] - 1;
            v46.m128i_i8[0] = 3;
            v73 = 0;
            sub_1416EBAD0(&v46.m128i_u64[1]);
          }
        }
        else
        {
LABEL_32:
          *(_OWORD *)a1 = -1;
          if ( (v6 & 3) - 2 >= 2 && (v6 & 3) != 0 )
          {
            v46.m128i_i64[1] = v6 - 1;
            v46.m128i_i8[0] = 3;
            v73 = 0;
            sub_1416EBAD0(&v46.m128i_u64[1]);
          }
        }
        break;
    }
    return;
  }
  v67 = v42.m128i_i64[1];
  v71 = v42.m128i_i64[0];
  v7 = v43;
  sub_1416B18A0((unsigned int)&v51, a2[97], a2[98], (unsigned int)&unk_141A5FB9A, 14);
  v42.m128i_i8[0] = 1;
  v8 = v53;
  v68 = v52;
  v9 = sub_1416B9760(&v42, v52, v53);
  if ( v9 )
  {
    v65 = v9;
    v46.m128i_i64[0] = (__int64)&v65;
    v46.m128i_i64[1] = (__int64)sub_1416EA080;
    sub_1416DAFA0(&v42, &unk_141A59BAA, &v46);
    v46 = v42;
    v47 = (unsigned __int64)v43;
    if ( (unsigned int)(v65 & 3) - 2 >= 2 && (v65 & 3) != 0 )
    {
      v61.m128i_i64[1] = v65 - 1;
      v61.m128i_i8[0] = 3;
      sub_1416EBAD0(&v61.m128i_u64[1]);
    }
    *(_QWORD *)(a1 + 24) = v47;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v46);
    *(_QWORD *)a1 = 10;
    goto LABEL_7;
  }
  v46.m128i_i32[0] = sub_1416B2E50(v11, v10, v12);
  v46.m128i_i32[1] = v17;
  sub_1416B2E00(&v42, &v46, 3577643008LL, 27111902);
  v18 = 0u;
  if ( !v42.m128i_i8[0] )
    v18 = v42.m128i_u64[1] * (unsigned __int128)0x3E8uLL + (unsigned int)v43 / 0xF4240uLL;
  v54 = v18;
  sub_141597890(&v42);
  v50 = v42;
  v42.m128i_i64[0] = (__int64)&v54;
  v42.m128i_i64[1] = (__int64)sub_1416E85A0;
  v43 = &v50;
  v44 = sub_1402230B0;
  sub_1416DAFA0(&v55, &unk_141A5FBA8, &v42);
  v69 = v56;
  sub_1416B18A0((unsigned int)&v61, v68, v8, v56, v57);
  if ( v55 )
    sub_140001660(v69, v55, 1);
  v69 = v61.m128i_i64[1];
  if ( (sub_1407C8880(v61.m128i_i64[1], v62, v67, v7) & 1) != 0 )
  {
    v63 = v19;
    v46.m128i_i64[0] = (__int64)&v63;
    v46.m128i_i64[1] = (__int64)sub_1416EA080;
    sub_1416DAFA0(&v42, &unk_141A59BD4, &v46);
    v46 = v42;
    v47 = (unsigned __int64)v43;
    if ( (unsigned int)(v63 & 3) - 2 >= 2 && (v63 & 3) != 0 )
    {
      v66 = v63 - 1;
      LOBYTE(v65) = 3;
      sub_1416EBAD0(&v66);
    }
    *(_QWORD *)(a1 + 24) = v47;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v46);
    *(_QWORD *)a1 = 10;
    if ( v61.m128i_i64[0] )
      sub_140001660(v69, v61.m128i_i64[0], 1);
LABEL_7:
    v13 = v67;
    v14 = v71;
    if ( v51 )
      sub_140001660(v68, v51, 1);
    if ( v14 )
    {
      v15 = v13;
      v16 = v14;
LABEL_11:
      sub_140001660(v15, v16, 1);
      return;
    }
    return;
  }
  sub_1407B9160(v19);
  sub_1416C4AC0(&v42, v68, v8);
  if ( v42.m128i_i32[0] == 2 )
  {
    v46.m128i_i64[1] = v42.m128i_i64[1];
    v46.m128i_i64[0] = 2;
LABEL_38:
    sub_140776A60(&v46);
LABEL_39:
    v21 = v71;
    goto LABEL_40;
  }
  sub_1419234B0(&v46, &v42, 624);
  if ( v46.m128i_i64[0] == 2 )
    goto LABEL_38;
  sub_1419234B0(&v42, &v46, 624);
  sub_14020FFB0(&v46, &v42);
  v23 = v47;
  if ( v47 >= 0x15 )
  {
    v28 = v46.m128i_i64[1];
    v72 = 1;
    sub_1401B6A30(v46.m128i_i64[1], v47, &v70);
    v29 = v23 - 20;
    v30 = 32 * v23;
    v31 = (__int64 *)(v28 + v30);
    v42.m128i_i64[0] = v28;
    v58 = v46.m128i_i64[0];
    v43 = (__m128i *)v46.m128i_i64[0];
    v44 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v28 + v30);
    v32 = v30 - 32;
    v33 = (_QWORD *)(v28 + 40);
    v59 = v28;
    v34 = (__int64 *)v28;
    while ( 1 )
    {
      v45 = --v29;
      if ( v34 == v31 )
        break;
      v35 = v32;
      v36 = v33;
      v37 = v34 + 4;
      v42.m128i_i64[1] = (__int64)(v34 + 4);
      if ( *v34 != -1 )
      {
        v64 = *v34;
        v38 = v34[2];
        v60 = v34[1];
        v39 = sub_1416C4110(v60, v38);
        if ( v64 )
          sub_140001660(v60, v64, 1);
        if ( v39 && (unsigned int)(v39 & 3) - 2 >= 2 && (v39 & 3) != 0 )
        {
          v66 = v39 - 1;
          LOBYTE(v65) = 3;
          sub_1416EBAD0(&v66);
        }
        v32 = v35 - 32;
        v33 = v36 + 4;
        v34 = v37;
        if ( v29 )
          continue;
      }
      if ( v31 != v37 )
      {
        v40 = v35 >> 5;
        do
        {
          v41 = *(v36 - 1);
          if ( v41 )
            sub_140001660(*v36, v41, 1);
          v36 += 4;
          --v40;
        }
        while ( v40 );
      }
      break;
    }
    if ( v58 )
      sub_140001660(v59, 32 * v58, 8);
    goto LABEL_39;
  }
  v24 = v46.m128i_i64[1];
  v21 = v71;
  if ( v47 )
  {
    v25 = 32 * v47;
    v26 = 0;
    do
    {
      v27 = *(_QWORD *)(v24 + v26);
      if ( v27 )
        sub_140001660(*(_QWORD *)(v24 + v26 + 8), v27, 1);
      v26 += 32;
    }
    while ( v25 != v26 );
  }
  if ( v46.m128i_i64[0] )
    sub_140001660(v24, 32 * v46.m128i_i64[0], 8);
LABEL_40:
  v22 = _mm_loadu_si128(&v61);
  *(_OWORD *)(a1 + 24) = v62;
  *(__m128i *)(a1 + 8) = v22;
  *(_QWORD *)a1 = -1;
  if ( v51 )
    sub_140001660(v68, v51, 1);
  v15 = v67;
  if ( v21 )
  {
    v16 = v21;
    goto LABEL_11;
  }
}
