// module: codexmate_lib/core/sessions
// addr: 0x14074bfd0
// name: patch_rollout_cwd
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::sessions::patch_rollout_cwd | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall patch_rollout_cwd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // r14
  __int64 v35; // r12
  _BYTE *v36; // rax
  __int64 v37; // rcx
  _BYTE *v38; // r14
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rbx
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r15
  unsigned __int64 v55; // r9
  __int64 v56; // r14
  __int64 v57; // rsi
  __int64 v58; // r14
  __int64 v59; // rax
  _QWORD *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // r14
  _QWORD *v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // r14
  __int128 v68; // xmm0
  __int128 v69; // xmm2
  __int128 v70; // xmm3
  _BYTE v71[32]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v72; // [rsp+48h] [rbp-38h] BYREF
  __int64 v73; // [rsp+58h] [rbp-28h]
  _OWORD v74[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v75[3]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v76; // [rsp+98h] [rbp+18h]
  __int64 v77; // [rsp+A0h] [rbp+20h]
  __int64 v78; // [rsp+A8h] [rbp+28h]
  _OWORD v79[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v80; // [rsp+D0h] [rbp+50h]
  __int64 v81; // [rsp+D8h] [rbp+58h]
  __int128 v82; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v83; // [rsp+F0h] [rbp+70h]
  __int128 v84; // [rsp+100h] [rbp+80h]
  __int128 v85; // [rsp+110h] [rbp+90h]
  __int128 v86; // [rsp+120h] [rbp+A0h]
  __int128 v87; // [rsp+130h] [rbp+B0h]
  __int128 v88; // [rsp+140h] [rbp+C0h] BYREF
  _QWORD v89[5]; // [rsp+150h] [rbp+D0h] BYREF
  char v90; // [rsp+178h] [rbp+F8h]
  __int16 v91; // [rsp+180h] [rbp+100h]
  __int64 v92; // [rsp+190h] [rbp+110h]
  __int64 v93; // [rsp+198h] [rbp+118h]
  __int64 v94; // [rsp+1A0h] [rbp+120h]
  __int64 v95; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v96; // [rsp+1B0h] [rbp+130h]
  __int64 v97; // [rsp+1B8h] [rbp+138h]
  __int64 v98; // [rsp+1C0h] [rbp+140h]
  __int64 v99; // [rsp+1C8h] [rbp+148h]
  __int64 v100; // [rsp+1D0h] [rbp+150h]
  __int64 v101; // [rsp+1D8h] [rbp+158h]
  __int64 v102; // [rsp+1E0h] [rbp+160h]
  __int64 v103; // [rsp+1E8h] [rbp+168h]
  char v104; // [rsp+1F7h] [rbp+177h]
  __int64 v105; // [rsp+1F8h] [rbp+178h]

  v105 = -2;
  v8 = a3;
  v9 = a2;
  sub_14148D130(&v82, a2, a3);
  v12 = *((_QWORD *)&v82 + 1);
  result = v82;
  if ( (_QWORD)v82 == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v12;
    return result;
  }
  v77 = a4;
  v92 = v82;
  v95 = 0;
  v96 = 8;
  v97 = 0;
  *(_QWORD *)&v88 = 0;
  *((_QWORD *)&v88 + 1) = v83;
  v89[0] = *((_QWORD *)&v82 + 1);
  v89[1] = v83;
  v89[2] = 0;
  v76 = v83;
  v89[3] = v83;
  v89[4] = 0xA0000000ALL;
  v90 = 1;
  v91 = 0;
  v103 = -1;
  v94 = 0;
  v98 = *((_QWORD *)&v82 + 1);
  while ( 1 )
  {
    if ( HIBYTE(v91) )
      goto LABEL_63;
    v13 = v89[0];
    v100 = v102;
    v99 = v103;
    v104 = 1;
    sub_1407BC790(&v82, v89);
    if ( (_DWORD)v82 == 1 )
    {
      v14 = v88;
      *(_QWORD *)&v88 = v83;
      v15 = v83 - v14;
      v16 = v14 + v13;
      if ( (_QWORD)v83 != v14 )
        goto LABEL_10;
      goto LABEL_16;
    }
    if ( HIBYTE(v91) )
      break;
    HIBYTE(v91) = 1;
    v15 = *((_QWORD *)&v88 + 1) - v88;
    if ( ((unsigned __int8)v91 | (*((_QWORD *)&v88 + 1) != (_QWORD)v88)) != 1 )
      break;
    v16 = v89[0] + v88;
    if ( v15 )
    {
LABEL_10:
      if ( *(_BYTE *)(v16 + v15 - 1) == 10 )
      {
        if ( v15 == 1 )
        {
          v15 = 0;
        }
        else if ( *(_BYTE *)(v16 + v15 - 2) == 13 )
        {
          v15 -= 2;
        }
        else
        {
          --v15;
        }
      }
    }
LABEL_16:
    v100 = v102;
    v99 = v103;
    v104 = 1;
    v101 = v15;
    sub_14033BC10(v16, v15);
    if ( !v18 )
      goto LABEL_24;
    *(_QWORD *)&v82 = v16;
    *((_QWORD *)&v82 + 1) = v101;
    v83 = 0;
    *(_QWORD *)&v84 = v16;
    *((_QWORD *)&v84 + 1) = v101;
    v100 = v102;
    v99 = v103;
    v104 = 1;
    sub_1408A6200(v74, &v82);
    if ( LOBYTE(v74[0]) == 0xFF )
    {
      v100 = v102;
      v99 = v103;
      v104 = 1;
      sub_1406C9CF0((__int64)v74);
LABEL_24:
      if ( v101 < 0 )
      {
        v23 = 0;
        goto LABEL_59;
      }
      if ( !v101 )
      {
        v93 = 1;
        v26 = v97;
        if ( v97 != v95 )
          goto LABEL_31;
LABEL_30:
        sub_141689AB0(&v95);
        goto LABEL_31;
      }
      v20 = v9;
      v21 = v8;
      v22 = a1;
      nullsub_1(v17);
      v23 = 1;
      v24 = v101;
      v25 = sub_140001650(v101, 1);
      if ( !v25 )
      {
        v93 = v24;
LABEL_59:
        v100 = v102;
        v99 = v103;
        v104 = 1;
        sub_1416C2D4B(v23, v93);
      }
      v93 = v25;
      sub_141684120(v25, v16, v24);
      a1 = v22;
      v8 = v21;
      v9 = v20;
      v26 = v97;
      if ( v97 == v95 )
        goto LABEL_30;
LABEL_31:
      v27 = v96;
      v28 = 3 * v26;
      v29 = v101;
      *(_QWORD *)(v96 + 8 * v28) = v101;
      *(_QWORD *)(v27 + 8 * v28 + 8) = v93;
      *(_QWORD *)(v27 + 8 * v28 + 16) = v29;
      v97 = v26 + 1;
      v12 = v98;
    }
    else
    {
      v79[1] = v74[1];
      v79[0] = v74[0];
      v19 = sub_141433D50(aType_6, 4, v79);
      if ( !v19 )
        goto LABEL_22;
      if ( *(_BYTE *)v19 != 3 )
        goto LABEL_22;
      if ( *(_QWORD *)(v19 + 24) != 12 )
        goto LABEL_22;
      if ( **(_QWORD **)(v19 + 16) ^ 0x5F6E6F6973736573LL
         | *(unsigned int *)(*(_QWORD *)(v19 + 16) + 8LL) ^ 0x6174656DLL )
      {
        goto LABEL_22;
      }
      v30 = sub_14142E200(v79, aPayloadCwd, 12);
      if ( !v30 || *(_BYTE *)v30 != 3 )
        goto LABEL_22;
      v31 = *(_QWORD *)(v30 + 16);
      v32 = *(_QWORD *)(v30 + 24);
      v81 = v32;
      if ( v32 != a5 || (v33 = (unsigned int)sub_1416847B0(v31, v77, a5) == 0, v32 = v81, !v33) )
      {
        v78 = v31;
        if ( v32 == a7 )
        {
          if ( !(unsigned int)sub_1416847B0(v31, a6, a7) )
            goto LABEL_22;
          v32 = v81;
          if ( v103 != -1 )
            goto LABEL_22;
        }
        else if ( v103 != -1 )
        {
LABEL_22:
          v100 = v102;
          v99 = v103;
          v104 = 1;
          sub_1400104F0(v79);
          goto LABEL_24;
        }
        v34 = v32;
        sub_140388B60((unsigned int)&v82, v32, 0, 1, 1);
        v35 = *((_QWORD *)&v82 + 1);
        if ( (_DWORD)v82 == 1 )
          sub_1416C2D4B(*((_QWORD *)&v82 + 1), v83);
        v102 = v83;
        if ( v34 )
        {
          sub_141684120(v83, v78, v34);
          v80 = v34;
        }
        else
        {
          v80 = 0;
        }
        v103 = v35;
        goto LABEL_22;
      }
      v36 = (_BYTE *)sub_141433D50(aPayload_1, 7, v79);
      if ( !v36 || *v36 != 5 )
        goto LABEL_22;
      v38 = v36;
      nullsub_1(v37);
      v39 = sub_140001650(3, 1);
      if ( !v39 )
        sub_1416C2D4B(1, 3);
      *(_BYTE *)(v39 + 2) = 100;
      *(_WORD *)v39 = 30563;
      v75[0] = 3;
      v75[1] = v39;
      v75[2] = 3;
      sub_140388B60((unsigned int)&v82, a7, 0, 1, 1);
      v40 = *((_QWORD *)&v82 + 1);
      LOBYTE(v101) = v82;
      if ( (_BYTE)v82 )
        sub_1416C2D4B(*((_QWORD *)&v82 + 1), v83);
      v41 = v83;
      if ( a7 )
        sub_141684120(v83, a6, a7);
      *((_QWORD *)&v82 + 1) = v40;
      *(_QWORD *)&v83 = v41;
      *((_QWORD *)&v83 + 1) = a7;
      LOBYTE(v82) = 3;
      sub_140307860(v71, v38 + 8, v75, &v82);
      if ( v71[0] != 0xFF )
        sub_1400104F0(v71);
      sub_1406CF850(&v82, v79);
      v101 = *((_QWORD *)&v82 + 1);
      v94 = v82;
      if ( (_QWORD)v82 == -1 )
      {
        sub_14070FE00(&v82, v101);
        v68 = v83;
        v69 = v85;
        v70 = v86;
        *(_OWORD *)(a1 + 32) = v84;
        *(_OWORD *)(a1 + 48) = v69;
        *(_OWORD *)(a1 + 64) = v70;
        *(_OWORD *)(a1 + 80) = v87;
        *(_OWORD *)a1 = v82;
        *(_OWORD *)(a1 + 16) = v68;
        v100 = v102;
        v99 = v103;
        v104 = 1;
        sub_1400104F0(v79);
        v12 = v98;
        v54 = v102;
        v56 = v103;
        v57 = v97;
        v48 = v92;
        if ( !v97 )
          goto LABEL_103;
LABEL_86:
        v60 = (_QWORD *)(v96 + 8);
        do
        {
          v61 = *(v60 - 1);
          if ( v61 )
            sub_140001660(*v60, v61, 1);
          v60 += 3;
          --v57;
        }
        while ( v57 );
LABEL_103:
        if ( v95 )
          sub_140001660(v96, 24 * v95, 8);
        result = v56 - 1;
        if ( (unsigned __int64)(v56 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
        {
          v53 = 1;
          v51 = v54;
          v52 = v56;
LABEL_107:
          result = sub_140001660(v51, v52, v53);
        }
        goto LABEL_108;
      }
      v42 = v83;
      v43 = v97;
      if ( v97 == v95 )
        sub_141689AB0(&v95);
      v44 = v96;
      v45 = 3 * v43;
      *(_QWORD *)(v96 + 8 * v45) = v94;
      *(_QWORD *)(v44 + 8 * v45 + 8) = v101;
      *(_QWORD *)(v44 + 8 * v45 + 16) = v42;
      v97 = v43 + 1;
      v100 = v102;
      v99 = v103;
      v104 = 1;
      v46 = sub_1400104F0(v79);
      LOBYTE(v46) = 1;
      v94 = v46;
      v12 = v98;
    }
  }
  v12 = v98;
LABEL_63:
  if ( v103 == -1 )
  {
    v54 = v102;
    if ( (v94 & 1) == 0 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = -1;
      v56 = -1;
      v57 = v97;
      v48 = v92;
      if ( v97 )
        goto LABEL_86;
      goto LABEL_103;
    }
    v100 = v102;
    v99 = -1;
    v104 = 1;
    sub_140440300((unsigned int)&v82, v96, v97, (unsigned int)&unk_141787CA0, 1);
    v89[0] = v83;
    v88 = v82;
    if ( v76 )
    {
      v55 = v89[0];
      if ( *(_BYTE *)(v98 + v76 - 1) == 10 )
      {
        if ( (_QWORD)v88 == v89[0] )
        {
          v67 = v89[0];
          sub_141688D30((unsigned int)&v88, v89[0], 1, 1, 1);
          v55 = v67;
        }
        *(_BYTE *)(*((_QWORD *)&v88 + 1) + v55++) = 10;
        v89[0] = v55;
      }
    }
    else
    {
      v55 = v89[0];
    }
    v58 = *((_QWORD *)&v88 + 1);
    v59 = sub_1408726C0(v9, v8, *((__int64 *)&v88 + 1), v55);
    if ( v59 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v59;
      if ( (_QWORD)v88 )
        sub_140001660(v58, v88, 1);
      v56 = -1;
      v12 = v98;
      v54 = v102;
      v57 = v97;
      v48 = v92;
      if ( v97 )
        goto LABEL_86;
      goto LABEL_103;
    }
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = -1;
    if ( (_QWORD)v88 )
      sub_140001660(v58, v88, 1);
    v62 = v97;
    v48 = v92;
    v63 = v98;
    if ( v97 )
    {
      v64 = (_QWORD *)(v96 + 8);
      do
      {
        v65 = *(v64 - 1);
        if ( v65 )
          sub_140001660(*v64, v65, 1);
        v64 += 3;
        --v62;
      }
      while ( v62 );
    }
    result = v95;
    if ( v95 )
      result = sub_140001660(v96, 24 * v95, 8);
    if ( v48 )
    {
      v66 = v63;
      return sub_140001660(v66, v48, 1);
    }
  }
  else
  {
    *(_QWORD *)&v82 = v103;
    *((_QWORD *)&v82 + 1) = v102;
    *(_QWORD *)&v83 = v80;
    *(_QWORD *)&v88 = &v82;
    *((_QWORD *)&v88 + 1) = sub_1400015F0;
    sub_14149C0F0(&v72, &unk_14178ABCC, &v88);
    *(_QWORD *)(a1 + 24) = v73;
    *(_OWORD *)(a1 + 8) = v72;
    *(_QWORD *)a1 = 10;
    if ( (_QWORD)v82 )
      sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
    v47 = v97;
    v48 = v92;
    v12 = v98;
    if ( v97 )
    {
      v49 = (_QWORD *)(v96 + 8);
      do
      {
        v50 = *(v49 - 1);
        if ( v50 )
          sub_140001660(*v49, v50, 1);
        v49 += 3;
        --v47;
      }
      while ( v47 );
    }
    result = v95;
    if ( v95 )
    {
      v51 = v96;
      v52 = 24 * v95;
      v53 = 8;
      goto LABEL_107;
    }
LABEL_108:
    if ( v48 )
    {
      v66 = v12;
      return sub_140001660(v66, v48, 1);
    }
  }
  return result;
}
