// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d63520 | name sub_140D63520
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D63520(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(); // rax
  _BYTE *v11; // rdx
  _OWORD *v12; // r15
  __m128i *v13; // rbx
  __int64 (__fastcall **v14)(); // rax
  _BYTE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 (__fastcall **v22)(); // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int64 v28; // rcx
  __m128i *v29; // rax
  char v30; // al
  __int64 v31; // rbx
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int128 v43; // xmm1
  __int128 v44; // xmm6
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __m128i v55[9]; // [rsp+20h] [rbp-60h] BYREF
  __m256i v56; // [rsp+B0h] [rbp+30h]
  __m128i v57; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v58; // [rsp+2C8h] [rbp+248h]
  __int128 v59; // [rsp+2D8h] [rbp+258h]
  __int128 v60; // [rsp+2E8h] [rbp+268h]
  __int128 v61; // [rsp+2F8h] [rbp+278h]
  __int128 v62; // [rsp+308h] [rbp+288h]
  __int128 v63; // [rsp+318h] [rbp+298h]
  __int128 v64; // [rsp+328h] [rbp+2A8h]
  __int128 v65; // [rsp+398h] [rbp+318h]
  char v66; // [rsp+438h] [rbp+3B8h]
  __m128i v67; // [rsp+440h] [rbp+3C0h]
  __int128 v68; // [rsp+450h] [rbp+3D0h]
  __int128 v69; // [rsp+460h] [rbp+3E0h]
  __int128 v70; // [rsp+470h] [rbp+3F0h]
  __int128 v71; // [rsp+480h] [rbp+400h]
  __int128 v72; // [rsp+490h] [rbp+410h]
  __int128 v73; // [rsp+4A0h] [rbp+420h]
  __m128i v74; // [rsp+4B0h] [rbp+430h]
  __int128 v75; // [rsp+4C0h] [rbp+440h]
  __int128 v76; // [rsp+4D0h] [rbp+450h]
  __int128 v77; // [rsp+4E0h] [rbp+460h]
  __int128 v78; // [rsp+4F0h] [rbp+470h]
  __int128 v79; // [rsp+500h] [rbp+480h]
  __m128i v80; // [rsp+510h] [rbp+490h]
  __int128 v81; // [rsp+520h] [rbp+4A0h]
  __int128 v82; // [rsp+530h] [rbp+4B0h]
  __m128i v83; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v84; // [rsp+550h] [rbp+4D0h]
  __int128 v85; // [rsp+560h] [rbp+4E0h]
  __int128 v86; // [rsp+570h] [rbp+4F0h]
  __int128 v87; // [rsp+580h] [rbp+500h]
  __int128 v88; // [rsp+590h] [rbp+510h]
  __int128 v89; // [rsp+5A0h] [rbp+520h]
  __int128 v90; // [rsp+5B0h] [rbp+530h]
  __int128 v91; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v92; // [rsp+5D0h] [rbp+550h]
  __m256i v93; // [rsp+5E0h] [rbp+560h]
  __int64 v94; // [rsp+600h] [rbp+580h]
  __int64 v95; // [rsp+608h] [rbp+588h]
  __int64 v96; // [rsp+610h] [rbp+590h]
  __int64 v97; // [rsp+618h] [rbp+598h]
  _OWORD *v98; // [rsp+620h] [rbp+5A0h]
  _BYTE *v99; // [rsp+628h] [rbp+5A8h]
  __int64 v100; // [rsp+630h] [rbp+5B0h]
  __int64 v101; // [rsp+638h] [rbp+5B8h]

  v101 = -2;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a2 + 584);
  v100 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 587) = 0x10000;
      *(_BYTE *)(a2 + 586) = 1;
      sub_1418F44E0((__m128i *)(a2 + 288), (const __m128i *)a2, 0xE0u);
      *(_BYTE *)(v4 + 585) = 1;
      *(_OWORD *)(v4 + 512) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 528) = v4 + 240;
      nullsub_1(v7);
      v8 = sub_140001650(16, 8);
      if ( !v8 )
        sub_141938D11(8, 16);
      v9 = v8;
      *(_QWORD *)v8 = v4 + 240;
      *(_BYTE *)(v8 + 8) = 0;
      *(_QWORD *)(v4 + 592) = v8;
      v10 = &off_141A4EF70;
      *(_QWORD *)(v4 + 600) = &off_141A4EF70;
      goto LABEL_7;
    case 1LL:
      sub_1419393E0(&off_141A496D0);
    case 2LL:
      sub_141939400(&off_141A496D0);
    case 3LL:
      v9 = *(_QWORD *)(a2 + 592);
      v10 = *(__int64 (__fastcall ***)())(v4 + 600);
LABEL_7:
      ((void (__fastcall *)(__m128i *, __int64, __int64))v10[3])(&v57, v9, a3);
      if ( !v57.m128i_i64[0] )
      {
        *(_QWORD *)a1 = -1;
        v30 = 3;
        goto LABEL_46;
      }
      v82 = v59;
      v81 = v58;
      v80 = v57;
      v99 = *(_BYTE **)(v100 + 592);
      v98 = *(_OWORD **)(v100 + 600);
      if ( *(_QWORD *)v98 )
        (*(void (__fastcall **)(_BYTE *))v98)(v99);
      v15 = v99;
      v16 = *((_QWORD *)v98 + 1);
      if ( v16 )
        sub_140001660(v99, v16, *((_QWORD *)v98 + 2));
      v17 = v100;
      *(_BYTE *)(v100 + 588) = 1;
      v18 = v81;
      v19 = v82;
      *(__m128i *)(v17 + 536) = v80;
      *(_OWORD *)(v17 + 552) = v18;
      *(_OWORD *)(v17 + 568) = v19;
      nullsub_1(v15);
      v20 = sub_140001650(16, 8);
      if ( !v20 )
        sub_141938D11(8, 16);
      v21 = v20;
      *(_QWORD *)v20 = v17 + 288;
      *(_BYTE *)(v20 + 8) = 0;
      *(_QWORD *)(v17 + 592) = v20;
      v22 = &off_141A4E968;
      *(_QWORD *)(v17 + 600) = &off_141A4E968;
LABEL_15:
      ((void (__fastcall *)(__m128i *, __int64, __int64))v22[3])(&v57, v21, a3);
      if ( v57.m128i_i32[0] == -1 )
      {
        *(_QWORD *)a1 = -1;
        v30 = 4;
        goto LABEL_46;
      }
      v79 = v62;
      v78 = v61;
      v77 = v60;
      v76 = v59;
      v75 = v58;
      v74 = v57;
      v99 = *(_BYTE **)(v100 + 592);
      v98 = *(_OWORD **)(v100 + 600);
      if ( *(_QWORD *)v98 )
        (*(void (__fastcall **)(_BYTE *))v98)(v99);
      v23 = *((_QWORD *)v98 + 1);
      if ( v23 )
        sub_140001660(v99, v23, *((_QWORD *)v98 + 2));
      v24 = v100;
      *(_BYTE *)(v100 + 587) = 1;
      v25 = v75;
      v26 = v76;
      v27 = v77;
      *(__m128i *)(v24 + 608) = v74;
      *(_OWORD *)(v24 + 624) = v25;
      *(_OWORD *)(v24 + 640) = v26;
      *(_OWORD *)(v24 + 656) = v27;
      *(_OWORD *)(v24 + 672) = v78;
      *(_OWORD *)(v24 + 688) = v79;
      *(_BYTE *)(v24 + 586) = 0;
      sub_1418F44E0(&v57, (const __m128i *)(v24 + 288), 0xE0u);
      *(_BYTE *)(v24 + 585) = 0;
      v65 = *(_OWORD *)(v24 + 512);
      v66 = 0;
      nullsub_1(v28);
      v29 = (__m128i *)sub_140001650(392, 8);
      if ( !v29 )
        sub_141938D11(8, 392);
      v13 = v29;
      sub_1418F44E0(v29, &v57, 0x188u);
      *(_QWORD *)(v24 + 592) = v13;
      v14 = &off_141A4EF10;
      *(_QWORD *)(v24 + 600) = &off_141A4EF10;
LABEL_22:
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v14[3])(&v57, v13, a3);
      if ( v57.m128i_i32[0] == 1 )
      {
        *(_QWORD *)a1 = -1;
        v30 = 5;
        goto LABEL_46;
      }
      v31 = v57.m128i_i64[1];
      v91 = v58;
      v92 = v59;
      v99 = *(_BYTE **)(v100 + 592);
      v98 = *(_OWORD **)(v100 + 600);
      if ( *(_QWORD *)v98 )
        (*(void (__fastcall **)(_BYTE *))v98)(v99);
      v32 = *((_QWORD *)v98 + 1);
      if ( v32 )
        sub_140001660(v99, v32, *((_QWORD *)v98 + 2));
      v4 = v100;
      if ( v31 )
      {
        v12 = (_OWORD *)(v100 + 592);
        v93.m256i_i64[3] = v92;
        *(_OWORD *)&v93.m256i_u64[1] = v91;
        v96 = v31;
        v93.m256i_i64[0] = v31;
        *(_DWORD *)(v100 + 587) = 0;
        v33 = *(__m128i *)(v4 + 536);
        v34 = *(__m128i *)(v4 + 552);
        v55[8] = *(__m128i *)(v4 + 568);
        v55[7] = v34;
        v55[6] = v33;
        v35 = *(__m128i *)(v4 + 608);
        v36 = *(__m128i *)(v4 + 640);
        v37 = *(__m128i *)(v4 + 656);
        v55[1] = *(__m128i *)(v4 + 624);
        v55[2] = v36;
        v55[3] = v37;
        v55[4] = *(__m128i *)(v4 + 672);
        v55[5] = *(__m128i *)(v4 + 688);
        v55[0] = v35;
        v56 = v93;
        sub_1418F44E0((__m128i *)(v4 + 592), v55, 0x290u);
        v11 = (_BYTE *)(v4 + 1248);
        *(_BYTE *)(v4 + 1248) = 0;
LABEL_30:
        v99 = v11;
        v38 = *(_OWORD *)(v4 + 688);
        v39 = *(_OWORD *)(v4 + 704);
        *(_OWORD *)(v4 + 800) = *(_OWORD *)(v4 + 720);
        *(_OWORD *)(v4 + 784) = v39;
        *(_OWORD *)(v4 + 768) = v38;
        v40 = v12[1];
        v41 = v12[2];
        v42 = v12[3];
        *(_OWORD *)(v4 + 816) = *v12;
        *(_OWORD *)(v4 + 832) = v40;
        *(_OWORD *)(v4 + 848) = v41;
        *(_OWORD *)(v4 + 864) = v42;
        *(_OWORD *)(v4 + 880) = v12[4];
        v98 = v12;
        *(_OWORD *)(v4 + 896) = v12[5];
        *(_QWORD *)(v4 + 912) = v4 + 768;
        v43 = *(_OWORD *)(v4 + 752);
        *(_OWORD *)(v4 + 920) = *(_OWORD *)(v4 + 736);
        *(_OWORD *)(v4 + 936) = v43;
        *(_WORD *)(v4 + 1240) = 1;
LABEL_34:
        v95 = v4 + 816;
        sub_140D54700(&v57, v4 + 816, a3);
        if ( v57.m128i_i32[0] == -1 )
        {
          *v99 = 3;
          *(_QWORD *)a1 = -1;
          v30 = 6;
          goto LABEL_46;
        }
        sub_140D152D0(v95);
        sub_14040DE90(v100 + 768);
        *v99 = 1;
        v73 = v63;
        v72 = v62;
        v71 = v61;
        v70 = v60;
        v69 = v59;
        v68 = v58;
        v67 = v57;
        v44 = v64;
        v94 = v96;
        sub_140D14B10((__int64)v98);
        v89 = v73;
        v88 = v72;
        v87 = v71;
        v86 = v70;
        v85 = v69;
        v84 = v68;
        v83 = v67;
        v90 = v44;
        v45 = v100;
        *(_BYTE *)(v100 + 590) = 0;
        *(_DWORD *)(v45 + 585) = 0;
        sub_14040DE90(v45 + 240);
      }
      else
      {
        sub_1411BF060(&v83, &v91);
        v46 = v100;
        *(_BYTE *)(v100 + 590) = 0;
        sub_14029C800(v46 + 608);
        v47 = v100;
        *(_BYTE *)(v100 + 587) = 0;
        sub_14040DE90(v47 + 536);
        v48 = v100;
        *(_BYTE *)(v100 + 588) = 0;
        if ( *(_BYTE *)(v48 + 585) )
        {
          v99 = *(_BYTE **)(v48 + 512);
          v98 = *(_OWORD **)(v48 + 520);
          if ( *(_QWORD *)v98 )
            (*(void (__fastcall **)(_BYTE *))v98)(v99);
          v49 = *((_QWORD *)v98 + 1);
          v48 = v100;
          if ( v49 )
            sub_140001660(v99, v49, *((_QWORD *)v98 + 2));
        }
        *(_BYTE *)(v48 + 585) = 0;
        if ( *(_BYTE *)(v48 + 586) )
          sub_140407F80(v100 + 288);
        v50 = v100;
        *(_BYTE *)(v100 + 586) = 0;
        sub_14040DE90(v50 + 240);
      }
      *(_OWORD *)(a1 + 112) = v90;
      *(_OWORD *)(a1 + 96) = v89;
      *(_OWORD *)(a1 + 80) = v88;
      *(_OWORD *)(a1 + 64) = v87;
      v51 = v83;
      v52 = v84;
      v53 = v85;
      *(_OWORD *)(a1 + 48) = v86;
      *(_OWORD *)(a1 + 32) = v53;
      *(_OWORD *)(a1 + 16) = v52;
      *(__m128i *)a1 = v51;
      v30 = 1;
LABEL_46:
      *(_BYTE *)(v100 + 584) = v30;
      return a1;
    case 4LL:
      v21 = *(_QWORD *)(a2 + 592);
      v22 = *(__int64 (__fastcall ***)())(v4 + 600);
      goto LABEL_15;
    case 5LL:
      v13 = *(__m128i **)(a2 + 592);
      v14 = *(__int64 (__fastcall ***)())(a2 + 600);
      goto LABEL_22;
    case 6LL:
      v11 = (_BYTE *)(a2 + 1248);
      v12 = (_OWORD *)(v4 + 592);
      switch ( *(_BYTE *)(v4 + 1248) )
      {
        case 0:
          goto LABEL_30;
        case 1:
          v97 = v4 + 592;
          sub_1419393E0(&off_141A48658);
        case 2:
          v97 = v4 + 592;
          sub_141939400(&off_141A48658);
        case 3:
          v99 = (_BYTE *)(v4 + 1248);
          v98 = (_OWORD *)(v4 + 592);
          goto LABEL_34;
      }
  }
}
