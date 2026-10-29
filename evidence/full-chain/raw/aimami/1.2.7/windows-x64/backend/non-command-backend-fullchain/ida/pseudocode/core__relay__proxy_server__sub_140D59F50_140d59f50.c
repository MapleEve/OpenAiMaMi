// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d59f50 | name sub_140D59F50
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int8 *__fastcall sub_140D59F50(__int8 *a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v3; // r14
  __int8 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  __m128i *v10; // rax
  __m128i *v11; // rdi
  __int64 (__fastcall **v12)(); // rax
  const __m128i *v13; // rdi
  unsigned __int64 *v14; // rbx
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  char *v19; // r14
  __int64 *v20; // rbx
  int v21; // r15d
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  char *v25; // r14
  char v26; // al
  _WORD *v27; // rax
  __int64 v28; // rcx
  void *v29; // rax
  __int64 v30; // rcx
  void *v31; // rax
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rdi
  __int128 v35; // xmm6
  const __m128i *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  char v40; // al
  __m128i v42[14]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v43; // [rsp+130h] [rbp+B0h] BYREF
  _OWORD v44[13]; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v45; // [rsp+210h] [rbp+190h]
  __int64 v46; // [rsp+218h] [rbp+198h]
  const __m128i *v47; // [rsp+220h] [rbp+1A0h]
  __int8 v48; // [rsp+29Ch] [rbp+21Ch]
  char v49; // [rsp+318h] [rbp+298h]
  __m128i v50; // [rsp+320h] [rbp+2A0h]
  __int128 v51; // [rsp+330h] [rbp+2B0h]
  __int128 v52; // [rsp+340h] [rbp+2C0h]
  __int64 v53; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v54; // [rsp+358h] [rbp+2D8h]
  __int128 v55; // [rsp+368h] [rbp+2E8h]
  __int128 v56; // [rsp+378h] [rbp+2F8h]
  __int128 v57; // [rsp+388h] [rbp+308h]
  __int128 v58; // [rsp+398h] [rbp+318h]
  __int128 v59; // [rsp+3A8h] [rbp+328h]
  __int64 v60; // [rsp+3B8h] [rbp+338h]
  __int128 v61; // [rsp+3C0h] [rbp+340h]
  __int128 v62; // [rsp+3D0h] [rbp+350h]
  __int128 v63; // [rsp+3E0h] [rbp+360h]
  __int128 v64; // [rsp+3F0h] [rbp+370h]
  __int128 v65; // [rsp+400h] [rbp+380h]
  __int128 v66; // [rsp+410h] [rbp+390h]
  __int128 v67; // [rsp+420h] [rbp+3A0h]
  __int64 v68; // [rsp+430h] [rbp+3B0h]
  __int128 v69; // [rsp+440h] [rbp+3C0h]
  __int128 v70; // [rsp+450h] [rbp+3D0h]
  __int128 v71; // [rsp+460h] [rbp+3E0h]
  __int128 v72; // [rsp+470h] [rbp+3F0h]
  __int128 v73; // [rsp+480h] [rbp+400h]
  __int128 v74; // [rsp+490h] [rbp+410h]
  __int64 v75; // [rsp+4A0h] [rbp+420h]
  _OWORD v76[3]; // [rsp+4B0h] [rbp+430h] BYREF
  __m128i v77; // [rsp+4E0h] [rbp+460h]
  __int128 v78; // [rsp+4F0h] [rbp+470h]
  __int128 v79; // [rsp+500h] [rbp+480h]
  __int64 v80; // [rsp+528h] [rbp+4A8h]
  __int64 v81; // [rsp+530h] [rbp+4B0h] BYREF
  _BYTE v82[24]; // [rsp+538h] [rbp+4B8h] BYREF
  __int8 *v83; // [rsp+550h] [rbp+4D0h]
  __int8 *v84; // [rsp+558h] [rbp+4D8h]
  __m256i v85; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v86; // [rsp+588h] [rbp+508h]
  __int64 v87; // [rsp+590h] [rbp+510h]
  int v88; // [rsp+59Ch] [rbp+51Ch]
  __int64 v89; // [rsp+5A0h] [rbp+520h] BYREF
  _WORD *v90; // [rsp+5A8h] [rbp+528h]
  __int64 v91; // [rsp+5B0h] [rbp+530h]
  unsigned __int64 *v92; // [rsp+5B8h] [rbp+538h]
  __m256i v93; // [rsp+5C0h] [rbp+540h] BYREF
  __int8 *v94; // [rsp+5F0h] [rbp+570h]
  const __m128i *v95; // [rsp+5F8h] [rbp+578h]
  char v96; // [rsp+606h] [rbp+586h]
  char v97; // [rsp+607h] [rbp+587h]
  __int64 v98; // [rsp+608h] [rbp+588h]

  v98 = -2;
  v3 = a2;
  v4 = a1;
  v5 = a2[18].m128i_u8[0];
  v95 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = a3;
      sub_1418F44E0(v42, a2, 0xE0u);
      v7 = v3[14].m128i_i64[0];
      v8 = v3[14].m128i_i64[1];
      sub_1418F44E0(&v43, v3, 0xE0u);
      *(__int32 *)((char *)v3[18].m128i_i32 + 1) = 1;
      v86 = v7;
      v45 = v7;
      v87 = v8;
      v46 = v8;
      v47 = v3 + 15;
      v49 = 0;
      nullsub_1(v9);
      v10 = (__m128i *)sub_140001650(496, 8);
      if ( !v10 )
        sub_141938D11(8, 496);
      v11 = v10;
      sub_1418F44E0(v10, &v43, 0x1F0u);
      v3[18].m128i_i64[1] = (__int64)v11;
      v12 = &off_141A4E440;
      v3[19].m128i_i64[0] = (__int64)&off_141A4E440;
      a3 = v6;
      goto LABEL_5;
    case 1LL:
      sub_1419393E0(&off_141A496D0);
    case 2LL:
      sub_141939400(&off_141A496D0);
    case 3LL:
      v11 = (__m128i *)a2[18].m128i_i64[1];
      v12 = (__int64 (__fastcall **)())a2[19].m128i_i64[0];
LABEL_5:
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12[3])(&v43, v11, a3);
      if ( v43.m128i_i64[0] )
      {
        v79 = v44[1];
        v78 = v44[0];
        v77 = v43;
        v94 = (__int8 *)v95[18].m128i_i64[1];
        v92 = (unsigned __int64 *)v95[19].m128i_i64[0];
        if ( *v92 )
          ((void (__fastcall *)(__int8 *))*v92)(v94);
        a1 = v94;
        v13 = v95;
        v14 = &v95[18].m128i_u64[1];
        a2 = (const __m128i *)v92[1];
        if ( a2 )
          sub_140001660(v94, a2, v92[2]);
        v52 = v79;
        v51 = v78;
        v50 = v77;
        *(__int16 *)((char *)v13[18].m128i_i16 + 1) = 0;
        v15 = v77;
        v16 = v78;
        *((_OWORD *)v14 + 2) = v79;
        *((_OWORD *)v14 + 1) = v16;
        *(__m128i *)v14 = v15;
        v94 = &v13[21].m128i_i8[8];
        v13[21].m128i_i8[8] = 0;
LABEL_12:
        v17 = *(_OWORD *)v14;
        v18 = *((_OWORD *)v14 + 1);
        v92 = v14;
        v76[2] = *((_OWORD *)v14 + 2);
        v76[1] = v18;
        v76[0] = v17;
        v19 = (char *)(v17 + 16);
        LOBYTE(a1) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v17 + 16), 1, 0) )
          sub_141937480((volatile void *)(v17 + 16));
        v20 = off_1421E7210;
        if ( 2 * *off_1421E7210 )
        {
          v21 = sub_141938160(a1);
          LOBYTE(v21) = v21 ^ 1;
        }
        else
        {
          v21 = 0;
        }
        v96 = *(_BYTE *)(v17 + 17);
        v93.m256i_i64[1] = v17 + 16;
        v93.m256i_i8[16] = v21;
        v93.m256i_i64[0] = v96 != 0;
        if ( v96 )
        {
          LOWORD(a2) = 500;
          sub_140DAFCE0((unsigned int)&v53, (_DWORD)a2, (unsigned int)aStatePoisoned, 14, (__int64)aProxyUpstream, 14);
          if ( !(_BYTE)v21 && 2 * *v20 && !(unsigned __int8)sub_141938160(v22) )
            *(_BYTE *)(v17 + 17) = 1;
          v23 = *v19;
          *v19 = 0;
          if ( v23 == 2 )
            WakeByAddressSingle(v19);
          sub_14040DE90(v76);
        }
        else
        {
          v88 = v21;
          v80 = v17 + 16;
          sub_140DCB2E0(&v43, v17 + 24);
          v25 = (char *)(v17 + 16);
          if ( !(_BYTE)v88 && 2 * *v20 && !(unsigned __int8)sub_141938160(v24) )
            *(_BYTE *)(v17 + 17) = 1;
          v26 = *v25;
          *v25 = 0;
          if ( v26 == 2 )
            WakeByAddressSingle((PVOID)(v17 + 16));
          *(_QWORD *)v82 = 0;
          *(_QWORD *)&v82[16] = 0;
          nullsub_1(v24);
          v27 = (_WORD *)sub_140001650(2, 1);
          if ( !v27 )
            sub_141938D2B(1, 2);
          *v27 = 27503;
          v89 = 2;
          v90 = v27;
          v91 = 2;
          v93.m256i_i16[0] = 257;
          sub_140E72AA0(&v85, v82, &v89, &v93);
          if ( v85.m256i_i8[0] != -1 )
            sub_140409B40(&v85);
          nullsub_1(v28);
          v29 = (void *)sub_140001650(14, 1);
          if ( !v29 )
            sub_141938D2B(1, 14);
          qmemcpy(v29, "router_enabled", 14);
          v89 = 14;
          v90 = v29;
          v91 = 14;
          v93.m256i_i8[0] = 1;
          v93.m256i_i8[1] = v48;
          sub_140E72AA0(&v85, v82, &v89, &v93);
          if ( v85.m256i_i8[0] != -1 )
            sub_140409B40(&v85);
          nullsub_1(v30);
          v31 = (void *)sub_140001650(22, 1);
          if ( !v31 )
            sub_141938D2B(1, 22);
          qmemcpy(v31, "active_codex_providers", 22);
          v89 = 22;
          v90 = v31;
          v91 = 22;
          v97 = 1;
          sub_140C100F0(&v93, (char *)v44 + 8);
          if ( v93.m256i_i8[0] == -1 )
          {
            v81 = v93.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_6,
              43,
              (unsigned int)&v81,
              (unsigned int)&off_141A498A8,
              (__int64)&off_141A48180);
          }
          v85 = v93;
          v97 = 0;
          sub_140E72AA0(&v93, v82, &v89, &v85);
          if ( v93.m256i_i8[0] != -1 )
            sub_140409B40(&v93);
          nullsub_1(v32);
          v33 = (void *)sub_140001650(15, 1);
          if ( !v33 )
            sub_141938D2B(1, 15);
          qmemcpy(v33, "providers_count", 15);
          v89 = 15;
          v90 = v33;
          v91 = 15;
          v93.m256i_i8[0] = 2;
          v93.m256i_i64[1] = 0;
          v93.m256i_i64[2] = *(_QWORD *)&v44[0];
          sub_140E72AA0(&v85, v82, &v89, &v93);
          if ( v85.m256i_i8[0] != -1 )
            sub_140409B40(&v85);
          *(_OWORD *)((char *)&v85.m256i_u32[1] + 3) = *(_OWORD *)v82;
          *(__int64 *)((char *)&v85.m256i_i64[2] + 7) = *(_QWORD *)&v82[16];
          v93.m256i_i8[0] = 5;
          *(_OWORD *)&v93.m256i_i8[1] = *(_OWORD *)v85.m256i_i8;
          *(_OWORD *)&v93.m256i_u64[2] = *(_OWORD *)&v82[8];
          sub_140DC30A0(&v53, &v93);
          sub_1407ADB20(&v43);
          sub_14040DE90(v76);
        }
        v34 = v53;
        v69 = v54;
        v70 = v55;
        v71 = v56;
        v72 = v57;
        v73 = v58;
        v74 = v59;
        v75 = v60;
        v35 = v61;
        *v94 = 1;
        if ( v34 == -1 )
        {
          *(_QWORD *)v4 = -1;
          v40 = 4;
        }
        else
        {
          v68 = v75;
          v67 = v74;
          v66 = v73;
          v65 = v72;
          v64 = v71;
          v63 = v70;
          v62 = v69;
          v36 = v95;
          v95[18].m128i_i8[2] = 0;
          *(__int16 *)((char *)&v36[18].m128i_i16[1] + 1) = 0;
          sub_14040DE90(&v36[15]);
          *(_QWORD *)v4 = v34;
          v37 = v63;
          v38 = v64;
          v39 = v65;
          *(_OWORD *)(v4 + 8) = v62;
          *(_OWORD *)(v4 + 24) = v37;
          *(_OWORD *)(v4 + 40) = v38;
          *(_OWORD *)(v4 + 56) = v39;
          *(_OWORD *)(v4 + 72) = v66;
          *(_OWORD *)(v4 + 88) = v67;
          *((_QWORD *)v4 + 13) = v68;
          *((_OWORD *)v4 + 7) = v35;
          v40 = 1;
        }
      }
      else
      {
        *(_QWORD *)v4 = -1;
        v40 = 3;
      }
      v95[18].m128i_i8[0] = v40;
      return v4;
    case 4LL:
      v94 = &a2[21].m128i_i8[8];
      v14 = &a2[18].m128i_u64[1];
      if ( a2[21].m128i_i8[8] )
      {
        if ( a2[21].m128i_i8[8] == 1 )
        {
          v84 = v94;
          v83 = &a2[18].m128i_i8[8];
          sub_1419393E0(&off_141A481C0);
        }
        v84 = v94;
        v83 = &a2[18].m128i_i8[8];
        sub_141939400(&off_141A481C0);
      }
      goto LABEL_12;
  }
}
