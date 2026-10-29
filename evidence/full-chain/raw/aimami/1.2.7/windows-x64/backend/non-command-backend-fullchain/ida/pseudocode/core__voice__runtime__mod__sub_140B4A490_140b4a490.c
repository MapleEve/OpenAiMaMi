// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140b4a490 | name sub_140B4A490
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
bool __fastcall sub_140B4A490(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __m128i *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  const __m128i *v7; // r14
  __int64 v8; // rax
  __int8 *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rdx
  char *v12; // r8
  unsigned __int64 v13; // rdi
  __m128i *v14; // rsi
  __m128i *v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 *v18; // rsi
  _BYTE *v19; // r13
  char v20; // r14
  char v21; // al
  char v22; // si
  __m128i *v23; // rbx
  __int64 v24; // r14
  char *v25; // rsi
  __int64 v26; // rcx
  __int64 *v27; // r15
  __int64 v28; // rax
  char v29; // al
  __m128i *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // r14
  char *v33; // rcx
  __int64 *v34; // r15
  int v35; // edx
  char v36; // al
  char v37; // si
  char v38; // bl
  char *v39; // r14
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  char *v43; // r12
  char v44; // al
  __int64 v45; // rdx
  PVOID v46; // rcx
  char v47; // al
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  char *v53; // rsi
  char v54; // al
  char v55; // al
  char *v56; // rsi
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // edx
  PVOID v67; // rcx
  char v68; // al
  char v69; // al
  signed __int64 v70; // rt0
  const __m128i *v71; // rsi
  __m128i *v72; // rdi
  char *v74; // rsi
  char v75; // al
  char *v76; // rsi
  char v77; // al
  char *v78; // rsi
  char v79; // al
  char *v80; // rsi
  char v81; // al
  char *v82; // rsi
  char v83; // al
  __int128 v85; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v86; // [rsp+70h] [rbp-10h]
  _BYTE v87[24]; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int64 v88; // [rsp+98h] [rbp+18h]
  const __m128i *v89; // [rsp+A8h] [rbp+28h]
  __m128i *v90; // [rsp+B0h] [rbp+30h]
  int v91; // [rsp+BCh] [rbp+3Ch]
  const __m128i *v92; // [rsp+C0h] [rbp+40h]
  __int64 v93; // [rsp+C8h] [rbp+48h]
  __m128i *v94; // [rsp+D0h] [rbp+50h]
  __m128i *v95; // [rsp+D8h] [rbp+58h]
  PVOID Address; // [rsp+E0h] [rbp+60h]
  char v97; // [rsp+EDh] [rbp+6Dh]
  char v98; // [rsp+EEh] [rbp+6Eh]
  char v99; // [rsp+EFh] [rbp+6Fh]
  __int64 v100; // [rsp+F0h] [rbp+70h]

  v100 = -2;
  v2 = a2;
  v3 = (__m128i *)a1;
  v4 = *(unsigned __int8 *)(a1 + 536);
  v95 = (__m128i *)a1;
  switch ( v4 )
  {
    case 0LL:
      v5 = *(_QWORD *)(a1 + 152);
      v6 = *(_QWORD *)(a1 + 160);
      v7 = (const __m128i *)(a1 + 168);
      sub_1418F44E0((__m128i *)(a1 + 168), (const __m128i *)a1, 0x98u);
      v3[20].m128i_i64[0] = v5;
      v3[20].m128i_i64[1] = v6;
      v94 = v3 + 33;
      v3[33].m128i_i8[0] = 0;
LABEL_5:
      v92 = v7;
      sub_1418F44E0(v3 + 21, v7, 0x98u);
      v3[30].m128i_i64[1] = v5;
      v3[31].m128i_i64[0] = v6;
      break;
    case 1LL:
      sub_1419393E0(&off_141A2A300);
    case 2LL:
      sub_141939400(&off_141A2A300);
    case 3LL:
      v8 = *(unsigned __int8 *)(a1 + 528);
      v7 = (const __m128i *)(a1 + 168);
      v94 = (__m128i *)(a1 + 528);
      switch ( v8 )
      {
        case 0LL:
          v5 = *(_QWORD *)(a1 + 320);
          v6 = *(_QWORD *)(a1 + 328);
          goto LABEL_5;
        case 1LL:
          sub_1419393E0(&off_141A2C888);
        case 2LL:
          sub_141939400(&off_141A2C888);
        case 3LL:
          v92 = (const __m128i *)(a1 + 168);
          Address = (PVOID)(a1 + 520);
          switch ( *(_BYTE *)(a1 + 520) )
          {
            case 0:
              JUMPOUT(0x140B4A5A9LL);
            case 1:
              v90 = v94;
              v89 = v92;
              sub_1419393E0(&off_141A2ACF8);
            case 2:
              v90 = v94;
              v89 = v92;
              sub_141939400(&off_141A2ACF8);
            case 3:
              v9 = *(__int8 **)(a1 + 512);
              break;
          }
          goto LABEL_14;
      }
  }
  while ( 2 )
  {
    v9 = &v3[30].m128i_i8[8];
    v3[31].m128i_i64[1] = (__int64)&v3[30].m128i_i64[1];
    Address = &v3[32].m128i_u64[1];
    v3[32].m128i_i8[8] = 0;
    v3[32].m128i_i64[0] = (__int64)&v3[30].m128i_i64[1];
LABEL_14:
    sub_14092AF60(v87, v9, v2);
    v10 = *(_QWORD *)v87;
    *(_BYTE *)Address = 2 * (*(_QWORD *)v87 == -2) + 1;
    if ( v10 == -2 )
    {
      v94->m128i_i8[0] = 3;
      v38 = 3;
      goto LABEL_122;
    }
    v11 = *(_QWORD *)&v87[8];
    v12 = *(char **)&v87[16];
    v13 = v88;
    v14 = v95;
    switch ( v10 )
    {
      case -1LL:
      case 3LL:
        goto LABEL_119;
      case 0LL:
        Address = *(PVOID *)&v87[16];
        v93 = *(_QWORD *)&v87[8];
        v98 = 1;
        v15 = v95 + 21;
        v16 = sub_14054A5A0(&v95[21]);
        v12 = (char *)(v16 + 32);
        LOBYTE(v17) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v16 + 32), 1, 0) )
        {
          v98 = 1;
          sub_141937480(v12);
          v12 = (char *)(v16 + 32);
        }
        v18 = off_1421E7210;
        if ( 2 * *off_1421E7210 )
        {
          v98 = 1;
          v39 = v12;
          v40 = sub_141938160(v17);
          v12 = v39;
          v20 = v40 ^ 1;
          v19 = (_BYTE *)(v16 + 33);
          v17 = *(unsigned __int8 *)(v16 + 33);
          if ( (_BYTE)v17 )
          {
            if ( v40 )
            {
LABEL_20:
              if ( 2 * *v18 )
              {
                v98 = 1;
                v74 = v12;
                v75 = sub_141938160(v17);
                v12 = v74;
                if ( !v75 )
                  *v19 = 1;
              }
            }
            v21 = *v12;
            *v12 = 0;
            v22 = 1;
            if ( v21 == 2 )
            {
              v98 = 1;
              WakeByAddressSingle(v12);
            }
            goto LABEL_52;
          }
        }
        else
        {
          v19 = (_BYTE *)(v16 + 33);
          v20 = 0;
          if ( *(_BYTE *)(v16 + 33) )
            goto LABEL_20;
        }
        v41 = v95[31].m128i_i64[0];
        if ( !v41 || *(_QWORD *)(v16 + 840) != v41 || (unsigned __int8)(*(_BYTE *)(v16 + 867) - 1) >= 3u )
        {
          if ( !v20 )
          {
            if ( 2 * *v18 )
            {
              v98 = 1;
              v80 = v12;
              v81 = sub_141938160(v17);
              v12 = v80;
              if ( !v81 )
                *v19 = 1;
            }
          }
          v47 = *v12;
          *v12 = 0;
          if ( v47 == 2 )
          {
            v98 = 1;
            WakeByAddressSingle(v12);
          }
          goto LABEL_84;
        }
        v42 = *(_QWORD *)(v16 + 312);
        if ( v42 )
        {
          v43 = v12;
          sub_140001660(*(_QWORD *)(v16 + 320), v42, 1);
          v12 = v43;
        }
        *(_QWORD *)(v16 + 312) = v93;
        *(_QWORD *)(v16 + 320) = Address;
        *(_QWORD *)(v16 + 328) = v13;
        if ( !v20 )
        {
          if ( 2 * *v18 )
          {
            v98 = 0;
            v78 = v12;
            v79 = sub_141938160(v17);
            v12 = v78;
            if ( !v79 )
              *v19 = 1;
          }
        }
        v22 = 0;
        v44 = *v12;
        *v12 = 0;
        if ( v44 == 2 )
        {
          v98 = 0;
          v22 = 0;
          WakeByAddressSingle(v12);
        }
LABEL_52:
        v98 = v22;
        sub_140C75E50(v87, v15);
        if ( *(_QWORD *)v87 != -1 && *(_QWORD *)v87 )
          sub_140001660(*(_QWORD *)&v87[8], *(_QWORD *)v87, 1);
        v45 = v93;
        v2 = a2;
        v46 = Address;
        if ( ((v93 != 0) & (unsigned __int8)v22) != 1 )
          goto LABEL_110;
        goto LABEL_109;
      case 1LL:
        v85 = *(_OWORD *)&v87[8];
        v86 = v88;
        v30 = v95 + 21;
        v99 = 1;
        v31 = sub_14054A5A0(&v95[21]);
        v32 = v31;
        v33 = (char *)(v31 + 32);
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v31 + 32), 1, 0) )
        {
          v99 = 1;
          sub_141937480(v33);
          v33 = (char *)(v31 + 32);
        }
        v34 = off_1421E7210;
        v35 = 0;
        if ( 2 * *off_1421E7210 )
        {
          v99 = 1;
          v56 = v33;
          v57 = sub_141938160(v33);
          v33 = v56;
          v35 = v57;
          LOBYTE(v35) = v57 ^ 1;
          if ( *(_BYTE *)(v31 + 33) )
          {
LABEL_35:
            if ( !(_BYTE)v35 )
            {
              if ( 2 * *v34 )
              {
                v99 = 1;
                v76 = v33;
                v77 = sub_141938160(v33);
                v33 = v76;
                if ( !v77 )
                  *(_BYTE *)(v31 + 33) = 1;
              }
            }
            v36 = *v33;
            *v33 = 0;
            v37 = 1;
            if ( v36 == 2 )
            {
              v99 = 1;
              WakeByAddressSingle(v33);
            }
            goto LABEL_103;
          }
        }
        else if ( *(_BYTE *)(v31 + 33) )
        {
          goto LABEL_35;
        }
        v58 = v95[31].m128i_i64[0];
        if ( !v58 || *(_QWORD *)(v31 + 840) != v58 || (unsigned __int8)(*(_BYTE *)(v31 + 867) - 1) >= 3u )
        {
          if ( !(_BYTE)v35 )
          {
            if ( 2 * *v34 )
            {
              v99 = 1;
              v82 = v33;
              v83 = sub_141938160(v33);
              v33 = v82;
              if ( !v83 )
                *(_BYTE *)(v31 + 33) = 1;
            }
          }
          v69 = *v33;
          *v33 = 0;
          if ( v69 == 2 )
          {
            v99 = 1;
            WakeByAddressSingle(v33);
          }
          v11 = v85;
          if ( (_QWORD)v85 )
            sub_140001660(*((_QWORD *)&v85 + 1), v85, 1);
          v14 = v95;
          goto LABEL_119;
        }
        LODWORD(v93) = v35;
        Address = v33;
        v97 = 1;
        if ( v86 >= 0x20 )
          sub_1416B3400(*((_QWORD *)&v85 + 1), v86);
        else
          sub_1416B3A20(*((_QWORD *)&v85 + 1), v86);
        v97 = 1;
        sub_1416AC440(v87, &v85);
        v59 = *(_QWORD *)(v31 + 312);
        if ( v59 )
          sub_140001660(*(_QWORD *)(v31 + 320), v59, 1);
        *(_QWORD *)(v31 + 328) = *(_QWORD *)&v87[16];
        *(_OWORD *)(v31 + 312) = *(_OWORD *)v87;
        *(_QWORD *)&v87[16] = v86;
        *(_OWORD *)v87 = v85;
        v60 = v31 + 336;
        v61 = *(_QWORD *)(v32 + 336);
        if ( v61 )
          sub_140001660(*(_QWORD *)(v32 + 344), v61, 1);
        v62 = *(_QWORD *)&v87[16];
        *(_QWORD *)(v60 + 16) = *(_QWORD *)&v87[16];
        *(_OWORD *)v60 = *(_OWORD *)v87;
        v63 = *(_DWORD *)(v32 + 728);
        v64 = 0;
        if ( v63 != -1 )
        {
          *(_QWORD *)v87 = *(_QWORD *)(v32 + 720);
          *(_DWORD *)&v87[8] = v63;
          v97 = 0;
          v65 = sub_14167FD50(v87);
          v62 = 1000 * v65 + v66 / 0xF4240uLL;
          v64 = 1;
        }
        *(_QWORD *)(v32 + 40) = v64;
        *(_QWORD *)(v32 + 48) = v62;
        if ( !(_BYTE)v93 )
        {
          if ( 2 * *v34 )
          {
            v99 = 0;
            if ( !(unsigned __int8)sub_141938160(v64) )
              *(_BYTE *)(v32 + 33) = 1;
          }
        }
        v37 = 0;
        v67 = Address;
        v68 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v68 == 2 )
        {
          v99 = 0;
          v37 = 0;
          WakeByAddressSingle(v67);
        }
LABEL_103:
        v99 = v37;
        sub_140C75E50(v87, v30);
        if ( *(_QWORD *)v87 != -1 && *(_QWORD *)v87 )
          sub_140001660(*(_QWORD *)&v87[8], *(_QWORD *)v87, 1);
        if ( !v37 )
          goto LABEL_110;
        v45 = v85;
        if ( !(_QWORD)v85 )
          goto LABEL_110;
        v46 = *((PVOID *)&v85 + 1);
        goto LABEL_109;
      case 2LL:
        Address = *(PVOID *)&v87[16];
        v93 = *(_QWORD *)&v87[8];
        v23 = v95 + 21;
        v24 = sub_14054A5A0(&v95[21]);
        v25 = (char *)(v24 + 32);
        LOBYTE(v26) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v24 + 32), 1, 0) )
          sub_141937480(v25);
        v27 = off_1421E7210;
        v28 = 2 * *off_1421E7210;
        v91 = 0;
        if ( v28 )
        {
          v48 = sub_141938160(v26);
          LOBYTE(v48) = v48 ^ 1;
          v91 = v48;
          if ( *(_BYTE *)(v24 + 33) )
          {
LABEL_27:
            if ( !(_BYTE)v91 && 2 * *v27 && !(unsigned __int8)sub_141938160(v26) )
              *(_BYTE *)(v24 + 33) = 1;
            v29 = *v25;
            *v25 = 0;
            if ( v29 == 2 )
              WakeByAddressSingle(v25);
            goto LABEL_75;
          }
        }
        else if ( *(_BYTE *)(v24 + 33) )
        {
          goto LABEL_27;
        }
        v49 = v95[31].m128i_i64[0];
        if ( v49 && *(_QWORD *)(v24 + 840) == v49 && (unsigned __int8)(*(_BYTE *)(v24 + 867) - 1) < 3u )
        {
          sub_140C7D7D0(v87, Address, v13);
          v86 = *(_QWORD *)&v87[16];
          v85 = *(_OWORD *)v87;
          v50 = *(_QWORD *)(v24 + 672);
          if ( v50 != -1 && v50 )
            sub_140001660(*(_QWORD *)(v24 + 680), v50, 1);
          *(_QWORD *)(v24 + 688) = v86;
          *(_OWORD *)(v24 + 672) = v85;
          sub_140C7D230(v87, Address, v13);
          v52 = *(_QWORD *)(v24 + 648);
          if ( v52 != -1 && v52 )
            sub_140001660(*(_QWORD *)(v24 + 656), v52, 1);
          *(_QWORD *)(v24 + 664) = *(_QWORD *)&v87[16];
          *(_OWORD *)(v24 + 648) = *(_OWORD *)v87;
          v53 = (char *)(v24 + 32);
          if ( !(_BYTE)v91 && 2 * *v27 && !(unsigned __int8)sub_141938160(v51) )
            *(_BYTE *)(v24 + 33) = 1;
          v54 = *v53;
          *v53 = 0;
          if ( v54 == 2 )
            WakeByAddressSingle((PVOID)(v24 + 32));
LABEL_75:
          sub_140C75E50(v87, v23);
          if ( *(_QWORD *)v87 != -1 && *(_QWORD *)v87 )
            sub_140001660(*(_QWORD *)&v87[8], *(_QWORD *)v87, 1);
          v45 = v93;
          v46 = Address;
          if ( v93 )
LABEL_109:
            sub_140001660(v46, v45, 1);
LABEL_110:
          v3 = v95;
          continue;
        }
        if ( !(_BYTE)v91 && 2 * *v27 && !(unsigned __int8)sub_141938160(v26) )
          *(_BYTE *)(v24 + 33) = 1;
        v55 = *v25;
        *v25 = 0;
        if ( v55 == 2 )
          WakeByAddressSingle(v25);
LABEL_84:
        v11 = v93;
        v14 = v95;
        if ( v93 )
          sub_140001660(Address, v93, 1);
LABEL_119:
        Address = &v14[30].m128i_u64[1];
        sub_140947B30(&v14[30].m128i_u64[1], v11, v12);
        v70 = _InterlockedDecrement64(*(volatile signed __int64 **)Address);
        v71 = v92;
        v72 = v94;
        if ( !v70 )
          sub_1409E44B0();
        sub_14029B270(&v95[21]);
        v72->m128i_i8[0] = 1;
        v38 = 1;
        sub_140A3B910(v71);
LABEL_122:
        v95[33].m128i_i8[8] = v38;
        return (_DWORD)v10 == -2;
    }
  }
}
