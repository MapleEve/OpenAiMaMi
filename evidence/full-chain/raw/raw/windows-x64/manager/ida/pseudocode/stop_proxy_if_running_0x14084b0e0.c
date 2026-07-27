// addr: 0x14084b0e0
// name (owner-map): stop_proxy_if_running
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::stop_proxy_if_running | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall stop_proxy_if_running(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 *v6; // r15
  char v7; // r14
  char v8; // r13
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // cl
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  _BYTE *v16; // r14
  char v17; // al
  volatile signed __int64 *v18; // r13
  char v19; // al
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // r12
  char v24; // al
  __int64 v25; // rdi
  char *v26; // r14
  char *v27; // r14
  char v28; // bl
  char *v29; // rdi
  char *v30; // rbx
  char v31; // cl
  unsigned __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  const char *v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall *v35)(); // [rsp+40h] [rbp-40h]
  const char *v36; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  __int64 v38; // [rsp+58h] [rbp-28h]
  const char *v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  __int64 v41; // [rsp+70h] [rbp-10h]
  void *v42; // [rsp+78h] [rbp-8h]
  __m256i *v43; // [rsp+80h] [rbp+0h]
  char v44; // [rsp+F0h] [rbp+70h]
  __m256i v45; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v46; // [rsp+170h] [rbp+F0h]
  __int128 v47; // [rsp+180h] [rbp+100h]
  __int128 v48; // [rsp+190h] [rbp+110h]
  __int128 v49; // [rsp+1A0h] [rbp+120h]
  __int64 v50; // [rsp+1B0h] [rbp+130h] BYREF
  const char *v51; // [rsp+1B8h] [rbp+138h]
  __int64 v52; // [rsp+1C0h] [rbp+140h]
  __int64 v53; // [rsp+1C8h] [rbp+148h]
  const char *v54; // [rsp+1D0h] [rbp+150h]
  __int64 v55; // [rsp+1D8h] [rbp+158h]
  __int64 v56; // [rsp+1E0h] [rbp+160h]
  const char *v57; // [rsp+1E8h] [rbp+168h]
  __int64 v58; // [rsp+1F0h] [rbp+170h]
  __int64 v59; // [rsp+1F8h] [rbp+178h]
  void *v60; // [rsp+200h] [rbp+180h]
  __int128 *v61; // [rsp+208h] [rbp+188h]
  __m256i v62; // [rsp+210h] [rbp+190h] BYREF
  __int128 v63; // [rsp+230h] [rbp+1B0h]
  __int128 v64; // [rsp+240h] [rbp+1C0h]
  __int128 v65; // [rsp+250h] [rbp+1D0h]
  __int128 v66; // [rsp+260h] [rbp+1E0h]
  __int128 v67; // [rsp+270h] [rbp+1F0h] BYREF
  __int16 v68; // [rsp+28Ch] [rbp+20Ch] BYREF
  char v69; // [rsp+28Eh] [rbp+20Eh] BYREF
  char v70; // [rsp+28Fh] [rbp+20Fh]
  __int64 v71; // [rsp+290h] [rbp+210h]

  v71 = -2; /*0x14084b0fb*/
  v2 = a1; /*0x14084b106*/
  v3 = a1[3]; /*0x14084b109*/
  v4 = a1[7]; /*0x14084b10d*/
  v5 = (char *)(v3 + 16); /*0x14084b111*/
  LOBYTE(a1) = 1; /*0x14084b116*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 16), 1, 0) ) /*0x14084b11a*/
    sub_1416C15B0((volatile void *)(v3 + 16)); /*0x14084b771*/
  v6 = off_141EC90B8; /*0x14084b127*/
  if ( 2 * *off_141EC90B8 ) /*0x14084b131*/
    v7 = sub_1416C2250(a1, a2) ^ 1; /*0x14084b783*/
  else
    v7 = 0; /*0x14084b13d*/
  v8 = *(_BYTE *)(v3 + 17); /*0x14084b140*/
  v33 = (const char *)(v3 + 16); /*0x14084b14e*/
  LOBYTE(v34) = v7; /*0x14084b152*/
  v32 = v8 != 0; /*0x14084b156*/
  if ( v8 ) /*0x14084b15a*/
  {
    nullsub_1(a1); /*0x14084b160*/
    v9 = (char *)sub_140001650(34, 1); /*0x14084b16f*/
    if ( !v9 ) /*0x14084b177*/
    {
      v70 = v8; /*0x14084b879*/
      sub_1416C2D4B(1, 34); /*0x14084b88a*/
    }
    qmemcpy(v9, "relay proxy state lock is poisoned", 34); /*0x14084b18f*/
    if ( !v7 ) /*0x14084b19b*/
    {
      v11 = 2 * *v6; /*0x14084b1a0*/
      if ( v11 ) /*0x14084b1a6*/
      {
        v30 = v9; /*0x14084b82a*/
        v31 = sub_1416C2250(v11, v10); /*0x14084b832*/
        v9 = v30; /*0x14084b834*/
        if ( !v31 ) /*0x14084b839*/
          *(_BYTE *)(v3 + 17) = 1; /*0x14084b83f*/
      }
    }
    v12 = *v5; /*0x14084b1ae*/
    *v5 = 0; /*0x14084b1ae*/
    if ( v12 == 2 ) /*0x14084b1b3*/
    {
      v29 = v9; /*0x14084b7c7*/
      WakeByAddressSingle((PVOID)(v3 + 16)); /*0x14084b7ca*/
      v9 = v29; /*0x14084b7cf*/
    }
    v13 = 34; /*0x14084b1b9*/
    v14 = 34; /*0x14084b1be*/
LABEL_12:
    v50 = 10; /*0x14084b1c3*/
    v51 = (const char *)v14; /*0x14084b1ce*/
    v52 = (__int64)v9; /*0x14084b1d5*/
    v53 = v13; /*0x14084b1dc*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14084b1f1*/
    {
      v62.m256i_i64[0] = (__int64)&v50; /*0x14084b1fe*/
      v62.m256i_i64[1] = (__int64)sub_140B036A0; /*0x14084b20c*/
      v32 = 0; /*0x14084b213*/
      v33 = aCodexmateLibCo_5; /*0x14084b222*/
      v34 = 35; /*0x14084b226*/
      v35 = nullptr; /*0x14084b22e*/
      v36 = aSrcCoreRelayMa_2; /*0x14084b23d*/
      v37 = 25; /*0x14084b241*/
      v38 = 2; /*0x14084b249*/
      v39 = aCodexmateLibCo_5; /*0x14084b251*/
      v40 = 35; /*0x14084b255*/
      v41 = 0x92E00000001LL; /*0x14084b267*/
      v42 = &unk_141796B60; /*0x14084b272*/
      v43 = &v62; /*0x14084b27d*/
      sub_1412C36A0(&v69, &v32); /*0x14084b28c*/
    }
    sub_1407DA310(&v50); /*0x14084b299*/
    goto LABEL_15; /*0x14084b299*/
  }
  v70 = 0; /*0x14084b2fd*/
  v18 = *(volatile signed __int64 **)(v3 + 24); /*0x14084b304*/
  v67 = *(_OWORD *)(v3 + 32); /*0x14084b30f*/
  *(_QWORD *)(v3 + 24) = 0; /*0x14084b316*/
  if ( !v7 && 2 * *v6 && !(unsigned __int8)sub_1416C2250(a1, a2) ) /*0x14084b84a*/
    *(_BYTE *)(v3 + 17) = 1; /*0x14084b858*/
  v19 = *v5; /*0x14084b335*/
  *v5 = 0; /*0x14084b335*/
  if ( v19 == 2 ) /*0x14084b339*/
    WakeByAddressSingle((PVOID)(v3 + 16)); /*0x14084b7f0*/
  if ( v18 ) /*0x14084b342*/
  {
    v62.m256i_i64[0] = (__int64)v18; /*0x14084b348*/
    *(_OWORD *)&v62.m256i_u64[1] = v67; /*0x14084b356*/
    v68 = WORD4(v67); /*0x14084b364*/
    if ( v4 ) /*0x14084b36e*/
    {
      v32 = (unsigned __int64)&v62; /*0x14084b37f*/
      v44 = 0; /*0x14084b383*/
      if ( (unsigned __int8)sub_14058B220(v4 + 16, &v32, &off_141796B10) ) /*0x14084b395*/
      {
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v62.m256i_i64[0]) ) /*0x14084b3aa*/
          sub_140573D70(&v62); /*0x14084b3b7*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v62.m256i_i64[1]) ) /*0x14084b3c4*/
          sub_140573D40(&v62.m256i_u64[1]); /*0x14084b3d5*/
        goto LABEL_15; /*0x14084b3da*/
      }
      *(_OWORD *)v45.m256i_i8 = 0x1388u; /*0x14084b6b2*/
      v32 = (unsigned __int64)&v68; /*0x14084b6c4*/
      v33 = (const char *)sub_1414AAE30; /*0x14084b6cf*/
      v34 = (__int64)&v45; /*0x14084b6da*/
      v35 = sub_1414A9600; /*0x14084b6e5*/
      sub_14149C0F0(&v50, &unk_141796B28, &v32); /*0x14084b6fb*/
      v14 = v50; /*0x14084b701*/
      v9 = (char *)v51; /*0x14084b708*/
      v13 = v52; /*0x14084b70f*/
      if ( _InterlockedDecrement64((volatile signed __int64 *)v62.m256i_i64[0]) ) /*0x14084b71d*/
      {
LABEL_59:
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v62.m256i_i64[1]) ) /*0x14084b73d*/
        {
          v27 = v9; /*0x14084b74e*/
          sub_140573D40(&v62.m256i_u64[1]); /*0x14084b751*/
          v9 = v27; /*0x14084b756*/
        }
        goto LABEL_12; /*0x14084b759*/
      }
    }
    else
    {
      nullsub_1(a1); /*0x14084b655*/
      v13 = 34; /*0x14084b65a*/
      v9 = (char *)sub_140001650(34, 1); /*0x14084b669*/
      if ( !v9 ) /*0x14084b671*/
        sub_1416C2D4B(1, 34); /*0x14084b89c*/
      qmemcpy(v9, "relay proxy runtime is unavailable", 34); /*0x14084b689*/
      v14 = 34; /*0x14084b692*/
      if ( _InterlockedDecrement64(v18) ) /*0x14084b697*/
        goto LABEL_59; /*0x14084b69c*/
    }
    v26 = v9; /*0x14084b72b*/
    sub_140573D70(&v62); /*0x14084b72e*/
    v9 = v26; /*0x14084b733*/
    goto LABEL_59; /*0x14084b733*/
  }
LABEL_15:
  v15 = v2[1]; /*0x14084b29e*/
  LOBYTE(a1) = 1; /*0x14084b2a2*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v15 + 16), 1, 0) ) /*0x14084b2a6*/
  {
    sub_1416C15B0((volatile void *)(v15 + 16)); /*0x14084b790*/
    if ( !(2 * *v6) ) /*0x14084b79e*/
    {
LABEL_17:
      v16 = (_BYTE *)(v15 + 17); /*0x14084b2c0*/
      if ( *(_BYTE *)(v15 + 17) ) /*0x14084b2c4*/
        goto LABEL_18; /*0x14084b2ca*/
      v20 = 0; /*0x14084b3df*/
      if ( !*(_BYTE *)(v15 + 146) ) /*0x14084b3e1*/
        goto LABEL_33; /*0x14084b3e8*/
LABEL_37:
      v21 = *(_QWORD *)(v15 + 72); /*0x14084b40d*/
      if ( v21 ) /*0x14084b414*/
        sub_140001660(*(_QWORD *)(v15 + 80), v21, 1); /*0x14084b420*/
      v22 = *(_QWORD *)(v15 + 96); /*0x14084b425*/
      if ( v22 ) /*0x14084b42c*/
        sub_140001660(*(_QWORD *)(v15 + 104), v22, 1); /*0x14084b438*/
      a2 = *(_QWORD *)(v15 + 120); /*0x14084b43d*/
      if ( a2 != -1 && a2 ) /*0x14084b44a*/
        sub_140001660(*(_QWORD *)(v15 + 128), a2, 1); /*0x14084b459*/
      *(_QWORD *)(v15 + 72) = 0; /*0x14084b45e*/
      *(_QWORD *)(v15 + 80) = 1; /*0x14084b466*/
      *(_OWORD *)(v15 + 88) = 0; /*0x14084b471*/
      *(_QWORD *)(v15 + 104) = 1; /*0x14084b475*/
      *(_QWORD *)(v15 + 112) = 0; /*0x14084b47d*/
      *(_QWORD *)(v15 + 120) = -1; /*0x14084b485*/
      *(_WORD *)(v15 + 144) = 0; /*0x14084b48d*/
      *(_BYTE *)(v15 + 146) = 0; /*0x14084b496*/
      v23 = 1; /*0x14084b49d*/
      if ( v20 ) /*0x14084b4a2*/
        goto LABEL_46; /*0x14084b4a2*/
      goto LABEL_45; /*0x14084b4a2*/
    }
  }
  else if ( !(2 * *v6) ) /*0x14084b2b4*/
  {
    goto LABEL_17; /*0x14084b2ba*/
  }
  v28 = sub_1416C2250(a1, a2); /*0x14084b7a9*/
  v16 = (_BYTE *)(v15 + 17); /*0x14084b7ab*/
  if ( *(_BYTE *)(v15 + 17) ) /*0x14084b7af*/
  {
    if ( !v28 ) /*0x14084b7b9*/
    {
LABEL_19:
      v17 = *(_BYTE *)(v15 + 16); /*0x14084b2df*/
      *(_BYTE *)(v15 + 16) = 0; /*0x14084b2e1*/
      if ( v17 == 2 ) /*0x14084b2e6*/
        WakeByAddressSingle((PVOID)(v15 + 16)); /*0x14084b2f3*/
      return; /*0x14084b2f8*/
    }
LABEL_18:
    if ( 2 * *v6 && !(unsigned __int8)sub_1416C2250(a1, a2) ) /*0x14084b7d7*/
      *v16 = 1; /*0x14084b7e4*/
    goto LABEL_19; /*0x14084b7e8*/
  }
  v20 = v28 ^ 1; /*0x14084b815*/
  if ( *(_BYTE *)(v15 + 146) ) /*0x14084b818*/
    goto LABEL_37; /*0x14084b81f*/
LABEL_33:
  if ( *(_WORD *)(v15 + 144) || *(_QWORD *)(v15 + 88) || *(_QWORD *)(v15 + 112) || *(_QWORD *)(v15 + 120) != -1 ) /*0x14084b407*/
    goto LABEL_37; /*0x14084b407*/
  v23 = 0; /*0x14084b75e*/
  if ( !v20 ) /*0x14084b763*/
  {
LABEL_45:
    if ( 2 * *v6 && !(unsigned __int8)sub_1416C2250(a1, a2) ) /*0x14084b863*/
      *v16 = 1; /*0x14084b870*/
  }
LABEL_46:
  v24 = *(_BYTE *)(v15 + 16); /*0x14084b4b3*/
  *(_BYTE *)(v15 + 16) = 0; /*0x14084b4b5*/
  if ( v24 == 2 ) /*0x14084b4ba*/
  {
    WakeByAddressSingle((PVOID)(v15 + 16)); /*0x14084b802*/
    if ( !v23 ) /*0x14084b80a*/
      return; /*0x14084b80a*/
  }
  else if ( !v23 ) /*0x14084b4c3*/
  {
    return; /*0x14084b4c3*/
  }
  v25 = *v2 + 16LL; /*0x14084b4cc*/
  sub_14085A1E0((__int64)&v32, (__int64)v2); /*0x14084b4da*/
  sub_1404D8F10(&v45, v25, &v32); /*0x14084b4ed*/
  if ( v45.m256i_i32[0] != -1 ) /*0x14084b4fa*/
  {
    v66 = v49; /*0x14084b507*/
    v65 = v48; /*0x14084b515*/
    v64 = v47; /*0x14084b538*/
    v63 = v46; /*0x14084b53f*/
    v62 = v45; /*0x14084b546*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14084b562*/
    {
      *(_QWORD *)&v67 = &v62; /*0x14084b56f*/
      *((_QWORD *)&v67 + 1) = sub_140B036A0; /*0x14084b57d*/
      v50 = 0; /*0x14084b584*/
      v51 = aCodexmateLibCo_5; /*0x14084b596*/
      v52 = 35; /*0x14084b59d*/
      v53 = 0; /*0x14084b5a8*/
      v54 = aSrcCoreRelayMa_2; /*0x14084b5ba*/
      v55 = 25; /*0x14084b5c1*/
      v56 = 2; /*0x14084b5cc*/
      v57 = aCodexmateLibCo_5; /*0x14084b5d7*/
      v58 = 35; /*0x14084b5de*/
      v59 = 0x94100000001LL; /*0x14084b5f3*/
      v60 = &unk_141796B95; /*0x14084b601*/
      v61 = &v67; /*0x14084b60f*/
      sub_1412C36A0(&v69, &v50); /*0x14084b624*/
    }
    sub_1407DA310(&v62); /*0x14084b631*/
  }
  sub_140018740(&v32); /*0x14084b63b*/
}

// --- refs ---
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x1416c1670  WakeByAddressSingle
// 0x140b036a0  sub_140B036A0
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x1417956b1  aSrcCoreRelayMa_2  // string: "src\core\relay\manager.rs"
// 0x141796b60  unk_141796B60
// 0x1412c36a0  sub_1412C36A0
// 0x141ec8d80  off_141EC8D80
// 0x1407da310  sub_1407DA310
// 0x140573d70  sub_140573D70
// 0x140573d40  sub_140573D40
// 0x14058b220  sub_14058B220
// 0x141796b10  off_141796B10
// 0x1414aae30  sub_1414AAE30
// 0x1414a9600  sub_1414A9600
// 0x14149c0f0  sub_14149C0F0
// 0x141796b28  unk_141796B28
// 0x140001660  sub_140001660
// 0x14085a1e0  sub_14085A1E0
// 0x1404d8f10  sub_1404D8F10
// 0x141796b95  unk_141796B95
// 0x140018740  sub_140018740
