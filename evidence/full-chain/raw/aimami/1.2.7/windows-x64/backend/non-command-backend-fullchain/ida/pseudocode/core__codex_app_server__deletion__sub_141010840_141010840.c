// win 1.2.7 | module src/core/codex_app_server/deletion.rs | ea 0x141010840 | name sub_141010840
// win 1.2.7 | module src/core/codex_app_server/deletion.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141010840(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // rdi
  char *v12; // rdx
  char *v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  char *v16; // rax
  char *v17; // r15
  char v18; // cl
  char v19; // bl
  __int64 v20; // rax
  __int64 v21; // r12
  bool v22; // cf
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  __int64 v30; // rcx
  char *v31; // rax
  char v32; // cl
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 result; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  _BYTE *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rsi
  bool v44; // zf
  __int64 v45; // r15
  _BYTE *v46; // rax
  const __m128i *v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r14
  const __m128i *v50; // r14
  __m128i *v51; // rax
  __int64 v52; // rdi
  int v53; // r8d
  int v54; // edx
  const __m128i *v55; // rsi
  __int64 v56; // [rsp+20h] [rbp-60h]
  _QWORD v57[2]; // [rsp+30h] [rbp-50h] BYREF
  char v58[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-38h]
  __int64 v60; // [rsp+50h] [rbp-30h]
  unsigned __int64 v61; // [rsp+58h] [rbp-28h]
  char *v62; // [rsp+60h] [rbp-20h]
  __int64 v63; // [rsp+68h] [rbp-18h]
  __int64 v64; // [rsp+70h] [rbp-10h]
  char **v65; // [rsp+78h] [rbp-8h] BYREF
  __int64 v66; // [rsp+80h] [rbp+0h]
  __int64 v67; // [rsp+88h] [rbp+8h]
  __int64 v68; // [rsp+90h] [rbp+10h]
  __int128 *v69; // [rsp+98h] [rbp+18h]
  __int64 (__fastcall *v70)(); // [rsp+A0h] [rbp+20h]
  char *v71; // [rsp+A8h] [rbp+28h]
  __int64 (__fastcall *v72)(_QWORD, _QWORD); // [rsp+B0h] [rbp+30h]
  __int64 v73; // [rsp+B8h] [rbp+38h] BYREF
  char *v74; // [rsp+C0h] [rbp+40h]
  __int64 v75; // [rsp+C8h] [rbp+48h]
  __int128 v76; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v77; // [rsp+E0h] [rbp+60h]
  __int64 v78; // [rsp+E8h] [rbp+68h]
  const char *v79; // [rsp+F0h] [rbp+70h]
  __int64 v80; // [rsp+F8h] [rbp+78h]
  __int64 v81; // [rsp+100h] [rbp+80h]
  const char *v82; // [rsp+108h] [rbp+88h]
  __int64 v83; // [rsp+110h] [rbp+90h]
  __int64 v84; // [rsp+118h] [rbp+98h]
  void *v85; // [rsp+120h] [rbp+A0h]
  char ***v86; // [rsp+128h] [rbp+A8h]
  __int128 v87; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v88; // [rsp+140h] [rbp+C0h]
  char *v89; // [rsp+148h] [rbp+C8h]
  char *v90; // [rsp+150h] [rbp+D0h] BYREF
  char *v91; // [rsp+158h] [rbp+D8h]
  __int128 v92; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v93; // [rsp+170h] [rbp+F0h]
  unsigned __int64 v94; // [rsp+180h] [rbp+100h]
  __int64 v95; // [rsp+188h] [rbp+108h] BYREF
  __int64 v96; // [rsp+190h] [rbp+110h]
  unsigned __int64 v97; // [rsp+198h] [rbp+118h]
  char v98; // [rsp+1A7h] [rbp+127h] BYREF
  char *v99; // [rsp+1A8h] [rbp+128h]
  char *v100; // [rsp+1B0h] [rbp+130h]
  char v101; // [rsp+1BEh] [rbp+13Eh] BYREF
  char v102; // [rsp+1BFh] [rbp+13Fh]
  __int64 v103; // [rsp+1C0h] [rbp+140h]

  v103 = -2;
  v64 = a4;
  v57[0] = a1;
  v57[1] = a2;
  v101 = a3;
  if ( dword_1421E0058 )
  {
    sub_14021D340((__int64)&v73, a6, a7, 0, v56);
    v8 = v75;
    if ( v75 )
    {
LABEL_3:
      nullsub_1(v7);
      v9 = sub_140001650(v8, 1);
      if ( !v9 )
        sub_141938D2B(1, v8);
      v10 = v9;
      goto LABEL_7;
    }
  }
  else
  {
    sub_14021D340((__int64)&v73, a6, a7, qword_1421E0040, qword_1421E0048);
    v8 = v75;
    if ( v75 )
      goto LABEL_3;
  }
  v10 = 1;
LABEL_7:
  v95 = v8;
  v96 = v10;
  v97 = 0;
  v11 = v74;
  v99 = (char *)v8;
  v12 = &v74[v8];
  v94 = 0;
  v13 = nullptr;
  v100 = v74;
  v14 = 0;
LABEL_10:
  while ( v11 != v12 )
  {
    v16 = v11;
    v17 = v13;
    v18 = *v11;
    if ( *v11 >= 0 )
    {
      ++v11;
    }
    else if ( (unsigned __int8)v18 < 0xE0u )
    {
      v11 += 2;
    }
    else
    {
      v11 = &v11[-((unsigned __int8)v18 < 0xF0u) + 4];
    }
    v13 = &v11[v13 - v16];
    v15 = (unsigned __int64)&v17[-v14];
    if ( (unsigned __int64)v17 >= v14 )
    {
      v63 = v10;
      v62 = v12;
      v65 = nullptr;
      v66 = 2;
      v67 = 36;
      v68 = 32;
      v89 = &v100[(_QWORD)v17];
      v19 = 0;
      v20 = 0;
      while ( 1 )
      {
        v21 = *(&v67 + v20);
        v22 = __CFADD__(v17, v21);
        v23 = (unsigned __int64)&v17[v21];
        if ( !v22
          && v23 <= (unsigned __int64)v99
          && (v17 == v99 || (!v17 || *v89 > -65) && ((char *)v23 == v99 || v100[v23] >= -64)) )
        {
          sub_141568FC0(&v76, v89, *(&v67 + v20));
          if ( (_DWORD)v76 == -1 )
            break;
        }
        v20 = 1;
        v44 = (v19 & 1) == 0;
        v19 = 1;
        if ( !v44 )
        {
          v10 = v63;
          v12 = v62;
          goto LABEL_10;
        }
      }
      if ( v99 != (char *)v14 && (v14 && v100[v14] <= -65 || v17 != v99 && *v89 <= -65) )
        sub_141938F40((_DWORD)v100, (_DWORD)v99, v14, (_DWORD)v17, (__int64)&off_141A6F460);
      if ( v15 <= v95 - v94 )
      {
        v24 = v94;
        if ( v17 == (char *)v14 )
          goto LABEL_32;
LABEL_31:
        sub_1418F44E0((__m128i *)(v24 + v96), (const __m128i *)&v100[v14], v15);
        goto LABEL_32;
      }
      sub_14190D590((unsigned int)&v95, v94, (_DWORD)v17 - v14, 1, 1);
      v94 = v97;
      v24 = v97;
      if ( v17 != (char *)v14 )
        goto LABEL_31;
LABEL_32:
      v25 = v15 + v24;
      v97 = v25;
      if ( v95 - v25 <= 7 )
      {
        sub_14190D590((unsigned int)&v95, v25, 8, 1, 1);
        v25 = v97;
      }
      v26 = v96;
      *(_QWORD *)(v96 + v25) = 0x5D4441455248545BLL;
      v94 = v25 + 8;
      v97 = v25 + 8;
      v10 = v26;
      v14 = v23;
      v12 = v62;
    }
  }
  v27 = v94;
  if ( v14 )
  {
    if ( (unsigned __int64)v99 <= v14 )
    {
      if ( v99 != (char *)v14 )
LABEL_41:
        sub_141938F40((_DWORD)v100, (_DWORD)v99, v14, (_DWORD)v99, (__int64)&off_141A6F3B0);
    }
    else if ( v100[v14] < -64 )
    {
      goto LABEL_41;
    }
  }
  v28 = (unsigned __int64)&v99[-v14];
  if ( (unsigned __int64)&v99[-v14] > v95 - v94 )
  {
    sub_14190D590((unsigned int)&v95, v94, v28, 1, 1);
    v10 = v96;
    v27 = v97;
    if ( v99 != (char *)v14 )
LABEL_45:
      sub_1418F44E0((__m128i *)(v10 + v27), (const __m128i *)&v100[v14], v28);
  }
  else if ( v99 != (char *)v14 )
  {
    goto LABEL_45;
  }
  v29 = v28 + v27;
  v97 = v29;
  v90 = (char *)v10;
  v91 = (char *)(v29 + v10);
  *(_QWORD *)&v76 = 0;
  *((_QWORD *)&v76 + 1) = 1;
  v77 = 0;
  if ( v29 )
  {
    v53 = 1000;
    if ( (v29 >> 2) - (((v29 & 3) == 0) - 1LL) < 0x3E8 )
      v53 = (v29 >> 2) - (((v29 & 3) == 0) - 1);
    sub_14190D590((unsigned int)&v76, 0, v53, 1, 1);
  }
  v65 = &v90;
  v66 = 1000;
  sub_140BE6A00(&v65, 999, &v76);
  v92 = v76;
  v93 = v77;
  v31 = v90;
  if ( v90 != v91 )
  {
    ++v90;
    v32 = *v31;
    if ( *v31 < 0 )
    {
      v90 = v31 + 2;
      if ( (unsigned __int8)v32 >= 0xE0u )
      {
        v90 = v31 + 3;
        if ( (unsigned __int8)v32 >= 0xF0u )
          v90 = v31 + 4;
      }
    }
    v33 = v93;
    if ( (unsigned __int64)(v92 - v93) <= 0xD )
    {
      sub_14190D590((unsigned int)&v92, v93, 14, 1, 1);
      v33 = v93;
    }
    v34 = *((_QWORD *)&v92 + 1);
    *(_QWORD *)(*((_QWORD *)&v92 + 1) + v33 + 6) = 0x5D64657461636E75LL;
    v30 = 0x6E7572745B2E2E2ELL;
    *(_QWORD *)(v34 + v33) = 0x6E7572745B2E2E2ELL;
    v93 = v33 + 14;
  }
  result = *(_QWORD *)off_1421E6EC0;
  if ( *(_QWORD *)off_1421E6EC0 < 2u )
    goto LABEL_76;
  if ( v64 != 1 )
  {
    nullsub_1(v30);
    v41 = (_DWORD *)sub_140001650(4, 1);
    if ( !v41 )
      sub_141938D2B(1, 4);
    *v41 = 1701736302;
    *(_QWORD *)&v87 = 4;
    *((_QWORD *)&v87 + 1) = v41;
    v88 = 4;
    v43 = v93;
    v44 = v93 == 0;
    if ( v93 >= 0 )
      goto LABEL_70;
    goto LABEL_62;
  }
  nullsub_1(v30);
  if ( a5 < 0 )
  {
    v36 = 20;
    v39 = 1;
    v46 = (_BYTE *)sub_140001650(20, 1);
    if ( !v46 )
    {
      v102 = 0;
      sub_141938D2B(1, 20);
    }
    v38 = v46;
    *(_QWORD *)&v76 = 20;
    *((_QWORD *)&v76 + 1) = v46;
    *v46 = 45;
    v77 = 1;
    v40 = -a5;
  }
  else
  {
    v36 = 19;
    v37 = sub_140001650(19, 1);
    if ( !v37 )
    {
      v102 = 0;
      sub_141938D2B(1, 19);
    }
    v38 = (_BYTE *)v37;
    *(_QWORD *)&v76 = 19;
    *((_QWORD *)&v76 + 1) = v37;
    v77 = 0;
    v39 = 0;
    v40 = a5;
  }
  v102 = 1;
  v47 = (const __m128i *)sub_1416B2760(v40, &v65, 19);
  v49 = v48;
  if ( v48 > v36 - v39 )
  {
    v102 = 1;
    v54 = v39;
    v55 = v47;
    sub_14190D590((unsigned int)&v76, v54, v49, 1, 1);
    v47 = v55;
    v38 = *((_BYTE **)&v76 + 1);
    v39 = v77;
LABEL_68:
    sub_1418F44E0((__m128i *)&v38[v39], v47, v49);
  }
  else if ( v48 )
  {
    goto LABEL_68;
  }
  v87 = v76;
  v88 = v49 + v39;
  v43 = v93;
  v44 = v93 == 0;
  if ( v93 < 0 )
  {
LABEL_62:
    v45 = 0;
    goto LABEL_63;
  }
LABEL_70:
  if ( v44 )
  {
    v52 = 1;
    goto LABEL_74;
  }
  v50 = *((const __m128i **)&v92 + 1);
  nullsub_1(v42);
  v45 = 1;
  v51 = (__m128i *)sub_140001650(v43, 1);
  if ( !v51 )
LABEL_63:
    sub_141938D2B(v45, v43);
  v52 = (__int64)v51;
  sub_1418F44E0(v51, v50, v43);
LABEL_74:
  v58[0] = 3;
  v59 = v43;
  v60 = v52;
  v61 = v43;
  v65 = (char **)v57;
  v66 = (__int64)sub_140186EE0;
  v67 = (__int64)&v101;
  v68 = (__int64)sub_14104A190;
  v69 = &v87;
  v70 = sub_1400015F0;
  v71 = v58;
  v72 = sub_141642FA0;
  v81 = 2;
  v82 = "aimami::session_deletecodexmate_lib::core::codex_app_server::deletion";
  v83 = 22;
  v85 = &unk_141A6F3C8;
  v86 = &v65;
  *(_QWORD *)&v76 = 0;
  *((_QWORD *)&v76 + 1) = "codexmate_lib::core::codex_app_server::deletion";
  v77 = 47;
  v78 = 0;
  v79 = aSrcCoreCodexAp_1;
  v80 = 37;
  v84 = 0xDA00000001LL;
  sub_1414D53A0(&v98, &v76);
  result = sub_14002F9D0(v58);
  if ( (_QWORD)v87 )
    result = sub_140001660(*((_QWORD *)&v87 + 1), v87, 1);
LABEL_76:
  if ( (_QWORD)v92 )
    result = sub_140001660(*((_QWORD *)&v92 + 1), v92, 1);
  if ( v95 )
    result = sub_140001660(v96, v95, 1);
  if ( v73 )
    return sub_140001660(v74, v73, 1);
  return result;
}
