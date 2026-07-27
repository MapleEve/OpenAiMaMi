// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall collect_active_rollout_paths(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // r12
  _QWORD *v6; // r14
  __int64 *i; // rax
  __int64 *v8; // rsi
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  __int64 result; // rax
  __m128i *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  const __m128i *v23; // r14
  __m128i si128; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  _OWORD v30[7]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+90h] [rbp+10h]
  _QWORD *v32; // [rsp+98h] [rbp+18h]
  __int64 v33; // [rsp+A0h] [rbp+20h]
  __int64 v34; // [rsp+A8h] [rbp+28h]
  __int128 v35; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v36; // [rsp+C0h] [rbp+40h]
  __int64 v37; // [rsp+D0h] [rbp+50h]
  __int64 v38; // [rsp+D8h] [rbp+58h]
  __int128 v39; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v40; // [rsp+F0h] [rbp+70h]
  __int128 v41; // [rsp+100h] [rbp+80h]
  __int128 v42; // [rsp+110h] [rbp+90h]
  __m128i *v43; // [rsp+128h] [rbp+A8h]
  __int128 v44; // [rsp+130h] [rbp+B0h]
  __int64 v45; // [rsp+140h] [rbp+C0h]
  _BYTE v46[72]; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v47; // [rsp+190h] [rbp+110h]
  void *v48; // [rsp+198h] [rbp+118h]
  __int128 *v49; // [rsp+1A0h] [rbp+120h]
  __int64 v50; // [rsp+1A8h] [rbp+128h]
  __int128 v51; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v52; // [rsp+1C0h] [rbp+140h]
  __int128 v53; // [rsp+1D0h] [rbp+150h]
  __int128 v54; // [rsp+1E0h] [rbp+160h]
  __m128i v55; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v56; // [rsp+208h] [rbp+188h]
  __int128 v57; // [rsp+210h] [rbp+190h] BYREF
  __int128 v58; // [rsp+220h] [rbp+1A0h]
  __int128 v59; // [rsp+230h] [rbp+1B0h]
  __int128 v60; // [rsp+240h] [rbp+1C0h]
  __int128 v61; // [rsp+250h] [rbp+1D0h]
  __int128 v62; // [rsp+260h] [rbp+1E0h]
  __int128 v63; // [rsp+270h] [rbp+1F0h]
  __int128 v64; // [rsp+280h] [rbp+200h] BYREF
  __int128 *v65; // [rsp+290h] [rbp+210h]
  __int64 (__fastcall *v66)(); // [rsp+298h] [rbp+218h]
  __int64 v67; // [rsp+2A8h] [rbp+228h]
  __int128 *v68; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v69; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 *v70; // [rsp+2C0h] [rbp+240h]
  __int64 v71; // [rsp+2C8h] [rbp+248h]
  __int64 v72; // [rsp+2D0h] [rbp+250h]
  char v73; // [rsp+2DEh] [rbp+25Eh] BYREF
  char v74; // [rsp+2DFh] [rbp+25Fh]
  __int64 v75; // [rsp+2E0h] [rbp+260h]

  v75 = -2; /*0x1404aca0b*/
  v43 = a1; /*0x1404aca19*/
  v2 = sub_141470CD0(a1, a2); /*0x1404aca20*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x1404aca29*/
  {
    v3 = *(_QWORD *)v2; /*0x1404aca2f*/
    v4 = *(_QWORD *)(v2 + 8); /*0x1404aca32*/
  }
  else
  {
    v29 = v2; /*0x1404ad45c*/
    v3 = sub_141486EF0(); /*0x1404ad464*/
    v2 = v29; /*0x1404ad467*/
    *(_QWORD *)v29 = v3; /*0x1404ad46a*/
    *(_QWORD *)(v29 + 8) = v4; /*0x1404ad46d*/
    *(_BYTE *)(v29 + 16) = 1; /*0x1404ad471*/
  }
  *(_QWORD *)v2 = v3 + 1; /*0x1404aca3a*/
  v36 = xmmword_141757120; /*0x1404aca44*/
  v35 = *(_OWORD *)&off_141757110; /*0x1404aca4f*/
  v37 = v3; /*0x1404aca53*/
  v38 = v4; /*0x1404aca57*/
  v55.m128i_i64[0] = 0; /*0x1404aca5b*/
  v55.m128i_i64[1] = 8; /*0x1404aca66*/
  v56 = 0; /*0x1404aca71*/
  sub_140712830(&v57); /*0x1404aca86*/
  v31 = *((_QWORD *)&v57 + 1); /*0x1404acaa9*/
  v44 = v57; /*0x1404acaad*/
  v33 = v57; /*0x1404acab4*/
  v50 = *((_QWORD *)&v57 + 1) + 32 * v58; /*0x1404acab8*/
  v34 = v50; /*0x1404acabf*/
  v5 = 32 * v58 - 32; /*0x1404acad1*/
  v6 = (_QWORD *)(*((_QWORD *)&v57 + 1) + 40LL); /*0x1404acad5*/
  for ( i = *((__int64 **)&v57 + 1); i != (__int64 *)v50; i = v8 ) /*0x1404acae7*/
  {
    v8 = i + 4; /*0x1404acb08*/
    v32 = i + 4; /*0x1404acb0c*/
    v67 = *i; /*0x1404acb13*/
    if ( v67 == -1 ) /*0x1404acb1e*/
    {
      if ( (__int64 *)v50 != v8 ) /*0x1404ad304*/
      {
        v16 = v5 >> 5; /*0x1404ad306*/
        do /*0x1404ad317*/
        {
          v17 = *(v6 - 1); /*0x1404ad319*/
          if ( v17 ) /*0x1404ad320*/
            sub_140001660(*v6, v17, 1); /*0x1404ad32b*/
          v6 += 4; /*0x1404ad310*/
          --v16; /*0x1404ad314*/
        }
        while ( v16 ); /*0x1404ad317*/
      }
      break; /*0x1404ad317*/
    }
    v9 = i[2]; /*0x1404acb28*/
    v70 = (__int128 *)i[1]; /*0x1404acb2f*/
    sub_140429C50(&v57, v70, v9, 1); /*0x1404acb3f*/
    if ( BYTE8(v63) != 0xFF ) /*0x1404acb4c*/
    {
      v30[6] = v63; /*0x1404acb59*/
      v30[5] = v62; /*0x1404acb64*/
      v30[4] = v61; /*0x1404acb6f*/
      v30[3] = v60; /*0x1404acb8f*/
      v30[2] = v59; /*0x1404acb93*/
      v30[1] = v58; /*0x1404acb97*/
      v30[0] = v57; /*0x1404acb9b*/
      v51 = 0x1388u; /*0x1404acbaa*/
      *(_QWORD *)v46 = &v51; /*0x1404acbbc*/
      *(_QWORD *)&v46[8] = sub_1414A9600; /*0x1404acbca*/
      sub_14149C0F0(&v57, &unk_14175BB23, v46); /*0x1404acbe2*/
      v71 = *((_QWORD *)&v57 + 1); /*0x1404acc0b*/
      v72 = v57; /*0x1404acc0b*/
      sub_140FB96B0(&v57, v30, *((_QWORD *)&v57 + 1), v58); /*0x1404acc12*/
      if ( (_QWORD)v57 != -1 ) /*0x1404acc20*/
        sub_14043D020(&v57); /*0x1404acc25*/
      if ( v72 ) /*0x1404acc35*/
        sub_140001660(v71, v72, 1); /*0x1404acc44*/
      sub_14046F850(v46, v30, aSelectRolloutP, 74); /*0x1404acc62*/
      if ( v46[0] ) /*0x1404acc6f*/
      {
        v54 = *(_OWORD *)&v46[56]; /*0x1404acc84*/
        v53 = *(_OWORD *)&v46[40]; /*0x1404acc8b*/
        v52 = *(_OWORD *)&v46[24]; /*0x1404acc92*/
        v51 = *(_OWORD *)&v46[8]; /*0x1404acc99*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404accae*/
        {
          v68 = v70; /*0x1404accbb*/
          v69 = v9; /*0x1404accc2*/
          *(_QWORD *)&v64 = &v68; /*0x1404accd0*/
          *((_QWORD *)&v64 + 1) = sub_14148F3A0; /*0x1404accde*/
          v65 = &v51; /*0x1404accec*/
          v66 = sub_140FB8910; /*0x1404accfa*/
          *(_QWORD *)&v57 = 0; /*0x1404acd01*/
          *((_QWORD *)&v57 + 1) = aCodexmateLibCo_0; /*0x1404acd13*/
          v58 = 0x33u; /*0x1404acd1a*/
          *(_QWORD *)&v59 = aSrcCoreRelayCo_0; /*0x1404acd37*/
          *((_QWORD *)&v59 + 1) = 41; /*0x1404acd3e*/
          *(_QWORD *)&v60 = 2; /*0x1404acd49*/
          *((_QWORD *)&v60 + 1) = aCodexmateLibCo_0; /*0x1404acd54*/
          *(_QWORD *)&v61 = 51; /*0x1404acd5b*/
          *((_QWORD *)&v61 + 1) = 0x184E00000001LL; /*0x1404acd70*/
          *(_QWORD *)&v62 = &unk_14175BBC1; /*0x1404acd7e*/
          *((_QWORD *)&v62 + 1) = &v64; /*0x1404acd8c*/
          sub_1412C36A0(&v73, &v57); /*0x1404acd9d*/
        }
        sub_14043D020(&v51); /*0x1404acdaa*/
      }
      else
      {
        v42 = *(_OWORD *)&v46[56]; /*0x1404acf1f*/
        v41 = *(_OWORD *)&v46[40]; /*0x1404acf26*/
        v40 = *(_OWORD *)&v46[24]; /*0x1404acf2d*/
        v39 = *(_OWORD *)&v46[8]; /*0x1404acf31*/
        v10 = sub_1414B6B70(*(_QWORD *)&v46[64]); /*0x1404acf3c*/
        if ( !v10 ) /*0x1404acf46*/
        {
          v68 = &v39; /*0x1404ad0be*/
          v69 = 0; /*0x1404ad0c5*/
          while ( 1 ) /*0x1404ad0e7*/
          {
            sub_1404DE8F0(v46, &v68); /*0x1404ad0e7*/
            v11 = *(_QWORD *)v46; /*0x1404ad0ed*/
            if ( *(_QWORD *)v46 == -1 ) /*0x1404ad0f8*/
            {
              if ( !v69 /*0x1404ad1a3*/
                || (sub_14042B0E0(&v57, &v69, 0),
                    v12 = *((_QWORD *)&v57 + 1),
                    v11 = v57,
                    v64 = v58,
                    v52 = v60,
                    v51 = v59,
                    (_QWORD)v57 == -2) )
              {
                sub_14043CE10(&v68); /*0x1404ad2de*/
                sub_14043D1B0(&v39); /*0x1404ad2e8*/
                sub_14043C900(v30); /*0x1404ad2f2*/
                goto LABEL_24; /*0x1404ad2f8*/
              }
            }
            else
            {
              v12 = *(_QWORD *)&v46[8]; /*0x1404ad0fa*/
              v60 = *(_OWORD *)&v46[48]; /*0x1404ad10d*/
              v59 = *(_OWORD *)&v46[32]; /*0x1404ad111*/
              v58 = *(_OWORD *)&v46[16]; /*0x1404ad115*/
              v57 = *(_OWORD *)v46; /*0x1404ad118*/
              v64 = *(_OWORD *)&v46[16]; /*0x1404ad129*/
              v51 = *(_OWORD *)&v46[32]; /*0x1404ad138*/
              v52 = *(_OWORD *)&v46[48]; /*0x1404ad13f*/
            }
            v60 = v52; /*0x1404ad1b7*/
            v59 = v51; /*0x1404ad1bb*/
            *(_QWORD *)&v57 = v11; /*0x1404ad1bf*/
            *((_QWORD *)&v57 + 1) = v12; /*0x1404ad1c6*/
            v58 = v64; /*0x1404ad1d4*/
            if ( v11 == -1 ) /*0x1404ad1db*/
            {
              if ( v12 != -1 ) /*0x1404ad1e5*/
              {
                *(_OWORD *)&v46[8] = v64; /*0x1404ad1f2*/
                v72 = v12; /*0x1404ad1f5*/
                *(_QWORD *)v46 = v12; /*0x1404ad1fc*/
                v74 = 1; /*0x1404ad203*/
                sub_14149C500(&v57, v46); /*0x1404ad214*/
                v74 = 1; /*0x1404ad21a*/
                if ( (unsigned __int8)sub_140474440(&v35, &v57) ) /*0x1404ad228*/
                {
                  if ( v72 ) /*0x1404ad23c*/
                    sub_140001660(*(_QWORD *)&v46[8], v72, 1); /*0x1404ad24f*/
                }
                else
                {
                  v71 = *(_QWORD *)&v46[8]; /*0x1404ad260*/
                  v45 = *(_QWORD *)&v46[16]; /*0x1404ad26e*/
                  v13 = v56; /*0x1404ad275*/
                  if ( v56 == v55.m128i_i64[0] ) /*0x1404ad283*/
                    sub_1416890A0(&v55); /*0x1404ad28c*/
                  v14 = v55.m128i_i64[1]; /*0x1404ad292*/
                  v15 = 32 * v13; /*0x1404ad29c*/
                  *(_QWORD *)(v55.m128i_i64[1] + v15) = v72; /*0x1404ad2a7*/
                  *(_QWORD *)(v14 + v15 + 8) = v71; /*0x1404ad2b2*/
                  *(_QWORD *)(v14 + v15 + 16) = v45; /*0x1404ad2be*/
                  *(_BYTE *)(v14 + v15 + 24) = 1; /*0x1404ad2c3*/
                  v56 = v13 + 1; /*0x1404ad2cb*/
                }
              }
            }
            else
            {
              sub_14043D020(&v57); /*0x1404ad0d3*/
            }
          }
        }
        *(_OWORD *)v46 = 0x8000000000000013uLL; /*0x1404acf56*/
        *(_QWORD *)&v46[16] = v10; /*0x1404acf68*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404acf7d*/
        {
          *(_QWORD *)&v64 = v70; /*0x1404acf8a*/
          *((_QWORD *)&v64 + 1) = v9; /*0x1404acf91*/
          *(_QWORD *)&v51 = &v64; /*0x1404acf9f*/
          *((_QWORD *)&v51 + 1) = sub_14148F3A0; /*0x1404acfad*/
          *(_QWORD *)&v52 = v46; /*0x1404acfbb*/
          *((_QWORD *)&v52 + 1) = sub_140FB8910; /*0x1404acfc9*/
          *(_QWORD *)&v57 = 0; /*0x1404acfd0*/
          *((_QWORD *)&v57 + 1) = aCodexmateLibCo_0; /*0x1404acfe2*/
          v58 = 0x33u; /*0x1404acfe9*/
          *(_QWORD *)&v59 = aSrcCoreRelayCo_0; /*0x1404ad006*/
          *((_QWORD *)&v59 + 1) = 41; /*0x1404ad00d*/
          *(_QWORD *)&v60 = 2; /*0x1404ad018*/
          *((_QWORD *)&v60 + 1) = aCodexmateLibCo_0; /*0x1404ad023*/
          *(_QWORD *)&v61 = 51; /*0x1404ad02a*/
          *((_QWORD *)&v61 + 1) = 0x185800000001LL; /*0x1404ad03f*/
          *(_QWORD *)&v62 = &unk_14175BB88; /*0x1404ad04d*/
          *((_QWORD *)&v62 + 1) = &v51; /*0x1404ad05b*/
          sub_1412C36A0(&v73, &v57); /*0x1404ad06c*/
        }
        sub_14043D020(v46); /*0x1404ad079*/
        sub_14043D1B0(&v39); /*0x1404ad083*/
      }
      sub_14043C900(v30); /*0x1404ad08d*/
      goto LABEL_24; /*0x1404ad08d*/
    }
    v54 = v60; /*0x1404acddc*/
    v53 = v59; /*0x1404acde3*/
    v52 = v58; /*0x1404acdea*/
    v51 = v57; /*0x1404acdf1*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404ace06*/
    {
      *(_QWORD *)&v64 = v70; /*0x1404ace13*/
      *((_QWORD *)&v64 + 1) = v9; /*0x1404ace1a*/
      *(_QWORD *)&v39 = &v64; /*0x1404ace28*/
      *((_QWORD *)&v39 + 1) = sub_14148F3A0; /*0x1404ace33*/
      *(_QWORD *)&v40 = &v51; /*0x1404ace3e*/
      *((_QWORD *)&v40 + 1) = sub_140FB8910; /*0x1404ace49*/
      *(_QWORD *)v46 = 0; /*0x1404ace4d*/
      *(_QWORD *)&v46[8] = aCodexmateLibCo_0; /*0x1404ace5f*/
      *(_QWORD *)&v46[16] = 51; /*0x1404ace66*/
      *(_QWORD *)&v46[24] = 0; /*0x1404ace71*/
      *(_QWORD *)&v46[32] = aSrcCoreRelayCo_0; /*0x1404ace83*/
      *(_QWORD *)&v46[40] = 41; /*0x1404ace8a*/
      *(_QWORD *)&v46[48] = 2; /*0x1404ace95*/
      *(_QWORD *)&v46[56] = aCodexmateLibCo_0; /*0x1404acea0*/
      *(_QWORD *)&v46[64] = 51; /*0x1404acea7*/
      v47 = 0x183E00000001LL; /*0x1404acebc*/
      v48 = &unk_14175BBF6; /*0x1404aceca*/
      v49 = &v39; /*0x1404aced5*/
      sub_1412C36A0(&v73, v46); /*0x1404aceea*/
    }
    sub_14043D020(&v51); /*0x1404acef7*/
LABEL_24:
    if ( v67 ) /*0x1404ad09d*/
      sub_140001660(v70, v67, 1); /*0x1404ad0b0*/
    v5 -= 32LL; /*0x1404acaf0*/
    v6 += 4; /*0x1404acaf4*/
  }
  if ( (_QWORD)v44 ) /*0x1404ad33c*/
    sub_140001660(*((_QWORD *)&v44 + 1), 32 * v44, 8); /*0x1404ad34f*/
  result = v56; /*0x1404ad354*/
  v19 = v43; /*0x1404ad35b*/
  v43[1].m128i_i64[0] = v56; /*0x1404ad362*/
  *v19 = _mm_loadu_si128(&v55); /*0x1404ad36e*/
  v20 = *((_QWORD *)&v35 + 1); /*0x1404ad372*/
  if ( *((_QWORD *)&v35 + 1) ) /*0x1404ad379*/
  {
    v21 = *((_QWORD *)&v36 + 1); /*0x1404ad37f*/
    if ( *((_QWORD *)&v36 + 1) ) /*0x1404ad386*/
    {
      v22 = v35; /*0x1404ad38c*/
      v23 = (const __m128i *)(v35 + 16); /*0x1404ad394*/
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v35)); /*0x1404ad39d*/
      do /*0x1404ad3c0*/
      {
        if ( !(_WORD)_R15D ) /*0x1404ad3c6*/
        {
          do /*0x1404ad3ec*/
          {
            si128 = _mm_load_si128(v23); /*0x1404ad3d0*/
            v22 -= 384; /*0x1404ad3d5*/
            ++v23; /*0x1404ad3dc*/
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x1404ad3e5*/
          }
          while ( !_R15D ); /*0x1404ad3ec*/
        }
        __asm { tzcnt eax, r15d } /*0x1404ad3ee*/
        v26 = -3 * result; /*0x1404ad3f6*/
        v27 = *(_QWORD *)(v22 + 8 * v26 - 24); /*0x1404ad3fa*/
        if ( v27 ) /*0x1404ad402*/
          sub_140001660(*(_QWORD *)(v22 + 8 * v26 - 16), v27, 1); /*0x1404ad412*/
        --v21; /*0x1404ad3b0*/
        result = _R15D & (unsigned int)(_R15D - 1); /*0x1404ad3b7*/
        _R15D &= _R15D - 1; /*0x1404ad3ba*/
      }
      while ( v21 ); /*0x1404ad3c0*/
    }
    result = (24 * v20 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x1404ad425*/
    v28 = result + v20 + 17; /*0x1404ad42c*/
    if ( v28 ) /*0x1404ad430*/
      return sub_140001660(v35 - result, v28, 16); /*0x1404ad442*/
  }
  return result; /*0x1404ad448*/
}