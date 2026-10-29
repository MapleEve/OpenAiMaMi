// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_observation::AuthObservationTracker::poll::h115271a2edddd2d4; addr: 0x100987560; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
__int64 __fastcall codexmate_lib::core::account_observation::AuthObservationTracker::poll::h115271a2edddd2d4(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        double a7)
{
  const void *v8; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r8
  int v14; // r15d
  int v15; // esi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  _BYTE *v24; // rsi
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // esi
  char v30; // al
  __m128i v31; // xmm0
  unsigned __int64 v32; // r15
  int v33; // r13d
  size_t v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r13
  _QWORD *v39; // r14
  _QWORD v40[30]; // [rsp+8h] [rbp-358h] BYREF
  _QWORD v41[12]; // [rsp+F8h] [rbp-268h] BYREF
  __int64 v42; // [rsp+158h] [rbp-208h] BYREF
  _QWORD v43[12]; // [rsp+160h] [rbp-200h] BYREF
  _BYTE __src[136]; // [rsp+1C0h] [rbp-1A0h] BYREF
  unsigned __int64 v45; // [rsp+248h] [rbp-118h] BYREF
  int v46; // [rsp+250h] [rbp-110h]
  __int64 v47; // [rsp+258h] [rbp-108h]
  __int64 v48; // [rsp+260h] [rbp-100h]
  _QWORD v49[3]; // [rsp+268h] [rbp-F8h] BYREF
  _QWORD v50[3]; // [rsp+280h] [rbp-E0h] BYREF
  _QWORD v51[3]; // [rsp+298h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+2B0h] [rbp-B0h]
  __int64 v53; // [rsp+2B8h] [rbp-A8h]
  __int64 v54; // [rsp+2C0h] [rbp-A0h]
  __int64 v55; // [rsp+2C8h] [rbp-98h]
  __int64 v56; // [rsp+2D0h] [rbp-90h]
  __int64 v57; // [rsp+2D8h] [rbp-88h]
  __int64 v58; // [rsp+2E0h] [rbp-80h]
  __int64 v59; // [rsp+2E8h] [rbp-78h]
  __int64 v60; // [rsp+2F0h] [rbp-70h]
  int v61; // [rsp+2FCh] [rbp-64h]
  __int64 v62; // [rsp+300h] [rbp-60h]
  __int64 v63; // [rsp+308h] [rbp-58h]
  __int64 v64; // [rsp+310h] [rbp-50h]
  __int64 v65; // [rsp+318h] [rbp-48h]
  __int64 v66; // [rsp+320h] [rbp-40h]
  unsigned __int64 v67; // [rsp+328h] [rbp-38h]
  void *v68; // [rsp+330h] [rbp-30h]

  v8 = (const void *)a3; /*0x100987577*/
  v67 = a5; /*0x100987580*/
  v45 = a5; /*0x100987584*/
  LODWORD(v63) = a6; /*0x10098758b*/
  v46 = a6; /*0x10098758f*/
  codexmate_lib::core::account_observation::AuthFileStamp::read::h437582f2c2e96a88((__int64)&v42, a3, a4); /*0x1009875a3*/
  v11 = v42; /*0x1009875a8*/
  v12 = v43[0]; /*0x1009875af*/
  v13 = v43[1]; /*0x1009875b6*/
  v14 = v43[2]; /*0x1009875bd*/
  v15 = HIDWORD(v43[2]); /*0x1009875c4*/
  if ( v42 == 11 ) /*0x1009875ce*/
  {
    v65 = *a2; /*0x1009875d8*/
    v68 = a2; /*0x1009875e0*/
    if ( v65 != 3 ) /*0x1009875e4*/
    {
      v16 = *((_DWORD *)a2 + 64); /*0x1009875e6*/
      if ( (v16 != 1000000000) == (LODWORD(v43[2]) != 1000000000) /*0x10098783f*/
        && (LODWORD(v43[2]) == 1000000000
         || v16 == 1000000000
         || a2[30] == v43[0] && v16 == LODWORD(v43[2]) && a2[31] == v43[1]) )
      {
        v24 = (_BYTE *)a2[33]; /*0x100987845*/
        v25 = &v45; /*0x100987855*/
        if ( std::time::Instant::saturating_duration_since::h410d6264cd78ba4e(&v45, v24) /*0x10098786c*/
          || (unsigned int)v26 >= 0x1DCD6500 )
        {
          if ( *((_DWORD *)a2 + 70) == 3 ) /*0x10098787b*/
          {
            if ( *((_BYTE *)a2 + 200) == 1 ) /*0x10098788a*/
            {
LABEL_56:
              v43[2] = *(__int64 *)((char *)a2 + 225); /*0x100987af5*/
              v43[1] = *(__int64 *)((char *)a2 + 217); /*0x100987b0c*/
              v36 = *(__int64 *)((char *)a2 + 201); /*0x100987b13*/
              v27 = *(__int64 *)((char *)a2 + 209); /*0x100987b1b*/
              v43[0] = v27; /*0x100987b23*/
              v42 = v36; /*0x100987b2a*/
              LOBYTE(v28) = 1; /*0x100987b31*/
              v32 = 0x8000000000000000LL; /*0x100987b34*/
              if ( __OFSUB__(0, a2[22]) ) /*0x100987b40*/
              {
LABEL_57:
                v34 = 0x8000000000000000LL; /*0x100987b4e*/
                LOBYTE(v37) = v65; /*0x100987b51*/
                v38 = v65; /*0x100987b55*/
                if ( (_DWORD)v65 == 2 ) /*0x100987b5b*/
                {
LABEL_70:
                  *(_QWORD *)(a1 + 225) = v43[2]; /*0x100987d1c*/
                  *(_QWORD *)(a1 + 217) = v43[1]; /*0x100987d31*/
                  *(_QWORD *)(a1 + 209) = v43[0]; /*0x100987d3f*/
                  *(_QWORD *)(a1 + 201) = v42; /*0x100987d4d*/
                  *(_QWORD *)a1 = v38; /*0x100987d54*/
                  *(_QWORD *)(a1 + 8) = v25; /*0x100987d57*/
                  *(_QWORD *)(a1 + 32) = v54; /*0x100987d62*/
                  *(_QWORD *)(a1 + 24) = v53; /*0x100987d6d*/
                  *(_QWORD *)(a1 + 16) = v52; /*0x100987d78*/
                  *(_QWORD *)(a1 + 40) = v55; /*0x100987d83*/
                  *(_QWORD *)(a1 + 48) = v56; /*0x100987d8e*/
                  *(_QWORD *)(a1 + 56) = v57; /*0x100987d99*/
                  *(_QWORD *)(a1 + 72) = v59; /*0x100987da1*/
                  *(_QWORD *)(a1 + 64) = v58; /*0x100987da9*/
                  *(_QWORD *)(a1 + 80) = v60; /*0x100987db1*/
                  *(_QWORD *)(a1 + 88) = v67; /*0x100987db9*/
                  *(_QWORD *)(a1 + 96) = v64; /*0x100987dc1*/
                  *(_QWORD *)(a1 + 104) = v65; /*0x100987dc9*/
                  *(_QWORD *)(a1 + 112) = v8; /*0x100987dcd*/
                  *(_QWORD *)(a1 + 120) = v66; /*0x100987dd5*/
                  *(_QWORD *)(a1 + 128) = v62; /*0x100987ddd*/
                  *(_QWORD *)(a1 + 136) = v32; /*0x100987de4*/
                  *(_QWORD *)(a1 + 144) = v47; /*0x100987df2*/
                  *(_QWORD *)(a1 + 152) = v48; /*0x100987e00*/
                  *(_QWORD *)(a1 + 160) = v26; /*0x100987e07*/
                  *(_BYTE *)(a1 + 168) = v27; /*0x100987e0e*/
                  *(_BYTE *)(a1 + 169) = (_BYTE)v24; /*0x100987e14*/
                  *(_BYTE *)(a1 + 170) = v37; /*0x100987e1b*/
                  *(_QWORD *)(a1 + 176) = v34; /*0x100987e21*/
                  *(_QWORD *)(a1 + 184) = v63; /*0x100987e2c*/
                  *(_QWORD *)(a1 + 192) = v34; /*0x100987e33*/
                  *(_BYTE *)(a1 + 200) = v28; /*0x100987e3a*/
                  return a1; /*0x100987e41*/
                }
LABEL_61:
                v61 = v28; /*0x100987b8b*/
                v39 = v68; /*0x100987b8f*/
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100987b9e*/
                  v51,
                  (char *)v68 + 16);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v50, v39 + 5); /*0x100987bae*/
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v49, v39 + 8); /*0x100987bbe*/
                if ( v39[11] == 0x8000000000000000LL ) /*0x100987bc7*/
                {
                  v67 = 0x8000000000000000LL; /*0x100987bc9*/
                }
                else
                {
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v41, v39 + 11); /*0x100987bda*/
                  v67 = v41[0]; /*0x100987be6*/
                  v64 = v41[1]; /*0x100987bf1*/
                  v65 = v41[2]; /*0x100987bfc*/
                }
                if ( *((_QWORD *)v68 + 14) == 0x8000000000000000LL ) /*0x100987c08*/
                {
                  v8 = (const void *)0x8000000000000000LL; /*0x100987c0a*/
                }
                else
                {
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100987c1a*/
                    v41,
                    (char *)v68 + 112);
                  v8 = (const void *)v41[0]; /*0x100987c1f*/
                  v66 = v41[1]; /*0x100987c2d*/
                  v62 = v41[2]; /*0x100987c38*/
                }
                v24 = v68; /*0x100987c3c*/
                if ( *((_QWORD *)v68 + 17) != 0x8000000000000000LL ) /*0x100987c47*/
                {
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100987c57*/
                    v41,
                    (char *)v68 + 136);
                  v32 = v41[0]; /*0x100987c5c*/
                  v47 = v41[1]; /*0x100987c6a*/
                  v48 = v41[2]; /*0x100987c78*/
                  v24 = v68; /*0x100987c7f*/
                }
                LOBYTE(v37) = v24[170]; /*0x100987c83*/
                LOBYTE(v27) = v24[168]; /*0x100987c8a*/
                v25 = *((_QWORD **)v24 + 1); /*0x100987c91*/
                v26 = *((_QWORD *)v24 + 20); /*0x100987c95*/
                LOBYTE(v24) = v24[169]; /*0x100987c9c*/
                v54 = v51[2]; /*0x100987caa*/
                v53 = v51[1]; /*0x100987cbf*/
                v52 = v51[0]; /*0x100987cc6*/
                v55 = v50[0]; /*0x100987cdb*/
                v56 = v50[1]; /*0x100987ce2*/
                v57 = v50[2]; /*0x100987cf0*/
                v58 = v49[0]; /*0x100987d05*/
                v59 = v49[1]; /*0x100987d09*/
                v60 = v49[2]; /*0x100987d14*/
                LOBYTE(v28) = v61; /*0x100987d18*/
                goto LABEL_70; /*0x100987d18*/
              }
LABEL_52:
              v33 = v28; /*0x100987aa9*/
              v8 = (const void *)a2[23]; /*0x100987aac*/
              v34 = a2[24]; /*0x100987ab4*/
              if ( v34 ) /*0x100987abf*/
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v45, v24, v26); /*0x100987ac5*/
                v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v34, 1); /*0x100987ad2*/
                if ( !v35 ) /*0x100987ada*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v34); /*0x100987ae8*/
              }
              else
              {
                v35 = 1; /*0x100987b62*/
              }
              v63 = v35; /*0x100987b67*/
              v25 = (_QWORD *)v35; /*0x100987b6b*/
              LOBYTE(v24) = (_BYTE)v8; /*0x100987b6e*/
              memcpy((void *)v35, v8, v34); /*0x100987b74*/
              v37 = *(_QWORD *)v68; /*0x100987b7d*/
              v28 = v33; /*0x100987b80*/
              v38 = *(_QWORD *)v68; /*0x100987b83*/
              if ( (unsigned int)*(_QWORD *)v68 == 2 ) /*0x100987b89*/
                goto LABEL_70; /*0x100987b89*/
              goto LABEL_61; /*0x100987b89*/
            }
LABEL_51:
            v28 = 0; /*0x100987a8c*/
            v32 = 0x8000000000000000LL; /*0x100987a8f*/
            if ( __OFSUB__(0, a2[22]) ) /*0x100987aa3*/
              goto LABEL_57; /*0x100987aa3*/
            goto LABEL_52; /*0x100987aa3*/
          }
          v30 = *((_BYTE *)a2 + 200); /*0x100987a33*/
          if ( *((_BYTE *)a2 + 480) == 1 ) /*0x100987a45*/
          {
            if ( !v30 ) /*0x100987a4d*/
              goto LABEL_51; /*0x100987a4d*/
            v31 = _mm_or_si128( /*0x100987a7f*/
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)((char *)a2 + 497)),
                      _mm_loadu_si128((const __m128i *)((char *)a2 + 217))),
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)((char *)a2 + 481)),
                      _mm_loadu_si128((const __m128i *)((char *)a2 + 201))));
            if ( !_mm_testz_si128(v31, v31) ) /*0x100987a88*/
              goto LABEL_56; /*0x100987a88*/
          }
          else if ( v30 ) /*0x100987aef*/
          {
            goto LABEL_56; /*0x100987aef*/
          }
        }
        goto LABEL_46; /*0x100987a88*/
      }
    }
    v64 = v43[1]; /*0x100987608*/
    v66 = v43[0]; /*0x10098760c*/
    LODWORD(v62) = HIDWORD(v43[2]); /*0x100987610*/
    codexmate_lib::core::account_observation::AuthObservation::read::hee36ca1fcea17c52(&v42, (__int64)v8, a4); /*0x100987620*/
    qmemcpy(v41, v43, sizeof(v41)); /*0x10098763f*/
    if ( v42 == 3 ) /*0x100987646*/
    {
      qmemcpy((void *)(a1 + 8), v41, 0x60u); /*0x10098765c*/
      *(_QWORD *)a1 = 4; /*0x10098765f*/
      a2 = (__int64 *)v68; /*0x100987666*/
    }
    else
    {
      memcpy(&v40[13], __src, 0x88u); /*0x100987748*/
      qmemcpy(&v40[1], v41, 0x60u); /*0x100987760*/
      v40[0] = v42; /*0x100987763*/
      codexmate_lib::core::account_observation::AuthFileStamp::read::h437582f2c2e96a88((__int64)&v42, (__int64)v8, a4); /*0x100987777*/
      v19 = v42; /*0x10098777c*/
      v20 = v43[0]; /*0x100987783*/
      v21 = v43[1]; /*0x10098778a*/
      v22 = v43[2]; /*0x100987791*/
      a2 = (__int64 *)v68; /*0x10098779b*/
      if ( v42 == 11 ) /*0x1009877a3*/
      {
        if ( (LODWORD(v43[2]) != 1000000000) == (v14 != 1000000000) /*0x100987994*/
          && (v14 == 1000000000
           || LODWORD(v43[2]) == 1000000000
           || v43[0] == v66 && v43[1] == v64 && LODWORD(v43[2]) == v14) )
        {
          if ( (_DWORD)v65 != 3 ) /*0x1009879a3*/
          {
            if ( !__OFSUB__(-*((_QWORD *)v68 + 22), 1) && *((_QWORD *)v68 + 22) ) /*0x1009879ad*/
              a7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v68 + 23), *((_QWORD *)v68 + 22), 1); /*0x1009879c4*/
            core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..AuthSnapshot$GT$$GT$::hdf3848feccc703ef( /*0x1009879cc*/
              a2,
              a7);
          }
          memcpy(a2, v40, 0xF0u); /*0x1009879e0*/
          a2[30] = v66; /*0x1009879e9*/
          a2[31] = v64; /*0x1009879f5*/
          *((_DWORD *)a2 + 64) = v14; /*0x1009879fd*/
          *((_DWORD *)a2 + 65) = v62; /*0x100987a08*/
          a2[33] = v67; /*0x100987a14*/
          *((_DWORD *)a2 + 68) = v63; /*0x100987a1f*/
LABEL_46:
          *(_QWORD *)a1 = 3; /*0x100987a27*/
          return a1; /*0x100987a2e*/
        }
        if ( (_DWORD)v65 != 3 ) /*0x1009877ca*/
        {
          if ( !__OFSUB__(-*((_QWORD *)v68 + 22), 1) && *((_QWORD *)v68 + 22) ) /*0x1009877d4*/
            a7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v68 + 23), *((_QWORD *)v68 + 22), 1); /*0x1009877eb*/
          core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..AuthSnapshot$GT$$GT$::hdf3848feccc703ef( /*0x1009877f3*/
            a2,
            a7);
        }
        *a2 = 3; /*0x1009877f8*/
        v23 = 3; /*0x100987800*/
      }
      else
      {
        v29 = HIDWORD(v43[2]); /*0x100987895*/
        *(_QWORD *)(a1 + 96) = v43[10]; /*0x1009878a2*/
        *(_QWORD *)(a1 + 88) = v43[9]; /*0x1009878ad*/
        *(_QWORD *)(a1 + 80) = v43[8]; /*0x1009878b8*/
        *(_QWORD *)(a1 + 72) = v43[7]; /*0x1009878c3*/
        *(_QWORD *)(a1 + 64) = v43[6]; /*0x1009878ce*/
        *(_QWORD *)(a1 + 56) = v43[5]; /*0x1009878d9*/
        *(_QWORD *)(a1 + 48) = v43[4]; /*0x1009878e4*/
        *(_QWORD *)(a1 + 40) = v43[3]; /*0x1009878ef*/
        *(_QWORD *)(a1 + 8) = v19; /*0x1009878f3*/
        *(_QWORD *)(a1 + 16) = v20; /*0x1009878f7*/
        *(_QWORD *)(a1 + 24) = v21; /*0x1009878fb*/
        *(_DWORD *)(a1 + 32) = v22; /*0x1009878ff*/
        *(_DWORD *)(a1 + 36) = v29; /*0x100987902*/
        v23 = 4; /*0x100987905*/
      }
      *(_QWORD *)a1 = v23; /*0x10098790a*/
      if ( 2LL * v40[22] ) /*0x100987914*/
      {
        a7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40[23], v40[22], 1); /*0x100987948*/
        core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..AuthSnapshot$GT$$GT$::hdf3848feccc703ef( /*0x100987954*/
          v40,
          a7);
        if ( (_DWORD)v19 == 11 ) /*0x10098795d*/
          return a1; /*0x10098795d*/
      }
      else
      {
        core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..AuthSnapshot$GT$$GT$::hdf3848feccc703ef( /*0x100987928*/
          v40,
          a7);
        if ( (_DWORD)v19 == 11 ) /*0x100987931*/
          return a1; /*0x100987931*/
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 96) = v43[10]; /*0x100987673*/
    *(_QWORD *)(a1 + 88) = v43[9]; /*0x10098767e*/
    *(_QWORD *)(a1 + 80) = v43[8]; /*0x100987689*/
    *(_QWORD *)(a1 + 72) = v43[7]; /*0x100987694*/
    *(_QWORD *)(a1 + 64) = v43[6]; /*0x10098769f*/
    *(_QWORD *)(a1 + 56) = v43[5]; /*0x1009876aa*/
    v17 = v43[3]; /*0x1009876ae*/
    *(_QWORD *)(a1 + 48) = v43[4]; /*0x1009876bc*/
    *(_QWORD *)(a1 + 40) = v17; /*0x1009876c0*/
    *(_QWORD *)(a1 + 8) = v11; /*0x1009876c4*/
    *(_QWORD *)(a1 + 16) = v12; /*0x1009876c8*/
    *(_QWORD *)(a1 + 24) = v13; /*0x1009876cc*/
    *(_DWORD *)(a1 + 32) = v14; /*0x1009876d0*/
    *(_DWORD *)(a1 + 36) = v15; /*0x1009876d4*/
    *(_QWORD *)a1 = 4; /*0x1009876d7*/
  }
  if ( *(_DWORD *)a2 != 3 ) /*0x1009876e3*/
  {
    if ( !__OFSUB__(-a2[22], 1) && a2[22] ) /*0x1009876ed*/
      a7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[23], a2[22], 1); /*0x100987704*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..AuthSnapshot$GT$$GT$::hdf3848feccc703ef( /*0x10098770c*/
      a2,
      a7);
  }
  *a2 = 3; /*0x100987711*/
  *(_QWORD *)a1 = 4; /*0x100987719*/
  return a1; /*0x100987723*/
}