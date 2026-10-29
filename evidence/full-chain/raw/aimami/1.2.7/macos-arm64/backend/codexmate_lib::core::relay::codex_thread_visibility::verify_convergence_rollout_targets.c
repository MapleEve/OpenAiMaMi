// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::verify_convergence_rollout_targets::h74620dd5b11de5d1; addr: 0x100496c10; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::verify_convergence_rollout_targets::h74620dd5b11de5d1(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        _BYTE *a5,
        void *a6,
        size_t a7,
        char a8)
{
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v16; // rcx
  void *v17; // rsi
  size_t v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdi
  void *v23; // rsi
  __m128i si128; // xmm0
  const void *v25; // rdi
  size_t v26; // r14
  int v27; // eax
  size_t v28; // r14
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned __int64 v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rax
  void *v35; // r14
  size_t v36; // r13
  __int64 v37; // rbx
  void *v38; // r14
  _QWORD *v39; // rsi
  unsigned __int8 v40; // al
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rsi
  _QWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // r8
  _BYTE v51[96]; // [rsp+0h] [rbp-360h] BYREF
  _BYTE v52[72]; // [rsp+60h] [rbp-300h] BYREF
  _QWORD v53[12]; // [rsp+A8h] [rbp-2B8h] BYREF
  _QWORD *v54; // [rsp+108h] [rbp-258h] BYREF
  _QWORD v55[12]; // [rsp+110h] [rbp-250h] BYREF
  __int64 v56; // [rsp+170h] [rbp-1F0h]
  __int64 v57; // [rsp+178h] [rbp-1E8h]
  __int64 v58; // [rsp+180h] [rbp-1E0h]
  __int64 v59; // [rsp+188h] [rbp-1D8h]
  __int64 v60; // [rsp+190h] [rbp-1D0h]
  _QWORD v61[3]; // [rsp+198h] [rbp-1C8h] BYREF
  __m128 v62; // [rsp+1B0h] [rbp-1B0h] BYREF
  __m128i v63; // [rsp+1C0h] [rbp-1A0h] BYREF
  unsigned __int64 v64; // [rsp+1D0h] [rbp-190h]
  __int64 v65; // [rsp+1D8h] [rbp-188h]
  __int64 v66; // [rsp+1E0h] [rbp-180h]
  __int64 v67; // [rsp+1E8h] [rbp-178h]
  __int64 v68; // [rsp+1F0h] [rbp-170h]
  unsigned __int64 v69; // [rsp+1F8h] [rbp-168h]
  __int64 v70; // [rsp+200h] [rbp-160h]
  __int64 v71; // [rsp+208h] [rbp-158h]
  __int64 v72; // [rsp+210h] [rbp-150h]
  __int64 v73; // [rsp+218h] [rbp-148h]
  _QWORD *__dst; // [rsp+220h] [rbp-140h] BYREF
  _QWORD v75[17]; // [rsp+228h] [rbp-138h] BYREF
  _QWORD v76[9]; // [rsp+2B0h] [rbp-B0h] BYREF
  void *v77; // [rsp+2F8h] [rbp-68h] BYREF
  size_t __n; // [rsp+300h] [rbp-60h]
  _QWORD *v79; // [rsp+308h] [rbp-58h]
  __int64 v80; // [rsp+310h] [rbp-50h]
  __int64 v81; // [rsp+318h] [rbp-48h]
  __int64 v82; // [rsp+320h] [rbp-40h]
  void *__s2; // [rsp+328h] [rbp-38h]
  __int64 v84; // [rsp+330h] [rbp-30h]

  v79 = a1; /*0x100496c24*/
  v77 = a6; /*0x100496c2c*/
  __n = a7; /*0x100496c30*/
  if ( (unsigned __int64)a5 < a3 ) /*0x100496c37*/
    a3 = (unsigned __int64)a5; /*0x100496c37*/
  if ( !a3 ) /*0x100496c3e*/
  {
LABEL_122:
    *v79 = 11; /*0x10049762d*/
    return *(double *)si128.i64; /*0x100497631*/
  }
  v9 = a4 + 432; /*0x100496c51*/
  v84 = v9; /*0x100496c58*/
  v10 = 440 * a3; /*0x100496c5c*/
  v11 = 0; /*0x100496c63*/
  v64 = 0x8000000000000001LL; /*0x100496c6a*/
  v12 = v9; /*0x100496c71*/
  v80 = 440 * a3; /*0x100496c75*/
  while ( 1 ) /*0x100496ca4*/
  {
    v13 = *(_QWORD *)(v12 + v11 - 64); /*0x100496ca4*/
    if ( v13 == v64 ) /*0x100496cb0*/
      goto LABEL_7; /*0x100496cb0*/
    if ( v13 != 0x8000000000000000LL ) /*0x100496cb5*/
    {
      v14 = (unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::h4fd179d82426cccd( /*0x100496cc6*/
                               *(_QWORD *)(v12 + v11 - 56),
                               *(_QWORD *)(v12 + v11 - 48),
                               a3,
                               v9,
                               a5,
                               a6) == 0;
      v12 = v84; /*0x100496cc8*/
      if ( v14 ) /*0x100496ccc*/
        goto LABEL_7; /*0x100496ccc*/
    }
    v15 = *(_QWORD *)(v12 + v11 - 40); /*0x100496cce*/
    if ( v15 != 0x8000000000000000LL ) /*0x100496cd6*/
    {
      v14 = (unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::h4fd179d82426cccd( /*0x100496ce7*/
                               *(_QWORD *)(v12 + v11 - 32),
                               *(_QWORD *)(v12 + v11 - 24),
                               a3,
                               v9,
                               a5,
                               a6) == 0;
      v12 = v84; /*0x100496ce9*/
      if ( v14 ) /*0x100496ced*/
      {
        v10 = v80; /*0x100496e3d*/
        goto LABEL_7; /*0x100496e41*/
      }
    }
    v16 = *(_QWORD *)(v12 + v11 - 16); /*0x100496cf3*/
    v82 = v16; /*0x100496cf8*/
    if ( v16 != 0x8000000000000000LL ) /*0x100496cff*/
    {
      v14 = (unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::h4fd179d82426cccd( /*0x100496d0f*/
                               *(_QWORD *)(v12 + v11 - 8),
                               *(_QWORD *)(v12 + v11),
                               a3,
                               v16,
                               a5,
                               a6) == 0;
      v12 = v84; /*0x100496d11*/
      if ( v14 ) /*0x100496d15*/
      {
        v10 = v80; /*0x100496e50*/
        goto LABEL_7; /*0x100496e54*/
      }
    }
    if ( a2[6] == 0x8000000000000000LL ) /*0x100496d29*/
    {
      v54 = a2; /*0x100497773*/
      v55[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100497781*/
      v55[1] = &v77; /*0x10049778c*/
      v55[2] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x10049779a*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v75, &unk_1018F84AC, &v54); /*0x1004977b6*/
      v46 = v75[0]; /*0x1004977bb*/
      v47 = v79; /*0x1004977c9*/
      qmemcpy(v79 + 2, &v75[1], 0x50u); /*0x1004977d6*/
      *v47 = 10; /*0x1004977d9*/
      v47[1] = v46; /*0x1004977e0*/
      return *(double *)si128.i64; /*0x1004977e4*/
    }
    if ( *(_QWORD *)(v12 + v11 - 408) == 0x8000000000000000LL ) /*0x100496d37*/
    {
      v17 = v77; /*0x100496d3d*/
      v18 = __n; /*0x100496d41*/
      if ( v13 == 0x8000000000000000LL ) /*0x100496d48*/
        goto LABEL_141; /*0x100496d48*/
      if ( *(_QWORD *)(v12 + v11 - 48) == __n ) /*0x100496e74*/
      {
        v25 = *(const void **)(v12 + v11 - 56); /*0x100496e7a*/
        __s2 = v77; /*0x100496e7f*/
        v26 = __n; /*0x100496e87*/
        v27 = memcmp(v25, v77, __n); /*0x100496e8a*/
        v18 = v26; /*0x100496e8f*/
        v17 = __s2; /*0x100496e92*/
        v14 = v27 == 0; /*0x100496e96*/
        v12 = v84; /*0x100496e98*/
        if ( v14 ) /*0x100496e9c*/
        {
LABEL_141:
          if ( v15 == 0x8000000000000000LL /*0x100496ece*/
            || *(_QWORD *)(v12 + v11 - 24) == v18
            && (v28 = v18,
                v29 = memcmp(*(const void **)(v12 + v11 - 32), v17, v18),
                v18 = v28,
                v14 = v29 == 0,
                v12 = v84,
                v14) )
          {
            if ( v82 == 0x8000000000000000LL /*0x100496ef3*/
              || *(_QWORD *)(v12 + v11) == v18
              && (v14 = memcmp(*(const void **)(v12 + v11 - 8), v17, v18) == 0, v12 = v84, v14) )
            {
              if ( *(_QWORD *)(v12 + v11 - 240) != 0x8000000000000000LL ) /*0x100496d69*/
              {
                codexmate_lib::core::relay::codex_thread_visibility::RolloutReadStamp::read::h92ad3bb2d9025d9d( /*0x100496d7e*/
                  &__dst,
                  a2[7],
                  a2[8]);
                v19 = __dst; /*0x100496d83*/
                if ( __dst == (_QWORD *)0x8000000000000000LL ) /*0x100496d8d*/
                {
LABEL_54:
                  v12 = v84; /*0x100496fb6*/
                  goto LABEL_55; /*0x100496fb6*/
                }
                if ( *(_QWORD *)(v84 + v11 - 184) == v75[6] ) /*0x100496da6*/
                {
                  v20 = v75[0]; /*0x100496dc0*/
                  if ( (unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x100496dd1*/
                                          *(_QWORD *)(v84 + v11 - 232),
                                          *(_QWORD *)(v84 + v11 - 224),
                                          v75[0],
                                          v75[1]) )
                  {
                    if ( *(_QWORD *)(v84 + v11 - 216) == v75[2] && *(_DWORD *)(v84 + v11 - 208) == LODWORD(v75[3]) ) /*0x100496e09*/
                    {
                      v21 = *(_DWORD *)(v84 + v11 - 192); /*0x100496e13*/
                      v9 = LODWORD(v75[5]); /*0x100496e1b*/
                      if ( v21 == 1000000000 ) /*0x100496e26*/
                      {
                        if ( LODWORD(v75[5]) != 1000000000 ) /*0x100496e32*/
                          goto LABEL_52; /*0x100496e32*/
LABEL_45:
                        if ( *(_QWORD *)(v84 + v11 - 176) == v75[7] /*0x100496f79*/
                          && *(_QWORD *)(v84 + v11 - 168) == v75[8]
                          && *(_QWORD *)(v84 + v11 - 160) == v75[9]
                          && *(_QWORD *)(v84 + v11 - 152) == v75[10] )
                        {
                          if ( v19 ) /*0x100496f7e*/
                            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x100496f8b*/
                          v12 = v84; /*0x100496f90*/
                          v10 = v80; /*0x100496f94*/
                          goto LABEL_7; /*0x100496f98*/
                        }
                        goto LABEL_52; /*0x100496f79*/
                      }
                      if ( LODWORD(v75[5]) != 1000000000 && v21 == LODWORD(v75[5]) ) /*0x100496f0c*/
                      {
                        v9 = v84; /*0x100496f19*/
                        if ( *(_QWORD *)(v84 + v11 - 200) == v75[4] ) /*0x100496f25*/
                          goto LABEL_45; /*0x100496f25*/
                      }
                    }
                  }
                }
LABEL_52:
                if ( v19 ) /*0x100496fa0*/
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75[0], v19, 1); /*0x100496fb1*/
                goto LABEL_54; /*0x100496fb1*/
              }
            }
          }
        }
      }
    }
LABEL_55:
    v30 = *(_QWORD *)(v12 + v11 - 240); /*0x100496fc0*/
    if ( v30 != 0x8000000000000000LL && v30 ) /*0x100496fd0*/
    {
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v12 + v11 - 232), v30, 1); /*0x100496fdf*/
      v12 = v84; /*0x100496fe4*/
    }
    *(_QWORD *)(v12 + v11 - 240) = 0x8000000000000000LL; /*0x100496fe8*/
    v31 = a2[7]; /*0x100496ff0*/
    v32 = 0x8000000000000000LL; /*0x100496ff8*/
    v82 = a2[8]; /*0x100496fff*/
    if ( a8 ) /*0x100497003*/
    {
      codexmate_lib::core::relay::codex_thread_visibility::RolloutReadStamp::read::h92ad3bb2d9025d9d(&__dst, v31, v82); /*0x100497017*/
      v32 = (unsigned __int64)__dst; /*0x100497020*/
      v81 = v75[0]; /*0x10049702e*/
      v67 = v75[1]; /*0x100497039*/
      v68 = v75[2]; /*0x100497047*/
      v62 = (__m128)v75[3]; /*0x100497056*/
      v69 = v75[4]; /*0x100497064*/
      si128 = _mm_loadl_epi64((const __m128i *)&v75[5]); /*0x10049706b*/
      v63 = si128; /*0x100497073*/
      v66 = v75[6]; /*0x100497082*/
      v70 = v75[7]; /*0x100497090*/
      v71 = v75[8]; /*0x10049709e*/
      v72 = v75[9]; /*0x1004970ac*/
      v73 = v75[10]; /*0x1004970ba*/
    }
    v65 = v31; /*0x1004970d0*/
    __s2 = (void *)v32; /*0x1004970da*/
    codexmate_lib::core::relay::codex_thread_visibility::convergence_anchors_for_thread::h50c5127b22cc79d9(&__dst); /*0x1004970de*/
    v33 = __dst; /*0x1004970e3*/
    a5 = v51; /*0x1004970ef*/
    qmemcpy(v51, v75, sizeof(v51)); /*0x100497103*/
    if ( __dst == (_QWORD *)0x8000000000000000LL ) /*0x100497109*/
    {
      qmemcpy(v53, v51, sizeof(v53)); /*0x10049711a*/
    }
    else
    {
      v60 = v75[16]; /*0x10049713a*/
      v59 = v75[15]; /*0x100497142*/
      v58 = v75[14]; /*0x10049714a*/
      v57 = v75[13]; /*0x100497156*/
      v56 = v75[12]; /*0x10049715a*/
      qmemcpy(v55, v51, sizeof(v55)); /*0x10049716c*/
      v54 = __dst; /*0x10049716f*/
      codexmate_lib::core::relay::codex_thread_visibility::rollout_provider_anchors::h285dddb3fde87d00( /*0x10049718f*/
        v53,
        &v54,
        v65,
        v82);
      if ( v33 ) /*0x100497197*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55[0], v33, 1); /*0x1004971a8*/
      if ( v55[5] ) /*0x1004971b7*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55[6], v55[5], 1); /*0x1004971c5*/
      if ( v55[11] != 0x8000000000000000LL && v55[11] ) /*0x1004971e0*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55[11], 1); /*0x1004971ee*/
    }
    v34 = v53[0]; /*0x100497200*/
    qmemcpy(v52, &v53[1], sizeof(v52)); /*0x100497216*/
    if ( v53[0] != 11 ) /*0x10049721d*/
    {
      v48 = v53[10]; /*0x1004977e9*/
      v49 = v79; /*0x1004977f7*/
      v79[11] = v53[11]; /*0x1004977fb*/
      v49[10] = v48; /*0x1004977ff*/
      qmemcpy(v49 + 1, v52, 0x48u); /*0x100497813*/
      *v49 = v34; /*0x100497816*/
      if ( !(2 * v32) ) /*0x100497824*/
        return *(double *)si128.i64; /*0x100497824*/
      goto LABEL_137; /*0x100497824*/
    }
    qmemcpy(v76, v52, sizeof(v76)); /*0x100497232*/
    v9 = 0; /*0x100497232*/
    v35 = v77; /*0x100497235*/
    v36 = __n; /*0x10049723c*/
    v37 = v76[0]; /*0x100497240*/
    if ( v76[0] != 0x8000000000000000LL && (v76[2] != __n || memcmp((const void *)v76[1], v77, __n)) ) /*0x100497266*/
      break; /*0x100497266*/
    if ( v76[3] != 0x8000000000000000LL && (v76[5] != v36 || memcmp((const void *)v76[4], v35, v36)) /*0x1004972d1*/
      || v76[6] != 0x8000000000000000LL && (v76[8] != v36 || memcmp((const void *)v76[7], v35, v36)) )
    {
      break; /*0x1004972d1*/
    }
    v38 = __s2; /*0x1004972e8*/
    if ( __s2 == (void *)0x8000000000000000LL ) /*0x1004972ef*/
      goto LABEL_113; /*0x1004972ef*/
    codexmate_lib::core::relay::codex_thread_visibility::RolloutReadStamp::read::h92ad3bb2d9025d9d(&__dst, v65, v82); /*0x100497307*/
    v39 = __dst; /*0x10049730c*/
    if ( __dst == (_QWORD *)0x8000000000000000LL ) /*0x100497316*/
      goto LABEL_112; /*0x100497316*/
    if ( v66 != v75[6] ) /*0x10049732a*/
      goto LABEL_110; /*0x10049732a*/
    v40 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(v81, v67, v75[0], v75[1]); /*0x100497349*/
    v9 = v68; /*0x10049734e*/
    LOBYTE(v9) = v68 == v75[2]; /*0x10049735c*/
    v10 = v80; /*0x100497363*/
    a3 = v69; /*0x100497367*/
    if ( ((v68 == v75[2]) & v40) == 1 ) /*0x100497375*/
    {
      si128 = _mm_load_si128((const __m128i *)&v62); /*0x10049737b*/
      if ( _mm_cvtsi128_si32(si128) == LODWORD(v75[3]) ) /*0x10049738d*/
      {
        si128 = _mm_load_si128(&v63); /*0x100497393*/
        v41 = _mm_cvtsi128_si32(si128); /*0x10049739b*/
        v9 = LODWORD(v75[5]); /*0x10049739f*/
        if ( v41 == 1000000000 ) /*0x1004973aa*/
        {
          if ( LODWORD(v75[5]) != 1000000000 ) /*0x1004973b2*/
            goto LABEL_109; /*0x1004973b2*/
        }
        else if ( LODWORD(v75[5]) == 1000000000 || v41 != LODWORD(v75[5]) || v69 != v75[4] ) /*0x1004973d4*/
        {
          goto LABEL_109; /*0x1004973d4*/
        }
        if ( v70 == v75[7] && v71 == v75[8] && v72 == v75[9] && v73 == v75[10] ) /*0x10049741d*/
        {
          if ( __dst != (_QWORD *)0x8000000000000000LL && __dst ) /*0x100497432*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75[0], __dst, 1); /*0x100497440*/
          v42 = v84; /*0x100497445*/
          v43 = *(_QWORD *)(v84 + v11 - 240); /*0x100497449*/
          if ( v43 != 0x8000000000000000LL && v43 ) /*0x100497459*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v84 + v11 - 232), v43, 1); /*0x100497468*/
            v42 = v84; /*0x10049746d*/
          }
          *(_QWORD *)(v42 + v11 - 240) = v38; /*0x100497471*/
          *(_QWORD *)(v84 + v11 - 232) = v81; /*0x100497481*/
          v12 = v84; /*0x100497489*/
          *(_QWORD *)(v84 + v11 - 224) = v67; /*0x100497494*/
          *(_QWORD *)(v12 + v11 - 216) = v68; /*0x1004974a3*/
          _mm_storel_ps((double *)(v12 + v11 - 208), v62); /*0x1004974b2*/
          *(_QWORD *)(v12 + v11 - 200) = v69; /*0x1004974c2*/
          si128.i64[0] = _mm_load_si128(&v63).u64[0]; /*0x1004974ca*/
          *(_QWORD *)(v12 + v11 - 192) = si128.i64[0]; /*0x1004974d2*/
          *(_QWORD *)(v12 + v11 - 184) = v66; /*0x1004974e3*/
          *(_QWORD *)(v12 + v11 - 176) = v70; /*0x1004974f2*/
          *(_QWORD *)(v12 + v11 - 168) = v71; /*0x100497501*/
          *(_QWORD *)(v12 + v11 - 160) = v72; /*0x100497510*/
          v9 = v73; /*0x100497518*/
          *(_QWORD *)(v12 + v11 - 152) = v73; /*0x10049751f*/
          if ( v76[0] != 0x8000000000000000LL && v76[0] ) /*0x100497536*/
          {
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[1], v76[0], 1); /*0x100497544*/
            v12 = v84; /*0x100497549*/
          }
          if ( v76[3] != 0x8000000000000000LL && v76[3] ) /*0x10049755c*/
          {
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[4], v76[3], 1); /*0x10049756a*/
            v12 = v84; /*0x10049756f*/
          }
          v23 = (void *)v76[6]; /*0x100497573*/
          if ( v76[6] == 0x8000000000000000LL || !v76[6] ) /*0x100497583*/
            goto LABEL_7; /*0x100497583*/
          v22 = v76[7]; /*0x100497589*/
          goto LABEL_32; /*0x100497592*/
        }
      }
    }
LABEL_109:
    v39 = __dst; /*0x100497597*/
    if ( __dst != (_QWORD *)0x8000000000000000LL ) /*0x1004975a1*/
    {
LABEL_110:
      if ( v39 ) /*0x1004975a6*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75[0], v39, 1); /*0x1004975b4*/
    }
LABEL_112:
    v37 = v76[0]; /*0x1004975b9*/
LABEL_113:
    if ( v37 != 0x8000000000000000LL && v37 ) /*0x1004975c8*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[1], v37, 1); /*0x1004975d9*/
    if ( v76[3] != 0x8000000000000000LL && v76[3] ) /*0x1004975ed*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[4], v76[3], 1); /*0x1004975fb*/
    v10 = v80; /*0x100497607*/
    if ( v76[6] != 0x8000000000000000LL && v76[6] ) /*0x100497614*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[7], v76[6], 1); /*0x100497623*/
    if ( !(2LL * (_QWORD)v38) ) /*0x100496c7b*/
      goto LABEL_6; /*0x100496c86*/
    v22 = v81; /*0x100496e5e*/
    v23 = v38; /*0x100496e62*/
LABEL_32:
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v23, 1); /*0x100496e65*/
LABEL_6:
    v12 = v84; /*0x100496c8c*/
LABEL_7:
    v11 += 440; /*0x100496c90*/
    a2 += 12; /*0x100496c97*/
    if ( v10 == v11 ) /*0x100496c9e*/
      goto LABEL_122; /*0x100496c9e*/
  }
  __dst = a2; /*0x10049764a*/
  v75[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100497658*/
  v75[1] = v76; /*0x100497666*/
  v75[2] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h8b4ddf12e005bcdf; /*0x100497674*/
  v75[3] = &v76[3]; /*0x100497682*/
  v75[4] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h8b4ddf12e005bcdf; /*0x100497689*/
  v75[5] = &v77; /*0x100497694*/
  v75[6] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1004976a2*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v61, &unk_1018F845F, &__dst); /*0x1004976be*/
  v44 = v79; /*0x1004976ca*/
  v79[3] = v61[2]; /*0x1004976ce*/
  v45 = v61[0]; /*0x1004976d2*/
  v44[2] = v61[1]; /*0x1004976e0*/
  v44[1] = v45; /*0x1004976e4*/
  *v44 = 10; /*0x1004976e8*/
  if ( v76[0] != 0x8000000000000000LL && v76[0] ) /*0x100497708*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[1], v76[0], 1); /*0x100497716*/
  v32 = (unsigned __int64)__s2; /*0x100497725*/
  if ( v76[3] != 0x8000000000000000LL && v76[3] ) /*0x10049772e*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[4], v76[3], 1); /*0x10049773c*/
  if ( v76[6] != 0x8000000000000000LL && v76[6] ) /*0x10049774d*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[7], v76[6], 1); /*0x100497758*/
  if ( 2 * v32 ) /*0x10049775d*/
LABEL_137:
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v32, 1); /*0x10049782a*/
  return *(double *)si128.i64; /*0x100497638*/
}
