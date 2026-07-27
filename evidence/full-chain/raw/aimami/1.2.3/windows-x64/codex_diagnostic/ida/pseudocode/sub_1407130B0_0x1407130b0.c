// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1407130b0
// name: sub_1407130B0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1407130B0(__int64 a1, int a2, int a3)
{
  __int64 v6; // rsi
  __int64 v7; // r13
  __int8 v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r12
  __int8 v17; // di
  __int64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r15
  __int64 v30; // r13
  __int64 v31; // r12
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rsi
  int v34; // eax
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __m256i v43; // [rsp+28h] [rbp-58h] BYREF
  __int64 v44; // [rsp+48h] [rbp-38h]
  __int64 v45; // [rsp+50h] [rbp-30h]
  __int64 v46; // [rsp+58h] [rbp-28h]
  __int64 v47; // [rsp+60h] [rbp-20h]
  __int64 v48; // [rsp+68h] [rbp-18h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  __int64 v50; // [rsp+78h] [rbp-8h]
  __int64 v51; // [rsp+80h] [rbp+0h]
  __int64 v52; // [rsp+88h] [rbp+8h]
  char v53[144]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v54; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v55; // [rsp+128h] [rbp+A8h]
  __int128 v56; // [rsp+130h] [rbp+B0h]
  __int64 v57; // [rsp+140h] [rbp+C0h]
  __int64 v58; // [rsp+148h] [rbp+C8h]
  __int64 v59; // [rsp+150h] [rbp+D0h]
  __int64 v60; // [rsp+158h] [rbp+D8h]
  __int64 v61; // [rsp+160h] [rbp+E0h]
  __int64 v62; // [rsp+168h] [rbp+E8h]
  __int64 v63; // [rsp+170h] [rbp+F0h]
  __int64 v64; // [rsp+178h] [rbp+F8h]
  __int64 v65; // [rsp+180h] [rbp+100h]
  char v66[144]; // [rsp+188h] [rbp+108h] BYREF
  __int64 v67; // [rsp+218h] [rbp+198h]
  __int64 v68; // [rsp+220h] [rbp+1A0h]
  __int64 v69; // [rsp+228h] [rbp+1A8h]
  __int64 v70; // [rsp+230h] [rbp+1B0h]
  _BYTE v71[15]; // [rsp+238h] [rbp+1B8h]
  __int64 v72; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v73; // [rsp+250h] [rbp+1D0h]
  __int64 v74; // [rsp+258h] [rbp+1D8h]
  __int64 v75; // [rsp+260h] [rbp+1E0h]
  __int64 v76; // [rsp+268h] [rbp+1E8h]
  _QWORD v77[2]; // [rsp+270h] [rbp+1F0h]
  __int64 v78; // [rsp+280h] [rbp+200h]
  __int64 v79; // [rsp+288h] [rbp+208h]
  __int64 v80; // [rsp+290h] [rbp+210h]
  _QWORD v81[2]; // [rsp+298h] [rbp+218h]
  __int64 v82; // [rsp+2A8h] [rbp+228h]
  char v83; // [rsp+2B6h] [rbp+236h]
  char v84; // [rsp+2B7h] [rbp+237h]
  __int64 v85; // [rsp+2B8h] [rbp+238h]
  __int64 v86; // [rsp+2C0h] [rbp+240h]
  char v87; // [rsp+2CFh] [rbp+24Fh]
  __int64 v88; // [rsp+2D0h] [rbp+250h]

  v88 = -2;
  sub_141483720(&v54);
  v82 = v54;
  if ( v54 == -1 )
  {
    sub_1401DD260(v55);
  }
  else
  {
    v78 = v55;
    v76 = v56;
  }
  sub_141483AC0(&v72, aCodexSqliteHom, 17);
  v87 = 1;
  sub_141473FA0((unsigned int)&v54, a2, a3, (unsigned int)&unk_1417893D6, 11);
  v86 = v55;
  sub_14148D130(&v43, v55, v56);
  if ( v54 )
    sub_140001660(v86, v54, 1);
  if ( v43.m256i_i64[0] == -1 )
  {
    v87 = 1;
    result = sub_1401DD260(v43.m256i_i64[1]);
    goto LABEL_51;
  }
  v80 = v43.m256i_i64[1];
  v85 = v43.m256i_i64[0];
  sub_140FBF870(&v43);
  v7 = v43.m256i_i64[1];
  v6 = v43.m256i_i64[0];
  v8 = v43.m256i_i8[16];
  v81[0] = *(__int64 *)((char *)&v43.m256i_i64[2] + 1);
  *(_QWORD *)((char *)v81 + 7) = v43.m256i_i64[3];
  v9 = v44;
  v10 = v47;
  v11 = v48;
  v12 = v49;
  v13 = v50;
  v14 = v51;
  v79 = a1;
  if ( v43.m256i_i64[0] == 2 )
  {
    v86 = v47;
    v6 = v48;
    v77[0] = v81[0];
    *(_QWORD *)((char *)v77 + 7) = *(_QWORD *)((char *)v81 + 7);
    v15 = *(_QWORD *)((char *)v81 + 7);
    v81[0] = v77[0];
    *(_QWORD *)((char *)v81 + 7) = v15;
    v16 = v85;
    v17 = v43.m256i_i8[16];
    v18 = v45;
    if ( v43.m256i_i64[1] == 2 )
      goto LABEL_9;
  }
  else
  {
    v68 = v46;
    v67 = v52;
    v86 = v44;
    v20 = v45;
    v70 = v50;
    v69 = v51;
    sub_141684120(v66, v53, 144);
    v77[0] = v81[0];
    *(_QWORD *)((char *)v77 + 7) = *(_QWORD *)((char *)v81 + 7);
    v54 = v6;
    v55 = v7;
    LOBYTE(v56) = v8;
    *(_QWORD *)((char *)&v56 + 1) = v77[0];
    *((_QWORD *)&v56 + 1) = *(_QWORD *)((char *)v81 + 7);
    v57 = v86;
    v58 = v20;
    v59 = v68;
    v60 = v10;
    v61 = v11;
    v62 = v12;
    v63 = v70;
    v64 = v69;
    v65 = v67;
    sub_140694000(&v43, &v54);
    v17 = v43.m256i_i8[8];
    v81[0] = *(__int64 *)((char *)&v43.m256i_i64[1] + 1);
    *(_QWORD *)((char *)v81 + 7) = v43.m256i_i64[2];
    if ( v43.m256i_i64[0] != 2 )
    {
      v86 = v46;
      v6 = v47;
      v12 = v48;
      v13 = v49;
      v14 = v50;
    }
    v16 = v85;
    v9 = v43.m256i_i64[3];
    v18 = v44;
    if ( v43.m256i_i64[0] == 2 )
    {
LABEL_9:
      v86 = v9;
      result = v81[0];
      *(_QWORD *)&v71[7] = *(_QWORD *)((char *)v81 + 7);
      *(_QWORD *)v71 = v81[0];
      if ( !v16 )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
  if ( v9 )
  {
    v21 = v18;
    v22 = v13;
    v23 = v14;
    sub_140001660(v21, v9, 1);
    v14 = v23;
    v13 = v22;
  }
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v14, v13, 1);
  v18 = v6;
  if ( v12 )
  {
    v6 += 8;
    do
    {
      v24 = *(_QWORD *)(v6 - 8);
      if ( v24 )
        sub_140001660(*(_QWORD *)v6, v24, 1);
      v6 += 24;
      --v12;
    }
    while ( v12 );
  }
  v17 = -1;
  result = v86;
  if ( v86 )
    result = sub_140001660(v18, 24 * v86, 8);
  if ( !v16 )
    goto LABEL_28;
LABEL_27:
  result = sub_140001660(v80, v16, 1);
LABEL_28:
  a1 = v79;
  if ( v17 == -1 )
    goto LABEL_51;
  v43.m256i_i64[1] = *(_QWORD *)&v71[7];
  *(__int64 *)((char *)v43.m256i_i64 + 1) = *(_QWORD *)v71;
  v43.m256i_i64[2] = v86;
  v43.m256i_i64[3] = v18;
  v43.m256i_i8[0] = v17;
  v25 = -1;
  if ( v17 != 6 )
    goto LABEL_48;
  v26 = v43.m256i_i64[1];
  if ( !v43.m256i_i64[1] )
    goto LABEL_48;
  while ( 2 )
  {
    v27 = v26 + 360;
    v28 = *(unsigned __int16 *)(v26 + 626);
    v85 = v26;
    v29 = (_QWORD *)(v26 - 8);
    v80 = v28;
    v30 = 3LL * (unsigned int)(8 * v28);
    v31 = -1;
    do
    {
      if ( !v30 )
      {
        v31 = v80;
        goto LABEL_41;
      }
      v18 = v27 + 24;
      v32 = *(_QWORD *)(v27 + 16);
      v33 = v32 - 11;
      if ( v32 >= 0xB )
        v32 = 11;
      v6 = -(__int64)v33;
      v34 = sub_1416847B0("sqlite_home", *(_QWORD *)(v27 + 8), v32);
      if ( v34 )
        v6 = v34;
      v35 = (v6 > 0) - (v6 < 0);
      v29 += 4;
      ++v31;
      v30 -= 24;
      v27 = v18;
    }
    while ( v35 == 1 );
    if ( v35 )
    {
LABEL_41:
      if ( v86 )
      {
        --v86;
        v26 = *(_QWORD *)(v85 + 8 * v31 + 632);
        continue;
      }
      v25 = -1;
      goto LABEL_44;
    }
    break;
  }
  v25 = -1;
  if ( *((_BYTE *)v29 - 24) )
  {
LABEL_44:
    a1 = v79;
    goto LABEL_48;
  }
  v36 = sub_14033BC10(*(v29 - 1), *v29);
  a1 = v79;
  if ( v36 && v37 )
  {
    sub_14149BB70(&v54, v36, v37);
    v25 = v54;
    v86 = v55;
    v6 = *((_QWORD *)&v56 + 1);
    v18 = v56;
  }
LABEL_48:
  v87 = 1;
  result = sub_14034CAE0(&v43);
  if ( v25 != -1 )
  {
    v85 = v25;
    v84 = 0;
    if ( (unsigned __int8)sub_141473380(v86, v18) )
    {
      v54 = v85;
      v55 = v86;
      *(_QWORD *)&v56 = v18;
      *((_QWORD *)&v56 + 1) = v6;
      v38 = v82;
    }
    else
    {
      v38 = v82;
      if ( v82 == -1 )
      {
        v54 = v85;
        v55 = v86;
        *(_QWORD *)&v56 = v18;
        *((_QWORD *)&v56 + 1) = v6;
      }
      else
      {
        sub_141473FA0((unsigned int)&v54, v78, v76, v86, v18);
        v38 = v82;
        if ( v85 )
          sub_140001660(v86, v85, 1);
      }
    }
    result = v54;
    v42 = v55;
    *(_OWORD *)(a1 + 16) = v56;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v42;
    if ( v72 != -1 && v72 )
      result = sub_140001660(v73, v72, 1);
    goto LABEL_70;
  }
LABEL_51:
  v38 = v82;
  if ( v72 == -1 )
  {
LABEL_57:
    *(_QWORD *)a1 = -1;
    goto LABEL_70;
  }
  v39 = v74;
  if ( !v74 )
  {
    if ( v72 )
      result = sub_140001660(v73, v72, 1);
    goto LABEL_57;
  }
  v85 = v72;
  v40 = v75;
  v83 = 0;
  v86 = v73;
  if ( (unsigned __int8)sub_141473380(v73, v74) )
  {
    v54 = v85;
    v55 = v86;
    *(_QWORD *)&v56 = v39;
    *((_QWORD *)&v56 + 1) = v40;
    v38 = v82;
  }
  else
  {
    v38 = v82;
    if ( v82 == -1 )
    {
      v54 = v85;
      v55 = v86;
      *(_QWORD *)&v56 = v39;
      *((_QWORD *)&v56 + 1) = v40;
    }
    else
    {
      sub_141473FA0((unsigned int)&v54, v78, v76, v86, v39);
      v38 = v82;
      if ( v85 )
        sub_140001660(v86, v85, 1);
    }
  }
  result = v54;
  v41 = v55;
  *(_OWORD *)(a1 + 16) = v56;
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v41;
LABEL_70:
  if ( v38 > 0 )
    return sub_140001660(v78, v38, 1);
  return result;
}