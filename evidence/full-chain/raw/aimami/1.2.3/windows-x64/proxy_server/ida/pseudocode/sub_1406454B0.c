// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1406454b0  size: 0x9c9  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References 'state poisoned', tracing target 'proxy.upstream', and the Rust 'unwrap() on an Err
//   value' panic string -- builds the 500-class error response emitted when the shared router/provider-
//   state Mutex/RwLock was found poisoned (a prior panic while holding the lock), mirroring the
//   state_poisoned messaging seen in the closure handlers.
//
// Referenced strings/symbols:
//   0x141684120  sub_141684120
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x1417b5c10  off_1417B5C10
//   0x1416c3400  sub_1416C3400
//   0x141769280  off_141769280
//   0x1416c3420  sub_1416C3420
//   0x140001660  sub_140001660
//   0x1416c15b0  sub_1416C15B0
//   0x141ec90b8  off_141EC90B8
//   0x1416c2250  sub_1416C2250
//   0x14066b160  sub_14066B160
//   0x14176811e  aStatePoisoned   "state poisoned"
//   0x14177c428  aProxyUpstream   "proxy.upstream"
//   0x1416c1670  WakeByAddressSingle
//   0x1405e7870  sub_1405E7870
//   0x14067a4c0  sub_14067A4C0
//   0x1416c2d4b  sub_1416C2D4B
//   0x140307860  sub_140307860
//   0x1400104f0  sub_1400104F0
//   0x140467f40  sub_140467F40
//   0x1416c3060  sub_1416C3060
//   0x1417693f8  aCalledResultUn_8   "called `Result::unwrap()` on an `Err` value"
//   0x1417693d8  off_1417693D8
//   0x1417680f0  off_1417680F0
//   0x140677670  sub_140677670
//   0x1405e7ae0  sub_1405E7AE0
//   0x141768130  off_141768130
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
_BYTE *__fastcall sub_1406454B0(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _BYTE *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 (__fastcall **v13)(); // rax
  __int64 v14; // rdi
  _OWORD *v15; // rbx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  char *v20; // r14
  __int64 *v21; // rbx
  int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rcx
  char *v28; // r14
  char v29; // al
  _WORD *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  __int64 v35; // rcx
  void *v36; // rax
  __int64 v37; // rdi
  __int128 v38; // xmm6
  __int64 v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  char v43; // al
  char v45[224]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v46; // [rsp+130h] [rbp+B0h] BYREF
  _OWORD v47[13]; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v48; // [rsp+210h] [rbp+190h]
  __int64 v49; // [rsp+218h] [rbp+198h]
  __int64 v50; // [rsp+220h] [rbp+1A0h]
  __int8 v51; // [rsp+254h] [rbp+1D4h]
  char v52; // [rsp+318h] [rbp+298h]
  __int128 v53; // [rsp+320h] [rbp+2A0h]
  __int128 v54; // [rsp+330h] [rbp+2B0h]
  __int128 v55; // [rsp+340h] [rbp+2C0h]
  __int64 v56; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v57; // [rsp+358h] [rbp+2D8h]
  __int128 v58; // [rsp+368h] [rbp+2E8h]
  __int128 v59; // [rsp+378h] [rbp+2F8h]
  __int128 v60; // [rsp+388h] [rbp+308h]
  __int128 v61; // [rsp+398h] [rbp+318h]
  __int128 v62; // [rsp+3A8h] [rbp+328h]
  __int64 v63; // [rsp+3B8h] [rbp+338h]
  __int128 v64; // [rsp+3C0h] [rbp+340h]
  __int128 v65; // [rsp+3D0h] [rbp+350h]
  __int128 v66; // [rsp+3E0h] [rbp+360h]
  __int128 v67; // [rsp+3F0h] [rbp+370h]
  __int128 v68; // [rsp+400h] [rbp+380h]
  __int128 v69; // [rsp+410h] [rbp+390h]
  __int128 v70; // [rsp+420h] [rbp+3A0h]
  __int64 v71; // [rsp+430h] [rbp+3B0h]
  __int128 v72; // [rsp+440h] [rbp+3C0h]
  __int128 v73; // [rsp+450h] [rbp+3D0h]
  __int128 v74; // [rsp+460h] [rbp+3E0h]
  __int128 v75; // [rsp+470h] [rbp+3F0h]
  __int128 v76; // [rsp+480h] [rbp+400h]
  __int128 v77; // [rsp+490h] [rbp+410h]
  __int64 v78; // [rsp+4A0h] [rbp+420h]
  _OWORD v79[3]; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v80; // [rsp+4E0h] [rbp+460h]
  __int128 v81; // [rsp+4F0h] [rbp+470h]
  __int128 v82; // [rsp+500h] [rbp+480h]
  __int64 v83; // [rsp+528h] [rbp+4A8h]
  __int64 v84; // [rsp+530h] [rbp+4B0h] BYREF
  _BYTE v85[24]; // [rsp+538h] [rbp+4B8h] BYREF
  __int64 v86; // [rsp+550h] [rbp+4D0h]
  _BYTE *v87; // [rsp+558h] [rbp+4D8h]
  __m256i v88; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v89; // [rsp+588h] [rbp+508h]
  __int64 v90; // [rsp+590h] [rbp+510h]
  int v91; // [rsp+59Ch] [rbp+51Ch]
  __int64 v92; // [rsp+5A0h] [rbp+520h] BYREF
  _WORD *v93; // [rsp+5A8h] [rbp+528h]
  __int64 v94; // [rsp+5B0h] [rbp+530h]
  _OWORD *v95; // [rsp+5B8h] [rbp+538h]
  __m256i v96; // [rsp+5C0h] [rbp+540h] BYREF
  _BYTE *v97; // [rsp+5F0h] [rbp+570h]
  __int64 v98; // [rsp+5F8h] [rbp+578h]
  char v99; // [rsp+606h] [rbp+586h]
  char v100; // [rsp+607h] [rbp+587h]
  __int64 v101; // [rsp+608h] [rbp+588h]

  v101 = -2; /*0x1406454ce*/
  v4 = a2; /*0x1406454d9*/
  v5 = a1; /*0x1406454dc*/
  v6 = *(unsigned __int8 *)(a2 + 288); /*0x1406454df*/
  v98 = a2; /*0x1406454f4*/
  switch ( v6 ) /*0x1406454fb*/
  {
    case 0LL: /*0x1406454fb*/
      v7 = a3; /*0x1406454fd*/
      sub_141684120(v45, a2, 224); /*0x14064550d*/
      v8 = *(_QWORD *)(v4 + 224); /*0x140645512*/
      v9 = *(_QWORD *)(v4 + 232); /*0x140645519*/
      sub_141684120(&v46, v4, 224); /*0x140645530*/
      *(_DWORD *)(v4 + 289) = 1; /*0x140645535*/
      v89 = v8; /*0x140645547*/
      v48 = v8; /*0x14064554e*/
      v90 = v9; /*0x140645555*/
      v49 = v9; /*0x14064555c*/
      v50 = v4 + 240; /*0x140645563*/
      v52 = 0; /*0x14064556a*/
      nullsub_1(v10); /*0x140645571*/
      v11 = sub_140001650(496, 8); /*0x140645580*/
      if ( !v11 ) /*0x140645588*/
        sub_1416C2D31(8, 496); /*0x140645d31*/
      v12 = v11; /*0x14064558e*/
      sub_141684120(v11, &v46, 496); /*0x1406455a1*/
      *(_QWORD *)(v4 + 296) = v12; /*0x1406455a6*/
      v13 = &off_1417B5C10; /*0x1406455ad*/
      *(_QWORD *)(v4 + 304) = &off_1417B5C10; /*0x1406455b4*/
      a3 = v7; /*0x1406455bb*/
      goto LABEL_5; /*0x1406455be*/
    case 1LL: /*0x1406454fb*/
      sub_1416C3400(&off_141769280, a2, a3, a4); /*0x140645e06*/
    case 2LL: /*0x1406454fb*/
      sub_1416C3420(&off_141769280, a2, a3, a4); /*0x140645df8*/
    case 3LL: /*0x1406454fb*/
      v12 = *(_QWORD *)(a2 + 296); /*0x1406455c0*/
      v13 = *(__int64 (__fastcall ***)())(a2 + 304); /*0x1406455c7*/
LABEL_5:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v13[3])(&v46, v12, a3); /*0x1406455ce*/
      if ( (_QWORD)v46 ) /*0x1406455e4*/
      {
        v82 = v47[1]; /*0x1406455ff*/
        v81 = v47[0]; /*0x140645606*/
        v80 = v46; /*0x14064560d*/
        v97 = *(_BYTE **)(v98 + 296); /*0x140645622*/
        v95 = *(_OWORD **)(v98 + 304); /*0x140645630*/
        if ( *(_QWORD *)v95 ) /*0x140645637*/
          (*(void (__fastcall **)(_BYTE *))v95)(v97); /*0x140645646*/
        a1 = v97; /*0x140645649*/
        v14 = v98; /*0x140645650*/
        v15 = (_OWORD *)(v98 + 296); /*0x140645657*/
        a2 = *((_QWORD *)v95 + 1); /*0x140645665*/
        if ( a2 ) /*0x14064566c*/
          sub_140001660(v97, a2, *((_QWORD *)v95 + 2)); /*0x140645672*/
        v55 = v82; /*0x14064568c*/
        v54 = v81; /*0x140645693*/
        v53 = v80; /*0x14064569a*/
        *(_WORD *)(v14 + 289) = 0; /*0x1406456a1*/
        v16 = v80; /*0x1406456aa*/
        v17 = v81; /*0x1406456b1*/
        v15[2] = v82; /*0x1406456bf*/
        v15[1] = v17; /*0x1406456c3*/
        *v15 = v16; /*0x1406456c7*/
        v97 = (_BYTE *)(v14 + 344); /*0x1406456d1*/
        *(_BYTE *)(v14 + 344) = 0; /*0x1406456d8*/
LABEL_12:
        v18 = *v15; /*0x140645706*/
        v19 = v15[1]; /*0x140645709*/
        v95 = v15; /*0x14064570d*/
        v79[2] = v15[2]; /*0x140645718*/
        v79[1] = v19; /*0x14064571f*/
        v79[0] = v18; /*0x140645726*/
        v20 = (char *)(v18 + 16); /*0x140645734*/
        LOBYTE(a1) = 1; /*0x140645738*/
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v18 + 16), 1, 0) ) /*0x14064573c*/
          sub_1416C15B0((volatile void *)(v18 + 16)); /*0x140645d0a*/
        v21 = off_141EC90B8; /*0x140645747*/
        if ( 2 * *off_141EC90B8 ) /*0x140645751*/
        {
          v22 = sub_1416C2250(a1, a2); /*0x140645d1b*/
          LOBYTE(v22) = v22 ^ 1; /*0x140645d1e*/
        }
        else
        {
          v22 = 0; /*0x14064575d*/
        }
        v99 = *(_BYTE *)(v18 + 17); /*0x140645766*/
        v96.m256i_i64[1] = v18 + 16; /*0x140645771*/
        v96.m256i_i8[16] = v22; /*0x140645778*/
        v96.m256i_i64[0] = v99 != 0; /*0x14064577f*/
        if ( v99 ) /*0x140645786*/
        {
          LOWORD(a2) = 500; /*0x1406457b1*/
          sub_14066B160((unsigned int)&v56, a2, (unsigned int)aStatePoisoned, 14, (__int64)aProxyUpstream, 14); /*0x1406457b5*/
          if ( !(_BYTE)v22 && 2 * *v21 && !(unsigned __int8)sub_1416C2250(v24, v23) ) /*0x140645d97*/
            *(_BYTE *)(v18 + 17) = 1; /*0x140645da5*/
          v25 = *v20; /*0x1406457d1*/
          *v20 = 0; /*0x1406457d1*/
          if ( v25 == 2 ) /*0x1406457d6*/
            WakeByAddressSingle(v20); /*0x140645d3f*/
          sub_1405E7870(v79); /*0x1406457e3*/
        }
        else
        {
          v91 = v22; /*0x1406457ee*/
          v83 = v18 + 16; /*0x1406457f5*/
          sub_14067A4C0(&v46, v18 + 24); /*0x140645807*/
          v28 = (char *)(v18 + 16); /*0x140645814*/
          if ( !(_BYTE)v91 && 2 * *v21 && !(unsigned __int8)sub_1416C2250(v27, v26) ) /*0x140645dae*/
            *(_BYTE *)(v18 + 17) = 1; /*0x140645dbc*/
          v29 = *v28; /*0x14064582b*/
          *v28 = 0; /*0x14064582b*/
          if ( v29 == 2 ) /*0x140645830*/
            WakeByAddressSingle((PVOID)(v18 + 16)); /*0x140645d4d*/
          *(_QWORD *)v85 = 0; /*0x140645836*/
          *(_QWORD *)&v85[16] = 0; /*0x140645841*/
          nullsub_1(v27); /*0x14064584c*/
          v30 = (_WORD *)sub_140001650(2, 1); /*0x14064585b*/
          if ( !v30 ) /*0x140645863*/
            sub_1416C2D4B(1, 2); /*0x140645e3b*/
          *v30 = 27503; /*0x140645869*/
          v92 = 2; /*0x14064586e*/
          v93 = v30; /*0x140645879*/
          v94 = 2; /*0x140645880*/
          v96.m256i_i16[0] = 257; /*0x14064588b*/
          sub_140307860(&v88, v85, &v92, &v96); /*0x1406458b0*/
          if ( v88.m256i_i8[0] != -1 ) /*0x1406458bd*/
            sub_1400104F0(&v88); /*0x1406458c6*/
          nullsub_1(v31); /*0x1406458cc*/
          v32 = (void *)sub_140001650(14, 1); /*0x1406458db*/
          if ( !v32 ) /*0x1406458e3*/
            sub_1416C2D4B(1, 14); /*0x140645e4d*/
          qmemcpy(v32, "router_enabled", 14); /*0x140645901*/
          v92 = 14; /*0x140645904*/
          v93 = v32; /*0x14064590f*/
          v94 = 14; /*0x140645916*/
          v96.m256i_i8[0] = 1; /*0x140645928*/
          v96.m256i_i8[1] = v51; /*0x14064592f*/
          sub_140307860(&v88, v85, &v92, &v96); /*0x140645951*/
          if ( v88.m256i_i8[0] != -1 ) /*0x14064595e*/
            sub_1400104F0(&v88); /*0x140645967*/
          nullsub_1(v33); /*0x14064596d*/
          v34 = (void *)sub_140001650(22, 1); /*0x14064597c*/
          if ( !v34 ) /*0x140645984*/
            sub_1416C2D4B(1, 22); /*0x140645e5f*/
          qmemcpy(v34, "active_codex_providers", 22); /*0x140645991*/
          v92 = 22; /*0x1406459a2*/
          v93 = v34; /*0x1406459ad*/
          v94 = 22; /*0x1406459b4*/
          v100 = 1; /*0x1406459c6*/
          sub_140467F40(&v96, (char *)v47 + 8); /*0x1406459d4*/
          if ( v96.m256i_i8[0] == -1 ) /*0x1406459e1*/
          {
            v84 = v96.m256i_i64[1]; /*0x140645d5f*/
            sub_1416C3060( /*0x140645d8c*/
              (unsigned int)aCalledResultUn_8,
              43,
              (unsigned int)&v84,
              (unsigned int)&off_1417693D8,
              (__int64)&off_1417680F0);
          }
          v88 = v96; /*0x1406459f5*/
          v100 = 0; /*0x140645a03*/
          sub_140307860(&v96, v85, &v92, &v88); /*0x140645a26*/
          if ( v96.m256i_i8[0] != -1 ) /*0x140645a33*/
            sub_1400104F0(&v96); /*0x140645a3c*/
          nullsub_1(v35); /*0x140645a42*/
          v36 = (void *)sub_140001650(15, 1); /*0x140645a51*/
          if ( !v36 ) /*0x140645a59*/
            sub_1416C2D4B(1, 15); /*0x140645e71*/
          qmemcpy(v36, "providers_count", 15); /*0x140645a77*/
          v92 = 15; /*0x140645a7a*/
          v93 = v36; /*0x140645a85*/
          v94 = 15; /*0x140645a8c*/
          v96.m256i_i8[0] = 2; /*0x140645a9e*/
          v96.m256i_i64[1] = 0; /*0x140645aa5*/
          v96.m256i_i64[2] = *(_QWORD *)&v47[0]; /*0x140645ab0*/
          sub_140307860(&v88, v85, &v92, &v96); /*0x140645ad3*/
          if ( v88.m256i_i8[0] != -1 ) /*0x140645ae0*/
            sub_1400104F0(&v88); /*0x140645ae9*/
          *(_OWORD *)((char *)&v88.m256i_u32[1] + 3) = *(_OWORD *)v85; /*0x140645afd*/
          *(__int64 *)((char *)&v88.m256i_i64[2] + 7) = *(_QWORD *)&v85[16]; /*0x140645b04*/
          v96.m256i_i8[0] = 5; /*0x140645b0b*/
          *(_OWORD *)&v96.m256i_i8[1] = *(_OWORD *)v88.m256i_i8; /*0x140645b19*/
          *(_OWORD *)&v96.m256i_u64[2] = *(_OWORD *)&v85[8]; /*0x140645b27*/
          sub_140677670(&v56, &v96); /*0x140645b4a*/
          sub_1405E7AE0(&v46); /*0x140645b57*/
          sub_1405E7870(v79); /*0x140645b64*/
        }
        v37 = v56; /*0x140645b6a*/
        v72 = v57; /*0x140645b78*/
        v73 = v58; /*0x140645b86*/
        v74 = v59; /*0x140645b94*/
        v75 = v60; /*0x140645ba2*/
        v76 = v61; /*0x140645bb0*/
        v77 = v62; /*0x140645bbe*/
        v78 = v63; /*0x140645bcc*/
        v38 = v64; /*0x140645bd3*/
        *v97 = 1; /*0x140645be1*/
        if ( v37 == -1 ) /*0x140645be8*/
        {
          *(_QWORD *)v5 = -1; /*0x140645ccc*/
          v43 = 4; /*0x140645cd3*/
        }
        else
        {
          v71 = v78; /*0x140645bf5*/
          v70 = v77; /*0x140645c03*/
          v69 = v76; /*0x140645c11*/
          v68 = v75; /*0x140645c34*/
          v67 = v74; /*0x140645c3b*/
          v66 = v73; /*0x140645c42*/
          v65 = v72; /*0x140645c49*/
          v39 = v98; /*0x140645c50*/
          *(_BYTE *)(v98 + 290) = 0; /*0x140645c57*/
          *(_WORD *)(v39 + 291) = 0; /*0x140645c5e*/
          sub_1405E7870(v39 + 240); /*0x140645c6e*/
          *(_QWORD *)v5 = v37; /*0x140645c74*/
          v40 = v66; /*0x140645c7e*/
          v41 = v67; /*0x140645c85*/
          v42 = v68; /*0x140645c8c*/
          *(_OWORD *)(v5 + 8) = v65; /*0x140645c93*/
          *(_OWORD *)(v5 + 24) = v40; /*0x140645c97*/
          *(_OWORD *)(v5 + 40) = v41; /*0x140645c9b*/
          *(_OWORD *)(v5 + 56) = v42; /*0x140645c9f*/
          *(_OWORD *)(v5 + 72) = v69; /*0x140645caa*/
          *(_OWORD *)(v5 + 88) = v70; /*0x140645cb5*/
          *((_QWORD *)v5 + 13) = v71; /*0x140645cc0*/
          *((_OWORD *)v5 + 7) = v38; /*0x140645cc4*/
          v43 = 1; /*0x140645cc8*/
        }
      }
      else
      {
        *(_QWORD *)v5 = -1; /*0x140645cd7*/
        v43 = 3; /*0x140645cde*/
      }
      *(_BYTE *)(v98 + 288) = v43; /*0x140645ce7*/
      return v5;
    case 4LL: /*0x1406454fb*/
      v97 = (_BYTE *)(a2 + 344); /*0x1406456e8*/
      v15 = (_OWORD *)(a2 + 296); /*0x1406456f7*/
      if ( *(_BYTE *)(a2 + 344) ) /*0x1406456ef*/
      {
        if ( *(_BYTE *)(a2 + 344) == 1 ) /*0x140645dc8*/
        {
          v87 = v97; /*0x140645dd1*/
          v86 = a2 + 296; /*0x140645dd8*/
          sub_1416C3400(&off_141768130, a2, a3, a4); /*0x140645de6*/
        }
        v87 = v97; /*0x140645e14*/
        v86 = a2 + 296; /*0x140645e1b*/
        sub_1416C3420(&off_141768130, a2, a3, a4); /*0x140645e29*/
      }
      goto LABEL_12; /*0x140645700*/
  }
}
