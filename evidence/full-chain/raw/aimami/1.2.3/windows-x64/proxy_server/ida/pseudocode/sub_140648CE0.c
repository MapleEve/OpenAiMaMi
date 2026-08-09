// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140648ce0  size: 0x9fa  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   No string refs; identical size (0x9fa) to its sibling sub_140649D90. Consistent with two
//   monomorphized instantiations of the same generic async route-handler wrapper (e.g. Handler::call
//   glue for two different endpoint futures) -- pure control-flow/Future-polling glue with no embedded
//   literals.
//
// Referenced strings/symbols:
//   0x141684120  sub_141684120
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x1417b6298  off_1417B6298
//   0x1416c3400  sub_1416C3400
//   0x141769280  off_141769280
//   0x1416c3420  sub_1416C3420
//   0x140001660  sub_140001660
//   0x1417908d0  off_1417908D0
//   0x1417b6258  off_1417B6258
//   0x140641240  __u7b__u7b_closure_u7d__u7d__11
//   0x1405de2e0  sub_1405DE2E0
//   0x1405e7870  sub_1405E7870
//   0x1405dde20  sub_1405DDE20
//   0x140faf540  sub_140FAF540
//   0x140017140  sub_140017140
//   0x1405e15c0  sub_1405E15C0
//   0x141768568  off_141768568
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140648CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  _BYTE *v12; // rdx
  _OWORD *v13; // r15
  __int64 v14; // rbx
  __int64 (__fastcall **v15)(); // rax
  _BYTE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 (__fastcall **v23)(); // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int128 v43; // xmm3
  __int128 v44; // xmm1
  __int128 v45; // xmm6
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  _OWORD v56[9]; // [rsp+20h] [rbp-60h] BYREF
  __m256i v57; // [rsp+B0h] [rbp+30h]
  __int128 v58; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v59; // [rsp+2C8h] [rbp+248h]
  __int128 v60; // [rsp+2D8h] [rbp+258h]
  __int128 v61; // [rsp+2E8h] [rbp+268h]
  __int128 v62; // [rsp+2F8h] [rbp+278h]
  __int128 v63; // [rsp+308h] [rbp+288h]
  __int128 v64; // [rsp+318h] [rbp+298h]
  __int128 v65; // [rsp+328h] [rbp+2A8h]
  __int128 v66; // [rsp+398h] [rbp+318h]
  char v67; // [rsp+438h] [rbp+3B8h]
  __int128 v68; // [rsp+440h] [rbp+3C0h]
  __int128 v69; // [rsp+450h] [rbp+3D0h]
  __int128 v70; // [rsp+460h] [rbp+3E0h]
  __int128 v71; // [rsp+470h] [rbp+3F0h]
  __int128 v72; // [rsp+480h] [rbp+400h]
  __int128 v73; // [rsp+490h] [rbp+410h]
  __int128 v74; // [rsp+4A0h] [rbp+420h]
  __int128 v75; // [rsp+4B0h] [rbp+430h]
  __int128 v76; // [rsp+4C0h] [rbp+440h]
  __int128 v77; // [rsp+4D0h] [rbp+450h]
  __int128 v78; // [rsp+4E0h] [rbp+460h]
  __int128 v79; // [rsp+4F0h] [rbp+470h]
  __int128 v80; // [rsp+500h] [rbp+480h]
  __int128 v81; // [rsp+510h] [rbp+490h]
  __int128 v82; // [rsp+520h] [rbp+4A0h]
  __int128 v83; // [rsp+530h] [rbp+4B0h]
  __int128 v84; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v85; // [rsp+550h] [rbp+4D0h]
  __int128 v86; // [rsp+560h] [rbp+4E0h]
  __int128 v87; // [rsp+570h] [rbp+4F0h]
  __int128 v88; // [rsp+580h] [rbp+500h]
  __int128 v89; // [rsp+590h] [rbp+510h]
  __int128 v90; // [rsp+5A0h] [rbp+520h]
  __int128 v91; // [rsp+5B0h] [rbp+530h]
  __int128 v92; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v93; // [rsp+5D0h] [rbp+550h]
  __m256i v94; // [rsp+5E0h] [rbp+560h]
  __int64 v95; // [rsp+600h] [rbp+580h]
  __int64 v96; // [rsp+608h] [rbp+588h]
  __int64 v97; // [rsp+610h] [rbp+590h]
  __int64 v98; // [rsp+618h] [rbp+598h]
  _OWORD *v99; // [rsp+620h] [rbp+5A0h]
  _BYTE *v100; // [rsp+628h] [rbp+5A8h]
  __int64 v101; // [rsp+630h] [rbp+5B0h]
  __int64 v102; // [rsp+638h] [rbp+5B8h]

  v102 = -2; /*0x140648cfe*/
  v5 = a2; /*0x140648d0c*/
  v7 = *(unsigned __int8 *)(a2 + 584); /*0x140648d12*/
  v101 = a2; /*0x140648d27*/
  switch ( v7 ) /*0x140648d2e*/
  {
    case 0LL: /*0x140648d2e*/
      *(_DWORD *)(a2 + 587) = 0x10000; /*0x140648d30*/
      *(_BYTE *)(a2 + 586) = 1; /*0x140648d3b*/
      sub_141684120(a2 + 288, a2, 224); /*0x140648d53*/
      *(_BYTE *)(v5 + 585) = 1; /*0x140648d58*/
      *(_OWORD *)(v5 + 512) = *(_OWORD *)(v5 + 224); /*0x140648d68*/
      *(_QWORD *)(v5 + 528) = v5 + 240; /*0x140648d77*/
      nullsub_1(v8); /*0x140648d7e*/
      v9 = sub_140001650(16, 8); /*0x140648d8d*/
      if ( !v9 ) /*0x140648d95*/
        sub_1416C2D31(8, 16); /*0x14064968a*/
      v10 = v9; /*0x140648d9b*/
      *(_QWORD *)v9 = v5 + 240; /*0x140648d9e*/
      *(_BYTE *)(v9 + 8) = 0; /*0x140648da1*/
      *(_QWORD *)(v5 + 592) = v9; /*0x140648da5*/
      v11 = &off_1417B6298; /*0x140648dac*/
      *(_QWORD *)(v5 + 600) = &off_1417B6298; /*0x140648db3*/
      goto LABEL_7; /*0x140648dba*/
    case 1LL: /*0x140648d2e*/
      sub_1416C3400(&off_141769280, a2, a3, a4); /*0x1406496a7*/
    case 2LL: /*0x140648d2e*/
      sub_1416C3420(&off_141769280, a2, a3, a4); /*0x140649699*/
    case 3LL: /*0x140648d2e*/
      v10 = *(_QWORD *)(a2 + 592); /*0x140648dfa*/
      v11 = *(__int64 (__fastcall ***)())(v5 + 600); /*0x140648e01*/
LABEL_7:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v11[3])(&v58, v10, a3); /*0x140648e08*/
      if ( !(_QWORD)v58 ) /*0x140648e1e*/
      {
        *(_QWORD *)a1 = -1; /*0x140649346*/
        v31 = 3; /*0x14064934d*/
        goto LABEL_46; /*0x14064934f*/
      }
      v83 = v60; /*0x140648e39*/
      v82 = v59; /*0x140648e40*/
      v81 = v58; /*0x140648e47*/
      v100 = *(_BYTE **)(v101 + 592); /*0x140648e5c*/
      v99 = *(_OWORD **)(v101 + 600); /*0x140648e6a*/
      if ( *(_QWORD *)v99 ) /*0x140648e71*/
        (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x140648e80*/
      v16 = v100; /*0x140648e83*/
      v17 = *((_QWORD *)v99 + 1); /*0x140648e91*/
      if ( v17 ) /*0x140648e98*/
        sub_140001660(v100, v17, *((_QWORD *)v99 + 2)); /*0x140648e9e*/
      v18 = v101; /*0x140648ea3*/
      *(_BYTE *)(v101 + 588) = 1; /*0x140648eaa*/
      v19 = v82; /*0x140648eb8*/
      v20 = v83; /*0x140648ebf*/
      *(_OWORD *)(v18 + 536) = v81; /*0x140648ec6*/
      *(_OWORD *)(v18 + 552) = v19; /*0x140648ecd*/
      *(_OWORD *)(v18 + 568) = v20; /*0x140648ed4*/
      nullsub_1(v16); /*0x140648edb*/
      v21 = sub_140001650(16, 8); /*0x140648eea*/
      if ( !v21 ) /*0x140648ef2*/
        sub_1416C2D31(8, 16); /*0x140649678*/
      v22 = v21; /*0x140648ef8*/
      *(_QWORD *)v21 = v18 + 288; /*0x140648f02*/
      *(_BYTE *)(v21 + 8) = 0; /*0x140648f05*/
      *(_QWORD *)(v18 + 592) = v21; /*0x140648f09*/
      v23 = &off_1417908D0; /*0x140648f10*/
      *(_QWORD *)(v18 + 600) = &off_1417908D0; /*0x140648f17*/
LABEL_15:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v23[3])(&v58, v22, a3); /*0x140648f2e*/
      if ( (_DWORD)v58 == -1 ) /*0x140648f43*/
      {
        *(_QWORD *)a1 = -1; /*0x140649338*/
        v31 = 4; /*0x14064933f*/
        goto LABEL_46; /*0x140649341*/
      }
      v80 = v63; /*0x140648f50*/
      v79 = v62; /*0x140648f5e*/
      v78 = v61; /*0x140648f81*/
      v77 = v60; /*0x140648f88*/
      v76 = v59; /*0x140648f8f*/
      v75 = v58; /*0x140648f96*/
      v100 = *(_BYTE **)(v101 + 592); /*0x140648fab*/
      v99 = *(_OWORD **)(v101 + 600); /*0x140648fb9*/
      if ( *(_QWORD *)v99 ) /*0x140648fc0*/
        (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x140648fcf*/
      v24 = *((_QWORD *)v99 + 1); /*0x140648fe0*/
      if ( v24 ) /*0x140648fe7*/
        sub_140001660(v100, v24, *((_QWORD *)v99 + 2)); /*0x140648fed*/
      v25 = v101; /*0x140648ff2*/
      *(_BYTE *)(v101 + 587) = 1; /*0x140648ff9*/
      v26 = v76; /*0x140649008*/
      v27 = v77; /*0x14064900f*/
      v28 = v78; /*0x140649016*/
      *(_OWORD *)(v25 + 608) = v75; /*0x14064901d*/
      *(_OWORD *)(v25 + 624) = v26; /*0x140649025*/
      *(_OWORD *)(v25 + 640) = v27; /*0x14064902d*/
      *(_OWORD *)(v25 + 656) = v28; /*0x140649035*/
      *(_OWORD *)(v25 + 672) = v79; /*0x140649044*/
      *(_OWORD *)(v25 + 688) = v80; /*0x140649053*/
      *(_BYTE *)(v25 + 586) = 0; /*0x14064905b*/
      sub_141684120(&v58, v25 + 288, 224); /*0x140649077*/
      *(_BYTE *)(v25 + 585) = 0; /*0x14064907c*/
      v66 = *(_OWORD *)(v25 + 512); /*0x14064908c*/
      v67 = 0; /*0x140649093*/
      nullsub_1(v29); /*0x14064909a*/
      v30 = sub_140001650(392, 8); /*0x1406490a9*/
      if ( !v30 ) /*0x1406490b1*/
        sub_1416C2D31(8, 392); /*0x140649666*/
      v14 = v30; /*0x1406490b7*/
      sub_141684120(v30, &v58, 392); /*0x1406490ca*/
      *(_QWORD *)(v25 + 592) = v14; /*0x1406490cf*/
      v15 = &off_1417B6258; /*0x1406490d6*/
      *(_QWORD *)(v25 + 600) = &off_1417B6258; /*0x1406490dd*/
LABEL_22:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v15[3])(&v58, v14, a3); /*0x1406490e4*/
      if ( (_DWORD)v58 == 1 ) /*0x1406490fc*/
      {
        *(_QWORD *)a1 = -1; /*0x1406490fe*/
        v31 = 5; /*0x140649105*/
        goto LABEL_46; /*0x140649107*/
      }
      v32 = *((_QWORD *)&v58 + 1); /*0x14064910c*/
      v92 = v59; /*0x14064911a*/
      v93 = v60; /*0x140649128*/
      v100 = *(_BYTE **)(v101 + 592); /*0x14064913d*/
      v99 = *(_OWORD **)(v101 + 600); /*0x14064914b*/
      if ( *(_QWORD *)v99 ) /*0x140649152*/
        (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x140649161*/
      v33 = *((_QWORD *)v99 + 1); /*0x140649172*/
      if ( v33 ) /*0x140649179*/
        sub_140001660(v100, v33, *((_QWORD *)v99 + 2)); /*0x14064917f*/
      v5 = v101; /*0x140649187*/
      if ( v32 ) /*0x14064918e*/
      {
        v13 = (_OWORD *)(v101 + 592); /*0x140649194*/
        v94.m256i_i64[3] = v93; /*0x1406491a2*/
        *(_OWORD *)&v94.m256i_u64[1] = v92; /*0x1406491b0*/
        v97 = v32; /*0x1406491b7*/
        v94.m256i_i64[0] = v32; /*0x1406491be*/
        *(_DWORD *)(v101 + 587) = 0; /*0x1406491c5*/
        v34 = *(_OWORD *)(v5 + 536); /*0x1406491d0*/
        v35 = *(_OWORD *)(v5 + 552); /*0x1406491d8*/
        v56[8] = *(_OWORD *)(v5 + 568); /*0x1406491e8*/
        v56[7] = v35; /*0x1406491ec*/
        v56[6] = v34; /*0x1406491f0*/
        v36 = *(_OWORD *)(v5 + 608); /*0x1406491f4*/
        v37 = *(_OWORD *)(v5 + 640); /*0x140649204*/
        v38 = *(_OWORD *)(v5 + 656); /*0x14064920c*/
        v56[1] = *(_OWORD *)(v5 + 624); /*0x140649214*/
        v56[2] = v37; /*0x140649218*/
        v56[3] = v38; /*0x14064921c*/
        v56[4] = *(_OWORD *)(v5 + 672); /*0x140649228*/
        v56[5] = *(_OWORD *)(v5 + 688); /*0x140649234*/
        v56[0] = v36; /*0x140649238*/
        v57 = v94; /*0x14064924a*/
        sub_141684120(v5 + 592, v56, 656); /*0x14064925f*/
        v12 = (_BYTE *)(v5 + 1248); /*0x140649264*/
        *(_BYTE *)(v5 + 1248) = 0; /*0x14064926b*/
LABEL_30:
        v100 = v12; /*0x140649273*/
        v39 = *(_OWORD *)(v5 + 688); /*0x140649281*/
        v40 = *(_OWORD *)(v5 + 704); /*0x140649289*/
        *(_OWORD *)(v5 + 800) = *(_OWORD *)(v5 + 720); /*0x140649299*/
        *(_OWORD *)(v5 + 784) = v40; /*0x1406492a1*/
        *(_OWORD *)(v5 + 768) = v39; /*0x1406492a9*/
        v41 = v13[1]; /*0x1406492b5*/
        v42 = v13[2]; /*0x1406492ba*/
        v43 = v13[3]; /*0x1406492bf*/
        *(_OWORD *)(v5 + 816) = *v13; /*0x1406492c4*/
        *(_OWORD *)(v5 + 832) = v41; /*0x1406492cc*/
        *(_OWORD *)(v5 + 848) = v42; /*0x1406492d4*/
        *(_OWORD *)(v5 + 864) = v43; /*0x1406492dc*/
        *(_OWORD *)(v5 + 880) = v13[4]; /*0x1406492e9*/
        v99 = v13; /*0x1406492f1*/
        *(_OWORD *)(v5 + 896) = v13[5]; /*0x1406492fd*/
        *(_QWORD *)(v5 + 912) = v5 + 768; /*0x140649305*/
        v44 = *(_OWORD *)(v5 + 752); /*0x140649314*/
        *(_OWORD *)(v5 + 920) = *(_OWORD *)(v5 + 736); /*0x14064931c*/
        *(_OWORD *)(v5 + 936) = v44; /*0x140649324*/
        *(_WORD *)(v5 + 1240) = 1; /*0x14064932c*/
LABEL_34:
        v96 = v5 + 816; /*0x140649362*/
        _u7b__u7b_closure_u7d__u7d__11((__int64)&v58, v5 + 816, a3, a4); /*0x14064937a*/
        if ( (_DWORD)v58 == -1 ) /*0x140649387*/
        {
          *v100 = 3; /*0x1406494d6*/
          *(_QWORD *)a1 = -1; /*0x1406494d9*/
          v31 = 6; /*0x1406494e0*/
          goto LABEL_46; /*0x1406494e2*/
        }
        sub_1405DE2E0(v96); /*0x140649394*/
        sub_1405E7870(v101 + 768); /*0x1406493a8*/
        *v100 = 1; /*0x1406493b5*/
        v74 = v64; /*0x1406493bf*/
        v73 = v63; /*0x1406493cd*/
        v72 = v62; /*0x1406493db*/
        v71 = v61; /*0x1406493fe*/
        v70 = v60; /*0x140649405*/
        v69 = v59; /*0x14064940c*/
        v68 = v58; /*0x140649413*/
        v45 = v65; /*0x14064941a*/
        v95 = v97; /*0x140649428*/
        sub_1405DDE20(v99); /*0x140649436*/
        v90 = v74; /*0x140649443*/
        v89 = v73; /*0x140649451*/
        v88 = v72; /*0x14064945f*/
        v87 = v71; /*0x140649482*/
        v86 = v70; /*0x140649489*/
        v85 = v69; /*0x140649490*/
        v84 = v68; /*0x140649497*/
        v91 = v45; /*0x14064949e*/
        v46 = v101; /*0x1406494a5*/
        *(_BYTE *)(v101 + 590) = 0; /*0x1406494ac*/
        *(_DWORD *)(v46 + 585) = 0; /*0x1406494ba*/
        sub_1405E7870(v46 + 240); /*0x1406494c4*/
      }
      else
      {
        sub_140FAF540(&v84, &v92); /*0x1406494f5*/
        v47 = v101; /*0x1406494fb*/
        *(_BYTE *)(v101 + 590) = 0; /*0x140649502*/
        sub_140017140(v47 + 608); /*0x140649510*/
        v48 = v101; /*0x140649516*/
        *(_BYTE *)(v101 + 587) = 0; /*0x14064951d*/
        sub_1405E7870(v48 + 536); /*0x14064952b*/
        v49 = v101; /*0x140649531*/
        *(_BYTE *)(v101 + 588) = 0; /*0x140649538*/
        if ( *(_BYTE *)(v49 + 585) ) /*0x14064953f*/
        {
          v100 = *(_BYTE **)(v49 + 512); /*0x14064954f*/
          v99 = *(_OWORD **)(v49 + 520); /*0x14064955d*/
          if ( *(_QWORD *)v99 ) /*0x140649564*/
            (*(void (__fastcall **)(_BYTE *))v99)(v100); /*0x140649573*/
          v50 = *((_QWORD *)v99 + 1); /*0x140649584*/
          v49 = v101; /*0x14064958b*/
          if ( v50 ) /*0x140649592*/
            sub_140001660(v100, v50, *((_QWORD *)v99 + 2)); /*0x140649598*/
        }
        *(_BYTE *)(v49 + 585) = 0; /*0x14064959d*/
        if ( *(_BYTE *)(v49 + 586) ) /*0x1406495a4*/
          sub_1405E15C0(v101 + 288); /*0x1406495bb*/
        v51 = v101; /*0x1406495c1*/
        *(_BYTE *)(v101 + 586) = 0; /*0x1406495c8*/
        sub_1405E7870(v51 + 240); /*0x1406495d6*/
      }
      *(_OWORD *)(a1 + 112) = v91; /*0x1406495e3*/
      *(_OWORD *)(a1 + 96) = v90; /*0x1406495ee*/
      *(_OWORD *)(a1 + 80) = v89; /*0x1406495f9*/
      *(_OWORD *)(a1 + 64) = v88; /*0x140649604*/
      v52 = v84; /*0x140649608*/
      v53 = v85; /*0x14064960f*/
      v54 = v86; /*0x140649616*/
      *(_OWORD *)(a1 + 48) = v87; /*0x140649624*/
      *(_OWORD *)(a1 + 32) = v54; /*0x140649628*/
      *(_OWORD *)(a1 + 16) = v53; /*0x14064962c*/
      *(_OWORD *)a1 = v52; /*0x140649630*/
      v31 = 1; /*0x140649633*/
LABEL_46:
      *(_BYTE *)(v101 + 584) = v31; /*0x140649635*/
      return a1;
    case 4LL: /*0x140648d2e*/
      v22 = *(_QWORD *)(a2 + 592); /*0x140648f20*/
      v23 = *(__int64 (__fastcall ***)())(v5 + 600); /*0x140648f27*/
      goto LABEL_15; /*0x140648f27*/
    case 5LL: /*0x140648d2e*/
      v14 = *(_QWORD *)(a2 + 592); /*0x140648de7*/
      v15 = *(__int64 (__fastcall ***)())(a2 + 600); /*0x140648dee*/
      goto LABEL_22; /*0x140648df5*/
    case 6LL: /*0x140648d2e*/
      v12 = (_BYTE *)(a2 + 1248); /*0x140648dbc*/
      v13 = (_OWORD *)(v5 + 592); /*0x140648dcb*/
      switch ( *(_BYTE *)(v5 + 1248) ) /*0x140648de0*/
      {
        case 0: /*0x140648de0*/
          goto LABEL_30;
        case 1: /*0x140648de0*/
          v98 = v5 + 592; /*0x1406496c4*/
          sub_1416C3400(&off_141768568, v12, a3, a4); /*0x1406496d2*/
        case 2: /*0x140648de0*/
          v98 = v5 + 592; /*0x1406496ae*/
          sub_1416C3420(&off_141768568, v12, a3, a4); /*0x1406496bc*/
        case 3: /*0x140648de0*/
          v100 = (_BYTE *)(v5 + 1248); /*0x140649354*/
          v99 = (_OWORD *)(v5 + 592); /*0x14064935b*/
          goto LABEL_34; /*0x14064935b*/
      }
  }
}
