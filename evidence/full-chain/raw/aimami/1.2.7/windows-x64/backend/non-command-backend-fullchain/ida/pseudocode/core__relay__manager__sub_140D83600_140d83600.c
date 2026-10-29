// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d83600 | name sub_140D83600
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
volatile signed __int64 *__fastcall sub_140D83600(__int64 a1, volatile signed __int64 **a2)
{
  __int16 v2; // r15
  volatile signed __int64 *v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v10; // rax
  volatile signed __int64 *v11; // rdi
  __int64 v12; // rcx
  __int16 v13; // r14
  __int16 v14; // dx
  volatile signed __int64 *v15; // rdx
  volatile signed __int64 *v16; // rdx
  _BYTE *v17; // r12
  __int64 *v18; // r13
  volatile signed __int64 *v19; // rdx
  void *v20; // rax
  __int64 v21; // rcx
  void *v22; // rdi
  char v23; // al
  int v24; // eax
  bool v25; // zf
  char v26; // of
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char *v30; // rsi
  char v31; // al
  volatile signed __int64 *v32; // r13
  __int64 v33; // rt0
  volatile signed __int64 *v34; // rax
  __int64 v35; // rt0
  __int64 v36; // rt0
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  __int64 v41; // r12
  char *v42; // r14
  __int64 v43; // rcx
  signed __int8 v44; // al
  volatile signed __int64 *v45; // rbx
  __int64 v46; // rcx
  char v47; // al
  const __m128i *v48; // r15
  __m128i *v49; // rax
  __int64 v50; // r14
  char *v51; // rbx
  signed __int8 v52; // al
  volatile signed __int64 *v53; // r14
  __int64 v54; // rcx
  char v55; // al
  unsigned int v56; // eax
  __int16 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // rdx
  __int64 v64; // rcx
  char *v65; // rdi
  char v66; // al
  __int64 *v67; // r14
  volatile signed __int64 **v68; // rcx
  char *v69; // rsi
  char v70; // di
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  char *v77; // rdi
  char v78; // al
  char v79; // al
  char v80[8]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v81; // [rsp+28h] [rbp-58h]
  __int64 v82; // [rsp+38h] [rbp-48h]
  __int128 v83; // [rsp+40h] [rbp-40h] BYREF
  __int64 v84; // [rsp+50h] [rbp-30h]
  _QWORD v85[3]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v86[192]; // [rsp+70h] [rbp-10h] BYREF
  __int16 v87; // [rsp+160h] [rbp+E0h]
  __int16 v88; // [rsp+162h] [rbp+E2h]
  char v89; // [rsp+164h] [rbp+E4h]
  _BYTE v90[24]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v91; // [rsp+188h] [rbp+108h]
  __int128 v92; // [rsp+198h] [rbp+118h]
  __int128 v93; // [rsp+1A8h] [rbp+128h]
  __int128 v94; // [rsp+1B8h] [rbp+138h]
  __int64 v95; // [rsp+1C8h] [rbp+148h]
  volatile signed __int64 *v96; // [rsp+1D8h] [rbp+158h]
  __int128 v97; // [rsp+1E0h] [rbp+160h] BYREF
  _QWORD v98[2]; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v99; // [rsp+200h] [rbp+180h] BYREF
  unsigned __int64 v100; // [rsp+210h] [rbp+190h]
  _BYTE *v101; // [rsp+218h] [rbp+198h]
  char v102; // [rsp+227h] [rbp+1A7h] BYREF
  volatile signed __int64 *v103; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v104; // [rsp+230h] [rbp+1B0h]
  volatile signed __int64 **v105; // [rsp+238h] [rbp+1B8h]
  volatile signed __int64 *v106; // [rsp+240h] [rbp+1C0h]
  char v107; // [rsp+24Fh] [rbp+1CFh]
  __int64 v108; // [rsp+250h] [rbp+1D0h]

  v108 = -2;
  v5 = a2[2];
  if ( *((_QWORD *)v5 + 2) != -1 )
  {
    sub_1416AC440(&v86[8], v5 + 2);
    *(_QWORD *)v86 = 9;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v86[80];
    v6 = *(_OWORD *)&v86[16];
    v7 = *(_OWORD *)&v86[32];
    v8 = *(_OWORD *)&v86[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v86[64];
    *(_OWORD *)(a1 + 48) = v8;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_QWORD *)a1 = *(_QWORD *)v86;
    result = *(volatile signed __int64 **)&v86[8];
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v86[8];
    return result;
  }
  v10 = a2[7];
  if ( v10 )
  {
    if ( _InterlockedIncrement64(v10) <= 0 )
      goto LABEL_139;
    v103 = v10;
    v11 = *a2;
    sub_14169D1D0(v86, *((_QWORD *)*a2 + 11), *((_QWORD *)*a2 + 12));
    if ( *(_QWORD *)v86 != -1 )
    {
      v104 = *(_QWORD *)&v86[8];
      v106 = *(volatile signed __int64 **)v86;
      sub_140C6F180(v86, *(_QWORD *)&v86[8], *(_QWORD *)&v86[16]);
      if ( *(_QWORD *)v86 == -1 )
      {
        v13 = 0;
        v15 = v106;
        if ( !v106 )
          goto LABEL_20;
      }
      else
      {
        v101 = *(_BYTE **)&v86[8];
        v105 = *(volatile signed __int64 ***)v86;
        v13 = sub_140C72440(*(_QWORD *)&v86[8], *(_QWORD *)&v86[16]);
        v2 = v14;
        if ( v105 )
          sub_140001660(v101, v105, 1);
        v15 = v106;
        if ( !v106 )
          goto LABEL_20;
      }
      sub_140001660(v104, v15, 1);
      goto LABEL_20;
    }
    v12 = v86[8] & 3;
    if ( (unsigned int)(v12 - 2) >= 2 && (v86[8] & 3) != 0 )
    {
      *(_QWORD *)&v90[8] = *(_QWORD *)&v86[8] - 1LL;
      v90[0] = 3;
      sub_1416BCB00(&v90[8]);
    }
    v13 = 0;
LABEL_20:
    v16 = a2[3];
    v17 = v16 + 2;
    LOBYTE(v12) = 1;
    v106 = v16;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)v16 + 16, 1, 0) )
      sub_141937480(v16 + 2);
    v18 = off_1421E7210;
    if ( 2 * *off_1421E7210 )
    {
      v24 = sub_141938160(v12);
      LOBYTE(v24) = v24 ^ 1;
      LODWORD(v104) = v24;
      v19 = v106;
      if ( *((_BYTE *)v106 + 17) )
        goto LABEL_24;
    }
    else
    {
      LODWORD(v104) = 0;
      v19 = v106;
      if ( *((_BYTE *)v106 + 17) )
      {
LABEL_24:
        nullsub_1(v12);
        v20 = (void *)sub_140001650(34, 1);
        if ( !v20 )
        {
          v101 = v17;
          sub_141938D2B(1, 34);
        }
        v22 = v20;
        qmemcpy(v20, "relay proxy state lock is poisoned", 34);
        if ( !(_BYTE)v104 && 2 * *v18 && !(unsigned __int8)sub_141938160(v21) )
          *((_BYTE *)v106 + 17) = 1;
        v23 = *v17;
        *v17 = 0;
        if ( v23 == 2 )
          WakeByAddressSingle(v17);
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 34;
        *(_QWORD *)(a1 + 16) = v22;
        *(_QWORD *)(a1 + 24) = 34;
LABEL_124:
        result = v103;
        if ( !_InterlockedDecrement64(v103) )
          return (volatile signed __int64 *)sub_1409E5D50(&v103);
        return result;
      }
    }
    v26 = 0;
    v25 = *((_QWORD *)v19 + 3) == 0;
    v101 = v17;
    v105 = (volatile signed __int64 **)(v19 + 3);
    if ( !v25 )
    {
      if ( (unsigned __int8)sub_140DBD0D0() )
      {
        *(_QWORD *)a1 = -1;
        v30 = (char *)(v106 + 2);
        if ( !(_BYTE)v104 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v28) )
          *((_BYTE *)v106 + 17) = 1;
        v31 = *v30;
        *v30 = 0;
        if ( v31 == 2 )
          WakeByAddressSingle(v30);
        goto LABEL_124;
      }
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v90 = v106 + 5;
        *(_QWORD *)&v90[8] = sub_1416BB1E0;
        *(_QWORD *)v86 = aCodexmateLibCo_36;
        *(_QWORD *)&v86[8] = 35;
        *(_QWORD *)&v86[16] = aCodexmateLibCo_36;
        *(_QWORD *)&v86[24] = 35;
        *(_QWORD *)&v86[32] = &off_141A4A4C8;
        sub_140BAD520(&unk_141A4A472, v90, 2, v86);
      }
      v26 = 0;
      if ( *v105 )
      {
        if ( !_InterlockedDecrement64(*v105) )
          sub_1409E3930(v105);
        if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v106 + 4)) )
          sub_1409E3900(v106 + 4, v27, v29);
      }
      *v105 = nullptr;
    }
    v32 = a2[1];
    v33 = _InterlockedIncrement64(v32);
    if ( !((v33 < 0) ^ v26 | (v33 == 0)) )
    {
      v34 = a2[6];
      v35 = _InterlockedIncrement64(v34);
      if ( !((v35 < 0) ^ v26 | (v35 == 0)) )
      {
        v36 = _InterlockedIncrement64(v11);
        if ( !((v36 < 0) ^ v26 | (v36 == 0)) )
        {
          *(_QWORD *)v86 = v32;
          *(_QWORD *)&v86[8] = v34;
          *(_QWORD *)&v86[16] = v11;
          v87 = v13;
          v88 = v2;
          v89 = 0;
          sub_140883640(v80, v103 + 2, v86, &off_141A4A4E0);
          if ( v80[0] )
          {
            v39 = v82;
            v98[0] = v82;
            v97 = v81;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              *(_QWORD *)v90 = &v97;
              *(_QWORD *)&v90[8] = sub_1400015F0;
              *(_QWORD *)&v86[48] = 2;
              *(_QWORD *)&v86[56] = aCodexmateLibCo_36;
              *(_QWORD *)&v86[64] = 35;
              *(_QWORD *)&v86[80] = &unk_141A4A548;
              *(_QWORD *)&v86[88] = v90;
              *(_QWORD *)v86 = 0;
              *(_QWORD *)&v86[8] = aCodexmateLibCo_36;
              *(_OWORD *)&v86[16] = 0x23u;
              *(_QWORD *)&v86[32] = aSrcCoreRelayMa_5;
              *(_QWORD *)&v86[40] = 25;
              *(_QWORD *)&v86[72] = 0xB0300000001LL;
              sub_1414D53A0(&v102, v86);
            }
            v40 = v98[0];
            if ( v98[0] < 0LL )
            {
              v41 = 0;
              goto LABEL_53;
            }
            if ( v98[0] )
            {
              v48 = *((const __m128i **)&v97 + 1);
              nullsub_1(v39);
              v41 = 1;
              v49 = (__m128i *)sub_140001650(v40, 1);
              if ( !v49 )
LABEL_53:
                sub_141938D2B(v41, v40);
              v50 = (__int64)v49;
              sub_1418F44E0(v49, v48, v40);
            }
            else
            {
              v50 = 1;
            }
            *(_QWORD *)&v99 = v40;
            *((_QWORD *)&v99 + 1) = v50;
            v100 = v40;
            v51 = (char *)(v32 + 2);
            LOBYTE(v39) = 1;
            v52 = _InterlockedCompareExchange8((volatile signed __int8 *)v32 + 16, 1, 0);
            v53 = v106;
            if ( v52 )
              sub_141937480(v32 + 2);
            if ( 2 * *off_1421E7210 )
            {
              v71 = sub_141938160(v39);
              v54 = v71;
              LOBYTE(v54) = v71 ^ 1;
              if ( *((_BYTE *)v32 + 17) )
                goto LABEL_70;
            }
            else
            {
              v54 = 0;
              if ( *((_BYTE *)v32 + 17) )
              {
LABEL_70:
                if ( !(_BYTE)v54 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v54) )
                  *((_BYTE *)v32 + 17) = 1;
                v55 = *v51;
                *v51 = 0;
                if ( v55 != 2 )
                  goto LABEL_116;
                goto LABEL_115;
              }
            }
            LODWORD(v105) = v54;
            v96 = v32 + 2;
            sub_1416AC440(v86, &v99);
            *(_QWORD *)&v90[16] = *(_QWORD *)&v86[16];
            *(_OWORD *)v90 = *(_OWORD *)v86;
            v72 = *((_QWORD *)v32 + 9);
            if ( v72 )
              sub_140001660(*((_QWORD *)v32 + 10), v72, 1);
            v73 = *((_QWORD *)v32 + 12);
            if ( v73 )
              sub_140001660(*((_QWORD *)v32 + 13), v73, 1);
            v74 = *((_QWORD *)v32 + 15);
            if ( v74 != -1 && v74 )
              sub_140001660(*((_QWORD *)v32 + 16), v74, 1);
            *((_QWORD *)v32 + 9) = 0;
            *((_QWORD *)v32 + 10) = 1;
            *(_OWORD *)(v32 + 11) = 0;
            *((_QWORD *)v32 + 13) = 1;
            *((_QWORD *)v32 + 14) = 0;
            *((_QWORD *)v32 + 17) = *(_QWORD *)&v90[16];
            *(_OWORD *)(v32 + 15) = *(_OWORD *)v90;
            *((_WORD *)v32 + 72) = 0;
            *((_BYTE *)v32 + 146) = 0;
            sub_140F70980(v86, v11 + 2, v32 + 3);
            if ( *(_QWORD *)v86 == -1 )
            {
              sub_1401BD710(*(unsigned __int64 *)&v86[8], v75);
            }
            else
            {
              v95 = *(_QWORD *)&v86[88];
              v94 = *(_OWORD *)&v86[72];
              v93 = *(_OWORD *)&v86[56];
              v92 = *(_OWORD *)&v86[40];
              v91 = *(_OWORD *)&v86[24];
              *(_OWORD *)&v90[8] = *(_OWORD *)&v86[8];
              *(_QWORD *)v90 = *(_QWORD *)v86;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v85[0] = v90;
                v85[1] = sub_14104A7D0;
                *(_QWORD *)v86 = aCodexmateLibCo_36;
                *(_QWORD *)&v86[8] = 35;
                *(_QWORD *)&v86[16] = aCodexmateLibCo_36;
                *(_QWORD *)&v86[24] = 35;
                *(_QWORD *)&v86[32] = &off_141A4A5A0;
                sub_140BAD520(&unk_141A4A565, v85, 2, v86);
              }
              sub_140D1BEA0(v90);
            }
            v77 = (char *)(v32 + 2);
            if ( !(_BYTE)v105 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v76) )
              *((_BYTE *)v32 + 17) = 1;
            v78 = *v77;
            *v77 = 0;
            if ( v78 != 2 )
              goto LABEL_116;
LABEL_115:
            WakeByAddressSingle((PVOID)(v32 + 2));
LABEL_116:
            *(_QWORD *)v86 = &v99;
            *(_QWORD *)&v86[8] = sub_1400015F0;
            sub_1416ABFD0(&v83, &unk_141A4A548, v86);
            *(_QWORD *)(a1 + 24) = v84;
            *(_OWORD *)(a1 + 8) = v83;
            *(_QWORD *)a1 = 10;
            if ( (_QWORD)v99 )
              sub_140001660(*((_QWORD *)&v99 + 1), v99, 1);
            v69 = (char *)(v53 + 2);
            v70 = v104;
            v67 = off_1421E7210;
            if ( (_QWORD)v97 )
              sub_140001660(*((_QWORD *)&v97 + 1), v97, 1);
LABEL_120:
            if ( !v70 && 2 * *v67 && !(unsigned __int8)sub_141938160(v68) )
              *((_BYTE *)v106 + 17) = 1;
            v79 = *v69;
            *v69 = 0;
            if ( v79 == 2 )
              WakeByAddressSingle(v69);
            goto LABEL_124;
          }
          v43 = v82;
          v98[0] = v82;
          v97 = v81;
          v42 = (char *)(v32 + 2);
          LOBYTE(v43) = 1;
          v44 = _InterlockedCompareExchange8((volatile signed __int8 *)v32 + 16, 1, 0);
          v45 = v106;
          if ( v44 )
          {
            v107 = 1;
            sub_141937480(v32 + 2);
          }
          if ( 2 * *off_1421E7210 )
          {
            v107 = 1;
            v56 = sub_141938160(v43);
            v46 = v56;
            LOBYTE(v46) = v56 ^ 1;
            if ( *((_BYTE *)v32 + 17) )
              goto LABEL_58;
          }
          else
          {
            v46 = 0;
            if ( *((_BYTE *)v32 + 17) )
            {
LABEL_58:
              if ( !(_BYTE)v46 )
              {
                if ( 2 * *off_1421E7210 )
                {
                  v107 = 1;
                  if ( !(unsigned __int8)sub_141938160(v46) )
                    *((_BYTE *)v32 + 17) = 1;
                }
              }
              v47 = *v42;
              *v42 = 0;
              if ( v47 != 2 )
                goto LABEL_93;
              goto LABEL_92;
            }
          }
          LODWORD(v96) = v46;
          v85[2] = v32 + 2;
          v57 = v98[0];
          *(_QWORD *)v86 = v98;
          *(_QWORD *)&v86[8] = sub_1416BB1E0;
          sub_1416ABFD0(&v99, &unk_141A49D26, v86);
          *(_QWORD *)v86 = v98;
          *(_QWORD *)&v86[8] = sub_1416BB1E0;
          sub_1416ABFD0(v90, &unk_141A49D08, v86);
          *(_OWORD *)v86 = v99;
          *(_QWORD *)&v86[16] = v100;
          *(_OWORD *)&v86[24] = *(_OWORD *)v90;
          *(_QWORD *)&v86[40] = *(_QWORD *)&v90[16];
          v58 = *((_QWORD *)v32 + 9);
          if ( v58 )
            sub_140001660(*((_QWORD *)v32 + 10), v58, 1);
          v59 = *((_QWORD *)v32 + 12);
          if ( v59 )
            sub_140001660(*((_QWORD *)v32 + 13), v59, 1);
          v60 = *((_QWORD *)v32 + 15);
          if ( v60 != -1 && v60 )
            sub_140001660(*((_QWORD *)v32 + 16), v60, 1);
          v61 = *(_OWORD *)v86;
          v62 = *(_OWORD *)&v86[16];
          *(_OWORD *)(v32 + 13) = *(_OWORD *)&v86[32];
          *(_OWORD *)(v32 + 11) = v62;
          *(_OWORD *)(v32 + 9) = v61;
          *((_QWORD *)v32 + 15) = -1;
          *((_WORD *)v32 + 72) = v57;
          *((_BYTE *)v32 + 146) = 1;
          sub_140F70980(v86, v11 + 2, v32 + 3);
          if ( *(_QWORD *)v86 == -1 )
          {
            sub_1401BD710(*(unsigned __int64 *)&v86[8], v63);
          }
          else
          {
            v95 = *(_QWORD *)&v86[88];
            v94 = *(_OWORD *)&v86[72];
            v93 = *(_OWORD *)&v86[56];
            v92 = *(_OWORD *)&v86[40];
            v91 = *(_OWORD *)&v86[24];
            *(_OWORD *)&v90[8] = *(_OWORD *)&v86[8];
            *(_QWORD *)v90 = *(_QWORD *)v86;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              *(_QWORD *)&v99 = v90;
              *((_QWORD *)&v99 + 1) = sub_14104A7D0;
              *(_QWORD *)v86 = aCodexmateLibCo_36;
              *(_QWORD *)&v86[8] = 35;
              *(_QWORD *)&v86[16] = aCodexmateLibCo_36;
              *(_QWORD *)&v86[24] = 35;
              *(_QWORD *)&v86[32] = &off_141A4A530;
              sub_140BAD520(&unk_141A4A4F8, &v99, 2, v86);
            }
            sub_140D1BEA0(v90);
          }
          v45 = v106;
          v65 = (char *)(v32 + 2);
          if ( !(_BYTE)v96 )
          {
            if ( 2 * *off_1421E7210 )
            {
              v107 = 1;
              if ( !(unsigned __int8)sub_141938160(v64) )
                *((_BYTE *)v32 + 17) = 1;
            }
          }
          v66 = *v65;
          *v65 = 0;
          if ( v66 != 2 )
            goto LABEL_93;
LABEL_92:
          v107 = 1;
          WakeByAddressSingle((PVOID)(v32 + 2));
LABEL_93:
          *(_QWORD *)&v86[16] = v98[0];
          *(_OWORD *)v86 = v97;
          v67 = off_1421E7210;
          if ( *v105 )
          {
            if ( !_InterlockedDecrement64(*v105) )
              sub_1409E3930(v105);
            v45 = v106;
            if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v106 + 4)) )
              sub_1409E3900(v45 + 4, v37, v38);
          }
          v68 = v105;
          v105[2] = *(volatile signed __int64 **)&v86[16];
          *(_OWORD *)v68 = *(_OWORD *)v86;
          *(_QWORD *)a1 = -1;
          v69 = (char *)(v45 + 2);
          v70 = v104;
          goto LABEL_120;
        }
      }
    }
LABEL_139:
    BUG();
  }
  nullsub_1(a1);
  result = (volatile signed __int64 *)sub_140001650(34, 1);
  if ( !result )
    sub_141938D2B(1, 34);
  qmemcpy((void *)result, "relay proxy runtime is unavailable", 34);
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 34;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = 34;
  return result;
}
