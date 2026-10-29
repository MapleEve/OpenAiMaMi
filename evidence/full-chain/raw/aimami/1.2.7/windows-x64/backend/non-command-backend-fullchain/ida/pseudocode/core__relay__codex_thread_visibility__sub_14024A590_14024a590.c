// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14024a590 | name sub_14024A590
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
int __fastcall sub_14024A590(__int64 *a1, HANDLE *a2, unsigned __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  void *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r12
  void *v23; // rdx
  _QWORD *v24; // rsi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r12
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  bool v37; // cf
  unsigned __int64 v38; // rax
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 *v48; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 *v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  void *v61; // rax
  __int64 *v62; // rcx
  __int128 v64; // [rsp+30h] [rbp-50h] BYREF
  __int64 v65; // [rsp+40h] [rbp-40h]
  _QWORD v66[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v67; // [rsp+58h] [rbp-28h] BYREF
  __int64 v68; // [rsp+60h] [rbp-20h]
  __int64 v69; // [rsp+68h] [rbp-18h]
  __int64 v70; // [rsp+70h] [rbp-10h] BYREF
  __int64 v71; // [rsp+78h] [rbp-8h]
  __int64 v72; // [rsp+80h] [rbp+0h]
  __int64 v73; // [rsp+90h] [rbp+10h]
  __int64 v74; // [rsp+98h] [rbp+18h]
  __m256i v75; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v76; // [rsp+C0h] [rbp+40h]
  __int128 v77; // [rsp+D0h] [rbp+50h]
  __int128 v78; // [rsp+E0h] [rbp+60h]
  HANDLE *v79; // [rsp+F8h] [rbp+78h] BYREF
  unsigned __int64 v80; // [rsp+100h] [rbp+80h]
  unsigned __int64 v81; // [rsp+108h] [rbp+88h]
  unsigned __int64 v82; // [rsp+110h] [rbp+90h] BYREF
  HANDLE **v83; // [rsp+118h] [rbp+98h] BYREF
  __int64 (__fastcall *v84)(); // [rsp+120h] [rbp+A0h] BYREF
  __int64 *v85; // [rsp+128h] [rbp+A8h]
  __int64 (__fastcall *v86)(); // [rsp+130h] [rbp+B0h]
  __int128 v87; // [rsp+138h] [rbp+B8h] BYREF
  __m256i v88; // [rsp+148h] [rbp+C8h]
  __int128 v89; // [rsp+168h] [rbp+E8h]
  __int128 v90; // [rsp+178h] [rbp+F8h]
  __int128 v91; // [rsp+188h] [rbp+108h]
  __int64 *v92; // [rsp+198h] [rbp+118h]
  HANDLE hObject; // [rsp+1A0h] [rbp+120h] BYREF
  HANDLE v94; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v95; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v96; // [rsp+1B8h] [rbp+138h]
  __int64 v97; // [rsp+1C0h] [rbp+140h]
  char v98; // [rsp+1CDh] [rbp+14Dh]
  char v99; // [rsp+1CEh] [rbp+14Eh]
  char v100; // [rsp+1CFh] [rbp+14Fh]
  __int64 v101; // [rsp+1D0h] [rbp+150h]

  v101 = -2;
  v10 = sub_141682A00(a2, a3);
  if ( !v10 )
  {
    nullsub_1(v12);
    v19 = (void *)sub_140001650(26, 1);
    if ( !v19 )
      sub_141938D2B(1, 26);
    qmemcpy(v19, "rollout path has no parent", 26);
    *a1 = 9;
    a1[1] = 26;
    a1[2] = (__int64)v19;
    a1[3] = 26;
    return (int)v19;
  }
  v13 = v10;
  v14 = v11;
  v15 = sub_141682C30(a2, a3);
  if ( v15 )
  {
    sub_1416B3AE0(&v87, v15, v16);
    v17 = aRollout_1;
    if ( !(_BYTE)v87 )
      v17 = *((const char **)&v87 + 1);
    v18 = 7;
    if ( !(_BYTE)v87 )
      v18 = v88.m256i_i64[0];
  }
  else
  {
    v18 = 7;
    v17 = aRollout_1;
  }
  v66[0] = v17;
  v66[1] = v18;
  LODWORD(v83) = GetCurrentProcessId();
  sub_141568C20(&v87);
  *(_OWORD *)v75.m256i_i8 = v87;
  *(_QWORD *)&v87 = v66;
  *((_QWORD *)&v87 + 1) = sub_140186EE0;
  v88.m256i_i64[0] = (__int64)&v83;
  v88.m256i_i64[1] = (__int64)sub_1416BBD00;
  v88.m256i_i64[2] = (__int64)&v75;
  v88.m256i_i64[3] = (__int64)sub_14028A180;
  sub_1416ABFD0(&v67, &unk_1419D537B, &v87);
  v97 = v68;
  sub_1416828D0((unsigned int)&v70, v13, v14, v68, v69);
  if ( v67 )
    sub_140001660(v97, v67, 1);
  LODWORD(v87) = 0;
  *((_QWORD *)&v87 + 1) = 0;
  v88.m256i_i32[0] = 7;
  *(__int64 *)((char *)v88.m256i_i64 + 4) = 0x100000000LL;
  *(__int64 *)((char *)&v88.m256i_i64[1] + 1) = 0;
  v19 = (void *)sub_141690E40(&v87);
  if ( v19 == (void *)1 )
  {
    *a1 = 2;
    a1[1] = (__int64)v20;
    goto LABEL_48;
  }
  v73 = v14;
  v94 = v20;
  LODWORD(v87) = 0;
  *((_QWORD *)&v87 + 1) = 0;
  v88.m256i_i32[0] = 7;
  *(__int64 *)((char *)v88.m256i_i64 + 4) = 0;
  *(__int64 *)((char *)&v88.m256i_i64[1] + 1) = 0x100000001LL;
  v21 = v71;
  v22 = v72;
  v98 = 1;
  if ( sub_141690E40(&v87) == 1 )
  {
    *a1 = 2;
    a1[1] = (__int64)v23;
  }
  else
  {
    v74 = v13;
    v96 = v22;
    v97 = v21;
    v92 = a1;
    hObject = v23;
    if ( a5 )
    {
      v24 = &a4[8 * a5];
      v25 = 0;
      while ( 1 )
      {
        v26 = v25;
        v27 = a4[6];
        v28 = 0;
        if ( v27 >= v26 )
          v28 = v27 - v26;
        v82 = v28;
        if ( v27 > v26 )
        {
          v79 = &v94;
          v80 = v28;
          v81 = v28;
          v100 = 1;
          v99 = 1;
          v29 = sub_140BBDD60(&v79, &hObject);
          v31 = v30;
          if ( (v29 & 1) != 0 )
          {
            v41 = 2;
            goto LABEL_41;
          }
          v95 = v30;
          if ( v28 != v30 )
            goto LABEL_40;
        }
        v25 = a4[7] + v27;
        v100 = 1;
        v99 = 1;
        if ( sub_1416A17E0(&v94, 0) == 1 )
        {
          v31 = v32;
          goto LABEL_38;
        }
        v33 = a4[4];
        v34 = a4[5];
        v100 = 1;
        v99 = 1;
        v31 = sub_140C9FF80(&hObject, v33, v34);
        if ( v31 )
          goto LABEL_38;
        a4 += 8;
        if ( a4 == v24 )
          goto LABEL_29;
      }
    }
    v25 = 0;
LABEL_29:
    v35 = *(_QWORD *)(a6 + 56);
    v36 = 0;
    v37 = v35 < v25;
    v38 = v35 - v25;
    if ( !v37 )
      v36 = v38;
    v82 = v36;
    if ( v37 || v38 == 0 )
      goto LABEL_34;
    v79 = &v94;
    v80 = v36;
    v81 = v36;
    v100 = 1;
    v99 = 1;
    v39 = sub_140BBDD60(&v79, &hObject);
    v31 = v40;
    v41 = 2;
    if ( (v39 & 1) != 0 )
      goto LABEL_41;
    v95 = v40;
    if ( v36 == v40 )
    {
LABEL_34:
      v42 = *(unsigned int *)(a6 + 76);
      v100 = 1;
      v99 = 1;
      v31 = sub_141695410(v97, v96, v42);
      if ( !v31 )
      {
        CloseHandle(hObject);
        v100 = 1;
        v99 = 0;
        sub_141695A00(&v87, a2, a3);
        if ( (_DWORD)v87 == 2 )
        {
          v43 = *((_QWORD *)&v87 + 1);
          v44 = v92;
          *v92 = 2;
          v44[1] = v43;
        }
        else
        {
          if ( v89 == *(_OWORD *)(a6 + 48) )
          {
            CloseHandle(v94);
            v100 = 0;
            v99 = 0;
            v54 = sub_14022FD20(v97, v96, a2, a3);
            if ( !v54 )
            {
              v100 = 0;
              v99 = 0;
              sub_140230260(v74, v73);
              LODWORD(v19) = (_DWORD)v92;
              *v92 = -1;
              v52 = v70;
              if ( !v70 )
                return (int)v19;
              v53 = v97;
              goto LABEL_50;
            }
            v95 = v54;
            v55 = v92;
            v56 = v97;
            v57 = v96;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v79 = a2;
              v80 = a3;
              v83 = &v79;
              v84 = sub_14169F630;
              v85 = &v95;
              v86 = (__int64 (__fastcall *)())sub_1416BB0B0;
              *(_QWORD *)&v87 = aCodexmateLibCo_0;
              *((_QWORD *)&v87 + 1) = 51;
              v88.m256i_i64[0] = (__int64)aCodexmateLibCo_0;
              v88.m256i_i64[1] = 51;
              v88.m256i_i64[2] = (__int64)&off_1419DF628;
              sub_140BAD520(&unk_1419DF5C4, &v83, 2, &v87);
            }
            v58 = sub_141695140(v56, v57);
            sub_1400213E0(v58);
            *(_QWORD *)&v87 = &v95;
            *((_QWORD *)&v87 + 1) = sub_1416BB0B0;
            sub_1416ABFD0(&v64, &unk_1419DF640, &v87);
            v55[3] = v65;
            *(_OWORD *)(v55 + 1) = v64;
            *v55 = 10;
            v100 = 0;
            v99 = 0;
            LODWORD(v19) = sub_140032B80(&v95);
            goto LABEL_48;
          }
          v100 = 1;
          v99 = 0;
          v59 = sub_141695140(v97, v96);
          if ( v59 )
          {
            v60 = v59 & 3;
            if ( (unsigned int)(v60 - 2) >= 2 && (v59 & 3) != 0 )
            {
              *((_QWORD *)&v87 + 1) = v59 - 1;
              LOBYTE(v87) = 3;
              v100 = 1;
              v99 = 0;
              sub_1416BCB00((char *)&v87 + 8);
            }
          }
          nullsub_1(v60);
          v61 = (void *)sub_140001650(68, 1);
          if ( !v61 )
          {
            v100 = 1;
            v99 = 0;
            sub_141938D2B(1, 68);
          }
          qmemcpy(v61, "rollout changed while router migration was streaming; retry required", 68);
          v62 = v92;
          *v92 = 10;
          v62[1] = 68;
          v62[2] = (__int64)v61;
          v62[3] = 68;
        }
        goto LABEL_47;
      }
LABEL_38:
      v41 = 2;
    }
    else
    {
LABEL_40:
      v83 = (HANDLE **)&v82;
      v84 = sub_1416BCB10;
      v85 = &v95;
      v86 = sub_1416BCB10;
      v100 = 1;
      v99 = 1;
      sub_1416ABFD0((char *)&v87 + 8, &unk_1419D58AD, &v83);
      v41 = 10;
      v31 = *((_QWORD *)&v87 + 1);
LABEL_41:
      v75 = v88;
      v76 = v89;
      v77 = v90;
      v78 = v91;
    }
    v45 = v97;
    v46 = v96;
    CloseHandle(hObject);
    *(_QWORD *)&v87 = v41;
    *((_QWORD *)&v87 + 1) = v31;
    v88 = v75;
    v89 = v76;
    v90 = v77;
    v91 = v78;
    v47 = sub_141695140(v45, v46);
    if ( v47 && (unsigned int)(v47 & 3) - 2 >= 2 && (v47 & 3) != 0 )
    {
      v84 = (__int64 (__fastcall *)())(v47 - 1);
      LOBYTE(v83) = 3;
      sub_1416BCB00(&v84);
    }
    v48 = v92;
    *v92 = v41;
    v48[1] = v31;
    v49 = *(_OWORD *)&v75.m256i_u64[2];
    v50 = v76;
    v51 = v77;
    *((_OWORD *)v48 + 1) = *(_OWORD *)v75.m256i_i8;
    *((_OWORD *)v48 + 2) = v49;
    *((_OWORD *)v48 + 3) = v50;
    *((_OWORD *)v48 + 4) = v51;
    *((_OWORD *)v48 + 5) = v78;
  }
LABEL_47:
  LODWORD(v19) = CloseHandle(v94);
LABEL_48:
  v52 = v70;
  if ( v70 )
  {
    v53 = v71;
LABEL_50:
    LODWORD(v19) = sub_140001660(v53, v52, 1);
  }
  return (int)v19;
}
