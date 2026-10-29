// win 1.2.7 latest-exe | module src/core/relay/response_item_id_compat.rs | ea 0x1407408d0 | successor of pre-update 0x14026eb80 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.888, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1407408D0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // r15
  __int64 v11; // r13
  __int64 v12; // rbx
  __m128i v13; // xmm0
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // kr00_16
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  __int128 v24; // kr20_16
  __m128i v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rbx
  int v49; // r13d
  __int64 v50; // rbx
  __int64 *v51; // rdi
  __m128i *v52; // rax
  __int64 v53; // r13
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // r12
  char v59[8]; // [rsp+48h] [rbp-38h] BYREF
  char v60; // [rsp+50h] [rbp-30h] BYREF
  __m128i v61; // [rsp+60h] [rbp-20h]
  __m256i v62; // [rsp+70h] [rbp-10h] BYREF
  __int128 v63; // [rsp+90h] [rbp+10h]
  __int64 v64; // [rsp+A0h] [rbp+20h]
  _OWORD v65[2]; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v66; // [rsp+D0h] [rbp+50h]
  __int64 v67; // [rsp+E8h] [rbp+68h]
  __m128i v68; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v69; // [rsp+100h] [rbp+80h] BYREF
  __int128 v70; // [rsp+120h] [rbp+A0h]
  __int128 v71; // [rsp+130h] [rbp+B0h]
  __int128 v72; // [rsp+140h] [rbp+C0h]
  __int128 v73; // [rsp+150h] [rbp+D0h]
  __int64 v74; // [rsp+160h] [rbp+E0h]
  __int64 v75; // [rsp+170h] [rbp+F0h]
  __int64 v76; // [rsp+178h] [rbp+F8h]
  __int64 v77; // [rsp+180h] [rbp+100h]
  _BYTE v78[24]; // [rsp+188h] [rbp+108h] BYREF
  int v79; // [rsp+1A4h] [rbp+124h]
  __int64 v80; // [rsp+1A8h] [rbp+128h] BYREF
  __m256i v81; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v82; // [rsp+1D0h] [rbp+150h]
  __int64 v83; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v84; // [rsp+1E0h] [rbp+160h]
  __int64 v85; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v86; // [rsp+1F0h] [rbp+170h]
  __int64 v87; // [rsp+200h] [rbp+180h]
  __int64 v88; // [rsp+208h] [rbp+188h]
  _BYTE v89[96]; // [rsp+210h] [rbp+190h] BYREF
  __int64 v90; // [rsp+270h] [rbp+1F0h]
  __int64 v91; // [rsp+278h] [rbp+1F8h]
  __int64 v92; // [rsp+280h] [rbp+200h]
  __int64 v93; // [rsp+288h] [rbp+208h]
  __int64 v94; // [rsp+290h] [rbp+210h]
  __int64 v95; // [rsp+298h] [rbp+218h]
  __int64 v96; // [rsp+2A0h] [rbp+220h]

  v96 = -2;
  v8 = a3;
  if ( a3 < 2 )
  {
    if ( !a3 )
    {
      v91 = 1;
      LOBYTE(v6) = 1;
      v11 = 0;
      v8 = 0;
      goto LABEL_9;
    }
  }
  else if ( *(_WORD *)(a2 + a3 - 2) == 2573 )
  {
    v8 = a3 - 2;
    v91 = (__int64)asc_141A35494;
    v11 = 2;
    v6 = 0;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + a3 - 1) == 10 )
  {
    v8 = a3 - 1;
    v91 = (__int64)"\n}path contains invalid UTF-8 charactersfalsetrue";
    v11 = 1;
    v6 = 0;
  }
  else
  {
    v91 = 1;
    LOBYTE(v6) = 1;
    v11 = 0;
  }
LABEL_9:
  v12 = a6;
  if ( (!(unsigned __int8)sub_14073F1D0(a2, v8, aToolSearchCall, 16) || !(unsigned __int8)sub_14073F1D0(a2, v8, aTs, 3))
    && (!(unsigned __int8)sub_14073F1D0(a2, v8, aCustomToolCall, 16)
     || !(unsigned __int8)sub_14073F1D0(a2, v8, aCt, 3) && !(unsigned __int8)sub_14073F1D0(a2, v8, aFc, 3)) )
  {
    goto LABEL_27;
  }
  v75 = v11;
  sub_1416E2AB0(&v81, a2, v8);
  if ( v81.m256i_i32[0] == 1 )
  {
    v65[0] = *(_OWORD *)&v81.m256i_u64[1];
    *(_QWORD *)v78 = a4;
    *(_QWORD *)&v78[8] = a5;
    v69.m256i_i64[0] = (__int64)v78;
    v69.m256i_i64[1] = (__int64)sub_1416CE600;
    v69.m256i_i64[2] = (__int64)&a6;
    v69.m256i_i64[3] = (__int64)sub_1416EBAE0;
    *(_QWORD *)&v70 = v65;
    *((_QWORD *)&v70 + 1) = sub_1416EB760;
    sub_1416DAFA0(&v89[8], &unk_141A3ABED, &v69);
    v13 = _mm_loadu_si128((const __m128i *)&v89[8]);
    v14 = *(_OWORD *)&v89[40];
    v15 = *(_OWORD *)&v89[56];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v89[24];
    *(_OWORD *)(a1 + 40) = v14;
    *(_OWORD *)(a1 + 56) = v15;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v89[72];
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v89[88];
    *(_QWORD *)a1 = 9;
    *(__m128i *)(a1 + 8) = v13;
    return a1;
  }
  v16 = *(_OWORD *)&v81.m256i_u64[1];
  v85 = v12;
  *(_OWORD *)v89 = *(_OWORD *)&v81.m256i_u64[1];
  *(_OWORD *)&v89[16] = 0;
  *(_OWORD *)&v89[32] = *(_OWORD *)&v81.m256i_u64[1];
  sub_140D8B500(&v69, (__int128 *)v89);
  if ( v69.m256i_i8[0] == -1 )
  {
    v80 = v69.m256i_i64[1];
    v83 = a4;
    v84 = a5;
    *(_QWORD *)v89 = &v83;
    *(_QWORD *)&v89[8] = sub_1416CE600;
    *(_QWORD *)&v89[16] = &v85;
    *(_QWORD *)&v89[24] = sub_1416EBAE0;
    *(_QWORD *)&v89[32] = &v80;
    *(_QWORD *)&v89[40] = sub_14166FAD0;
    sub_1416DAFA0(v78, &unk_141A3ABBF, v89);
    v31 = *(_QWORD *)v78;
    v61 = *(__m128i *)&v78[8];
    sub_140032F30(&v80);
    v68 = v61;
    v32 = 9;
LABEL_30:
    v66 = _mm_load_si128(&v68);
    *(__m128i *)(a1 + 16) = v66;
    *(_QWORD *)a1 = v32;
    *(_QWORD *)(a1 + 8) = v31;
    return a1;
  }
  v81 = v69;
  v17 = sub_1416724D0(aType_6, 4, &v81);
  v79 = v6;
  v18 = -1;
  if ( v17 )
  {
    if ( *(_BYTE *)v17 == 3
      && *(_QWORD *)(v17 + 24) == 13
      && !(**(_QWORD **)(v17 + 16) ^ 0x65736E6F70736572LL
         | *(_QWORD *)(*(_QWORD *)(v17 + 16) + 5LL) ^ 0x6D6574695F65736ELL) )
    {
      v38 = sub_1416724D0(aPayload_2, 7, &v81);
      if ( v38 )
      {
        v39 = v38;
        v40 = sub_1416724D0(aType_6, 4, v38);
        if ( v40 )
        {
          if ( *(_BYTE *)v40 == 3 )
          {
            v41 = v39;
            v42 = *(_QWORD *)(v40 + 16);
            v95 = *(_QWORD *)(v40 + 24);
            v43 = sub_1416724D0(aId_3, 2, v41);
            if ( v43 )
            {
              if ( *(_BYTE *)v43 == 3 )
              {
                v44 = *(_QWORD *)(v43 + 16);
                *(_QWORD *)&v86 = *(_QWORD *)(v43 + 24);
                v92 = v44;
                sub_14073F750((unsigned int)v89, v42, v95, v44, v86);
                *((_QWORD *)&v86 + 1) = *(_QWORD *)v89;
                if ( *(_QWORD *)v89 != -1 )
                {
                  v94 = *(_QWORD *)&v89[8];
                  v76 = *(_QWORD *)&v89[16];
                  v45 = v86;
                  sub_1401E7560((unsigned int)v89, v86, 0, 1, 1);
                  v95 = *(_QWORD *)&v89[8];
                  if ( v89[0] )
                    sub_14196B2DB(v95, *(_QWORD *)&v89[16]);
                  v46 = *(_QWORD *)&v89[16];
                  v47 = v45;
                  if ( v45 )
                  {
                    v48 = *(_QWORD *)&v89[16];
                    sub_1419234B0(*(_QWORD *)&v89[16], v92, v86);
                    v47 = v86;
                    v46 = v48;
                  }
                  v92 = v46;
                  sub_1406C5370(v89, v46, v47);
                  if ( *(_QWORD *)v89 == -1 )
                  {
                    v32 = 3;
                    v31 = *(_QWORD *)&v89[8];
                    v56 = v94;
                    v57 = v95;
LABEL_68:
                    if ( v57 )
                    {
                      sub_140001660(v92, v57, 1);
                      v56 = v94;
                    }
                    if ( *((_QWORD *)&v86 + 1) )
                      sub_140001660(v56, *((_QWORD *)&v86 + 1), 1);
                    sub_1406C0ED0(&v81);
                    goto LABEL_30;
                  }
                  v49 = *(_DWORD *)&v89[16];
                  v93 = *(_QWORD *)v89;
                  *(_OWORD *)v78 = *(_OWORD *)v89;
                  v82 = *(_QWORD *)&v89[8];
                  *(_QWORD *)&v78[16] = *(_QWORD *)&v89[16];
                  sub_1406C5370(v89, v94, v76);
                  v88 = *(_QWORD *)v89;
                  if ( *(_QWORD *)v89 == -1 )
                  {
                    v32 = 3;
                    v31 = *(_QWORD *)&v89[8];
LABEL_65:
                    v57 = v95;
                    if ( v93 )
                      sub_140001660(v82, v93, 1);
                    v56 = v94;
                    goto LABEL_68;
                  }
                  v87 = *(_QWORD *)&v89[8];
                  v50 = *(_QWORD *)&v89[16];
                  sub_1416DB950(v89, v78, v16, *((_QWORD *)&v16 + 1));
                  v74 = v90;
                  v73 = *(_OWORD *)&v89[80];
                  v72 = *(_OWORD *)&v89[64];
                  v71 = *(_OWORD *)&v89[48];
                  v70 = *(_OWORD *)&v89[32];
                  v69 = *(__m256i *)v89;
                  sub_14076F380(v89, &v69);
                  if ( *(_DWORD *)v89 != 1 )
                  {
                    v83 = a4;
                    v84 = a5;
                    *(_QWORD *)v89 = &v83;
                    *(_QWORD *)&v89[8] = sub_1416CE600;
                    *(_QWORD *)&v89[16] = &v85;
                    *(_QWORD *)&v89[24] = sub_1416EBAE0;
                    v51 = (__int64 *)v59;
                    sub_1416DAFA0(v59, &unk_141A3F508, v89);
                    v52 = (__m128i *)&v60;
LABEL_63:
                    v31 = *v51;
                    v68 = *v52;
                    v32 = 9;
                    if ( v88 )
                      sub_140001660(v87, v88, 1);
                    goto LABEL_65;
                  }
                  v67 = *(_QWORD *)&v89[8];
                  sub_14076F380(v89, &v69);
                  if ( *(_DWORD *)v89 == 1 )
                  {
                    v83 = a4;
                    v84 = a5;
                    *(_QWORD *)v89 = &v83;
                    *(_QWORD *)&v89[8] = sub_1416CE600;
                    *(_QWORD *)&v89[16] = &v85;
                    *(_QWORD *)&v89[24] = sub_1416EBAE0;
                    v51 = (__int64 *)v65;
                    sub_1416DAFA0(v65, &unk_141A3F558, v89);
                    v52 = (__m128i *)((char *)v65 + 8);
                    goto LABEL_63;
                  }
                  sub_1401E7560((unsigned int)v89, DWORD2(v16), 0, 1, 1);
                  v77 = *(_QWORD *)&v89[8];
                  if ( *(_DWORD *)v89 == 1 )
                    sub_14196B2DB(v77, *(_QWORD *)&v89[16]);
                  v58 = *(_QWORD *)&v89[16];
                  if ( *((_QWORD *)&v16 + 1) )
                    sub_1419234B0(*(_QWORD *)&v89[16], v16, *((_QWORD *)&v16 + 1));
                  *(_QWORD *)v89 = v77;
                  *(_QWORD *)&v89[8] = v58;
                  *(_QWORD *)&v89[16] = *((_QWORD *)&v16 + 1);
                  sub_1401933A0((unsigned int)v89, v67, v67 + v49, v87, v50, (__int64)&off_141A3F540);
                  v18 = *(_QWORD *)v89;
                  v68 = *(__m128i *)&v89[8];
                  a4 = v85;
                  if ( v88 )
                    sub_140001660(v87, v88, 1);
                  if ( v93 )
                    sub_140001660(v82, v93, 1);
                  v6 = v76;
                }
              }
            }
          }
        }
      }
    }
  }
  sub_1406C0ED0(&v81);
  v66 = _mm_load_si128(&v68);
  if ( v18 == -1 )
  {
LABEL_27:
    *(_OWORD *)a1 = -1;
    return a1;
  }
  v81.m256i_i64[0] = v18;
  *(__m128i *)&v81.m256i_u64[1] = v66;
  v69.m256i_i64[0] = v95;
  v69.m256i_i64[1] = v92;
  *(_OWORD *)&v69.m256i_u64[2] = v86;
  v19 = *((_QWORD *)&v86 + 1);
  *(_QWORD *)&v70 = v94;
  *((_QWORD *)&v70 + 1) = v6;
  *(_QWORD *)&v71 = a4;
  sub_140A92690(v89, v16, *((_QWORD *)&v16 + 1), &v81);
  v23 = *(_QWORD *)&v89[8];
  v22 = *(_QWORD *)v89;
  v24 = *(_OWORD *)&v89[16];
  if ( *(_QWORD *)v89 != -1 )
  {
    v25 = _mm_loadu_si128((const __m128i *)&v89[32]);
    v26 = *(_OWORD *)&v89[48];
    v27 = *(_OWORD *)&v89[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v89[80];
    *(_OWORD *)(a1 + 64) = v27;
    *(_OWORD *)(a1 + 48) = v26;
    *(__m128i *)(a1 + 32) = v25;
    *(_QWORD *)(a1 + 8) = v23;
    *(_OWORD *)(a1 + 16) = v24;
    *(_QWORD *)a1 = v22;
    if ( v95 )
      sub_140001660(v92, v95, 1);
    if ( v19 )
    {
      v28 = v94;
      v29 = v19;
LABEL_59:
      sub_140001660(v28, v29, 1);
      return a1;
    }
    return a1;
  }
  v33 = v75 + *(_QWORD *)&v89[24];
  if ( v75 + *(_QWORD *)&v89[24] < 0 )
  {
    v95 = *(_QWORD *)&v89[8];
    v34 = 0;
    goto LABEL_33;
  }
  if ( v75 + *(_QWORD *)&v89[24] )
  {
    v95 = *(_QWORD *)&v89[8];
    nullsub_1(v21, v20);
    v34 = 1;
    v35 = sub_140001650(v33, 1);
    if ( !v35 )
    {
LABEL_33:
      v91 = v24;
      sub_14196B2DB(v34, v33);
    }
    if ( *((_QWORD *)&v24 + 1) )
    {
      v36 = v35;
      v37 = v24;
      sub_1419234B0(v35, v24, *((_QWORD *)&v24 + 1));
      v35 = v36;
    }
    else
    {
      v37 = v24;
    }
    v23 = v95;
  }
  else
  {
    v37 = *(_QWORD *)&v89[16];
    v35 = 1;
    v33 = 0;
  }
  if ( !(_BYTE)v79 )
  {
    v53 = v35;
    sub_1419234B0(v35 + *((_QWORD *)&v24 + 1), v91, v75);
    v35 = v53;
  }
  v64 = v71;
  v63 = v70;
  v62 = v69;
  *(_QWORD *)(a1 + 8) = v33;
  *(_QWORD *)(a1 + 16) = v35;
  *(_QWORD *)(a1 + 24) = v24 + *((_QWORD *)&v24 + 1);
  v54 = *(_OWORD *)&v62.m256i_u64[2];
  v55 = v63;
  *(__m128i *)(a1 + 32) = _mm_load_si128((const __m128i *)&v62);
  *(_OWORD *)(a1 + 48) = v54;
  *(_OWORD *)(a1 + 64) = v55;
  *(_QWORD *)(a1 + 80) = v64;
  *(_QWORD *)a1 = -1;
  if ( v23 )
  {
    v28 = v37;
    v29 = v23;
    goto LABEL_59;
  }
  return a1;
}
