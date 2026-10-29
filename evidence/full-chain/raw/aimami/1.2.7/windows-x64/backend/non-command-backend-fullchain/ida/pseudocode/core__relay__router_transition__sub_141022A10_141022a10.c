// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x141022a10 | name sub_141022A10
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141022A10(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const __m128i *a8,
        __int64 a9,
        unsigned __int8 a10)
{
  unsigned int v10; // edi
  int v11; // r13d
  __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 result; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rcx
  unsigned __int64 v22; // r13
  __int64 v23; // rdi
  bool v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 v28; // rdi
  __m128i *v29; // rax
  signed __int64 v30; // rbx
  const __m128i *v31; // r14
  __int64 v32; // rdi
  __m128i *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __m128i *v37; // rax
  __m128i *v38; // rbx
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int128 v43; // kr00_16
  __int64 v44; // r14
  unsigned __int64 v45; // r14
  __int64 v46; // rcx
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int64 v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  const char *v54; // rdi
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm2
  _QWORD *v58; // rax
  __int64 v59; // [rsp+58h] [rbp-28h] BYREF
  __int128 v60; // [rsp+60h] [rbp-20h]
  __int128 v61; // [rsp+70h] [rbp-10h]
  __int128 v62; // [rsp+80h] [rbp+0h]
  __int128 v63; // [rsp+90h] [rbp+10h]
  __int64 v64; // [rsp+A0h] [rbp+20h]
  __int64 v65; // [rsp+A8h] [rbp+28h]
  __int64 v66; // [rsp+B0h] [rbp+30h]
  const char *v67; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v68; // [rsp+C0h] [rbp+40h]
  _BYTE v69[80]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v70; // [rsp+120h] [rbp+A0h]
  __int128 v71; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v72; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v73; // [rsp+150h] [rbp+D0h]
  __int128 v74; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v75[2]; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v76; // [rsp+180h] [rbp+100h] BYREF
  __int64 v77; // [rsp+188h] [rbp+108h]
  const __m128i *v78; // [rsp+190h] [rbp+110h]
  __int64 (__fastcall *v79)(); // [rsp+198h] [rbp+118h]
  __int64 v80; // [rsp+1A0h] [rbp+120h]
  const __m128i *v81; // [rsp+1A8h] [rbp+128h]
  __int64 v82; // [rsp+1B0h] [rbp+130h]
  __int64 v83; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 (__fastcall *v84)(); // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v85; // [rsp+1C8h] [rbp+148h]
  __int64 (__fastcall *v86)(); // [rsp+1D8h] [rbp+158h]
  __int16 v87; // [rsp+1E0h] [rbp+160h] BYREF
  _BYTE *v88; // [rsp+1E8h] [rbp+168h]
  __int64 v89; // [rsp+1F0h] [rbp+170h]
  __int64 v90; // [rsp+1F8h] [rbp+178h]
  __int64 v91; // [rsp+200h] [rbp+180h]
  unsigned __int8 v92; // [rsp+20Eh] [rbp+18Eh]
  bool v93; // [rsp+20Fh] [rbp+18Fh]
  __int64 v94; // [rsp+210h] [rbp+190h]

  v94 = -2;
  v78 = a4;
  v92 = a3;
  v91 = a2;
  v89 = a1;
  v80 = a9;
  v81 = a8;
  v66 = a7;
  v65 = a6;
  sub_141406CE0(v69);
  v10 = *(_DWORD *)v69;
  v11 = (*(int *)v69 >> 13) - 1;
  v12 = 0;
  v77 = a5;
  if ( *(int *)v69 >> 13 <= 0 )
  {
    v13 = (1 - (*(int *)v69 >> 13)) / 0x190u + 1;
    v11 += 400 * v13;
    v12 = -146097 * v13;
  }
  v14 = *(unsigned int *)&v69[4];
  v15 = *(unsigned int *)&v69[8];
  sub_1410257E0(v69);
  result = *(_QWORD *)v69;
  v71 = *(_OWORD *)&v69[8];
  v72 = *(_OWORD *)&v69[24];
  v73 = *(_OWORD *)&v69[40];
  v74 = *(_OWORD *)&v69[56];
  v75[0] = *(_QWORD *)&v69[72];
  if ( *(_QWORD *)v69 != -1 )
  {
    v17 = v89;
    *(_OWORD *)(v89 + 80) = v70;
    *(_QWORD *)(v17 + 72) = v75[0];
    v18 = v71;
    v19 = v72;
    v20 = v73;
    *(_OWORD *)(v17 + 56) = v74;
    *(_OWORD *)(v17 + 40) = v20;
    *(_OWORD *)(v17 + 24) = v19;
    *(_OWORD *)(v17 + 8) = v18;
    *(_QWORD *)v17 = result;
    return result;
  }
  v21 = (unsigned int)((v11 / 100) >> 2);
  v22 = 1000 * (v14 + 86400LL * (int)(v21 + ((1461 * v11) >> 2) + v12 + ((v10 >> 4) & 0x1FF) - v11 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v15) >> 50);
  v60 = v71;
  v61 = v72;
  v62 = v73;
  v63 = v74;
  v64 = v75[0];
  v23 = v71;
  v24 = (_QWORD)v71 == -1;
  if ( v24 | a10 )
  {
    v25 = v22;
    if ( (_QWORD)v71 == -1 )
      goto LABEL_20;
    v26 = *((_QWORD *)&v60 + 1);
  }
  else
  {
    v26 = *((_QWORD *)&v60 + 1);
    if ( (_QWORD)v61 == 10 )
    {
      v21 = **((_QWORD **)&v60 + 1) ^ 0x697474696D6D6F63LL
          | *(unsigned __int16 *)(*((_QWORD *)&v60 + 1) + 8LL) ^ 0x676ELL;
      if ( !v21 )
      {
        v34 = *(_QWORD *)(v91 + 776);
        v35 = *(_QWORD *)(v91 + 784);
        v93 = (_QWORD)v71 == -1;
        sub_1410237A0(v34, v35, v92, (_DWORD)v78, v77, v65, v66, (__int64)v81, v80);
        nullsub_1(v36);
        v37 = (__m128i *)sub_140001650(170, 1);
        if ( !v37 )
        {
          v93 = v24;
          sub_141938D2B(1, 170);
        }
        v38 = v37;
        sub_1418F44E0(v37, (const __m128i *)aRouterCommitRe, 0xAAu);
        result = v89;
        *(_QWORD *)v89 = 10;
        *(_QWORD *)(result + 8) = 170;
        *(_QWORD *)(result + 16) = v38;
        *(_QWORD *)(result + 24) = 170;
        if ( v23 )
          result = sub_140001660(v26, v23, 1);
        if ( *((_QWORD *)&v61 + 1) != -1 && *((_QWORD *)&v61 + 1) )
          return sub_140001660(v62, *((_QWORD *)&v61 + 1), 1);
        return result;
      }
    }
  }
  v25 = v63;
  if ( (_BYTE)v64 == v92 )
  {
    if ( (_QWORD)v71 )
      sub_140001660(v26, v71, 1);
    if ( (unsigned __int64)(*((_QWORD *)&v61 + 1) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_20;
LABEL_19:
    sub_140001660(v62, *((_QWORD *)&v61 + 1), 1);
    goto LABEL_20;
  }
  if ( (_QWORD)v71 )
    sub_140001660(v26, v71, 1);
  v25 = v22;
  if ( (unsigned __int64)(*((_QWORD *)&v61 + 1) - 1LL) < 0xFFFFFFFFFFFFFFFEuLL )
    goto LABEL_19;
LABEL_20:
  v27 = v77;
  if ( v77 < 0 )
  {
    v28 = 0;
    goto LABEL_22;
  }
  if ( v77 )
  {
    nullsub_1(v21);
    v28 = 1;
    v29 = (__m128i *)sub_140001650(v27, 1);
    v30 = v80;
    v31 = v81;
    if ( !v29 )
    {
LABEL_22:
      v93 = 1;
      sub_141938D2B(v28, v27);
    }
    v82 = (__int64)v29;
    sub_1418F44E0(v29, v78, v27);
    if ( v31 )
      goto LABEL_26;
  }
  else
  {
    v82 = 1;
    v30 = v80;
    v31 = v81;
    if ( v81 )
    {
LABEL_26:
      if ( v30 < 0 )
      {
        v32 = 0;
        goto LABEL_28;
      }
      if ( v30 )
      {
        nullsub_1(v21);
        v32 = 1;
        v33 = (__m128i *)sub_140001650(v30, 1);
        if ( !v33 )
LABEL_28:
          sub_141938D2B(v32, v30);
        v12 = (__int64)v33;
        sub_1418F44E0(v33, v31, v30);
      }
      else
      {
        v12 = 1;
        v30 = 0;
      }
      goto LABEL_41;
    }
  }
  v30 = -1;
LABEL_41:
  BYTE1(v75[0]) = 1;
  LOBYTE(v75[0]) = v92;
  *(_QWORD *)&v71 = v27;
  *((_QWORD *)&v71 + 1) = v82;
  *(_QWORD *)&v72 = v27;
  *(_QWORD *)&v74 = v25;
  *((_QWORD *)&v74 + 1) = v22;
  *((_QWORD *)&v72 + 1) = v30;
  *(_QWORD *)&v73 = v12;
  *((_QWORD *)&v73 + 1) = v30;
  nullsub_1(v21);
  v39 = (__int64 (__fastcall *)())sub_140001650(128, 1);
  if ( !v39 )
    sub_141938D2B(1, 128);
  v83 = 128;
  v84 = v39;
  *(_QWORD *)v69 = &v83;
  *(_QWORD *)&v69[8] = asc_141A68A20;
  *(_QWORD *)&v69[16] = 2;
  *(_QWORD *)&v69[24] = 1;
  v69[32] = 0;
  *(_BYTE *)v39 = 123;
  v85 = 1;
  v87 = 256;
  v88 = v69;
  v40 = sub_140BF9A70(&v87, aSchemaversion_3, 13, (char *)v75 + 1);
  v41 = v30;
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v87 )
    goto LABEL_44;
  v40 = sub_140BF7FD0(&v87, aTarget_2, 6, v75);
  if ( v40 )
  {
LABEL_47:
    if ( v83 )
      sub_140001660(v84, v83, 1);
    goto LABEL_49;
  }
  if ( (_BYTE)v87 )
    goto LABEL_44;
  v40 = sub_140BF62F0(&v87, aPhase_2, 5, &v71);
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v87 )
    goto LABEL_44;
  v40 = sub_140BFA750(&v87, aStartedatms_0, 11, &v74);
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v87 )
    goto LABEL_44;
  v40 = sub_140BFA750(&v87, aUpdatedatms_0, 11, (char *)&v74 + 8);
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v87 )
  {
LABEL_44:
    v42 = sub_141934E70();
LABEL_45:
    v40 = v42;
    goto LABEL_47;
  }
  v42 = sub_140BF4100(&v87, aReason_1, 6, (char *)&v72 + 8);
  if ( v42 )
    goto LABEL_45;
  sub_140288D60(&v87);
  v86 = v84;
  v90 = v83;
  if ( v83 == -1 )
  {
    v40 = (__int64)v86;
LABEL_49:
    v67 = (const char *)v40;
    v83 = (__int64)&v67;
    v84 = (__int64 (__fastcall *)())sub_14163CE40;
    sub_1416ABFD0(v69, &unk_141A6D080, &v83);
    v43 = *(_OWORD *)v69;
    v44 = *(_QWORD *)&v69[16];
    sub_14002F910(&v67);
    result = v89;
    *(_QWORD *)v89 = 10;
    *(_OWORD *)(result + 8) = v43;
    *(_QWORD *)(result + 24) = v44;
LABEL_50:
    if ( v27 )
      result = sub_140001660(v82, v27, 1);
    if ( v41 > 0 )
      return sub_140001660(v12, v41, 1);
    return result;
  }
  v45 = v85;
  if ( v85 > 0x100000 )
  {
    v67 = aNewPhaseRecord;
    *(_QWORD *)&v68 = 39;
    v83 = (__int64)&v67;
    v84 = sub_140186EE0;
    sub_1416ABFD0(&v69[8], &unk_141A6901B, &v83);
    *(_QWORD *)v69 = 9;
    v46 = v89;
    *(_OWORD *)(v89 + 80) = v70;
    v47 = *(_OWORD *)&v69[16];
    v48 = *(_OWORD *)&v69[32];
    v49 = *(_OWORD *)&v69[48];
    *(_OWORD *)(v46 + 64) = *(_OWORD *)&v69[64];
    *(_OWORD *)(v46 + 48) = v49;
    *(_OWORD *)(v46 + 32) = v48;
    *(_OWORD *)(v46 + 16) = v47;
    *(_QWORD *)v46 = *(_QWORD *)v69;
    result = *(_QWORD *)&v69[8];
    *(_QWORD *)(v46 + 8) = *(_QWORD *)&v69[8];
LABEL_72:
    if ( v90 )
      result = sub_140001660(v86, v90, 1);
    goto LABEL_50;
  }
  v50 = *(_QWORD *)(v91 + 776);
  v51 = *(_QWORD *)(v91 + 784);
  sub_1416828D0((unsigned int)&v83, v50, v51, (unsigned int)&unk_141A6FE23, 30);
  v79 = v84;
  v52 = sub_140222E10(v84, v85, v86, v45);
  v91 = v53;
  if ( v52 == 1 )
  {
    v76 = v91;
    *(_QWORD *)v69 = &v76;
    *(_QWORD *)&v69[8] = sub_1416BB0B0;
    sub_1416ABFD0(&v67, &unk_141A6D0AF, v69);
    v54 = v67;
    *(_OWORD *)v69 = v68;
    if ( (unsigned int)(v76 & 3) - 2 >= 2 && (v76 & 3) != 0 )
    {
      v59 = v76 - 1;
      sub_1416BCB00(&v59);
    }
    result = v89;
    *(_OWORD *)(v89 + 80) = *(_OWORD *)&v69[64];
    v55 = *(_OWORD *)v69;
    v56 = *(_OWORD *)&v69[16];
    v57 = *(_OWORD *)&v69[32];
    *(_OWORD *)(result + 64) = *(_OWORD *)&v69[48];
    *(_OWORD *)(result + 48) = v57;
    *(_OWORD *)(result + 32) = v56;
    *(_OWORD *)(result + 16) = v55;
    *(_QWORD *)result = 10;
    *(_QWORD *)(result + 8) = v54;
    if ( v83 )
      result = sub_140001660(v79, v83, 1);
    goto LABEL_72;
  }
  if ( v83 )
    sub_140001660(v79, v83, 1);
  sub_1410237A0(v50, v51, v92, (_DWORD)v78, v27, v65, v66, (__int64)v81, v80);
  v58 = (_QWORD *)v89;
  *(_QWORD *)(v89 + 8) = v91;
  *v58 = -1;
  if ( v90 )
    sub_140001660(v86, v90, 1);
  return sub_140034940(&v71);
}
