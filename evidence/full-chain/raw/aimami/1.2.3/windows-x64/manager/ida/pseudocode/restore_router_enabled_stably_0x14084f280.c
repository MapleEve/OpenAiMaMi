// addr: 0x14084f280
// name (owner-map): restore_router_enabled_stably
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::restore_router_enabled_stably | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall restore_router_enabled_stably(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r10
  const char *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r15
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rsi
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  __int64 result; // rax
  _QWORD v39[2]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v40[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v41; // [rsp+90h] [rbp+10h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+20h]
  __int128 v43; // [rsp+A8h] [rbp+28h] BYREF
  const char *v44; // [rsp+B8h] [rbp+38h]
  __int64 v45; // [rsp+C0h] [rbp+40h]
  __int64 v46; // [rsp+C8h] [rbp+48h]
  __int64 v47; // [rsp+D0h] [rbp+50h]
  __int64 v48; // [rsp+D8h] [rbp+58h]
  __int64 v49; // [rsp+E0h] [rbp+60h]
  __int128 v50; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v51; // [rsp+F8h] [rbp+78h]
  const char *v52; // [rsp+100h] [rbp+80h]
  const char *v53; // [rsp+108h] [rbp+88h]
  __int64 v54; // [rsp+110h] [rbp+90h]
  __int64 v55; // [rsp+118h] [rbp+98h]
  const char *v56; // [rsp+120h] [rbp+A0h]
  __int64 v57; // [rsp+128h] [rbp+A8h]
  __int64 v58; // [rsp+130h] [rbp+B0h]
  void *v59; // [rsp+138h] [rbp+B8h]
  __int128 *v60; // [rsp+140h] [rbp+C0h]
  __int64 v61; // [rsp+148h] [rbp+C8h]
  __int128 v62; // [rsp+150h] [rbp+D0h] BYREF
  const char *v63; // [rsp+160h] [rbp+E0h]
  __int128 v64; // [rsp+168h] [rbp+E8h]
  __int64 v65; // [rsp+178h] [rbp+F8h]
  char v66; // [rsp+180h] [rbp+100h]
  const char *v67; // [rsp+188h] [rbp+108h]
  const char *v68; // [rsp+190h] [rbp+110h]
  char v69; // [rsp+19Fh] [rbp+11Fh] BYREF
  __int64 v70; // [rsp+1A0h] [rbp+120h]

  v70 = -2; /*0x14084f29b*/
  v40[0] = a4; /*0x14084f2bd*/
  v40[1] = a5; /*0x14084f2c1*/
  v9 = off_141EC8D80; /*0x14084f2c5*/
  if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14084f2d4*/
  {
    *(_QWORD *)&v43 = v40; /*0x14084f2dd*/
    *((_QWORD *)&v43 + 1) = sub_14041F680; /*0x14084f2e8*/
    *(_QWORD *)&v50 = 0; /*0x14084f2ec*/
    *((_QWORD *)&v50 + 1) = aCodexmateLibCo_5; /*0x14084f2fb*/
    v51 = 35; /*0x14084f2ff*/
    v52 = nullptr; /*0x14084f307*/
    v53 = aSrcCoreRelayMa_2; /*0x14084f319*/
    v54 = 25; /*0x14084f320*/
    v55 = 2; /*0x14084f32b*/
    v56 = aCodexmateLibCo_5; /*0x14084f336*/
    v57 = 35; /*0x14084f33d*/
    v58 = 0x89C00000001LL; /*0x14084f352*/
    v59 = &unk_1417973B2; /*0x14084f360*/
    v60 = &v43; /*0x14084f36b*/
    sub_1412C36A0(&v69, &v50); /*0x14084f37d*/
  }
  sub_140319B20(&v43, *(_QWORD *)(a6 + 8), *(_QWORD *)(a6 + 8) + 232LL * *(_QWORD *)(a6 + 16)); /*0x14084f398*/
  sub_140578870(&v50, a6); /*0x14084f3a5*/
  v63 = v44; /*0x14084f3af*/
  v62 = v43; /*0x14084f3ba*/
  v10 = *(unsigned __int8 *)(a6 + 293); /*0x14084f3c1*/
  v64 = v50; /*0x14084f3cd*/
  v65 = v51; /*0x14084f3d8*/
  v66 = v10; /*0x14084f3df*/
  if ( !v44 || !v65 ) /*0x14084f3f6*/
  {
    nullsub_1(v10); /*0x14084f4d9*/
    v18 = 157; /*0x14084f4de*/
    v24 = sub_140001650(157, 1); /*0x14084f4ee*/
    if ( !v24 ) /*0x14084f4f6*/
      sub_1416C2D4B(1, 157); /*0x14084f8d7*/
    v19 = v24; /*0x14084f4fc*/
    sub_141684120(v24, aCodexCodexProv, 157); /*0x14084f50f*/
    *a1 = 10; /*0x14084f514*/
    v21 = 3; /*0x14084f51b*/
    v22 = 2; /*0x14084f520*/
    v23 = 1; /*0x14084f525*/
    v20 = 157; /*0x14084f52a*/
    goto LABEL_9; /*0x14084f52a*/
  }
  *(_QWORD *)&v43 = a2; /*0x14084f3fc*/
  *((_QWORD *)&v43 + 1) = a3; /*0x14084f400*/
  v44 = (const char *)&v62; /*0x14084f40b*/
  sub_1406ECE30(&v50, a3, 0, 0, (__int64)aNativeoffCompe_0, 22); /*0x14084f44a*/
  v11 = v51; /*0x14084f458*/
  v12 = (__int64)v52; /*0x14084f45c*/
  v13 = v53; /*0x14084f463*/
  v14 = v54; /*0x14084f46a*/
  v15 = v55; /*0x14084f471*/
  v16 = (__int64)v56; /*0x14084f478*/
  v17 = v57; /*0x14084f47f*/
  v18 = v58; /*0x14084f486*/
  v19 = (__int64)v59; /*0x14084f48d*/
  v20 = (__int64)v60; /*0x14084f494*/
  if ( (_QWORD)v50 != -1 ) /*0x14084f49f*/
  {
    *(_OWORD *)a1 = v50; /*0x14084f4a5*/
    a1[2] = v11; /*0x14084f4ac*/
    a1[3] = v12; /*0x14084f4b0*/
    a1[4] = v13; /*0x14084f4b4*/
    a1[5] = v14; /*0x14084f4b8*/
    a1[6] = v15; /*0x14084f4bc*/
    a1[7] = v16; /*0x14084f4c0*/
    a1[8] = v17; /*0x14084f4c4*/
    v21 = 11; /*0x14084f4c8*/
    v22 = 10; /*0x14084f4cd*/
    v23 = 9; /*0x14084f4d2*/
LABEL_9:
    a1[v23] = v18; /*0x14084f52f*/
    a1[v22] = v19; /*0x14084f533*/
    a1[v21] = v20; /*0x14084f537*/
    v25 = *((_QWORD *)&v62 + 1); /*0x14084f53b*/
    v67 = v63; /*0x14084f549*/
    v68 = nullptr; /*0x14084f550*/
    v61 = *((_QWORD *)&v62 + 1); /*0x14084f55b*/
    while ( v67 != v68 ) /*0x14084f57e*/
    {
      ++v68; /*0x14084f583*/
      v26 = v25 + 232; /*0x14084f58a*/
      sub_140018960(v25); /*0x14084f591*/
      v25 = v26; /*0x14084f597*/
    }
    if ( (_QWORD)v62 ) /*0x14084f5a6*/
      sub_140001660(*((_QWORD *)&v62 + 1), 232 * v62, 8); /*0x14084f5bc*/
    v27 = v65; /*0x14084f5c1*/
    if ( v65 ) /*0x14084f5cb*/
    {
      v28 = (_QWORD *)(*((_QWORD *)&v64 + 1) + 8LL); /*0x14084f5d8*/
      do /*0x14084f5e7*/
      {
        v29 = *(v28 - 1); /*0x14084f5ed*/
        if ( v29 ) /*0x14084f5f4*/
          sub_140001660(*v28, v29, 1); /*0x14084f5ff*/
        v28 += 3; /*0x14084f5e0*/
        --v27; /*0x14084f5e4*/
      }
      while ( v27 ); /*0x14084f5e7*/
    }
    goto LABEL_43; /*0x14084f5e7*/
  }
  if ( *((_QWORD *)&v50 + 1) == 2 ) /*0x14084f60a*/
  {
    v19 = 8; /*0x14084f60c*/
    v20 = 0; /*0x14084f611*/
    v30 = (__int64)v56; /*0x14084f613*/
    v16 = v57; /*0x14084f616*/
    v17 = v58; /*0x14084f619*/
    v18 = 0; /*0x14084f61c*/
  }
  else
  {
    v30 = v55; /*0x14084f621*/
    v15 = v54; /*0x14084f624*/
    v14 = (__int64)v53; /*0x14084f627*/
    v13 = v52; /*0x14084f62a*/
    v12 = v51; /*0x14084f62d*/
    v11 = *((_QWORD *)&v50 + 1); /*0x14084f630*/
  }
  *(_QWORD *)&v43 = v11; /*0x14084f633*/
  *((_QWORD *)&v43 + 1) = v12; /*0x14084f637*/
  v44 = v13; /*0x14084f63b*/
  v45 = v14; /*0x14084f63f*/
  v46 = v15; /*0x14084f643*/
  v47 = v30; /*0x14084f647*/
  v48 = v16; /*0x14084f64b*/
  v49 = v17; /*0x14084f64f*/
  if ( v20 ) /*0x14084f662*/
  {
    if ( *v9 >= 2u ) /*0x14084f670*/
    {
      sub_140440300((unsigned int)&v50, v19, v20, (unsigned int)&unk_141796798, 3); /*0x14084f690*/
      v42 = v51; /*0x14084f69a*/
      v41 = v50; /*0x14084f6a2*/
      v39[0] = &v41; /*0x14084f6aa*/
      v39[1] = sub_1400015F0; /*0x14084f6b5*/
      *(_QWORD *)&v50 = 0; /*0x14084f6b9*/
      *((_QWORD *)&v50 + 1) = aCodexmateLibCo_5; /*0x14084f6c8*/
      v51 = 35; /*0x14084f6cc*/
      v52 = nullptr; /*0x14084f6d4*/
      v53 = aSrcCoreRelayMa_2; /*0x14084f6e6*/
      v54 = 25; /*0x14084f6ed*/
      v55 = 2; /*0x14084f6f8*/
      v56 = aCodexmateLibCo_5; /*0x14084f703*/
      v57 = 35; /*0x14084f70a*/
      v58 = 0x8BD00000001LL; /*0x14084f71f*/
      v59 = &unk_1417973FF; /*0x14084f72d*/
      v60 = (__int128 *)v39; /*0x14084f738*/
      sub_1412C36A0(&v69, &v50); /*0x14084f74a*/
      if ( (_QWORD)v41 ) /*0x14084f757*/
        sub_140001660(*((_QWORD *)&v41 + 1), v41, 1); /*0x14084f763*/
    }
    *a1 = -1; /*0x14084f768*/
    v31 = (_QWORD *)(v19 + 8); /*0x14084f76f*/
    do /*0x14084f787*/
    {
      v32 = *(v31 - 1); /*0x14084f789*/
      if ( v32 ) /*0x14084f790*/
        sub_140001660(*v31, v32, 1); /*0x14084f79b*/
      v31 += 3; /*0x14084f780*/
      --v20; /*0x14084f784*/
    }
    while ( v20 ); /*0x14084f787*/
  }
  else
  {
    *a1 = -1; /*0x14084f7a2*/
  }
  if ( v18 ) /*0x14084f7ac*/
    sub_140001660(v19, 24 * v18, 8); /*0x14084f7bf*/
  sub_1406CE2E0(&v43); /*0x14084f7c8*/
  v33 = *((_QWORD *)&v62 + 1); /*0x14084f7cd*/
  v67 = v63; /*0x14084f7db*/
  v68 = nullptr; /*0x14084f7e2*/
  v61 = *((_QWORD *)&v62 + 1); /*0x14084f7ed*/
  while ( v67 != v68 ) /*0x14084f80e*/
  {
    ++v68; /*0x14084f813*/
    v34 = v33 + 232; /*0x14084f81a*/
    sub_140018960(v33); /*0x14084f821*/
    v33 = v34; /*0x14084f827*/
  }
  if ( (_QWORD)v62 ) /*0x14084f836*/
    sub_140001660(*((_QWORD *)&v62 + 1), 232 * v62, 8); /*0x14084f84c*/
  v35 = v65; /*0x14084f851*/
  if ( v65 ) /*0x14084f85b*/
  {
    v36 = (_QWORD *)(*((_QWORD *)&v64 + 1) + 8LL); /*0x14084f864*/
    do /*0x14084f877*/
    {
      v37 = *(v36 - 1); /*0x14084f879*/
      if ( v37 ) /*0x14084f880*/
        sub_140001660(*v36, v37, 1); /*0x14084f88b*/
      v36 += 3; /*0x14084f870*/
      --v35; /*0x14084f874*/
    }
    while ( v35 ); /*0x14084f877*/
  }
LABEL_43:
  result = v64; /*0x14084f892*/
  if ( (_QWORD)v64 ) /*0x14084f89c*/
    return sub_140001660(*((_QWORD *)&v64 + 1), 24 * v64, 8); /*0x14084f8b3*/
  return result; /*0x14084f8b9*/
}

// --- refs ---
// 0x141ec8d80  off_141EC8D80
// 0x14041f680  sub_14041F680
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x1417956b1  aSrcCoreRelayMa_2  // string: "src\core\relay\manager.rs"
// 0x1417973b2  unk_1417973B2
// 0x1412c36a0  sub_1412C36A0
// 0x140319b20  sub_140319B20
// 0x140578870  sub_140578870
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x141684120  sub_141684120
// 0x141761228  aCodexCodexProv  // string: "无法启用 Codex 智能路由：请先在「Codex」标签下添加并激活至少一个中转 Provider（点击该 Provider 旁的「启用」按钮）。"
// 0x1406ece30  sub_1406ECE30
// 0x1417973e9  aNativeoffCompe_0  // string: "NativeOff compensation"
// 0x140018960  sub_140018960
// 0x140001660  sub_140001660
// 0x140440300  sub_140440300
// 0x141796798  unk_141796798
// 0x1400015f0  sub_1400015F0
// 0x1417973ff  unk_1417973FF
// 0x1406ce2e0  sub_1406CE2E0
