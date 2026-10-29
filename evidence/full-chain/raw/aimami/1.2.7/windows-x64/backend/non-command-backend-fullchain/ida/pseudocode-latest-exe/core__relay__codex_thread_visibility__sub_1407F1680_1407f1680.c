// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407f1680 | successor of pre-update 0x14024a590 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR"}
void __fastcall sub_1407F1680(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  void *v20; // rdx
  __int64 v21; // r13
  void *v22; // rdx
  _QWORD *v23; // rbx
  LARGE_INTEGER v24; // r15
  LARGE_INTEGER v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r13
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 *v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  void *v52; // rax
  __int64 *v53; // rcx
  __int128 v54; // [rsp+30h] [rbp-50h] BYREF
  __int64 v55; // [rsp+40h] [rbp-40h]
  _QWORD v56[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v57[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v58; // [rsp+68h] [rbp-18h] BYREF
  __int64 v59; // [rsp+70h] [rbp-10h]
  __int64 v60; // [rsp+78h] [rbp-8h]
  __int64 v61; // [rsp+80h] [rbp+0h] BYREF
  __int64 v62; // [rsp+88h] [rbp+8h]
  __int64 v63; // [rsp+90h] [rbp+10h]
  __int64 v64; // [rsp+A0h] [rbp+20h]
  __int64 v65; // [rsp+A8h] [rbp+28h]
  __m256i v66; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v67; // [rsp+D0h] [rbp+50h]
  __int128 v68; // [rsp+E0h] [rbp+60h]
  __int128 v69; // [rsp+F0h] [rbp+70h]
  _QWORD *v70; // [rsp+108h] [rbp+88h] BYREF
  _QWORD v71[3]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v72; // [rsp+128h] [rbp+A8h]
  __int64 v73; // [rsp+130h] [rbp+B0h]
  __int64 v74; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v75; // [rsp+140h] [rbp+C0h] BYREF
  __m256i v76; // [rsp+150h] [rbp+D0h]
  __int128 v77; // [rsp+170h] [rbp+F0h]
  __int128 v78; // [rsp+180h] [rbp+100h]
  __int128 v79; // [rsp+190h] [rbp+110h]
  HANDLE hObject; // [rsp+1A0h] [rbp+120h] BYREF
  HANDLE v81; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 *v82; // [rsp+1B0h] [rbp+130h]
  __int64 v83; // [rsp+1B8h] [rbp+138h]
  __int64 v84; // [rsp+1C0h] [rbp+140h]
  char v85; // [rsp+1CDh] [rbp+14Dh]
  char v86; // [rsp+1CEh] [rbp+14Eh]
  char v87; // [rsp+1CFh] [rbp+14Fh]
  __int64 v88; // [rsp+1D0h] [rbp+150h]

  v88 = -2;
  v10 = sub_1416B19D0(a2, a3);
  if ( v10 )
  {
    v13 = v10;
    v14 = v11;
    v15 = sub_1416B1C00(a2, a3);
    if ( v15 )
    {
      sub_1416E2AB0(&v75, v15, v16);
      v17 = aRollout_1;
      if ( !(_BYTE)v75 )
        v17 = *((const char **)&v75 + 1);
      v18 = 7;
      if ( !(_BYTE)v75 )
        v18 = v76.m256i_i64[0];
    }
    else
    {
      v18 = 7;
      v17 = aRollout_1;
    }
    v57[0] = v17;
    v57[1] = v18;
    LODWORD(v70) = GetCurrentProcessId();
    sub_141597890(&v75);
    *(_OWORD *)v66.m256i_i8 = v75;
    *(_QWORD *)&v75 = v57;
    *((_QWORD *)&v75 + 1) = sub_140191200;
    v76.m256i_i64[0] = (__int64)&v70;
    v76.m256i_i64[1] = (__int64)sub_1416EACD0;
    v76.m256i_i64[2] = (__int64)&v66;
    v76.m256i_i64[3] = (__int64)sub_1402230B0;
    sub_1416DAFA0(&v58, &unk_141A4608E, &v75);
    v84 = v59;
    sub_1416B18A0((unsigned int)&v61, v13, v14, v59, v60);
    if ( v58 )
      sub_140001660(v84, v58, 1);
    LODWORD(v75) = 0;
    *((_QWORD *)&v75 + 1) = 0;
    v76.m256i_i32[0] = 7;
    *(__int64 *)((char *)v76.m256i_i64 + 4) = 0x100000000LL;
    *(__int64 *)((char *)&v76.m256i_i64[1] + 1) = 0;
    if ( sub_1416BFE10(&v75, a2, a3) == 1 )
    {
      *a1 = 2;
      a1[1] = (__int64)v20;
LABEL_42:
      v43 = v61;
      if ( !v61 )
        return;
      v44 = v62;
      goto LABEL_44;
    }
    v81 = v20;
    LODWORD(v75) = 0;
    *((_QWORD *)&v75 + 1) = 0;
    v76.m256i_i32[0] = 7;
    *(__int64 *)((char *)v76.m256i_i64 + 4) = 0;
    *(__int64 *)((char *)&v76.m256i_i64[1] + 1) = 0x100000001LL;
    v21 = v62;
    v85 = 1;
    v84 = v63;
    if ( sub_1416BFE10(&v75, v62, v63) == 1 )
    {
      *a1 = 2;
      a1[1] = (__int64)v22;
LABEL_41:
      CloseHandle(v81);
      goto LABEL_42;
    }
    v83 = v21;
    v65 = v14;
    v64 = v13;
    v73 = a2;
    v72 = a3;
    v82 = a1;
    hObject = v22;
    if ( a5 )
    {
      v23 = &a4[8 * a5];
      v24.QuadPart = 0;
      while ( 1 )
      {
        v25 = v24;
        v26 = a4[6];
        v27 = 0;
        if ( v26 >= v25.QuadPart )
          v27 = v26 - v25.QuadPart;
        v87 = 1;
        v86 = 1;
        sub_140781700(&v75, (__int64)&v81, (__int64)&hObject, v27);
        v28 = v75;
        if ( (_QWORD)v75 != -1 )
          goto LABEL_30;
        v24.QuadPart = a4[7] + v26;
        v87 = 1;
        v86 = 1;
        if ( sub_1416D07B0(&v81, 0, v24) == 1 )
        {
          v32 = v29;
          goto LABEL_35;
        }
        v30 = a4[4];
        v31 = a4[5];
        v87 = 1;
        v86 = 1;
        v32 = sub_140843B30(&hObject, v30, v31);
        if ( v32 )
          goto LABEL_35;
        a4 += 8;
        if ( a4 == v23 )
          goto LABEL_27;
      }
    }
    v24.QuadPart = 0;
LABEL_27:
    v33 = *(_QWORD *)(a6 + 56);
    v34 = 0;
    if ( v33 >= v24.QuadPart )
      v34 = v33 - v24.QuadPart;
    v87 = 1;
    v86 = 1;
    sub_140781700(&v75, (__int64)&v81, (__int64)&hObject, v34);
    v28 = v75;
    if ( (_QWORD)v75 != -1 )
    {
LABEL_30:
      v32 = *((_QWORD *)&v75 + 1);
      v66 = v76;
      v67 = v77;
      v68 = v78;
      v69 = v79;
      goto LABEL_36;
    }
    v35 = *(unsigned int *)(a6 + 76);
    v87 = 1;
    v86 = 1;
    v32 = sub_1416C43E0(v83, v84, v35);
    if ( v32 )
    {
LABEL_35:
      v28 = 2;
LABEL_36:
      CloseHandle(hObject);
      *(_QWORD *)&v75 = v28;
      *((_QWORD *)&v75 + 1) = v32;
      v76 = v66;
      v77 = v67;
      v78 = v68;
      v79 = v69;
      v38 = sub_1416C4110(v83, v84);
      if ( v38 && (unsigned int)(v38 & 3) - 2 >= 2 && (v38 & 3) != 0 )
      {
        v71[0] = v38 - 1;
        LOBYTE(v70) = 3;
        sub_1416EBAD0(v71);
      }
      v39 = v82;
      *v82 = v28;
      v39[1] = v32;
      v40 = *(_OWORD *)&v66.m256i_u64[2];
      v41 = v67;
      v42 = v68;
      *((_OWORD *)v39 + 1) = *(_OWORD *)v66.m256i_i8;
      *((_OWORD *)v39 + 2) = v40;
      *((_OWORD *)v39 + 3) = v41;
      *((_OWORD *)v39 + 4) = v42;
      *((_OWORD *)v39 + 5) = v69;
      goto LABEL_41;
    }
    CloseHandle(hObject);
    v87 = 1;
    v86 = 0;
    sub_1416C49D0(&v75, v73, v72);
    if ( (_DWORD)v75 == 2 )
    {
      v36 = *((_QWORD *)&v75 + 1);
      v37 = v82;
      *v82 = 2;
      v37[1] = v36;
      goto LABEL_41;
    }
    if ( v77 != __PAIR128__(v33, *(_QWORD *)(a6 + 48)) )
    {
      v87 = 1;
      v86 = 0;
      v49 = sub_1416C4110(v83, v84);
      if ( v49 )
      {
        v51 = v49 & 3;
        v50 = (unsigned int)(v51 - 2);
        if ( (unsigned int)v50 >= 2 && (v49 & 3) != 0 )
        {
          *((_QWORD *)&v75 + 1) = v49 - 1;
          LOBYTE(v75) = 3;
          v87 = 1;
          v86 = 0;
          sub_1416EBAD0((char *)&v75 + 8);
        }
      }
      nullsub_1(v51, v50);
      v52 = (void *)sub_140001650(68, 1);
      if ( !v52 )
      {
        v87 = 1;
        v86 = 0;
        sub_14196B2DB(1, 68);
      }
      qmemcpy(v52, "rollout changed while router migration was streaming; retry required", 68);
      v53 = v82;
      *v82 = 10;
      v53[1] = 68;
      v53[2] = (__int64)v52;
      v53[3] = 68;
      goto LABEL_41;
    }
    CloseHandle(v81);
    v87 = 0;
    v86 = 0;
    v45 = sub_1407D7960(v83, v84, v73, v72);
    if ( v45 )
    {
      v74 = v45;
      v46 = v82;
      v47 = v83;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v56[0] = v73;
        v56[1] = v72;
        v70 = v56;
        v71[0] = sub_1416CE600;
        v71[1] = &v74;
        v71[2] = sub_1416EA080;
        *(_QWORD *)&v75 = aCodexmateLibCo_11;
        *((_QWORD *)&v75 + 1) = 51;
        v76.m256i_i64[0] = (__int64)aCodexmateLibCo_11;
        v76.m256i_i64[1] = 51;
        v76.m256i_i64[2] = (__int64)&off_141A4B9B8;
        sub_140AF72B0(&unk_141A4B955, &v70, 2, &v75);
      }
      v48 = sub_1416C4110(v47, v84);
      sub_140026720(v48);
      *(_QWORD *)&v75 = &v74;
      *((_QWORD *)&v75 + 1) = sub_1416EA080;
      sub_1416DAFA0(&v54, &unk_141A4B9D0, &v75);
      v46[3] = v55;
      *(_OWORD *)(v46 + 1) = v54;
      *v46 = 10;
      v87 = 0;
      v86 = 0;
      sub_140036080(&v74);
      goto LABEL_42;
    }
    v87 = 0;
    v86 = 0;
    sub_1407D8110(v64, v65);
    *v82 = -1;
    v43 = v61;
    if ( v61 )
    {
      v44 = v83;
LABEL_44:
      sub_140001660(v44, v43, 1);
    }
  }
  else
  {
    nullsub_1(v12, v11);
    v19 = (void *)sub_140001650(26, 1);
    if ( !v19 )
      sub_14196B2DB(1, 26);
    qmemcpy(v19, "rollout path has no parent", 26);
    *a1 = 9;
    a1[1] = 26;
    a1[2] = (__int64)v19;
    a1[3] = 26;
  }
}
