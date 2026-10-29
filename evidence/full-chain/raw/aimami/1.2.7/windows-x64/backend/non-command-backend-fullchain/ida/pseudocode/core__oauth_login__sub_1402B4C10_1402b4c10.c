// win 1.2.7 | module src/core/oauth_login.rs | ea 0x1402b4c10 | name sub_1402B4C10
// win 1.2.7 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402B4C10(__int64 a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v4; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(); // rax
  __m128i *v11; // rbx
  __int64 (__fastcall **v12)(); // rax
  __m128i *v13; // rdi
  __int64 v14; // rdx
  const __m128i *v15; // r14
  __m128i v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rcx
  __m128i *v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __int64 v29; // rcx
  __int64 v30; // rbx
  void *v31; // r14
  __int16 v32; // di
  __int64 v33; // rbx
  __int64 v34; // r13
  char *v35; // rdi
  __int64 *v36; // r12
  _BYTE *v37; // r14
  char v38; // al
  char v39; // al
  __int64 v40; // r15
  __int64 v41; // rdx
  char v42; // al
  bool v43; // al
  __int64 v44; // rbx
  bool v45; // zf
  const __m128i *v46; // rdi
  __int64 v47; // rdx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  char v52; // al
  char *v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // r12
  __m128i v56; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v57; // [rsp+B0h] [rbp+30h]
  __m128i v58; // [rsp+C0h] [rbp+40h]
  __m128i v59; // [rsp+D0h] [rbp+50h]
  __m128i v60; // [rsp+E0h] [rbp+60h]
  __m128i v61; // [rsp+F0h] [rbp+70h]
  __m128i v62; // [rsp+100h] [rbp+80h]
  __int64 v63; // [rsp+110h] [rbp+90h]
  __m128i v64; // [rsp+180h] [rbp+100h]
  __int64 v65; // [rsp+190h] [rbp+110h]
  char v66; // [rsp+288h] [rbp+208h]
  _OWORD v67[13]; // [rsp+290h] [rbp+210h] BYREF
  __int64 v68; // [rsp+360h] [rbp+2E0h]
  _OWORD v69[2]; // [rsp+370h] [rbp+2F0h] BYREF
  const char *v70; // [rsp+390h] [rbp+310h]
  __int64 v71; // [rsp+398h] [rbp+318h]
  __int16 v72; // [rsp+3A0h] [rbp+320h]
  void *v73; // [rsp+3A8h] [rbp+328h]
  __int64 v74; // [rsp+3B0h] [rbp+330h]
  _OWORD v75[5]; // [rsp+3C0h] [rbp+340h] BYREF
  __int64 v76; // [rsp+410h] [rbp+390h]
  _QWORD v77[3]; // [rsp+418h] [rbp+398h] BYREF
  __m128i v78; // [rsp+430h] [rbp+3B0h]
  __m128i v79; // [rsp+440h] [rbp+3C0h]
  __int128 v80; // [rsp+450h] [rbp+3D0h]
  __int128 v81; // [rsp+460h] [rbp+3E0h]
  __m128i v82; // [rsp+470h] [rbp+3F0h]
  __m128i v83; // [rsp+480h] [rbp+400h]
  __m128i v84; // [rsp+490h] [rbp+410h]
  __m128i v85; // [rsp+4A0h] [rbp+420h]
  __m128i v86; // [rsp+4B0h] [rbp+430h]
  __int64 v87; // [rsp+4C0h] [rbp+440h]
  __int64 v88; // [rsp+4C8h] [rbp+448h] BYREF
  __int64 v89; // [rsp+4D0h] [rbp+450h]
  __int64 v90; // [rsp+4D8h] [rbp+458h]
  __m128i v91; // [rsp+4E0h] [rbp+460h]
  __m128i v92; // [rsp+4F0h] [rbp+470h] BYREF
  const __m128i *v93; // [rsp+508h] [rbp+488h]
  __int64 v94; // [rsp+510h] [rbp+490h]
  __m128i *v95; // [rsp+518h] [rbp+498h]
  __int64 v96; // [rsp+520h] [rbp+4A0h]
  const __m128i *v97; // [rsp+528h] [rbp+4A8h]
  char v98; // [rsp+537h] [rbp+4B7h]
  __int64 v99; // [rsp+538h] [rbp+4B8h]

  v99 = -2;
  v4 = a2;
  v6 = a2[33].m128i_u8[8];
  v97 = a2;
  switch ( v6 )
  {
    case 0LL:
      a2[33].m128i_i8[13] = 0;
      sub_1418F44E0((__m128i *)&a2[17], a2, 0xE0u);
      *(__int32 *)((char *)&v4[33].m128i_i32[2] + 1) = 16777473;
      v4[34] = v4[14];
      v4[31].m128i_i64[0] = (__int64)v4[15].m128i_i64;
      nullsub_1(v7);
      v8 = sub_140001650(16, 8);
      if ( !v8 )
        sub_141938D11(8, 16);
      v9 = v8;
      *(_QWORD *)v8 = v4 + 15;
      *(_BYTE *)(v8 + 8) = 0;
      v4[35].m128i_i64[0] = v8;
      v10 = &off_141A4EF30;
      v4[35].m128i_i64[1] = (__int64)&off_141A4EF30;
      goto LABEL_9;
    case 1LL:
      sub_1419393E0(&off_1419E69C0);
    case 2LL:
      sub_141939400(&off_1419E69C0);
    case 3LL:
      v9 = a2[35].m128i_i64[0];
      v10 = (__int64 (__fastcall **)())v4[35].m128i_i64[1];
LABEL_9:
      ((void (__fastcall *)(__m128i *, __int64, __int64))v10[3])(&v56, v9, a3);
      if ( v56.m128i_i64[0] == -1 )
      {
        *(_QWORD *)a1 = -1;
        v39 = 3;
        goto LABEL_61;
      }
      v79 = v57;
      v78 = v56;
      v96 = v97[35].m128i_i64[0];
      v95 = (__m128i *)v97[35].m128i_i64[1];
      if ( v95->m128i_i64[0] )
        ((void (__fastcall *)(__int64))v95->m128i_i64[0])(v96);
      v14 = v95->m128i_i64[1];
      if ( v14 )
        sub_140001660(v96, v14, v95[1].m128i_i64[0]);
      v15 = v97;
      v97[33].m128i_i8[11] = 1;
      v16 = v79;
      *(__m128i *)((char *)v15 + 504) = v78;
      *(__m128i *)((char *)v15 + 520) = v16;
      v15[33].m128i_i8[10] = 0;
      sub_1418F44E0(&v56, v15 + 17, 0xE0u);
      v15[33].m128i_i8[9] = 0;
      v17 = v15[31].m128i_i64[0];
      v64 = v15[34];
      v65 = v17;
      v66 = 0;
      nullsub_1(v18);
      v19 = (__m128i *)sub_140001650(496, 8);
      if ( !v19 )
        sub_141938D11(8, 496);
      v11 = v19;
      sub_1418F44E0(v19, &v56, 0x1F0u);
      v15[34].m128i_i64[0] = (__int64)v11;
      v12 = &off_141A4E460;
      v15[34].m128i_i64[1] = (__int64)&off_141A4E460;
LABEL_16:
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12[3])(&v56, v11, a3);
      if ( v56.m128i_i8[0] == -1 )
      {
        *(_QWORD *)a1 = -1;
        v39 = 4;
        goto LABEL_61;
      }
      v87 = v61.m128i_i64[0];
      v86 = v60;
      v85 = v59;
      v84 = v58;
      v83 = v57;
      v82 = v56;
      v96 = v97[34].m128i_i64[0];
      v95 = (__m128i *)v97[34].m128i_i64[1];
      if ( v95->m128i_i64[0] )
        ((void (__fastcall *)(__int64))v95->m128i_i64[0])(v96);
      v4 = v97;
      v13 = (__m128i *)&v97[34];
      v20 = v95->m128i_i64[1];
      if ( v20 )
        sub_140001660(v96, v20, v95[1].m128i_i64[0]);
      v68 = v87;
      v67[12] = v86;
      v67[11] = v85;
      v67[10] = v84;
      v67[9] = v83;
      v67[8] = v82;
      *(__int16 *)((char *)&v4[33].m128i_i16[5] + 1) = 0;
      v4[33].m128i_i8[13] = 0;
      v21 = *(const __m128i *)((char *)v4 + 520);
      v56 = *(const __m128i *)((char *)v4 + 504);
      v57 = v21;
      v58 = v82;
      v59 = v83;
      v60 = v84;
      v61 = v85;
      v62 = v86;
      v63 = v87;
      v13[7].m128i_i64[0] = v87;
      v13[6] = v62;
      v13[5] = v61;
      v13[4] = v60;
      v22 = v56;
      v23 = v57;
      v24 = v58;
      v13[3] = v59;
      v13[2] = v24;
      v13[1] = v23;
      *v13 = v22;
      v4[41].m128i_i8[8] = 0;
LABEL_22:
      v25 = *v13;
      v95 = v13;
      v92 = v13[1];
      v91 = v25;
      v76 = v4[41].m128i_i64[0];
      v75[4] = v4[40];
      v26 = v4[36];
      v27 = v4[37];
      v28 = v4[38];
      v75[3] = v4[39];
      v75[2] = v28;
      v75[1] = v27;
      v75[0] = v26;
      sub_1402BDCE0(&v88, v75, v91.m128i_i64[1], v92.m128i_i64[0]);
      if ( v88 != -2 )
      {
        v96 = v88;
        v94 = v89;
        v33 = v90;
        v34 = v92.m128i_i64[1];
        v35 = (char *)(v92.m128i_i64[1] + 16);
        LOBYTE(v29) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v92.m128i_i64[1] + 16), 1, 0) )
        {
          v98 = 1;
          sub_141937480(v35);
        }
        v36 = off_1421E7210;
        if ( 2 * *off_1421E7210 )
        {
          v98 = 1;
          v52 = sub_141938160(v29);
          v37 = (_BYTE *)(v34 + 17);
          v29 = *(unsigned __int8 *)(v34 + 17);
          if ( (_BYTE)v29 )
          {
            if ( !v52 )
            {
LABEL_32:
              v38 = *v35;
              *v35 = 0;
              if ( v38 == 2 )
              {
                v98 = 1;
                WakeByAddressSingle(v35);
              }
              goto LABEL_45;
            }
LABEL_31:
            if ( 2 * *v36 )
            {
              v98 = 1;
              if ( !(unsigned __int8)sub_141938160(v29) )
                *v37 = 1;
            }
            goto LABEL_32;
          }
          v40 = *(_QWORD *)(v34 + 24);
          v41 = *(_QWORD *)(v34 + 32);
          *(_QWORD *)(v34 + 24) = 0;
          if ( !v52 )
          {
LABEL_38:
            v42 = *v35;
            *v35 = 0;
            if ( v42 == 2 )
            {
              v98 = 1;
              v53 = v35;
              v54 = v41;
              WakeByAddressSingle(v53);
              v41 = v54;
            }
            if ( v40 )
            {
              v88 = v96;
              v89 = v94;
              v90 = v33;
              v98 = 0;
              sub_14092A4D0(v77, v41, &v88);
              if ( v77[0] > 0xFFFFFFFFFFFFFFFDuLL )
              {
                v43 = v77[0] == -2;
                v32 = 410;
                if ( v77[0] == -2 )
                  v32 = 200;
                v44 = v96;
LABEL_48:
                v45 = !v43 || v44 == -1;
                v30 = 637;
                if ( !v45 )
                  v30 = 643;
                v31 = &unk_1419E55FD;
                if ( !v45 )
                  v31 = &unk_1419E587A;
                v81 = xmmword_1419E55E8;
                v80 = xmmword_1419E55D8;
                sub_14029B810(v75);
                if ( v91.m128i_i64[0] )
                  sub_140001660(v91.m128i_i64[1], v91.m128i_i64[0], 1);
                if ( !_InterlockedDecrement64((volatile signed __int64 *)v92.m128i_i64[1]) )
                  goto LABEL_55;
                goto LABEL_56;
              }
              v44 = v96;
              if ( v77[0] )
                sub_140001660(v77[1], v77[0], 1);
              v32 = 410;
LABEL_47:
              v43 = 0;
              goto LABEL_48;
            }
LABEL_45:
            v32 = 410;
            v44 = v96;
            if ( v96 > 0 )
              sub_140001660(v94, v96, 1);
            goto LABEL_47;
          }
        }
        else
        {
          v37 = (_BYTE *)(v34 + 17);
          if ( *(_BYTE *)(v34 + 17) )
            goto LABEL_31;
          v40 = *(_QWORD *)(v34 + 24);
          v41 = *(_QWORD *)(v34 + 32);
          *(_QWORD *)(v34 + 24) = 0;
        }
        if ( 2 * *v36 )
        {
          v98 = 1;
          v55 = v41;
          if ( !(unsigned __int8)sub_141938160(v29) )
            *v37 = 1;
          v41 = v55;
        }
        goto LABEL_38;
      }
      v81 = xmmword_1419E55E8;
      v80 = xmmword_1419E55D8;
      sub_14029B810(v75);
      if ( v91.m128i_i64[0] )
        sub_140001660(v91.m128i_i64[1], v91.m128i_i64[0], 1);
      v30 = 637;
      v31 = &unk_1419E55FD;
      v32 = 400;
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v92.m128i_i64[1]) )
LABEL_55:
        sub_1409E4650(&v92.m128i_u64[1]);
LABEL_56:
      v69[0] = v80;
      v69[1] = v81;
      v97[41].m128i_i8[8] = 1;
      v70 = aClose_4;
      v71 = 5;
      v72 = v32;
      v73 = v31;
      v74 = v30;
      sub_140DDD750(v67, v69);
      v46 = v97;
      v97[33].m128i_i8[13] = 0;
      v46[33].m128i_i8[11] = 0;
      *(__int16 *)((char *)&v46[33].m128i_i16[4] + 1) = 0;
      v47 = v46[15].m128i_i64[0];
      if ( v47 )
        sub_140001660(v46[15].m128i_i64[1], v47, 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v46[16].m128i_i64[1]) )
        sub_1409E4650(&v97[16].m128i_u64[1]);
      *(_OWORD *)(a1 + 112) = v67[7];
      *(_OWORD *)(a1 + 96) = v67[6];
      *(_OWORD *)(a1 + 80) = v67[5];
      *(_OWORD *)(a1 + 64) = v67[4];
      v48 = v67[0];
      v49 = v67[1];
      v50 = v67[2];
      *(_OWORD *)(a1 + 48) = v67[3];
      *(_OWORD *)(a1 + 32) = v50;
      *(_OWORD *)(a1 + 16) = v49;
      *(_OWORD *)a1 = v48;
      v39 = 1;
LABEL_61:
      v97[33].m128i_i8[8] = v39;
      return a1;
    case 4LL:
      v11 = (__m128i *)a2[34].m128i_i64[0];
      v12 = (__int64 (__fastcall **)())a2[34].m128i_i64[1];
      goto LABEL_16;
    case 5LL:
      v13 = (__m128i *)&a2[34];
      if ( a2[41].m128i_i8[8] )
      {
        if ( a2[41].m128i_i8[8] == 1 )
        {
          v93 = a2 + 34;
          sub_1419393E0(&off_1419E5B18);
        }
        v93 = a2 + 34;
        sub_141939400(&off_1419E5B18);
      }
      goto LABEL_22;
  }
}
