// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | ea 0x14027e150 | name sub_14027E150
// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | attributed via panic-Location xref (win-native)
const char *__fastcall sub_14027E150(__int128 *a1, __int64 a2)
{
  const char *v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // r12
  unsigned __int64 v27; // rsi
  __int64 v28; // r12
  char v29; // bl
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rsi
  _QWORD *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int128 v43; // xmm0
  __int128 v44; // xmm0
  _OWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rdi
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rsi
  _QWORD *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int128 v62; // [rsp+30h] [rbp-50h] BYREF
  __int64 v63; // [rsp+40h] [rbp-40h]
  __int64 v64; // [rsp+48h] [rbp-38h] BYREF
  __int64 v65; // [rsp+50h] [rbp-30h]
  __int64 v66; // [rsp+58h] [rbp-28h]
  __int128 v67; // [rsp+60h] [rbp-20h]
  __int64 v68; // [rsp+70h] [rbp-10h]
  __int128 v69; // [rsp+78h] [rbp-8h]
  __int64 v70; // [rsp+88h] [rbp+8h]
  __int128 v71; // [rsp+90h] [rbp+10h] BYREF
  __int128 v72; // [rsp+A0h] [rbp+20h]
  __int128 v73; // [rsp+B8h] [rbp+38h] BYREF
  unsigned __int64 v74; // [rsp+C8h] [rbp+48h]
  __int128 *v75; // [rsp+D0h] [rbp+50h]
  __int64 v76; // [rsp+D8h] [rbp+58h]
  _BYTE v77[40]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v78; // [rsp+108h] [rbp+88h]
  __int64 v79; // [rsp+118h] [rbp+98h]
  __int64 v80; // [rsp+120h] [rbp+A0h]
  char v81; // [rsp+12Fh] [rbp+AFh]
  __int64 v82; // [rsp+130h] [rbp+B0h]
  char v83; // [rsp+13Ah] [rbp+BAh] BYREF
  char v84; // [rsp+13Bh] [rbp+BBh]
  char v85; // [rsp+13Ch] [rbp+BCh]
  char v86; // [rsp+13Dh] [rbp+BDh]
  char v87; // [rsp+13Eh] [rbp+BEh]
  char v88; // [rsp+13Fh] [rbp+BFh]
  __int64 v89; // [rsp+140h] [rbp+C0h]

  v89 = -2;
  v2 = (const char *)&unk_1419E1848;
  if ( *(_BYTE *)a1 != 4
    || (v4 = *((_QWORD *)a1 + 2), v75 = a1, v5 = *((_QWORD *)a1 + 3), v87 = 1, v6 = sub_14027D270(v4, v5), a1 = v75, !v6) )
  {
LABEL_104:
    sub_14002F9D0(a1);
    return v2;
  }
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = 32 * v7;
    v11 = v9 + v10 - 32;
    if ( v9 + v10 != 32 )
    {
      v87 = 1;
      v12 = (_QWORD *)sub_1416419F0(aRole_0, 4, v11);
      if ( !v12 )
        v12 = off_1421E7108;
      if ( *(_BYTE *)v12 == 3 && v12[3] == 9 )
      {
        v13 = v12[2];
        v14 = _byteswap_uint64(*(_QWORD *)v13);
        if ( v14 == 0x617373697374616ELL )
          v15 = *(unsigned __int8 *)(v13 + 8) - 116;
        else
          v15 = 2 * (v14 >= 0x617373697374616ELL) - 1;
        v8 = 0;
        if ( !v15 )
          v8 = v11;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  v16 = v4 + 32 * v5;
  v87 = 1;
  sub_1403D3050(&v71, v4, v16);
  if ( (unsigned __int64)v72 >= 2 )
  {
    if ( (unsigned __int64)v72 >= 0x15 )
      sub_1415584D0(*((_QWORD *)&v71 + 1), v72, &v83);
    else
      sub_140DFF490(*((_QWORD *)&v71 + 1), v72, 1, &v83);
  }
  sub_1403D7760(v77, v4, v16);
  v68 = v72;
  v67 = v71;
  v69 = *(_OWORD *)v77;
  v70 = *(_QWORD *)&v77[16];
  if ( *(_BYTE *)v75 != 4 )
  {
    v86 = 1;
    sub_141939020(&off_1419E18C0);
  }
  v17 = *((_QWORD *)v75 + 2);
  v18 = *((_QWORD *)v75 + 3);
  v86 = 1;
  sub_1403D7320(&v64, v17, v18);
  if ( v8 )
  {
    v88 = 1;
    v19 = (_QWORD *)sub_1416419F0("contenttext", 7, v8);
    if ( !v19 )
      v19 = off_1421E7108;
    if ( *(_BYTE *)v19 != 4 )
      goto LABEL_71;
    v20 = v19[2];
    v21 = v20 + 32LL * v19[3];
    v88 = 1;
    sub_1403D3050(&v73, v20, v21);
    if ( v74 >= 2 )
    {
      if ( v74 >= 0x15 )
        sub_1415584D0(*((_QWORD *)&v73 + 1), v74, &v83);
      else
        sub_140DFF490(*((_QWORD *)&v73 + 1), v74, 1, &v83);
    }
    sub_1403D7760(&v71, v20, v21);
    v22 = v74;
    *(_QWORD *)&v77[16] = v74;
    *(_OWORD *)v77 = v73;
    *(_OWORD *)&v77[24] = v71;
    v78 = v72;
    v23 = v68;
    if ( v74 != v68 )
    {
      v24 = *(_QWORD *)&v77[8];
      goto LABEL_45;
    }
    v24 = *(_QWORD *)&v77[8];
    if ( v74 )
    {
      v25 = *((_QWORD *)&v67 + 1);
      v26 = 16;
      v27 = v74;
      while ( *(_QWORD *)(v24 + v26) == *(_QWORD *)(v25 + v26)
           && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v24 + v26 - 8), *(_QWORD *)(v25 + v26 - 8)) )
      {
        v26 += 24;
        if ( !--v27 )
          goto LABEL_28;
      }
LABEL_45:
      v29 = 0;
      if ( !v22 )
        goto LABEL_59;
      goto LABEL_54;
    }
LABEL_28:
    v80 = v8;
    v28 = v78;
    if ( v78 == v70 )
    {
      v29 = 1;
      if ( !v78 )
        goto LABEL_53;
      v82 = *((_QWORD *)&v69 + 1);
      v30 = *(_QWORD *)&v77[32];
      v31 = 0;
      while ( (unsigned __int8)sub_1404810C0(v30 + 32 * v31, v82 + 32 * v31) )
      {
        if ( ++v31 == v28 )
          goto LABEL_53;
      }
    }
    if ( v28 == v66 )
    {
      if ( !v28 )
      {
        v29 = 1;
        v8 = v80;
        if ( !v22 )
          goto LABEL_59;
        goto LABEL_54;
      }
      v82 = v65;
      v37 = *(_QWORD *)&v77[32];
      v38 = 0;
      do
      {
        v29 = sub_1404810C0(32 * v38 + v37, v82 + 32 * v38);
        ++v38;
      }
      while ( ((v38 != v28) & (unsigned __int8)v29) != 0 );
    }
    else
    {
      v29 = 0;
    }
LABEL_53:
    v8 = v80;
    if ( !v22 )
      goto LABEL_59;
LABEL_54:
    v39 = (_QWORD *)(v24 + 8);
    do
    {
      v40 = *(v39 - 1);
      if ( v40 )
        sub_140001660(*v39, v40, 1);
      v39 += 3;
      --v22;
    }
    while ( v22 );
LABEL_59:
    if ( *(_QWORD *)v77 )
      sub_140001660(v24, 24LL * *(_QWORD *)v77, 8);
    v41 = *(_QWORD *)&v77[32];
    v80 = v78;
    v82 = 0;
    v79 = *(_QWORD *)&v77[32];
    while ( v80 != v82 )
    {
      ++v82;
      v42 = v41 + 32;
      sub_1403880E0(v41);
      v41 = v42;
    }
    if ( *(_QWORD *)&v77[24] )
      sub_140001660(v79, 32LL * *(_QWORD *)&v77[24], 8);
    if ( v29 )
    {
      v43 = *v75;
      *(_OWORD *)&v77[16] = v75[1];
      *(_OWORD *)v77 = v43;
      v81 = 1;
      v82 = sub_141641AF0("contenttext", 7, v8);
      sub_14002F9D0(v82);
      v44 = *(_OWORD *)v77;
      v45 = (_OWORD *)v82;
      *(_OWORD *)(v82 + 16) = *(_OWORD *)&v77[16];
      *v45 = v44;
      LODWORD(v79) = 0;
      goto LABEL_68;
    }
LABEL_71:
    v48 = v65;
    v80 = v66;
    v82 = 0;
    v79 = v65;
    while ( v80 != v82 )
    {
      ++v82;
      v49 = v48 + 32;
      sub_1403880E0(v48);
      v48 = v49;
    }
    if ( v64 )
      sub_140001660(v79, 32 * v64, 8);
    v50 = *((_QWORD *)&v67 + 1);
    v51 = v68;
    if ( v68 )
    {
      v52 = (_QWORD *)(*((_QWORD *)&v67 + 1) + 8LL);
      do
      {
        v53 = *(v52 - 1);
        if ( v53 )
          sub_140001660(*v52, v53, 1);
        v52 += 3;
        --v51;
      }
      while ( v51 );
    }
    if ( (_QWORD)v67 )
      sub_140001660(v50, 24 * v67, 8);
    v54 = *((_QWORD *)&v69 + 1);
    v80 = v70;
    v82 = 0;
    v79 = *((_QWORD *)&v69 + 1);
    while ( v80 != v82 )
    {
      ++v82;
      v55 = v54 + 32;
      sub_1403880E0(v54);
      v54 = v55;
    }
    if ( (_QWORD)v69 )
      sub_140001660(v79, 32 * v69, 8);
    v2 = "Anthropic server history does not match its visible message";
    a1 = v75;
    goto LABEL_104;
  }
  *(_QWORD *)v77 = 0;
  *(_QWORD *)&v77[8] = 8;
  *(_OWORD *)&v77[16] = 0;
  *(_QWORD *)&v77[32] = 8;
  v78 = 0;
  if ( v68 | v70 )
    goto LABEL_71;
  v88 = 1;
  sub_140197180(v77);
  *(_QWORD *)&v62 = 0;
  v63 = 0;
  nullsub_1(v32);
  v33 = (_DWORD *)sub_140001650(4, 1);
  if ( !v33 )
    sub_141938D2B(1, 4);
  *v33 = 1701605234;
  *(_QWORD *)&v73 = 4;
  *((_QWORD *)&v73 + 1) = v33;
  v74 = 4;
  v85 = 1;
  sub_14040FB10(v77, &off_1419D7CE0);
  if ( v77[0] == 0xFF )
  {
    *(_QWORD *)&v71 = *(_QWORD *)&v77[8];
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v71,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419E1868);
  }
  v72 = *(_OWORD *)&v77[16];
  v71 = *(_OWORD *)v77;
  v85 = 0;
  sub_140E72AA0(v77, &v62, &v73, &v71);
  if ( v77[0] != 0xFF )
    sub_14002F9D0(v77);
  nullsub_1(v34);
  v35 = (_DWORD *)sub_140001650(7, 1);
  if ( !v35 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v35 + 3) = 1953391988;
  *v35 = 1953394531;
  *(_QWORD *)&v73 = 7;
  *((_QWORD *)&v73 + 1) = v35;
  v74 = 7;
  v84 = 1;
  sub_140412420(v77, v75);
  if ( v77[0] == 0xFF )
  {
    *(_QWORD *)&v71 = *(_QWORD *)&v77[8];
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)&v71,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419E1868);
  }
  v72 = *(_OWORD *)&v77[16];
  v71 = *(_OWORD *)v77;
  v84 = 0;
  sub_140E72AA0(v77, &v62, &v73, &v71);
  if ( v77[0] != 0xFF )
    sub_14002F9D0(v77);
  *(_OWORD *)&v77[8] = v62;
  *(_QWORD *)&v77[24] = v63;
  v77[0] = 5;
  v88 = 1;
  v36 = sub_1401F46A0(a2, v77);
  LOBYTE(v36) = 1;
  LODWORD(v79) = v36;
  v23 = 0;
LABEL_68:
  v46 = v65;
  v80 = v66;
  v82 = 0;
  v76 = v65;
  while ( v80 != v82 )
  {
    ++v82;
    v47 = v46 + 32;
    sub_1403880E0(v46);
    v46 = v47;
  }
  if ( v64 )
    sub_140001660(v76, 32 * v64, 8);
  v56 = *((_QWORD *)&v67 + 1);
  if ( v23 )
  {
    v57 = (_QWORD *)(*((_QWORD *)&v67 + 1) + 8LL);
    do
    {
      v58 = *(v57 - 1);
      if ( v58 )
        sub_140001660(*v57, v58, 1);
      v57 += 3;
      --v23;
    }
    while ( v23 );
  }
  if ( (_QWORD)v67 )
    sub_140001660(v56, 24 * v67, 8);
  v59 = *((_QWORD *)&v69 + 1);
  v80 = v70;
  v82 = 0;
  v76 = *((_QWORD *)&v69 + 1);
  while ( v80 != v82 )
  {
    ++v82;
    v60 = v59 + 32;
    sub_1403880E0(v59);
    v59 = v60;
  }
  if ( (_QWORD)v69 )
    sub_140001660(v76, 32 * v69, 8);
  v2 = nullptr;
  a1 = v75;
  if ( (_BYTE)v79 )
    goto LABEL_104;
  return v2;
}
