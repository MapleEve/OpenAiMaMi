// win 1.2.3 delta | session_meta_rewrite_1 @ 0x1404a4c00 | changelog ③模型协议
// [FULL IDA decompiler 14528B]
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404A4C00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int128 v6; // rax
  __int128 v7; // kr00_16
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int128 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v29; // r13
  unsigned __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r10
  unsigned __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r14
  unsigned __int64 v37; // r8
  __int64 v38; // r10
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 v41; // r12
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r8
  __int64 v45; // rdx
  unsigned __int64 v46; // r12
  __int64 v47; // r13
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __int128 v51; // xmm1
  __m128i v53; // [rsp+40h] [rbp-40h] BYREF
  __int64 v54; // [rsp+50h] [rbp-30h]
  __int64 v55; // [rsp+58h] [rbp-28h]
  __m128i v56; // [rsp+60h] [rbp-20h] BYREF
  __int64 v57; // [rsp+70h] [rbp-10h]
  char v58; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v59[7]; // [rsp+81h] [rbp+1h]
  __int64 v60; // [rsp+88h] [rbp+8h]
  __m128i v61; // [rsp+90h] [rbp+10h]
  __m128i v62; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v63; // [rsp+B0h] [rbp+30h]
  __int64 v64; // [rsp+C0h] [rbp+40h]
  __int64 v65; // [rsp+D0h] [rbp+50h]
  __int64 v66; // [rsp+D8h] [rbp+58h]
  __int64 v67; // [rsp+E0h] [rbp+60h]
  __int64 v68; // [rsp+E8h] [rbp+68h]
  __int64 v69; // [rsp+F0h] [rbp+70h]
  __int64 v70; // [rsp+F8h] [rbp+78h]
  __m128i v71; // [rsp+100h] [rbp+80h] BYREF
  __int128 v72; // [rsp+110h] [rbp+90h]
  __int64 v73; // [rsp+120h] [rbp+A0h]
  __int128 v74; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v75; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v76; // [rsp+150h] [rbp+D0h]
  __int64 v77; // [rsp+160h] [rbp+E0h]
  __m128i v78; // [rsp+168h] [rbp+E8h]
  __int128 v79; // [rsp+178h] [rbp+F8h]
  __int64 v80; // [rsp+188h] [rbp+108h]
  __int64 v81; // [rsp+198h] [rbp+118h]
  __int64 v82; // [rsp+1A0h] [rbp+120h]
  unsigned __int64 v83; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v84; // [rsp+1B0h] [rbp+130h]
  __int64 v85; // [rsp+1B8h] [rbp+138h]
  __int64 v86; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v87; // [rsp+1C8h] [rbp+148h]
  __int64 v88; // [rsp+1D0h] [rbp+150h]
  unsigned __int128 v89; // [rsp+1D8h] [rbp+158h] BYREF
  _BYTE v90[40]; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v91; // [rsp+210h] [rbp+190h] BYREF
  __int128 v92; // [rsp+220h] [rbp+1A0h]
  __int64 v93; // [rsp+230h] [rbp+1B0h]
  unsigned __int64 v94; // [rsp+238h] [rbp+1B8h]
  __int64 v95; // [rsp+240h] [rbp+1C0h]
  HANDLE hObject; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v97; // [rsp+250h] [rbp+1D0h]
  __int64 v98; // [rsp+258h] [rbp+1D8h]
  __int64 v99; // [rsp+260h] [rbp+1E0h]
  unsigned __int64 v100; // [rsp+268h] [rbp+1E8h]
  unsigned __int64 v101; // [rsp+270h] [rbp+1F0h]
  bool v102; // [rsp+27Ch] [rbp+1FCh]
  char v103; // [rsp+27Dh] [rbp+1FDh]
  char v104; // [rsp+27Eh] [rbp+1FEh]
  char v105; // [rsp+27Fh] [rbp+1FFh]
  __int64 v106; // [rsp+280h] [rbp+200h]

  v106 = -2;
  sub_1404B5240(&v89);
  v6 = v89;
  v7 = *(_OWORD *)v90;
  v56 = _mm_loadu_si128((const __m128i *)&v90[16]);
  v57 = *(_QWORD *)&v90[32];
  if ( (_QWORD)v89 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v93;
    v8 = v91;
    *(_OWORD *)(a1 + 80) = v92;
    *(__m128i *)(a1 + 64) = v8;
    *(_OWORD *)(a1 + 24) = v7;
    *(__m128i *)(a1 + 40) = _mm_load_si128(&v56);
    *(_QWORD *)(a1 + 56) = v57;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 1;
    return v6;
  }
  if ( *((_QWORD *)&v89 + 1) == -1 )
  {
    *(_QWORD *)(a1 + 8) = -1;
    *(_QWORD *)a1 = 0;
    return v6;
  }
  v81 = *((_QWORD *)&v89 + 1);
  v54 = v57;
  v53 = _mm_load_si128(&v56);
  v89 = *(_OWORD *)v90;
  *(_OWORD *)v90 = 0;
  v82 = v7;
  *(_OWORD *)&v90[16] = v7;
  v105 = 0;
  sub_1408A6200(&v74, &v89);
  if ( (_BYTE)v74 == 0xFF )
  {
    *(_QWORD *)&v6 = *((_QWORD *)&v74 + 1);
    *(_QWORD *)(a1 + 8) = 3;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)a1 = 1;
    *((_QWORD *)&v6 + 1) = v81;
    if ( !v81 )
      return v6;
    goto LABEL_16;
  }
  *(_DWORD *)&v59[3] = DWORD1(v74);
  *(_DWORD *)v59 = *(_DWORD *)((char *)&v74 + 1);
  v61 = _mm_loadu_si128(&v75);
  v58 = v74;
  v60 = *((_QWORD *)&v74 + 1);
  v9 = sub_14142E200(&v58, aPayloadId, 11);
  if ( !v9 || *(_BYTE *)v9 != 3 || (v10 = *(_QWORD *)(v9 + 24)) == 0 )
  {
    v71.m128i_i64[0] = a2;
    v71.m128i_i64[1] = a3;
    *(_QWORD *)&v74 = &v71;
    *((_QWORD *)&v74 + 1) = sub_14148F3A0;
    sub_14149C0F0((char *)&v89 + 8, &unk_141757BFF, &v74);
    v13 = *((_QWORD *)&v89 + 1);
    v11 = *(void **)v90;
    *(_QWORD *)(a1 + 96) = v93;
    *(_OWORD *)(a1 + 80) = v92;
    *(__m128i *)(a1 + 64) = v91;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v90[24];
    *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)&v90[8]);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = v13;
    v14 = 24;
    goto LABEL_13;
  }
  v67 = *(_QWORD *)(v9 + 16);
  LODWORD(v89) = 0;
  *((_QWORD *)&v89 + 1) = 0;
  *(_DWORD *)v90 = 7;
  *(_QWORD *)&v90[4] = 0x100000000LL;
  *(_QWORD *)&v90[9] = 0;
  if ( sub_141481480(&v89, a2, a3) == 1 )
  {
    v12 = 2;
    goto LABEL_81;
  }
  hObject = v11;
  sub_141474A10(&v89, &hObject);
  if ( (_DWORD)v89 == 2 )
  {
    *((_QWORD *)&v74 + 1) = *((_QWORD *)&v89 + 1);
    v12 = 2;
    goto LABEL_80;
  }
  v15 = v91.m128i_i64[0];
  if ( !v91.m128i_i64[0] )
  {
    v74 = -1;
    v12 = -1;
    goto LABEL_80;
  }
  v68 = v10;
  ((void (*)(void))nullsub_1)();
  v98 = 1;
  v16 = sub_140001680(0x10000, 1);
  if ( !v16 )
  {
    v66 = 1;
    v65 = 0;
    v103 = 1;
    sub_1416C2D4B(1, 0x10000);
  }
  v95 = v16;
  v55 = v16 + 1;
  v69 = 0;
  v17 = 0;
  v100 = 0;
  v85 = 0;
  v84 = v15;
  while ( 2 )
  {
    v102 = v15 != 0;
    v99 = v17;
    if ( !v15 )
    {
      *(_QWORD *)&v89 = v17;
      *((_QWORD *)&v89 + 1) = v98;
      *(_QWORD *)v90 = v100;
      sub_1404BB170((unsigned int)&v74, (unsigned int)&v89, 0, (unsigned __int8)v85 + (_DWORD)v84, v85, v67, v68);
      sub_140001660(v95, 0x10000, 1);
      CloseHandle(hObject);
      v11 = *((void **)&v74 + 1);
      v12 = v74;
      if ( (_QWORD)v74 != -1 )
        goto LABEL_81;
      goto LABEL_84;
    }
    v19 = 0x10000;
    if ( v15 < 0x10000 )
      v19 = v15;
    v94 = v15;
    v101 = v19;
    v83 = v15 - v19;
    LOBYTE(v20) = sub_141491C20(&hObject, 0);
    v21 = v95;
    v22 = v101;
    if ( (v20 & 1) != 0 )
      goto LABEL_76;
    while ( 1 )
    {
      *(_QWORD *)&v20 = sub_141491990(&hObject, v21, v22);
      v89 = v20;
      if ( (_QWORD)v20 == 1 )
        break;
      if ( !*((_QWORD *)&v20 + 1) )
      {
        *((_QWORD *)&v20 + 1) = &off_1417497E0;
LABEL_76:
        *((_QWORD *)&v74 + 1) = *((_QWORD *)&v20 + 1);
        v12 = 2;
LABEL_77:
        v17 = v99;
        goto LABEL_78;
      }
      if ( v22 < *((_QWORD *)&v20 + 1) )
        sub_1416C32F0(*((_QWORD *)&v20 + 1), v22, v22, &off_1417497F8);
      v21 += *((_QWORD *)&v20 + 1);
      v22 -= *((_QWORD *)&v20 + 1);
LABEL_29:
      if ( !v22 )
        goto LABEL_41;
    }
    switch ( BYTE8(v20) & 3 )
    {
      case 0:
        LOBYTE(v20) = *(_BYTE *)(*((_QWORD *)&v20 + 1) + 16LL);
        goto LABEL_38;
      case 1:
        LOBYTE(v20) = *(_BYTE *)(*((_QWORD *)&v20 + 1) + 15LL);
        goto LABEL_38;
      case 2:
        goto LABEL_40;
      case 3:
        *(_QWORD *)&v20 = HIDWORD(*((_QWORD *)&v20 + 1));
LABEL_38:
        if ( (_BYTE)v20 == 35 )
        {
          sub_140018650((char *)&v89 + 8);
          goto LABEL_29;
        }
LABEL_40:
        if ( *((_QWORD *)&v20 + 1) )
          goto LABEL_76;
LABEL_41:
        v23 = v101;
        v94 -= v101;
        v17 = v99;
LABEL_42:
        if ( (unsigned __int64)(v23 - 1) > 0xFFFF )
        {
          v15 = v83;
          if ( v23 )
            sub_1416C30E3(-1, 0x10000, &off_14175CBC0);
          continue;
        }
        v24 = v55 + v23;
        v25 = 0;
LABEL_44:
        v26 = v25 + v23;
        if ( !(v25 + v23) )
        {
          v18 = v99;
          v41 = v100;
          v42 = v23;
          v94 = v23 + v100;
          sub_140388B60((unsigned int)&v89, v23 + v100, 0, 1, 1);
          v43 = *((_QWORD *)&v89 + 1);
          if ( (_DWORD)v89 == 1 )
            sub_1416C2D4B(*((_QWORD *)&v89 + 1), *(_QWORD *)v90);
          v89 = __PAIR128__(*(unsigned __int64 *)v90, *((unsigned __int64 *)&v89 + 1));
          v97 = *(_QWORD *)v90;
          v101 = v43;
          sub_141684120(*(_QWORD *)v90, v95, v42);
          *(_QWORD *)v90 = v42;
          v44 = v41;
          v45 = v42;
          if ( v41 > v101 - v42 )
          {
            sub_141688D30((unsigned int)&v89, v42, v41, 1, 1);
            v45 = *(_QWORD *)v90;
            v47 = *((_QWORD *)&v89 + 1);
            v101 = v89;
            v44 = v100;
            v46 = *(_QWORD *)v90 + v100;
            v18 = v99;
          }
          else
          {
            v46 = v94;
            v47 = v97;
            if ( !v44 )
              goto LABEL_70;
          }
          sub_141684120(v47 + v45, v98, v44);
LABEL_70:
          *(_QWORD *)v90 = v46;
          if ( v18 )
            sub_140001660(v98, v18, 1);
          v17 = v101;
          v98 = v47;
          v100 = v46;
          v15 = v83;
          continue;
        }
        v27 = v25 - 1;
        if ( *(_BYTE *)(v24 + v25-- - 2) != 10 )
          goto LABEL_44;
        v29 = v100 - 1 - v27;
        if ( v29 < 0 )
          goto LABEL_91;
        v30 = ~v27;
        v31 = 1;
        v101 = v23;
        v97 = ~v27;
        if ( v100 - 1 == v27 )
          goto LABEL_50;
        nullsub_1(v26);
        v31 = sub_140001650(v29, 1);
        if ( !v31 )
        {
          v69 = 1;
          v70 = v100 + v97;
LABEL_91:
          sub_1416C2D4B(v69, v70);
        }
        v23 = v101;
        v30 = v97;
LABEL_50:
        v86 = v29;
        v87 = v31;
        v88 = 0;
        v70 = v31;
        if ( v30 > v29 )
        {
          v104 = 1;
          sub_141688D30((unsigned int)&v86, 0, v30, 1, 1);
          v32 = v88;
          v23 = v101;
          v30 = v97;
          if ( v27 != -1 )
          {
LABEL_52:
            sub_141684120(v32 + v87, v27 + v24, v30);
            v30 = v97;
            v23 = v101;
          }
        }
        else
        {
          v32 = 0;
          if ( v27 != -1 )
            goto LABEL_52;
        }
        v33 = v32 + v30;
        v88 = v33;
        v34 = v100;
        if ( v100 > v27 + v86 - v32 + 1 )
        {
          v104 = 1;
          sub_141688D30((unsigned int)&v86, v33, v100, 1, 1);
          v33 = v88;
          v34 = v100;
LABEL_55:
          v35 = v33;
          sub_141684120(v33 + v87, v98, v34);
          v33 = v35;
          v23 = v101;
          v34 = v100;
        }
        else if ( v100 )
        {
          goto LABEL_55;
        }
        v36 = v27 + v23;
        v37 = v94 + v36 + 1;
        v38 = v34 + v33;
        v39 = 0;
        if ( v84 >= v37 )
          v39 = v84 - v37;
        v88 = v38;
        v104 = 0;
        sub_1404BB170((unsigned int)&v89, (unsigned int)&v86, v37, (unsigned __int8)v85 + v39, v85, v67, v68);
        v12 = v89;
        v71 = _mm_loadu_si128((const __m128i *)v90);
        v72 = *(_OWORD *)&v90[16];
        v73 = *(_QWORD *)&v90[32];
        if ( (_QWORD)v89 != -1 )
        {
          v80 = v93;
          v79 = v92;
          v78 = v91;
          v75 = v71;
          v76 = v72;
          v77 = v73;
          *((_QWORD *)&v74 + 1) = *((_QWORD *)&v89 + 1);
          goto LABEL_77;
        }
        v23 = v36;
        v40 = v36 + v94;
        v84 = v36 + v94;
        LOBYTE(v40) = 1;
        v85 = v40;
        v100 = 0;
        v17 = v99;
        if ( *((_QWORD *)&v89 + 1) == -1 )
          goto LABEL_42;
        *((_QWORD *)&v74 + 1) = *((_QWORD *)&v89 + 1);
        v75 = v71;
        v76 = v72;
        v77 = v73;
LABEL_78:
        sub_140001660(v95, 0x10000, 1);
        if ( v17 )
          sub_140001660(v98, v17, 1);
LABEL_80:
        CloseHandle(hObject);
        v11 = *((void **)&v74 + 1);
        if ( v12 != -1 )
        {
LABEL_81:
          v64 = v77;
          v63 = v76;
          v62 = v75;
          *(_QWORD *)(a1 + 96) = v80;
          *(_OWORD *)(a1 + 80) = v79;
          *(__m128i *)(a1 + 64) = v78;
          *(_QWORD *)(a1 + 56) = v64;
          v48 = _mm_load_si128(&v62);
          *(_OWORD *)(a1 + 40) = v63;
          *(__m128i *)(a1 + 24) = v48;
          goto LABEL_82;
        }
LABEL_84:
        v64 = v77;
        v49 = _mm_load_si128(&v75);
        v63 = v76;
        v62 = v49;
        if ( v11 != (void *)-1LL )
        {
          *(_QWORD *)(a1 + 96) = v64;
          v50 = v62;
          *(_OWORD *)(a1 + 80) = v63;
          *(__m128i *)(a1 + 64) = v50;
          *(_QWORD *)(a1 + 8) = v81;
          *(_QWORD *)(a1 + 16) = v82;
          *(_QWORD *)(a1 + 24) = *((_QWORD *)&v7 + 1);
          *(__m128i *)(a1 + 32) = _mm_load_si128(&v53);
          *(_QWORD *)(a1 + 48) = v54;
          *(_QWORD *)(a1 + 56) = v11;
          *(_QWORD *)a1 = 0;
          v105 = 1;
          *(_QWORD *)&v6 = sub_1400104F0(&v58);
          return v6;
        }
        v71.m128i_i64[0] = a2;
        v71.m128i_i64[1] = a3;
        *(_QWORD *)&v74 = &v71;
        *((_QWORD *)&v74 + 1) = sub_14148F3A0;
        sub_14149C0F0((char *)&v89 + 8, &unk_141757BDB, &v74);
        v11 = *((void **)&v89 + 1);
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v90[32];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v90[16];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)v90;
        v51 = v92;
        *(__m128i *)(a1 + 64) = _mm_loadu_si128(&v91);
        *(_OWORD *)(a1 + 80) = v51;
        *(_QWORD *)(a1 + 96) = v93;
        v12 = 9;
LABEL_82:
        *(_QWORD *)(a1 + 8) = v12;
        v14 = 16;
LABEL_13:
        *(_QWORD *)(a1 + v14) = v11;
        *(_QWORD *)a1 = 1;
        v105 = 0;
        *(_QWORD *)&v6 = sub_1400104F0(&v58);
        *((_QWORD *)&v6 + 1) = v81;
        if ( !v81 )
          return v6;
LABEL_16:
        *(_QWORD *)&v6 = sub_140001660(v82, *((_QWORD *)&v6 + 1), 1);
        return v6;
    }
  }
}
