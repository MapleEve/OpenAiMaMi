// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14032d9f0 | name sub_14032D9F0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14032D9F0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, const char *a5, char a6)
{
  signed __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // kr10_16
  __int64 v15; // r14
  __int64 result; // rax
  int v17; // ecx
  __int16 v18; // dx
  __int8 v19; // r8
  __int64 v20; // r9
  __m128i *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 i; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // r13
  int v30; // eax
  char v31; // cl
  __m128i *v32; // rax
  __int128 v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r14
  __m128i *v37; // rax
  __int64 v38; // rbx
  __int128 v39; // xmm1
  __int64 j; // rcx
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 v44; // r13
  __int64 v45; // r14
  int v46; // eax
  char v47; // cl
  __int64 v48; // rcx
  _QWORD v49[2]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v50; // [rsp+78h] [rbp-8h] BYREF
  __int64 v51; // [rsp+88h] [rbp+8h]
  __int64 v52; // [rsp+90h] [rbp+10h]
  __int64 v53; // [rsp+98h] [rbp+18h]
  __m256i *v54; // [rsp+A0h] [rbp+20h] BYREF
  const char *v55; // [rsp+A8h] [rbp+28h]
  __int128 v56; // [rsp+B0h] [rbp+30h]
  const char *v57; // [rsp+C0h] [rbp+40h]
  __int64 v58; // [rsp+C8h] [rbp+48h]
  __int64 v59; // [rsp+D0h] [rbp+50h]
  const char *v60; // [rsp+D8h] [rbp+58h]
  __int64 v61; // [rsp+E0h] [rbp+60h]
  __int64 v62; // [rsp+E8h] [rbp+68h]
  void *v63; // [rsp+F0h] [rbp+70h]
  __m256i *v64; // [rsp+F8h] [rbp+78h]
  __int128 v65; // [rsp+100h] [rbp+80h] BYREF
  __int64 v66; // [rsp+110h] [rbp+90h]
  __int64 v67; // [rsp+118h] [rbp+98h]
  __m256i v68; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v69[31]; // [rsp+148h] [rbp+C8h] BYREF
  __m256i v70; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v71; // [rsp+188h] [rbp+108h]
  __m256i v72; // [rsp+190h] [rbp+110h] BYREF
  __int64 v73; // [rsp+1B0h] [rbp+130h]
  char v74; // [rsp+1BCh] [rbp+13Ch] BYREF
  char v75; // [rsp+1BDh] [rbp+13Dh]
  char v76; // [rsp+1BEh] [rbp+13Eh]
  char v77; // [rsp+1BFh] [rbp+13Fh]
  __int64 v78; // [rsp+1C0h] [rbp+140h]

  v78 = -2;
  v8 = (signed __int64)a5;
  v49[0] = a2;
  v49[1] = a3;
  sub_140E91160(a4, a5);
  if ( v10 )
  {
    if ( a6 )
    {
      v54 = (__m256i *)a4;
      v55 = a5;
      v56 = 0;
      v57 = (const char *)a4;
      v58 = (__int64)a5;
      sub_14062D280(&v70, &v54);
      if ( v70.m256i_i8[0] != -1 )
      {
        v72 = v70;
        if ( v70.m256i_u8[0] == 5 )
        {
          if ( v72.m256i_i64[1] )
          {
            v53 = v72.m256i_i64[2];
            v73 = v72.m256i_i64[2];
            v67 = v72.m256i_i64[1];
            for ( i = v72.m256i_i64[1]; ; i = *(_QWORD *)(v71 + 8 * v27 + 632) )
            {
              v25 = i + 360;
              v71 = i;
              v52 = *(unsigned __int16 *)(i + 626);
              v26 = 3LL * (unsigned int)(8 * v52);
              v27 = -1;
              do
              {
                if ( !v26 )
                {
                  v27 = v52;
                  goto LABEL_36;
                }
                v28 = v25 + 24;
                v29 = 5LL - *(_QWORD *)(v25 + 16);
                v30 = sub_1418F4B70(aInput_0, *(_QWORD *)(v25 + 8));
                if ( v30 )
                  v29 = v30;
                v31 = (v29 > 0) - (v29 < 0);
                ++v27;
                v26 -= 24;
                v25 = v28;
              }
              while ( v31 == 1 );
              if ( !v31 )
                goto LABEL_74;
LABEL_36:
              if ( !v73 )
                break;
              --v73;
            }
            for ( j = v67; ; j = *(_QWORD *)(v67 + 8 * v43 + 632) )
            {
              v41 = j + 360;
              v67 = j;
              v73 = *(unsigned __int16 *)(j + 626);
              v42 = 3LL * (unsigned int)(8 * v73);
              v43 = -1;
              do
              {
                if ( !v42 )
                {
                  v43 = v73;
                  goto LABEL_72;
                }
                v44 = v41 + 24;
                v45 = 5LL - *(_QWORD *)(v41 + 16);
                v46 = sub_1418F4B70(aPatch_0, *(_QWORD *)(v41 + 8));
                if ( v46 )
                  v45 = v46;
                v47 = (v45 > 0) - (v45 < 0);
                ++v43;
                v42 -= 24;
                v41 = v44;
              }
              while ( v47 == 1 );
              if ( !v47 )
                break;
LABEL_72:
              v9 = v67;
              if ( !v53 )
                goto LABEL_8;
              --v53;
            }
LABEL_74:
            *(_QWORD *)&v69[23] = v72.m256i_i64[3];
            *(_OWORD *)&v69[7] = *(_OWORD *)&v72.m256i_u64[1];
            goto LABEL_75;
          }
        }
        else if ( v70.m256i_u8[0] == 3 )
        {
          v73 = v72.m256i_i64[1];
          v8 = v72.m256i_i64[3];
          v11 = v72.m256i_i64[2];
          goto LABEL_49;
        }
        goto LABEL_8;
      }
      v54 = (__m256i *)v70.m256i_i64[1];
      if ( (__int64)a5 < 0 )
      {
        v23 = 0;
        goto LABEL_21;
      }
      if ( a5 )
      {
        nullsub_1(v9);
        v23 = 1;
        v32 = (__m128i *)sub_140001650(a5, 1);
        if ( !v32 )
LABEL_21:
          sub_141938D2B(v23, a5);
        v11 = (__int64)v32;
        sub_1418F44E0(v32, a4, (unsigned __int64)a5);
      }
      else
      {
        v11 = 1;
      }
      v72.m256i_i64[1] = (__int64)a5;
      v72.m256i_i64[2] = v11;
      v72.m256i_i64[3] = (__int64)a5;
      v72.m256i_i8[0] = 3;
      sub_14002F910(&v54);
      v73 = (__int64)a5;
LABEL_49:
      *(_QWORD *)&v65 = 0;
      v66 = 0;
      nullsub_1(v9);
      v34 = sub_140001650(5, 1);
      v71 = v11;
      if ( !v34 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v34 + 4) = 116;
      *(_DWORD *)v34 = 1970302569;
      v68.m256i_i64[0] = 5;
      v68.m256i_i64[1] = v34;
      v68.m256i_i64[2] = 5;
      if ( v8 < 0 )
      {
        v36 = 0;
        goto LABEL_52;
      }
      if ( v8 )
      {
        nullsub_1(v35);
        v36 = 1;
        v37 = (__m128i *)sub_140001650(v8, 1);
        if ( !v37 )
        {
LABEL_52:
          v76 = 1;
          sub_141938D2B(v36, v8);
        }
        v38 = (__int64)v37;
        sub_1418F44E0(v37, (const __m128i *)v11, v8);
      }
      else
      {
        v38 = 1;
      }
      LOBYTE(v54) = 3;
      v55 = (const char *)v8;
      *(_QWORD *)&v56 = v38;
      *((_QWORD *)&v56 + 1) = v8;
      v76 = 0;
      sub_140E72AA0(&v70, &v65, &v68, &v54);
      if ( v70.m256i_i8[0] != -1 )
        sub_14002F9D0(&v70);
      *(_OWORD *)&v69[7] = v65;
      *(_QWORD *)&v69[23] = v66;
      if ( v73 )
      {
        sub_140001660(v71, v73, 1);
        result = v72.m256i_u8[0];
        *(_BYTE *)a1 = 5;
        v39 = *(_OWORD *)&v69[15];
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v69;
        *(_OWORD *)(a1 + 16) = v39;
        if ( (_DWORD)result != 3 && (_DWORD)result != 5 )
          return sub_14002F9D0(&v72);
        return result;
      }
LABEL_75:
      *(_BYTE *)a1 = 5;
      result = *(_QWORD *)&v69[15];
      v48 = *(_QWORD *)&v69[23];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v69;
      *(_QWORD *)(a1 + 16) = result;
      *(_QWORD *)(a1 + 24) = v48;
      return result;
    }
    v54 = (__m256i *)a4;
    v55 = a5;
    v56 = 0;
    v57 = (const char *)a4;
    v58 = (__int64)a5;
    sub_14062D280(&v68, &v54);
    if ( v68.m256i_i8[0] == -1 )
    {
      *(_QWORD *)v69 = v68.m256i_i64[1];
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v70.m256i_i64[0] = (__int64)v49;
        v70.m256i_i64[1] = (__int64)sub_140186EE0;
        v70.m256i_i64[2] = (__int64)v69;
        v70.m256i_i64[3] = (__int64)sub_14163CE40;
        v59 = 2;
        v60 = aCodexmateLibCo_3;
        v61 = 38;
        v63 = &unk_1419E92C5;
        v64 = &v70;
        v54 = nullptr;
        v55 = aCodexmateLibCo_3;
        v56 = 0x26u;
        v57 = aSrcCoreRelayTr_5;
        v58 = 28;
        v62 = 0x16CE00000001LL;
        sub_1414D53A0(&v74, &v54);
      }
      *(_BYTE *)a1 = -1;
      return sub_14002F910(v69);
    }
    v72 = v68;
    if ( v68.m256i_i8[0] != 5 )
    {
      *(_BYTE *)a1 = -1;
      v77 = 0;
      return sub_14002F9D0(&v72);
    }
LABEL_15:
    result = v72.m256i_u8[0];
    v17 = *(__int32 *)((char *)v72.m256i_i32 + 1);
    v18 = *(__int16 *)((char *)&v72.m256i_i16[2] + 1);
    v19 = v72.m256i_i8[7];
    v20 = v72.m256i_i64[1];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v72.m256i_u64[2];
    *(_BYTE *)a1 = result;
    *(_DWORD *)(a1 + 1) = v17;
    *(_WORD *)(a1 + 5) = v18;
    *(_BYTE *)(a1 + 7) = v19;
    *(_QWORD *)(a1 + 8) = v20;
    return result;
  }
  v72.m256i_i64[1] = 0;
  v72.m256i_i64[3] = 0;
  v72.m256i_i8[0] = 5;
  if ( !a6 )
    goto LABEL_15;
LABEL_8:
  v68 = v72;
  *(_QWORD *)&v50 = 0;
  v51 = 0;
  nullsub_1(v9);
  v12 = sub_140001650(5, 1);
  if ( !v12 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v12 + 4) = 116;
  *(_DWORD *)v12 = 1970302569;
  *(_QWORD *)&v65 = 5;
  v73 = v12;
  *((_QWORD *)&v65 + 1) = v12;
  v66 = 5;
  v70.m256i_i64[0] = 0;
  *(_OWORD *)&v70.m256i_u64[1] = 1u;
  *(_QWORD *)&v56 = 1610612768;
  v54 = &v70;
  v55 = (const char *)&off_1419E98E0;
  if ( (unsigned __int8)sub_141642FA0(&v68, &v54) )
    sub_141939040(
      (unsigned int)aADisplayImplem_0,
      55,
      (unsigned int)&v74,
      (unsigned int)&unk_1419E6AE0,
      (__int64)&off_1419EB798);
  v14 = *(_OWORD *)&v70.m256i_u64[1];
  v71 = v70.m256i_i64[1];
  v73 = v70.m256i_i64[0];
  if ( v70.m256i_i64[2] < 0 )
  {
    v15 = 0;
    goto LABEL_12;
  }
  if ( v70.m256i_i64[2] )
  {
    nullsub_1(v13);
    v15 = 1;
    v21 = (__m128i *)sub_140001650(*((_QWORD *)&v14 + 1), 1);
    if ( !v21 )
    {
LABEL_12:
      v75 = 1;
      sub_141938D2B(v15, *((_QWORD *)&v14 + 1));
    }
    v22 = (__int64)v21;
    sub_1418F44E0(v21, (const __m128i *)v14, *((unsigned __int64 *)&v14 + 1));
  }
  else
  {
    v22 = 1;
  }
  LOBYTE(v54) = 3;
  v55 = *((const char **)&v14 + 1);
  *(_QWORD *)&v56 = v22;
  *((_QWORD *)&v56 + 1) = *((_QWORD *)&v14 + 1);
  v75 = 0;
  sub_140E72AA0(&v70, &v50, &v65, &v54);
  if ( v70.m256i_i8[0] != -1 )
    sub_14002F9D0(&v70);
  if ( v73 )
    sub_140001660(v71, v73, 1);
  *(_OWORD *)&v69[7] = v50;
  *(_QWORD *)&v69[23] = v51;
  v77 = 0;
  result = sub_14002F9D0(&v68);
  *(_BYTE *)a1 = 5;
  v33 = *(_OWORD *)&v69[15];
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v69;
  *(_OWORD *)(a1 + 16) = v33;
  return result;
}
