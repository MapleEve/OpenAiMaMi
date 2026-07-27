// addr: 0x14084fc60
// name (owner-map): rollback_router_enabled_stably
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled_stably | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall rollback_router_enabled_stably(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v7; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // kr00_16
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  __int128 v16; // kr10_16
  __int128 v17; // kr20_16
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // r15
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  _QWORD *v30; // rsi
  __int64 v31; // rdx
  _BYTE v32[292]; // [rsp+58h] [rbp-28h] BYREF
  char v33; // [rsp+17Ch] [rbp+FCh]
  unsigned __int8 v34; // [rsp+17Dh] [rbp+FDh]
  __int128 v35; // [rsp+180h] [rbp+100h] BYREF
  __int64 v36; // [rsp+190h] [rbp+110h]
  __int64 v37; // [rsp+198h] [rbp+118h]
  __int64 v38; // [rsp+1A0h] [rbp+120h]
  __int64 v39; // [rsp+1A8h] [rbp+128h]
  _QWORD v40[2]; // [rsp+1B0h] [rbp+130h] BYREF
  _QWORD v41[2]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v42; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v43; // [rsp+1E0h] [rbp+160h]
  __int64 v44; // [rsp+1F0h] [rbp+170h]
  __int64 v45; // [rsp+1F8h] [rbp+178h]
  __int64 v46; // [rsp+200h] [rbp+180h]
  __int64 v47; // [rsp+208h] [rbp+188h]
  __int128 v48; // [rsp+210h] [rbp+190h] BYREF
  __int64 v49; // [rsp+220h] [rbp+1A0h]
  _BYTE v50[48]; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v51; // [rsp+258h] [rbp+1D8h]
  __int128 v52; // [rsp+268h] [rbp+1E8h]
  __int128 v53; // [rsp+278h] [rbp+1F8h]
  _BYTE v54[2]; // [rsp+28Eh] [rbp+20Eh] BYREF
  __int64 v55; // [rsp+290h] [rbp+210h]

  v55 = -2; /*0x14084fc7b*/
  v7 = a3; /*0x14084fc86*/
  v41[0] = a4; /*0x14084fc9e*/
  v41[1] = a5; /*0x14084fca5*/
  v54[1] = a7; /*0x14084fcac*/
  if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14084fcc1*/
  {
    *(_QWORD *)&v42 = v41; /*0x14084fcce*/
    *((_QWORD *)&v42 + 1) = sub_14041F680; /*0x14084fcdc*/
    *(_QWORD *)v50 = 0; /*0x14084fce3*/
    *(_QWORD *)&v50[8] = aCodexmateLibCo_5; /*0x14084fcf5*/
    *(_OWORD *)&v50[16] = 0x23u; /*0x14084fcfc*/
    *(_QWORD *)&v50[32] = aSrcCoreRelayMa_2; /*0x14084fd19*/
    *(_QWORD *)&v50[40] = 25; /*0x14084fd20*/
    *(_QWORD *)&v51 = 2; /*0x14084fd2b*/
    *((_QWORD *)&v51 + 1) = aCodexmateLibCo_5; /*0x14084fd36*/
    *(_QWORD *)&v52 = 35; /*0x14084fd3d*/
    *((_QWORD *)&v52 + 1) = 0x86000000001LL; /*0x14084fd52*/
    *(_QWORD *)&v53 = &unk_14179743D; /*0x14084fd60*/
    *((_QWORD *)&v53 + 1) = &v42; /*0x14084fd6e*/
    sub_1412C36A0(v54, v50); /*0x14084fd83*/
  }
  LOBYTE(a3) = 1; /*0x14084fd92*/
  verify_invariants_with_depth(v50, v7, a3, 0); /*0x14084fd98*/
  v12 = *(_OWORD *)v50; /*0x14084fda4*/
  if ( *(_QWORD *)&v50[16] ) /*0x14084fdb5*/
  {
    v13 = 32LL * *(_QWORD *)&v50[16]; /*0x14084fdbb*/
    v14 = 0; /*0x14084fdbf*/
    do /*0x14084fdd7*/
    {
      v15 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + v14); /*0x14084fdd9*/
      if ( v15 ) /*0x14084fde0*/
        sub_140001660(*(_QWORD *)(*((_QWORD *)&v12 + 1) + v14 + 8), v15, 1); /*0x14084fded*/
      v14 += 32; /*0x14084fdd0*/
    }
    while ( v13 != v14 ); /*0x14084fdd7*/
    if ( (_QWORD)v12 ) /*0x14084fdf7*/
      sub_140001660(*((_QWORD *)&v12 + 1), 32 * v12, 8); /*0x14084fe09*/
    *(_QWORD *)&v42 = a2; /*0x14084fe0e*/
    *((_QWORD *)&v42 + 1) = v7; /*0x14084fe15*/
    *(_QWORD *)&v43 = a6; /*0x14084fe23*/
    LOBYTE(v10) = 1; /*0x14084fe70*/
    LOBYTE(v11) = 1; /*0x14084fe73*/
    sub_1406F2550((__int128 *)v50, v7, v10, v11, (__int64)aRouteronRollba, 17); /*0x14084fe76*/
    v16 = *(_OWORD *)&v50[16]; /*0x14084fe90*/
    v17 = *(_OWORD *)&v50[32]; /*0x14084fe9e*/
    v19 = *((_QWORD *)&v51 + 1); /*0x14084feac*/
    v18 = v51; /*0x14084feac*/
    v21 = *((_QWORD *)&v52 + 1); /*0x14084feba*/
    result = v52; /*0x14084feba*/
    v22 = *((_QWORD *)&v53 + 1); /*0x14084fec8*/
    v23 = v53; /*0x14084fec8*/
    if ( *(_QWORD *)v50 == -1 ) /*0x14084fed3*/
    {
      if ( *(_QWORD *)&v50[8] == 2 ) /*0x14084ff56*/
      {
        v23 = 8; /*0x14084ff5c*/
        v22 = 0; /*0x14084ff61*/
        v24 = *((_QWORD *)&v51 + 1); /*0x14084ff63*/
        result = *((_QWORD *)&v52 + 1); /*0x14084ff69*/
        v19 = v52; /*0x14084ff69*/
        v21 = 0; /*0x14084ff6c*/
      }
      else
      {
        v24 = v51; /*0x14084fff1*/
        v18 = *(_QWORD *)&v50[40]; /*0x14084fff4*/
        v16 = *(_OWORD *)&v50[8]; /*0x140850000*/
        v17 = *(_OWORD *)&v50[24]; /*0x140850000*/
      }
      v42 = v16; /*0x140850003*/
      v43 = v17; /*0x140850011*/
      v44 = v18; /*0x14085001f*/
      v45 = v24; /*0x140850026*/
      v46 = v19; /*0x14085002d*/
      v47 = result; /*0x140850034*/
      v37 = v21; /*0x14085003b*/
      v38 = v23; /*0x140850042*/
      v39 = v22; /*0x140850049*/
      if ( ((v16 & 1) == 0) | result & 1 ) /*0x140850054*/
      {
        if ( v22 ) /*0x14085005f*/
        {
          if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140850073*/
          {
            sub_140440300((unsigned int)v50, v23, v22, (unsigned int)&unk_141796798, 3); /*0x140850096*/
            v49 = *(_QWORD *)&v50[16]; /*0x1408500a3*/
            v48 = *(_OWORD *)v50; /*0x1408500b1*/
            v40[0] = &v48; /*0x1408500bf*/
            v40[1] = sub_1400015F0; /*0x1408500cd*/
            *(_QWORD *)v50 = 0; /*0x1408500d4*/
            *(_QWORD *)&v50[8] = aCodexmateLibCo_5; /*0x1408500e6*/
            *(_OWORD *)&v50[16] = 0x23u; /*0x1408500ed*/
            *(_QWORD *)&v50[32] = aSrcCoreRelayMa_2; /*0x14085010a*/
            *(_QWORD *)&v50[40] = 25; /*0x140850111*/
            *(_QWORD *)&v51 = 2; /*0x14085011c*/
            *((_QWORD *)&v51 + 1) = aCodexmateLibCo_5; /*0x140850127*/
            *(_QWORD *)&v52 = 35; /*0x14085012e*/
            *((_QWORD *)&v52 + 1) = 0x88B00000001LL; /*0x140850143*/
            *(_QWORD *)&v53 = &unk_1417974BE; /*0x140850151*/
            *((_QWORD *)&v53 + 1) = v40; /*0x14085015f*/
            sub_1412C36A0(v54, v50); /*0x140850174*/
            if ( (_QWORD)v48 ) /*0x140850184*/
              sub_140001660(*((_QWORD *)&v48 + 1), v48, 1); /*0x140850193*/
          }
          *(_QWORD *)a1 = -1; /*0x140850198*/
          v28 = (_QWORD *)(v23 + 8); /*0x14085019f*/
          do /*0x1408501b7*/
          {
            v29 = *(v28 - 1); /*0x1408501bd*/
            if ( v29 ) /*0x1408501c4*/
              sub_140001660(*v28, v29, 1); /*0x1408501cf*/
            v28 += 3; /*0x1408501b0*/
            --v22; /*0x1408501b4*/
          }
          while ( v22 ); /*0x1408501b7*/
        }
        else
        {
          *(_QWORD *)a1 = -1; /*0x1408502c2*/
        }
      }
      else
      {
        sub_140440300((unsigned int)v50, v23, v22, (unsigned int)&unk_141796798, 3); /*0x1408501f3*/
        v49 = *(_QWORD *)&v50[16]; /*0x140850200*/
        v48 = *(_OWORD *)v50; /*0x14085020e*/
        *(_QWORD *)v50 = &v48; /*0x14085021c*/
        *(_QWORD *)&v50[8] = sub_1400015F0; /*0x14085022a*/
        sub_14149C0F0(&v35, &unk_14179747E, v50); /*0x140850246*/
        if ( (_QWORD)v48 ) /*0x140850256*/
          sub_140001660(*((_QWORD *)&v48 + 1), v48, 1); /*0x140850265*/
        *(_QWORD *)(a1 + 24) = v36; /*0x140850271*/
        *(_OWORD *)(a1 + 8) = v35; /*0x14085027c*/
        *(_QWORD *)a1 = 10; /*0x140850280*/
        if ( v22 ) /*0x14085028a*/
        {
          v30 = (_QWORD *)(v23 + 8); /*0x14085028c*/
          do /*0x1408502a7*/
          {
            v31 = *(v30 - 1); /*0x1408502a9*/
            if ( v31 ) /*0x1408502b0*/
              sub_140001660(*v30, v31, 1); /*0x1408502bb*/
            v30 += 3; /*0x1408502a0*/
            --v22; /*0x1408502a4*/
          }
          while ( v22 ); /*0x1408502a7*/
        }
      }
      if ( v21 ) /*0x1408502cc*/
        sub_140001660(v23, 24 * v21, 8); /*0x1408502df*/
      return sub_1406CE2E0(&v42); /*0x1408502eb*/
    }
    else
    {
      *(_OWORD *)a1 = *(_OWORD *)v50; /*0x14084fed5*/
      *(_OWORD *)(a1 + 16) = v16; /*0x14084fedc*/
      *(_OWORD *)(a1 + 32) = v17; /*0x14084fee4*/
      *(_QWORD *)(a1 + 48) = v18; /*0x14084feec*/
      *(_QWORD *)(a1 + 56) = v19; /*0x14084fef0*/
      *(_QWORD *)(a1 + 64) = result; /*0x14084fef4*/
      *(_QWORD *)(a1 + 72) = v21; /*0x14084fef8*/
      *(_QWORD *)(a1 + 80) = v23; /*0x14084fefc*/
      *(_QWORD *)(a1 + 88) = v22; /*0x14084ff00*/
    }
  }
  else
  {
    if ( *(_QWORD *)v50 ) /*0x14084ff0c*/
      sub_140001660(*(_QWORD *)&v50[8], 32LL * *(_QWORD *)v50, 8); /*0x14084ff1e*/
    sub_14085A1E0((__int64)v32, a2); /*0x14084ff2a*/
    if ( v33 || a7 != v34 ) /*0x14084ff3f*/
    {
      v33 = 0; /*0x14084ff74*/
      v34 = a7; /*0x14084ff7b*/
      result = sub_1408582D0(v50, a2, v32); /*0x14084ff90*/
      if ( *(_QWORD *)v50 != -1 ) /*0x14084ff9d*/
      {
        *(_OWORD *)(a1 + 80) = v53; /*0x14084ffa6*/
        *(_OWORD *)(a1 + 64) = v52; /*0x14084ffb1*/
        v25 = *(_OWORD *)v50; /*0x14084ffb5*/
        v26 = *(_OWORD *)&v50[16]; /*0x14084ffbc*/
        v27 = *(_OWORD *)&v50[32]; /*0x14084ffc3*/
        *(_OWORD *)(a1 + 48) = v51; /*0x14084ffd1*/
        *(_OWORD *)(a1 + 32) = v27; /*0x14084ffd5*/
        *(_OWORD *)(a1 + 16) = v26; /*0x14084ffd9*/
        *(_OWORD *)a1 = v25; /*0x14084ffdd*/
        return result; /*0x14084ffe0*/
      }
    }
    else
    {
      result = sub_140018740(v32); /*0x14084ff48*/
    }
    *(_QWORD *)a1 = -1; /*0x14084ffe5*/
  }
  return result; /*0x1408502f1*/
}

// --- refs ---
// 0x14041f680  sub_14041F680
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x1417956b1  aSrcCoreRelayMa_2  // string: "src\core\relay\manager.rs"
// 0x14179743d  unk_14179743D
// 0x1412c36a0  sub_1412C36A0
// 0x141ec8d80  off_141EC8D80
// 0x140489f60  verify_invariants_with_depth
// 0x140001660  sub_140001660
// 0x1406f2550  sub_1406F2550
// 0x14179746d  aRouteronRollba  // string: "RouterOn rollback"
// 0x140440300  sub_140440300
// 0x141796798  unk_141796798
// 0x1400015f0  sub_1400015F0
// 0x1417974be  unk_1417974BE
// 0x14149c0f0  sub_14149C0F0
// 0x14179747e  unk_14179747E
// 0x1406ce2e0  sub_1406CE2E0
// 0x14085a1e0  sub_14085A1E0
// 0x1408582d0  sub_1408582D0
// 0x140018740  sub_140018740
