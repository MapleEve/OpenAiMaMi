// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1407b7bd0  size: 0x7d4  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References the Unfold-poll-after-None guard and unreachable-code guard (no char_boundary assertion,
//   smallest of the four at 0x7d4) -- simplified/early-exit variant of the SSE/chunk-decoder family
//   above.
//
// Referenced strings/symbols:
//   0x1416c3400  sub_1416C3400
//   0x141787e88  off_141787E88
//   0x1416c3420  sub_1416C3420
//   0x1416c32a0  sub_1416C32A0
//   0x141790658  aUnfoldMustNotB   "Unfold must not be polled after it returned `Poll::Ready(None)`"
//   0x141790710  off_141790710
//   0x1417b3efa  aInternalErrorE_128   "internal error: entered unreachable code"
//   0x1417b54a8  off_1417B54A8
//   0x1405b02e0  sub_1405B02E0
//   0x140001660  sub_140001660
//   0x1406bb950  sub_1406BB950
//   0x141688d30  sub_141688D30
//   0x141684120  sub_141684120
//   0x1414a3c90  sub_1414A3C90
//   0x1416c32f0  sub_1416C32F0
//   0x141787ea0  off_141787EA0
//   0x1417a66b8  off_1417A66B8
//   0x141447740  sub_141447740
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407B7BD0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  _BYTE *v5; // r15
  __int64 v7; // rax
  bool v8; // zf
  _BYTE *v9; // r9
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // r14
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r8
  char v29; // r14
  __int64 v30; // r13
  _OWORD *v31; // rdx
  __int64 v32; // rdi
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // r15
  __int64 v38; // r12
  __int64 *v39; // r14
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r8
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 *v47; // rcx
  __int128 v48; // xmm0
  __int64 v50; // r14
  __int128 v51; // [rsp+50h] [rbp-30h]
  __int64 v52; // [rsp+60h] [rbp-20h]
  __int64 v53; // [rsp+70h] [rbp-10h]
  __int64 v54; // [rsp+78h] [rbp-8h]
  __int128 v55; // [rsp+80h] [rbp+0h] BYREF
  __int64 v56; // [rsp+90h] [rbp+10h]
  __int64 v57; // [rsp+98h] [rbp+18h]
  __int128 v58; // [rsp+A0h] [rbp+20h] BYREF
  _OWORD v59[2]; // [rsp+B0h] [rbp+30h]
  __int64 v60; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v61; // [rsp+D8h] [rbp+58h]
  __int64 v62; // [rsp+E0h] [rbp+60h]
  __int64 v63; // [rsp+E8h] [rbp+68h]
  __int64 *v64; // [rsp+F0h] [rbp+70h]
  __int64 v65; // [rsp+F8h] [rbp+78h]
  _BYTE *v66; // [rsp+100h] [rbp+80h]
  _OWORD *v67; // [rsp+108h] [rbp+88h]
  __int64 *v68; // [rsp+110h] [rbp+90h]
  char v69; // [rsp+11Fh] [rbp+9Fh]
  __int64 v70; // [rsp+120h] [rbp+A0h]

  v70 = -2; /*0x1407b7beb*/
  v7 = *a2; /*0x1407b7bf9*/
  v8 = *a2 == 0; /*0x1407b7bfc*/
  v68 = a2; /*0x1407b7bff*/
  if ( !v8 ) /*0x1407b7c06*/
  {
    if ( (_DWORD)v7 == 1 ) /*0x1407b7c0b*/
    {
      v9 = (char *)a2 + 57; /*0x1407b7c11*/
      v10 = *((unsigned __int8 *)a2 + 57); /*0x1407b7c15*/
      v64 = a2 + 1; /*0x1407b7c1d*/
      switch ( v10 ) /*0x1407b7c2f*/
      {
        case 0LL: /*0x1407b7c2f*/
          goto LABEL_7;
        case 1LL: /*0x1407b7c2f*/
          sub_1416C3400(&off_141787E88, a2, a3, v9); /*0x1407b839d*/
        case 2LL: /*0x1407b7c2f*/
          sub_1416C3420(&off_141787E88, a2, a3, v9); /*0x1407b838f*/
        case 3LL: /*0x1407b7c2f*/
          v66 = (char *)a2 + 57; /*0x1407b7c31*/
          v11 = (__int64 *)a2[6]; /*0x1407b7c38*/
          goto LABEL_17; /*0x1407b7c3c*/
      }
    }
    sub_1416C32A0(aUnfoldMustNotB, 63, &off_141790710); /*0x1407b829e*/
  }
  v12 = a2[1]; /*0x1407b7c41*/
  *a2 = 2; /*0x1407b7c45*/
  if ( v12 < 0 ) /*0x1407b7c4f*/
    sub_1416C32A0(aInternalErrorE_128, 40, &off_1417B54A8); /*0x1407b82f7*/
  v66 = (_BYTE *)v12; /*0x1407b7c55*/
  v13 = a3; /*0x1407b7c5c*/
  v67 = a2 + 2; /*0x1407b7c63*/
  v58 = *((_OWORD *)a2 + 1); /*0x1407b7c6e*/
  v63 = a2[4]; /*0x1407b7c76*/
  LOBYTE(v65) = *((_BYTE *)a2 + 40); /*0x1407b7c7e*/
  sub_1405B02E0(a2, a2); /*0x1407b7c84*/
  a2 = v68; /*0x1407b7c8a*/
  *v68 = 1; /*0x1407b7c91*/
  v64 = a2 + 1; /*0x1407b7c9c*/
  a2[1] = (__int64)v66; /*0x1407b7ca7*/
  *v67 = v58; /*0x1407b7cb6*/
  a2[4] = v63; /*0x1407b7cbd*/
  *((_BYTE *)a2 + 56) = v65; /*0x1407b7cc5*/
  v9 = (char *)a2 + 57; /*0x1407b7cc8*/
  *((_BYTE *)a2 + 57) = 0; /*0x1407b7ccc*/
  a3 = v13; /*0x1407b7cd0*/
LABEL_7:
  *((_WORD *)a2 + 29) = 257; /*0x1407b7cd3*/
  v14 = a2[4]; /*0x1407b7cd9*/
  v8 = *((_BYTE *)a2 + 56) == 1; /*0x1407b7cdd*/
  v66 = v9; /*0x1407b7ce1*/
  if ( v8 ) /*0x1407b7ce8*/
  {
    v67 = *(_OWORD **)v14; /*0x1407b7cf1*/
    v63 = v14; /*0x1407b7cf8*/
    v65 = *(_QWORD *)(v14 + 8); /*0x1407b7d00*/
    if ( *(_QWORD *)v65 ) /*0x1407b7d04*/
      (*(void (__fastcall **)(_OWORD *))v65)(v67); /*0x1407b7d13*/
    v15 = *(_QWORD *)(v65 + 8); /*0x1407b7d21*/
    if ( v15 ) /*0x1407b7d28*/
      sub_140001660(v67, v15, *(_QWORD *)(v65 + 16)); /*0x1407b7d2e*/
    sub_140001660(v63, 16, 8); /*0x1407b7d42*/
    v16 = *v64; /*0x1407b7d4b*/
    v17 = v68; /*0x1407b7d51*/
    if ( *v64 ) /*0x1407b7d4b*/
      sub_140001660(v68[2], v16, 1); /*0x1407b7d6b*/
    *v66 = 1; /*0x1407b7d70*/
    goto LABEL_15; /*0x1407b7d70*/
  }
  v18 = a2; /*0x1407b7d96*/
  v11 = a2 + 5; /*0x1407b7d99*/
  v18[5] = v14; /*0x1407b7d9d*/
  v18[6] = (__int64)v11; /*0x1407b7da1*/
LABEL_17:
  sub_1406BB950(&v58, v11, a3, v9); /*0x1407b7da5*/
  if ( (_QWORD)v58 == 2 ) /*0x1407b7db7*/
  {
    *v66 = 3; /*0x1407b7dc0*/
    *(_QWORD *)a1 = 2; /*0x1407b7dc3*/
    return a1; /*0x1407b7dca*/
  }
  v52 = *((_QWORD *)&v59[0] + 1); /*0x1407b7ddb*/
  v19 = *(_QWORD *)&v59[0]; /*0x1407b7ddb*/
  if ( (_DWORD)v58 != 1 ) /*0x1407b7de2*/
  {
    v38 = -1; /*0x1407b7ff0*/
    LODWORD(v65) = DWORD2(v58); /*0x1407b7ff7*/
    v17 = v68; /*0x1407b7ffa*/
    if ( *((_BYTE *)v68 + 59) ) /*0x1407b8001*/
      goto LABEL_57; /*0x1407b8006*/
    goto LABEL_62; /*0x1407b8006*/
  }
  v17 = v68; /*0x1407b7deb*/
  if ( !*((_QWORD *)&v58 + 1) ) /*0x1407b7df2*/
  {
    v51 = *(_OWORD *)((char *)v59 + 8); /*0x1407b8015*/
    *((_BYTE *)v68 + 59) = 0; /*0x1407b8019*/
    v5 = (_BYTE *)v17[4]; /*0x1407b801e*/
    LODWORD(v65) = 1; /*0x1407b8024*/
    v4 = 1; /*0x1407b8027*/
    v38 = 0; /*0x1407b802d*/
    v3 = 0; /*0x1407b8030*/
    v57 = 0; /*0x1407b8032*/
    if ( *((_BYTE *)v17 + 59) ) /*0x1407b803a*/
      goto LABEL_57; /*0x1407b803f*/
    goto LABEL_62; /*0x1407b803f*/
  }
  v53 = *((_QWORD *)&v58 + 1); /*0x1407b7df8*/
  v54 = *(_QWORD *)&v59[0]; /*0x1407b7dfc*/
  v55 = *(_OWORD *)((char *)v59 + 8); /*0x1407b7e04*/
  v20 = v68[3]; /*0x1407b7e10*/
  if ( *((_QWORD *)&v59[0] + 1) > (unsigned __int64)(v68[1] - v20) ) /*0x1407b7e1a*/
  {
    sub_141688D30((_DWORD)v64, v20, DWORD2(v59[0]), 1, 1); /*0x1407b8317*/
    v17 = v68; /*0x1407b831d*/
    v20 = v68[3]; /*0x1407b8324*/
    goto LABEL_23; /*0x1407b8328*/
  }
  if ( *((_QWORD *)&v59[0] + 1) ) /*0x1407b7e23*/
  {
LABEL_23:
    v21 = v19; /*0x1407b7e25*/
    v22 = v20; /*0x1407b7e2f*/
    sub_141684120(v20 + v17[2], v21, v52); /*0x1407b7e35*/
    v20 = v22; /*0x1407b7e3a*/
  }
  v23 = v52 + v20; /*0x1407b7e3d*/
  v17[3] = v23; /*0x1407b7e40*/
  v60 = 0; /*0x1407b7e44*/
  v61 = 1; /*0x1407b7e4c*/
  v62 = 0; /*0x1407b7e54*/
  v24 = 1; /*0x1407b7e5c*/
  v25 = 0; /*0x1407b7e62*/
  while ( 1 ) /*0x1407b7e73*/
  {
    v26 = v17[2]; /*0x1407b7e73*/
    v69 = 1; /*0x1407b7e77*/
    sub_1414A3C90(&v58, v26, v23); /*0x1407b7e81*/
    if ( !(_BYTE)v58 ) /*0x1407b7e8b*/
    {
      v39 = v68; /*0x1407b804a*/
      v40 = v68[2]; /*0x1407b8051*/
      v41 = v68[3]; /*0x1407b8055*/
      if ( v41 > v60 - v25 ) /*0x1407b8063*/
      {
        v50 = v68[2]; /*0x1407b832d*/
        v69 = 1; /*0x1407b8330*/
        sub_141688D30((unsigned int)&v60, v25, v41, 1, 1); /*0x1407b8350*/
        v24 = v61; /*0x1407b8356*/
        v25 = v62; /*0x1407b835a*/
        v40 = v50; /*0x1407b835e*/
        v39 = v68; /*0x1407b8361*/
      }
      else if ( !v41 ) /*0x1407b806c*/
      {
LABEL_49:
        v62 = v41 + v25; /*0x1407b807c*/
        v42 = 0; /*0x1407b8083*/
        goto LABEL_55; /*0x1407b8085*/
      }
      sub_141684120(v25 + v24, v40, v41); /*0x1407b8077*/
      goto LABEL_49; /*0x1407b8077*/
    }
    v27 = *((_QWORD *)&v58 + 1); /*0x1407b7e91*/
    v28 = v68[3]; /*0x1407b7e9c*/
    if ( *((_QWORD *)&v58 + 1) > v28 ) /*0x1407b7ea3*/
    {
      v69 = 1; /*0x1407b82a5*/
      sub_1416C32F0(0, *((_QWORD *)&v58 + 1), v28, &off_141787EA0); /*0x1407b82b8*/
    }
    v29 = v59[0]; /*0x1407b7ea9*/
    v30 = BYTE1(v59[0]); /*0x1407b7eae*/
    v31 = (_OWORD *)v68[2]; /*0x1407b7eb3*/
    if ( *((_QWORD *)&v58 + 1) > (unsigned __int64)(v60 - v25) ) /*0x1407b7ec1*/
    {
      v67 = (_OWORD *)v68[2]; /*0x1407b7f79*/
      v69 = 1; /*0x1407b7f80*/
      sub_141688D30((unsigned int)&v60, v25, DWORD2(v58), 1, 1); /*0x1407b7fa0*/
      v24 = v61; /*0x1407b7fa6*/
      v25 = v62; /*0x1407b7faa*/
      v31 = v67; /*0x1407b7fae*/
    }
    else if ( !*((_QWORD *)&v58 + 1) ) /*0x1407b7eca*/
    {
      goto LABEL_31; /*0x1407b7eca*/
    }
    sub_141684120(v24 + v25, v31, v27); /*0x1407b7ed3*/
LABEL_31:
    v32 = v27 + v25; /*0x1407b7ed8*/
    v62 = v32; /*0x1407b7edb*/
    if ( (v29 & 1) == 0 ) /*0x1407b7ee3*/
      break; /*0x1407b7ee3*/
    if ( (unsigned __int64)(v60 - v32) <= 2 ) /*0x1407b7ef4*/
    {
      v69 = 1; /*0x1407b7fba*/
      sub_141688D30((unsigned int)&v60, v32, 3, 1, 1); /*0x1407b7fdd*/
      v24 = v61; /*0x1407b7fe3*/
      v32 = v62; /*0x1407b7fe7*/
    }
    *(_BYTE *)(v24 + v32 + 2) = -67; /*0x1407b7efa*/
    *(_WORD *)(v24 + v32) = -16401; /*0x1407b7f00*/
    v25 = v32 + 3; /*0x1407b7f07*/
    v62 = v25; /*0x1407b7f0b*/
    v33 = v30 + v27; /*0x1407b7f0f*/
    v17 = v68; /*0x1407b7f12*/
    v34 = v68[3]; /*0x1407b7f19*/
    v23 = v34 - v33; /*0x1407b7f20*/
    if ( v34 < v33 ) /*0x1407b7f23*/
    {
      v69 = 1; /*0x1407b82c3*/
      sub_1416C32F0(0, v33, v34, &off_1417A66B8); /*0x1407b82d9*/
    }
    v68[3] = 0; /*0x1407b7f29*/
    if ( v33 ) /*0x1407b7f34*/
    {
      if ( v34 != v33 ) /*0x1407b7f39*/
      {
        v35 = v17[2]; /*0x1407b7f3f*/
        v36 = v35 + v33; /*0x1407b7f46*/
        v37 = v34 - v33; /*0x1407b7f49*/
        sub_141684120(v35, v36, v23); /*0x1407b7f4c*/
        v23 = v37; /*0x1407b7f51*/
        goto LABEL_40; /*0x1407b7f54*/
      }
      v23 = 0; /*0x1407b7e70*/
    }
    else if ( v34 ) /*0x1407b7f63*/
    {
LABEL_40:
      v17[3] = v23; /*0x1407b7f70*/
    }
    else
    {
      v23 = 0; /*0x1407b7f65*/
    }
  }
  v39 = v68; /*0x1407b8087*/
  v43 = v68[3]; /*0x1407b808e*/
  v42 = v43 - v27; /*0x1407b8095*/
  if ( v43 < v27 ) /*0x1407b8098*/
  {
    v69 = 1; /*0x1407b836d*/
    sub_1416C32F0(0, v27, v43, &off_1417A66B8); /*0x1407b8380*/
  }
  v68[3] = 0; /*0x1407b809e*/
  if ( v27 ) /*0x1407b80a9*/
  {
    if ( v43 == v27 ) /*0x1407b80ae*/
      goto LABEL_56; /*0x1407b80ae*/
    sub_141684120(v39[2], v39[2] + v27, v42); /*0x1407b80bd*/
  }
  else if ( !v43 ) /*0x1407b80c7*/
  {
    goto LABEL_56; /*0x1407b80c7*/
  }
LABEL_55:
  v39[3] = v42; /*0x1407b80c9*/
LABEL_56:
  v69 = 0; /*0x1407b80cd*/
  sub_141447740(&v58, &v60); /*0x1407b80dc*/
  v19 = *((_QWORD *)&v58 + 1); /*0x1407b80e6*/
  v3 = v58; /*0x1407b80e6*/
  v51 = v59[0]; /*0x1407b80ee*/
  v44 = v68; /*0x1407b80f2*/
  v5 = (_BYTE *)v68[4]; /*0x1407b80f9*/
  *((_WORD *)v68 + 29) = 0; /*0x1407b80fd*/
  v38 = v44[1]; /*0x1407b8103*/
  v4 = v44[2]; /*0x1407b8107*/
  v57 = v44[3]; /*0x1407b810f*/
  (*(void (__fastcall **)(char *, __int64, _QWORD))(v53 + 32))((char *)&v55 + 8, v54, v55); /*0x1407b8123*/
  LODWORD(v65) = 0; /*0x1407b8127*/
  v17 = v68; /*0x1407b812e*/
  if ( *((_BYTE *)v68 + 59) ) /*0x1407b8135*/
  {
LABEL_57:
    v45 = v17[4]; /*0x1407b813c*/
    v67 = *(_OWORD **)v45; /*0x1407b8143*/
    v56 = v45; /*0x1407b814a*/
    v63 = *(_QWORD *)(v45 + 8); /*0x1407b8152*/
    if ( *(_QWORD *)v63 ) /*0x1407b8156*/
      (*(void (__fastcall **)(_OWORD *))v63)(v67); /*0x1407b8165*/
    v46 = *(_QWORD *)(v63 + 8); /*0x1407b8173*/
    if ( v46 ) /*0x1407b817a*/
      sub_140001660(v67, v46, *(_QWORD *)(v63 + 16)); /*0x1407b8180*/
    sub_140001660(v56, 16, 8); /*0x1407b8194*/
    v17 = v68; /*0x1407b8199*/
  }
LABEL_62:
  if ( *((_BYTE *)v17 + 58) ) /*0x1407b81a0*/
  {
    v16 = *v64; /*0x1407b81ab*/
    if ( *v64 ) /*0x1407b81ab*/
      sub_140001660(v17[2], v16, 1); /*0x1407b81bd*/
  }
  *v66 = 1; /*0x1407b81d1*/
  if ( v38 == -2 ) /*0x1407b81d8*/
  {
    *(_QWORD *)a1 = 2; /*0x1407b81da*/
    return a1; /*0x1407b81e1*/
  }
  if ( v38 != -1 ) /*0x1407b81f2*/
  {
    v67 = (_OWORD *)v4; /*0x1407b81f8*/
    v64 = (__int64 *)v38; /*0x1407b81ff*/
    v66 = v5; /*0x1407b8203*/
    *(_QWORD *)&v58 = v3; /*0x1407b820a*/
    *((_QWORD *)&v58 + 1) = v19; /*0x1407b820e*/
    v59[0] = v51; /*0x1407b8216*/
    sub_1405B02E0(v17, v16); /*0x1407b821d*/
    v47 = v68; /*0x1407b8223*/
    *v68 = 0; /*0x1407b822a*/
    v47[1] = (__int64)v64; /*0x1407b8235*/
    v47[2] = (__int64)v67; /*0x1407b8240*/
    v47[3] = v57; /*0x1407b8248*/
    v47[4] = (__int64)v66; /*0x1407b8253*/
    *((_BYTE *)v47 + 40) = v65; /*0x1407b825a*/
    v48 = v58; /*0x1407b825d*/
    *(_OWORD *)(a1 + 24) = v59[0]; /*0x1407b8265*/
    *(_OWORD *)(a1 + 8) = v48; /*0x1407b8269*/
    *(_QWORD *)a1 = 1; /*0x1407b826d*/
    return a1; /*0x1407b826d*/
  }
LABEL_15:
  sub_1405B02E0(v17, v16); /*0x1407b7d73*/
  *v68 = 2; /*0x1407b7d83*/
  *(_QWORD *)a1 = 0; /*0x1407b7d8a*/
  return a1; /*0x1407b8277*/
}
