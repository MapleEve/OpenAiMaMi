// module: codexmate_lib/core/voice/runtime
// addr: 0x140ceef90
// name: sub_140CEEF90
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
bool __fastcall sub_140CEEF90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r15
  char *v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rsi
  _BYTE *v21; // r13
  char v22; // r14
  char v23; // al
  char v24; // si
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r14
  char *v28; // rsi
  __int64 v29; // rcx
  __int64 *v30; // r15
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r14
  char *v36; // rcx
  __int64 *v37; // r15
  __int64 v38; // rdx
  char v39; // al
  char v40; // si
  char v41; // bl
  char *v42; // r14
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rdx
  char *v46; // r12
  char v47; // al
  __int64 v48; // rdx
  PVOID v49; // rcx
  char v50; // al
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  char *v56; // rsi
  char v57; // al
  char v58; // al
  char *v59; // rsi
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  PVOID v69; // rcx
  char v70; // al
  char v71; // al
  PVOID v72; // rcx
  signed __int64 v73; // rt0
  __int64 v74; // rsi
  _BYTE *v75; // rdi
  bool result; // al
  char *v77; // rsi
  char v78; // al
  char *v79; // rsi
  char v80; // al
  char *v81; // rsi
  char v82; // al
  char *v83; // rsi
  char v84; // al
  char *v85; // rsi
  char v86; // al
  __int128 v88; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v89; // [rsp+70h] [rbp-10h]
  _BYTE v90[24]; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int64 v91; // [rsp+98h] [rbp+18h]
  int v92; // [rsp+BCh] [rbp+3Ch]
  __int64 v93; // [rsp+C0h] [rbp+40h]
  __int64 v94; // [rsp+C8h] [rbp+48h]
  _BYTE *v95; // [rsp+D0h] [rbp+50h]
  __int64 v96; // [rsp+D8h] [rbp+58h]
  PVOID Address; // [rsp+E0h] [rbp+60h]
  char v98; // [rsp+EDh] [rbp+6Dh]
  char v99; // [rsp+EEh] [rbp+6Eh]
  char v100; // [rsp+EFh] [rbp+6Fh]
  __int64 v101; // [rsp+F0h] [rbp+70h]

  v101 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 536);
  v96 = a1;
  switch ( v6 )
  {
    case 0LL:
      v7 = *(_QWORD *)(a1 + 152);
      v8 = *(_QWORD *)(a1 + 160);
      v9 = a1 + 168;
      sub_141684120(a1 + 168, a1, 152);
      *(_QWORD *)(v5 + 320) = v7;
      *(_QWORD *)(v5 + 328) = v8;
      v95 = (_BYTE *)(v5 + 528);
      *(_BYTE *)(v5 + 528) = 0;
      break;
    case 1LL:
      sub_1416C3400(&off_1417B9DD0, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B9DD0, a2, a3, a4);
    case 3LL:
      v10 = a1 + 528;
      v11 = *(unsigned __int8 *)(a1 + 528);
      v9 = a1 + 168;
      v95 = (_BYTE *)(a1 + 528);
      switch ( v11 )
      {
        case 0LL:
          v7 = *(_QWORD *)(a1 + 320);
          v8 = *(_QWORD *)(a1 + 328);
          break;
        case 1LL:
          sub_1416C3400(&off_1417BC0C8, v10, a3, a4);
        case 2LL:
          sub_1416C3420(&off_1417BC0C8, v10, a3, a4);
        case 3LL:
          v93 = a1 + 168;
          JUMPOUT(0x140CEF087LL);
      }
      return result;
  }
  v93 = v9;
  sub_141684120(v5 + 336, v9, 152);
  *(_QWORD *)(v5 + 488) = v7;
  *(_QWORD *)(v5 + 496) = v8;
  while ( 2 )
  {
    *(_QWORD *)(v5 + 504) = v5 + 488;
    Address = (PVOID)(v5 + 520);
    *(_BYTE *)(v5 + 520) = 0;
    *(_QWORD *)(v5 + 512) = v5 + 488;
    sub_140890A80(v90, v5 + 512, v4);
    v12 = *(_QWORD *)v90;
    *(_BYTE *)Address = 2 * (*(_QWORD *)v90 == -2) + 1;
    if ( v12 == -2 )
    {
      *v95 = 3;
      v41 = 3;
      goto LABEL_120;
    }
    v13 = v91;
    v14 = v96;
    switch ( v12 )
    {
      case -1LL:
      case 3LL:
        goto LABEL_117;
      case 0LL:
        Address = *(PVOID *)&v90[16];
        v94 = *(_QWORD *)&v90[8];
        v99 = 1;
        v15 = v96 + 336;
        v17 = sub_1400640A0(v96 + 336);
        v18 = (char *)(v17 + 32);
        LOBYTE(v19) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v17 + 32), 1, 0) )
        {
          v99 = 1;
          sub_1416C15B0(v18);
          v18 = (char *)(v17 + 32);
        }
        v20 = off_141EC90B8;
        if ( 2 * *off_141EC90B8 )
        {
          v99 = 1;
          v42 = v18;
          v43 = sub_1416C2250(v19, v16);
          v18 = v42;
          v22 = v43 ^ 1;
          v21 = (_BYTE *)(v17 + 33);
          v19 = *(unsigned __int8 *)(v17 + 33);
          if ( (_BYTE)v19 )
          {
            if ( v43 )
            {
LABEL_18:
              if ( 2 * *v20 )
              {
                v99 = 1;
                v77 = v18;
                v78 = sub_1416C2250(v19, v16);
                v18 = v77;
                if ( !v78 )
                  *v21 = 1;
              }
            }
            v23 = *v18;
            *v18 = 0;
            v24 = 1;
            if ( v23 == 2 )
            {
              v99 = 1;
              WakeByAddressSingle(v18);
            }
            goto LABEL_50;
          }
        }
        else
        {
          v21 = (_BYTE *)(v17 + 33);
          v22 = 0;
          if ( *(_BYTE *)(v17 + 33) )
            goto LABEL_18;
        }
        v44 = *(_QWORD *)(v96 + 496);
        if ( !v44 || *(_QWORD *)(v17 + 840) != v44 || (unsigned __int8)(*(_BYTE *)(v17 + 867) - 1) >= 3u )
        {
          if ( !v22 )
          {
            if ( 2 * *v20 )
            {
              v99 = 1;
              v85 = v18;
              v86 = sub_1416C2250(v19, v16);
              v18 = v85;
              if ( !v86 )
                *v21 = 1;
            }
          }
          v50 = *v18;
          *v18 = 0;
          if ( v50 == 2 )
          {
            v99 = 1;
            WakeByAddressSingle(v18);
          }
          goto LABEL_82;
        }
        v45 = *(_QWORD *)(v17 + 312);
        if ( v45 )
        {
          v46 = v18;
          sub_140001660(*(_QWORD *)(v17 + 320), v45, 1);
          v18 = v46;
        }
        *(_QWORD *)(v17 + 312) = v94;
        *(_QWORD *)(v17 + 320) = Address;
        *(_QWORD *)(v17 + 328) = v13;
        if ( !v22 )
        {
          if ( 2 * *v20 )
          {
            v99 = 0;
            v81 = v18;
            v82 = sub_1416C2250(v19, v45);
            v18 = v81;
            if ( !v82 )
              *v21 = 1;
          }
        }
        v24 = 0;
        v47 = *v18;
        *v18 = 0;
        if ( v47 == 2 )
        {
          v99 = 0;
          v24 = 0;
          WakeByAddressSingle(v18);
        }
LABEL_50:
        v99 = v24;
        sub_140873770(v90, v15);
        if ( *(_QWORD *)v90 != -1 && *(_QWORD *)v90 )
          sub_140001660(*(_QWORD *)&v90[8], *(_QWORD *)v90, 1);
        v48 = v94;
        v4 = a2;
        v49 = Address;
        if ( ((v94 != 0) & (unsigned __int8)v24) != 1 )
          goto LABEL_108;
        goto LABEL_107;
      case 1LL:
        v88 = *(_OWORD *)&v90[8];
        v89 = v91;
        v33 = v96 + 336;
        v100 = 1;
        v34 = sub_1400640A0(v96 + 336);
        v35 = v34;
        v36 = (char *)(v34 + 32);
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v34 + 32), 1, 0) )
        {
          v100 = 1;
          sub_1416C15B0(v36);
          v36 = (char *)(v34 + 32);
        }
        v37 = off_141EC90B8;
        v38 = 0;
        if ( 2 * *off_141EC90B8 )
        {
          v100 = 1;
          v59 = v36;
          v60 = sub_1416C2250(v36, 0);
          v36 = v59;
          v38 = v60;
          LOBYTE(v38) = v60 ^ 1;
          if ( *(_BYTE *)(v34 + 33) )
          {
LABEL_33:
            if ( !(_BYTE)v38 )
            {
              if ( 2 * *v37 )
              {
                v100 = 1;
                v79 = v36;
                v80 = sub_1416C2250(v36, v38);
                v36 = v79;
                if ( !v80 )
                  *(_BYTE *)(v34 + 33) = 1;
              }
            }
            v39 = *v36;
            *v36 = 0;
            v40 = 1;
            if ( v39 == 2 )
            {
              v100 = 1;
              WakeByAddressSingle(v36);
            }
            goto LABEL_101;
          }
        }
        else if ( *(_BYTE *)(v34 + 33) )
        {
          goto LABEL_33;
        }
        v61 = *(_QWORD *)(v96 + 496);
        if ( !v61 || *(_QWORD *)(v34 + 840) != v61 || (unsigned __int8)(*(_BYTE *)(v34 + 867) - 1) >= 3u )
        {
          if ( !(_BYTE)v38 )
          {
            if ( 2 * *v37 )
            {
              v100 = 1;
              v83 = v36;
              v84 = sub_1416C2250(v36, v38);
              v36 = v83;
              if ( !v84 )
                *(_BYTE *)(v34 + 33) = 1;
            }
          }
          v71 = *v36;
          *v36 = 0;
          if ( v71 == 2 )
          {
            v100 = 1;
            WakeByAddressSingle(v36);
          }
          if ( (_QWORD)v88 )
            sub_140001660(*((_QWORD *)&v88 + 1), v88, 1);
          v14 = v96;
          goto LABEL_117;
        }
        LODWORD(v94) = v38;
        Address = v36;
        v98 = 1;
        if ( v89 >= 0x20 )
          sub_1414A35B0(*((_QWORD *)&v88 + 1), v89);
        else
          sub_1414A3BD0(*((_QWORD *)&v88 + 1), v89);
        v98 = 1;
        sub_14149C500(v90, &v88);
        v62 = *(_QWORD *)(v34 + 312);
        if ( v62 )
          sub_140001660(*(_QWORD *)(v34 + 320), v62, 1);
        *(_QWORD *)(v34 + 328) = *(_QWORD *)&v90[16];
        *(_OWORD *)(v34 + 312) = *(_OWORD *)v90;
        *(_QWORD *)&v90[16] = v89;
        *(_OWORD *)v90 = v88;
        v63 = v34 + 336;
        v64 = *(_QWORD *)(v35 + 336);
        if ( v64 )
          sub_140001660(*(_QWORD *)(v35 + 344), v64, 1);
        v65 = *(_QWORD *)&v90[16];
        *(_QWORD *)(v63 + 16) = *(_QWORD *)&v90[16];
        *(_OWORD *)v63 = *(_OWORD *)v90;
        v66 = *(unsigned int *)(v35 + 728);
        v67 = 0;
        if ( (_DWORD)v66 != -1 )
        {
          *(_QWORD *)v90 = *(_QWORD *)(v35 + 720);
          *(_DWORD *)&v90[8] = v66;
          v98 = 0;
          v68 = sub_141471AC0(v90);
          v65 = 1000 * v68 + (unsigned int)v66 / 0xF4240uLL;
          v67 = 1;
        }
        *(_QWORD *)(v35 + 40) = v67;
        *(_QWORD *)(v35 + 48) = v65;
        if ( !(_BYTE)v94 )
        {
          if ( 2 * *v37 )
          {
            v100 = 0;
            if ( !(unsigned __int8)sub_1416C2250(v67, v66) )
              *(_BYTE *)(v35 + 33) = 1;
          }
        }
        v40 = 0;
        v69 = Address;
        v70 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v70 == 2 )
        {
          v100 = 0;
          v40 = 0;
          WakeByAddressSingle(v69);
        }
LABEL_101:
        v100 = v40;
        sub_140873770(v90, v33);
        if ( *(_QWORD *)v90 != -1 && *(_QWORD *)v90 )
          sub_140001660(*(_QWORD *)&v90[8], *(_QWORD *)v90, 1);
        if ( !v40 )
          goto LABEL_108;
        v48 = v88;
        if ( !(_QWORD)v88 )
          goto LABEL_108;
        v49 = *((PVOID *)&v88 + 1);
        goto LABEL_107;
      case 2LL:
        Address = *(PVOID *)&v90[16];
        v94 = *(_QWORD *)&v90[8];
        v25 = v96 + 336;
        v27 = sub_1400640A0(v96 + 336);
        v28 = (char *)(v27 + 32);
        LOBYTE(v29) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v27 + 32), 1, 0) )
          sub_1416C15B0(v28);
        v30 = off_141EC90B8;
        v31 = 2 * *off_141EC90B8;
        v92 = 0;
        if ( v31 )
        {
          v51 = sub_1416C2250(v29, v26);
          LOBYTE(v51) = v51 ^ 1;
          v92 = v51;
          if ( *(_BYTE *)(v27 + 33) )
          {
LABEL_25:
            if ( !(_BYTE)v92 && 2 * *v30 && !(unsigned __int8)sub_1416C2250(v29, v26) )
              *(_BYTE *)(v27 + 33) = 1;
            v32 = *v28;
            *v28 = 0;
            if ( v32 == 2 )
              WakeByAddressSingle(v28);
            goto LABEL_73;
          }
        }
        else if ( *(_BYTE *)(v27 + 33) )
        {
          goto LABEL_25;
        }
        v52 = *(_QWORD *)(v96 + 496);
        if ( v52 && *(_QWORD *)(v27 + 840) == v52 && (unsigned __int8)(*(_BYTE *)(v27 + 867) - 1) < 3u )
        {
          sub_14087AFE0(v90, Address, v13);
          v89 = *(_QWORD *)&v90[16];
          v88 = *(_OWORD *)v90;
          v53 = *(_QWORD *)(v27 + 672);
          if ( v53 != -1 && v53 )
            sub_140001660(*(_QWORD *)(v27 + 680), v53, 1);
          *(_QWORD *)(v27 + 688) = v89;
          *(_OWORD *)(v27 + 672) = v88;
          sub_14087AA40(v90, Address, v13);
          v55 = *(_QWORD *)(v27 + 648);
          if ( v55 != -1 && v55 )
            sub_140001660(*(_QWORD *)(v27 + 656), v55, 1);
          *(_QWORD *)(v27 + 664) = *(_QWORD *)&v90[16];
          *(_OWORD *)(v27 + 648) = *(_OWORD *)v90;
          v56 = (char *)(v27 + 32);
          if ( !(_BYTE)v92 && 2 * *v30 && !(unsigned __int8)sub_1416C2250(v54, v55) )
            *(_BYTE *)(v27 + 33) = 1;
          v57 = *v56;
          *v56 = 0;
          if ( v57 == 2 )
            WakeByAddressSingle((PVOID)(v27 + 32));
LABEL_73:
          sub_140873770(v90, v25);
          if ( *(_QWORD *)v90 != -1 && *(_QWORD *)v90 )
            sub_140001660(*(_QWORD *)&v90[8], *(_QWORD *)v90, 1);
          v48 = v94;
          v49 = Address;
          if ( v94 )
LABEL_107:
            sub_140001660(v49, v48, 1);
LABEL_108:
          v5 = v96;
          continue;
        }
        if ( !(_BYTE)v92 && 2 * *v30 && !(unsigned __int8)sub_1416C2250(v29, v26) )
          *(_BYTE *)(v27 + 33) = 1;
        v58 = *v28;
        *v28 = 0;
        if ( v58 == 2 )
          WakeByAddressSingle(v28);
LABEL_82:
        v14 = v96;
        if ( v94 )
          sub_140001660(Address, v94, 1);
LABEL_117:
        Address = (PVOID)(v14 + 488);
        sub_140893210(v14 + 488);
        v72 = Address;
        v73 = _InterlockedDecrement64(*(volatile signed __int64 **)Address);
        v74 = v93;
        v75 = v95;
        if ( !v73 )
          sub_140574470(v72);
        sub_140014150(v96 + 336);
        *v75 = 1;
        v41 = 1;
        sub_140BEF8C0(v74);
LABEL_120:
        *(_BYTE *)(v96 + 536) = v41;
        return (_DWORD)v12 == -2;
    }
  }
}