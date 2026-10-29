// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | ea 0x14026eb80 | name sub_14026EB80
// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14026EB80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  __int64 result; // rax
  __m128i v14; // xmm0
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // kr00_16
  __int64 v18; // rax
  __int64 v19; // r13
  const __m128i *v20; // r13
  __int128 v21; // kr20_16
  __m128i v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // r12
  __m128i *v31; // rax
  char v32; // di
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // r8d
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rbx
  int v44; // ebx
  __int64 v45; // r13
  __int64 *v46; // rdi
  __m128i *v47; // rax
  bool v48; // zf
  unsigned __int64 v49; // rdi
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // r12
  char v55[8]; // [rsp+48h] [rbp-38h] BYREF
  char v56; // [rsp+50h] [rbp-30h] BYREF
  __m128i v57; // [rsp+60h] [rbp-20h]
  __m256i v58; // [rsp+70h] [rbp-10h] BYREF
  __int128 v59; // [rsp+90h] [rbp+10h]
  __int64 v60; // [rsp+A0h] [rbp+20h]
  _OWORD v61[2]; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v62; // [rsp+D0h] [rbp+50h]
  __int64 v63; // [rsp+E8h] [rbp+68h]
  __m128i v64; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v65; // [rsp+100h] [rbp+80h] BYREF
  __int128 v66; // [rsp+120h] [rbp+A0h]
  __int128 v67; // [rsp+130h] [rbp+B0h]
  __int128 v68; // [rsp+140h] [rbp+C0h]
  __int128 v69; // [rsp+150h] [rbp+D0h]
  __int64 v70; // [rsp+160h] [rbp+E0h]
  unsigned __int64 v71; // [rsp+170h] [rbp+F0h]
  __int64 v72; // [rsp+178h] [rbp+F8h]
  __int64 v73; // [rsp+180h] [rbp+100h]
  _BYTE v74[24]; // [rsp+188h] [rbp+108h] BYREF
  __int64 v75; // [rsp+1A0h] [rbp+120h] BYREF
  __m256i v76; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v77; // [rsp+1C8h] [rbp+148h]
  __int64 v78; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v79; // [rsp+1D8h] [rbp+158h]
  __int64 v80; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v81; // [rsp+1E8h] [rbp+168h]
  __int64 v82; // [rsp+1F0h] [rbp+170h]
  int v83; // [rsp+1FCh] [rbp+17Ch]
  __int64 v84; // [rsp+200h] [rbp+180h]
  __int64 v85; // [rsp+208h] [rbp+188h]
  _BYTE v86[96]; // [rsp+210h] [rbp+190h] BYREF
  __int64 v87; // [rsp+270h] [rbp+1F0h]
  __int64 v88; // [rsp+278h] [rbp+1F8h]
  __int128 v89; // [rsp+280h] [rbp+200h]
  __int64 v90; // [rsp+290h] [rbp+210h]
  __int64 v91; // [rsp+298h] [rbp+218h]
  __int64 v92; // [rsp+2A0h] [rbp+220h]

  v92 = -2;
  v8 = a3;
  if ( a3 < 2 )
  {
    if ( !a3 )
    {
      v88 = 1;
      LOBYTE(v6) = 1;
      v11 = 0;
      v8 = 0;
      goto LABEL_9;
    }
LABEL_5:
    if ( *(_BYTE *)(a2 + a3 - 1) == 10 )
    {
      v8 = a3 - 1;
      v88 = (__int64)asc_1419D6548;
      v11 = 1;
      v6 = 0;
    }
    else
    {
      v88 = 1;
      LOBYTE(v6) = 1;
      v11 = 0;
    }
    goto LABEL_9;
  }
  if ( *(_WORD *)(a2 + a3 - 2) != 2573 )
    goto LABEL_5;
  v8 = a3 - 2;
  v88 = (__int64)&unk_1419D79D2;
  v11 = 2;
  v6 = 0;
LABEL_9:
  v12 = a6;
  result = sub_14026D540(a2, v8);
  if ( !(_BYTE)result )
    goto LABEL_23;
  v71 = v11;
  sub_1416B3AE0(&v76, a2, v8);
  if ( v76.m256i_i32[0] == 1 )
  {
    v61[0] = *(_OWORD *)&v76.m256i_u64[1];
    *(_QWORD *)v74 = a4;
    *(_QWORD *)&v74[8] = a5;
    v65.m256i_i64[0] = (__int64)v74;
    v65.m256i_i64[1] = (__int64)sub_14169F630;
    v65.m256i_i64[2] = (__int64)&a6;
    v65.m256i_i64[3] = (__int64)sub_1416BCB10;
    *(_QWORD *)&v66 = v61;
    *((_QWORD *)&v66 + 1) = sub_1416BC790;
    sub_1416ABFD0(&v86[8], &unk_1419D7A54, &v65);
    v14 = _mm_loadu_si128((const __m128i *)&v86[8]);
    v15 = *(_OWORD *)&v86[40];
    v16 = *(_OWORD *)&v86[56];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v86[24];
    *(_OWORD *)(a1 + 40) = v15;
    *(_OWORD *)(a1 + 56) = v16;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v86[72];
    result = *(_QWORD *)&v86[88];
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v86[88];
    *(_QWORD *)a1 = 9;
    *(__m128i *)(a1 + 8) = v14;
    return result;
  }
  v17 = *(_OWORD *)&v76.m256i_u64[1];
  v80 = v12;
  *(_OWORD *)v86 = *(_OWORD *)&v76.m256i_u64[1];
  *(_OWORD *)&v86[16] = 0;
  *(_OWORD *)&v86[32] = *(_OWORD *)&v76.m256i_u64[1];
  sub_14062D280(&v65, v86);
  if ( v65.m256i_i8[0] == -1 )
  {
    v75 = v65.m256i_i64[1];
    v78 = a4;
    v79 = a5;
    *(_QWORD *)v86 = &v78;
    *(_QWORD *)&v86[8] = sub_14169F630;
    *(_QWORD *)&v86[16] = &v80;
    *(_QWORD *)&v86[24] = sub_1416BCB10;
    *(_QWORD *)&v86[32] = &v75;
    *(_QWORD *)&v86[40] = sub_14163CE40;
    sub_1416ABFD0(v74, &unk_1419D7A26, v86);
    v27 = *(_QWORD *)v74;
    v57 = *(__m128i *)&v74[8];
    result = sub_14002F910(&v75);
    v64 = v57;
    v28 = 9;
LABEL_26:
    v62 = _mm_load_si128(&v64);
    *(__m128i *)(a1 + 16) = v62;
    *(_QWORD *)a1 = v28;
    *(_QWORD *)(a1 + 8) = v27;
    return result;
  }
  v76 = v65;
  v18 = sub_1416419F0(aType_3, 4, &v76);
  v19 = -1;
  v83 = v6;
  if ( v18 )
  {
    if ( *(_BYTE *)v18 == 3
      && *(_QWORD *)(v18 + 24) == 13
      && !(**(_QWORD **)(v18 + 16) ^ 0x65736E6F70736572LL
         | *(_QWORD *)(*(_QWORD *)(v18 + 16) + 5LL) ^ 0x6D6574695F65736ELL) )
    {
      v34 = sub_1416419F0(aPayload_0, 7, &v76);
      if ( v34 )
      {
        v91 = v34;
        v35 = sub_1416419F0(aType_3, 4, v34);
        if ( v35 )
        {
          if ( *(_BYTE *)v35 == 3 )
          {
            v90 = *(_QWORD *)(v35 + 16);
            *(_QWORD *)&v89 = *(_QWORD *)(v35 + 24);
            v36 = sub_1416419F0(aId_0, 2, v91);
            if ( v36 )
            {
              if ( *(_BYTE *)v36 == 3 )
              {
                v37 = *(_QWORD *)(v36 + 16);
                *((_QWORD *)&v89 + 1) = *(_QWORD *)(v36 + 24);
                v38 = v89;
                *(_QWORD *)&v89 = v37;
                sub_14026D900((unsigned int)v86, v90, v38, v37, *((__int64 *)&v89 + 1));
                if ( *(_QWORD *)v86 != -1 )
                {
                  v90 = *(_QWORD *)&v86[8];
                  v39 = *(_QWORD *)v86;
                  v72 = *(_QWORD *)&v86[16];
                  v40 = *((_QWORD *)&v89 + 1);
                  sub_14072C410((unsigned int)v86, DWORD2(v89), 0, 1, 1);
                  v91 = *(_QWORD *)&v86[8];
                  v81 = v39;
                  if ( v86[0] )
                    sub_141938D2B(v91, *(_QWORD *)&v86[16]);
                  v41 = *(_QWORD *)&v86[16];
                  v42 = v40;
                  if ( v40 )
                  {
                    v43 = *(_QWORD *)&v86[16];
                    sub_1418F44E0(*(__m128i **)&v86[16], (const __m128i *)v89, *((unsigned __int64 *)&v89 + 1));
                    v42 = *((_QWORD *)&v89 + 1);
                    v41 = v43;
                  }
                  *(_QWORD *)&v89 = v41;
                  sub_1401978D0(v86, v41, v42);
                  if ( *(_QWORD *)v86 == -1 )
                  {
                    v28 = 3;
                    v27 = *(_QWORD *)&v86[8];
                    v52 = v90;
                    v53 = v91;
LABEL_62:
                    if ( v53 )
                    {
                      sub_140001660(v89, v53, 1);
                      v52 = v90;
                    }
                    if ( v81 )
                      sub_140001660(v52, v81, 1);
                    result = sub_14002F9D0(&v76);
                    goto LABEL_26;
                  }
                  v44 = *(_DWORD *)&v86[16];
                  v84 = *(_QWORD *)v86;
                  *(_OWORD *)v74 = *(_OWORD *)v86;
                  v77 = *(_QWORD *)&v86[8];
                  *(_QWORD *)&v74[16] = *(_QWORD *)&v86[16];
                  sub_1401978D0(v86, v90, v72);
                  v85 = *(_QWORD *)v86;
                  if ( *(_QWORD *)v86 == -1 )
                  {
                    v28 = 3;
                    v27 = *(_QWORD *)&v86[8];
LABEL_59:
                    v53 = v91;
                    if ( v84 )
                      sub_140001660(v77, v84, 1);
                    v52 = v90;
                    goto LABEL_62;
                  }
                  v82 = *(_QWORD *)&v86[8];
                  v45 = *(_QWORD *)&v86[16];
                  sub_1416AC980(v86, v74, v17, *((_QWORD *)&v17 + 1));
                  v70 = v87;
                  v69 = *(_OWORD *)&v86[80];
                  v68 = *(_OWORD *)&v86[64];
                  v67 = *(_OWORD *)&v86[48];
                  v66 = *(_OWORD *)&v86[32];
                  v65 = *(__m256i *)v86;
                  sub_140292200(v86, &v65);
                  if ( *(_DWORD *)v86 != 1 )
                  {
                    v78 = a4;
                    v79 = a5;
                    *(_QWORD *)v86 = &v78;
                    *(_QWORD *)&v86[8] = sub_14169F630;
                    *(_QWORD *)&v86[16] = &v80;
                    *(_QWORD *)&v86[24] = sub_1416BCB10;
                    v46 = (__int64 *)v55;
                    sub_1416ABFD0(v55, &unk_1419E0C90, v86);
                    v47 = (__m128i *)&v56;
LABEL_57:
                    v27 = *v46;
                    v64 = *v47;
                    v28 = 9;
                    if ( v85 )
                      sub_140001660(v82, v85, 1);
                    goto LABEL_59;
                  }
                  v63 = *(_QWORD *)&v86[8];
                  sub_140292200(v86, &v65);
                  if ( *(_DWORD *)v86 == 1 )
                  {
                    v78 = a4;
                    v79 = a5;
                    *(_QWORD *)v86 = &v78;
                    *(_QWORD *)&v86[8] = sub_14169F630;
                    *(_QWORD *)&v86[16] = &v80;
                    *(_QWORD *)&v86[24] = sub_1416BCB10;
                    v46 = (__int64 *)v61;
                    sub_1416ABFD0(v61, &unk_1419E0CE0, v86);
                    v47 = (__m128i *)((char *)v61 + 8);
                    goto LABEL_57;
                  }
                  sub_14072C410((unsigned int)v86, DWORD2(v17), 0, 1, 1);
                  v73 = *(_QWORD *)&v86[8];
                  if ( *(_DWORD *)v86 == 1 )
                    sub_141938D2B(v73, *(_QWORD *)&v86[16]);
                  v54 = *(_QWORD *)&v86[16];
                  if ( *((_QWORD *)&v17 + 1) )
                    sub_1418F44E0(*(__m128i **)&v86[16], (const __m128i *)v17, *((unsigned __int64 *)&v17 + 1));
                  *(_QWORD *)v86 = v73;
                  *(_QWORD *)&v86[8] = v54;
                  *(_QWORD *)&v86[16] = *((_QWORD *)&v17 + 1);
                  sub_14061CD30((unsigned int)v86, v63, v63 + v44, v82, v45, (__int64)&off_1419E0CC8);
                  v19 = *(_QWORD *)v86;
                  v64 = *(__m128i *)&v86[8];
                  a4 = v80;
                  if ( v85 )
                    sub_140001660(v82, v85, 1);
                  if ( v84 )
                    sub_140001660(v77, v84, 1);
                  v12 = v81;
                  v6 = v72;
                }
              }
            }
          }
        }
      }
    }
  }
  result = sub_14002F9D0(&v76);
  v62 = _mm_load_si128(&v64);
  if ( v19 == -1 )
  {
LABEL_23:
    *(_OWORD *)a1 = -1;
    return result;
  }
  v76.m256i_i64[0] = v19;
  *(__m128i *)&v76.m256i_u64[1] = v62;
  v65.m256i_i64[0] = v91;
  *(_OWORD *)&v65.m256i_u64[1] = v89;
  v65.m256i_i64[3] = v12;
  *(_QWORD *)&v66 = v90;
  *((_QWORD *)&v66 + 1) = v6;
  *(_QWORD *)&v67 = a4;
  sub_1402815E0(v86, v17, *((_QWORD *)&v17 + 1), &v76);
  v20 = *(const __m128i **)&v86[8];
  result = *(_QWORD *)v86;
  v21 = *(_OWORD *)&v86[16];
  if ( *(_QWORD *)v86 != -1 )
  {
    v22 = _mm_loadu_si128((const __m128i *)&v86[32]);
    v23 = *(_OWORD *)&v86[48];
    v24 = *(_OWORD *)&v86[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v86[80];
    *(_OWORD *)(a1 + 64) = v24;
    *(_OWORD *)(a1 + 48) = v23;
    *(__m128i *)(a1 + 32) = v22;
    *(_QWORD *)(a1 + 8) = v20;
    *(_OWORD *)(a1 + 16) = v21;
    *(_QWORD *)a1 = result;
    if ( v91 )
      result = sub_140001660(v89, v91, 1);
    if ( v12 )
    {
      v25 = v90;
      v26 = v12;
      return sub_140001660(v25, v26, 1);
    }
    return result;
  }
  v29 = v71 + *(_QWORD *)&v86[24];
  *((_QWORD *)&v89 + 1) = *(_QWORD *)&v86[16];
  if ( (__int64)(v71 + *(_QWORD *)&v86[24]) < 0 )
  {
    v30 = 0;
    goto LABEL_29;
  }
  if ( v71 + *(_QWORD *)&v86[24] )
  {
    nullsub_1(*(_QWORD *)&v86[16]);
    v30 = 1;
    v31 = (__m128i *)sub_140001650(v29, 1);
    v32 = v83;
    if ( !v31 )
    {
LABEL_29:
      v88 = (__int64)v20;
      sub_141938D2B(v30, v29);
    }
    v33 = (__int64)v31;
    if ( *((_QWORD *)&v21 + 1) )
      sub_1418F44E0(v31, *((const __m128i **)&v89 + 1), *((unsigned __int64 *)&v21 + 1));
  }
  else
  {
    v33 = 1;
    v29 = 0;
    v32 = v83;
  }
  v48 = v32 == 0;
  v49 = v71;
  if ( v48 )
    sub_1418F44E0((__m128i *)(v33 + *((_QWORD *)&v21 + 1)), (const __m128i *)v88, v71);
  v60 = v67;
  v59 = v66;
  v58 = v65;
  *(_QWORD *)(a1 + 8) = v29;
  *(_QWORD *)(a1 + 16) = v33;
  *(_QWORD *)(a1 + 24) = v49 + *((_QWORD *)&v21 + 1);
  v50 = *(_OWORD *)&v58.m256i_u64[2];
  v51 = v59;
  *(__m128i *)(a1 + 32) = _mm_load_si128((const __m128i *)&v58);
  *(_OWORD *)(a1 + 48) = v50;
  *(_OWORD *)(a1 + 64) = v51;
  result = v60;
  *(_QWORD *)(a1 + 80) = v60;
  *(_QWORD *)a1 = -1;
  if ( v20 )
  {
    v25 = *((_QWORD *)&v89 + 1);
    v26 = (__int64)v20;
    return sub_140001660(v25, v26, 1);
  }
  return result;
}
