// module: codexmate_lib/core/relay/translator
// addr: 0x140a0ec30
// name: sub_140A0EC30
// win 1.2.3 | module core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
void __fastcall sub_140A0EC30(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // cl
  __int128 v14; // xmm0
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int8 v25; // r15
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  _DWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rbx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r12
  __int64 v44; // r12
  int v45; // eax
  _DWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  void *v51; // rax
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // r12
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rbx
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // r13
  __int64 v64; // r13
  int v65; // eax
  __int64 v66; // rax
  void *v67; // rax
  _DWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rcx
  __int64 v74; // rsi
  bool v75; // bl
  void *v76; // rax
  void *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // [rsp+40h] [rbp-40h]
  _BYTE *v81; // [rsp+48h] [rbp-38h]
  __int64 v82; // [rsp+50h] [rbp-30h]
  __int64 v83; // [rsp+58h] [rbp-28h]
  __int64 v84; // [rsp+58h] [rbp-28h]
  __int64 v85; // [rsp+60h] [rbp-20h]
  __int64 v86; // [rsp+60h] [rbp-20h]
  __int64 v87; // [rsp+68h] [rbp-18h]
  _BYTE v88[32]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v89; // [rsp+90h] [rbp+10h] BYREF
  __int64 v90; // [rsp+A0h] [rbp+20h]
  __int64 v91; // [rsp+A8h] [rbp+28h]
  _BYTE v92[31]; // [rsp+B0h] [rbp+30h] BYREF
  __m256i v93; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v94; // [rsp+F8h] [rbp+78h]
  __m256i v95; // [rsp+100h] [rbp+80h] BYREF
  char v96; // [rsp+12Ah] [rbp+AAh]
  char v97; // [rsp+12Bh] [rbp+ABh]
  char v98; // [rsp+12Ch] [rbp+ACh]
  char v99; // [rsp+12Dh] [rbp+ADh]
  char v100; // [rsp+12Eh] [rbp+AEh]
  char v101; // [rsp+12Fh] [rbp+AFh]
  __int64 v102; // [rsp+130h] [rbp+B0h]

  v102 = -2;
  if ( !a4 )
  {
    *a1 = -1;
    return;
  }
  v8 = sub_141433D50(aDescription_2, 11, a2);
  if ( v8 && *(_BYTE *)v8 == 3 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    if ( v10 < 0 )
    {
      v11 = 0;
      goto LABEL_6;
    }
    v82 = a3;
    v81 = a1;
    if ( v10 )
    {
      v15 = *(_QWORD *)(v8 + 16);
      nullsub_1(v9);
      v11 = 1;
      v16 = sub_140001650(v10, 1);
      if ( !v16 )
LABEL_6:
        sub_1416C2D4B(v11, v10);
      v87 = v16;
      v91 = v10;
      sub_141684120(v16, v15, v10);
    }
    else
    {
      v87 = 1;
      v91 = 0;
    }
  }
  else
  {
    v82 = a3;
    v81 = a1;
    v91 = -1;
  }
  v101 = 1;
  v12 = sub_141433D50(aParameters_0, 10, a2);
  v80 = a4;
  if ( v12 )
  {
    v13 = *(_BYTE *)v12;
    if ( *(_BYTE *)v12 )
      goto LABEL_16;
  }
  v101 = 1;
  v12 = sub_141433D50(aParametersjson, 20, a2);
  if ( v12 )
  {
    v13 = *(_BYTE *)v12;
    if ( *(_BYTE *)v12 )
      goto LABEL_16;
  }
  if ( (v101 = 1, (v12 = sub_141433D50(aInputSchema, 12, a2)) != 0) && (v13 = *(_BYTE *)v12) != 0
    || (v101 = 1, (v12 = sub_141433D50(aInputschema, 11, a2)) != 0) && (v13 = *(_BYTE *)v12) != 0 )
  {
LABEL_16:
    switch ( v13 )
    {
      case 1:
      case 2:
        v14 = *(_OWORD *)v12;
        *(_OWORD *)&v93.m256i_u64[2] = *(_OWORD *)(v12 + 16);
        *(_OWORD *)v93.m256i_i8 = v14;
        break;
      case 3:
        v101 = 1;
        sub_14149C500(&v93.m256i_u64[1], v12 + 8);
        v93.m256i_i8[0] = 3;
        break;
      case 4:
        v19 = *(_QWORD *)(v12 + 16);
        v20 = *(_QWORD *)(v12 + 24);
        v101 = 1;
        sub_1402CE260(&v93.m256i_u64[1], v19, v20);
        v93.m256i_i8[0] = 4;
        break;
      case 5:
        if ( *(_QWORD *)(v12 + 24) )
        {
          v17 = *(_QWORD *)(v12 + 8);
          if ( !v17 )
          {
            v101 = 1;
            sub_1416C3040(&off_141747358);
          }
          v18 = *(_QWORD *)(v12 + 16);
          v101 = 1;
          sub_1402CCD80(&v93.m256i_u64[1], v17, v18);
          v93.m256i_i8[0] = 5;
        }
        else
        {
          v93.m256i_i64[1] = 0;
          v93.m256i_i64[3] = 0;
          v93.m256i_i8[0] = 5;
        }
        break;
    }
  }
  else
  {
    v101 = 1;
    v21 = sub_141433D50(aFunction_0, 8, a2);
    v23 = v21;
    if ( !v21 )
      goto LABEL_38;
    v101 = 1;
    v24 = sub_141433D50(aParameters_0, 10, v21);
    if ( v24 )
    {
      v25 = *(_BYTE *)v24;
      if ( *(_BYTE *)v24 )
        goto LABEL_133;
    }
    v101 = 1;
    v24 = sub_141433D50(aParametersjson, 20, v23);
    if ( v24 )
    {
      v25 = *(_BYTE *)v24;
      if ( *(_BYTE *)v24 )
        goto LABEL_133;
    }
    if ( (v101 = 1, (v24 = sub_141433D50(aInputSchema, 12, v23)) != 0) && (v25 = *(_BYTE *)v24) != 0
      || (v101 = 1, (v24 = sub_141433D50(aInputschema, 11, v23)) != 0) && (v25 = *(_BYTE *)v24) != 0 )
    {
LABEL_133:
      v22 = (unsigned int)v25 - 1;
      switch ( v25 )
      {
        case 1u:
        case 2u:
          v26 = *(_OWORD *)(v24 + 16);
          *(_OWORD *)v95.m256i_i8 = *(_OWORD *)v24;
          *(_OWORD *)&v95.m256i_u64[2] = v26;
          v25 = v95.m256i_i8[0];
          v27 = *(_OWORD *)(v24 + 16);
          *(_OWORD *)v92 = *(_OWORD *)(v24 + 1);
          *(_OWORD *)&v92[15] = v27;
          if ( v95.m256i_i8[0] == -1 )
            goto LABEL_38;
          goto LABEL_52;
        case 3u:
          v101 = 1;
          sub_14149C500(&v95.m256i_u64[1], v24 + 8);
          goto LABEL_51;
        case 4u:
          v33 = *(_QWORD *)(v24 + 16);
          v34 = *(_QWORD *)(v24 + 24);
          v101 = 1;
          sub_1402CE260(&v95.m256i_u64[1], v33, v34);
          goto LABEL_51;
        case 5u:
          v101 = 1;
          sub_140323EA0(&v95.m256i_i64[1], (_QWORD *)(v24 + 8));
LABEL_51:
          *(_OWORD *)&v92[15] = *(_OWORD *)&v95.m256i_u64[2];
          *(_OWORD *)v92 = *(_OWORD *)&v95.m256i_i8[1];
LABEL_52:
          v93.m256i_i8[0] = v25;
          *(_OWORD *)&v93.m256i_i8[1] = *(_OWORD *)v92;
          *(_OWORD *)&v93.m256i_u64[2] = *(_OWORD *)&v92[15];
          break;
      }
    }
    else
    {
LABEL_38:
      *(_QWORD *)&v89 = 0;
      v90 = 0;
      nullsub_1(v22);
      v28 = (_DWORD *)sub_140001650(4, 1);
      if ( !v28 )
        sub_1416C2D4B(1, 4);
      *v28 = 1701869940;
      v93.m256i_i64[0] = 4;
      v93.m256i_i64[1] = (__int64)v28;
      v93.m256i_i64[2] = 4;
      nullsub_1(v29);
      v30 = sub_140001650(6, 1);
      v94 = v30;
      if ( !v30 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v30 + 4) = 29795;
      *(_DWORD *)v30 = 1701470831;
      v95.m256i_i8[0] = 3;
      v95.m256i_i64[1] = 6;
      v95.m256i_i64[2] = v30;
      v95.m256i_i64[3] = 6;
      sub_140307860(v88, &v89, &v93, &v95);
      if ( v88[0] != 0xFF )
        sub_1400104F0(v88);
      nullsub_1(v31);
      v32 = (void *)sub_140001650(10, 1);
      if ( !v32 )
        sub_1416C2D4B(1, 10);
      qmemcpy(v32, "properties", 10);
      v93.m256i_i64[0] = 10;
      v93.m256i_i64[1] = (__int64)v32;
      v93.m256i_i64[2] = 10;
      v95.m256i_i64[1] = 0;
      v95.m256i_i64[3] = 0;
      v95.m256i_i8[0] = 5;
      sub_140307860(v88, &v89, &v93, &v95);
      if ( v88[0] != 0xFF )
        sub_1400104F0(v88);
      *(_OWORD *)&v93.m256i_u64[1] = v89;
      v93.m256i_i64[3] = v90;
      v93.m256i_i8[0] = 5;
    }
  }
  v100 = 1;
  v99 = 1;
  sub_1409EA6C0(&v93);
  if ( v93.m256i_i8[0] == 5 )
  {
    if ( v93.m256i_i64[1] )
    {
      v36 = v93.m256i_i64[2];
      v94 = v93.m256i_i64[1];
      v37 = v93.m256i_i64[1];
LABEL_56:
      v38 = v37 + 360;
      v85 = v37;
      v83 = *(unsigned __int16 *)(v37 + 626);
      v35 = (unsigned int)(8 * v83);
      v39 = 3 * v35;
      v40 = -1;
      do
      {
        if ( !v39 )
        {
          v40 = v83;
LABEL_66:
          if ( v36-- == 0 )
            goto LABEL_78;
          v37 = *(_QWORD *)(v85 + 8 * v40 + 632);
          goto LABEL_56;
        }
        v41 = v38 + 24;
        v42 = *(_QWORD *)(v38 + 16);
        v43 = v42 - 4;
        if ( v42 >= 4 )
          v42 = 4;
        v44 = -(__int64)v43;
        v45 = sub_1416847B0(aType_8, *(_QWORD *)(v38 + 8), v42);
        if ( v45 )
          v44 = v45;
        LOBYTE(v35) = (v44 > 0) - (v44 < 0);
        ++v40;
        v39 -= 24;
        v38 = v41;
      }
      while ( (_BYTE)v35 == 1 );
      if ( (_BYTE)v35 )
        goto LABEL_66;
      v52 = v94;
      if ( !v94 )
        goto LABEL_103;
      goto LABEL_83;
    }
LABEL_78:
    nullsub_1(v35);
    v53 = (_DWORD *)sub_140001650(4, 1);
    if ( !v53 )
    {
      v100 = 1;
      v99 = 1;
      sub_1416C2D4B(1, 4);
    }
    *v53 = 1701869940;
    *(_QWORD *)v92 = 4;
    *(_QWORD *)&v92[8] = v53;
    *(_QWORD *)&v92[16] = 4;
    nullsub_1(v54);
    v55 = sub_140001650(6, 1);
    v94 = v55;
    if ( !v55 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v55 + 4) = 29795;
    *(_DWORD *)v55 = 1701470831;
    v95.m256i_i64[1] = 6;
    v95.m256i_i64[2] = v55;
    v95.m256i_i64[3] = 6;
    v95.m256i_i8[0] = 3;
    sub_140307860(v88, &v93.m256i_u64[1], v92, &v95);
    if ( v88[0] != 0xFF )
    {
      v100 = 1;
      v99 = 1;
      sub_1400104F0(v88);
    }
    v52 = v93.m256i_i64[1];
    if ( v93.m256i_i64[1] )
    {
LABEL_83:
      v86 = v93.m256i_i64[2];
LABEL_84:
      v56 = v52 + 360;
      v57 = *(unsigned __int16 *)(v52 + 626);
      v94 = v52;
      v58 = (_QWORD *)(v52 - 8);
      v84 = v57;
      v59 = 3LL * (unsigned int)(8 * v57);
      v60 = -1;
      do
      {
        if ( !v59 )
        {
          v60 = v84;
LABEL_94:
          v52 = v94;
          if ( !v86 )
            goto LABEL_103;
          --v86;
          v52 = *(_QWORD *)(v94 + 8 * v60 + 632);
          goto LABEL_84;
        }
        v61 = v56 + 24;
        v62 = *(_QWORD *)(v56 + 16);
        v63 = v62 - 4;
        if ( v62 >= 4 )
          v62 = 4;
        v64 = -(__int64)v63;
        v65 = sub_1416847B0(aType_8, *(_QWORD *)(v56 + 8), v62);
        if ( v65 )
          v64 = v65;
        LOBYTE(v52) = (v64 > 0) - (v64 < 0);
        v58 += 4;
        ++v60;
        v59 -= 24;
        v56 = v61;
      }
      while ( (_BYTE)v52 == 1 );
      if ( (_BYTE)v52 )
        goto LABEL_94;
      if ( *((_BYTE *)v58 - 24) == 3 && *v58 == 6 )
      {
        v66 = *(v58 - 1);
        v52 = *(_DWORD *)v66 ^ 0x656A626Fu;
        if ( !((unsigned int)v52 | *(unsigned __int16 *)(v66 + 4) ^ 0x7463)
          && !sub_1402B3A40(&v93.m256i_u64[1], aProperties_0, 10) )
        {
          nullsub_1(v52);
          v67 = (void *)sub_140001650(10, 1);
          if ( !v67 )
          {
            v100 = 1;
            v99 = 1;
            sub_1416C2D4B(1, 10);
          }
          qmemcpy(v67, "properties", 10);
          *(_QWORD *)v92 = 10;
          *(_QWORD *)&v92[8] = v67;
          *(_QWORD *)&v92[16] = 10;
          v95.m256i_i64[1] = 0;
          v95.m256i_i64[3] = 0;
          v95.m256i_i8[0] = 5;
          v100 = 1;
          v99 = 1;
          sub_140307860(v88, &v93.m256i_u64[1], v92, &v95);
          if ( v88[0] != 0xFF )
          {
            v100 = 1;
            v99 = 1;
            sub_1400104F0(v88);
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v89 = 0;
    v90 = 0;
    nullsub_1(v35);
    v47 = (_DWORD *)sub_140001650(4, 1);
    if ( !v47 )
      sub_1416C2D4B(1, 4);
    *v47 = 1701869940;
    *(_QWORD *)v92 = 4;
    *(_QWORD *)&v92[8] = v47;
    *(_QWORD *)&v92[16] = 4;
    nullsub_1(v48);
    v49 = sub_140001650(6, 1);
    v94 = v49;
    if ( !v49 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v49 + 4) = 29795;
    *(_DWORD *)v49 = 1701470831;
    v95.m256i_i8[0] = 3;
    v95.m256i_i64[1] = 6;
    v95.m256i_i64[2] = v49;
    v95.m256i_i64[3] = 6;
    sub_140307860(v88, &v89, v92, &v95);
    if ( v88[0] != 0xFF )
      sub_1400104F0(v88);
    nullsub_1(v50);
    v51 = (void *)sub_140001650(10, 1);
    if ( !v51 )
      sub_1416C2D4B(1, 10);
    qmemcpy(v51, "properties", 10);
    *(_QWORD *)v92 = 10;
    *(_QWORD *)&v92[8] = v51;
    *(_QWORD *)&v92[16] = 10;
    v95.m256i_i64[1] = 0;
    v95.m256i_i64[3] = 0;
    v95.m256i_i8[0] = 5;
    sub_140307860(v88, &v89, v92, &v95);
    if ( v88[0] != 0xFF )
      sub_1400104F0(v88);
    *(_OWORD *)((char *)&v95.m256i_u32[1] + 3) = v89;
    *(__int64 *)((char *)&v95.m256i_i64[2] + 7) = v90;
    sub_1400104F0(&v93);
    v93.m256i_i8[0] = 5;
    *(_OWORD *)&v93.m256i_i8[1] = *(_OWORD *)v95.m256i_i8;
    *(_OWORD *)&v93.m256i_u64[2] = *(_OWORD *)((char *)&v95.m256i_u64[1] + 7);
  }
LABEL_103:
  *(_QWORD *)&v89 = 0;
  v90 = 0;
  nullsub_1(v52);
  v68 = (_DWORD *)sub_140001650(4, 1);
  if ( !v68 )
  {
    v98 = 1;
    v97 = 1;
    sub_1416C2D4B(1, 4);
  }
  *v68 = 1701667182;
  *(_QWORD *)v92 = 4;
  *(_QWORD *)&v92[8] = v68;
  *(_QWORD *)&v92[16] = 4;
  if ( v80 < 0 )
  {
    v70 = 0;
    goto LABEL_106;
  }
  nullsub_1(v69);
  v70 = 1;
  v71 = sub_140001650(v80, 1);
  if ( !v71 )
  {
LABEL_106:
    v96 = 1;
    sub_1416C2D4B(v70, v80);
  }
  v72 = v71;
  sub_141684120(v71, v82, v80);
  v95.m256i_i64[1] = v80;
  v95.m256i_i64[2] = v72;
  v95.m256i_i64[3] = v80;
  v95.m256i_i8[0] = 3;
  v96 = 0;
  sub_140307860(v88, &v89, v92, &v95);
  if ( v88[0] != 0xFF )
  {
    v98 = 1;
    v97 = 1;
    sub_1400104F0(v88);
  }
  v74 = v91;
  v75 = v91 == -1;
  if ( v91 != -1 )
  {
    nullsub_1(v73);
    v76 = (void *)sub_140001650(11, 1);
    v94 = (__int64)v76;
    if ( !v76 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v76, "description", 11);
    *(_QWORD *)v92 = 11;
    *(_QWORD *)&v92[8] = v76;
    *(_QWORD *)&v92[16] = 11;
    v95.m256i_i64[1] = v74;
    v95.m256i_i64[2] = v87;
    v95.m256i_i64[3] = v74;
    v95.m256i_i8[0] = 3;
    sub_140307860(v88, &v89, v92, &v95);
    if ( v88[0] != 0xFF )
      sub_1400104F0(v88);
  }
  nullsub_1(v73);
  v77 = (void *)sub_140001650(12, 1);
  if ( !v77 )
  {
    v98 = 1;
    v97 = v75;
    sub_1416C2D4B(1, 12);
  }
  qmemcpy(v77, "input_schema", 12);
  *(_QWORD *)v92 = 12;
  *(_QWORD *)&v92[8] = v77;
  *(_QWORD *)&v92[16] = 12;
  v95 = v93;
  v98 = 0;
  v97 = v75;
  sub_140307860(v88, &v89, v92, &v95);
  if ( v88[0] != 0xFF )
  {
    v98 = 0;
    v97 = v75;
    sub_1400104F0(v88);
  }
  *(__int64 *)((char *)&v95.m256i_i64[2] + 7) = v90;
  *(_OWORD *)((char *)&v95.m256i_u32[1] + 3) = v89;
  *v81 = 5;
  v78 = *(__int64 *)((char *)&v95.m256i_i64[1] + 7);
  v79 = *(__int64 *)((char *)&v95.m256i_i64[2] + 7);
  *(_OWORD *)(v81 + 1) = *(_OWORD *)v95.m256i_i8;
  *((_QWORD *)v81 + 2) = v78;
  *((_QWORD *)v81 + 3) = v79;
}