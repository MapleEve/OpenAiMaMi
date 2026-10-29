// win 1.2.7 | module src/core/relay/translator/anthropic_schema.rs | ea 0x1403c5fd0 | name sub_1403C5FD0
// win 1.2.7 | module src/core/relay/translator/anthropic_schema.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403C5FD0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v16; // rsi
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int128 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r13
  int v28; // eax
  char v29; // cl
  bool v30; // cf
  __int64 v31; // r12
  __int64 i; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // rsi
  int v38; // eax
  char v39; // cl
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // r14
  __int64 v46; // r13
  int v47; // eax
  bool v48; // sf
  char v49; // cl
  __int64 v50; // rax
  char v51; // bl
  __int128 v52; // xmm0
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  _DWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  _DWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  void *v66; // rax
  __int64 v67; // rdx
  __int128 v68; // xmm0
  _OWORD *v69; // rax
  char v70; // al
  __int64 v71; // rcx
  int v72; // edx
  __int16 v73; // r8
  char v74; // r9
  __int128 v75; // [rsp+30h] [rbp-50h] BYREF
  __int64 v76; // [rsp+40h] [rbp-40h]
  _QWORD v77[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v78; // [rsp+60h] [rbp-20h] BYREF
  __int64 v79; // [rsp+70h] [rbp-10h]
  __int64 v80; // [rsp+78h] [rbp-8h]
  _BYTE v81[48]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v82; // [rsp+B0h] [rbp+30h]
  __int128 v83; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v84; // [rsp+D0h] [rbp+50h]
  __int64 v85; // [rsp+E0h] [rbp+60h]
  __int64 v86; // [rsp+E8h] [rbp+68h] BYREF
  _DWORD *v87; // [rsp+F0h] [rbp+70h]
  __int64 v88; // [rsp+F8h] [rbp+78h]
  __int64 v89; // [rsp+100h] [rbp+80h]
  _BYTE v90[48]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v91; // [rsp+138h] [rbp+B8h]
  __int64 v92; // [rsp+140h] [rbp+C0h]
  __int64 v93; // [rsp+148h] [rbp+C8h]
  __int64 v94; // [rsp+150h] [rbp+D0h]
  char v95; // [rsp+15Bh] [rbp+DBh]
  char v96; // [rsp+15Ch] [rbp+DCh]
  char v97; // [rsp+15Dh] [rbp+DDh]
  char v98; // [rsp+15Eh] [rbp+DEh]
  char v99; // [rsp+15Fh] [rbp+DFh]
  __int64 v100; // [rsp+160h] [rbp+E0h]

  v100 = -2;
  v89 = a1;
  v2 = *(_BYTE *)a2 == 5;
  v92 = a2;
  if ( !v2 )
    goto LABEL_17;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    goto LABEL_20;
  v94 = *(_QWORD *)(a2 + 16);
LABEL_4:
  v4 = v3 + 360;
  v5 = *(unsigned __int16 *)(v3 + 626);
  v93 = v3;
  v6 = (_QWORD *)(v3 - 8);
  v85 = v5;
  v7 = 3LL * (unsigned int)(8 * v5);
  v8 = -1;
  do
  {
    if ( !v7 )
    {
      v8 = v85;
LABEL_12:
      a2 = v92;
      v3 = v93;
      if ( !v94 )
        goto LABEL_20;
      --v94;
      v3 = *(_QWORD *)(v93 + 8 * v8 + 632);
      goto LABEL_4;
    }
    v9 = v4 + 24;
    v10 = 4LL - *(_QWORD *)(v4 + 16);
    v11 = sub_1418F4B70(aType_5, *(_QWORD *)(v4 + 8));
    if ( v11 )
      v10 = v11;
    v12 = (v10 > 0) - (v10 < 0);
    v6 += 4;
    ++v8;
    v7 -= 24;
    v4 = v9;
  }
  while ( v12 == 1 );
  if ( v12 )
    goto LABEL_12;
  a2 = v92;
  if ( *((_BYTE *)v6 - 24) == 3
    && *v6 == 6
    && (v13 = *(v6 - 1), v3 = *(_DWORD *)v13 ^ 0x656A626Fu,
                         !((unsigned int)v3 | *(unsigned __int16 *)(v13 + 4) ^ 0x7463)) )
  {
LABEL_20:
    v16 = a2;
    nullsub_1(v3);
    v17 = (_DWORD *)sub_140001650(4, 1);
    if ( !v17 )
      sub_141938D2B(1, 4);
    *v17 = 1701869940;
    *(_QWORD *)v81 = 4;
    *(_QWORD *)&v81[8] = v17;
    *(_QWORD *)&v81[16] = 4;
    sub_140E72930(v90, v16 + 8, v81);
    v14 = v89;
    if ( *(_QWORD *)v90 == -1 )
    {
      *(_OWORD *)&v81[24] = *(_OWORD *)&v90[24];
      *(_OWORD *)&v81[8] = *(_OWORD *)&v90[8];
      *(_QWORD *)v81 = -1;
    }
    else
    {
      v82 = v91;
      *(_OWORD *)&v81[32] = *(_OWORD *)&v90[32];
      *(_OWORD *)&v81[16] = *(_OWORD *)&v90[16];
      *(_OWORD *)v81 = *(_OWORD *)v90;
    }
    nullsub_1(v18);
    v19 = sub_140001650(6, 1);
    v93 = v19;
    if ( !v19 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v19 + 4) = 29795;
    *(_DWORD *)v19 = 1701470831;
    v90[0] = 3;
    *(_QWORD *)&v90[8] = 6;
    *(_QWORD *)&v90[16] = v19;
    *(_QWORD *)&v90[24] = 6;
    sub_141640D90(v81, v90);
    v20 = (__int128 *)v92;
    v21 = *(_QWORD *)(v92 + 8);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v92 + 16);
      v80 = v22;
      v85 = v21;
      while ( 2 )
      {
        v23 = v21 + 360;
        v93 = v21;
        v94 = *(unsigned __int16 *)(v21 + 626);
        v24 = 3LL * (unsigned int)(8 * v94);
        v25 = -1;
        do
        {
          if ( !v24 )
          {
            v25 = v94;
            goto LABEL_35;
          }
          v26 = v23 + 24;
          v27 = 5LL - *(_QWORD *)(v23 + 16);
          v28 = sub_1418F4B70(aOneof, *(_QWORD *)(v23 + 8));
          if ( v28 )
            v27 = v28;
          v29 = (v27 > 0) - (v27 < 0);
          ++v25;
          v24 -= 24;
          v23 = v26;
        }
        while ( v29 == 1 );
        if ( !v29 )
        {
LABEL_59:
          v50 = sub_1416419F0(aSchema_2, 7, v92);
          v14 = v89;
          if ( v50 )
          {
            v51 = *(_BYTE *)v50;
            switch ( *(_BYTE *)v50 )
            {
              case 0:
                break;
              case 1:
                v90[1] = *(_BYTE *)(v50 + 1);
                break;
              case 2:
                *(_OWORD *)&v90[8] = *(_OWORD *)(v50 + 8);
                break;
              case 3:
                sub_1416AC440(&v90[8], v50 + 8);
                break;
              case 4:
                sub_1403918C0(&v90[8], *(_QWORD *)(v50 + 16), *(_QWORD *)(v50 + 24));
                break;
              case 5:
                sub_140E8D7E0(&v90[8], v50 + 8);
                break;
            }
            v90[0] = v51;
            v84 = *(_OWORD *)&v90[16];
            LOWORD(v83) = __PAIR16__(v90[1], v51);
            *(_QWORD *)((char *)&v83 + 2) = *(_QWORD *)&v90[2];
            *(_DWORD *)((char *)&v83 + 10) = *(_DWORD *)&v90[10];
            HIWORD(v83) = *(_WORD *)&v90[14];
            if ( v51 == 3 )
            {
              v99 = 3;
              v98 = 1;
              v53 = (unsigned int)sub_1403FCA40(aDraft04, 10, v84, *((_QWORD *)&v84 + 1));
              v51 = 3;
              goto LABEL_71;
            }
          }
          else
          {
            LOBYTE(v83) = -1;
            v51 = -1;
          }
          v53 = 0;
LABEL_71:
          v99 = v51;
          v98 = 1;
          v54 = sub_1403C7510(v92, v53);
          if ( v54 )
          {
            *(_QWORD *)(v14 + 8) = v54;
            *(_QWORD *)(v14 + 16) = 81;
            *(_BYTE *)v14 = -1;
            if ( v51 != -1 )
              sub_1403880E0(&v83);
          }
          else
          {
            *(_QWORD *)&v78 = 0;
            v79 = 0;
            nullsub_1(v55);
            v56 = (_DWORD *)sub_140001650(4, 1);
            LOBYTE(v93) = v51;
            if ( !v56 )
              sub_141938D2B(1, 4);
            *v56 = 1701869940;
            v86 = 4;
            v87 = v56;
            v88 = 4;
            nullsub_1(v57);
            v58 = sub_140001650(6, 1);
            v94 = v58;
            if ( !v58 )
              sub_141938D2B(1, 6);
            *(_WORD *)(v58 + 4) = 29795;
            *(_DWORD *)v58 = 1701470831;
            v90[0] = 3;
            *(_QWORD *)&v90[8] = 6;
            *(_QWORD *)&v90[16] = v58;
            *(_QWORD *)&v90[24] = 6;
            sub_140E72AA0(v81, &v78, &v86, v90);
            if ( v81[0] != 0xFF )
              sub_1403880E0(v81);
            nullsub_1(v59);
            v60 = (_DWORD *)sub_140001650(4, 1);
            if ( !v60 )
              sub_141938D2B(1, 4);
            *v60 = 1717924388;
            v86 = 4;
            v87 = v60;
            v88 = 4;
            nullsub_1(v61);
            v62 = sub_140001650(20, 1);
            v94 = v62;
            if ( !v62 )
              sub_141938D2B(1, 20);
            *(_OWORD *)v62 = *(_OWORD *)"#/$defs/aimami_input";
            *(_DWORD *)(v62 + 16) = 1953853550;
            v90[0] = 3;
            *(_QWORD *)&v90[8] = 20;
            *(_QWORD *)&v90[16] = v62;
            *(_QWORD *)&v90[24] = 20;
            sub_140E72AA0(v81, &v78, &v86, v90);
            if ( v81[0] != 0xFF )
              sub_1403880E0(v81);
            nullsub_1(v63);
            v64 = sub_140001650(5, 1);
            if ( !v64 )
              sub_141938D2B(1, 5);
            *(_BYTE *)(v64 + 4) = 115;
            *(_DWORD *)v64 = 1717920804;
            v77[0] = 5;
            v77[1] = v64;
            v77[2] = 5;
            *(_QWORD *)&v75 = 0;
            v76 = 0;
            nullsub_1(v65);
            v66 = (void *)sub_140001650(12, 1);
            v67 = v92;
            if ( !v66 )
              sub_141938D2B(1, 12);
            qmemcpy(v66, "aimami_input", 12);
            v86 = 12;
            v87 = v66;
            v88 = 12;
            v97 = 1;
            sub_140412420(v90, v67);
            if ( v90[0] == 0xFF )
            {
              *(_QWORD *)v81 = *(_QWORD *)&v90[8];
              sub_141939040(
                (unsigned int)aCalledResultUn_5,
                43,
                (unsigned int)v81,
                (unsigned int)&off_1419ED3F8,
                (__int64)&off_1419EDBC0);
            }
            *(_OWORD *)&v81[16] = *(_OWORD *)&v90[16];
            *(_OWORD *)v81 = *(_OWORD *)v90;
            v97 = 0;
            sub_140E72AA0(v90, &v75, &v86, v81);
            if ( v90[0] != 0xFF )
              sub_1403880E0(v90);
            *(_OWORD *)&v90[8] = v75;
            *(_QWORD *)&v90[24] = v76;
            v90[0] = 5;
            v96 = 0;
            sub_140E72AA0(v81, &v78, v77, v90);
            if ( v81[0] != 0xFF )
              sub_1403880E0(v81);
            *(_OWORD *)&v90[8] = v78;
            *(_QWORD *)&v90[24] = v79;
            v90[0] = 5;
            if ( (_BYTE)v93 != 0xFF )
            {
              v95 = 1;
              v94 = sub_141641AF0(aSchema_2, 7, v90);
              sub_1403880E0(v94);
              v68 = v83;
              v69 = (_OWORD *)v94;
              *(_OWORD *)(v94 + 16) = v84;
              *v69 = v68;
            }
            v70 = v90[0];
            v71 = *(_QWORD *)&v90[1];
            v72 = *(_DWORD *)&v90[9];
            v73 = *(_WORD *)&v90[13];
            v74 = v90[15];
            *(_OWORD *)(v14 + 16) = *(_OWORD *)&v90[16];
            *(_BYTE *)v14 = v70;
            *(_QWORD *)(v14 + 1) = v71;
            *(_DWORD *)(v14 + 9) = v72;
            *(_WORD *)(v14 + 13) = v73;
            *(_BYTE *)(v14 + 15) = v74;
          }
          goto LABEL_18;
        }
LABEL_35:
        v30 = v22-- == 0;
        if ( !v30 )
        {
          v21 = *(_QWORD *)(v93 + 8 * v25 + 632);
          continue;
        }
        break;
      }
      v31 = v80;
      for ( i = v85; ; i = *(_QWORD *)(v93 + 8 * v35 + 632) )
      {
        v33 = i + 360;
        v93 = i;
        v94 = *(unsigned __int16 *)(i + 626);
        v34 = 3LL * (unsigned int)(8 * v94);
        v35 = -1;
        do
        {
          if ( !v34 )
          {
            v35 = v94;
            goto LABEL_46;
          }
          v36 = v33 + 24;
          v37 = 5LL - *(_QWORD *)(v33 + 16);
          v38 = sub_1418F4B70(aAnyof, *(_QWORD *)(v33 + 8));
          if ( v38 )
            v37 = v38;
          v39 = (v37 > 0) - (v37 < 0);
          ++v35;
          v34 -= 24;
          v33 = v36;
        }
        while ( v39 == 1 );
        if ( !v39 )
          goto LABEL_59;
LABEL_46:
        v30 = v31-- == 0;
        v40 = v85;
        if ( v30 )
          break;
      }
      v14 = v89;
      while ( 1 )
      {
        v41 = v40 + 360;
        v93 = *(unsigned __int16 *)(v40 + 626);
        v42 = 3LL * (unsigned int)(8 * v93);
        v43 = -1;
        do
        {
          if ( !v42 )
          {
            v43 = v93;
            goto LABEL_57;
          }
          v44 = v40;
          v45 = v41 + 24;
          v46 = 5LL - *(_QWORD *)(v41 + 16);
          v47 = sub_1418F4B70(aAllof, *(_QWORD *)(v41 + 8));
          if ( v47 )
            v46 = v47;
          v2 = v46 == 0;
          v48 = v46 < 0;
          v14 = v89;
          v49 = (!v48 && !v2) - v48;
          ++v43;
          v42 -= 24;
          v41 = v45;
          v40 = v44;
        }
        while ( v49 == 1 );
        if ( !v49 )
          goto LABEL_59;
        v14 = v89;
        v40 = v44;
LABEL_57:
        v30 = v80-- == 0;
        v20 = (__int128 *)v92;
        if ( v30 )
          break;
        v40 = *(_QWORD *)(v40 + 8 * v43 + 632);
      }
    }
    v52 = *v20;
    *(_OWORD *)(v14 + 16) = v20[1];
    *(_OWORD *)v14 = v52;
  }
  else
  {
LABEL_17:
    v14 = v89;
    *(_QWORD *)(v89 + 8) = aAnthropicToolI_1;
    *(_QWORD *)(v14 + 16) = 51;
    *(_BYTE *)v14 = -1;
LABEL_18:
    sub_1403880E0(v92);
  }
  return v14;
}
