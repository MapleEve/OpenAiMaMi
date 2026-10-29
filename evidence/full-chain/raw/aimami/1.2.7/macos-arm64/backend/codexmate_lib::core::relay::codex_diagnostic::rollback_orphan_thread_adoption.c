// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h0566cb8fe3bb779e; addr: 0x10087d7d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h0566cb8fe3bb779e(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double result,
        __int64 a8)
{
  __int64 v8; // rax
  void *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r12
  void *v13; // rbx
  __int64 v14; // r14
  __int128 v15; // kr00_16
  char v16; // al
  char v17; // dl
  int v18; // eax
  __int64 v19; // rbx
  int autocommit; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // kr10_16
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int128 v33; // kr20_16
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  __int64 v39; // rbx
  _QWORD *v40; // r14
  __int64 v41; // rsi
  void *v42; // [rsp+0h] [rbp-2C0h] BYREF
  __int8 v43; // [rsp+8h] [rbp-2B8h]
  _BYTE v44[15]; // [rsp+9h] [rbp-2B7h]
  __int64 v45; // [rsp+18h] [rbp-2A8h]
  __int64 v46; // [rsp+20h] [rbp-2A0h]
  __int64 v47; // [rsp+28h] [rbp-298h]
  _OWORD v48[6]; // [rsp+30h] [rbp-290h] BYREF
  __int64 v49; // [rsp+90h] [rbp-230h]
  unsigned __int8 v50; // [rsp+98h] [rbp-228h]
  _DWORD v51[3]; // [rsp+99h] [rbp-227h]
  __int64 v52; // [rsp+A8h] [rbp-218h]
  __int64 v53; // [rsp+B0h] [rbp-210h]
  __int64 v54; // [rsp+B8h] [rbp-208h]
  _QWORD *v55; // [rsp+C0h] [rbp-200h]
  void *__s1; // [rsp+C8h] [rbp-1F8h] BYREF
  _BYTE __n[25]; // [rsp+D0h] [rbp-1F0h]
  unsigned __int64 v58; // [rsp+E9h] [rbp-1D7h]
  _BYTE v59[15]; // [rsp+F1h] [rbp-1CFh]
  __int16 v60; // [rsp+100h] [rbp-1C0h]
  char v61; // [rsp+102h] [rbp-1BEh]
  __int128 v62; // [rsp+108h] [rbp-1B8h] BYREF
  unsigned __int64 v63; // [rsp+118h] [rbp-1A8h]
  _BYTE v64[15]; // [rsp+120h] [rbp-1A0h]
  _QWORD v65[2]; // [rsp+130h] [rbp-190h]
  _BYTE __dst[79]; // [rsp+140h] [rbp-180h] BYREF
  __int128 v67; // [rsp+190h] [rbp-130h] BYREF
  _BYTE v68[23]; // [rsp+1A0h] [rbp-120h]
  __int64 v69; // [rsp+1B8h] [rbp-108h] BYREF
  __int64 v70; // [rsp+1C0h] [rbp-100h]
  __int64 v71; // [rsp+1C8h] [rbp-F8h]
  void *v72; // [rsp+1D0h] [rbp-F0h]
  void *v73; // [rsp+1D8h] [rbp-E8h]
  _BYTE __src[96]; // [rsp+1E0h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+240h] [rbp-80h]
  __int64 (__fastcall **v76)(); // [rsp+248h] [rbp-78h]
  __m512i __s2; // [rsp+250h] [rbp-70h] BYREF
  __int8 v78; // [rsp+297h] [rbp-29h]

  v47 = a6; /*0x10087d7e4*/
  v53 = a4; /*0x10087d7eb*/
  v54 = a2; /*0x10087d7f2*/
  v55 = a1; /*0x10087d7f9*/
  v69 = 0; /*0x10087d800*/
  v70 = 8; /*0x10087d80b*/
  v71 = 0; /*0x10087d816*/
  if ( a5 ) /*0x10087d824*/
  {
    v8 = v53 + 24 * a5; /*0x10087d835*/
    v46 = v54 + 200 * a3; /*0x10087d847*/
    do /*0x10087d860*/
    {
      v9 = *(void **)(v8 - 16); /*0x10087d860*/
      v45 = v8; /*0x10087d864*/
      v10 = *(_QWORD *)(v8 - 8); /*0x10087d86b*/
      v73 = v9; /*0x10087d872*/
      rusqlite::Connection::open_with_flags::h8e5ddb3fe8e2df46(__src, v9, v10, 32838, result); /*0x10087d881*/
      if ( (_BYTE)v76 == 3 ) /*0x10087d88c*/
      {
        result = *(double *)__src; /*0x10087d892*/
        *(_OWORD *)&__dst[48] = *(_OWORD *)&__src[48]; /*0x10087d8ae*/
        *(_OWORD *)&__dst[32] = *(_OWORD *)&__src[32]; /*0x10087d8b5*/
        *(_OWORD *)&__dst[16] = *(_OWORD *)&__src[16]; /*0x10087d8bc*/
        *(_OWORD *)__dst = *(_OWORD *)__src; /*0x10087d8c3*/
        *(_QWORD *)&v67 = v73; /*0x10087d8d1*/
        *((_QWORD *)&v67 + 1) = v10; /*0x10087d8d8*/
        __s2.i64[0] = (__int64)&v67; /*0x10087d8e6*/
        __s2.i64[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10087d8f1*/
        __s2.i64[2] = (__int64)__dst; /*0x10087d8f5*/
        __s2.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10087d900*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_101901B2D, &__s2); /*0x10087d916*/
        v72 = __s1; /*0x10087d922*/
        v78 = __n[0]; /*0x10087d930*/
        *(_QWORD *)&v62 = *(_QWORD *)&__n[1]; /*0x10087d941*/
        *(_QWORD *)((char *)&v62 + 7) = *(_QWORD *)&__n[8]; /*0x10087d948*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__dst); /*0x10087d952*/
        v65[0] = v62; /*0x10087d965*/
        *(_QWORD *)((char *)v65 + 7) = *(_QWORD *)((char *)&v62 + 7); /*0x10087d96c*/
        *(_QWORD *)__dst = v65[0]; /*0x10087d981*/
        *(_QWORD *)&__dst[7] = *(_QWORD *)((char *)&v62 + 7); /*0x10087d988*/
        goto LABEL_46; /*0x10087d98f*/
      }
      *(_QWORD *)((char *)&v62 + 7) = *(_QWORD *)&__src[24]; /*0x10087d9b5*/
      *(_QWORD *)&v62 = *(_QWORD *)&__src[17]; /*0x10087d9bc*/
      v48[5] = *(_OWORD *)&__src[80]; /*0x10087d9da*/
      v48[4] = *(_OWORD *)&__src[64]; /*0x10087d9df*/
      v48[3] = *(_OWORD *)&__src[48]; /*0x10087d9e4*/
      v48[2] = *(_OWORD *)&__src[32]; /*0x10087d9e9*/
      *(_DWORD *)((char *)v51 + 3) = HIDWORD(v76); /*0x10087d9f7*/
      v51[0] = *(_DWORD *)((char *)&v76 + 1); /*0x10087d9fb*/
      result = *(double *)__src; /*0x10087d9ff*/
      *(_QWORD *)((char *)v65 + 7) = *(_QWORD *)((char *)&v62 + 7); /*0x10087da14*/
      v65[0] = *(_QWORD *)&__src[17]; /*0x10087da1b*/
      LOBYTE(v48[1]) = __src[16]; /*0x10087da22*/
      *((_QWORD *)&v48[1] + 1) = *(_QWORD *)((char *)v65 + 7); /*0x10087da36*/
      *(_QWORD *)((char *)&v48[1] + 1) = *(_QWORD *)&__src[17]; /*0x10087da3a*/
      v48[0] = *(_OWORD *)__src; /*0x10087da3e*/
      v49 = v75; /*0x10087da45*/
      v50 = (unsigned __int8)v76; /*0x10087da4c*/
      rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&__s2, v48, 5, 0); /*0x10087da64*/
      if ( __s2.i64[0] != 0x8000000000000016LL ) /*0x10087da77*/
      {
        *(__m512i *)__src = __s2; /*0x10087dfff*/
        *(_QWORD *)&v67 = v73; /*0x10087e04f*/
        *((_QWORD *)&v67 + 1) = v10; /*0x10087e056*/
        *(_QWORD *)__dst = &v67; /*0x10087e064*/
        *(_QWORD *)&__dst[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10087e072*/
        *(_QWORD *)&__dst[16] = __src; /*0x10087e079*/
        *(_QWORD *)&__dst[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10087e087*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_101901B72, __dst); /*0x10087e09f*/
        v72 = __s1; /*0x10087e0ab*/
        v78 = __n[0]; /*0x10087e0b9*/
        *(_QWORD *)&v67 = *(_QWORD *)&__n[1]; /*0x10087e0ca*/
        *(_QWORD *)((char *)&v67 + 7) = *(_QWORD *)&__n[8]; /*0x10087e0d1*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__src); /*0x10087e0db*/
        *(_QWORD *)__dst = v67; /*0x10087e0ee*/
        *(_QWORD *)&__dst[7] = *(_QWORD *)((char *)&v67 + 7); /*0x10087e0f5*/
        goto LABEL_45; /*0x10087e0fc*/
      }
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x10087daa7*/
        __src,
        v48,
        *(&off_101AB7950 + (unsigned int)v50),
        qword_10178D568[v50]);
      if ( *(_QWORD *)__src != 0x8000000000000016LL ) /*0x10087dac0*/
      {
        *(_QWORD *)&__dst[56] = *(_QWORD *)&__src[56]; /*0x10087e121*/
        *(_OWORD *)&__dst[41] = *(_OWORD *)&__src[41]; /*0x10087e131*/
        *(_QWORD *)&__dst[33] = *(_QWORD *)&__src[33]; /*0x10087e139*/
        *(_OWORD *)&__dst[17] = *(_OWORD *)&__src[17]; /*0x10087e148*/
        *(_OWORD *)__dst = *(_OWORD *)__src; /*0x10087e14b*/
        __dst[16] = __src[16]; /*0x10087e159*/
        __s1 = v73; /*0x10087e166*/
        *(_QWORD *)__n = v10; /*0x10087e16d*/
        *(_QWORD *)__src = &__s1; /*0x10087e17b*/
        *(_QWORD *)&__src[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10087e189*/
        *(_QWORD *)&__src[16] = __dst; /*0x10087e190*/
        *(_QWORD *)&__src[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10087e19e*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s2, &unk_101901B4F, __src); /*0x10087e1b3*/
        v72 = (void *)__s2.i64[0]; /*0x10087e1bc*/
        v78 = __s2.i8[8]; /*0x10087e1c7*/
        *(_QWORD *)__src = *(__int64 *)((char *)&__s2.i64[1] + 1); /*0x10087e1d5*/
        *(_QWORD *)&__src[7] = __s2.i64[2]; /*0x10087e1dc*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__dst); /*0x10087e1e6*/
        memcpy(__dst, __src, sizeof(__dst)); /*0x10087e1f6*/
LABEL_45:
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v48); /*0x10087e620*/
LABEL_46:
        *(_QWORD *)__src = 10; /*0x10087e62c*/
        *(_QWORD *)&__src[8] = v72; /*0x10087e63e*/
        __src[16] = v78; /*0x10087e649*/
        memcpy(&__src[17], __dst, 0x4Fu); /*0x10087e65e*/
        __s2.i64[0] = 0; /*0x10087e663*/
        *(__int128 *)((char *)__s2.i128 + 8) = 1u; /*0x10087e66b*/
        *(_QWORD *)&v48[1] = 1610612768; /*0x10087e67b*/
        *(_QWORD *)&v48[0] = &__s2; /*0x10087e68a*/
        *((_QWORD *)&v48[0] + 1) = &anon_0868f19ff3e9f3569e732f60bdb020cc_1449; /*0x10087e698*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10087e6a9*/
                                __src,
                                (__int64 *)v48,
                                v21,
                                v22,
                                v23,
                                v24) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087e917*/
            &anon_0868f19ff3e9f3569e732f60bdb020cc_1450,
            55,
            &__s1,
            &anon_0868f19ff3e9f3569e732f60bdb020cc_1468,
            &anon_0868f19ff3e9f3569e732f60bdb020cc_1452);
        v25 = __s2.i128[0]; /*0x10087e6ba*/
        v26 = __s2.i64[2]; /*0x10087e6be*/
        v27 = v71; /*0x10087e6c2*/
        if ( v71 == v69 ) /*0x10087e6d0*/
          result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v69); /*0x10087e6d9*/
        v28 = v70; /*0x10087e6de*/
        v29 = 3 * v27; /*0x10087e6e5*/
        *(_OWORD *)(v70 + 8 * v29) = v25; /*0x10087e6e9*/
        *(_QWORD *)(v28 + 8 * v29 + 16) = v26; /*0x10087e6f2*/
        v71 = v27 + 1; /*0x10087e6fa*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(__src); /*0x10087e704*/
        goto LABEL_50; /*0x10087e704*/
      }
      v11 = v54; /*0x10087dac6*/
      v52 = v10; /*0x10087dacd*/
      while ( v11 != v46 ) /*0x10087dae7*/
      {
        v12 = v11; /*0x10087daed*/
        std::path::Path::components::he8b0f71a48373be5(&__s1, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16)); /*0x10087daff*/
        std::path::Path::components::he8b0f71a48373be5(&__s2, v73, v10); /*0x10087db12*/
        v13 = __s1; /*0x10087db17*/
        v14 = *(_QWORD *)__n; /*0x10087db1e*/
        v15 = __s2.i128[0]; /*0x10087db29*/
        if ( *(_QWORD *)__n == __s2.i64[1] /*0x10087db5d*/
          && (_BYTE)v60 == __s2.i8[56]
          && HIBYTE(v60) == 2
          && __s2.i8[57] == 2
          && !memcmp(__s1, (const void *)__s2.i64[0], *(size_t *)__n) )
        {
          v11 = v12 + 200; /*0x10087dfc2*/
          v10 = v52; /*0x10087dfd8*/
          goto LABEL_19; /*0x10087dfdf*/
        }
        if ( __n[8] != 6 ) /*0x10087db79*/
        {
          *(_QWORD *)&v64[7] = *(_QWORD *)&v59[7]; /*0x10087db86*/
          *(_QWORD *)v64 = *(_QWORD *)v59; /*0x10087db91*/
          v63 = v58; /*0x10087db9c*/
          v62 = *(_OWORD *)&__n[9]; /*0x10087dbb2*/
        }
        *(_QWORD *)__dst = v13; /*0x10087dbc7*/
        *(_QWORD *)&__dst[8] = v14; /*0x10087dbce*/
        __dst[16] = __n[8]; /*0x10087dbd5*/
        *(_QWORD *)&__dst[48] = *(_QWORD *)&v64[7]; /*0x10087dbe9*/
        *(_OWORD *)&__dst[33] = __PAIR128__(*(unsigned __int64 *)v64, v63); /*0x10087dbff*/
        *(_OWORD *)&__dst[17] = v62; /*0x10087dc15*/
        *(_WORD *)&__dst[56] = v60; /*0x10087dc18*/
        __dst[58] = v61; /*0x10087dc1f*/
        if ( __s2.i8[16] != 6 ) /*0x10087dc2b*/
        {
          *(_QWORD *)&v68[15] = __s2.i64[6]; /*0x10087dc35*/
          *(_OWORD *)v68 = *(__int128 *)((char *)&__s2.i128[2] + 1); /*0x10087dc4b*/
          v67 = *(__int128 *)((char *)&__s2.i128[1] + 1); /*0x10087dc61*/
        }
        *(_OWORD *)__src = v15; /*0x10087dc70*/
        __src[16] = __s2.i8[16]; /*0x10087dc7e*/
        *(_QWORD *)&__src[48] = *(_QWORD *)&v68[15]; /*0x10087dc92*/
        *(_OWORD *)&__src[33] = *(_OWORD *)v68; /*0x10087dca8*/
        *(_OWORD *)&__src[17] = v67; /*0x10087dcbe*/
        *(_WORD *)&__src[56] = __s2.i16[28]; /*0x10087dcc1*/
        __src[58] = __s2.i8[58]; /*0x10087dcc8*/
        v16 = core::iter::traits::iterator::Iterator::eq_by::hb0fb3c76a78791de(__dst, __src); /*0x10087dce2*/
        v10 = v52; /*0x10087dce7*/
        v11 = v12 + 200; /*0x10087dcee*/
        if ( v16 ) /*0x10087dcf8*/
        {
LABEL_19:
          *(_QWORD *)__dst = "openai"; /*0x10087dcfe*/
          *(_QWORD *)&__dst[8] = 6; /*0x10087dd0c*/
          v17 = *(_BYTE *)(v12 + 193); /*0x10087dd17*/
          if ( *(_BYTE *)(v12 + 192) ) /*0x10087dd25*/
          {
            *(_QWORD *)__src = v12 + 120; /*0x10087dd5b*/
            *(_QWORD *)&__src[8] = &off_101AB66D8; /*0x10087dd69*/
            *(_QWORD *)&__src[16] = v12 + 144; /*0x10087dd70*/
            *(_QWORD *)&__src[24] = &off_101AB66D8; /*0x10087dd77*/
            if ( v17 ) /*0x10087dd3e*/
            {
              *(_QWORD *)&__src[32] = v12 + 168; /*0x10087dd7e*/
              *(_QWORD *)&__src[40] = &off_101AB66D8; /*0x10087dd85*/
              *(_QWORD *)&__src[48] = v12 + 24; /*0x10087dd8c*/
              *(_QWORD *)&__src[56] = &off_101AB66B8; /*0x10087dd9a*/
              *(_QWORD *)&__src[64] = __dst; /*0x10087dda1*/
              *(_QWORD *)&__src[72] = &unk_101AB6698; /*0x10087ddaf*/
              *(_QWORD *)&__src[80] = v12 + 72; /*0x10087ddb6*/
              *(_QWORD *)&__src[88] = &off_101AB66B8; /*0x10087ddbd*/
              v75 = v12 + 96; /*0x10087ddc4*/
              v76 = &off_101AB66B8; /*0x10087ddc8*/
              rusqlite::Connection::execute::h46e369c3bf91ce92( /*0x10087ddec*/
                &__s2,
                v48,
                "UPDATE threads SET model_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND model_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7",
                184,
                __src,
                7);
            }
            else
            {
              *(_QWORD *)&__src[32] = v12 + 24; /*0x10087decc*/
              *(_QWORD *)&__src[40] = &off_101AB66B8; /*0x10087deda*/
              *(_QWORD *)&__src[48] = __dst; /*0x10087dee1*/
              *(_QWORD *)&__src[56] = &unk_101AB6698; /*0x10087deef*/
              *(_QWORD *)&__src[64] = v12 + 72; /*0x10087def6*/
              *(_QWORD *)&__src[72] = &off_101AB66B8; /*0x10087defd*/
              rusqlite::Connection::execute::h46e369c3bf91ce92( /*0x10087df24*/
                &__s2,
                v48,
                "UPDATE threads SET model_provider = ?1, model = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND model IS ?5UPDATE threads SET model_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND model_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7",
                134,
                __src,
                5);
            }
          }
          else
          {
            *(_QWORD *)__src = v12 + 120; /*0x10087de1a*/
            *(_QWORD *)&__src[8] = &off_101AB66D8; /*0x10087de28*/
            if ( v17 ) /*0x10087de02*/
            {
              *(_QWORD *)&__src[16] = v12 + 168; /*0x10087de2f*/
              *(_QWORD *)&__src[24] = &off_101AB66D8; /*0x10087de36*/
              *(_QWORD *)&__src[32] = v12 + 24; /*0x10087de3d*/
              *(_QWORD *)&__src[40] = &off_101AB66B8; /*0x10087de4b*/
              *(_QWORD *)&__src[48] = __dst; /*0x10087de52*/
              *(_QWORD *)&__src[56] = &unk_101AB6698; /*0x10087de60*/
              *(_QWORD *)&__src[64] = v12 + 96; /*0x10087de67*/
              *(_QWORD *)&__src[72] = &off_101AB66B8; /*0x10087de6e*/
              rusqlite::Connection::execute::h46e369c3bf91ce92( /*0x10087de95*/
                &__s2,
                v48,
                "UPDATE threads SET model_provider = ?1, reasoning_effort = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND reasoning_effort IS ?5UPDATE threads SET model_provider = ?1, model = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND model IS ?5UPDATE threads SET model_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND model_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7",
                156,
                __src,
                5);
            }
            else
            {
              *(_QWORD *)&__src[16] = v12 + 24; /*0x10087df45*/
              *(_QWORD *)&__src[24] = &off_101AB66B8; /*0x10087df53*/
              *(_QWORD *)&__src[32] = __dst; /*0x10087df5a*/
              *(_QWORD *)&__src[40] = &unk_101AB6698; /*0x10087df68*/
              rusqlite::Connection::execute::h46e369c3bf91ce92( /*0x10087df8f*/
                &__s2,
                v48,
                "UPDATE threads SET model_provider = ?1 WHERE id = ?2 AND COALESCE(archived, 0) = 0 AND model_provider = "
                "?3UPDATE threads SET model_provider = ?1, reasoning_effort = ?2 WHERE id = ?3 AND COALESCE(archived, 0) "
                "= 0 AND model_provider = ?4 AND reasoning_effort IS ?5UPDATE threads SET model_provider = ?1, model = ?2"
                " WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND model IS ?5UPDATE threads SET m"
                "odel_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND mo"
                "del_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7",
                106,
                __src,
                3);
            }
          }
          if ( __s2.i64[0] != 0x8000000000000016LL ) /*0x10087dfa2*/
          {
            *(__m512i *)__dst = __s2; /*0x10087e3e7*/
            *(_QWORD *)&v67 = v73; /*0x10087e43b*/
            *((_QWORD *)&v67 + 1) = v10; /*0x10087e442*/
            *(_QWORD *)__src = v12 + 24; /*0x10087e449*/
            *(_QWORD *)&__src[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10087e457*/
            *(_QWORD *)&__src[16] = &v67; /*0x10087e465*/
            *(_QWORD *)&__src[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10087e473*/
            *(_QWORD *)&__src[32] = __dst; /*0x10087e47a*/
            *(_QWORD *)&__src[40] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10087e488*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_101901B11, __src); /*0x10087e4a0*/
            v72 = __s1; /*0x10087e4ac*/
            v78 = __n[0]; /*0x10087e4ba*/
            *(_QWORD *)__src = *(_QWORD *)&__n[1]; /*0x10087e4cb*/
            *(_QWORD *)&__src[7] = *(_QWORD *)&__n[8]; /*0x10087e4d2*/
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__dst); /*0x10087e4dc*/
            memcpy(__dst, __src, sizeof(__dst)); /*0x10087e4ec*/
            goto LABEL_41; /*0x10087e4ec*/
          }
          *(_QWORD *)&v62 = __s2.i64[1]; /*0x10087dfac*/
          if ( __s2.i64[1] != 1 ) /*0x10087dfb7*/
          {
            *(_QWORD *)__dst = v73; /*0x10087e501*/
            *(_QWORD *)&__dst[8] = v10; /*0x10087e508*/
            *(_QWORD *)__src = v12 + 24; /*0x10087e50f*/
            *(_QWORD *)&__src[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10087e51d*/
            *(_QWORD *)&__src[16] = __dst; /*0x10087e524*/
            *(_QWORD *)&__src[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10087e532*/
            *(_QWORD *)&__src[32] = &v62; /*0x10087e540*/
            *(_QWORD *)&__src[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10087e54e*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v42, &unk_101901AD4, __src); /*0x10087e566*/
            v72 = v42; /*0x10087e572*/
            v78 = v43; /*0x10087e580*/
            *(_QWORD *)__dst = *(_QWORD *)v44; /*0x10087e591*/
            *(_QWORD *)&__dst[7] = *(_QWORD *)&v44[7]; /*0x10087e598*/
LABEL_41:
            if ( *(_QWORD *)&v48[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x10087e5b7*/
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101AB7860); /*0x10087e925*/
            ++*(_QWORD *)&v48[0]; /*0x10087e5c0*/
            autocommit = sqlite3_get_autocommit(*(sqlite3 **)&v48[1]); /*0x10087e5ce*/
            --*(_QWORD *)&v48[0]; /*0x10087e5d3*/
            if ( !autocommit ) /*0x10087e5dc*/
            {
              rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v48, &unk_1016F25F8, 8); /*0x10087e5f4*/
              if ( *(_QWORD *)__src != 0x8000000000000016LL ) /*0x10087e60a*/
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__src); /*0x10087e60f*/
            }
            goto LABEL_45; /*0x10087e60f*/
          }
        }
      }
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x10087e217*/
        &__s2,
        v48,
        "COMMITInUseReferencedNotFoundNotPersistedInvalidIdUnsupportedIncompleteNotAttempted",
        6);
      if ( *(_QWORD *)&v48[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x10087e234*/
        core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101AB7860); /*0x10087e933*/
      ++*(_QWORD *)&v48[0]; /*0x10087e23d*/
      v18 = sqlite3_get_autocommit(*(sqlite3 **)&v48[1]); /*0x10087e24b*/
      --*(_QWORD *)&v48[0]; /*0x10087e250*/
      if ( !v18 ) /*0x10087e259*/
      {
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v48, &unk_1016F25F8, 8); /*0x10087e271*/
        if ( *(_QWORD *)__src != 0x8000000000000016LL ) /*0x10087e287*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__src); /*0x10087e28c*/
      }
      v19 = __s2.i64[0]; /*0x10087e291*/
      if ( __s2.i64[0] != 0x8000000000000016LL ) /*0x10087e2a2*/
      {
        *(__m512i *)__src = __s2; /*0x10087e2b7*/
        *(_QWORD *)&v67 = v73; /*0x10087e307*/
        *((_QWORD *)&v67 + 1) = v10; /*0x10087e30e*/
        *(_QWORD *)__dst = &v67; /*0x10087e31c*/
        *(_QWORD *)&__dst[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10087e32a*/
        *(_QWORD *)&__dst[16] = __src; /*0x10087e331*/
        *(_QWORD *)&__dst[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10087e33f*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_101901B98, __dst); /*0x10087e357*/
        v72 = __s1; /*0x10087e363*/
        v78 = __n[0]; /*0x10087e371*/
        *(_QWORD *)&v67 = *(_QWORD *)&__n[1]; /*0x10087e382*/
        *(_QWORD *)((char *)&v67 + 7) = *(_QWORD *)&__n[8]; /*0x10087e389*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__src); /*0x10087e393*/
        *(_QWORD *)__dst = v67; /*0x10087e3a6*/
        *(_QWORD *)&__dst[7] = *(_QWORD *)((char *)&v67 + 7); /*0x10087e3ad*/
      }
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v48); /*0x10087e3bb*/
      if ( v19 != 0x8000000000000016LL ) /*0x10087e3cd*/
        goto LABEL_46; /*0x10087e3cd*/
LABEL_50:
      v8 = v45 - 24; /*0x10087e710*/
    }
    while ( v53 != v45 - 24 ); /*0x10087d860*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::restore_thread_metadata_rollout_adoptions::hca611215368e639d( /*0x10087e728*/
    v48,
    v47,
    a8);
  if ( LODWORD(v48[0]) != 11 ) /*0x10087e746*/
  {
    qmemcpy(__src, v48, sizeof(__src)); /*0x10087e762*/
    __s2.i64[0] = 0; /*0x10087e765*/
    *(__int128 *)((char *)__s2.i128 + 8) = 1u; /*0x10087e76d*/
    *(_QWORD *)&__dst[16] = 1610612768; /*0x10087e77d*/
    *(_QWORD *)__dst = &__s2; /*0x10087e78c*/
    *(_QWORD *)&__dst[8] = &anon_0868f19ff3e9f3569e732f60bdb020cc_1449; /*0x10087e79a*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x10087e7ab*/
                            __src,
                            (__int64 *)__dst,
                            v30,
                            (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_1449,
                            v31,
                            v32) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087e95b*/
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1450,
        55,
        &__s1,
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1468,
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1452);
    v33 = __s2.i128[0]; /*0x10087e7bc*/
    v34 = __s2.i64[2]; /*0x10087e7c0*/
    v35 = v71; /*0x10087e7c4*/
    if ( v71 == v69 ) /*0x10087e7d2*/
      result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v69); /*0x10087e7db*/
    v36 = v70; /*0x10087e7e0*/
    v37 = 3 * v35; /*0x10087e7e7*/
    *(_OWORD *)(v70 + 8 * v37) = v33; /*0x10087e7eb*/
    *(_QWORD *)(v36 + 8 * v37 + 16) = v34; /*0x10087e7f4*/
    v71 = v35 + 1; /*0x10087e7fc*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(__src); /*0x10087e80a*/
  }
  if ( v71 ) /*0x10087e819*/
  {
    alloc::str::join_generic_copy::h877a7dfcc3252013(__src, v70, v71, &anon_0868f19ff3e9f3569e732f60bdb020cc_200, 3); /*0x10087e83a*/
    v38 = v55; /*0x10087e846*/
    v55[3] = *(_QWORD *)&__src[16]; /*0x10087e84d*/
    *(_OWORD *)(v38 + 1) = *(_OWORD *)__src; /*0x10087e863*/
    v39 = v71; /*0x10087e867*/
    *v38 = 10; /*0x10087e86e*/
    if ( v39 ) /*0x10087e878*/
    {
      v40 = (_QWORD *)(v70 + 8); /*0x10087e881*/
      do /*0x10087e897*/
      {
        v41 = *(v40 - 1); /*0x10087e899*/
        if ( v41 ) /*0x10087e8a0*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v40, v41, 1); /*0x10087e8aa*/
        v40 += 3; /*0x10087e890*/
        --v39; /*0x10087e894*/
      }
      while ( v39 ); /*0x10087e897*/
    }
  }
  else
  {
    *v55 = 11; /*0x10087e8b8*/
  }
  if ( v69 ) /*0x10087e8c9*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, 24 * v69, 8); /*0x10087e8df*/
  return result; /*0x10087e8e4*/
}
