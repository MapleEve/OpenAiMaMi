// win 1.2.7 | module src/core/relay/translator/anthropic_content.rs | ea 0x140e871f0 | name sub_140E871F0
// win 1.2.7 | module src/core/relay/translator/anthropic_content.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E871F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  const __m128i *v12; // rbx
  signed __int64 v13; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r15
  __m128i *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD v39[3]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v40; // [rsp+80h] [rbp+0h] BYREF
  __int64 v41; // [rsp+90h] [rbp+10h] BYREF
  __int128 v42; // [rsp+98h] [rbp+18h]
  __int64 v43; // [rsp+A8h] [rbp+28h]
  __int128 v44; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v45; // [rsp+C0h] [rbp+40h]
  __int128 v46; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+58h]
  __m256i v48; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v49[40]; // [rsp+108h] [rbp+88h] BYREF
  _DWORD *v50; // [rsp+130h] [rbp+B0h]
  char v51; // [rsp+138h] [rbp+B8h]
  char v52; // [rsp+139h] [rbp+B9h]
  char v53; // [rsp+13Ah] [rbp+BAh]
  char v54; // [rsp+13Bh] [rbp+BBh]
  char v55; // [rsp+13Ch] [rbp+BCh]
  char v56; // [rsp+13Dh] [rbp+BDh]
  char v57; // [rsp+13Eh] [rbp+BEh]
  char v58; // [rsp+13Fh] [rbp+BFh]
  __int64 v59; // [rsp+140h] [rbp+C0h]

  v59 = -2;
  v4 = sub_1416419F0(aType_11, 4, a2);
  if ( !v4 || *(_BYTE *)v4 != 3 )
    goto LABEL_16;
  v5 = *(_QWORD *)(v4 + 16);
  v6 = *(_QWORD *)(v4 + 24);
  switch ( v6 )
  {
    case 4LL:
      if ( *(_DWORD *)v5 != 1954047348 )
        goto LABEL_16;
      break;
    case 11LL:
      if ( *(_QWORD *)v5 ^ 0x745F74757074756FLL | *(_QWORD *)(v5 + 3) ^ 0x747865745F747570LL )
      {
        if ( *(_QWORD *)v5 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v5 + 3) ^ 0x6567616D695F7475LL )
          goto LABEL_16;
        v7 = sub_1416419F0(aImageUrl_0, 9, a2);
        if ( !v7 || *(_BYTE *)v7 != 3 )
        {
          *(_QWORD *)(a1 + 8) = aAnthropicImage;
          *(_QWORD *)(a1 + 16) = 77;
          goto LABEL_17;
        }
        sub_140F8E2F0(v49, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24));
        v8 = *(_QWORD *)&v49[16];
        if ( *(_DWORD *)v49 == 1 )
        {
          *(_QWORD *)(a1 + 8) = *(_QWORD *)&v49[8];
          *(_QWORD *)(a1 + 16) = v8;
          goto LABEL_17;
        }
        if ( *(_QWORD *)&v49[8] )
        {
          v39[0] = *(_QWORD *)&v49[8];
          v40 = *(_OWORD *)&v49[24];
          v39[1] = *(_QWORD *)&v49[16];
          *(_QWORD *)&v44 = 0;
          v45 = 0;
          nullsub_1(*(_QWORD *)&v49[8]);
          v25 = (_DWORD *)sub_140001650(4, 1);
          if ( !v25 )
            sub_141938D2B(1, 4);
          *v25 = 1701869940;
          *(_QWORD *)&v46 = 4;
          v50 = v25;
          *((_QWORD *)&v46 + 1) = v25;
          v47 = 4;
          v58 = 1;
          sub_14040FB10(v49, &off_141A54778);
          if ( v49[0] == 0xFF )
          {
            v48.m256i_i64[0] = *(_QWORD *)&v49[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v48,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A54788);
          }
          v48 = *(__m256i *)v49;
          v58 = 0;
          sub_140E72AA0(v49, &v44, &v46, &v48);
          if ( v49[0] != 0xFF )
            sub_140DF44E0(v49);
          nullsub_1(v26);
          v27 = (void *)sub_140001650(10, 1);
          if ( !v27 )
            sub_141938D2B(1, 10);
          qmemcpy(v27, "media_type", 10);
          *(_QWORD *)&v46 = 10;
          v50 = v27;
          *((_QWORD *)&v46 + 1) = v27;
          v47 = 10;
          v57 = 1;
          sub_14040FB10(v49, v39);
          if ( v49[0] == 0xFF )
          {
            v48.m256i_i64[0] = *(_QWORD *)&v49[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v48,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A54788);
          }
          v48 = *(__m256i *)v49;
          v57 = 0;
          sub_140E72AA0(v49, &v44, &v46, &v48);
          if ( v49[0] != 0xFF )
            sub_140DF44E0(v49);
          nullsub_1(v28);
          v29 = (_DWORD *)sub_140001650(4, 1);
          if ( !v29 )
            sub_141938D2B(1, 4);
          *v29 = 1635017060;
          *(_QWORD *)&v46 = 4;
          v50 = v29;
          *((_QWORD *)&v46 + 1) = v29;
          v47 = 4;
          v56 = 1;
          sub_14040FB10(v49, &v40);
          if ( v49[0] == 0xFF )
          {
            v48.m256i_i64[0] = *(_QWORD *)&v49[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v48,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A54788);
          }
          v48 = *(__m256i *)v49;
          v56 = 0;
          sub_140E72AA0(v49, &v44, &v46, &v48);
          if ( v49[0] != 0xFF )
            sub_140DF44E0(v49);
        }
        else
        {
          v40 = *(_OWORD *)&v49[16];
          *(_QWORD *)&v44 = 0;
          v45 = 0;
          nullsub_1(0);
          v31 = (_DWORD *)sub_140001650(4, 1);
          if ( !v31 )
            sub_141938D2B(1, 4);
          *v31 = 1701869940;
          *(_QWORD *)&v46 = 4;
          v50 = v31;
          *((_QWORD *)&v46 + 1) = v31;
          v47 = 4;
          v55 = 1;
          sub_14040FB10(v49, &off_141A547A8);
          if ( v49[0] == 0xFF )
          {
            v48.m256i_i64[0] = *(_QWORD *)&v49[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v48,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A547B8);
          }
          v48 = *(__m256i *)v49;
          v55 = 0;
          sub_140E72AA0(v49, &v44, &v46, &v48);
          if ( v49[0] != 0xFF )
            sub_140DF44E0(v49);
          nullsub_1(v32);
          v33 = sub_140001650(3, 1);
          if ( !v33 )
            sub_141938D2B(1, 3);
          *(_BYTE *)(v33 + 2) = 108;
          *(_WORD *)v33 = 29301;
          *(_QWORD *)&v46 = 3;
          v50 = (_DWORD *)v33;
          *((_QWORD *)&v46 + 1) = v33;
          v47 = 3;
          v54 = 1;
          sub_14040FB10(v49, &v40);
          if ( v49[0] == 0xFF )
          {
            v48.m256i_i64[0] = *(_QWORD *)&v49[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_16,
              43,
              (unsigned int)&v48,
              (unsigned int)&off_141A52FE8,
              (__int64)&off_141A547B8);
          }
          v48 = *(__m256i *)v49;
          v54 = 0;
          sub_140E72AA0(v49, &v44, &v46, &v48);
          if ( v49[0] != 0xFF )
            sub_140DF44E0(v49);
        }
        v42 = v44;
        v43 = v45;
        LOBYTE(v41) = 5;
        *(_QWORD *)&v44 = 0;
        v45 = 0;
        nullsub_1(v30);
        v34 = (_DWORD *)sub_140001650(4, 1);
        if ( !v34 )
          sub_141938D2B(1, 4);
        *v34 = 1701869940;
        *(_QWORD *)&v46 = 4;
        v50 = v34;
        *((_QWORD *)&v46 + 1) = v34;
        v47 = 4;
        v53 = 1;
        sub_14040FB10(v49, &off_141A547D8);
        if ( v49[0] == 0xFF )
        {
          v48.m256i_i64[0] = *(_QWORD *)&v49[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v48,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A547E8);
        }
        v48 = *(__m256i *)v49;
        v53 = 0;
        sub_140E72AA0(v49, &v44, &v46, &v48);
        if ( v49[0] != 0xFF )
          sub_140DF44E0(v49);
        nullsub_1(v35);
        v36 = sub_140001650(6, 1);
        if ( !v36 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v36 + 4) = 25955;
        *(_DWORD *)v36 = 1920298867;
        *(_QWORD *)&v46 = 6;
        v50 = (_DWORD *)v36;
        *((_QWORD *)&v46 + 1) = v36;
        v47 = 6;
        v52 = 1;
        sub_140412420(v49, &v41);
        if ( v49[0] == 0xFF )
        {
          v48.m256i_i64[0] = *(_QWORD *)&v49[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v48,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A547E8);
        }
        v48 = *(__m256i *)v49;
        v52 = 0;
        sub_140E72AA0(v49, &v44, &v46, &v48);
        if ( v49[0] != 0xFF )
          sub_140DF44E0(v49);
        *(_OWORD *)&v49[7] = v44;
        *(_QWORD *)&v49[23] = v45;
        *(_BYTE *)a1 = 5;
        v37 = *(_QWORD *)&v49[15];
        v38 = *(_QWORD *)&v49[23];
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v49;
        *(_QWORD *)(a1 + 16) = v37;
        *(_QWORD *)(a1 + 24) = v38;
        sub_140DF44E0(&v41);
        return a1;
      }
      break;
    case 10LL:
      if ( *(_QWORD *)v5 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v5 + 8) ^ 0x7478LL )
      {
        if ( !(*(_QWORD *)v5 ^ 0x69665F7475706E69LL | *(unsigned __int16 *)(v5 + 8) ^ 0x656CLL) )
        {
          *(_QWORD *)(a1 + 8) = aFileAttachment;
          *(_QWORD *)(a1 + 16) = 103;
LABEL_17:
          *(_BYTE *)a1 = -1;
          return a1;
        }
LABEL_16:
        *(_QWORD *)(a1 + 8) = aUnsupportedCon;
        *(_QWORD *)(a1 + 16) = 61;
        goto LABEL_17;
      }
      break;
    default:
      goto LABEL_16;
  }
  v10 = sub_1416419F0(aText_12, 4, a2);
  if ( !v10 || *(_BYTE *)v10 != 3 )
  {
    *(_QWORD *)(a1 + 8) = aMessageTextMus;
    *(_QWORD *)(a1 + 16) = 29;
    goto LABEL_17;
  }
  v12 = *(const __m128i **)(v10 + 16);
  v13 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)&v46 = 0;
  v47 = 0;
  nullsub_1(v11);
  v14 = (_DWORD *)sub_140001650(4, 1);
  if ( !v14 )
    sub_141938D2B(1, 4);
  *v14 = 1701869940;
  v41 = 4;
  v39[2] = v14;
  *(_QWORD *)&v42 = v14;
  *((_QWORD *)&v42 + 1) = 4;
  nullsub_1(v15);
  v16 = (_DWORD *)sub_140001650(4, 1);
  v50 = v16;
  if ( !v16 )
    sub_141938D2B(1, 4);
  *v16 = 1954047348;
  v49[0] = 3;
  *(_QWORD *)&v49[8] = 4;
  *(_QWORD *)&v49[16] = v16;
  *(_QWORD *)&v49[24] = 4;
  sub_140E72AA0(&v48, &v46, &v41, v49);
  if ( v48.m256i_i8[0] != -1 )
    sub_140DF44E0(&v48);
  nullsub_1(v17);
  v18 = (_DWORD *)sub_140001650(4, 1);
  if ( !v18 )
    sub_141938D2B(1, 4);
  *v18 = 1954047348;
  v41 = 4;
  *(_QWORD *)&v42 = v18;
  *((_QWORD *)&v42 + 1) = 4;
  v50 = v18;
  if ( v13 < 0 )
  {
    v20 = 0;
    goto LABEL_28;
  }
  if ( v13 )
  {
    nullsub_1(v19);
    v20 = 1;
    v21 = (__m128i *)sub_140001650(v13, 1);
    if ( !v21 )
    {
LABEL_28:
      v51 = 1;
      sub_141938D2B(v20, v13);
    }
    v22 = (__int64)v21;
    sub_1418F44E0(v21, v12, v13);
  }
  else
  {
    v22 = 1;
  }
  v49[0] = 3;
  *(_QWORD *)&v49[8] = v13;
  *(_QWORD *)&v49[16] = v22;
  *(_QWORD *)&v49[24] = v13;
  v51 = 0;
  sub_140E72AA0(&v48, &v46, &v41, v49);
  if ( v48.m256i_i8[0] != -1 )
    sub_140DF44E0(&v48);
  *(_OWORD *)&v49[7] = v46;
  *(_QWORD *)&v49[23] = v47;
  *(_BYTE *)a1 = 5;
  v23 = *(_QWORD *)&v49[15];
  v24 = *(_QWORD *)&v49[23];
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v49;
  *(_QWORD *)(a1 + 16) = v23;
  *(_QWORD *)(a1 + 24) = v24;
  return a1;
}
