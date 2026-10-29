// win 1.2.7 latest-exe | module src/core/relay/native_repair_catalog.rs | ea 0x1401ce0a0 | successor of pre-update 0x140396de0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1401CE0A0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r9
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  char v12; // si
  bool v13; // zf
  char v14; // al
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  char *v19; // r14
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rdx
  char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  char *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  char *v47; // rax
  __int64 v48; // r15
  __int64 v49; // rsi
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rsi
  _BYTE *v56; // rax
  _BYTE v58[31]; // [rsp+31h] [rbp-4Fh]
  _QWORD v59[3]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v60; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v61; // [rsp+C0h] [rbp+40h]
  __int128 v62; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v63; // [rsp+E0h] [rbp+60h]
  void **v64; // [rsp+E8h] [rbp+68h]
  __int128 v65; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v66; // [rsp+100h] [rbp+80h]
  __int64 v67; // [rsp+118h] [rbp+98h]
  _BYTE *v68; // [rsp+120h] [rbp+A0h]
  _BYTE *v69; // [rsp+128h] [rbp+A8h]
  __int64 v70; // [rsp+130h] [rbp+B0h]
  char *v71; // [rsp+138h] [rbp+B8h]
  __int64 v72; // [rsp+140h] [rbp+C0h]
  __int64 v73; // [rsp+148h] [rbp+C8h]
  __int64 v74; // [rsp+150h] [rbp+D0h]
  _QWORD *v75; // [rsp+158h] [rbp+D8h]
  __int64 v76; // [rsp+160h] [rbp+E0h]
  __int64 v77; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v78; // [rsp+170h] [rbp+F0h]
  __int128 v79; // [rsp+178h] [rbp+F8h] BYREF
  __int128 v80; // [rsp+188h] [rbp+108h]
  char *v81; // [rsp+198h] [rbp+118h]
  __int128 v82; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v83; // [rsp+1B0h] [rbp+130h] BYREF
  char v84; // [rsp+1BAh] [rbp+13Ah]
  char v85; // [rsp+1BBh] [rbp+13Bh]
  char v86; // [rsp+1BCh] [rbp+13Ch]
  char v87; // [rsp+1BDh] [rbp+13Dh]
  char v88; // [rsp+1BEh] [rbp+13Eh]
  char v89; // [rsp+1BFh] [rbp+13Fh]
  __int64 v90; // [rsp+1C0h] [rbp+140h]

  v90 = -2;
  v64 = *(void ***)(a4 + 24);
  v68 = a3;
  v67 = a2;
  v69 = &a3[-a2];
LABEL_2:
  v5 = *(__int64 **)(a1 + 24);
  while ( 1 )
  {
    v6 = *(__int64 **)(a1 + 8);
    if ( v6 == v5 )
      return v67;
    v7 = *v6;
    v8 = (_QWORD *)v6[1];
    v9 = v6[2];
    v72 = v6[3];
    v73 = v6[4];
    v10 = v6[5];
    v76 = v6[6];
    v11 = v6[7];
    v78 = v6[8];
    v12 = *((_BYTE *)v6 + 73);
    v13 = (v6[9] & 1) == 0;
    *(_QWORD *)(a1 + 8) = v6 + 10;
    if ( v13
      && ((unsigned __int64)v9 < 0xD || *v8 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v8 + 5) ^ 0x5F79616C65725F69LL) )
    {
      v74 = v7;
      v77 = v11;
      v87 = 1;
      v75 = v8;
      v14 = sub_1402366A0(asc_141A06B30, 2, v8, v9);
      v11 = v77;
      v7 = v74;
      v8 = v75;
      if ( !v14 )
      {
        v19 = (char *)*v64;
        *(_QWORD *)&v62 = 0;
        v63 = 0;
        nullsub_1(v15, v74);
        v20 = (_DWORD *)sub_140001650(4, 1);
        if ( !v20 )
        {
          v89 = 1;
          sub_14196B2DB(1, 4);
        }
        *v20 = 1735748723;
        *(_QWORD *)&v82 = 4;
        *((_QWORD *)&v82 + 1) = v20;
        v83 = 4;
        if ( v9 < 0 )
        {
          v23 = 0;
          goto LABEL_68;
        }
        v81 = v19;
        if ( v9 )
        {
          nullsub_1(v22, v21);
          v23 = 1;
          v24 = sub_140001650(v9, 1);
          if ( v24 )
          {
            v25 = v24;
            sub_1419234B0(v24, v75, v9);
            goto LABEL_25;
          }
LABEL_68:
          v86 = 1;
          sub_14196B2DB(v23, v9);
        }
        v25 = 1;
LABEL_25:
        LOBYTE(v79) = 3;
        *((_QWORD *)&v79 + 1) = v9;
        *(_QWORD *)&v80 = v25;
        *((_QWORD *)&v80 + 1) = v9;
        v86 = 0;
        sub_140A68320(&v65, &v62, &v82, &v79);
        if ( (_BYTE)v65 != 0xFF )
        {
          v89 = 1;
          sub_1401AB4D0(&v65, v26);
        }
        nullsub_1(v27, v26);
        v28 = (void *)sub_140001650(10, 1);
        if ( !v28 )
        {
          v89 = 1;
          sub_14196B2DB(1, 10);
        }
        qmemcpy(v28, "visibility", 10);
        *(_QWORD *)&v82 = 10;
        *((_QWORD *)&v82 + 1) = v28;
        v83 = 10;
        nullsub_1(0x696C696269736976LL, v29);
        v30 = (char *)sub_140001650(4, 1);
        v71 = v30;
        if ( !v30 )
          sub_14196B2DB(1, 4);
        *(_DWORD *)v30 = 1953720684;
        LOBYTE(v79) = 3;
        *((_QWORD *)&v79 + 1) = 4;
        *(_QWORD *)&v80 = v30;
        *((_QWORD *)&v80 + 1) = 4;
        sub_140A68320(&v65, &v62, &v82, &v79);
        if ( (_BYTE)v65 != 0xFF )
        {
          v89 = 1;
          sub_1401AB4D0(&v65, v31);
        }
        nullsub_1(v32, v31);
        v33 = (_OWORD *)sub_140001650(16, 1);
        if ( !v33 )
        {
          v89 = 1;
          sub_14196B2DB(1, 16);
        }
        *v33 = xmmword_141A06B78;
        *(_QWORD *)&v82 = 16;
        *((_QWORD *)&v82 + 1) = v33;
        v83 = 16;
        LOWORD(v79) = 257;
        v89 = 1;
        sub_140A68320(&v65, &v62, &v82, &v79);
        if ( (_BYTE)v65 != 0xFF )
        {
          v89 = 1;
          sub_1401AB4D0(&v65, v34);
        }
        nullsub_1(v35, v34);
        v36 = (_QWORD *)sub_140001650(8, 1);
        if ( !v36 )
        {
          v89 = 1;
          sub_14196B2DB(1, 8);
        }
        *v36 = 0x797469726F697270LL;
        *(_QWORD *)&v82 = 8;
        *((_QWORD *)&v82 + 1) = v36;
        v83 = 8;
        v37 = nullptr;
        if ( (v12 & 1) == 0 )
          v37 = v81 + 1;
        LOBYTE(v79) = 2;
        *((_QWORD *)&v79 + 1) = 0;
        *(_QWORD *)&v80 = v37;
        v89 = 1;
        sub_140A68320(&v65, &v62, &v82, &v79);
        if ( (_BYTE)v65 != 0xFF )
        {
          v89 = 1;
          sub_1401AB4D0(&v65, v38);
        }
        nullsub_1(v39, v38);
        v40 = (void *)sub_140001650(23, 1);
        if ( !v40 )
        {
          v89 = 1;
          sub_14196B2DB(1, 23);
        }
        qmemcpy(v40, "default_reasoning_level", 23);
        *(_QWORD *)&v82 = 23;
        *((_QWORD *)&v82 + 1) = v40;
        v83 = 23;
        if ( v10 < 0 )
        {
          v42 = 0;
          goto LABEL_70;
        }
        if ( v10 )
        {
          nullsub_1(0x6C6576656C5F676ELL, v41);
          v42 = 1;
          v43 = sub_140001650(v10, 1);
          if ( v43 )
          {
            v44 = v43;
            sub_1419234B0(v43, v73, v10);
            goto LABEL_45;
          }
LABEL_70:
          v85 = 1;
          sub_14196B2DB(v42, v10);
        }
        v44 = 1;
LABEL_45:
        LOBYTE(v79) = 3;
        *((_QWORD *)&v79 + 1) = v10;
        *(_QWORD *)&v80 = v44;
        *((_QWORD *)&v80 + 1) = v10;
        v85 = 0;
        sub_140A68320(&v65, &v62, &v82, &v79);
        if ( (_BYTE)v65 != 0xFF )
        {
          v89 = 1;
          sub_1401AB4D0(&v65, v45);
        }
        nullsub_1(v46, v45);
        v47 = (char *)sub_140001650(26, 1);
        if ( !v47 )
        {
          v89 = 1;
          sub_14196B2DB(1, 26);
        }
        qmemcpy(v47, "supported_reasoning_levels", 26);
        v59[0] = 26;
        v59[1] = v47;
        v59[2] = 26;
        v48 = 32 * v78;
        v49 = v77;
        v81 = v47;
        if ( v78 >> 58 )
        {
          v50 = 0;
          goto LABEL_72;
        }
        if ( v78 )
        {
          nullsub_1(v78, 0);
          v50 = 8;
          v51 = sub_140001650(v48, 8);
          if ( !v51 )
          {
LABEL_72:
            v84 = 1;
            sub_14196B2DB(v50, v48);
          }
        }
        else
        {
          v51 = 8;
        }
        *(_QWORD *)&v82 = v78;
        *((_QWORD *)&v82 + 1) = v51;
        v83 = 0;
        *(_QWORD *)&v79 = v49;
        *((_QWORD *)&v79 + 1) = v49;
        *(_QWORD *)&v80 = v76;
        *((_QWORD *)&v80 + 1) = v49 + 24 * v78;
        v65 = (unsigned __int64)&v83;
        *(_QWORD *)&v66 = v51;
        sub_1401CF1F0(&v79, &v65);
        v60 = v82;
        v61 = v83;
        v88 = 1;
        sub_1407B3D00(&v79, &v60);
        if ( (_BYTE)v79 == 0xFF )
        {
          *(_QWORD *)&v65 = *((_QWORD *)&v79 + 1);
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_0,
            43,
            (unsigned int)&v65,
            (unsigned int)&off_141A07E80,
            (__int64)&off_141A06B60);
        }
        v66 = v80;
        v65 = v79;
        v88 = 0;
        sub_140A68320(&v79, &v62, v59, &v65);
        if ( (_BYTE)v79 != 0xFF )
          sub_1401AB4D0(&v79, v52);
        v53 = *((_QWORD *)&v60 + 1);
        v71 = (char *)v61;
        v70 = *((_QWORD *)&v60 + 1);
        v81 = nullptr;
        while ( v71 != v81 )
        {
          ++v81;
          v54 = v53 + 32;
          sub_1401AB4D0(v53, v52);
          v53 = v54;
        }
        if ( (_QWORD)v60 )
          sub_140001660(v70, 32 * v60, 8);
        *(_QWORD *)&v58[23] = v63;
        *(_OWORD *)&v58[7] = v62;
        v55 = v72;
        if ( v74 )
          sub_140001660(v75, v74, 1);
        if ( v55 )
          sub_140001660(v73, v55, 1);
        v56 = v68;
        *v68 = 5;
        *(_OWORD *)(v56 + 1) = *(_OWORD *)v58;
        *((_OWORD *)v56 + 1) = *(_OWORD *)&v58[15];
        v68 = v56 + 32;
        *v64 = (char *)*v64 + 1;
        v69 += 32;
        goto LABEL_2;
      }
    }
    if ( v7 )
      sub_140001660(v8, v7, 1);
    v16 = v78;
    if ( v72 )
      sub_140001660(v73, v72, 1);
    if ( v16 )
    {
      v17 = (_QWORD *)(v11 + 8);
      do
      {
        v18 = *(v17 - 1);
        if ( v18 )
          sub_140001660(*v17, v18, 1);
        v17 += 3;
        --v16;
      }
      while ( v16 );
    }
    if ( v76 )
      sub_140001660(v11, 24 * v76, 8);
  }
}
