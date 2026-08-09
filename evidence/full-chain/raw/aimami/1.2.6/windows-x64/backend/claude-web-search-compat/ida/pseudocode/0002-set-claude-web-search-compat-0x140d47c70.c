// Function: sub_140D47C70 (set_claude_web_search_compat command owner)
// EA: 0x140D47C70
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06, session windows-x64 version_delta pass
// No truncation marker observed; full body returned by IDA MCP decompile() below verbatim.
// Structural note: dispatch on *(a1+1712) is a Rust async-fn generator/Future::poll
// state index (0/1/2/3 resume points) -- this is the genuine async body, not a
// shim/drop_in_place stub (per red line 13, verified: real manager.request(...)
// construction + persistence call + CoreEnvelope emission are all present in-body).
char __fastcall sub_140D47C70(__int64 a1, __int64 a2)
{
  bool v2; // of
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  __int8 v9; // bl
  char v10; // al
  __int64 *v11; // r12
  __int64 *v12; // r14
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  volatile signed __int64 **v15; // rdx
  char v16; // al
  volatile signed __int64 *v17; // rcx
  __int64 v18; // rt0
  volatile signed __int64 *v19; // r8
  __int64 v20; // rt0
  volatile signed __int64 *v21; // r9
  __int64 v22; // rt0
  volatile signed __int64 *v23; // r10
  __int64 v24; // rt0
  volatile signed __int64 *v25; // r11
  __int64 v26; // rt0
  volatile signed __int64 *v27; // rdi
  __int64 v28; // rt0
  volatile signed __int64 *v29; // rbx
  volatile signed __int64 *v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned __int8 v42; // r13
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rcx
  const char *v46; // rbx
  _BYTE *v47; // rdx
  __int64 *v48; // rsi
  __int64 v49; // rsi
  unsigned __int64 v50; // rdi
  __int64 v51; // r12
  __int64 v52; // rbx
  char v53; // cl
  char result; // al
  unsigned __int64 v55; // rax
  __int64 *v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 *v60; // rcx
  __int64 *v61; // r15
  __int64 v62; // rdi
  __int64 v63; // rdx
  _QWORD *v64; // rdi
  __int128 *v65; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall **v66)(); // [rsp+40h] [rbp-40h]
  __int64 v67; // [rsp+48h] [rbp-38h]
  __m256i v68; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v69; // [rsp+170h] [rbp+F0h]
  __int128 v70; // [rsp+180h] [rbp+100h]
  __int128 v71; // [rsp+190h] [rbp+110h]
  __int64 v72; // [rsp+1A0h] [rbp+120h]
  __int128 v73; // [rsp+280h] [rbp+200h] BYREF
  __int128 v74; // [rsp+290h] [rbp+210h]
  _BYTE v75[288]; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int64 v76; // [rsp+3C0h] [rbp+340h] BYREF
  char v77; // [rsp+3C8h] [rbp+348h]
  int v78; // [rsp+3C9h] [rbp+349h]
  __int16 v79; // [rsp+3CDh] [rbp+34Dh]
  char v80; // [rsp+3CFh] [rbp+34Fh]
  __int64 v81; // [rsp+3D0h] [rbp+350h]
  __int64 v82; // [rsp+3D8h] [rbp+358h]
  __int64 v83; // [rsp+3E0h] [rbp+360h]
  __int128 v84; // [rsp+3E8h] [rbp+368h]
  __int128 v85; // [rsp+3F8h] [rbp+378h]
  __int64 v86; // [rsp+408h] [rbp+388h]
  __int128 v87; // [rsp+410h] [rbp+390h]
  __int128 v88; // [rsp+420h] [rbp+3A0h]
  __int64 v89; // [rsp+430h] [rbp+3B0h]
  __int64 v90; // [rsp+438h] [rbp+3B8h] BYREF
  __int8 v91; // [rsp+440h] [rbp+3C0h]
  char v92; // [rsp+441h] [rbp+3C1h]
  int v93; // [rsp+442h] [rbp+3C2h]
  __int16 v94; // [rsp+446h] [rbp+3C6h]
  __int64 v95; // [rsp+448h] [rbp+3C8h]
  __int64 v96; // [rsp+450h] [rbp+3D0h]
  __int64 v97; // [rsp+458h] [rbp+3D8h]
  __int128 v98; // [rsp+460h] [rbp+3E0h]
  __int128 v99; // [rsp+470h] [rbp+3F0h]
  __int64 v100; // [rsp+480h] [rbp+400h]
  __int128 v101; // [rsp+490h] [rbp+410h]
  __int128 v102; // [rsp+4A0h] [rbp+420h]
  __int64 v103; // [rsp+4B0h] [rbp+430h]
  const char *v104; // [rsp+4B8h] [rbp+438h] BYREF
  __m256i v105; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v106; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v107; // [rsp+4F0h] [rbp+470h]
  __int128 v108; // [rsp+500h] [rbp+480h]
  __int64 v109; // [rsp+510h] [rbp+490h]
  __int64 v110; // [rsp+620h] [rbp+5A0h]
  __int64 v111; // [rsp+628h] [rbp+5A8h]
  _QWORD *v112; // [rsp+630h] [rbp+5B0h]
  __int64 v113; // [rsp+638h] [rbp+5B8h]
  __int128 v114; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v115; // [rsp+650h] [rbp+5D0h]
  __int64 *v116; // [rsp+658h] [rbp+5D8h]
  __int64 *v117; // [rsp+660h] [rbp+5E0h]
  __int64 *v118; // [rsp+668h] [rbp+5E8h]
  char v119; // [rsp+677h] [rbp+5F7h] BYREF
  __int64 v120; // [rsp+678h] [rbp+5F8h]
  __int64 v121; // [rsp+680h] [rbp+600h]
  char v122; // [rsp+68Fh] [rbp+60Fh]
  __int64 v123; // [rsp+690h] [rbp+610h]

  v2 = 0; /*0x140d47c7c*/
  v123 = -2; /*0x140d47c8b*/
  v4 = a1; /*0x140d47c99*/
  v5 = *(unsigned __int8 *)(a1 + 1712); /*0x140d47c9c*/
  v121 = a1; /*0x140d47cb1*/
  switch ( v5 ) /*0x140d47cb8*/
  {
    case 0LL: /*0x140d47cb8*/  // poll state 0: fresh entry
      *(_WORD *)(a1 + 1713) = 257; /*0x140d47cba*/
      *(_BYTE *)(a1 + 1715) = 1; /*0x140d47cc3*/
      v6 = a1 + 1048; /*0x140d47cd1*/
      sub_14172B820(a1 + 1048, a1 + 392, 656); /*0x140d47ce1*/
      switch ( *(_BYTE *)(v4 + 1696) ) /*0x140d47cfb*/
      {
        case 0: /*0x140d47cfb*/
          goto LABEL_4;
        case 1: /*0x140d47cfb*/
          goto LABEL_83;
        case 2: /*0x140d47cfb*/
          goto LABEL_82;
        case 3: /*0x140d47cfb*/
          goto LABEL_7;
      }
    case 1LL: /*0x140d47cb8*/  // poll state 1: waker re-entry (pending branch A)
      sub_14176EC00(&off_141885220); /*0x140d48a4c*/
    case 2LL: /*0x140d47cb8*/  // poll state 2: waker re-entry (pending branch B)
      sub_14176EC20(&off_141885220); /*0x140d48a3e*/
    case 3LL: /*0x140d47cb8*/  // poll state 3: terminal re-entry
      v6 = a1 + 1048; /*0x140d47cfd*/
      switch ( *(_BYTE *)(a1 + 1696) ) /*0x140d47d19*/
      {
        case 0: /*0x140d47d19*/
LABEL_4:
          v7 = v4 + 1568; /*0x140d47d1b*/
          v104 = aSetClaudeWebSe; /*0x140d47d34*/  // "set_claude_web_search_compat"
          v105.m256i_i64[0] = 28; /*0x140d47d3b*/
          v105.m256i_i64[1] = (__int64)aManager_1; /*0x140d47d4d*/  // "manager"
          v105.m256i_i64[2] = 7; /*0x140d47d54*/
          v120 = v6; /*0x140d47d5f*/
          v105.m256i_i64[3] = v6; /*0x140d47d66*/
          v106 = (unsigned __int64)(v4 + 1568); /*0x140d47d6d*/
          v8 = sub_14002B2A0((volatile void *)(*(_QWORD *)(v4 + 1560) + 16LL)); /*0x140d47d85*/  // generic hashbrown registry probe
          v117 = (__int64 *)(v4 + 1568); /*0x140d47d8b*/
          if ( v8 ) /*0x140d47d92*/
            goto LABEL_5; /*0x140d47d92*/
          sub_14172C620(&v73, &v104, &v105.m256i_u64[1]); /*0x140d4808d*/  // manager.request(name, {target,args}) future construction
          v9 = v73; /*0x140d48093*/
          if ( (_BYTE)v73 == 0xFF ) /*0x140d4809d*/
          {
            v8 = *((_QWORD *)&v73 + 1); /*0x140d487ab*/
LABEL_5:
            v104 = aSetClaudeWebSe; /*0x140d47d98*/  // "set_claude_web_search_compat"
            v105.m256i_i64[0] = 28; /*0x140d47db1*/
            v105.m256i_i64[1] = (__int64)aEnabled_9; /*0x140d47dc3*/  // "enabled" arg key
            v105.m256i_i64[2] = 7; /*0x140d47dca*/
            v105.m256i_i64[3] = v120; /*0x140d47dd5*/
            v106 = v7; /*0x140d47ddc*/
            sub_1409562A0(&v73, &v104); /*0x140d47df1*/  // second manager.request keyed by "enabled"
            v9 = v73; /*0x140d47df7*/
            v10 = BYTE1(v73); /*0x140d47dfe*/
            v2 = __OFSUB__((_BYTE)v73, -1); /*0x140d47e05*/
            if ( (_BYTE)v73 == 0xFF ) /*0x140d47e08*/
            {
              v4 = v121; /*0x140d47e0e*/
              *(_QWORD *)(v121 + 1608) = v8; /*0x140d47e15*/
              *(_BYTE *)(v4 + 1617) = v10; /*0x140d47e1c*/
              *(_BYTE *)(v4 + 1616) = 0; /*0x140d47e22*/
              v11 = (__int64 *)(v4 + 1624); /*0x140d47e29*/
              *(_OWORD *)(v4 + 1624) = *(_OWORD *)(v4 + 1592); /*0x140d47e37*/
              *(_QWORD *)(v4 + 1640) = *(_QWORD *)(v4 + 1608); /*0x140d47e45*/
              *(_BYTE *)(v4 + 1648) = *(_BYTE *)(v4 + 1616); /*0x140d47e53*/
              *(_BYTE *)(v4 + 1649) = *(_BYTE *)(v4 + 1617); /*0x140d47e60*/
              *(_DWORD *)(v4 + 1650) = *(_DWORD *)(v4 + 1618); /*0x140d47e6c*/
              *(_WORD *)(v4 + 1654) = *(_WORD *)(v4 + 1622); /*0x140d47e79*/
              v12 = (__int64 *)(v4 + 1688); /*0x140d47e80*/
              *(_BYTE *)(v4 + 1688) = 0; /*0x140d47e87*/
              v13 = *(_OWORD *)(v4 + 1624); /*0x140d47e8e*/
              *(_OWORD *)(v4 + 1672) = *(_OWORD *)(v4 + 1640); /*0x140d47e99*/
              *(_OWORD *)(v4 + 1656) = v13; /*0x140d47ea0*/
              v6 = v120; /*0x140d47ebc*/
              switch ( *(_BYTE *)(v4 + 1680) ) /*0x140d47ec3*/
              {
                case 0: /*0x140d47ec3*/
                  goto LABEL_10;
                case 1: /*0x140d47ec3*/
                  goto LABEL_85;
                case 2: /*0x140d47ec3*/
                  goto LABEL_84;
                case 3: /*0x140d47ec3*/
                  goto LABEL_25;
              }
            }
          }
          else
          {
            v10 = BYTE1(v73); /*0x140d480a3*/
          }
          LOBYTE(v113) = v10; /*0x140d480aa*/
          v35 = *(unsigned int *)((char *)&v73 + 2) | ((unsigned __int64)WORD3(v73) << 32); /*0x140d480c2*/
          v36 = *((_QWORD *)&v73 + 1); /*0x140d480c5*/
          v37 = *((_QWORD *)&v74 + 1); /*0x140d480d3*/
          v38 = v74; /*0x140d480d3*/
          sub_140CAB140(v120); /*0x140d480e1*/
          if ( *v117 == -1 ) /*0x140d480f2*/
          {
            v42 = 1; /*0x140d48453*/
            v43 = v121; /*0x140d48456*/
            goto LABEL_68; /*0x140d4845d*/
          }
          v112 = (_QWORD *)(v121 + 1576); /*0x140d48106*/
          v39 = *(_QWORD *)(v121 + 1576); /*0x140d4810d*/
          v116 = *(__int64 **)(v121 + 1584); /*0x140d4811b*/
          v118 = nullptr; /*0x140d48122*/
          v110 = v39; /*0x140d4812d*/
          while ( v116 != v118 ) /*0x140d4814e*/
          {
            v118 = (__int64 *)((char *)v118 + 1); /*0x140d48153*/
            v40 = v39 + 96; /*0x140d4815a*/
            sub_140401FB0(); /*0x140d4815e*/  // Vec<T> element drop_in_place, generic
            v39 = v40; /*0x140d48164*/
          }
          v41 = *v117; /*0x140d48170*/
          v42 = 1; /*0x140d48173*/
          v43 = v121; /*0x140d48179*/
          if ( !*v117 ) /*0x140d48170*/
            goto LABEL_68; /*0x140d48180*/
          goto LABEL_67; /*0x140d48180*/
        case 1: /*0x140d47d19*/
LABEL_83:
          v120 = v6; /*0x140d48a6c*/
          sub_14176EC00(&off_141886DB8); /*0x140d48a7a*/
        case 2: /*0x140d47d19*/
LABEL_82:
          v120 = v6; /*0x140d48a53*/
          sub_14176EC20(&off_141886DB8); /*0x140d48a61*/
        case 3: /*0x140d47d19*/
          goto LABEL_7;
      }
  }
LABEL_7:
  v12 = (__int64 *)(v4 + 1688); /*0x140d47ec5*/
  v11 = (__int64 *)(v4 + 1624); /*0x140d47ed3*/
  switch ( *(_BYTE *)(v4 + 1688) ) /*0x140d47ee8*/
  {
    case 0: /*0x140d47ee8*/
      v14 = *(_OWORD *)v11; /*0x140d47eea*/
      *(_OWORD *)(v4 + 1672) = *(_OWORD *)(v4 + 1640); /*0x140d47ef5*/
      *(_OWORD *)(v4 + 1656) = v14; /*0x140d47efc*/
      switch ( *(_BYTE *)(v4 + 1680) ) /*0x140d47f18*/
      {
        case 0: /*0x140d47f18*/
          goto LABEL_10;
        case 1: /*0x140d47f18*/
          goto LABEL_85;
        case 2: /*0x140d47f18*/
          goto LABEL_84;
        case 3: /*0x140d47f18*/
          goto LABEL_25;
      }
    case 1: /*0x140d47ee8*/
      v120 = v6; /*0x140d48aea*/
      v111 = v4 + 1624; /*0x140d48af1*/
      sub_14176EC00(&off_1418851A0); /*0x140d48aff*/
    case 2: /*0x140d47ee8*/
      v120 = v6; /*0x140d48acd*/
      v111 = v4 + 1624; /*0x140d48ad4*/
      sub_14176EC20(&off_1418851A0); /*0x140d48ae2*/
    case 3: /*0x140d47ee8*/
      switch ( *(_BYTE *)(v4 + 1680) ) /*0x140d47f2f*/
      {
        case 0: /*0x140d47f2f*/
LABEL_10:
          v15 = *(volatile signed __int64 ***)(v4 + 1672); /*0x140d47f31*/
          *(_QWORD *)(v4 + 1656) = v15; /*0x140d47f38*/
          v16 = *(_BYTE *)(v4 + 1681); /*0x140d47f3f*/
          v17 = *v15; /*0x140d47f46*/
          v18 = _InterlockedIncrement64(*v15); /*0x140d47f49*/  // Arc refcount increment chain (7 fields) -- generic Arc<T> clone
          if ( (v18 < 0) ^ v2 | (v18 == 0) ) /*0x140d47f4d*/
            goto LABEL_89; /*0x140d47f4d*/
          v19 = v15[1]; /*0x140d47f53*/
          v20 = _InterlockedIncrement64(v19); /*0x140d47f57*/
          if ( (v20 < 0) ^ v2 | (v20 == 0) ) /*0x140d47f5b*/
            goto LABEL_89; /*0x140d47f5b*/
          v21 = v15[2]; /*0x140d47f61*/
          v22 = _InterlockedIncrement64(v21); /*0x140d47f65*/
          if ( (v22 < 0) ^ v2 | (v22 == 0) ) /*0x140d47f69*/
            goto LABEL_89; /*0x140d47f69*/
          v23 = v15[3]; /*0x140d47f6f*/
          v24 = _InterlockedIncrement64(v23); /*0x140d47f73*/
          if ( (v24 < 0) ^ v2 | (v24 == 0) ) /*0x140d47f77*/
            goto LABEL_89; /*0x140d47f77*/
          v25 = v15[4]; /*0x140d47f7d*/
          v26 = _InterlockedIncrement64(v25); /*0x140d47f81*/
          if ( (v26 < 0) ^ v2 | (v26 == 0) ) /*0x140d47f85*/
            goto LABEL_89; /*0x140d47f85*/
          v27 = v15[5]; /*0x140d47f8b*/
          v28 = _InterlockedIncrement64(v27); /*0x140d47f8f*/
          if ( (v28 < 0) ^ v2 | (v28 == 0) ) /*0x140d47f93*/
            goto LABEL_89; /*0x140d47f93*/
          v117 = v11; /*0x140d47f99*/
          v116 = v12; /*0x140d47fa0*/
          v120 = v6; /*0x140d47fa7*/
          v29 = v15[7]; /*0x140d47fae*/
          if ( v29 ) /*0x140d47fb5*/
          {
            if ( _InterlockedIncrement64(v29) <= 0 ) /*0x140d47fbb*/
              goto LABEL_89; /*0x140d47fbb*/
          }
          v30 = v15[6]; /*0x140d47fc1*/
          if ( _InterlockedIncrement64(v30) <= 0 ) /*0x140d47fc9*/
LABEL_89:
            BUG(); /*0x140d48b05*/  // Rust Arc overflow abort() guard, generic
          v104 = (const char *)v17; /*0x140d47fcf*/
          v105.m256i_i64[0] = (__int64)v19; /*0x140d47fd6*/
          v105.m256i_i64[1] = (__int64)v21; /*0x140d47fdd*/
          v105.m256i_i64[2] = (__int64)v23; /*0x140d47fe4*/
          v105.m256i_i64[3] = (__int64)v25; /*0x140d47feb*/
          *(_QWORD *)&v106 = v27; /*0x140d47ff2*/
          *((_QWORD *)&v106 + 1) = v30; /*0x140d47ff9*/
          *(_QWORD *)&v107 = v29; /*0x140d48000*/
          BYTE8(v107) = v16; /*0x140d48007*/
          v31 = off_141FB97C0; /*0x140d4800d*/  // static config-store/relay-provider registry singleton (shared global)
          if ( *((_DWORD *)off_141FB97C0 + 24) ) /*0x140d48014*/
          {
            v122 = 1; /*0x140d489b7*/
            v64 = off_141FB97C0; /*0x140d489c5*/
            sub_14172E34C(off_141FB97C0); /*0x140d489c8*/
            v31 = v64; /*0x140d489cd*/
          }
          if ( *((_DWORD *)v31 + 4) == 2 ) /*0x140d48023*/
          {
            v32 = 704; /*0x140d48031*/
            if ( *(_BYTE *)v31 ) /*0x140d48029*/
              v32 = 472; /*0x140d48036*/
            v33 = v31[1] + v32; /*0x140d4803a*/
            v122 = 0; /*0x140d4803e*/
            v34 = sub_14085B5A0(v33, v31, &v104, &off_1417EBF48); /*0x140d48053*/  // registry-variant-A read/apply
          }
          else
          {
            v44 = 704; /*0x140d48194*/
            if ( *((_BYTE *)v31 + 64) ) /*0x140d4818b*/
              v44 = 472; /*0x140d48199*/
            v45 = v31[9] + v44; /*0x140d481a1*/
            v122 = 0; /*0x140d481a5*/
            v34 = sub_14085B5A0(v45, v31 + 8, &v104, &off_1417EBF30); /*0x140d481bd*/  // registry-variant-B read/apply
          }
          v4 = v121; /*0x140d481c3*/
          *(_QWORD *)(v121 + 1664) = v34; /*0x140d481ca*/
          break; /*0x140d481ca*/
        case 1: /*0x140d47f2f*/
LABEL_85:
          v117 = v11; /*0x140d48aa9*/
          v116 = v12; /*0x140d48ab0*/
          JUMPOUT(0x140D48AB7LL); /*0x140d48ab7*/
        case 2: /*0x140d47f2f*/
LABEL_84:
          v117 = v11; /*0x140d48a85*/
          v116 = v12; /*0x140d48a8c*/
          v120 = v6; /*0x140d48a93*/
          sub_14176EC20(&off_1418888F8); /*0x140d48aa1*/
        case 3: /*0x140d47f2f*/
LABEL_25:
          v117 = v11; /*0x140d4805e*/
          v116 = v12; /*0x140d48065*/
          v120 = v6; /*0x140d4806c*/
          break; /*0x140d48073*/
      }
      v118 = (__int64 *)(v4 + 1664); /*0x140d481e2*/
      sub_140504EE0(&v104, v4 + 1664, a2); /*0x140d481ec*/  // config-store apply/persist step (candidate business-logic leaf; -1/-2/-3 typed error sentinels handled below)
      v46 = v104; /*0x140d481f2*/
      if ( v104 == (const char *)-3LL ) /*0x140d481fd*/
      {
        v47 = (_BYTE *)v121; /*0x140d4822d*/
        *(_BYTE *)(v121 + 1680) = 3; /*0x140d48234*/
        goto LABEL_49; /*0x140d4823b*/
      }
      if ( v104 == (const char *)-2LL ) /*0x140d48203*/
      {
        v115 = v105.m256i_i64[2]; /*0x140d4820c*/
        v114 = *(_OWORD *)v105.m256i_i8; /*0x140d4821a*/
        v35 = 0x800000000000000CuLL; /*0x140d48221*/
      }
      else
      {
        v35 = v105.m256i_i64[0]; /*0x140d48240*/
        v114 = *(_OWORD *)&v105.m256i_u64[1]; /*0x140d4824e*/
        v115 = v105.m256i_i64[3]; /*0x140d4825c*/
        sub_14172B820(&v65, &v106, 280); /*0x140d48274*/
      }
      v48 = v118; /*0x140d48279*/
      *(_OWORD *)v68.m256i_i8 = v114; /*0x140d48287*/
      v68.m256i_i64[2] = v115; /*0x140d48295*/
      sub_14172B820(&v68.m256i_u64[3], &v65, 280); /*0x140d482ad*/
      v49 = *v48; /*0x140d482b2*/
      if ( (unsigned __int8)sub_141398090(v49) ) /*0x140d482b8*/
        sub_14139A2E0(v49); /*0x140d482c5*/  // Arc drop (refcount decrement), generic
      if ( v46 == (const char *)-2LL ) /*0x140d482cf*/
      {
        v104 = (const char *)v35; /*0x140d482d1*/
        v105 = v68; /*0x140d482e6*/
        *(_QWORD *)&v106 = v69; /*0x140d482fb*/
        *(_QWORD *)&v114 = &v104; /*0x140d48302*/
        *((_QWORD *)&v114 + 1) = sub_1412DDF00; /*0x140d48310*/
        sub_141543AF0(&v65, &unk_1418862D0, &v114); /*0x140d48329*/  // Display-format error message, generic
        sub_140CAB2C0(&v104); /*0x140d48336*/
        v50 = (unsigned __int64)v65; /*0x140d4833c*/
        v51 = (__int64)v66; /*0x140d48340*/
        v37 = v67; /*0x140d48344*/
LABEL_53:
        *(_BYTE *)(v121 + 1680) = 1; /*0x140d48527*/
        v55 = v50 >> 8; /*0x140d48538*/
        v98 = v101; /*0x140d4854a*/
        v99 = v102; /*0x140d48551*/
        v100 = v103; /*0x140d4855f*/
        goto LABEL_54; /*0x140d4855f*/
      }
      if ( v46 == (const char *)-1LL ) /*0x140d48358*/
      {
        v104 = (const char *)v35; /*0x140d48462*/
        v105 = v68; /*0x140d48470*/
        v106 = v69; /*0x140d4848d*/
        v107 = v70; /*0x140d48494*/
        v108 = v71; /*0x140d4849b*/
        v109 = v72; /*0x140d484a6*/
        *(_QWORD *)&v114 = 0; /*0x140d484ad*/
        *((_QWORD *)&v114 + 1) = 1; /*0x140d484b8*/
        v115 = 0; /*0x140d484c3*/
        v67 = 1610612768; /*0x140d484ce*/
        v65 = &v114; /*0x140d484dd*/
        v66 = &off_141891B48; /*0x140d484e8*/
        if ( (unsigned __int8)sub_1405060F0(&v104, &v65) ) /*0x140d484f7*/
          sub_14176E860( /*0x140d489fb*/
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v119,
            (unsigned int)&unk_141889838,
            (__int64)&off_141891C00);  // "a Display implementation returned an error unexpectedly" -- fmt::Display panic guard, generic
        v51 = *((_QWORD *)&v114 + 1); /*0x140d4850c*/
        v50 = v114; /*0x140d4850c*/
        v37 = v115; /*0x140d48513*/
        sub_140CAC460(&v104); /*0x140d48521*/
        goto LABEL_53; /*0x140d48521*/
      }
      sub_14172B820(v75, &v68.m256i_u64[2], 288); /*0x140d4836b*/
      *((_QWORD *)&v73 + 1) = v35; /*0x140d48370*/
      v74 = *(_OWORD *)v68.m256i_i8; /*0x140d4837e*/
      *(_QWORD *)&v73 = v46; /*0x140d48385*/
      sub_1404CCBD0(&v104, v75[286]); /*0x140d4839a*/
      v35 = (unsigned __int64)v104; /*0x140d483a0*/
      v51 = v105.m256i_i64[1]; /*0x140d483ae*/
      v50 = v105.m256i_i64[0]; /*0x140d483ae*/
      v52 = v105.m256i_i64[3]; /*0x140d483bc*/
      v37 = v105.m256i_i64[2]; /*0x140d483bc*/
      v87 = v106; /*0x140d483ca*/
      v88 = v107; /*0x140d483d8*/
      v89 = v108; /*0x140d483e6*/
      sub_14049F620(&v73); /*0x140d483f4*/
      v101 = v87; /*0x140d48408*/
      v102 = v88; /*0x140d4840f*/
      v103 = v89; /*0x140d4841d*/
      v47 = (_BYTE *)v121; /*0x140d48424*/
      *(_BYTE *)(v121 + 1680) = 1; /*0x140d4842b*/
      if ( v35 == -2 ) /*0x140d48436*/
      {
LABEL_49:
        v47[1688] = 3; /*0x140d4843c*/
        v47[1696] = 3; /*0x140d48443*/
        v53 = 3; /*0x140d4844a*/
        result = 1; /*0x140d4844c*/
        goto LABEL_69; /*0x140d4844e*/
      }
      v55 = v50 >> 8; /*0x140d487ba*/
      v100 = v103; /*0x140d487c5*/
      v99 = v102; /*0x140d487da*/
      v98 = v101; /*0x140d487e1*/
      if ( v35 != -1 ) /*0x140d487ec*/
      {
        v86 = v100; /*0x140d487f9*/
        v85 = v99; /*0x140d4880e*/
        v84 = v98; /*0x140d48815*/
        v76 = v35; /*0x140d4881c*/
        v77 = v50; /*0x140d48823*/
        v78 = v50 >> 8; /*0x140d4882a*/
        v80 = v50 >> 8 >> 48; /*0x140d48837*/
        v79 = HIDWORD(v50) >> 8; /*0x140d48841*/
        v81 = v51; /*0x140d48848*/
        v82 = v37; /*0x140d4884f*/
        v83 = v52; /*0x140d48856*/
        sub_140508690(&v104, &v76); /*0x140d4886b*/
        v35 = *(unsigned int *)((char *)v105.m256i_u32 + 2) | ((unsigned __int64)v105.m256i_u16[3] << 32); /*0x140d4888a*/
        v9 = v105.m256i_i8[0]; /*0x140d4888d*/
        v36 = v105.m256i_i64[1]; /*0x140d4889b*/
        v37 = v105.m256i_i64[3]; /*0x140d488a9*/
        v59 = v105.m256i_i64[2]; /*0x140d488a9*/
        if ( v104 == (const char *)-1LL ) /*0x140d488b4*/
        {
          LOBYTE(v113) = v105.m256i_i8[1]; /*0x140d489a9*/
          v42 = 0; /*0x140d489af*/
        }
        else
        {
          v68.m256i_i64[0] = 0; /*0x140d48905*/
          *(_OWORD *)&v68.m256i_u64[1] = 1u; /*0x140d48910*/
          *(_QWORD *)&v74 = 1610612768; /*0x140d48926*/
          *(_QWORD *)&v73 = &v68; /*0x140d48938*/
          *((_QWORD *)&v73 + 1) = &off_141891B48; /*0x140d48946*/
          if ( (unsigned __int8)sub_1412DDF00(&v104, &v73) ) /*0x140d4895b*/
            sub_14176E860( /*0x140d48a2c*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v119,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v59 = v68.m256i_i64[1]; /*0x140d48970*/
          v36 = v68.m256i_i64[0]; /*0x140d48970*/
          v37 = v68.m256i_i64[2]; /*0x140d48977*/
          sub_140CAB2C0(&v104); /*0x140d48985*/
          v42 = 1; /*0x140d4898b*/
          v9 = 3; /*0x140d4898e*/
        }
        goto LABEL_62; /*0x140d48990*/
      }
LABEL_54:
      v56 = (__int64 *)((v55 << 8) | (unsigned __int8)v50); /*0x140d48566*/
      if ( v37 < 0 ) /*0x140d48574*/
      {
        v57 = 0; /*0x140d48576*/
        goto LABEL_56; /*0x140d48576*/
      }
      if ( v37 ) /*0x140d48597*/
      {
        nullsub_1(); /*0x140d4859d*/
        v57 = 1; /*0x140d485a2*/
        v58 = sub_140001650(v37, 1); /*0x140d485af*/
        if ( !v58 ) /*0x140d485b7*/
        {
LABEL_56:
          v118 = v56; /*0x140d48578*/
          v113 = v51; /*0x140d4857f*/
          sub_14176E54B(v57, v37); /*0x140d4858c*/
        }
        v59 = v58; /*0x140d485b9*/
        sub_14172B820(v58, v51, v37); /*0x140d485c5*/
        if ( !v56 ) /*0x140d485cd*/
          goto LABEL_61; /*0x140d485cd*/
      }
      else
      {
        v59 = 1; /*0x140d48995*/
        if ( !v56 ) /*0x140d4899e*/
          goto LABEL_61; /*0x140d4899e*/
      }
      sub_140001660(v51, v56, 1); /*0x140d485db*/
LABEL_61:
      v42 = 1; /*0x140d485e0*/
      v9 = 3; /*0x140d485e3*/
      v36 = v37; /*0x140d485e5*/
LABEL_62:
      v38 = v59; /*0x140d485e8*/
      *(_BYTE *)v116 = 1; /*0x140d485f2*/
      sub_140CAB140(v120); /*0x140d485fc*/
      v43 = v121; /*0x140d48602*/
      if ( *(_QWORD *)(v121 + 1568) != -1 ) /*0x140d48611*/
      {
        v112 = (_QWORD *)(v121 + 1576); /*0x140d4861e*/
        v60 = *(__int64 **)(v121 + 1576); /*0x140d48625*/
        v116 = *(__int64 **)(v121 + 1584); /*0x140d48633*/
        v118 = nullptr; /*0x140d4863a*/
        v117 = v60; /*0x140d48645*/
        while ( v116 != v118 ) /*0x140d4865e*/
        {
          v118 = (__int64 *)((char *)v118 + 1); /*0x140d48663*/
          v61 = v60 + 12; /*0x140d4866a*/
          sub_140401FB0(); /*0x140d4866e*/  // Vec<T> drop_in_place, generic
          v60 = v61; /*0x140d48674*/
        }
        v43 = v121; /*0x140d48679*/
        v41 = *(_QWORD *)(v121 + 1568); /*0x140d48680*/
        if ( v41 ) /*0x140d4868a*/
LABEL_67:
          sub_140001660(*v112, 96 * v41, 8); /*0x140d4868c*/
      }
LABEL_68:
      *(_BYTE *)(v43 + 1696) = 1; /*0x140d486a9*/
      sub_140C99570(v120); /*0x140d486b8*/
      v93 = v35; /*0x140d486be*/
      v94 = WORD2(v35); /*0x140d486c9*/
      v96 = v38; /*0x140d486d1*/
      v97 = v37; /*0x140d486d8*/
      v91 = v9; /*0x140d486e3*/
      v92 = v113; /*0x140d486f0*/
      v95 = v36; /*0x140d486f6*/
      v90 = v42; /*0x140d486fd*/
      v62 = v121; /*0x140d48704*/
      *(_BYTE *)(v121 + 1715) = 0; /*0x140d4870b*/
      sub_14172B820(&v104, v62, 360); /*0x140d48725*/
      *(_BYTE *)(v62 + 1714) = 0; /*0x140d4872a*/
      v63 = *(_QWORD *)(v62 + 384); /*0x140d48731*/
      *(_BYTE *)(v62 + 1713) = 0; /*0x140d48738*/
      *(_QWORD *)&v74 = *(_QWORD *)(v62 + 376); /*0x140d48746*/
      v73 = *(_OWORD *)(v62 + 360); /*0x140d48754*/
      sub_140AFFC30( /*0x140d48780*/  // final CoreEnvelope response emission via generic manager finalize (same helper as getter)
        (unsigned int)&v104,
        v63,
        (unsigned int)&v90,
        (unsigned int)&v73,
        *(_DWORD *)(v62 + 1704),
        *(_DWORD *)(v62 + 1708));
      v53 = 1; /*0x140d48786*/
      result = 0; /*0x140d48788*/
      v47 = (_BYTE *)v121; /*0x140d4878a*/
LABEL_69:
      v47[1712] = v53; /*0x140d48791*/
      return result;
  }
}

// refs of interest (abbreviated to non-generic/target-relevant entries; full ref
// table returned by decompile() -- generic runtime glue such as memcpy helpers,
// Vec/Arc drop_in_place, and Display-format panic guards omitted from this list
// per scope, but preserved inline as comments above at each call site):
// 0x141886ddf aSetClaudeWebSe -> "set_claude_web_search_compat"
// 0x1418865b4 aManager_1 -> "manager"
// 0x141886da0 aEnabled_9 -> "enabled" (request arg key)
// 0x140504ee0 sub_140504EE0 -> config-store apply/persist step (candidate business-
//   logic leaf; recognizes -1/-2/-3 typed error sentinels; not further recursed this
//   pass -- see manifest.json recovery_attempts for scope boundary rationale)
// 0x140affc30 sub_140AFFC30 -> generic manager-response finalize (shared with getter,
//   see 0001-get-claude-web-search-compat pseudocode)
// 0x14002b2a0 / 0x14172c620 -> generic hashbrown-registry + future-combinator (shared)
