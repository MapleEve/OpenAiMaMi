// addr: 0x1408509a0
// name (owner-map): set_codex_router_no_account_mode_0
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode | 跨平台字符串签名匹配(名↔函数一致)
__int128 *__fastcall set_codex_router_no_account_mode_0(__int128 *a1, _QWORD *a2, char a3, char a4, __int128 a5)
{
  __int128 *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v12; // r13
  char *v13; // r14
  __int64 *v14; // r15
  unsigned int v15; // r12d
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // cl
  __int64 v21; // rax
  PVOID v22; // rcx
  __int64 v23; // rdx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // r14
  void *v31; // rax
  char v32; // r14
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rcx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int64 v43; // rax
  __int64 v44; // rdi
  char v45; // al
  PVOID v46; // rcx
  char v47; // al
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r8
  char v55; // bl
  char v56; // bl
  void *v57; // rdi
  void *v58; // rdi
  char v59; // cl
  _BYTE v60[296]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v61; // [rsp+180h] [rbp+100h] BYREF
  __int128 v62; // [rsp+188h] [rbp+108h]
  __int128 v63; // [rsp+198h] [rbp+118h]
  __int128 v64; // [rsp+1A8h] [rbp+128h]
  __int128 v65; // [rsp+1B8h] [rbp+138h]
  __int128 v66; // [rsp+1C8h] [rbp+148h]
  __int128 v67; // [rsp+1D8h] [rbp+158h]
  char v68[888]; // [rsp+1E8h] [rbp+168h] BYREF
  char v69[8]; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v70; // [rsp+568h] [rbp+4E8h]
  __int64 v71; // [rsp+570h] [rbp+4F0h]
  char v72; // [rsp+685h] [rbp+605h]
  _BYTE v73[292]; // [rsp+688h] [rbp+608h] BYREF
  char v74; // [rsp+7ACh] [rbp+72Ch]
  char v75; // [rsp+7ADh] [rbp+72Dh]
  _OWORD v76[18]; // [rsp+7B0h] [rbp+730h] BYREF
  char v77; // [rsp+8D5h] [rbp+855h]
  _BYTE v78[104]; // [rsp+8E0h] [rbp+860h] BYREF
  char v79[192]; // [rsp+948h] [rbp+8C8h] BYREF
  __int128 v80; // [rsp+A08h] [rbp+988h]
  __int64 v81; // [rsp+A18h] [rbp+998h]
  __int128 v82; // [rsp+CC8h] [rbp+C48h] BYREF
  __int64 v83; // [rsp+CD8h] [rbp+C58h]
  __int128 v84; // [rsp+CE0h] [rbp+C60h] BYREF
  __int64 v85; // [rsp+CF0h] [rbp+C70h]
  __int128 v86; // [rsp+CF8h] [rbp+C78h] BYREF
  __int64 v87; // [rsp+D08h] [rbp+C88h]
  __int128 v88; // [rsp+D10h] [rbp+C90h]
  __int128 v89; // [rsp+D20h] [rbp+CA0h]
  __int128 v90; // [rsp+D30h] [rbp+CB0h] BYREF
  __int128 v91; // [rsp+D40h] [rbp+CC0h]
  __int128 v92; // [rsp+D50h] [rbp+CD0h]
  __int128 v93; // [rsp+D60h] [rbp+CE0h]
  __int128 v94; // [rsp+D70h] [rbp+CF0h]
  __int128 v95; // [rsp+D80h] [rbp+D00h]
  __int128 v96; // [rsp+E60h] [rbp+DE0h] BYREF
  __int64 v97; // [rsp+E70h] [rbp+DF0h]
  __int128 v98; // [rsp+E78h] [rbp+DF8h]
  __int64 v99; // [rsp+E88h] [rbp+E08h]
  char v100; // [rsp+E90h] [rbp+E10h]
  _BYTE v101[80]; // [rsp+EA0h] [rbp+E20h] BYREF
  __int128 v102; // [rsp+EF0h] [rbp+E70h]
  _QWORD v103[3]; // [rsp+F00h] [rbp+E80h] BYREF
  __int128 v104; // [rsp+F18h] [rbp+E98h] BYREF
  __int128 v105; // [rsp+F28h] [rbp+EA8h]
  __int128 v106; // [rsp+F38h] [rbp+EB8h]
  __int128 v107; // [rsp+F48h] [rbp+EC8h]
  _QWORD v108[3]; // [rsp+F58h] [rbp+ED8h] BYREF
  __int128 v109; // [rsp+F70h] [rbp+EF0h] BYREF
  __int64 v110; // [rsp+F80h] [rbp+F00h]
  PVOID v111; // [rsp+F88h] [rbp+F08h]
  PVOID Address; // [rsp+F90h] [rbp+F10h]
  __int64 v113; // [rsp+F98h] [rbp+F18h]
  __int128 v114; // [rsp+FA0h] [rbp+F20h] BYREF
  __int64 v115; // [rsp+FB0h] [rbp+F30h]
  unsigned int v116; // [rsp+FC4h] [rbp+F44h]
  char v117; // [rsp+FCAh] [rbp+F4Ah] BYREF
  _BYTE v118[2]; // [rsp+FCBh] [rbp+F4Bh] BYREF
  char v119; // [rsp+FCDh] [rbp+F4Dh] BYREF
  unsigned __int8 v120; // [rsp+FCEh] [rbp+F4Eh]
  char v121; // [rsp+FCFh] [rbp+F4Fh] BYREF
  __int64 v122; // [rsp+FD0h] [rbp+F50h]

  v122 = -2; /*0x1408509bb*/
  v6 = a1; /*0x1408509c9*/
  v121 = a3; /*0x1408509d3*/
  v109 = a5; /*0x1408509da*/
  v7 = a2[2]; /*0x1408509e1*/
  if ( *(_QWORD *)(v7 + 16) != -1 ) /*0x1408509ea*/
  {
    sub_14149C500(&v78[8], v7 + 16); /*0x1408509f7*/
    *(_QWORD *)v78 = 9; /*0x1408509fc*/
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v78[80]; /*0x140850a0e*/
    v8 = *(_OWORD *)&v78[16]; /*0x140850a12*/
    v9 = *(_OWORD *)&v78[32]; /*0x140850a19*/
    v10 = *(_OWORD *)&v78[48]; /*0x140850a20*/
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v78[64]; /*0x140850a2e*/
    *(__int128 *)((char *)v6 + 56) = v10; /*0x140850a32*/
    *(__int128 *)((char *)v6 + 40) = v9; /*0x140850a36*/
    *(__int128 *)((char *)v6 + 24) = v8; /*0x140850a3a*/
    *(__int128 *)((char *)v6 + 8) = *(_OWORD *)v78; /*0x140850a45*/
LABEL_13:
    *(_QWORD *)v6 = -1; /*0x140850b18*/
    return v6; /*0x140850b18*/
  }
  v12 = a2[4]; /*0x140850a5c*/
  v13 = (char *)(v12 + 16); /*0x140850a60*/
  LOBYTE(a1) = 1; /*0x140850a64*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) ) /*0x140850a68*/
    sub_1416C15B0((volatile void *)(v12 + 16)); /*0x140850b39*/
  v14 = off_141EC90B8; /*0x140850a74*/
  if ( 2 * *off_141EC90B8 ) /*0x140850a7e*/
  {
    v15 = sub_1416C2250(a1, v7); /*0x140850b48*/
    LOBYTE(v15) = v15 ^ 1; /*0x140850b4b*/
    if ( *(_BYTE *)(v12 + 17) ) /*0x140850b4f*/
      goto LABEL_7; /*0x140850b56*/
  }
  else
  {
    v15 = 0; /*0x140850a8a*/
    if ( *(_BYTE *)(v12 + 17) ) /*0x140850a8d*/
    {
LABEL_7:
      nullsub_1(a1); /*0x140850a9a*/
      v16 = (void *)sub_140001650(40, 1); /*0x140850aa9*/
      if ( !v16 ) /*0x140850ab1*/
      {
        v116 = v15; /*0x140851a13*/
        Address = (PVOID)(v12 + 16); /*0x140851a1a*/
        sub_1416C2D4B(1, 40); /*0x140851a2b*/
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40); /*0x140850ac9*/
      if ( !(_BYTE)v15 ) /*0x140850add*/
      {
        v18 = 2 * *v14; /*0x140850ae2*/
        if ( v18 ) /*0x140850ae8*/
        {
          v58 = v16; /*0x1408519b4*/
          v59 = sub_1416C2250(v18, v17); /*0x1408519bc*/
          v16 = v58; /*0x1408519be*/
          if ( !v59 ) /*0x1408519c3*/
            *(_BYTE *)(v12 + 17) = 1; /*0x1408519c9*/
        }
      }
      v19 = *v13; /*0x140850af0*/
      *v13 = 0; /*0x140850af0*/
      if ( v19 == 2 ) /*0x140850af6*/
      {
        v57 = v16; /*0x1408519a4*/
        WakeByAddressSingle((PVOID)(v12 + 16)); /*0x1408519a7*/
        v16 = v57; /*0x1408519ac*/
      }
      *((_QWORD *)v6 + 1) = 10; /*0x140850afc*/
      *((_QWORD *)v6 + 2) = 40; /*0x140850b04*/
      *((_QWORD *)v6 + 3) = v16; /*0x140850b0c*/
      *((_QWORD *)v6 + 4) = 40; /*0x140850b10*/
      goto LABEL_13; /*0x140850b10*/
    }
  }
  v116 = v15; /*0x140850b5c*/
  Address = (PVOID)(v12 + 16); /*0x140850b63*/
  lock(v78, a2 + 5, aSwitchingRoute, 29); /*0x140850b82*/
  v22 = *(PVOID *)&v78[8]; /*0x140850b8f*/
  v21 = *(_QWORD *)v78; /*0x140850b8f*/
  v23 = v78[16]; /*0x140850b96*/
  if ( *(_QWORD *)v78 == -1 ) /*0x140850ba1*/
  {
    v120 = v78[16]; /*0x140850bf1*/
    v111 = *(PVOID *)&v78[8]; /*0x140850bf7*/
    sub_14085A1E0((__int64)v73, (__int64)a2); /*0x140850c08*/
    v118[1] = v74; /*0x140850c15*/
    if ( !v74 ) /*0x140850c1d*/
    {
      sub_141684120(v60, v73, 296); /*0x140850f63*/
      v60[293] = v121; /*0x140850f6f*/
      sub_1408582D0(v78, a2, v60); /*0x140850f82*/
      if ( *(_DWORD *)v78 == -1 ) /*0x140850f8f*/
      {
        sub_1408473B0(v78, a2); /*0x14085103b*/
        sub_141684120(v6, v78, 296); /*0x140851051*/
        *((_QWORD *)v6 + 37) = -1; /*0x140851056*/
        *((_BYTE *)v6 + 320) = 0; /*0x140851061*/
      }
      else
      {
        *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v78[80]; /*0x140850f9c*/
        *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v78[64]; /*0x140850fa7*/
        v37 = *(_OWORD *)v78; /*0x140850fab*/
        v38 = *(_OWORD *)&v78[16]; /*0x140850fb2*/
        v39 = *(_OWORD *)&v78[32]; /*0x140850fb9*/
        *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v78[48]; /*0x140850fc7*/
        *(__int128 *)((char *)v6 + 40) = v39; /*0x140850fcb*/
        *(__int128 *)((char *)v6 + 24) = v38; /*0x140850fcf*/
        *(__int128 *)((char *)v6 + 8) = v37; /*0x140850fd3*/
        *(_QWORD *)v6 = -1; /*0x140850fd7*/
      }
      goto LABEL_40; /*0x140850fde*/
    }
    transition_paths(v78, *a2); /*0x140850c2d*/
    v27 = *(_QWORD *)v78; /*0x140850c33*/
    v90 = *(_OWORD *)&v78[8]; /*0x140850c41*/
    v91 = *(_OWORD *)&v78[24]; /*0x140850c4f*/
    v92 = *(_OWORD *)&v78[40]; /*0x140850c5d*/
    v93 = *(_OWORD *)&v78[56]; /*0x140850c6b*/
    v94 = *(_OWORD *)&v78[72]; /*0x140850c79*/
    v95 = *(_OWORD *)&v78[88]; /*0x140850c87*/
    if ( *(_QWORD *)v78 == -1 ) /*0x140850c92*/
    {
      *(__int128 *)((char *)v6 + 88) = v95; /*0x140850fea*/
      *(__int128 *)((char *)v6 + 72) = v94; /*0x140850ff5*/
      v40 = v90; /*0x140850ff9*/
      v41 = v91; /*0x140851000*/
      v42 = v92; /*0x140851007*/
      *(__int128 *)((char *)v6 + 56) = v93; /*0x140851015*/
      *(__int128 *)((char *)v6 + 40) = v42; /*0x140851019*/
      *(__int128 *)((char *)v6 + 24) = v41; /*0x14085101d*/
      *(__int128 *)((char *)v6 + 8) = v40; /*0x140851021*/
      *(_QWORD *)v6 = -1; /*0x140851025*/
LABEL_39:
      sub_140018740(v73); /*0x1408510ec*/
LABEL_40:
      if ( (v120 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v36, v23) ) /*0x1408519f5*/
        *((_BYTE *)v111 + 1) = 1; /*0x140851a0a*/
      v22 = v111; /*0x140851113*/
      v45 = *(_BYTE *)v111; /*0x14085111a*/
      *(_BYTE *)v111 = 0; /*0x14085111a*/
      if ( v45 == 2 ) /*0x14085111e*/
        WakeByAddressSingle(v22); /*0x1408519ea*/
      goto LABEL_44; /*0x1408519ea*/
    }
    sub_141684120(v68, v79, 888); /*0x140850cac*/
    v62 = v90; /*0x140850ccd*/
    v63 = v91; /*0x140850cd4*/
    v64 = v92; /*0x140850cdb*/
    v65 = v93; /*0x140850ce2*/
    v66 = v94; /*0x140850cf0*/
    v67 = v95; /*0x140850cfe*/
    v61 = v27; /*0x140850d05*/
    if ( v75 == v121 ) /*0x140850d19*/
    {
      sub_140852800((unsigned int)v78, a2[3], (unsigned int)&v61, 0, 0); /*0x140850d35*/
      v29 = *(_QWORD *)&v78[16]; /*0x140850d3b*/
      sub_140009E00(v78); /*0x140850d49*/
      if ( !v29 ) /*0x140850d51*/
      {
        codex_config_stale_reason(v78, a2); /*0x140851398*/
        if ( *(_QWORD *)v78 == -1 ) /*0x1408513a9*/
        {
          sub_1408473B0(v78, a2); /*0x14085140e*/
          v55 = v75; /*0x140851414*/
          sub_141684120(v6, v78, 296); /*0x14085142b*/
          *((_QWORD *)v6 + 37) = -1; /*0x140851430*/
          *((_BYTE *)v6 + 320) = v55; /*0x14085143b*/
          goto LABEL_38; /*0x140851441*/
        }
        if ( *(_QWORD *)v78 ) /*0x1408513ae*/
          sub_140001660(*(_QWORD *)&v78[8], *(_QWORD *)v78, 1); /*0x1408513c1*/
      }
    }
    v118[0] = a4 + 4; /*0x140850d5b*/
    v103[0] = &v117; /*0x140850d69*/
    v103[1] = &v109; /*0x140850d77*/
    v103[2] = v118; /*0x140850d85*/
    v117 = 1; /*0x140850d8c*/
    v30 = v109; /*0x140850d93*/
    if ( (_QWORD)v109 ) /*0x140850d9d*/
    {
      v113 = *((_QWORD *)&v109 + 1); /*0x140850daa*/
      nullsub_1(v28); /*0x140850db1*/
      v31 = (void *)sub_140001650(14, 1); /*0x140850dc0*/
      if ( !v31 ) /*0x140850dc8*/
        sub_1416C2D4B(1, 14); /*0x140851a3d*/
      qmemcpy(v31, "stopping_codex", 14); /*0x140850de6*/
      *(_QWORD *)v78 = 14; /*0x140850de9*/
      *(_QWORD *)&v78[8] = v31; /*0x140850df4*/
      *(_QWORD *)&v78[16] = 14; /*0x140850dfb*/
      v78[24] = 1; /*0x140850e06*/
      v78[25] = a4 + 4; /*0x140850e0d*/
      (*(void (__fastcall **)(__int64, _BYTE *))(v113 + 40))(v30, v78); /*0x140850e25*/
    }
    sub_140892360(v69, v73); /*0x140850e37*/
    v32 = v121; /*0x140850e3d*/
    v72 = v121; /*0x140850e44*/
    sub_140319B20(&v90, v70, v70 + 232 * v71); /*0x140850e67*/
    sub_140578870(v78, v69); /*0x140850e7e*/
    v97 = v91; /*0x140850e8b*/
    v96 = v90; /*0x140850e99*/
    v98 = *(_OWORD *)v78; /*0x140850ea7*/
    v99 = *(_QWORD *)&v78[16]; /*0x140850eb5*/
    v100 = v32; /*0x140850ebc*/
    if ( (_QWORD)v91 && v99 ) /*0x140850ed4*/
    {
      if ( v121 || (sub_1404960A0(v78, &v61), *(_DWORD *)v78 == -1) ) /*0x140850f02*/
      {
        *(_QWORD *)v78 = v103; /*0x140851160*/
        *(_QWORD *)&v78[8] = &v121; /*0x14085116e*/
        *(_QWORD *)&v78[16] = &v61; /*0x14085117c*/
        *(_QWORD *)&v78[24] = a2; /*0x140851183*/
        *(_QWORD *)&v78[32] = &v96; /*0x140851191*/
        sub_1406F79D0((__int128 *)v101, (__int64)&v61, 0, 0, (__int64)aRouterAuthMode, 23); /*0x1408511d3*/
        if ( *(_DWORD *)v101 == -1 ) /*0x1408511e0*/
        {
          if ( *(_QWORD *)&v101[8] == 2 ) /*0x1408513d3*/
          {
            v48 = *(_OWORD *)&v101[16]; /*0x1408513d9*/
            v49 = *(_OWORD *)&v101[32]; /*0x1408513e0*/
            v50 = *(_OWORD *)&v101[48]; /*0x1408513e7*/
            v51 = *(_OWORD *)&v101[64]; /*0x1408513ee*/
            v52 = 8; /*0x1408513f5*/
            v53 = 0; /*0x1408513fa*/
            v54 = 0; /*0x1408513fc*/
          }
          else
          {
            v48 = *(_OWORD *)&v101[8]; /*0x1408514c4*/
            v49 = *(_OWORD *)&v101[24]; /*0x1408514cb*/
            v50 = *(_OWORD *)&v101[40]; /*0x1408514d2*/
            v51 = *(_OWORD *)&v101[56]; /*0x1408514d9*/
            v53 = *(_QWORD *)&v101[72]; /*0x1408514e0*/
            v54 = *((_QWORD *)&v102 + 1); /*0x1408514ee*/
            v52 = v102; /*0x1408514ee*/
          }
          v104 = v48; /*0x1408514f5*/
          v105 = v49; /*0x1408514fc*/
          v106 = v50; /*0x140851503*/
          v107 = v51; /*0x14085150a*/
          v108[0] = v53; /*0x140851511*/
          v108[1] = v52; /*0x140851518*/
          v108[2] = v54; /*0x14085151f*/
          if ( v54 ) /*0x140851529*/
          {
            if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085153d*/
            {
              sub_140440300((unsigned int)v78, v52, v54, (unsigned int)&unk_141796798, 3); /*0x14085155a*/
              *(_QWORD *)&v91 = *(_QWORD *)&v78[16]; /*0x140851567*/
              v90 = *(_OWORD *)v78; /*0x140851575*/
              *(_QWORD *)&v76[0] = &v90; /*0x140851583*/
              *((_QWORD *)&v76[0] + 1) = sub_1400015F0; /*0x140851591*/
              *(_QWORD *)v78 = aCodexmateLibCo_5; /*0x14085159f*/
              *(_QWORD *)&v78[8] = 35; /*0x1408515a6*/
              *(_QWORD *)&v78[16] = aCodexmateLibCo_5; /*0x1408515b1*/
              *(_QWORD *)&v78[24] = 35; /*0x1408515b8*/
              *(_QWORD *)&v78[32] = &off_141797598; /*0x1408515ca*/
              sub_140985BA0(&unk_141797544, v76, 2, v78); /*0x1408515ec*/
              if ( (_QWORD)v90 ) /*0x1408515fc*/
                sub_140001660(*((_QWORD *)&v90 + 1), v90, 1); /*0x14085160b*/
            }
          }
          sub_14085A1E0((__int64)v76, (__int64)a2); /*0x14085161b*/
          v119 = v77; /*0x140851628*/
          if ( v77 == v121 ) /*0x140851634*/
          {
            if ( a4 ) /*0x140851638*/
            {
              sub_140832250(v103); /*0x140851645*/
              sub_140872F90(&v114); /*0x140851652*/
            }
            else
            {
              *(_QWORD *)&v114 = -1; /*0x1408518ac*/
            }
            sub_1408473B0(&v90, a2); /*0x1408518c1*/
            v81 = v115; /*0x1408518ce*/
            v80 = v114; /*0x1408518dc*/
            sub_141684120(v78, &v90, 296); /*0x1408518fa*/
            v56 = v119; /*0x1408518ff*/
            sub_141684120(v6, v78, 320); /*0x140851911*/
            *((_BYTE *)v6 + 320) = v56; /*0x140851916*/
            sub_140018740(v76); /*0x140851923*/
            sub_140009B20(v108); /*0x140851930*/
            sub_1406CE2E0(&v104); /*0x14085193c*/
            sub_1407DB1C0(&v96); /*0x140851949*/
            sub_140018740(v69); /*0x140851956*/
            sub_140016620(&v61); /*0x140851963*/
            sub_140018740(v73); /*0x140851970*/
            sub_14000E270(v111, v120); /*0x140851984*/
            sub_14000E270(Address, v116); /*0x140851997*/
            return v6; /*0x14085199c*/
          }
          if ( !a4 || (sub_140872F90(v78), v88 = *(_OWORD *)&v78[8], *(_QWORD *)v78 == -1) ) /*0x14085168b*/
          {
            *(_QWORD *)&v114 = 0; /*0x1408517bc*/
            *((_QWORD *)&v114 + 1) = 1; /*0x1408517c7*/
            v115 = 0; /*0x1408517d2*/
          }
          else
          {
            *(_OWORD *)&v78[8] = v88; /*0x140851698*/
            sub_1408321B0(&v90, v78); /*0x1408516b4*/
            v114 = v90; /*0x1408516c1*/
            v115 = v91; /*0x1408516cf*/
          }
          *(_QWORD *)v78 = &v114; /*0x1408517e4*/
          *(_QWORD *)&v78[8] = sub_1400015F0; /*0x1408517f2*/
          *(_QWORD *)&v78[16] = &v121; /*0x1408517f9*/
          *(_QWORD *)&v78[24] = sub_1414AC660; /*0x140851807*/
          *(_QWORD *)&v78[32] = &v119; /*0x140851815*/
          *(_QWORD *)&v78[40] = sub_1414AC660; /*0x14085181c*/
          sub_14149C0F0(&v82, &unk_1417975B0, v78); /*0x140851838*/
          *((_QWORD *)v6 + 4) = v83; /*0x140851845*/
          v6[1] = v82; /*0x140851850*/
          *((_QWORD *)v6 + 1) = 10; /*0x140851854*/
          *(_QWORD *)v6 = -1; /*0x14085185c*/
          if ( (_QWORD)v114 ) /*0x14085186d*/
            sub_140001660(*((_QWORD *)&v114 + 1), v114, 1); /*0x14085187c*/
          sub_140018740(v76); /*0x140851889*/
          sub_140009B20(v108); /*0x140851896*/
          sub_1406CE2E0(&v104); /*0x1408518a2*/
        }
        else
        {
          v76[5] = v102; /*0x1408511ed*/
          v76[4] = *(_OWORD *)&v101[64]; /*0x1408511fb*/
          v76[3] = *(_OWORD *)&v101[48]; /*0x14085121e*/
          v76[2] = *(_OWORD *)&v101[32]; /*0x140851225*/
          v76[1] = *(_OWORD *)&v101[16]; /*0x14085122c*/
          v76[0] = *(_OWORD *)v101; /*0x140851233*/
          *(_QWORD *)&v90 = v76; /*0x140851241*/
          *((_QWORD *)&v90 + 1) = sub_140B036A0; /*0x14085124f*/
          sub_14149C0F0(v78, &unk_1417975F9, &v90); /*0x140851267*/
          v110 = *(_QWORD *)&v78[8]; /*0x1408512ab*/
          v113 = *(_QWORD *)v78; /*0x1408512ab*/
          restore_router_enabled_stably( /*0x1408512b2*/
            &v90,
            (__int64)a2,
            (__int64)&v61,
            *(__int64 *)&v78[8],
            *(__int64 *)&v78[16],
            (__int64)v73);
          if ( (_DWORD)v90 == -1 ) /*0x1408512bf*/
          {
            if ( !a4 || (sub_140872F90(v78), v89 = *(_OWORD *)&v78[8], *(_QWORD *)v78 == -1) ) /*0x140851474*/
            {
              *(_QWORD *)&v114 = 0; /*0x1408516db*/
              *((_QWORD *)&v114 + 1) = 1; /*0x1408516e6*/
              v115 = 0; /*0x1408516f1*/
            }
            else
            {
              *(_OWORD *)&v78[8] = v89; /*0x140851481*/
              sub_1408321B0(&v104, v78); /*0x14085149d*/
              v114 = v104; /*0x1408514aa*/
              v115 = v105; /*0x1408514b8*/
            }
            *(_QWORD *)v78 = &v114; /*0x140851703*/
            *(_QWORD *)&v78[8] = sub_1400015F0; /*0x140851711*/
            *(_QWORD *)&v78[16] = v76; /*0x14085171f*/
            *(_QWORD *)&v78[24] = sub_140B036A0; /*0x140851726*/
            sub_14149C0F0(&v86, &unk_14179761F, v78); /*0x140851742*/
            *((_QWORD *)v6 + 4) = v87; /*0x14085174f*/
            v6[1] = v86; /*0x14085175a*/
            *((_QWORD *)v6 + 1) = 10; /*0x14085175e*/
            *(_QWORD *)v6 = -1; /*0x140851766*/
            if ( (_QWORD)v114 ) /*0x140851777*/
              sub_140001660(*((_QWORD *)&v114 + 1), v114, 1); /*0x140851786*/
          }
          else
          {
            *(_OWORD *)&v78[80] = v95; /*0x1408512cc*/
            *(_OWORD *)&v78[64] = v94; /*0x1408512da*/
            *(_OWORD *)&v78[48] = v93; /*0x1408512fd*/
            *(_OWORD *)&v78[32] = v92; /*0x140851304*/
            *(_OWORD *)&v78[16] = v91; /*0x14085130b*/
            *(_OWORD *)v78 = v90; /*0x140851312*/
            *(_QWORD *)&v104 = v76; /*0x140851320*/
            *((_QWORD *)&v104 + 1) = sub_140B036A0; /*0x140851327*/
            *(_QWORD *)&v105 = v78; /*0x14085132e*/
            *((_QWORD *)&v105 + 1) = sub_140B036A0; /*0x140851335*/
            sub_14149C0F0(&v84, &unk_14179766C, &v104); /*0x140851351*/
            *((_QWORD *)v6 + 4) = v85; /*0x14085135e*/
            v6[1] = v84; /*0x140851369*/
            *((_QWORD *)v6 + 1) = 10; /*0x14085136d*/
            *(_QWORD *)v6 = -1; /*0x140851375*/
            sub_1407DA310(v78); /*0x140851383*/
          }
          if ( v113 ) /*0x140851795*/
            sub_140001660(v110, v113, 1); /*0x1408517a4*/
          sub_1407DA310(v76); /*0x1408517b1*/
        }
        goto LABEL_37; /*0x1408517b7*/
      }
      *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v78[80]; /*0x140850f0f*/
      *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v78[64]; /*0x140850f1a*/
      v33 = *(_OWORD *)v78; /*0x140850f1e*/
      v34 = *(_OWORD *)&v78[16]; /*0x140850f25*/
      v35 = *(_OWORD *)&v78[32]; /*0x140850f2c*/
      *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v78[48]; /*0x140850f3a*/
      *(__int128 *)((char *)v6 + 40) = v35; /*0x140850f3e*/
      *(__int128 *)((char *)v6 + 24) = v34; /*0x140850f42*/
      *(__int128 *)((char *)v6 + 8) = v33; /*0x140850f46*/
    }
    else
    {
      nullsub_1(*(_QWORD *)&v78[16]); /*0x14085106d*/
      v43 = sub_140001650(157, 1); /*0x14085107c*/
      if ( !v43 ) /*0x140851084*/
        sub_1416C2D4B(1, 157); /*0x140851a4f*/
      v44 = v43; /*0x14085108a*/
      sub_141684120(v43, aCodexCodexProv, 157); /*0x14085109d*/
      *((_QWORD *)v6 + 1) = 10; /*0x1408510a2*/
      *((_QWORD *)v6 + 2) = 157; /*0x1408510aa*/
      *((_QWORD *)v6 + 3) = v44; /*0x1408510b2*/
      *((_QWORD *)v6 + 4) = 157; /*0x1408510b6*/
    }
    *(_QWORD *)v6 = -1; /*0x1408510be*/
LABEL_37:
    sub_1407DB1C0(&v96); /*0x1408510c5*/
    sub_140018740(v69); /*0x1408510d9*/
LABEL_38:
    sub_140016620(&v61); /*0x1408510df*/
    goto LABEL_39; /*0x1408510e6*/
  }
  *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v78[80]; /*0x140850baa*/
  v24 = *(_OWORD *)&v78[17]; /*0x140850bae*/
  v25 = *(_OWORD *)&v78[33]; /*0x140850bb5*/
  v26 = *(_OWORD *)&v78[49]; /*0x140850bbc*/
  *(__int128 *)((char *)v6 + 73) = *(_OWORD *)&v78[65]; /*0x140850bca*/
  *(__int128 *)((char *)v6 + 57) = v26; /*0x140850bce*/
  *(__int128 *)((char *)v6 + 41) = v25; /*0x140850bd2*/
  *(__int128 *)((char *)v6 + 25) = v24; /*0x140850bd6*/
  *((_QWORD *)v6 + 1) = v21; /*0x140850bda*/
  *((_QWORD *)v6 + 2) = v22; /*0x140850bde*/
  *((_BYTE *)v6 + 24) = v23; /*0x140850be2*/
  *(_QWORD *)v6 = -1; /*0x140850be5*/
LABEL_44:
  if ( !(_BYTE)v116 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v22, v23) ) /*0x1408519d3*/
    *(_BYTE *)(v12 + 17) = 1; /*0x1408519e0*/
  v46 = Address; /*0x14085113e*/
  v47 = *(_BYTE *)Address; /*0x140851145*/
  *(_BYTE *)Address = 0; /*0x140851145*/
  if ( v47 == 2 ) /*0x140851149*/
    WakeByAddressSingle(v46); /*0x14085114f*/
  return v6; /*0x140850b22*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x1416c1670  WakeByAddressSingle
// 0x1403b7e80  lock
// 0x141797510  aSwitchingRoute  // string: "switching router account mode"
// 0x14085a1e0  sub_14085A1E0
// 0x141684120  sub_141684120
// 0x1408582d0  sub_1408582D0
// 0x1408473b0  sub_1408473B0
// 0x140846d10  transition_paths
// 0x140018740  sub_140018740
// 0x140852800  sub_140852800
// 0x140009e00  sub_140009E00
// 0x14084e000  codex_config_stale_reason
// 0x140001660  sub_140001660
// 0x140892360  sub_140892360
// 0x140319b20  sub_140319B20
// 0x140578870  sub_140578870
// 0x1406f79d0  sub_1406F79D0
// 0x14179752d  aRouterAuthMode  // string: "router auth-mode toggle"
// 0x140440300  sub_140440300
// 0x141796798  unk_141796798
// 0x1400015f0  sub_1400015F0
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x141797598  off_141797598
// 0x140985ba0  sub_140985BA0
// 0x141797544  unk_141797544
// 0x141ec8d80  off_141EC8D80
// 0x140832250  sub_140832250
// 0x140872f90  sub_140872F90
// 0x140009b20  sub_140009B20
// 0x1406ce2e0  sub_1406CE2E0
// 0x1407db1c0  sub_1407DB1C0
// 0x140016620  sub_140016620
// 0x14000e270  sub_14000E270
// 0x1408321b0  sub_1408321B0
// 0x1414ac660  sub_1414AC660
// 0x14149c0f0  sub_14149C0F0
// 0x1417975b0  unk_1417975B0
// 0x140b036a0  sub_140B036A0
// 0x1417975f9  unk_1417975F9
// 0x14084f280  restore_router_enabled_stably
// 0x14179761f  unk_14179761F
// 0x14179766c  unk_14179766C
// 0x1407da310  sub_1407DA310
// 0x1404960a0  sub_1404960A0
// 0x141761228  aCodexCodexProv  // string: "无法启用 Codex 智能路由：请先在「Codex」标签下添加并激活至少一个中转 Provider（点击该 Provider 旁的「启用」按钮）。"
