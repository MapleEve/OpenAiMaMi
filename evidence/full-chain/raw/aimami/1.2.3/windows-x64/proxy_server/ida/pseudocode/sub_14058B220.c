// module: core::relay::proxy_server, core::relay::manager (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14058b220  size: 0xa4c  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Companion/helper to the route-table builder family (sub_140588900 et al.): references the same
//   'failed to park thread' panic-location and 'internal error: entered unreachable code' guard,
//   consistent with worker-thread park/park_timeout glue used while the proxy's tokio runtime is being
//   spun up or shut down.
//
// Referenced strings/symbols:
//   0x141684120  sub_141684120
//   0x1412eb530  sub_1412EB530
//   0x1407bf360  sub_1407BF360
//   0x1412f09c0  sub_1412F09C0
//   0x14148bbf0  sub_14148BBF0
//   0x140b82ff0  sub_140B82FF0
//   0x141302f30  sub_141302F30
//   0x1412feba0  sub_1412FEBA0
//   0x1412f6360  sub_1412F6360
//   0x1416c2100  sub_1416C2100
//   0x141792398  off_141792398
//   0x1416c32c0  sub_1416C32C0
//   0x141766af5  unk_141766AF5
//   0x141764458  off_141764458
//   0x1412f90e0  sub_1412F90E0
//   0x1405e6d10  sub_1405E6D10
//   0x1412f3610  sub_1412F3610
//   0x1416c3060  sub_1416C3060
//   0x141766ce8  aFailedToParkTh   "failed to park thread"
//   0x141769398  unk_141769398
//   0x141766e98  off_141766E98
//   0x1412f2e70  sub_1412F2E70
//   0x1416c32a0  sub_1416C32A0
//   0x141766bb6  aInternalErrorE_124   "internal error: entered unreachable code"
//   0x1417675e8  off_1417675E8
//   0x140844000  sub_140844000
//   0x1412f2900  sub_1412F2900
//   0x141302e80  sub_141302E80
//   0x1416c3400  sub_1416C3400
//   0x141767c30  off_141767C30
//   0x1416c3420  sub_1416C3420
//   0x141767a30  off_141767A30
//   0x141767a60  off_141767A60
//   0x141767bc8  off_141767BC8
//   0x141302e90  sub_141302E90
//   0x1412f1530  sub_1412F1530
//   0x141767a48  off_141767A48
//   0x1412f1d10  sub_1412F1D10
//   0x1412ec2b0  sub_1412EC2B0
//   0x1412e9930  sub_1412E9930
//   0x1412e9570  sub_1412E9570
//   0x1412f1bf0  sub_1412F1BF0
//   0x1412f9060  sub_1412F9060
//   0x1405e80c0  sub_1405E80C0
//   0x1412ec290  sub_1412EC290
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14058B220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  _BYTE *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // edx
  int v13; // r15d
  unsigned int v14; // r12d
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // edx
  unsigned __int64 v33; // rax
  unsigned int v34; // edx
  bool v35; // cl
  void (__fastcall *v36)(__int64); // rax
  char v38[208]; // [rsp+30h] [rbp-50h] BYREF
  char v39[208]; // [rsp+100h] [rbp+80h] BYREF
  __int128 v40; // [rsp+1D0h] [rbp+150h] BYREF
  unsigned __int64 v41; // [rsp+1E0h] [rbp+160h]
  char v42; // [rsp+208h] [rbp+188h]
  _BYTE v43[32]; // [rsp+220h] [rbp+1A0h] BYREF
  char v44[8]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v45; // [rsp+248h] [rbp+1C8h]
  __int64 v46; // [rsp+250h] [rbp+1D0h]
  char v47; // [rsp+280h] [rbp+200h]
  char v48; // [rsp+288h] [rbp+208h]
  char v49; // [rsp+290h] [rbp+210h]
  char v50; // [rsp+298h] [rbp+218h]
  __m256i v51; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v52; // [rsp+2C0h] [rbp+240h]
  __int128 v53; // [rsp+2D0h] [rbp+250h]
  __int128 v54; // [rsp+2E0h] [rbp+260h]
  __int128 v55; // [rsp+2F0h] [rbp+270h]
  __int128 v56; // [rsp+300h] [rbp+280h]
  _QWORD v57[4]; // [rsp+310h] [rbp+290h] BYREF
  _QWORD *v58; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v59; // [rsp+338h] [rbp+2B8h]
  unsigned __int64 v60; // [rsp+348h] [rbp+2C8h]
  __int128 v61; // [rsp+350h] [rbp+2D0h]
  unsigned __int64 v62; // [rsp+360h] [rbp+2E0h]
  __int64 v63; // [rsp+370h] [rbp+2F0h] BYREF
  volatile signed __int64 *v64[2]; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v65; // [rsp+388h] [rbp+308h]
  __int64 v66; // [rsp+390h] [rbp+310h] BYREF
  __int64 v67; // [rsp+398h] [rbp+318h]
  _QWORD *v68; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v69; // [rsp+3A8h] [rbp+328h]
  unsigned __int64 v70; // [rsp+3B8h] [rbp+338h]
  _QWORD *v71; // [rsp+3C0h] [rbp+340h]
  unsigned __int64 v72; // [rsp+3C8h] [rbp+348h]
  unsigned int v73; // [rsp+3D0h] [rbp+350h]
  char v74; // [rsp+3D8h] [rbp+358h]
  __int64 v75; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v76; // [rsp+3E8h] [rbp+368h]
  __m256i v77; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v78; // [rsp+410h] [rbp+390h] BYREF
  __int128 v79; // [rsp+420h] [rbp+3A0h]
  __int128 v80; // [rsp+430h] [rbp+3B0h]
  __int128 v81; // [rsp+440h] [rbp+3C0h]
  __int128 v82; // [rsp+450h] [rbp+3D0h]
  char v83; // [rsp+460h] [rbp+3E0h]
  char v84; // [rsp+468h] [rbp+3E8h]
  char v85; // [rsp+472h] [rbp+3F2h] BYREF
  _BYTE v86[2]; // [rsp+473h] [rbp+3F3h] BYREF
  char v87; // [rsp+475h] [rbp+3F5h]
  char v88; // [rsp+476h] [rbp+3F6h]
  char v89; // [rsp+477h] [rbp+3F7h]
  __int64 v90; // [rsp+478h] [rbp+3F8h]

  v90 = -2; /*0x14058b242*/
  sub_141684120(v39, a2, 208); /*0x14058b263*/
  v88 = 1; /*0x14058b268*/
  sub_1412EB530(&v63, a1); /*0x14058b279*/
  if ( *(_DWORD *)a1 != 1 ) /*0x14058b282*/
  {
    LODWORD(v8) = sub_1407BF360(a1 + 8, a1 + 48, a2, a3); /*0x14058b2e4*/
    goto LABEL_73; /*0x14058b2e7*/
  }
  sub_141684120(v38, a2, 208); /*0x14058b291*/
  v89 = 1; /*0x14058b296*/
  v6 = sub_1412F09C0(); /*0x14058b2a3*/
  v7 = *(unsigned __int8 *)(v6 + 72); /*0x14058b2a6*/
  if ( v7 != 1 ) /*0x14058b2ad*/
  {
    if ( v7 == 2 ) /*0x14058b2b2*/
      goto LABEL_4; /*0x14058b2b2*/
    v89 = 1; /*0x14058b2ec*/
    sub_14148BBF0(v6, sub_140B82FF0); /*0x14058b2fd*/
    *(_BYTE *)(v6 + 72) = 1; /*0x14058b303*/
  }
  if ( *(_BYTE *)(v6 + 70) != 2 ) /*0x14058b30b*/
    goto LABEL_89; /*0x14058b30b*/
  *(_BYTE *)(v6 + 70) = 1; /*0x14058b311*/
  v9 = 720; /*0x14058b31e*/
  if ( *(_BYTE *)(a1 + 48) ) /*0x14058b315*/
    v9 = 512; /*0x14058b323*/
  v10 = *(_QWORD *)(a1 + 56) + v9; /*0x14058b327*/
  v89 = 1; /*0x14058b32b*/
  v11 = sub_141302F30(v10); /*0x14058b338*/
  v13 = v12; /*0x14058b33b*/
  if ( (*(_BYTE *)(v6 + 56) & 1) != 0 ) /*0x14058b342*/
  {
    v14 = *(_DWORD *)(v6 + 60); /*0x14058b344*/
    LODWORD(v8) = *(_DWORD *)(v6 + 64); /*0x14058b348*/
  }
  else
  {
    v89 = 1; /*0x14058b34e*/
    v14 = sub_1412FEBA0(); /*0x14058b35b*/
    LODWORD(v8) = v15; /*0x14058b35e*/
  }
  *(_DWORD *)(v6 + 56) = 1; /*0x14058b365*/
  *(_DWORD *)(v6 + 60) = v11; /*0x14058b36c*/
  *(_DWORD *)(v6 + 64) = v13; /*0x14058b370*/
  v89 = 1; /*0x14058b374*/
  sub_1412F6360(&v68, v6, a1 + 48); /*0x14058b388*/
  v70 = __PAIR64__((unsigned int)v8, v14); /*0x14058b38e*/
  v40 = v69; /*0x14058b3aa*/
  v41 = __PAIR64__((unsigned int)v8, v14); /*0x14058b3b8*/
  if ( v68 == (_QWORD *)-2LL ) /*0x14058b3c3*/
  {
LABEL_4:
    v89 = 1; /*0x14058b2b4*/
    sub_1416C2100(&off_141792398); /*0x14058b2c2*/
  }
  v62 = v41; /*0x14058b3d0*/
  v61 = v40; /*0x14058b3de*/
  if ( v68 == (_QWORD *)-1LL ) /*0x14058b3e9*/
  {
LABEL_89:
    v89 = 1; /*0x14058bb49*/
    sub_1416C32C0(&unk_141766AF5, 387, &off_141764458); /*0x14058bb63*/
  }
  v58 = v68; /*0x14058b3ef*/
  v59 = v61; /*0x14058b3fd*/
  v60 = v62; /*0x14058b40b*/
  sub_141684120(&v40, a2, 208); /*0x14058b422*/
  v87 = 1; /*0x14058b427*/
  v16 = sub_1412F90E0(&v85); /*0x14058b435*/
  if ( !v16 ) /*0x14058b43e*/
  {
    if ( v50 == 3 ) /*0x14058bb75*/
    {
      if ( v42 == 4 ) /*0x14058bb85*/
      {
        sub_1405E6D10(v43); /*0x14058bc29*/
      }
      else if ( v42 == 3 && v49 == 3 && v48 == 3 && v47 == 3 && v43[24] == 4 ) /*0x14058bbbe*/
      {
        sub_1412F3610(v44); /*0x14058bbc7*/
        if ( v45 ) /*0x14058bbd7*/
          (*(void (__fastcall **)(__int64))(v45 + 24))(v46); /*0x14058bbe0*/
      }
    }
    sub_1416C3060( /*0x14058bc55*/
      (unsigned int)aFailedToParkTh,
      21,
      (unsigned int)&v85,
      (unsigned int)&unk_141769398,
      (__int64)&off_141766E98);
  }
  v66 = v16; /*0x14058b444*/
  v67 = v17; /*0x14058b44b*/
  v57[0] = &v66; /*0x14058b459*/
  v57[1] = &v66; /*0x14058b460*/
  v57[2] = 0; /*0x14058b467*/
  sub_141684120(&v68, &v40, 208); /*0x14058b489*/
  while ( 2 ) /*0x14058b4c0*/
  {
    v18 = (_BYTE *)sub_1412F09C0(); /*0x14058b4c0*/
    v22 = (unsigned __int8)v18[72]; /*0x14058b4c6*/
    if ( v22 == 1 ) /*0x14058b4cd*/
      goto LABEL_20; /*0x14058b4cd*/
    if ( v22 != 2 ) /*0x14058b4d2*/
    {
      v8 = v18; /*0x14058b4de*/
      sub_14148BBF0(v18, sub_140B82FF0); /*0x14058b4e1*/
      v18 = v8; /*0x14058b4e7*/
      v8[72] = 1; /*0x14058b4ea*/
LABEL_20:
      LOBYTE(v22) = v18[68]; /*0x14058b4f0*/
      v19 = (unsigned __int8)v18[69]; /*0x14058b4f4*/
      *((_WORD *)v18 + 34) = -32767; /*0x14058b4f8*/
    }
    v86[0] = v22; /*0x14058b4fe*/
    v86[1] = v19; /*0x14058b504*/
    switch ( v84 ) /*0x14058b518*/
    {
      case 0: /*0x14058b518*/
        v23 = v68; /*0x14058b51a*/
        *(_QWORD *)&v69 = 5; /*0x14058b521*/
        DWORD2(v69) = 0; /*0x14058b52c*/
        v70 = (unsigned __int64)v68; /*0x14058b536*/
        v74 = 0; /*0x14058b53d*/
        v24 = 5; /*0x14058b544*/
        v25 = 0; /*0x14058b549*/
LABEL_25:
        v71 = v23; /*0x14058b574*/
        v72 = v24; /*0x14058b57b*/
        v73 = v25; /*0x14058b582*/
        v75 = (__int64)v23; /*0x14058b588*/
        v83 = 0; /*0x14058b58f*/
LABEL_26:
        v26 = *v23 + 16LL; /*0x14058b596*/
        v76 = v26; /*0x14058b59d*/
        BYTE8(v82) = 0; /*0x14058b5a4*/
LABEL_27:
        v77.m256i_i64[0] = v26; /*0x14058b5ab*/
        LOBYTE(v82) = 0; /*0x14058b5b2*/
LABEL_28:
        v77.m256i_i64[1] = v26; /*0x14058b5b9*/
        v77.m256i_i8[24] = 0; /*0x14058b5c0*/
        v77.m256i_i64[2] = v26; /*0x14058b5c7*/
        *(_OWORD *)&v51.m256i_u64[1] = 0; /*0x14058b5dc*/
        v78 = (unsigned __int64)v26; /*0x14058b5df*/
        *(_QWORD *)&v80 = 0; /*0x14058b5f8*/
        v79 = *(_OWORD *)v51.m256i_i8; /*0x14058b606*/
        *((_QWORD *)&v80 + 1) = 1; /*0x14058b60d*/
        *(_QWORD *)&v81 = 1; /*0x14058b618*/
        BYTE8(v81) = 0; /*0x14058b623*/
        LODWORD(v8) = sub_1412F2E70(&v78, v57); /*0x14058b636*/
        if ( (_BYTE)v8 == 2 ) /*0x14058b63b*/
        {
          v77.m256i_i8[24] = 4; /*0x14058b63d*/
          LOBYTE(v82) = 3; /*0x14058b644*/
          BYTE8(v82) = 3; /*0x14058b64b*/
          v83 = 3; /*0x14058b652*/
          LOBYTE(v8) = 2; /*0x14058b659*/
          v74 = 3; /*0x14058b660*/
          v84 = 3; /*0x14058b666*/
          if ( v86[0] == 2 ) /*0x14058b673*/
            goto LABEL_49; /*0x14058b673*/
          goto LABEL_48; /*0x14058b673*/
        }
        sub_1412F3610(&v78); /*0x14058b683*/
        if ( *((_QWORD *)&v78 + 1) ) /*0x14058b693*/
          (*(void (__fastcall **)(_QWORD))(*((_QWORD *)&v78 + 1) + 24LL))(v79); /*0x14058b69c*/
        if ( (_BYTE)v8 == 1 ) /*0x14058b6a4*/
          sub_1416C32A0(aInternalErrorE_124, 40, &off_1417675E8); /*0x14058bad2*/
        v77.m256i_i8[24] = 1; /*0x14058b6aa*/
        LOBYTE(v82) = 1; /*0x14058b6b8*/
        BYTE8(v82) = 1; /*0x14058b6bf*/
        v27 = *(_DWORD *)(v77.m256i_i64[0] + 40); /*0x14058b6c6*/
        v28 = *(_QWORD *)(v77.m256i_i64[0] + 48); /*0x14058b6c9*/
        v65 = v77.m256i_i64[0]; /*0x14058b6cd*/
        *(_QWORD *)(v77.m256i_i64[0] + 40) = 0; /*0x14058b6d4*/
        if ( v27 == 1 ) /*0x14058b6df*/
          sub_140844000(v28); /*0x14058b6e1*/
        sub_1412F2900(v65, 1); /*0x14058b6f3*/
        v83 = 1; /*0x14058b6f9*/
        v75 = sub_141302E80(v30, v29, v31); /*0x14058b706*/
        LODWORD(v76) = v32; /*0x14058b70d*/
        break; /*0x14058b70d*/
      case 1: /*0x14058b518*/
        sub_1416C3400(&off_141767C30, v19, v20, v21); /*0x14058baa2*/
      case 2: /*0x14058b518*/
        sub_1416C3420(&off_141767C30, v19, v20, v21); /*0x14058bab4*/
      case 3: /*0x14058b518*/
        switch ( v74 ) /*0x14058b55e*/
        {
          case 0: /*0x14058b55e*/
            v23 = (_QWORD *)v70; /*0x14058b560*/
            v24 = v69; /*0x14058b567*/
            v25 = DWORD2(v69); /*0x14058b56e*/
            goto LABEL_25; /*0x14058b56e*/
          case 1: /*0x14058b55e*/
            sub_1416C3400(&off_141767A30, v19, v20, v21); /*0x14058bae4*/
          case 2: /*0x14058b55e*/
            sub_1416C3420(&off_141767A30, v19, v20, v21); /*0x14058baf6*/
          case 3: /*0x14058b55e*/
            switch ( v83 ) /*0x14058b791*/
            {
              case 0: /*0x14058b791*/
                v23 = (_QWORD *)v75; /*0x14058b793*/
                break; /*0x14058b79a*/
              case 1: /*0x14058b791*/
                sub_1416C3400(&off_141767A60, v19, v20, v21); /*0x14058bb1a*/
              case 2: /*0x14058b791*/
                sub_1416C3420(&off_141767A60, v19, v20, v21); /*0x14058bb08*/
              case 3: /*0x14058b791*/
                switch ( BYTE8(v82) ) /*0x14058b903*/
                {
                  case 0: /*0x14058b903*/
                    v26 = v76; /*0x14058b905*/
                    goto LABEL_27; /*0x14058b90c*/
                  case 1: /*0x14058b903*/
                    sub_1416C3400(&off_141767BC8, v19, v20, v21); /*0x14058bb3e*/
                  case 2: /*0x14058b903*/
                    sub_1416C3420(&off_141767BC8, v19, v20, v21); /*0x14058bb2c*/
                  case 3: /*0x14058b903*/
                    v26 = v77.m256i_i64[0]; /*0x14058b928*/
                    goto LABEL_28; /*0x14058b92f*/
                }
            }
            goto LABEL_26; /*0x14058b79a*/
          case 4: /*0x14058b55e*/
            goto LABEL_46;
        }
    }
    while ( 1 ) /*0x14058b71e*/
    {
      LODWORD(v8) = *(unsigned __int8 *)(v71[1] + 16LL); /*0x14058b71e*/
      if ( !(_BYTE)v8 ) /*0x14058b726*/
        goto LABEL_41; /*0x14058b726*/
      v33 = sub_141302E90(&v75); /*0x14058b72f*/
      v35 = v34 >= v73; /*0x14058b73d*/
      if ( v33 != v72 ) /*0x14058b74c*/
        v35 = v33 >= v72; /*0x14058b74c*/
      if ( v35 ) /*0x14058b751*/
      {
LABEL_41:
        LOBYTE(v8) = (_BYTE)v8 == 0; /*0x14058b756*/
        v74 = 1; /*0x14058b75e*/
        v84 = 1; /*0x14058b764*/
        if ( v86[0] == 2 ) /*0x14058b771*/
          goto LABEL_49; /*0x14058b771*/
        goto LABEL_48; /*0x14058b771*/
      }
      sub_1412F1530(&v51, 0, 10000000, &off_141767A48); /*0x14058b7b5*/
      v82 = v56; /*0x14058b7c9*/
      v81 = v55; /*0x14058b7d4*/
      v80 = v54; /*0x14058b7df*/
      v79 = v53; /*0x14058b7ff*/
      v78 = v52; /*0x14058b803*/
      v77 = v51; /*0x14058b807*/
LABEL_46:
      if ( (unsigned __int8)sub_1412F1D10(&v77, v57) ) /*0x14058b818*/
        break; /*0x14058b818*/
      sub_1412EC2B0(&v77); /*0x14058b877*/
      if ( v77.m256i_i8[0] ) /*0x14058b884*/
      {
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v77.m256i_i64[1]) ) /*0x14058b88d*/
          sub_1412E9930(&v77.m256i_u64[1]); /*0x14058b89a*/
      }
      else if ( !_InterlockedDecrement64((volatile signed __int64 *)v77.m256i_i64[1]) ) /*0x14058b8a9*/
      {
        sub_1412E9570(&v77.m256i_u64[1]); /*0x14058b8b6*/
      }
      if ( v77.m256i_i64[2] && *((_QWORD *)&v79 + 1) ) /*0x14058b8d8*/
        (*(void (__fastcall **)(_QWORD))(*((_QWORD *)&v79 + 1) + 24LL))(v80); /*0x14058b8e5*/
    }
    LOBYTE(v8) = 2; /*0x14058b822*/
    v74 = 4; /*0x14058b829*/
    v84 = 3; /*0x14058b82f*/
    if ( v86[0] == 2 ) /*0x14058b83c*/
      goto LABEL_49; /*0x14058b83c*/
LABEL_48:
    sub_1412F1BF0(v86); /*0x14058b83e*/
LABEL_49:
    if ( (_BYTE)v8 == 2 ) /*0x14058b84f*/
    {
      sub_1412F9060(&v85); /*0x14058b858*/
      continue; /*0x14058b85e*/
    }
    break;
  }
  if ( v84 == 3 ) /*0x14058b987*/
  {
    if ( v74 == 4 ) /*0x14058b993*/
    {
      sub_1405E6D10(&v77); /*0x14058b9e7*/
    }
    else if ( v74 == 3 && v83 == 3 && BYTE8(v82) == 3 && (_BYTE)v82 == 3 && v77.m256i_i8[24] == 4 ) /*0x14058b9bc*/
    {
      sub_1412F3610(&v78); /*0x14058b9c1*/
      if ( *((_QWORD *)&v78 + 1) ) /*0x14058b9d1*/
        (*(void (__fastcall **)(_QWORD))(*((_QWORD *)&v78 + 1) + 24LL))(v79); /*0x14058b9da*/
    }
  }
  v36 = *(void (__fastcall **)(__int64))(v66 + 24); /*0x14058b9fb*/
  v87 = 0; /*0x14058b9ff*/
  v36(v67); /*0x14058ba06*/
  v89 = 0; /*0x14058ba09*/
  sub_1405E80C0(&v58); /*0x14058ba17*/
LABEL_73:
  sub_1412EC290(&v63); /*0x14058ba1d*/
  if ( v63 != 2 ) /*0x14058ba35*/
  {
    if ( v63 ) /*0x14058ba41*/
    {
      if ( !_InterlockedDecrement64(v64[0]) ) /*0x14058ba4a*/
      {
        v88 = 0; /*0x14058ba50*/
        sub_1412E9930(v64); /*0x14058ba57*/
      }
    }
    else if ( !_InterlockedDecrement64(v64[0]) ) /*0x14058ba66*/
    {
      v88 = 0; /*0x14058ba6c*/
      sub_1412E9570(v64); /*0x14058ba73*/
    }
  }
  LOBYTE(v8) = (unsigned __int8)v8 & 1; /*0x14058ba79*/
  return (unsigned int)v8; /*0x14058ba80*/
}
