// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140b608b0 | name sub_140B608B0
// win 1.2.7 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B608B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // r15
  const __m128i *v6; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int128 *v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  const __m128i *v16; // rbx
  __int16 v17; // r12
  const __m128i *v18; // rbx
  __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  char result; // al
  __int64 v24; // rbx
  const __m128i *v25; // rdx
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __int64 v29; // rdi
  __int64 v30; // r14
  __int16 v31; // r12
  __int16 v32; // r12
  _QWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v36[24]; // [rsp+38h] [rbp-48h]
  __int128 v37; // [rsp+140h] [rbp+C0h]
  __m128i v38; // [rsp+150h] [rbp+D0h]
  __m128i v39; // [rsp+160h] [rbp+E0h]
  __m128i v40; // [rsp+170h] [rbp+F0h]
  __m128i v41; // [rsp+180h] [rbp+100h]
  __m128i v42; // [rsp+190h] [rbp+110h]
  __m128i v43; // [rsp+1A0h] [rbp+120h]
  __m128i v44; // [rsp+1B0h] [rbp+130h]
  __int128 v45; // [rsp+1C0h] [rbp+140h] BYREF
  _OWORD v46[16]; // [rsp+1D0h] [rbp+150h]
  __int128 v47; // [rsp+2D0h] [rbp+250h]
  __int128 v48; // [rsp+2E0h] [rbp+260h]
  __int128 v49; // [rsp+2F0h] [rbp+270h]
  __int128 v50; // [rsp+300h] [rbp+280h] BYREF
  _BYTE v51[24]; // [rsp+310h] [rbp+290h] BYREF
  __int64 v52; // [rsp+328h] [rbp+2A8h]
  __int128 v53; // [rsp+330h] [rbp+2B0h]
  __int64 v54; // [rsp+340h] [rbp+2C0h]
  __int64 v55; // [rsp+348h] [rbp+2C8h]
  __int8 *v56; // [rsp+350h] [rbp+2D0h]
  __int16 v57; // [rsp+358h] [rbp+2D8h]
  __int128 v58; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v59; // [rsp+370h] [rbp+2F0h]
  int v60; // [rsp+380h] [rbp+300h]
  int v61; // [rsp+384h] [rbp+304h]
  __int64 v62; // [rsp+388h] [rbp+308h]
  __int64 v63; // [rsp+390h] [rbp+310h]
  __int64 m128i_i64; // [rsp+398h] [rbp+318h]
  const __m128i *v65; // [rsp+3A0h] [rbp+320h]
  char v66; // [rsp+3AFh] [rbp+32Fh] BYREF
  __int8 *v67; // [rsp+3B0h] [rbp+330h]
  char v68; // [rsp+3BFh] [rbp+33Fh]
  __int64 v69; // [rsp+3C0h] [rbp+340h]

  v69 = -2;
  v6 = (const __m128i *)a2;
  v8 = *(unsigned __int8 *)(a2 + 48);
  v65 = (const __m128i *)a2;
  switch ( v8 )
  {
    case 0LL:
      v9 = *(_QWORD *)(a2 + 24);
      v10 = *(_QWORD *)(a2 + 32);
      v11 = *(__int128 **)(a2 + 40);
      sub_140CAF8C0(
        (unsigned int)&v45,
        **(_QWORD **)a2,
        (unsigned int)&unk_141A43388,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16));
      sub_140CB4D60(&v35, &v45, v9, v10);
      v12 = *((_QWORD *)v11 + 10);
      v3 = 4 * v12;
      v13 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v13) = v12 >> 62 != 0 || 4 * v12 > 0x7FFFFFFFFFFFFFFELL;
      if ( (_BYTE)v13 )
      {
        v14 = 0;
        goto LABEL_4;
      }
      v67 = *((__int8 **)v11 + 10);
      v17 = *((_WORD *)v11 + 44);
      v63 = 4 * v12;
      if ( v3 )
      {
        v18 = *((const __m128i **)v11 + 9);
        nullsub_1(v13);
        v14 = 2;
        v19 = (__m128i *)sub_140001650(v3, 2);
        if ( !v19 )
        {
LABEL_4:
          v68 = 1;
          sub_141938D2B(v14, v3);
        }
        m128i_i64 = (__int64)v19;
        if ( v67 )
          sub_1418F44E0(v19, v18, v3);
      }
      else
      {
        m128i_i64 = 2;
      }
      sub_1403F0BA0(&v58, (char *)v11 + 24);
      sub_1403F09D0(&v45, v11 + 3);
      v57 = v17;
      v55 = m128i_i64;
      v56 = v67;
      *(_OWORD *)&v51[8] = v58;
      v52 = v59;
      v54 = *(_QWORD *)&v46[0];
      v53 = v45;
      v50 = *v11;
      *(_QWORD *)v51 = *((_QWORD *)v11 + 2);
      v68 = 0;
      sub_141259870(&v45, &v35, &v50);
      v20 = sub_1412597A0(&v45);
      v6 = v65;
      v65[3].m128i_i64[1] = v20;
      v6[4].m128i_i64[0] = v21;
LABEL_13:
      sub_14126C5E0(&v45, &v6[3].m128i_u64[1], a3);
      v22 = v45;
      if ( (_QWORD)v45 == -2 )
      {
        *(_QWORD *)a1 = 2;
        result = 3;
        goto LABEL_37;
      }
      v24 = *((_QWORD *)&v45 + 1);
      v4 = *(_QWORD *)&v46[0];
      v38 = *(__m128i *)((char *)v46 + 8);
      v39 = *(__m128i *)((char *)&v46[1] + 8);
      v40 = *(__m128i *)((char *)&v46[2] + 8);
      v41 = *(__m128i *)((char *)&v46[3] + 8);
      v42 = *(__m128i *)((char *)&v46[4] + 8);
      v43 = *(__m128i *)((char *)&v46[5] + 8);
      v44 = *(__m128i *)((char *)&v46[6] + 8);
      sub_1407AC3B0(v65[3].m128i_i64[1], v65[4].m128i_i64[0]);
      if ( (_DWORD)v22 == -1 )
      {
        v67 = (__int8 *)sub_14122E700(v24);
        *(_QWORD *)&v58 = v67;
        v35 = 0;
        *(_QWORD *)v36 = 1;
        *(_QWORD *)&v36[8] = 0;
        *(_QWORD *)&v46[0] = 1610612768;
        *(_QWORD *)&v45 = &v35;
        *((_QWORD *)&v45 + 1) = &off_141A353B8;
        if ( (unsigned __int8)sub_14122E940(&v58, &v45) )
          sub_141939040(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v66,
            (unsigned int)&unk_141A2C928,
            (__int64)&off_141A35470);
        v24 = v35;
        v50 = *(_OWORD *)v36;
        sub_140192750(v67);
        v48 = v50;
        v32 = 1;
LABEL_35:
        LODWORD(v3) = 0;
        v34 = 1;
        goto LABEL_36;
      }
      v6 = v65;
      v25 = v65 + 4;
      v65[4].m128i_i64[0] = v22;
      v6[4].m128i_i64[1] = v24;
      v6[5].m128i_i64[0] = v4;
      *(__m128i *)((char *)v6 + 88) = v38;
      *(__m128i *)((char *)v6 + 168) = v43;
      v26 = v40;
      v27 = v41;
      v28 = v42;
      *(__m128i *)((char *)v6 + 104) = v39;
      *(__m128i *)((char *)v6 + 120) = v26;
      *(__m128i *)((char *)v6 + 136) = v27;
      *(__m128i *)((char *)v6 + 152) = v28;
      *(__m128i *)((char *)v6 + 184) = v44;
      LODWORD(v4) = v6[10].m128i_i32[2];
      v6[3].m128i_i16[4] = v4;
      if ( (unsigned __int16)(v4 - 200) < 0x64u )
      {
        v16 = (const __m128i *)((char *)v6 + 200);
        sub_1418F44E0((__m128i *)&v6[12].m128i_u64[1], v25, 0x88u);
        v67 = &v6[47].m128i_i8[8];
        v6[47].m128i_i8[8] = 0;
LABEL_18:
        v63 = (__int64)v16;
        sub_1418F44E0((__m128i *)&v6[21], v16, 0x88u);
        v6[47].m128i_i8[0] = 0;
LABEL_19:
        m128i_i64 = (__int64)v6[21].m128i_i64;
        sub_140B4C420(&v45, &v6[21], a3);
        if ( (_BYTE)v45 )
        {
          *v67 = 3;
          *(_QWORD *)a1 = 2;
          result = 4;
          goto LABEL_37;
        }
        v29 = *((_QWORD *)&v45 + 1);
        v24 = *(_QWORD *)&v46[0];
        v37 = *(_OWORD *)((char *)v46 + 8);
        sub_1407A90D0(m128i_i64);
        if ( v29 )
        {
          *(_OWORD *)v51 = v37;
          *(_QWORD *)&v50 = v29;
          *((_QWORD *)&v50 + 1) = v24;
          v30 = v37;
          *(_QWORD *)&v45 = v24;
          *((_QWORD *)&v45 + 1) = v37;
          v46[0] = 0;
          sub_14062F970(&v35, &v45);
          v60 = (unsigned __int8)v35;
          v61 = (unsigned __int8)v35;
          if ( (unsigned __int8)v35 == 255 )
          {
            LOWORD(v45) = 5;
            m128i_i64 = sub_14061C850(&v45, *(_QWORD *)v36);
            v24 = *((_QWORD *)&v50 + 1);
            v29 = v50;
            v31 = 0;
            v30 = *(_QWORD *)v51;
            LODWORD(v3) = 0;
          }
          else
          {
            LOWORD(v4) = WORD1(v35);
            m128i_i64 = *(_QWORD *)v36;
            v58 = *(_OWORD *)&v36[8];
            LODWORD(v3) = HIDWORD(v35);
            v31 = BYTE1(v35) << 8;
          }
          (*(void (__fastcall **)(_BYTE *, __int64, __int64))(v29 + 32))(&v51[8], v24, v30);
          v49 = v58;
          *v67 = 1;
          v47 = v49;
          v24 = m128i_i64;
          if ( (_BYTE)v60 != 0xFF )
          {
            v48 = v47;
            v32 = v61 | v31;
            v34 = 0;
            goto LABEL_36;
          }
        }
        else
        {
          v49 = v58;
          *v67 = 1;
          v47 = v49;
        }
        v67 = (__int8 *)sub_14122E700(v24);
        *(_QWORD *)&v58 = v67;
        v35 = 0;
        *(_QWORD *)v36 = 1;
        *(_QWORD *)&v36[8] = 0;
        *(_QWORD *)&v46[0] = 1610612768;
        *(_QWORD *)&v45 = &v35;
        *((_QWORD *)&v45 + 1) = &off_141A353B8;
        if ( (unsigned __int8)sub_14122E940(&v58, &v45) )
          sub_141939040(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v66,
            (unsigned int)&unk_141A2C928,
            (__int64)&off_141A35470);
        v24 = v35;
        v50 = *(_OWORD *)v36;
        sub_140192750(v67);
        v48 = v50;
        v32 = 2;
        goto LABEL_35;
      }
      sub_140757C80(v25);
      v33 = (_QWORD *)v65[12].m128i_i64[0];
      if ( *v33 )
        sub_140001660(v33[1], *v33, 1);
      sub_140001660(v33, 88, 8);
      v34 = 1;
      v32 = 0;
LABEL_36:
      *(_QWORD *)a1 = v34;
      *(_WORD *)(a1 + 8) = v32;
      *(_WORD *)(a1 + 14) = WORD1(v3);
      *(_DWORD *)(a1 + 10) = ((_DWORD)v3 << 16) | (unsigned __int16)v4;
      *(_QWORD *)(a1 + 16) = v24;
      *(_OWORD *)(a1 + 24) = v48;
      result = 1;
LABEL_37:
      v65[3].m128i_i8[0] = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A2C6A8);
    case 2LL:
      sub_141939400(&off_141A2C6A8);
    case 3LL:
      goto LABEL_13;
    case 4LL:
      v15 = *(unsigned __int8 *)(a2 + 760);
      v16 = (const __m128i *)(a2 + 200);
      v67 = (__int8 *)(a2 + 760);
      switch ( v15 )
      {
        case 0LL:
          goto LABEL_18;
        case 1LL:
          v62 = a2 + 200;
          sub_1419393E0(&off_141A27B98);
        case 2LL:
          v62 = a2 + 200;
          sub_141939400(&off_141A27B98);
        case 3LL:
          v63 = a2 + 200;
          goto LABEL_19;
      }
  }
}
