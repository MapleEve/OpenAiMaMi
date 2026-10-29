// win 1.2.7 latest-exe | module src/core/voice/runtime/mod.rs | ea 0x14039fec0 | successor of pre-update 0x140b4a490 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
bool __fastcall sub_14039FEC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  char *v11; // r8
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 *v18; // rsi
  _BYTE *v19; // r13
  char v20; // r14
  char v21; // al
  char v22; // si
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r14
  char *v26; // rsi
  __int64 v27; // rcx
  __int64 *v28; // r15
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r14
  char *v34; // rcx
  __int64 *v35; // r15
  __int64 v36; // rdx
  char v37; // al
  char v38; // si
  char v39; // bl
  char *v40; // r14
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rdx
  char *v44; // r12
  char v45; // al
  __int64 v46; // rdx
  PVOID v47; // rcx
  char v48; // al
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  char *v55; // rsi
  char v56; // al
  char v57; // al
  char *v58; // rsi
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // r8
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
  signed __int64 v72; // rt0
  __int64 v73; // rsi
  _BYTE *v74; // rdi
  bool result; // al
  char *v76; // rsi
  char v77; // al
  char *v78; // rsi
  char v79; // al
  char *v80; // rsi
  char v81; // al
  char *v82; // rsi
  char v83; // al
  char *v84; // rsi
  char v85; // al
  __int128 v87; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v88; // [rsp+70h] [rbp-10h]
  _BYTE v89[24]; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int64 v90; // [rsp+98h] [rbp+18h]
  int v91; // [rsp+BCh] [rbp+3Ch]
  __int64 v92; // [rsp+C0h] [rbp+40h]
  __int64 v93; // [rsp+C8h] [rbp+48h]
  _BYTE *v94; // [rsp+D0h] [rbp+50h]
  __int64 v95; // [rsp+D8h] [rbp+58h]
  PVOID Address; // [rsp+E0h] [rbp+60h]
  char v97; // [rsp+EDh] [rbp+6Dh]
  char v98; // [rsp+EEh] [rbp+6Eh]
  char v99; // [rsp+EFh] [rbp+6Fh]
  __int64 v100; // [rsp+F0h] [rbp+70h]

  v100 = -2;
  v2 = a2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 536);
  v95 = a1;
  switch ( v4 )
  {
    case 0LL:
      v5 = *(_QWORD *)(a1 + 152);
      v6 = *(_QWORD *)(a1 + 160);
      v7 = a1 + 168;
      sub_1419234B0(a1 + 168, a1, 152);
      *(_QWORD *)(v3 + 320) = v5;
      *(_QWORD *)(v3 + 328) = v6;
      v94 = (_BYTE *)(v3 + 528);
      *(_BYTE *)(v3 + 528) = 0;
      break;
    case 1LL:
      sub_14196B990(&off_141A0E070);
    case 2LL:
      sub_14196B9B0(&off_141A0E070);
    case 3LL:
      v8 = *(unsigned __int8 *)(a1 + 528);
      v7 = a1 + 168;
      v94 = (_BYTE *)(a1 + 528);
      switch ( v8 )
      {
        case 0LL:
          v5 = *(_QWORD *)(a1 + 320);
          v6 = *(_QWORD *)(a1 + 328);
          break;
        case 1LL:
          sub_14196B990(&off_141A10668);
        case 2LL:
          sub_14196B9B0(&off_141A10668);
        case 3LL:
          v92 = a1 + 168;
          JUMPOUT(0x14039FFB7LL);
      }
      return result;
  }
  v92 = v7;
  sub_1419234B0(v3 + 336, v7, 152);
  *(_QWORD *)(v3 + 488) = v5;
  *(_QWORD *)(v3 + 496) = v6;
  while ( 2 )
  {
    *(_QWORD *)(v3 + 504) = v3 + 488;
    Address = (PVOID)(v3 + 520);
    *(_BYTE *)(v3 + 520) = 0;
    *(_QWORD *)(v3 + 512) = v3 + 488;
    sub_140B395E0(v89, v3 + 488, v2);
    v9 = *(_QWORD *)v89;
    *(_BYTE *)Address = 2 * (*(_QWORD *)v89 == -2) + 1;
    if ( v9 == -2 )
    {
      *v94 = 3;
      v39 = 3;
      goto LABEL_120;
    }
    v10 = *(_QWORD *)&v89[8];
    v11 = *(char **)&v89[16];
    v12 = v90;
    v13 = v95;
    switch ( v9 )
    {
      case -1LL:
      case 3LL:
        goto LABEL_117;
      case 0LL:
        Address = *(PVOID *)&v89[16];
        v93 = *(_QWORD *)&v89[8];
        v98 = 1;
        v14 = v95 + 336;
        v16 = sub_140595030(v95 + 336);
        v11 = (char *)(v16 + 32);
        LOBYTE(v17) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v16 + 32), 1, 0) )
        {
          v98 = 1;
          sub_141969A30(v11);
          v11 = (char *)(v16 + 32);
        }
        v18 = off_142240260;
        if ( 2 * *off_142240260 )
        {
          v98 = 1;
          v40 = v11;
          v41 = sub_14196A710(v17, v15, v11);
          v11 = v40;
          v20 = v41 ^ 1;
          v19 = (_BYTE *)(v16 + 33);
          v17 = *(unsigned __int8 *)(v16 + 33);
          if ( (_BYTE)v17 )
          {
            if ( v41 )
            {
LABEL_18:
              if ( 2 * *v18 )
              {
                v98 = 1;
                v76 = v11;
                v77 = sub_14196A710(v17, v15, v11);
                v11 = v76;
                if ( !v77 )
                  *v19 = 1;
              }
            }
            v21 = *v11;
            *v11 = 0;
            v22 = 1;
            if ( v21 == 2 )
            {
              v98 = 1;
              WakeByAddressSingle(v11);
            }
            goto LABEL_50;
          }
        }
        else
        {
          v19 = (_BYTE *)(v16 + 33);
          v20 = 0;
          if ( *(_BYTE *)(v16 + 33) )
            goto LABEL_18;
        }
        v42 = *(_QWORD *)(v95 + 496);
        if ( !v42 || *(_QWORD *)(v16 + 840) != v42 || (unsigned __int8)(*(_BYTE *)(v16 + 867) - 1) >= 3u )
        {
          if ( !v20 )
          {
            if ( 2 * *v18 )
            {
              v98 = 1;
              v82 = v11;
              v83 = sub_14196A710(v17, v15, v11);
              v11 = v82;
              if ( !v83 )
                *v19 = 1;
            }
          }
          v48 = *v11;
          *v11 = 0;
          if ( v48 == 2 )
          {
            v98 = 1;
            WakeByAddressSingle(v11);
          }
          goto LABEL_82;
        }
        v43 = *(_QWORD *)(v16 + 312);
        if ( v43 )
        {
          v44 = v11;
          sub_140001660(*(_QWORD *)(v16 + 320), v43, 1);
          v11 = v44;
        }
        *(_QWORD *)(v16 + 312) = v93;
        *(_QWORD *)(v16 + 320) = Address;
        *(_QWORD *)(v16 + 328) = v12;
        if ( !v20 )
        {
          if ( 2 * *v18 )
          {
            v98 = 0;
            v80 = v11;
            v81 = sub_14196A710(v17, v43, v11);
            v11 = v80;
            if ( !v81 )
              *v19 = 1;
          }
        }
        v22 = 0;
        v45 = *v11;
        *v11 = 0;
        if ( v45 == 2 )
        {
          v98 = 0;
          v22 = 0;
          WakeByAddressSingle(v11);
        }
LABEL_50:
        v98 = v22;
        sub_140818050(v89, v14);
        if ( *(_QWORD *)v89 != -1 && *(_QWORD *)v89 )
          sub_140001660(*(_QWORD *)&v89[8], *(_QWORD *)v89, 1);
        v46 = v93;
        v2 = a2;
        v47 = Address;
        if ( ((v93 != 0) & (unsigned __int8)v22) != 1 )
          goto LABEL_108;
        goto LABEL_107;
      case 1LL:
        v87 = *(_OWORD *)&v89[8];
        v88 = v90;
        v31 = v95 + 336;
        v99 = 1;
        v32 = sub_140595030(v95 + 336);
        v33 = v32;
        v34 = (char *)(v32 + 32);
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v32 + 32), 1, 0) )
        {
          v99 = 1;
          sub_141969A30(v34);
          v34 = (char *)(v32 + 32);
        }
        v35 = off_142240260;
        v36 = 0;
        if ( 2 * *off_142240260 )
        {
          v99 = 1;
          v58 = v34;
          v59 = sub_14196A710(v34, 0, v11);
          v34 = v58;
          v36 = v59;
          LOBYTE(v36) = v59 ^ 1;
          if ( *(_BYTE *)(v32 + 33) )
          {
LABEL_33:
            if ( !(_BYTE)v36 )
            {
              if ( 2 * *v35 )
              {
                v99 = 1;
                v78 = v34;
                v79 = sub_14196A710(v34, v36, v11);
                v34 = v78;
                if ( !v79 )
                  *(_BYTE *)(v32 + 33) = 1;
              }
            }
            v37 = *v34;
            *v34 = 0;
            v38 = 1;
            if ( v37 == 2 )
            {
              v99 = 1;
              WakeByAddressSingle(v34);
            }
            goto LABEL_101;
          }
        }
        else if ( *(_BYTE *)(v32 + 33) )
        {
          goto LABEL_33;
        }
        v60 = *(_QWORD *)(v95 + 496);
        if ( !v60 || *(_QWORD *)(v32 + 840) != v60 || (unsigned __int8)(*(_BYTE *)(v32 + 867) - 1) >= 3u )
        {
          if ( !(_BYTE)v36 )
          {
            if ( 2 * *v35 )
            {
              v99 = 1;
              v84 = v34;
              v85 = sub_14196A710(v34, v36, v11);
              v34 = v84;
              if ( !v85 )
                *(_BYTE *)(v32 + 33) = 1;
            }
          }
          v71 = *v34;
          *v34 = 0;
          if ( v71 == 2 )
          {
            v99 = 1;
            WakeByAddressSingle(v34);
          }
          v10 = v87;
          if ( (_QWORD)v87 )
            sub_140001660(*((_QWORD *)&v87 + 1), v87, 1);
          v13 = v95;
          goto LABEL_117;
        }
        LODWORD(v93) = v36;
        Address = v34;
        v97 = 1;
        if ( v88 >= 0x20 )
          sub_1416E23D0(*((_QWORD *)&v87 + 1), v88);
        else
          sub_1416E29F0(*((_QWORD *)&v87 + 1), v88);
        v97 = 1;
        sub_1416DB410(v89, &v87);
        v62 = *(_QWORD *)(v32 + 312);
        if ( v62 )
          sub_140001660(*(_QWORD *)(v32 + 320), v62, 1);
        *(_QWORD *)(v32 + 328) = *(_QWORD *)&v89[16];
        *(_OWORD *)(v32 + 312) = *(_OWORD *)v89;
        *(_QWORD *)&v89[16] = v88;
        *(_OWORD *)v89 = v87;
        v63 = v32 + 336;
        v64 = *(_QWORD *)(v33 + 336);
        if ( v64 )
          sub_140001660(*(_QWORD *)(v33 + 344), v64, 1);
        v65 = *(_QWORD *)&v89[16];
        *(_QWORD *)(v63 + 16) = *(_QWORD *)&v89[16];
        *(_OWORD *)v63 = *(_OWORD *)v89;
        v66 = *(unsigned int *)(v33 + 728);
        v67 = 0;
        if ( (_DWORD)v66 != -1 )
        {
          *(_QWORD *)v89 = *(_QWORD *)(v33 + 720);
          *(_DWORD *)&v89[8] = v66;
          v97 = 0;
          v68 = sub_1416AED20(v89);
          v65 = 1000 * v68 + (unsigned int)v66 / 0xF4240uLL;
          v67 = 1;
        }
        *(_QWORD *)(v33 + 40) = v67;
        *(_QWORD *)(v33 + 48) = v65;
        if ( !(_BYTE)v93 )
        {
          if ( 2 * *v35 )
          {
            v99 = 0;
            if ( !(unsigned __int8)sub_14196A710(v67, v66, v61) )
              *(_BYTE *)(v33 + 33) = 1;
          }
        }
        v38 = 0;
        v69 = Address;
        v70 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v70 == 2 )
        {
          v99 = 0;
          v38 = 0;
          WakeByAddressSingle(v69);
        }
LABEL_101:
        v99 = v38;
        sub_140818050(v89, v31);
        if ( *(_QWORD *)v89 != -1 && *(_QWORD *)v89 )
          sub_140001660(*(_QWORD *)&v89[8], *(_QWORD *)v89, 1);
        if ( !v38 )
          goto LABEL_108;
        v46 = v87;
        if ( !(_QWORD)v87 )
          goto LABEL_108;
        v47 = *((PVOID *)&v87 + 1);
        goto LABEL_107;
      case 2LL:
        Address = *(PVOID *)&v89[16];
        v93 = *(_QWORD *)&v89[8];
        v23 = v95 + 336;
        v25 = sub_140595030(v95 + 336);
        v26 = (char *)(v25 + 32);
        LOBYTE(v27) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v25 + 32), 1, 0) )
          sub_141969A30(v26);
        v28 = off_142240260;
        v29 = 2 * *off_142240260;
        v91 = 0;
        if ( v29 )
        {
          v49 = sub_14196A710(v27, v24, v11);
          LOBYTE(v49) = v49 ^ 1;
          v91 = v49;
          if ( *(_BYTE *)(v25 + 33) )
          {
LABEL_25:
            if ( !(_BYTE)v91 && 2 * *v28 && !(unsigned __int8)sub_14196A710(v27, v24, v11) )
              *(_BYTE *)(v25 + 33) = 1;
            v30 = *v26;
            *v26 = 0;
            if ( v30 == 2 )
              WakeByAddressSingle(v26);
            goto LABEL_73;
          }
        }
        else if ( *(_BYTE *)(v25 + 33) )
        {
          goto LABEL_25;
        }
        v50 = *(_QWORD *)(v95 + 496);
        if ( v50 && *(_QWORD *)(v25 + 840) == v50 && (unsigned __int8)(*(_BYTE *)(v25 + 867) - 1) < 3u )
        {
          sub_14081F8E0(v89, Address, v12);
          v88 = *(_QWORD *)&v89[16];
          v87 = *(_OWORD *)v89;
          v51 = *(_QWORD *)(v25 + 672);
          if ( v51 != -1 && v51 )
            sub_140001660(*(_QWORD *)(v25 + 680), v51, 1);
          *(_QWORD *)(v25 + 688) = v88;
          *(_OWORD *)(v25 + 672) = v87;
          sub_14081F340(v89, Address, v12);
          v54 = *(_QWORD *)(v25 + 648);
          if ( v54 != -1 && v54 )
            sub_140001660(*(_QWORD *)(v25 + 656), v54, 1);
          *(_QWORD *)(v25 + 664) = *(_QWORD *)&v89[16];
          *(_OWORD *)(v25 + 648) = *(_OWORD *)v89;
          v55 = (char *)(v25 + 32);
          if ( !(_BYTE)v91 && 2 * *v28 && !(unsigned __int8)sub_14196A710(v52, v54, v53) )
            *(_BYTE *)(v25 + 33) = 1;
          v56 = *v55;
          *v55 = 0;
          if ( v56 == 2 )
            WakeByAddressSingle((PVOID)(v25 + 32));
LABEL_73:
          sub_140818050(v89, v23);
          if ( *(_QWORD *)v89 != -1 && *(_QWORD *)v89 )
            sub_140001660(*(_QWORD *)&v89[8], *(_QWORD *)v89, 1);
          v46 = v93;
          v47 = Address;
          if ( v93 )
LABEL_107:
            sub_140001660(v47, v46, 1);
LABEL_108:
          v3 = v95;
          continue;
        }
        if ( !(_BYTE)v91 && 2 * *v28 && !(unsigned __int8)sub_14196A710(v27, v24, v11) )
          *(_BYTE *)(v25 + 33) = 1;
        v57 = *v26;
        *v26 = 0;
        if ( v57 == 2 )
          WakeByAddressSingle(v26);
LABEL_82:
        v10 = v93;
        v13 = v95;
        if ( v93 )
          sub_140001660(Address, v93, 1);
LABEL_117:
        Address = (PVOID)(v13 + 488);
        sub_140B663A0(v13 + 488, v10, v11);
        v72 = _InterlockedDecrement64(*(volatile signed __int64 **)Address);
        v73 = v92;
        v74 = v94;
        if ( !v72 )
          sub_140CA3CC0();
        sub_140031300(v95 + 336);
        *v74 = 1;
        v39 = 1;
        sub_14028CF30(v73);
LABEL_120:
        *(_BYTE *)(v95 + 536) = v39;
        return (_DWORD)v9 == -2;
    }
  }
}
