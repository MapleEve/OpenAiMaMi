// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1407b6190  size: 0x11b0  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Same reference set as sub_1407B2DD0 (Unfold-poll-after-None guard, unreachable-code guard,
//   char_boundary assertion); one of the four SSE/chunk-decoder state-machine instantiations for this
//   module (largest of the four at 0x11b0, likely the variant with the most branching, e.g. handling
//   both data: and event: SSE lines).
//
// Referenced strings/symbols:
//   0x1416c3400  sub_1416C3400
//   0x141787dc0  off_141787DC0
//   0x1416c3420  sub_1416C3420
//   0x1416c32a0  sub_1416C32A0
//   0x141790658  aUnfoldMustNotB   "Unfold must not be polled after it returned `Poll::Ready(None)`"
//   0x141790710  off_141790710
//   0x1417b3efa  aInternalErrorE_128   "internal error: entered unreachable code"
//   0x1417b54a8  off_1417B54A8
//   0x1406caab0  sub_1406CAAB0
//   0x1405b02e0  sub_1405B02E0
//   0x140001660  sub_140001660
//   0x1407b7bd0  sub_1407B7BD0
//   0x141031f10  sub_141031F10
//   0x14149c0f0  sub_14149C0F0
//   0x141787e5a  unk_141787E5A
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x141475210  sub_141475210
//   0x1417a9e28  off_1417A9E28
//   0x1406cb7b0  sub_1406CB7B0
//   0x1414a3c90  sub_1414A3C90
//   0x141787e08  unk_141787E08
//   0x1414ac520  sub_1414AC520
//   0x141787e10  unk_141787E10
//   0x1405e95f0  sub_1405E95F0
//   0x1407bc790  sub_1407BC790
//   0x1416c2f60  sub_1416C2F60
//   0x141787dd8  off_141787DD8
//   0x1416c2d4b  sub_1416C2D4B
//   0x141684120  sub_141684120
//   0x1416c32f0  sub_1416C32F0
//   0x1417a66a0  off_1417A66A0
//   0x14179c750  aAssertionFaile_18   "assertion failed: self.is_char_boundary(end)"
//   0x141787df0  off_141787DF0
//   0x14149c460  sub_14149C460
//   0x1409d53c0  sub_1409D53C0
//   0x1409a3040  sub_1409A3040
//   0x141688d30  sub_141688D30
//   0x141447850  sub_141447850
//   0x141788f08  off_141788F08
//   0x1409a2dd0  sub_1409A2DD0
//   0x1409d50f0  sub_1409D50F0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407B6190(__int64 a1, __int64 *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // rdi
  __int64 v5; // r12
  __int64 (__fastcall **v6)(); // r14
  __int64 v7; // r15
  __int64 *v8; // rbx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 *v23; // r13
  unsigned __int64 v24; // rdx
  __int128 v25; // kr00_16
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rax
  char v31; // bl
  void (__fastcall *v32)(char *, __int64, _QWORD); // rax
  __int64 *v33; // rdx
  __int64 v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // r8
  __int128 v39; // kr10_16
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdx
  _BYTE *v48; // rbx
  __int64 v49; // rdi
  __int64 (__fastcall ***v50)(); // r15
  __int64 (__fastcall ***v51)(); // r14
  __int64 v52; // r12
  __int64 (__fastcall *v53)(); // r15
  __int64 *v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // r13
  __int64 (__fastcall *v57)(); // rdx
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r13
  __int64 v63; // r14
  __int64 v64; // r14
  __int64 v65; // rbx
  __int64 v66; // r15
  __int64 v67; // rbx
  __int64 (__fastcall **v68)(); // rdx
  __int64 v69; // rdi
  __int64 *v70; // rcx
  __int128 v71; // xmm0
  __int64 *v73; // rcx
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int64 v77; // rax
  __int64 v78; // rcx
  _BYTE *v79; // rdx
  __int128 v80; // [rsp+D0h] [rbp+50h]
  __int128 v81; // [rsp+E0h] [rbp+60h]
  __int128 v82; // [rsp+F0h] [rbp+70h]
  __int128 v83; // [rsp+100h] [rbp+80h]
  __int128 v84; // [rsp+110h] [rbp+90h]
  __int128 v85; // [rsp+120h] [rbp+A0h]
  __int64 v86; // [rsp+130h] [rbp+B0h]
  __int128 v87; // [rsp+1B0h] [rbp+130h]
  __int64 v88; // [rsp+1C8h] [rbp+148h]
  _BYTE v89[120]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v90; // [rsp+248h] [rbp+1C8h]
  _BYTE *v91; // [rsp+258h] [rbp+1D8h]
  char v92; // [rsp+260h] [rbp+1E0h]
  __int64 v93; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v94; // [rsp+270h] [rbp+1F0h]
  __int128 v95; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 (__fastcall **v96)(); // [rsp+290h] [rbp+210h] BYREF
  __int64 (__fastcall *v97)(); // [rsp+298h] [rbp+218h]
  __int128 v98; // [rsp+2A0h] [rbp+220h]
  __int64 v99; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v100; // [rsp+2B8h] [rbp+238h]
  __int64 v101; // [rsp+2C0h] [rbp+240h]
  __int64 v102; // [rsp+2C8h] [rbp+248h]
  _QWORD *v103; // [rsp+2D0h] [rbp+250h]
  __int64 v104; // [rsp+2D8h] [rbp+258h]
  _BYTE *v105; // [rsp+2E0h] [rbp+260h]
  __int64 v106; // [rsp+2E8h] [rbp+268h]
  char v107; // [rsp+2F7h] [rbp+277h]
  __int64 v108; // [rsp+2F8h] [rbp+278h]
  __int64 *v109; // [rsp+300h] [rbp+280h]
  char v110; // [rsp+30Fh] [rbp+28Fh]
  __int64 v111; // [rsp+310h] [rbp+290h]
  char v112; // [rsp+31Eh] [rbp+29Eh]
  char v113; // [rsp+31Fh] [rbp+29Fh]
  __int64 v114; // [rsp+320h] [rbp+2A0h]

  v114 = -2; /*0x1407b61ab*/
  v8 = a2; /*0x1407b61b6*/
  v10 = *a2; /*0x1407b61bc*/
  v11 = *a2 == 0; /*0x1407b61bf*/
  v109 = a2; /*0x1407b61c2*/
  if ( !v11 ) /*0x1407b61c9*/
  {
    if ( (_DWORD)v10 == 1 ) /*0x1407b632e*/
    {
      v16 = (__int64)a2 + 169; /*0x1407b6334*/
      v20 = *((unsigned __int8 *)v8 + 169); /*0x1407b633b*/
      v103 = v8 + 1; /*0x1407b6346*/
      v105 = (char *)v8 + 169; /*0x1407b635b*/
      switch ( v20 ) /*0x1407b6362*/
      {
        case 0LL: /*0x1407b6362*/
          goto LABEL_6;
        case 1LL: /*0x1407b6362*/
          sub_1416C3400(&off_141787DC0, v16, a3, a4); /*0x1407b7306*/
        case 2LL: /*0x1407b6362*/
          sub_1416C3420(&off_141787DC0, v16, a3, a4); /*0x1407b72f8*/
        case 3LL: /*0x1407b6362*/
          v22 = *(_QWORD *)v8[20]; /*0x1407b63bb*/
          goto LABEL_11; /*0x1407b63bb*/
      }
    }
    sub_1416C32A0(aUnfoldMustNotB, 63, &off_141790710); /*0x1407b714d*/
  }
  v12 = a2[1]; /*0x1407b61cf*/
  *a2 = 2; /*0x1407b61d3*/
  if ( v12 < 0 ) /*0x1407b61dd*/
    sub_1416C32A0(aInternalErrorE_128, 40, &off_1417B54A8); /*0x1407b71ff*/
  v108 = v12; /*0x1407b61e3*/
  v4 = a3; /*0x1407b61ea*/
  v106 = (__int64)(a2 + 2); /*0x1407b61f1*/
  v111 = a2[18]; /*0x1407b61ff*/
  LOBYTE(v105) = *((_BYTE *)a2 + 152); /*0x1407b620d*/
  *(_OWORD *)&v89[96] = *((_OWORD *)a2 + 8); /*0x1407b621a*/
  *(_OWORD *)&v89[80] = *((_OWORD *)a2 + 7); /*0x1407b6225*/
  *(_OWORD *)&v89[64] = *((_OWORD *)a2 + 6); /*0x1407b6230*/
  v13 = *((_OWORD *)a2 + 2); /*0x1407b6237*/
  v14 = *((_OWORD *)a2 + 3); /*0x1407b623b*/
  v15 = *((_OWORD *)a2 + 4); /*0x1407b623f*/
  *(_OWORD *)&v89[48] = *((_OWORD *)a2 + 5); /*0x1407b6247*/
  *(_OWORD *)&v89[32] = v15; /*0x1407b624e*/
  *(_OWORD *)&v89[16] = v14; /*0x1407b6255*/
  *(_OWORD *)v89 = v13; /*0x1407b625c*/
  v80 = *((_OWORD *)a2 + 1); /*0x1407b6267*/
  sub_1406CAAB0(a2); /*0x1407b626e*/
  v8 = v109; /*0x1407b6274*/
  *v109 = 1; /*0x1407b627b*/
  v103 = v8 + 1; /*0x1407b6286*/
  v8[1] = v108; /*0x1407b6294*/
  *(_OWORD *)v106 = v80; /*0x1407b62a3*/
  *((_OWORD *)v8 + 8) = *(_OWORD *)&v89[96]; /*0x1407b62ad*/
  *((_OWORD *)v8 + 7) = *(_OWORD *)&v89[80]; /*0x1407b62bb*/
  *((_OWORD *)v8 + 6) = *(_OWORD *)&v89[64]; /*0x1407b62c6*/
  v17 = *(_OWORD *)v89; /*0x1407b62ca*/
  v18 = *(_OWORD *)&v89[16]; /*0x1407b62d1*/
  v19 = *(_OWORD *)&v89[32]; /*0x1407b62d8*/
  *((_OWORD *)v8 + 5) = *(_OWORD *)&v89[48]; /*0x1407b62e6*/
  *((_OWORD *)v8 + 4) = v19; /*0x1407b62ea*/
  *((_OWORD *)v8 + 3) = v18; /*0x1407b62ee*/
  *((_OWORD *)v8 + 2) = v17; /*0x1407b62f2*/
  v8[18] = v111; /*0x1407b62fd*/
  *((_BYTE *)v8 + 168) = (_BYTE)v105; /*0x1407b630b*/
  LODWORD(v20) = (_DWORD)v8 + 169; /*0x1407b6311*/
  v105 = (char *)v8 + 169; /*0x1407b6318*/
  *((_BYTE *)v8 + 169) = 0; /*0x1407b631f*/
  a3 = v4; /*0x1407b6326*/
LABEL_6:
  *((_WORD *)v8 + 85) = 257; /*0x1407b6364*/
  *((_BYTE *)v8 + 172) = 1; /*0x1407b636d*/
  if ( *((_BYTE *)v8 + 168) == 1 && v8[4] == -2 ) /*0x1407b6382*/
  {
    v21 = -1; /*0x1407b6384*/
    LODWORD(v111) = v20; /*0x1407b638b*/
LABEL_86:
    if ( *((_BYTE *)v8 + 172) ) /*0x1407b6db1*/
    {
      v108 = v8[18]; /*0x1407b6dc1*/
      sub_1405B02E0(v108, v16); /*0x1407b6dc8*/
      sub_140001660(v108, 64, 8); /*0x1407b6de0*/
      v8 = v109; /*0x1407b6de5*/
    }
    if ( *((_BYTE *)v8 + 171) && *v103 ) /*0x1407b6dfc*/
      sub_140001660(v8[2], *v103, 1); /*0x1407b6e0e*/
    *v105 = 1; /*0x1407b6e69*/
    if ( v21 == -2 ) /*0x1407b6e70*/
      goto LABEL_92; /*0x1407b6e70*/
    if ( v21 != -1 ) /*0x1407b6ed7*/
    {
      v108 = v21; /*0x1407b6edd*/
      v103 = (_QWORD *)v5; /*0x1407b6ee4*/
      v105 = v4; /*0x1407b6eeb*/
      *(_QWORD *)v89 = v6; /*0x1407b6ef2*/
      *(_QWORD *)&v89[8] = v106; /*0x1407b6f00*/
      *(_OWORD *)&v89[16] = v87; /*0x1407b6f0b*/
      sub_1406CAAB0(v8); /*0x1407b6f15*/
      v70 = v109; /*0x1407b6f1b*/
      *v109 = 0; /*0x1407b6f22*/
      v70[1] = v108; /*0x1407b6f30*/
      v70[2] = v104; /*0x1407b6f3b*/
      v70[3] = v102; /*0x1407b6f46*/
      v70[4] = (__int64)v103; /*0x1407b6f51*/
      *(_OWORD *)(v70 + 5) = v80; /*0x1407b6f71*/
      *(_OWORD *)(v70 + 7) = v81; /*0x1407b6f75*/
      *(_OWORD *)(v70 + 9) = v82; /*0x1407b6f79*/
      *(_OWORD *)(v70 + 11) = v83; /*0x1407b6f7d*/
      *(_OWORD *)(v70 + 13) = v84; /*0x1407b6f88*/
      *(_OWORD *)(v70 + 15) = v85; /*0x1407b6f93*/
      v70[17] = v86; /*0x1407b6f9e*/
      v70[18] = (__int64)v105; /*0x1407b6fac*/
      *((_BYTE *)v70 + 152) = v111; /*0x1407b6fb9*/
      v71 = *(_OWORD *)v89; /*0x1407b6fbf*/
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v89[16]; /*0x1407b6fcd*/
      *(_OWORD *)(a1 + 8) = v71; /*0x1407b6fd1*/
      *(_QWORD *)a1 = 1; /*0x1407b6fd5*/
      return a1; /*0x1407b6fdc*/
    }
LABEL_95:
    sub_1406CAAB0(v8); /*0x1407b6fde*/
    *v109 = 2; /*0x1407b6fee*/
    *(_QWORD *)a1 = 0; /*0x1407b6ff5*/
    return a1; /*0x1407b6ff5*/
  }
  v22 = v8[18]; /*0x1407b6396*/
  v8[19] = v22; /*0x1407b63a4*/
  v8[20] = (__int64)(v8 + 19); /*0x1407b63ab*/
LABEL_11:
  sub_1407B7BD0(v89, v22, a3); /*0x1407b63be*/
  if ( *(_QWORD *)v89 != 2 ) /*0x1407b63d6*/
  {
    if ( *(_DWORD *)v89 == 1 ) /*0x1407b6403*/
    {
      if ( !*(_QWORD *)&v89[8] ) /*0x1407b640c*/
      {
        v93 = *(_QWORD *)&v89[16]; /*0x1407b6718*/
        v96 = (__int64 (__fastcall **)())&v93; /*0x1407b6726*/
        v97 = sub_141031F10; /*0x1407b6734*/
        sub_14149C0F0(v89, &unk_141787E5A, &v96); /*0x1407b6750*/
        v39 = *(_OWORD *)v89; /*0x1407b675d*/
        v40 = *(_QWORD *)&v89[16]; /*0x1407b6764*/
        nullsub_1(v41); /*0x1407b676b*/
        v42 = sub_140001650(24, 8); /*0x1407b677a*/
        if ( !v42 ) /*0x1407b6782*/
        {
          v108 = *((_QWORD *)&v39 + 1); /*0x1407b7206*/
          v111 = v39; /*0x1407b720d*/
          sub_1416C2D31(8, 24); /*0x1407b721e*/
        }
        *(_OWORD *)v42 = v39; /*0x1407b6788*/
        *(_QWORD *)(v42 + 16) = v40; /*0x1407b678f*/
        LOBYTE(v43) = 40; /*0x1407b679a*/
        v106 = sub_141475210(v43, v42, &off_1417A9E28); /*0x1407b67a5*/
        v44 = v109; /*0x1407b67ac*/
        v4 = (_BYTE *)v109[18]; /*0x1407b67b3*/
        *(_WORD *)((char *)v109 + 171) = 0; /*0x1407b67ba*/
        v21 = v44[1]; /*0x1407b67c3*/
        v104 = v44[2]; /*0x1407b67cb*/
        v102 = v44[3]; /*0x1407b67d6*/
        sub_1406CB7B0(v93); /*0x1407b67e4*/
        LOBYTE(v7) = 1; /*0x1407b67ea*/
        v5 = -2; /*0x1407b67ed*/
        v6 = nullptr; /*0x1407b67f4*/
        v8 = v109; /*0x1407b67f7*/
        goto LABEL_83; /*0x1407b67fe*/
      }
      v95 = *(_OWORD *)&v89[24]; /*0x1407b6416*/
      v99 = 0; /*0x1407b641d*/
      v100 = 1; /*0x1407b6428*/
      v101 = 0; /*0x1407b6433*/
      v93 = *(_QWORD *)&v89[8]; /*0x1407b643e*/
      v94 = *(_QWORD *)&v89[16]; /*0x1407b6445*/
      v113 = 1; /*0x1407b6453*/
      sub_1414A3C90(v89, *(_QWORD *)&v89[16], *(_QWORD *)&v89[24]); /*0x1407b6461*/
      if ( *(_DWORD *)v89 == 1 ) /*0x1407b646e*/
      {
        v23 = v109; /*0x1407b6474*/
        v24 = v109[3]; /*0x1407b647b*/
        if ( v24 > 0x4000000 ) /*0x1407b6486*/
        {
LABEL_17:
          v96 = (__int64 (__fastcall **)())&unk_141787E08; /*0x1407b648c*/
          v97 = sub_1414AC520; /*0x1407b64a1*/
          v113 = 1; /*0x1407b64a8*/
          sub_14149C0F0(v89, &unk_141787E10, &v96); /*0x1407b64c4*/
          v25 = *(_OWORD *)v89; /*0x1407b64d1*/
          v26 = *(_QWORD *)&v89[16]; /*0x1407b64d8*/
          nullsub_1(v27); /*0x1407b64df*/
          v28 = sub_140001650(24, 8); /*0x1407b64ee*/
          if ( !v28 ) /*0x1407b64f6*/
          {
            v108 = *((_QWORD *)&v25 + 1); /*0x1407b7229*/
            v111 = v25; /*0x1407b7230*/
            sub_1416C2D31(8, 24); /*0x1407b7241*/
          }
          *(_OWORD *)v28 = v25; /*0x1407b64fc*/
          *(_QWORD *)(v28 + 16) = v26; /*0x1407b6503*/
          v113 = 1; /*0x1407b6507*/
          LOBYTE(v29) = 40; /*0x1407b6515*/
          v106 = sub_141475210(v29, v28, &off_1417A9E28); /*0x1407b651f*/
          v30 = v109; /*0x1407b6526*/
          *((_BYTE *)v109 + 172) = 0; /*0x1407b652d*/
          v4 = (_BYTE *)v30[18]; /*0x1407b6534*/
          v5 = -2; /*0x1407b653b*/
          v31 = 1; /*0x1407b6542*/
          v104 = 1; /*0x1407b6549*/
          v102 = 0; /*0x1407b6550*/
          v6 = nullptr; /*0x1407b655b*/
          v21 = 0; /*0x1407b655e*/
          LOBYTE(v7) = 1; /*0x1407b6561*/
LABEL_19:
          v32 = *(void (__fastcall **)(char *, __int64, _QWORD))(v93 + 32); /*0x1407b6564*/
          v110 = v31; /*0x1407b6584*/
          v32((char *)&v95 + 8, v94, v95); /*0x1407b658a*/
          if ( v31 ) /*0x1407b658f*/
          {
            v16 = v99; /*0x1407b6595*/
            v8 = v109; /*0x1407b659f*/
            if ( v99 ) /*0x1407b65a6*/
              sub_140001660(v100, v99, 1); /*0x1407b65b9*/
          }
          else
          {
            v8 = v109; /*0x1407b6bb8*/
          }
LABEL_83:
          v11 = *((_BYTE *)v8 + 170) == 0; /*0x1407b6d91*/
          LODWORD(v111) = v7; /*0x1407b6d98*/
          if ( !v11 && v8[4] != -2 ) /*0x1407b6da6*/
            sub_1405E95F0(v8 + 4); /*0x1407b6dac*/
          goto LABEL_86; /*0x1407b6dac*/
        }
LABEL_35:
        v106 = (__int64)(v23 + 4); /*0x1407b685b*/
        v48 = v23 + 5; /*0x1407b6866*/
        v102 = 1; /*0x1407b686f*/
        v49 = 0xA0000000ALL; /*0x1407b6876*/
        v50 = &v96; /*0x1407b6880*/
        v104 = 0; /*0x1407b688e*/
        while ( 1 ) /*0x1407b689d*/
        {
          *(_QWORD *)v89 = v23[2]; /*0x1407b689d*/
          *(_QWORD *)&v89[8] = v24; /*0x1407b68a4*/
          *(_QWORD *)&v89[16] = 0; /*0x1407b68ab*/
          *(_QWORD *)&v89[24] = v24; /*0x1407b68b6*/
          v89[40] = 1; /*0x1407b68bd*/
          *(_QWORD *)&v89[32] = v49; /*0x1407b68c4*/
          v113 = 1; /*0x1407b68cb*/
          sub_1407BC790(v50, v89); /*0x1407b68d8*/
          if ( (_DWORD)v96 != 1 ) /*0x1407b68e5*/
            break; /*0x1407b68e5*/
          v51 = v50; /*0x1407b68ee*/
          v52 = v49; /*0x1407b68f1*/
          v53 = v97; /*0x1407b68f4*/
          v54 = v109; /*0x1407b68fb*/
          v55 = v109[3]; /*0x1407b6902*/
          if ( v97 ) /*0x1407b6909*/
          {
            v56 = v109[2]; /*0x1407b690b*/
            if ( (unsigned __int64)v97 >= v55 ) /*0x1407b6912*/
            {
              if ( v97 != (__int64 (__fastcall *)())v55 ) /*0x1407b6944*/
              {
LABEL_113:
                v113 = 1; /*0x1407b730d*/
                sub_1416C2F60(v56, v55, 0, (_DWORD)v97, (__int64)&off_141787DD8); /*0x1407b732c*/
              }
            }
            else if ( *((char *)v97 + v56) <= -65 ) /*0x1407b691a*/
            {
              goto LABEL_113; /*0x1407b691a*/
            }
            if ( (__int64)v97 < 0 ) /*0x1407b694d*/
            {
              v58 = 0; /*0x1407b6b6c*/
              goto LABEL_65; /*0x1407b6b6c*/
            }
            nullsub_1(v109); /*0x1407b6953*/
            v58 = 1; /*0x1407b6958*/
            v59 = sub_140001650(v53, 1); /*0x1407b6965*/
            if ( !v59 ) /*0x1407b696d*/
            {
              v111 = (__int64)v53; /*0x1407b7334*/
LABEL_65:
              v113 = 1; /*0x1407b6b6e*/
              sub_1416C2D4B(v58, v111); /*0x1407b6b7f*/
            }
            v111 = v59; /*0x1407b6973*/
            sub_141684120(v59, v56, v53); /*0x1407b6986*/
            v54 = v109; /*0x1407b698b*/
            v55 = v109[3]; /*0x1407b6992*/
            v57 = v53; /*0x1407b699d*/
            v108 = (__int64)v53; /*0x1407b69a3*/
            if ( (unsigned __int64)v53 >= v55 ) /*0x1407b69aa*/
LABEL_109:
              sub_1416C32F0(0, v57, v55, &off_1417A66A0); /*0x1407b72c5*/
          }
          else
          {
            v111 = 1; /*0x1407b6929*/
            v57 = nullptr; /*0x1407b6930*/
            v108 = 0; /*0x1407b6936*/
            if ( !v55 ) /*0x1407b693d*/
              goto LABEL_109; /*0x1407b693d*/
          }
          v49 = v52; /*0x1407b69b0*/
          v60 = (__int64)v57 + 1; /*0x1407b69b3*/
          v61 = v54[2]; /*0x1407b69b7*/
          if ( (unsigned __int64)v57 + 1 < v55 && *(char *)(v61 + v60) <= -65 ) /*0x1407b69c4*/
            sub_1416C32A0(aAssertionFaile_18, 44, &off_141787DF0); /*0x1407b72e9*/
          *(_OWORD *)&v89[16] = (unsigned __int64)v103; /*0x1407b69d5*/
          *(_QWORD *)&v89[32] = (char *)v57 + 1; /*0x1407b69e7*/
          *(_QWORD *)v89 = v61; /*0x1407b69ee*/
          *(_QWORD *)&v89[8] = v61 + v60; /*0x1407b69f5*/
          sub_14149C460(v89); /*0x1407b69ff*/
          if ( *(_QWORD *)v106 == -2 ) /*0x1407b6a13*/
          {
            v23 = v109; /*0x1407b6a15*/
            v50 = v51; /*0x1407b6a1c*/
          }
          else
          {
            if ( *(_QWORD *)v106 == -1 ) /*0x1407b6a28*/
              sub_1409D53C0(v89, v48); /*0x1407b6a5e*/
            else
              sub_1409A3040(v89, v106); /*0x1407b6a42*/
            v62 = *(_QWORD *)&v89[16]; /*0x1407b6a64*/
            if ( *(_QWORD *)&v89[16] ) /*0x1407b6a6e*/
            {
              v88 = *(_QWORD *)&v89[8]; /*0x1407b6a77*/
              if ( *(_QWORD *)&v89[16] > (unsigned __int64)(v99 - v104) ) /*0x1407b6a8f*/
              {
                sub_141688D30((unsigned int)&v99, v104, *(_DWORD *)&v89[16], 1, 1); /*0x1407b6b42*/
                v102 = v100; /*0x1407b6b4f*/
                v104 = v101; /*0x1407b6b5d*/
                v49 = v52; /*0x1407b6b64*/
              }
              v50 = v51; /*0x1407b6a95*/
              v63 = v104; /*0x1407b6a98*/
              sub_141684120(v102 + v104, v88, v62); /*0x1407b6ab4*/
              v104 = v62 + v63; /*0x1407b6abc*/
              v101 = v62 + v63; /*0x1407b6ac3*/
            }
            else
            {
              v50 = v51; /*0x1407b6acc*/
            }
            v23 = v109; /*0x1407b6ad9*/
            if ( *(_QWORD *)v89 ) /*0x1407b6ae0*/
              sub_140001660(*(_QWORD *)&v89[8], *(_QWORD *)v89, 1); /*0x1407b6aef*/
          }
          if ( v108 ) /*0x1407b6afe*/
            sub_140001660(v111, v108, 1); /*0x1407b6b0d*/
          v24 = v23[3]; /*0x1407b6b12*/
        }
        v73 = v109; /*0x1407b7030*/
        v4 = (_BYTE *)v109[18]; /*0x1407b7037*/
        *(_WORD *)((char *)v109 + 171) = 0; /*0x1407b703e*/
        *(_QWORD *)&v89[16] = v103[2]; /*0x1407b7052*/
        *(_OWORD *)v89 = *(_OWORD *)v103; /*0x1407b705c*/
        *((_BYTE *)v73 + 170) = 0; /*0x1407b7063*/
        v90 = *(_OWORD *)(v106 + 96); /*0x1407b7077*/
        *(_OWORD *)&v89[104] = *(_OWORD *)(v106 + 80); /*0x1407b7084*/
        *(_OWORD *)&v89[88] = *(_OWORD *)(v106 + 64); /*0x1407b7091*/
        v74 = *(_OWORD *)v106; /*0x1407b7098*/
        v75 = *(_OWORD *)(v106 + 16); /*0x1407b709d*/
        v76 = *(_OWORD *)(v106 + 32); /*0x1407b70a3*/
        *(_OWORD *)&v89[72] = *(_OWORD *)(v106 + 48); /*0x1407b70af*/
        *(_OWORD *)&v89[56] = v76; /*0x1407b70b6*/
        *(_OWORD *)&v89[40] = v75; /*0x1407b70bd*/
        *(_OWORD *)&v89[24] = v74; /*0x1407b70c4*/
        v91 = v4; /*0x1407b70cb*/
        v92 = 0; /*0x1407b70d2*/
        if ( v104 ) /*0x1407b70e1*/
        {
          sub_141447850(&v96, &v99); /*0x1407b70f1*/
          v6 = v96; /*0x1407b70f7*/
          v106 = (__int64)v97; /*0x1407b7105*/
          v87 = v98; /*0x1407b7113*/
          v77 = *(_QWORD *)&v89[8]; /*0x1407b711a*/
          v5 = *(_QWORD *)&v89[24]; /*0x1407b7128*/
          v78 = *(_QWORD *)&v89[16]; /*0x1407b7128*/
          v79 = &v89[32]; /*0x1407b712f*/
          v31 = 0; /*0x1407b7136*/
        }
        else
        {
          v87 = 0; /*0x1407b7157*/
          v77 = *(_QWORD *)&v89[8]; /*0x1407b715e*/
          v78 = *(_QWORD *)&v89[16]; /*0x1407b7165*/
          v79 = v48; /*0x1407b716c*/
          v106 = 1; /*0x1407b7175*/
          v6 = off_141788F08; /*0x1407b717c*/
          v31 = 1; /*0x1407b7183*/
          v5 = *(_QWORD *)&v89[24]; /*0x1407b7185*/
        }
        v102 = v78; /*0x1407b718c*/
        v104 = v77; /*0x1407b7193*/
        v21 = *(_QWORD *)v89; /*0x1407b719a*/
        v80 = *(_OWORD *)v79; /*0x1407b71b0*/
        v81 = *((_OWORD *)v79 + 1); /*0x1407b71b4*/
        v82 = *((_OWORD *)v79 + 2); /*0x1407b71b8*/
        v83 = *((_OWORD *)v79 + 3); /*0x1407b71bc*/
        v84 = *((_OWORD *)v79 + 4); /*0x1407b71c7*/
        v85 = *((_OWORD *)v79 + 5); /*0x1407b71d2*/
        v86 = *((_QWORD *)v79 + 12); /*0x1407b71dd*/
        LODWORD(v7) = 0; /*0x1407b71e4*/
        goto LABEL_19; /*0x1407b71e7*/
      }
      v45 = *(_QWORD *)&v89[8]; /*0x1407b6803*/
      v46 = *(_QWORD *)&v89[16]; /*0x1407b680a*/
      v23 = v109; /*0x1407b6811*/
      v47 = v109[3]; /*0x1407b681c*/
      if ( *(_QWORD *)&v89[16] > (unsigned __int64)(v109[1] - v47) ) /*0x1407b6826*/
      {
        v113 = 1; /*0x1407b728f*/
        sub_141688D30((_DWORD)v103, v47, *(_DWORD *)&v89[16], 1, 1); /*0x1407b72af*/
        v23 = v109; /*0x1407b72b5*/
        v47 = v109[3]; /*0x1407b72bc*/
      }
      else if ( !*(_QWORD *)&v89[16] ) /*0x1407b682f*/
      {
        goto LABEL_34; /*0x1407b682f*/
      }
      sub_141684120(v23[2] + v47, v45, v46); /*0x1407b683e*/
      v47 = v23[3]; /*0x1407b6843*/
LABEL_34:
      v24 = v46 + v47; /*0x1407b6847*/
      v23[3] = v24; /*0x1407b684a*/
      if ( v24 > 0x4000000 ) /*0x1407b6855*/
        goto LABEL_17; /*0x1407b6855*/
      goto LABEL_35; /*0x1407b6855*/
    }
    v99 = 0; /*0x1407b65c3*/
    v100 = 1; /*0x1407b65ce*/
    v101 = 0; /*0x1407b65d9*/
    v33 = v109; /*0x1407b65e4*/
    v34 = v109[4]; /*0x1407b65eb*/
    v109[4] = -2; /*0x1407b65ef*/
    if ( v34 == -2 ) /*0x1407b65fb*/
    {
      v111 = v33[18]; /*0x1407b6604*/
      sub_1405B02E0(v111, v33); /*0x1407b660b*/
      sub_140001660(v111, 64, 8); /*0x1407b6623*/
      v8 = v109; /*0x1407b6635*/
      if ( *v103 ) /*0x1407b662f*/
        sub_140001660(v109[2], *v103, 1); /*0x1407b6648*/
      *v105 = 1; /*0x1407b6654*/
      goto LABEL_95; /*0x1407b6657*/
    }
    *(_QWORD *)v89 = v34; /*0x1407b665c*/
    *(_QWORD *)&v89[104] = v33[17]; /*0x1407b6671*/
    *(_OWORD *)&v89[88] = *(_OWORD *)(v33 + 15); /*0x1407b667c*/
    *(_OWORD *)&v89[72] = *(_OWORD *)(v33 + 13); /*0x1407b6687*/
    v35 = *(_OWORD *)(v33 + 5); /*0x1407b668e*/
    v36 = *(_OWORD *)(v33 + 7); /*0x1407b6692*/
    v37 = *(_OWORD *)(v33 + 9); /*0x1407b6696*/
    *(_OWORD *)&v89[56] = *(_OWORD *)(v33 + 11); /*0x1407b669e*/
    *(_OWORD *)&v89[40] = v37; /*0x1407b66a5*/
    *(_OWORD *)&v89[24] = v36; /*0x1407b66ac*/
    *(_OWORD *)&v89[8] = v35; /*0x1407b66b3*/
    if ( !v33[3] ) /*0x1407b66c1*/
    {
      v64 = 1; /*0x1407b6b8a*/
      v65 = 0; /*0x1407b6b90*/
      if ( v34 != -1 ) /*0x1407b6b96*/
      {
LABEL_76:
        v112 = 1; /*0x1407b6c8b*/
        sub_1409A2DD0(&v93, v89); /*0x1407b6ca0*/
LABEL_77:
        v7 = v94; /*0x1407b6ca6*/
        v69 = v95; /*0x1407b6cad*/
        v111 = v94; /*0x1407b6cc1*/
        if ( (unsigned __int64)v95 > v99 - v65 ) /*0x1407b6cc8*/
        {
          v107 = 1; /*0x1407b724c*/
          sub_141688D30((unsigned int)&v99, v65, v95, 1, 1); /*0x1407b726f*/
          v64 = v100; /*0x1407b7275*/
          v65 = v101; /*0x1407b727c*/
          v7 = v111; /*0x1407b7283*/
        }
        else if ( !(_QWORD)v95 ) /*0x1407b6cd1*/
        {
LABEL_80:
          v101 = v69 + v65; /*0x1407b6ce4*/
          v107 = 0; /*0x1407b6cee*/
          sub_141447850(&v96, &v99); /*0x1407b6d03*/
          v6 = v96; /*0x1407b6d09*/
          v106 = (__int64)v97; /*0x1407b6d17*/
          v87 = v98; /*0x1407b6d25*/
          v8 = v109; /*0x1407b6d2c*/
          v4 = (_BYTE *)v109[18]; /*0x1407b6d33*/
          *(_WORD *)((char *)v109 + 171) = 0; /*0x1407b6d3a*/
          v21 = v8[1]; /*0x1407b6d43*/
          v104 = v8[2]; /*0x1407b6d4b*/
          v102 = v8[3]; /*0x1407b6d56*/
          if ( v93 ) /*0x1407b6d67*/
            sub_140001660(v111, v93, 1); /*0x1407b6d76*/
          sub_1405E95F0(v89); /*0x1407b6d82*/
          LOBYTE(v7) = 1; /*0x1407b6d87*/
          v5 = -2; /*0x1407b6d8a*/
          goto LABEL_83; /*0x1407b6d8a*/
        }
        sub_141684120(v65 + v64, v7, v69); /*0x1407b6cdf*/
        goto LABEL_80; /*0x1407b6cdf*/
      }
LABEL_67:
      v112 = 1; /*0x1407b6b9c*/
      sub_1409D50F0(&v93, &v89[8]); /*0x1407b6bad*/
      goto LABEL_77; /*0x1407b6bb3*/
    }
    v111 = v33[1]; /*0x1407b66cb*/
    v38 = v33[2]; /*0x1407b66d2*/
    v33[1] = 0; /*0x1407b66d6*/
    v33[2] = 1; /*0x1407b66de*/
    v33[3] = 0; /*0x1407b66e6*/
    v108 = v38; /*0x1407b66f2*/
    if ( v34 == -1 ) /*0x1407b66f9*/
      sub_1409D53C0(&v96, &v89[8]); /*0x1407b6bce*/
    else
      sub_1409A3040(&v96, v89); /*0x1407b670d*/
    v66 = v98; /*0x1407b6bd4*/
    if ( (_QWORD)v98 ) /*0x1407b6bde*/
    {
      v106 = (__int64)v97; /*0x1407b6beb*/
      sub_141688D30((unsigned int)&v99, 0, v98, 1, 1); /*0x1407b6c0d*/
      v64 = v100; /*0x1407b6c13*/
      v67 = v101; /*0x1407b6c1a*/
      sub_141684120(v100 + v101, v106, v66); /*0x1407b6c2f*/
      v65 = v66 + v67; /*0x1407b6c34*/
      v101 = v65; /*0x1407b6c37*/
      v68 = v96; /*0x1407b6c3e*/
      if ( !v96 ) /*0x1407b6c48*/
        goto LABEL_73; /*0x1407b6c48*/
    }
    else
    {
      v64 = 1; /*0x1407b7013*/
      v65 = 0; /*0x1407b7019*/
      v68 = v96; /*0x1407b701b*/
      if ( !v96 ) /*0x1407b7025*/
      {
LABEL_73:
        if ( v111 ) /*0x1407b6c66*/
          sub_140001660(v108, v111, 1); /*0x1407b6c75*/
        if ( *(_QWORD *)v89 != -1 ) /*0x1407b6c85*/
          goto LABEL_76; /*0x1407b6c85*/
        goto LABEL_67; /*0x1407b6c85*/
      }
    }
    sub_140001660(v97, v68, 1); /*0x1407b6c57*/
    goto LABEL_73; /*0x1407b6c57*/
  }
  *v105 = 3; /*0x1407b63df*/
LABEL_92:
  *(_QWORD *)a1 = 2; /*0x1407b6e72*/
  return a1; /*0x1407b6fff*/
}
