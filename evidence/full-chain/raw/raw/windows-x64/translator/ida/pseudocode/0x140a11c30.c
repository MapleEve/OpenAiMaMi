// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140A11C30(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 i; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int64 v40; // rdx
  __int128 v41; // xmm0
  _OWORD *v42; // rax
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // rdx
  __int128 v46; // xmm0
  _OWORD *v47; // rax
  __int64 v48; // rax
  __int128 v49; // xmm0
  __int64 v50; // rdx
  __int128 v51; // xmm0
  _OWORD *v52; // rax
  __int64 v53; // rax
  __int128 v54; // xmm0
  __int64 v55; // rdx
  __int128 v56; // xmm0
  _OWORD *v57; // rax
  __int64 v58; // rax
  __int128 v59; // xmm0
  __int64 v60; // rdx
  __int128 v61; // xmm0
  _OWORD *v62; // rax
  __int64 v63; // rax
  __int128 v64; // xmm0
  _OWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  _DWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  _DWORD *v76; // rax
  __int16 v77; // ax
  _DWORD *v78; // rax
  __int128 v79; // xmm0
  _OWORD *v80; // rax
  __int128 v81; // xmm0
  __int64 v82; // rcx
  __int64 v83; // rdi
  _QWORD *v85; // rax
  __int128 v86; // [rsp+30h] [rbp-50h] BYREF
  __int128 v87; // [rsp+40h] [rbp-40h] BYREF
  __int64 v88; // [rsp+50h] [rbp-30h]
  __int64 v89; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v90; // [rsp+60h] [rbp-20h]
  __int64 v91; // [rsp+68h] [rbp-18h]
  __int128 v92; // [rsp+70h] [rbp-10h] BYREF
  __int64 v93; // [rsp+80h] [rbp+0h]
  __int64 v94; // [rsp+88h] [rbp+8h] BYREF
  __int64 v95; // [rsp+90h] [rbp+10h]
  unsigned __int64 v96; // [rsp+98h] [rbp+18h]
  __int128 v97; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v98; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v99; // [rsp+B8h] [rbp+38h]
  __m256i v100; // [rsp+C0h] [rbp+40h] BYREF
  __m256i v101; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v102; // [rsp+108h] [rbp+88h]
  char v103; // [rsp+117h] [rbp+97h]
  char v104; // [rsp+118h] [rbp+98h]
  char v105; // [rsp+119h] [rbp+99h]
  char v106; // [rsp+11Ah] [rbp+9Ah]
  char v107; // [rsp+11Bh] [rbp+9Bh]
  char v108; // [rsp+11Ch] [rbp+9Ch]
  char v109; // [rsp+11Dh] [rbp+9Dh]
  char v110; // [rsp+11Eh] [rbp+9Eh]
  char v111; // [rsp+11Fh] [rbp+9Fh]
  __int64 v112; // [rsp+120h] [rbp+A0h]
  char v113; // [rsp+12Dh] [rbp+ADh]
  char v114; // [rsp+12Eh] [rbp+AEh]
  char v115; // [rsp+12Fh] [rbp+AFh]
  __m256i v116; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v117; // [rsp+150h] [rbp+D0h]

  v117 = -2; /*0x140a11c4b*/
  v94 = 0; /*0x140a11c62*/
  v95 = 8; /*0x140a11c6a*/
  v96 = 0; /*0x140a11c72*/
  v8 = sub_141433D50(aSystem_0, 6, a2); /*0x140a11c89*/
  if ( v8 ) /*0x140a11c92*/
  {
    sub_1409EAE80(&v89, v8); /*0x140a11c9f*/
    if ( v89 != -1 ) /*0x140a11cad*/
    {
      v102 = v89; /*0x140a11cb3*/
      v99 = (unsigned __int64)v90; /*0x140a11cc6*/
      sub_1409EACD0((__int64 *)&v92, (unsigned __int64)v90, v91); /*0x140a11cca*/
      v10 = v93; /*0x140a11cd0*/
      if ( v93 ) /*0x140a11cd7*/
      {
        *(_QWORD *)&v97 = 0; /*0x140a11cdd*/
        v98 = 0; /*0x140a11ce5*/
        nullsub_1(v9); /*0x140a11ced*/
        v11 = (_DWORD *)sub_140001650(4, 1); /*0x140a11cfc*/
        if ( !v11 ) /*0x140a11d04*/
          sub_1416C2D4B(1, 4); /*0x140a12dd1*/
        *v11 = 1701605234; /*0x140a11d0a*/
        v101.m256i_i64[0] = 4; /*0x140a11d10*/
        v101.m256i_i64[1] = (__int64)v11; /*0x140a11d18*/
        v101.m256i_i64[2] = 4; /*0x140a11d1c*/
        nullsub_1(v12); /*0x140a11d24*/
        v13 = sub_140001650(6, 1); /*0x140a11d33*/
        v112 = v13; /*0x140a11d3b*/
        if ( !v13 ) /*0x140a11d42*/
          sub_1416C2D4B(1, 6); /*0x140a12de3*/
        *(_WORD *)(v13 + 4) = 28005; /*0x140a11d48*/
        *(_DWORD *)v13 = 1953724787; /*0x140a11d4e*/
        v116.m256i_i8[0] = 3; /*0x140a11d54*/
        v116.m256i_i64[1] = 6; /*0x140a11d5b*/
        v116.m256i_i64[2] = v13; /*0x140a11d66*/
        v116.m256i_i64[3] = 6; /*0x140a11d6d*/
        sub_140307860(&v100, &v97, &v101, &v116); /*0x140a11d8b*/
        if ( v100.m256i_i8[0] != -1 ) /*0x140a11d95*/
          sub_1400104F0(&v100); /*0x140a11d9b*/
        nullsub_1(v14); /*0x140a11da1*/
        v15 = (_DWORD *)sub_140001650(7, 1); /*0x140a11db0*/
        if ( !v15 ) /*0x140a11db8*/
          sub_1416C2D4B(1, 7); /*0x140a12df5*/
        *(_DWORD *)((char *)v15 + 3) = 1953391988; /*0x140a11dbe*/
        *v15 = 1953394531; /*0x140a11dc5*/
        v101.m256i_i64[0] = 7; /*0x140a11dcb*/
        v101.m256i_i64[1] = (__int64)v15; /*0x140a11dd3*/
        v101.m256i_i64[2] = 7; /*0x140a11dd7*/
        v17 = *((_QWORD *)&v92 + 1); /*0x140a11ddf*/
        nullsub_1(v16); /*0x140a11de3*/
        v18 = sub_140001650(v10, 1); /*0x140a11df0*/
        v112 = v18; /*0x140a11df8*/
        if ( !v18 ) /*0x140a11dff*/
          sub_1416C2D4B(1, v10); /*0x140a12e05*/
        v19 = v18; /*0x140a11e05*/
        sub_141684120(v18, v17, v10); /*0x140a11e11*/
        v116.m256i_i8[0] = 3; /*0x140a11e16*/
        v116.m256i_i64[1] = v10; /*0x140a11e1d*/
        v116.m256i_i64[2] = v19; /*0x140a11e24*/
        v116.m256i_i64[3] = v10; /*0x140a11e2b*/
        sub_140307860(&v100, &v97, &v101, &v116); /*0x140a11e45*/
        if ( v100.m256i_i8[0] != -1 ) /*0x140a11e4f*/
          sub_1400104F0(&v100); /*0x140a11e55*/
        *(_OWORD *)&v116.m256i_u64[1] = v97; /*0x140a11e5f*/
        v116.m256i_i64[3] = v98; /*0x140a11e6a*/
        v116.m256i_i8[0] = 5; /*0x140a11e71*/
        v20 = v96; /*0x140a11e78*/
        if ( v96 == v94 ) /*0x140a11e80*/
          sub_1416890A0(&v94); /*0x140a11e86*/
        v21 = v95; /*0x140a11e8c*/
        v22 = 32 * v20; /*0x140a11e93*/
        v23 = *(_OWORD *)v116.m256i_i8; /*0x140a11e97*/
        *(_OWORD *)(v95 + v22 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a11ea5*/
        *(_OWORD *)(v21 + v22) = v23; /*0x140a11eaa*/
        v96 = v20 + 1; /*0x140a11eb1*/
      }
      if ( (_QWORD)v92 ) /*0x140a11ebc*/
        sub_140001660(*((_QWORD *)&v92 + 1), v92, 1); /*0x140a11ec8*/
      if ( v102 ) /*0x140a11ed7*/
        sub_140001660(v99, v102, 1); /*0x140a11ee3*/
    }
  }
  v24 = sub_141433D50(aMessages, 8, a2); /*0x140a11ef8*/
  if ( v24 ) /*0x140a11f01*/
  {
    if ( *(_BYTE *)v24 == 4 ) /*0x140a11f06*/
    {
      v25 = *(_QWORD *)(v24 + 16); /*0x140a11f08*/
      for ( i = v25 + 32LL * *(_QWORD *)(v24 + 24); v25 != i; v25 += 32 ) /*0x140a11f1e*/
        sub_140A20290(v25, &v94); /*0x140a11f26*/
    }
  }
  v27 = sub_141433D50(aModel_6, 5, a2); /*0x140a11f44*/
  if ( v27 && *(_BYTE *)v27 == 3 ) /*0x140a11f52*/
  {
    a3 = *(_QWORD *)(v27 + 16); /*0x140a11f54*/
    a4 = *(_QWORD *)(v27 + 24); /*0x140a11f58*/
  }
  if ( a4 < 0 ) /*0x140a11f5f*/
  {
    v29 = 0; /*0x140a11f61*/
    goto LABEL_28; /*0x140a11f61*/
  }
  if ( a4 ) /*0x140a11f75*/
  {
    nullsub_1(v28); /*0x140a11f77*/
    v29 = 1; /*0x140a11f7c*/
    v30 = sub_140001650(a4, 1); /*0x140a11f8a*/
    if ( !v30 ) /*0x140a11f92*/
LABEL_28:
      sub_1416C2D4B(v29, a4); /*0x140a11f64*/
    v31 = v30; /*0x140a11f94*/
    sub_141684120(v30, a3, a4); /*0x140a11fa0*/
  }
  else
  {
    v31 = 1; /*0x140a11fa7*/
  }
  *(_QWORD *)&v97 = 0; /*0x140a11fad*/
  v98 = 0; /*0x140a11fb5*/
  nullsub_1(v28); /*0x140a11fbd*/
  v32 = 1; /*0x140a11fc2*/
  v33 = sub_140001650(5, 1); /*0x140a11fd1*/
  v102 = a4; /*0x140a11fd9*/
  v99 = v31; /*0x140a11fe0*/
  if ( !v33 ) /*0x140a11fe4*/
    sub_1416C2D4B(1, 5); /*0x140a12d78*/
  *(_BYTE *)(v33 + 4) = 108; /*0x140a11fea*/
  *(_DWORD *)v33 = 1701080941; /*0x140a11fee*/
  v101.m256i_i64[0] = 5; /*0x140a11ff4*/
  v101.m256i_i64[1] = v33; /*0x140a11ffc*/
  v101.m256i_i64[2] = 5; /*0x140a12000*/
  if ( a4 ) /*0x140a1200b*/
  {
    nullsub_1(v34); /*0x140a1200d*/
    v35 = sub_140001650(a4, 1); /*0x140a1201a*/
    if ( !v35 ) /*0x140a12022*/
    {
      v111 = 1; /*0x140a12d98*/
      sub_1416C2D4B(1, a4); /*0x140a12da7*/
    }
    v32 = v35; /*0x140a12028*/
    sub_141684120(v35, v31, a4); /*0x140a12034*/
  }
  v116.m256i_i8[0] = 3; /*0x140a12039*/
  v116.m256i_i64[1] = a4; /*0x140a12040*/
  v116.m256i_i64[2] = v32; /*0x140a12047*/
  v116.m256i_i64[3] = a4; /*0x140a1204e*/
  v111 = 0; /*0x140a12055*/
  sub_140307860(&v100, &v97, &v101, &v116); /*0x140a1206f*/
  if ( v100.m256i_i8[0] != -1 ) /*0x140a12079*/
    sub_1400104F0(&v100); /*0x140a1207f*/
  nullsub_1(v36); /*0x140a12085*/
  v37 = (_QWORD *)sub_140001650(8, 1); /*0x140a12094*/
  if ( !v37 ) /*0x140a1209c*/
    sub_1416C2D4B(1, 8); /*0x140a12d8d*/
  *v37 = 0x736567617373656DLL; /*0x140a120ac*/
  v101.m256i_i64[0] = 8; /*0x140a120af*/
  v101.m256i_i64[1] = (__int64)v37; /*0x140a120b7*/
  v101.m256i_i64[2] = 8; /*0x140a120bb*/
  v115 = 1; /*0x140a120c3*/
  sub_140467C90(&v116, &v94); /*0x140a120d5*/
  if ( v116.m256i_i8[0] == -1 ) /*0x140a120e2*/
  {
    v100.m256i_i64[0] = v116.m256i_i64[1]; /*0x140a12c70*/
    sub_1416C3060( /*0x140a12c97*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v100,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8310);
  }
  v100 = v116; /*0x140a120f6*/
  v115 = 0; /*0x140a120fe*/
  sub_140307860(&v116, &v97, &v101, &v100); /*0x140a12118*/
  if ( v116.m256i_i8[0] != -1 ) /*0x140a12125*/
    sub_1400104F0(&v116); /*0x140a1212e*/
  *(_OWORD *)&v101.m256i_u64[1] = v97; /*0x140a12138*/
  v101.m256i_i64[3] = v98; /*0x140a12140*/
  v101.m256i_i8[0] = 5; /*0x140a12147*/
  v38 = sub_141433D50("streamdoubaoreasoning_effortnone", 6, a2); /*0x140a1215a*/
  if ( v38 ) /*0x140a12163*/
  {
    switch ( *(_BYTE *)v38 ) /*0x140a1217a*/
    {
      case 0: /*0x140a1217a*/
        v116.m256i_i8[0] = 0; /*0x140a121b4*/
        break; /*0x140a121bb*/
      case 1: /*0x140a1217a*/
      case 2: /*0x140a1217a*/
        v39 = *(_OWORD *)v38; /*0x140a1217c*/
        *(_OWORD *)&v116.m256i_u64[2] = *(_OWORD *)(v38 + 16); /*0x140a12183*/
        *(_OWORD *)v116.m256i_i8 = v39; /*0x140a1218a*/
        break; /*0x140a12191*/
      case 3: /*0x140a1217a*/
        sub_14149C500(&v116.m256i_u64[1], v38 + 8); /*0x140a121cb*/
        v116.m256i_i8[0] = 3; /*0x140a121d1*/
        break; /*0x140a121d8*/
      case 4: /*0x140a1217a*/
        sub_1402CE260(&v116.m256i_u64[1], *(_QWORD *)(v38 + 16), *(_QWORD *)(v38 + 24)); /*0x140a121a5*/
        v116.m256i_i8[0] = 4; /*0x140a121ab*/
        break; /*0x140a121b2*/
      case 5: /*0x140a1217a*/
        if ( *(_QWORD *)(v38 + 24) ) /*0x140a121da*/
        {
          v40 = *(_QWORD *)(v38 + 8); /*0x140a121e1*/
          if ( !v40 ) /*0x140a121e8*/
            sub_1416C3040(&off_141747358); /*0x140a12ca9*/
          sub_1402CCD80(&v116.m256i_u64[1], v40, *(_QWORD *)(v38 + 16)); /*0x140a121f9*/
        }
        else
        {
          v116.m256i_i64[1] = 0; /*0x140a12201*/
          v116.m256i_i64[3] = 0; /*0x140a1220c*/
        }
        v116.m256i_i8[0] = 5; /*0x140a12217*/
        break; /*0x140a12217*/
    }
    v110 = 1; /*0x140a1221e*/
    v112 = sub_141433E50("streamdoubaoreasoning_effortnone", 6, &v101); /*0x140a1223b*/
    sub_1400104F0(v112); /*0x140a12245*/
    v41 = *(_OWORD *)v116.m256i_i8; /*0x140a1224b*/
    v42 = (_OWORD *)v112; /*0x140a12259*/
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a12260*/
    *v42 = v41; /*0x140a12264*/
  }
  v43 = sub_141433D50("max_tokensstreamdoubaoreasoning_effortnone", 10, a2); /*0x140a12276*/
  if ( v43 ) /*0x140a1227f*/
  {
    switch ( *(_BYTE *)v43 ) /*0x140a12296*/
    {
      case 0: /*0x140a12296*/
        v116.m256i_i8[0] = 0; /*0x140a122d0*/
        break; /*0x140a122d7*/
      case 1: /*0x140a12296*/
      case 2: /*0x140a12296*/
        v44 = *(_OWORD *)v43; /*0x140a12298*/
        *(_OWORD *)&v116.m256i_u64[2] = *(_OWORD *)(v43 + 16); /*0x140a1229f*/
        *(_OWORD *)v116.m256i_i8 = v44; /*0x140a122a6*/
        break; /*0x140a122ad*/
      case 3: /*0x140a12296*/
        sub_14149C500(&v116.m256i_u64[1], v43 + 8); /*0x140a122e7*/
        v116.m256i_i8[0] = 3; /*0x140a122ed*/
        break; /*0x140a122f4*/
      case 4: /*0x140a12296*/
        sub_1402CE260(&v116.m256i_u64[1], *(_QWORD *)(v43 + 16), *(_QWORD *)(v43 + 24)); /*0x140a122c1*/
        v116.m256i_i8[0] = 4; /*0x140a122c7*/
        break; /*0x140a122ce*/
      case 5: /*0x140a12296*/
        if ( *(_QWORD *)(v43 + 24) ) /*0x140a122f6*/
        {
          v45 = *(_QWORD *)(v43 + 8); /*0x140a122fd*/
          if ( !v45 ) /*0x140a12304*/
            sub_1416C3040(&off_141747358); /*0x140a12cbb*/
          sub_1402CCD80(&v116.m256i_u64[1], v45, *(_QWORD *)(v43 + 16)); /*0x140a12315*/
        }
        else
        {
          v116.m256i_i64[1] = 0; /*0x140a1231d*/
          v116.m256i_i64[3] = 0; /*0x140a12328*/
        }
        v116.m256i_i8[0] = 5; /*0x140a12333*/
        break; /*0x140a12333*/
    }
    v109 = 1; /*0x140a1233a*/
    v112 = sub_141433E50("max_tokensstreamdoubaoreasoning_effortnone", 10, &v101); /*0x140a12357*/
    sub_1400104F0(v112); /*0x140a12361*/
    v46 = *(_OWORD *)v116.m256i_i8; /*0x140a12367*/
    v47 = (_OWORD *)v112; /*0x140a12375*/
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a1237c*/
    *v47 = v46; /*0x140a12380*/
  }
  v48 = sub_141433D50("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, a2); /*0x140a12392*/
  if ( v48 ) /*0x140a1239b*/
  {
    switch ( *(_BYTE *)v48 ) /*0x140a123b2*/
    {
      case 0: /*0x140a123b2*/
        v116.m256i_i8[0] = 0; /*0x140a123ec*/
        break; /*0x140a123f3*/
      case 1: /*0x140a123b2*/
      case 2: /*0x140a123b2*/
        v49 = *(_OWORD *)v48; /*0x140a123b4*/
        *(_OWORD *)&v116.m256i_u64[2] = *(_OWORD *)(v48 + 16); /*0x140a123bb*/
        *(_OWORD *)v116.m256i_i8 = v49; /*0x140a123c2*/
        break; /*0x140a123c9*/
      case 3: /*0x140a123b2*/
        sub_14149C500(&v116.m256i_u64[1], v48 + 8); /*0x140a12403*/
        v116.m256i_i8[0] = 3; /*0x140a12409*/
        break; /*0x140a12410*/
      case 4: /*0x140a123b2*/
        sub_1402CE260(&v116.m256i_u64[1], *(_QWORD *)(v48 + 16), *(_QWORD *)(v48 + 24)); /*0x140a123dd*/
        v116.m256i_i8[0] = 4; /*0x140a123e3*/
        break; /*0x140a123ea*/
      case 5: /*0x140a123b2*/
        if ( *(_QWORD *)(v48 + 24) ) /*0x140a12412*/
        {
          v50 = *(_QWORD *)(v48 + 8); /*0x140a12419*/
          if ( !v50 ) /*0x140a12420*/
            sub_1416C3040(&off_141747358); /*0x140a12ccd*/
          sub_1402CCD80(&v116.m256i_u64[1], v50, *(_QWORD *)(v48 + 16)); /*0x140a12431*/
        }
        else
        {
          v116.m256i_i64[1] = 0; /*0x140a12439*/
          v116.m256i_i64[3] = 0; /*0x140a12444*/
        }
        v116.m256i_i8[0] = 5; /*0x140a1244f*/
        break; /*0x140a1244f*/
    }
    v108 = 1; /*0x140a12456*/
    v112 = sub_141433E50("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, &v101); /*0x140a12473*/
    sub_1400104F0(v112); /*0x140a1247d*/
    v51 = *(_OWORD *)v116.m256i_i8; /*0x140a12483*/
    v52 = (_OWORD *)v112; /*0x140a12491*/
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a12498*/
    *v52 = v51; /*0x140a1249c*/
  }
  v53 = sub_141433D50(aTopP, 5, a2); /*0x140a124ae*/
  if ( v53 ) /*0x140a124b7*/
  {
    switch ( *(_BYTE *)v53 ) /*0x140a124ce*/
    {
      case 0: /*0x140a124ce*/
        v116.m256i_i8[0] = 0; /*0x140a12508*/
        break; /*0x140a1250f*/
      case 1: /*0x140a124ce*/
      case 2: /*0x140a124ce*/
        v54 = *(_OWORD *)v53; /*0x140a124d0*/
        *(_OWORD *)&v116.m256i_u64[2] = *(_OWORD *)(v53 + 16); /*0x140a124d7*/
        *(_OWORD *)v116.m256i_i8 = v54; /*0x140a124de*/
        break; /*0x140a124e5*/
      case 3: /*0x140a124ce*/
        sub_14149C500(&v116.m256i_u64[1], v53 + 8); /*0x140a1251f*/
        v116.m256i_i8[0] = 3; /*0x140a12525*/
        break; /*0x140a1252c*/
      case 4: /*0x140a124ce*/
        sub_1402CE260(&v116.m256i_u64[1], *(_QWORD *)(v53 + 16), *(_QWORD *)(v53 + 24)); /*0x140a124f9*/
        v116.m256i_i8[0] = 4; /*0x140a124ff*/
        break; /*0x140a12506*/
      case 5: /*0x140a124ce*/
        if ( *(_QWORD *)(v53 + 24) ) /*0x140a1252e*/
        {
          v55 = *(_QWORD *)(v53 + 8); /*0x140a12535*/
          if ( !v55 ) /*0x140a1253c*/
            sub_1416C3040(&off_141747358); /*0x140a12cdf*/
          sub_1402CCD80(&v116.m256i_u64[1], v55, *(_QWORD *)(v53 + 16)); /*0x140a1254d*/
        }
        else
        {
          v116.m256i_i64[1] = 0; /*0x140a12555*/
          v116.m256i_i64[3] = 0; /*0x140a12560*/
        }
        v116.m256i_i8[0] = 5; /*0x140a1256b*/
        break; /*0x140a1256b*/
    }
    v107 = 1; /*0x140a12572*/
    v112 = sub_141433E50(aTopP, 5, &v101); /*0x140a1258f*/
    sub_1400104F0(v112); /*0x140a12599*/
    v56 = *(_OWORD *)v116.m256i_i8; /*0x140a1259f*/
    v57 = (_OWORD *)v112; /*0x140a125ad*/
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a125b4*/
    *v57 = v56; /*0x140a125b8*/
  }
  v58 = sub_141433D50(aStopSequences, 14, a2); /*0x140a125ca*/
  if ( v58 ) /*0x140a125d3*/
  {
    switch ( *(_BYTE *)v58 ) /*0x140a125ea*/
    {
      case 0: /*0x140a125ea*/
        v116.m256i_i8[0] = 0; /*0x140a12624*/
        break; /*0x140a1262b*/
      case 1: /*0x140a125ea*/
      case 2: /*0x140a125ea*/
        v59 = *(_OWORD *)v58; /*0x140a125ec*/
        *(_OWORD *)&v116.m256i_u64[2] = *(_OWORD *)(v58 + 16); /*0x140a125f3*/
        *(_OWORD *)v116.m256i_i8 = v59; /*0x140a125fa*/
        break; /*0x140a12601*/
      case 3: /*0x140a125ea*/
        sub_14149C500(&v116.m256i_u64[1], v58 + 8); /*0x140a1263b*/
        v116.m256i_i8[0] = 3; /*0x140a12641*/
        break; /*0x140a12648*/
      case 4: /*0x140a125ea*/
        sub_1402CE260(&v116.m256i_u64[1], *(_QWORD *)(v58 + 16), *(_QWORD *)(v58 + 24)); /*0x140a12615*/
        v116.m256i_i8[0] = 4; /*0x140a1261b*/
        break; /*0x140a12622*/
      case 5: /*0x140a125ea*/
        if ( *(_QWORD *)(v58 + 24) ) /*0x140a1264a*/
        {
          v60 = *(_QWORD *)(v58 + 8); /*0x140a12651*/
          if ( !v60 ) /*0x140a12658*/
            sub_1416C3040(&off_141747358); /*0x140a12cf1*/
          sub_1402CCD80(&v116.m256i_u64[1], v60, *(_QWORD *)(v58 + 16)); /*0x140a12669*/
        }
        else
        {
          v116.m256i_i64[1] = 0; /*0x140a12671*/
          v116.m256i_i64[3] = 0; /*0x140a1267c*/
        }
        v116.m256i_i8[0] = 5; /*0x140a12687*/
        break; /*0x140a12687*/
    }
    v106 = 1; /*0x140a1268e*/
    v112 = sub_141433E50(aStop, 4, &v101); /*0x140a126ab*/
    sub_1400104F0(v112); /*0x140a126b5*/
    v61 = *(_OWORD *)v116.m256i_i8; /*0x140a126bb*/
    v62 = (_OWORD *)v112; /*0x140a126c9*/
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a126d0*/
    *v62 = v61; /*0x140a126d4*/
  }
  v63 = sub_141433D50(aTools_1, 5, a2); /*0x140a126e6*/
  if ( v63 && *(_BYTE *)v63 == 4 ) /*0x140a126f8*/
  {
    sub_140315B30(&v100, *(_QWORD *)(v63 + 16), *(_QWORD *)(v63 + 16) + 32LL * *(_QWORD *)(v63 + 24)); /*0x140a12711*/
    if ( v100.m256i_i64[2] ) /*0x140a1271c*/
    {
      v116.m256i_i64[3] = v100.m256i_i64[2]; /*0x140a12722*/
      *(_OWORD *)&v116.m256i_u64[1] = *(_OWORD *)v100.m256i_i8; /*0x140a1272d*/
      v116.m256i_i8[0] = 4; /*0x140a12734*/
      v105 = 1; /*0x140a1273b*/
      v112 = sub_141433E50(aTools_1, 5, &v101); /*0x140a12758*/
      sub_1400104F0(v112); /*0x140a12762*/
      v64 = *(_OWORD *)v116.m256i_i8; /*0x140a12768*/
      v65 = (_OWORD *)v112; /*0x140a12776*/
      *(_OWORD *)(v112 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a1277d*/
      *v65 = v64; /*0x140a12781*/
    }
    else if ( v100.m256i_i64[0] ) /*0x140a1278d*/
    {
      sub_140001660(v100.m256i_i64[1], 32 * v100.m256i_i64[0], 8); /*0x140a1279d*/
    }
  }
  v66 = sub_141433D50(aToolChoice, 11, a2); /*0x140a127b2*/
  v67 = v66; /*0x140a127b8*/
  if ( v66 ) /*0x140a127be*/
  {
    v68 = sub_141433D50(aType_8, 4, v66); /*0x140a127d3*/
    if ( v68 && *(_BYTE *)v68 == 3 ) /*0x140a127e5*/
    {
      v69 = *(_QWORD *)(v68 + 16); /*0x140a127eb*/
      v70 = *(_QWORD *)(v68 + 24); /*0x140a127ef*/
      if ( v70 == 3 ) /*0x140a127f7*/
      {
        v77 = *(_WORD *)v69 ^ 0x6E61; /*0x140a12a6e*/
        v69 = *(unsigned __int8 *)(v69 + 2) ^ 0x79u; /*0x140a12a77*/
        LOWORD(v69) = v77 | v69; /*0x140a12a7a*/
        if ( !(_WORD)v69 ) /*0x140a12a7d*/
        {
          nullsub_1(v69); /*0x140a12beb*/
          v85 = (_QWORD *)sub_140001650(8, 1); /*0x140a12bfa*/
          if ( !v85 ) /*0x140a12c02*/
            sub_1416C2D4B(1, 8); /*0x140a12e17*/
          *v85 = 0x6465726975716572LL; /*0x140a12c12*/
          v116.m256i_i64[1] = 8; /*0x140a12c15*/
          v116.m256i_i64[2] = (__int64)v85; /*0x140a12c20*/
          v116.m256i_i64[3] = 8; /*0x140a12c27*/
          goto LABEL_133; /*0x140a12c32*/
        }
      }
      else if ( v70 == 4 ) /*0x140a12801*/
      {
        if ( *(_DWORD *)v69 == 1869903201 ) /*0x140a1280d*/
        {
          nullsub_1(v69); /*0x140a12bb9*/
          v78 = (_DWORD *)sub_140001650(4, 1); /*0x140a12bc8*/
          if ( !v78 ) /*0x140a12bd0*/
            sub_1416C2D4B(1, 4); /*0x140a12be0*/
          goto LABEL_132; /*0x140a12bd0*/
        }
        if ( *(_DWORD *)v69 == 1819242356 ) /*0x140a12819*/
        {
          v71 = sub_141433D50(aName_7, 4, v67); /*0x140a1282e*/
          if ( v71 && *(_BYTE *)v71 == 3 ) /*0x140a12840*/
          {
            v86 = *(_OWORD *)(v71 + 16); /*0x140a1284a*/
            *(_QWORD *)&v87 = 0; /*0x140a1284e*/
            v88 = 0; /*0x140a12856*/
            nullsub_1(v72); /*0x140a1285e*/
            v73 = (_DWORD *)sub_140001650(4, 1); /*0x140a1286d*/
            if ( !v73 ) /*0x140a12875*/
              sub_1416C2D4B(1, 4); /*0x140a12e29*/
            *v73 = 1701869940; /*0x140a1287b*/
            *(_QWORD *)&v97 = 4; /*0x140a12881*/
            *((_QWORD *)&v97 + 1) = v73; /*0x140a12889*/
            v98 = 4; /*0x140a1288d*/
            v114 = 1; /*0x140a12895*/
            sub_140B56640(&v116, &off_1417A4F98); /*0x140a128aa*/
            if ( v116.m256i_i8[0] == -1 ) /*0x140a128b7*/
            {
              v100.m256i_i64[0] = v116.m256i_i64[1]; /*0x140a12d03*/
              sub_1416C3060( /*0x140a12d2a*/
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v100,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A82D0);
            }
            v100 = v116; /*0x140a128cb*/
            v114 = 0; /*0x140a128d3*/
            sub_140307860(&v116, &v87, &v97, &v100); /*0x140a128ed*/
            if ( v116.m256i_i8[0] != -1 ) /*0x140a128fa*/
              sub_1400104F0(&v116); /*0x140a12903*/
            nullsub_1(v74); /*0x140a12909*/
            v75 = (_QWORD *)sub_140001650(8, 1); /*0x140a12918*/
            if ( !v75 ) /*0x140a12920*/
              sub_1416C2D4B(1, 8); /*0x140a12e3b*/
            *v75 = 0x6E6F6974636E7566LL; /*0x140a12930*/
            v89 = 8; /*0x140a12933*/
            v90 = v75; /*0x140a1293b*/
            v91 = 8; /*0x140a1293f*/
            *(_QWORD *)&v92 = 0; /*0x140a12947*/
            v93 = 0; /*0x140a1294f*/
            nullsub_1(0x6E6F6974636E7566LL); /*0x140a12957*/
            v76 = (_DWORD *)sub_140001650(4, 1); /*0x140a12966*/
            if ( !v76 ) /*0x140a1296e*/
              sub_1416C2D4B(1, 4); /*0x140a12e4d*/
            *v76 = 1701667182; /*0x140a12974*/
            *(_QWORD *)&v97 = 4; /*0x140a1297a*/
            *((_QWORD *)&v97 + 1) = v76; /*0x140a12982*/
            v98 = 4; /*0x140a12986*/
            v113 = 1; /*0x140a1298e*/
            sub_140B56640(&v116, &v86); /*0x140a129a0*/
            if ( v116.m256i_i8[0] == -1 ) /*0x140a129ad*/
            {
              v100.m256i_i64[0] = v116.m256i_i64[1]; /*0x140a12d3c*/
              sub_1416C3060( /*0x140a12d63*/
                (unsigned int)aCalledResultUn_15,
                43,
                (unsigned int)&v100,
                (unsigned int)&off_1417A5560,
                (__int64)&off_1417A82D0);
            }
            v100 = v116; /*0x140a129c1*/
            v113 = 0; /*0x140a129c9*/
            sub_140307860(&v116, &v92, &v97, &v100); /*0x140a129e3*/
            if ( v116.m256i_i8[0] != -1 ) /*0x140a129f0*/
              sub_1400104F0(&v116); /*0x140a129f9*/
            *(_OWORD *)&v116.m256i_u64[1] = v92; /*0x140a12a03*/
            v116.m256i_i64[3] = v93; /*0x140a12a0e*/
            v116.m256i_i8[0] = 5; /*0x140a12a15*/
            v104 = 0; /*0x140a12a1c*/
            sub_140307860(&v100, &v87, &v89, &v116); /*0x140a12a36*/
            if ( v100.m256i_i8[0] != -1 ) /*0x140a12a40*/
              sub_1400104F0(&v100); /*0x140a12a46*/
            *(_OWORD *)&v116.m256i_u64[1] = v87; /*0x140a12a50*/
            v116.m256i_i64[3] = v88; /*0x140a12a5b*/
            v116.m256i_i8[0] = 5; /*0x140a12a62*/
            goto LABEL_134; /*0x140a12a69*/
          }
          nullsub_1(v72); /*0x140a12c37*/
          v78 = (_DWORD *)sub_140001650(4, 1); /*0x140a12c46*/
          if ( !v78 ) /*0x140a12c4e*/
            sub_1416C2D4B(1, 4); /*0x140a12c5e*/
          goto LABEL_132; /*0x140a12c4e*/
        }
      }
    }
    nullsub_1(v69); /*0x140a12a83*/
    v78 = (_DWORD *)sub_140001650(4, 1); /*0x140a12a92*/
    if ( !v78 ) /*0x140a12a9a*/
      sub_1416C2D4B(1, 4); /*0x140a12dbc*/
LABEL_132:
    *v78 = 1869903201; /*0x140a12aa0*/
    v116.m256i_i64[1] = 4; /*0x140a12aa6*/
    v116.m256i_i64[2] = (__int64)v78; /*0x140a12ab1*/
    v116.m256i_i64[3] = 4; /*0x140a12ab8*/
LABEL_133:
    v116.m256i_i8[0] = 3; /*0x140a12ac3*/
LABEL_134:
    v103 = 1; /*0x140a12aca*/
    v112 = sub_141433E50(aToolChoice, 11, &v101); /*0x140a12ae7*/
    sub_1400104F0(v112); /*0x140a12af1*/
    v79 = *(_OWORD *)v116.m256i_i8; /*0x140a12af7*/
    v80 = (_OWORD *)v112; /*0x140a12b05*/
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v116.m256i_u64[2]; /*0x140a12b0c*/
    *v80 = v79; /*0x140a12b10*/
  }
  v81 = *(_OWORD *)v101.m256i_i8; /*0x140a12b13*/
  a1[1] = *(_OWORD *)&v101.m256i_u64[2]; /*0x140a12b1b*/
  *a1 = v81; /*0x140a12b1f*/
  if ( v102 ) /*0x140a12b2c*/
    sub_140001660(v99, v102, 1); /*0x140a12b38*/
  v82 = v95; /*0x140a12b3d*/
  v99 = v96; /*0x140a12b45*/
  v102 = 0; /*0x140a12b49*/
  v112 = v95; /*0x140a12b54*/
  while ( v99 != v102 ) /*0x140a12b6b*/
  {
    ++v102; /*0x140a12b70*/
    v83 = v82 + 32; /*0x140a12b77*/
    sub_1402C3260(); /*0x140a12b7b*/
    v82 = v83; /*0x140a12b81*/
  }
  if ( v94 ) /*0x140a12b8d*/
    sub_140001660(v95, 32 * v94, 8); /*0x140a12b9d*/
  return a1; /*0x140a12ba5*/
}