// __ZN13codexmate_lib4core9analytics9visit_dir @ 0x10068d530 | 基线 same-set
char __fastcall codexmate_lib::core::analytics::visit_dir::h6b28d406e57ace1e(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        size_t a6,
        __m128d a7,
        __int64 *a8,
        __int64 a9,
        _QWORD *a10)
{
  char v13; // al
  __int64 v14; // rax
  size_t v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rax
  size_t v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r15
  size_t v31; // rbx
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m128i v36; // xmm4
  __m128i v37; // xmm5
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __int64 v40; // rdx
  __m128i si128; // xmm2
  __m128i v42; // xmm3
  __m128i v43; // xmm1
  __int64 v44; // rdx
  size_t v45; // rsi
  char v46; // di
  char v47; // cl
  char v48; // cl
  char v49; // cl
  char v50; // cl
  unsigned __int64 v51; // rax
  __m128i v52; // xmm1
  void *v53; // rbx
  size_t v54; // r15
  __int64 i; // rdx
  __int64 v56; // rax
  __m128i v58; // xmm2
  __int64 v60; // r13
  int v61; // eax
  bool v62; // zf
  __int64 v63; // r13
  signed __int64 v64; // rbx
  __int64 v65; // rsi
  const void *v66; // r15
  __int64 v67; // r13
  __int64 v68; // r12
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 v72; // r15
  __int64 v73; // r13
  __int64 v74; // rsi
  __int64 v75; // rax
  int v76; // r14d
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // r14
  __int64 v80; // r12
  __int64 v81; // rax
  __int64 v82; // rsi
  unsigned int v83; // r12d
  __int64 v84; // rdx
  unsigned int v85; // eax
  __int64 v86; // r13
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __m128d v90; // xmm1
  __int64 v91; // rsi
  __m128d v92; // xmm2
  __m128i v93; // xmm6
  __m128d v94; // xmm3
  __m128d v95; // xmm2
  __m128d v96; // xmm1
  __m128i v97; // xmm4
  __m128i v98; // xmm0
  __m128i v99; // xmm5
  __m128i v100; // xmm4
  __m128d v101; // xmm2
  __m128i v102; // xmm4
  __m128i v103; // xmm0
  __m128i v104; // xmm5
  __m128i v105; // xmm4
  __m128i v106; // xmm0
  __m128i v107; // xmm3
  __m128i v108; // xmm4
  __m128i v109; // xmm3
  __m128d v110; // xmm2
  __m128d v111; // xmm1
  __m128i v112; // xmm3
  __m128i v113; // xmm0
  __m128i v114; // xmm4
  __m128i v115; // xmm3
  int v116; // eax
  __int64 v117; // r14
  __int64 v118; // r12
  __int64 v119; // rbx
  __int64 v120; // r15
  __int64 v121; // rsi
  __int64 v122; // r15
  __int64 v123; // r14
  __int64 v124; // rsi
  size_t v125; // r13
  __int64 v126; // rdi
  const void *v127; // rsi
  __int64 v128; // r14
  size_t v129; // r12
  const void *v130; // r15
  __int64 v131; // r15
  _QWORD *v132; // r13
  __int64 v133; // r12
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // r14
  __int64 v137; // rbx
  __int64 v138; // r15
  __int64 v139; // rsi
  __int64 v140; // r14
  __int64 v141; // rbx
  __int64 v142; // r15
  __int64 v143; // rsi
  __int64 v145; // [rsp+20h] [rbp-F80h] BYREF
  _BYTE __src[1056]; // [rsp+28h] [rbp-F78h] BYREF
  volatile signed __int64 *v147[132]; // [rsp+448h] [rbp-B58h] BYREF
  _QWORD __dst[132]; // [rsp+868h] [rbp-738h] BYREF
  __int64 v149; // [rsp+C88h] [rbp-318h]
  _QWORD v150[18]; // [rsp+C90h] [rbp-310h] BYREF
  __m128i v151; // [rsp+D20h] [rbp-280h] BYREF
  __int64 v152; // [rsp+D38h] [rbp-268h]
  _QWORD *v153; // [rsp+D40h] [rbp-260h]
  __int64 v154; // [rsp+D48h] [rbp-258h]
  __m128i v155; // [rsp+D50h] [rbp-250h] BYREF
  _QWORD v156[10]; // [rsp+D60h] [rbp-240h] BYREF
  __int64 v157; // [rsp+DB0h] [rbp-1F0h] BYREF
  void *v158; // [rsp+DB8h] [rbp-1E8h]
  size_t v159; // [rsp+DC0h] [rbp-1E0h]
  __int64 v160; // [rsp+DC8h] [rbp-1D8h]
  __int64 v161; // [rsp+DD0h] [rbp-1D0h]
  __int64 v162; // [rsp+DD8h] [rbp-1C8h]
  _BYTE v163[152]; // [rsp+DE0h] [rbp-1C0h] BYREF
  size_t v164; // [rsp+E78h] [rbp-128h] BYREF
  void *v165; // [rsp+E80h] [rbp-120h]
  size_t v166; // [rsp+E88h] [rbp-118h]
  __int64 v167; // [rsp+E90h] [rbp-110h]
  volatile signed __int64 *v168; // [rsp+E98h] [rbp-108h] BYREF
  char v169; // [rsp+EA0h] [rbp-100h]
  size_t v170; // [rsp+EA8h] [rbp-F8h] BYREF
  void *__s1; // [rsp+EB0h] [rbp-F0h]
  size_t __n; // [rsp+EB8h] [rbp-E8h]
  void *__s2; // [rsp+EC0h] [rbp-E0h]
  __int64 v174; // [rsp+EC8h] [rbp-D8h]
  size_t v175; // [rsp+ED0h] [rbp-D0h]
  __int128 v176; // [rsp+ED8h] [rbp-C8h] BYREF
  __int64 v177; // [rsp+EE8h] [rbp-B8h]
  __int64 v178; // [rsp+EF0h] [rbp-B0h]
  __int64 v179; // [rsp+EF8h] [rbp-A8h]
  __int64 v180; // [rsp+F00h] [rbp-A0h]
  __int64 v181; // [rsp+F08h] [rbp-98h]
  __int128 v182; // [rsp+F28h] [rbp-78h] BYREF
  __int64 v183; // [rsp+F38h] [rbp-68h]
  unsigned __int64 v184; // [rsp+F40h] [rbp-60h]
  __int64 v185; // [rsp+F48h] [rbp-58h]
  __int64 v186; // [rsp+F50h] [rbp-50h]
  __int64 v187; // [rsp+F58h] [rbp-48h]
  int v188; // [rsp+F64h] [rbp-3Ch]
  __int64 v189; // [rsp+F68h] [rbp-38h]
  void *v190; // [rsp+F70h] [rbp-30h]

  __s2 = a5; /*0x10068d547*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v145, a1, a2); /*0x10068d561*/
  if ( __src[0] == 2 ) /*0x10068d577*/
  {
    if ( (v145 & 3) == 1 ) /*0x10068d581*/
    {
      v140 = v145 - 1; /*0x10068e7cc*/
      v141 = *(_QWORD *)(v145 - 1); /*0x10068e7d0*/
      v142 = *(_QWORD *)(v145 + 7); /*0x10068e7d4*/
      if ( *(_QWORD *)v142 ) /*0x10068e7d8*/
        (*(void (__fastcall **)(__int64))v142)(v141); /*0x10068e7e3*/
      v143 = *(_QWORD *)(v142 + 8); /*0x10068e7e5*/
      if ( v143 ) /*0x10068e7ec*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v143, *(_QWORD *)(v142 + 16)); /*0x10068e7f5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, 24, 8); /*0x10068e807*/
      v13 = 0; /*0x10068e80c*/
    }
    else
    {
      v13 = 0; /*0x10068d587*/
    }
    return v13 & 1; /*0x10068d589*/
  }
  v168 = (volatile signed __int64 *)v145; /*0x10068d592*/
  v169 = __src[0]; /*0x10068d599*/
  v175 = a6; /*0x10068d59f*/
  v152 = a8[3]; /*0x10068d5b1*/
  v153 = a8 + 4; /*0x10068d5bc*/
  v14 = *a8; /*0x10068d5c3*/
  v162 = a8[1]; /*0x10068d5ca*/
  v174 = v14; /*0x10068d5d1*/
  v14 -= 104; /*0x10068d5d8*/
  v154 = v14; /*0x10068d5dc*/
  LOBYTE(v14) = 1; /*0x10068d5e3*/
  v188 = v14; /*0x10068d5e5*/
  v160 = a4; /*0x10068d5e8*/
  v161 = a3; /*0x10068d5ef*/
  while ( 1 ) /*0x10068d604*/
  {
    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(&v145); /*0x10068d604*/
    if ( (_DWORD)v145 != 1 ) /*0x10068d610*/
      break; /*0x10068d610*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x10068d625*/
    if ( !__dst[0] ) /*0x10068d632*/
    {
      v188 = 0; /*0x10068e18c*/
      goto LABEL_136; /*0x10068e193*/
    }
    memcpy(v147, __src, sizeof(v147)); /*0x10068d64a*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v157, v147); /*0x10068d659*/
    v15 = v159; /*0x10068d665*/
    v190 = v158; /*0x10068d66c*/
    if ( (unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e(v158, v159) ) /*0x10068d673*/
    {
      v116 = codexmate_lib::core::analytics::visit_dir::h6b28d406e57ace1e( /*0x10068e2d9*/
               (_DWORD)v190,
               v15,
               a3,
               a4,
               (_DWORD)__s2,
               v175,
               (__int64)a8,
               a9,
               (__int64)a10);
      LOBYTE(v116) = v188 & v116; /*0x10068e2de*/
      v188 = v116; /*0x10068e2e1*/
LABEL_131:
      if ( v157 ) /*0x10068e2ee*/
        a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v157, 1); /*0x10068e2f9*/
      if ( !_InterlockedDecrement64(v147[0]) ) /*0x10068e305*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v147); /*0x10068e312*/
      if ( !__dst[0] ) /*0x10068e31f*/
      {
LABEL_136:
        if ( (__dst[1] & 3) == 1 ) /*0x10068e334*/
        {
          v117 = a3; /*0x10068e33a*/
          v118 = a4; /*0x10068e33d*/
          v190 = (void *)(__dst[1] - 1LL); /*0x10068e344*/
          v119 = *(_QWORD *)(__dst[1] - 1LL); /*0x10068e348*/
          v120 = *(_QWORD *)(__dst[1] + 7LL); /*0x10068e34c*/
          if ( *(_QWORD *)v120 ) /*0x10068e350*/
            (*(void (__fastcall **)(__int64))v120)(v119); /*0x10068e35b*/
          v121 = *(_QWORD *)(v120 + 8); /*0x10068e35d*/
          if ( v121 ) /*0x10068e364*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v121, *(_QWORD *)(v120 + 16)); /*0x10068e36d*/
          a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, 24, 8); /*0x10068e380*/
          a4 = v118; /*0x10068e385*/
          a3 = v117; /*0x10068e388*/
        }
      }
    }
    else
    {
      v16 = std::path::Path::file_name::hf6c2daad91e50ebf(v190, v15); /*0x10068d687*/
      if ( !v16 ) /*0x10068d68f*/
        goto LABEL_131; /*0x10068d68f*/
      core::str::converts::from_utf8::hb32deb9559450f6e(v163, v16, v17); /*0x10068d69f*/
      if ( v163[0] /*0x10068d6f1*/
        || *(_QWORD *)&v163[16] < 8u
        || **(_QWORD **)&v163[8] != 0x2D74756F6C6C6F72LL
        || *(_DWORD *)(*(_QWORD *)&v163[8] + *(_QWORD *)&v163[16] - 6LL) ^ 0x6F736A2E
         | *(unsigned __int16 *)(*(_QWORD *)&v163[8] + *(_QWORD *)&v163[16] - 2LL) ^ 0x6C6E )
      {
        goto LABEL_131; /*0x10068d6f3*/
      }
      std::fs::DirEntry::metadata::hcca7f11ed9733fc8(v163, v147); /*0x10068d707*/
      if ( *(_DWORD *)v163 == 1 ) /*0x10068d713*/
      {
        v149 = 0; /*0x10068d719*/
        if ( (v163[8] & 3) == 1 ) /*0x10068d733*/
        {
          v18 = a4; /*0x10068d735*/
          v187 = *(_QWORD *)&v163[8] - 1LL; /*0x10068d73c*/
          v19 = *(_QWORD *)(*(_QWORD *)&v163[8] - 1LL); /*0x10068d740*/
          v20 = *(_QWORD *)(*(_QWORD *)&v163[8] + 7LL); /*0x10068d744*/
          if ( *(_QWORD *)v20 ) /*0x10068d748*/
            (*(void (__fastcall **)(__int64))v20)(v19); /*0x10068d754*/
          v21 = *(_QWORD *)(v20 + 8); /*0x10068d756*/
          if ( v21 ) /*0x10068d75d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v21, *(_QWORD *)(v20 + 16)); /*0x10068d766*/
          a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v187, 24, 8); /*0x10068d779*/
          a4 = v18; /*0x10068d77e*/
        }
        v189 = 0; /*0x10068d781*/
        v187 = 0; /*0x10068d789*/
      }
      else
      {
        memcpy(v150, &v163[8], sizeof(v150)); /*0x10068d7b6*/
        v149 = 1; /*0x10068d7bb*/
        v22 = v150[12]; /*0x10068d7c6*/
        if ( v150[12] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x10068d7da*/
          v22 = 0x7FFFFFFFFFFFFFFFLL; /*0x10068d7da*/
        v187 = v22; /*0x10068d7de*/
        std::fs::Metadata::modified::h0e075817eaa8c909(v163, v150); /*0x10068d7ec*/
        if ( *(_DWORD *)&v163[8] == 1000000000 ) /*0x10068d7fc*/
        {
          if ( (v163[0] & 3) == 1 ) /*0x10068d80d*/
          {
            v23 = a4; /*0x10068d813*/
            v189 = *(_QWORD *)v163 - 1LL; /*0x10068d81a*/
            v24 = *(_QWORD *)(*(_QWORD *)v163 - 1LL); /*0x10068d81e*/
            v25 = *(_QWORD *)(*(_QWORD *)v163 + 7LL); /*0x10068d822*/
            if ( *(_QWORD *)v25 ) /*0x10068d826*/
              (*(void (__fastcall **)(__int64))v25)(v24); /*0x10068d832*/
            v26 = *(_QWORD *)(v25 + 8); /*0x10068d834*/
            if ( v26 ) /*0x10068d83b*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v26, *(_QWORD *)(v25 + 16)); /*0x10068d844*/
            a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, 24, 8); /*0x10068d857*/
            a4 = v23; /*0x10068d85c*/
          }
LABEL_31:
          v189 = 0; /*0x10068d8a4*/
          goto LABEL_33; /*0x10068d8ac*/
        }
        *(_QWORD *)&v176 = *(_QWORD *)v163; /*0x10068d877*/
        DWORD2(v176) = *(_DWORD *)&v163[8]; /*0x10068d87e*/
        std::time::SystemTime::duration_since::had059553cab94f96(v163, &v176, 0, 0); /*0x10068d896*/
        if ( *(_DWORD *)v163 == 1 ) /*0x10068d8a2*/
          goto LABEL_31; /*0x10068d8a2*/
        v184 = (*(unsigned int *)&v163[16] + 1000000000LL * *(_QWORD *)&v163[8]) /*0x10068d8d5*/
             | -(__int64)((*(unsigned int *)&v163[16] + *(unsigned __int64 *)&v163[8] * (unsigned __int128)0x3B9ACA00uLL) >> 64 != 0);
        v189 = 1; /*0x10068d8de*/
      }
LABEL_33:
      v27 = std::path::Path::_strip_prefix::h737731a9318ab115(v190, v15, a3, a4); /*0x10068d8f0*/
      if ( !v27 ) /*0x10068d905*/
      {
        v28 = v15; /*0x10068d905*/
        v27 = (__int64)v190; /*0x10068d909*/
      }
      v29 = v27; /*0x10068d915*/
      alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v163, v27, v28); /*0x10068d918*/
      v30 = *(_QWORD *)&v163[8]; /*0x10068d91d*/
      v31 = *(_QWORD *)&v163[16]; /*0x10068d924*/
      if ( *(__int64 *)&v163[16] < 0 ) /*0x10068d92e*/
      {
        v32 = 0; /*0x10068e7b9*/
LABEL_185:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v31); /*0x10068e7bc*/
      }
      if ( !*(_QWORD *)&v163[16] ) /*0x10068d934*/
      {
        v33 = 1; /*0x10068d979*/
        goto LABEL_65; /*0x10068d97e*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v29); /*0x10068d936*/
      v32 = 1; /*0x10068d93b*/
      v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1); /*0x10068d949*/
      if ( !v33 ) /*0x10068d951*/
        goto LABEL_185; /*0x10068d951*/
      if ( v31 < 8 || (unsigned __int64)(v33 - v30) < 0x20 ) /*0x10068d968*/
      {
        v34 = 0; /*0x10068d972*/
      }
      else
      {
        if ( v31 < 0x20 ) /*0x10068d987*/
        {
          v34 = 0; /*0x10068d989*/
LABEL_47:
          v40 = v34; /*0x10068d9fd*/
          v34 = v31 & 0x7FFFFFFFFFFFFFF8LL; /*0x10068da0e*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x10068da11*/
          v42 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x10068da19*/
          do /*0x10068da4f*/
          {
            v43 = _mm_loadl_epi64((const __m128i *)(v30 + v40)); /*0x10068da30*/
            a7 = (__m128d)_mm_cmpeq_epi8(v43, si128); /*0x10068da3a*/
            *(_QWORD *)(v33 + v40) = _mm_blendv_epi8(v43, v42, (__m128i)a7).u64[0]; /*0x10068da43*/
            v40 += 8; /*0x10068da48*/
          }
          while ( v34 != v40 ); /*0x10068da4f*/
          if ( v31 == v34 ) /*0x10068da54*/
            goto LABEL_65; /*0x10068da54*/
          goto LABEL_50; /*0x10068da54*/
        }
        v34 = v31 & 0x7FFFFFFFFFFFFFE0LL; /*0x10068d99a*/
        v35 = 0; /*0x10068d99d*/
        v36 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x10068d99f*/
        v37 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x10068d9a7*/
        do /*0x10068d9ed*/
        {
          v38 = _mm_loadu_si128((const __m128i *)(v30 + v35)); /*0x10068d9b0*/
          v39 = _mm_loadu_si128((const __m128i *)(v30 + v35 + 16)); /*0x10068d9b6*/
          a7 = (__m128d)_mm_cmpeq_epi8(v39, v36); /*0x10068d9d2*/
          *(__m128i *)(v33 + v35) = _mm_blendv_epi8(v38, v37, _mm_cmpeq_epi8(v38, v36)); /*0x10068d9db*/
          *(__m128i *)(v33 + v35 + 16) = _mm_blendv_epi8(v39, v37, (__m128i)a7); /*0x10068d9e0*/
          v35 += 32; /*0x10068d9e6*/
        }
        while ( v34 != v35 ); /*0x10068d9ed*/
        if ( v31 == v34 ) /*0x10068d9f2*/
          goto LABEL_65; /*0x10068d9f2*/
        if ( (v31 & 0x18) != 0 ) /*0x10068d9fb*/
          goto LABEL_47; /*0x10068d9fb*/
      }
LABEL_50:
      v44 = v34; /*0x10068da5a*/
      v45 = v31 & 3; /*0x10068da60*/
      if ( (v31 & 3) != 0 ) /*0x10068da6a*/
      {
        v44 = v34; /*0x10068da6c*/
        do /*0x10068da87*/
        {
          v46 = *(_BYTE *)(v30 + v44); /*0x10068da70*/
          if ( v46 == 92 ) /*0x10068da79*/
            v46 = 47; /*0x10068da79*/
          *(_BYTE *)(v33 + v44++) = v46; /*0x10068da7d*/
          --v45; /*0x10068da84*/
        }
        while ( v45 ); /*0x10068da87*/
      }
      if ( v34 - v31 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x10068da90*/
      {
        do /*0x10068dae9*/
        {
          v47 = *(_BYTE *)(v30 + v44); /*0x10068daa0*/
          if ( v47 == 92 ) /*0x10068daa8*/
            v47 = 47; /*0x10068daa8*/
          *(_BYTE *)(v33 + v44) = v47; /*0x10068daac*/
          v48 = *(_BYTE *)(v30 + v44 + 1); /*0x10068daaf*/
          if ( v48 == 92 ) /*0x10068dab8*/
            v48 = 47; /*0x10068dab8*/
          *(_BYTE *)(v33 + v44 + 1) = v48; /*0x10068dabc*/
          v49 = *(_BYTE *)(v30 + v44 + 2); /*0x10068dac0*/
          if ( v49 == 92 ) /*0x10068dac9*/
            v49 = 47; /*0x10068dac9*/
          *(_BYTE *)(v33 + v44 + 2) = v49; /*0x10068dacd*/
          v50 = *(_BYTE *)(v30 + v44 + 3); /*0x10068dad1*/
          if ( v50 == 92 ) /*0x10068dada*/
            v50 = 47; /*0x10068dada*/
          *(_BYTE *)(v33 + v44 + 3) = v50; /*0x10068dade*/
          v44 += 4; /*0x10068dae2*/
        }
        while ( v31 != v44 ); /*0x10068dae9*/
      }
LABEL_65:
      v170 = v31; /*0x10068daeb*/
      __s1 = (void *)v33; /*0x10068daf2*/
      __n = v31; /*0x10068daf9*/
      if ( 2LL * *(_QWORD *)v163 ) /*0x10068db07*/
      {
        a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, *(_QWORD *)v163, 1); /*0x10068db2b*/
        if ( !v152 ) /*0x10068db38*/
          goto LABEL_83; /*0x10068db38*/
      }
      else if ( !v152 ) /*0x10068db1c*/
      {
        goto LABEL_83; /*0x10068db1c*/
      }
      v51 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v153, &v170); /*0x10068db4c*/
      v52 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v51 >> 57), (__m128i)0LL); /*0x10068db60*/
      v53 = __s1; /*0x10068db65*/
      v54 = __n; /*0x10068db6c*/
      for ( i = 0; ; i += 16 ) /*0x10068db73*/
      {
        v56 = v162 & v51; /*0x10068db75*/
        HIDWORD(_RCX) = HIDWORD(v174); /*0x10068db7c*/
        v58 = _mm_loadu_si128((const __m128i *)(v174 + v56)); /*0x10068db83*/
        a7 = (__m128d)_mm_cmpeq_epi8(v58, v52); /*0x10068db8c*/
        _R12D = _mm_movemask_epi8((__m128i)a7); /*0x10068db90*/
        if ( _R12D ) /*0x10068db98*/
          break; /*0x10068db98*/
LABEL_75:
        a7.f64[0] = NAN; /*0x10068dc12*/
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v58, (__m128i)-1LL)) ) /*0x10068dc1a*/
          goto LABEL_83; /*0x10068dc20*/
        v51 = v56 + i + 16; /*0x10068dc26*/
      }
      v186 = v56; /*0x10068db9a*/
      v155 = v52; /*0x10068db9e*/
      v185 = i; /*0x10068dba6*/
      v151 = v58; /*0x10068dbaa*/
      while ( 1 ) /*0x10068dbb2*/
      {
        __asm { tzcnt ecx, r12d } /*0x10068dbb2*/
        _RCX = -(v162 & (v56 + _RCX)); /*0x10068dbc1*/
        v60 = 104 * _RCX; /*0x10068dbc4*/
        if ( v54 == *(_QWORD *)(v154 + 104 * _RCX + 16) && !memcmp(v53, *(const void **)(v60 + v154 + 8), v54) ) /*0x10068dbe3*/
          break; /*0x10068dbe3*/
        v61 = _R12D - 1; /*0x10068dbec*/
        LOWORD(v61) = _R12D & (_R12D - 1); /*0x10068dbf1*/
        v62 = (_WORD)v61 == 0; /*0x10068dbf1*/
        _R12D = v61; /*0x10068dbf5*/
        v56 = v186; /*0x10068dbf8*/
        v52 = _mm_load_si128(&v155); /*0x10068dbfc*/
        i = v185; /*0x10068dc04*/
        v58 = _mm_load_si128(&v151); /*0x10068dc08*/
        if ( v62 ) /*0x10068dc10*/
          goto LABEL_75; /*0x10068dc10*/
      }
      if ( *(_QWORD *)(v174 + v60 - 16) != v187 /*0x10068dc61*/
        || (v63 = v174 + v60, ((unsigned __int8)v189 & *(_BYTE *)(v63 - 80)) != 1)
        || *(_QWORD *)(v63 - 72) != v184 )
      {
LABEL_83:
        v64 = v184 / 0x3B9ACA00; /*0x10068dcc0*/
        if ( !v189 ) /*0x10068dce3*/
          v64 = 0; /*0x10068dce3*/
        LODWORD(v176) = 0; /*0x10068dce7*/
        WORD2(v176) = 438; /*0x10068dcf1*/
        WORD5(v176) = 0; /*0x10068dd01*/
        *(_DWORD *)((char *)&v176 + 6) = 1; /*0x10068dd07*/
        v69 = (__int64)&v176; /*0x10068dd1b*/
        std::fs::OpenOptions::_open::h1dad73452047b8aa(v163, &v176, v190, v15); /*0x10068dd29*/
        if ( v163[0] ) /*0x10068dd35*/
        {
          if ( (v163[8] & 3) == 1 ) /*0x10068dd54*/
          {
            v71 = *(_QWORD *)&v163[8] - 1LL; /*0x10068dd56*/
            v72 = *(_QWORD *)(*(_QWORD *)&v163[8] - 1LL); /*0x10068dd5a*/
            v73 = *(_QWORD *)(*(_QWORD *)&v163[8] + 7LL); /*0x10068dd5e*/
            if ( *(_QWORD *)v73 ) /*0x10068dd62*/
              (*(void (__fastcall **)(__int64))v73)(v72); /*0x10068dd6e*/
            v74 = *(_QWORD *)(v73 + 8); /*0x10068dd70*/
            if ( v74 ) /*0x10068dd77*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v74, *(_QWORD *)(v73 + 16)); /*0x10068dd80*/
            v69 = 24; /*0x10068dd85*/
            a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, 24, 8); /*0x10068dd92*/
          }
          *(_QWORD *)&v176 = 0; /*0x10068dda1*/
          *((_QWORD *)&v176 + 1) = 8; /*0x10068ddac*/
          v177 = 0; /*0x10068ddb7*/
          v75 = 0; /*0x10068ddc2*/
          goto LABEL_118; /*0x10068ddc7*/
        }
        v76 = *(_DWORD *)&v163[4]; /*0x10068ddd2*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, &v176); /*0x10068ddd9*/
        v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x10068dde8*/
        if ( !v77 ) /*0x10068ddfa*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x10068e84a*/
        v179 = 0; /*0x10068de07*/
        v178 = 0; /*0x10068de0f*/
        v177 = 0; /*0x10068de17*/
        *(_QWORD *)&v182 = 0; /*0x10068de1f*/
        *((_QWORD *)&v182 + 1) = 8; /*0x10068de27*/
        v183 = 0; /*0x10068de2f*/
        *(_QWORD *)&v176 = v77; /*0x10068de37*/
        *((_QWORD *)&v176 + 1) = 0x2000; /*0x10068de3e*/
        LODWORD(v180) = v76; /*0x10068de49*/
        while ( 1 ) /*0x10068de5e*/
        {
          _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3e6b44ac088bb82( /*0x10068de5e*/
            v163,
            &v176);
          v78 = *(_QWORD *)v163; /*0x10068de63*/
          if ( *(_QWORD *)v163 == 0x8000000000000001LL ) /*0x10068de7b*/
            goto LABEL_115; /*0x10068de7b*/
          v79 = *(_QWORD *)&v163[8]; /*0x10068de81*/
          if ( *(_QWORD *)v163 == 0x8000000000000000LL ) /*0x10068de8f*/
            break; /*0x10068de8f*/
          v80 = *(_QWORD *)&v163[16]; /*0x10068de95*/
          if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10068deae*/
                                  "\"timestamp\"",
                                  0xBu,
                                  *(void **)&v163[8]) )
          {
            *(_QWORD *)v163 = v79; /*0x10068debb*/
            *(_QWORD *)&v163[8] = v80; /*0x10068dec2*/
            *(_QWORD *)&v163[24] = 0; /*0x10068ded0*/
            *(_QWORD *)&v163[16] = 0; /*0x10068ded8*/
            *(_QWORD *)&v163[32] = v79; /*0x10068dee0*/
            *(_QWORD *)&v163[40] = v80; /*0x10068dee7*/
            serde_json::de::from_trait::h51e180b4bb6af5e0(&v164, v163); /*0x10068defc*/
            if ( (_BYTE)v164 == 6 ) /*0x10068df08*/
            {
              core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0( /*0x10068df11*/
                &v164,
                a7.f64[0]);
            }
            else
            {
              *(_QWORD *)&v163[24] = v167; /*0x10068df27*/
              *(_QWORD *)&v163[16] = v166; /*0x10068df35*/
              *(_QWORD *)&v163[8] = v165; /*0x10068df4a*/
              *(_QWORD *)v163 = v164; /*0x10068df51*/
              v81 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10068df6b*/
                      &unk_101604474,
                      9,
                      v163);
              if ( v81 && *(_BYTE *)v81 == 3 /*0x10068df9e*/
                || (v81 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v163, &unk_10160447D, 18)) != 0
                && *(_BYTE *)v81 == 3 )
              {
                v82 = *(_QWORD *)(v81 + 16); /*0x10068dfa4*/
                chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x10068dfb3*/
                  &v164,
                  v82,
                  *(_QWORD *)(v81 + 24));
                v83 = v164; /*0x10068dfb8*/
                if ( (_DWORD)v164 ) /*0x10068dfc2*/
                {
                  v84 = (unsigned int)(((int)v164 >> 13) - 1); /*0x10068dfce*/
                  if ( (int)v164 >> 13 <= 0 ) /*0x10068dfd3*/
                  {
                    v85 = (1 - ((int)v164 >> 13)) / 0x190u + 1; /*0x10068dff3*/
                    v84 = 400 * v85 + (unsigned int)v84; /*0x10068dffb*/
                    LODWORD(v185) = v84; /*0x10068dffd*/
                    LODWORD(v186) = -146097 * v85; /*0x10068e006*/
                  }
                  else
                  {
                    LODWORD(v185) = ((int)v164 >> 13) - 1; /*0x10068dfd5*/
                    LODWORD(v186) = 0; /*0x10068dfd8*/
                  }
                  v155.i64[0] = HIDWORD(v164); /*0x10068e00f*/
                  v86 = v183; /*0x10068e016*/
                  if ( v183 == (_QWORD)v182 ) /*0x10068e01e*/
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9a78bff108d63cfd(&v182, v82, v84); /*0x10068e024*/
                  *(_QWORD *)(*((_QWORD *)&v182 + 1) + 8 * v86) = v155.i64[0] /*0x10068e07e*/
                                                                + 86400LL
                                                                * (int)((((int)v185 / 100) >> 2)
                                                                      + ((1461 * (int)v185) >> 2)
                                                                      + v186
                                                                      + ((v83 >> 4) & 0x1FF)
                                                                      - (int)v185 / 100
                                                                      - 719163);
                  v183 = v86 + 1; /*0x10068e085*/
                }
              }
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v163, a7.f64[0]); /*0x10068e090*/
            }
          }
          if ( v78 ) /*0x10068e0a2*/
            a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v78, 1); /*0x10068e0b3*/
        }
        if ( (v163[8] & 3) != 1 ) /*0x10068e0c6*/
        {
LABEL_115:
          v69 = *((_QWORD *)&v176 + 1); /*0x10068e0cc*/
          if ( !*((_QWORD *)&v176 + 1) ) /*0x10068e0d6*/
            goto LABEL_117; /*0x10068e0d6*/
LABEL_116:
          a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v176, v69, 1); /*0x10068e0d8*/
          goto LABEL_117; /*0x10068e0e4*/
        }
        v186 = *(_QWORD *)&v163[8] - 1LL; /*0x10068e394*/
        v122 = *(_QWORD *)(*(_QWORD *)&v163[8] - 1LL); /*0x10068e398*/
        v123 = *(_QWORD *)(*(_QWORD *)&v163[8] + 7LL); /*0x10068e39c*/
        if ( *(_QWORD *)v123 ) /*0x10068e3a0*/
          (*(void (__fastcall **)(__int64))v123)(v122); /*0x10068e3ab*/
        v124 = *(_QWORD *)(v123 + 8); /*0x10068e3ad*/
        if ( v124 ) /*0x10068e3b4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v124, *(_QWORD *)(v123 + 16)); /*0x10068e3bd*/
        a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v186, 24, 8); /*0x10068e3d0*/
        v69 = *((_QWORD *)&v176 + 1); /*0x10068e3d5*/
        if ( *((_QWORD *)&v176 + 1) ) /*0x10068e3df*/
          goto LABEL_116; /*0x10068e3df*/
LABEL_117:
        close_NOCANCEL((unsigned int)v180); /*0x10068e0e9*/
        v75 = v183; /*0x10068e0f4*/
        v177 = v183; /*0x10068e0f8*/
        v70 = *((_QWORD *)&v182 + 1); /*0x10068e103*/
        v176 = v182; /*0x10068e107*/
        if ( !v183 ) /*0x10068e118*/
        {
LABEL_118:
          if ( v64 ) /*0x10068e11d*/
          {
            if ( !(_QWORD)v176 ) /*0x10068e127*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9a78bff108d63cfd(&v176, v69, v70); /*0x10068e130*/
            **((_QWORD **)&v176 + 1) = v64; /*0x10068e13c*/
            v177 = 1; /*0x10068e13f*/
            v64 = **((_QWORD **)&v176 + 1); /*0x10068e151*/
            goto LABEL_179; /*0x10068e154*/
          }
        }
        if ( v75 ) /*0x10068e15c*/
        {
          v64 = **((_QWORD **)&v176 + 1); /*0x10068e169*/
          if ( v75 != 1 ) /*0x10068e170*/
          {
            v87 = v75 + 0x1FFFFFFFFFFFFFFFLL; /*0x10068e176*/
            v88 = v87 & 0x1FFFFFFFFFFFFFFFLL; /*0x10068e17c*/
            if ( (v87 & 0x1FFFFFFFFFFFFFFFuLL) < 4 ) /*0x10068e183*/
            {
              v89 = 0; /*0x10068e185*/
              goto LABEL_175; /*0x10068e187*/
            }
            v89 = v87 & 0x1FFFFFFFFFFFFFFCLL; /*0x10068e19c*/
            v90 = (__m128d)_mm_shuffle_epi32((__m128i)(unsigned __int64)v64, 68); /*0x10068e1a4*/
            v91 = 0; /*0x10068e1a9*/
            v92 = v90; /*0x10068e1ab*/
            v93 = _mm_load_si128((const __m128i *)&xmmword_101601D70); /*0x10068e1af*/
            do /*0x10068e237*/
            {
              v94 = v92; /*0x10068e1c0*/
              v95 = v90; /*0x10068e1c4*/
              v96 = (__m128d)_mm_loadu_si128((const __m128i *)(*((_QWORD *)&v176 + 1) + 8 * v91 + 8)); /*0x10068e1c8*/
              v97 = _mm_xor_si128((__m128i)v95, v93); /*0x10068e1d2*/
              v98 = _mm_xor_si128((__m128i)v96, v93); /*0x10068e1da*/
              v99 = _mm_cmpeq_epi32(v97, v98); /*0x10068e1e2*/
              v100 = _mm_cmpgt_epi32(v97, v98); /*0x10068e1e6*/
              v90 = _mm_blendv_pd( /*0x10068e1f7*/
                      v96,
                      v95,
                      (__m128d)_mm_or_si128(_mm_and_si128(_mm_shuffle_epi32(v100, 160), v99), v100));
              v101 = (__m128d)_mm_loadu_si128((const __m128i *)(*((_QWORD *)&v176 + 1) + 8 * v91 + 24)); /*0x10068e1fc*/
              v102 = _mm_xor_si128((__m128i)v94, v93); /*0x10068e206*/
              v103 = _mm_xor_si128((__m128i)v101, v93); /*0x10068e20e*/
              v104 = _mm_cmpeq_epi32(v102, v103); /*0x10068e216*/
              v105 = _mm_cmpgt_epi32(v102, v103); /*0x10068e21a*/
              v92 = _mm_blendv_pd( /*0x10068e22b*/
                      v101,
                      v94,
                      (__m128d)_mm_or_si128(_mm_and_si128(_mm_shuffle_epi32(v105, 160), v104), v105));
              v91 += 4; /*0x10068e230*/
            }
            while ( v89 != v91 ); /*0x10068e237*/
            v106 = (__m128i)_mm_xor_pd(v92, (__m128d)v93); /*0x10068e23d*/
            v107 = (__m128i)_mm_xor_pd(v90, (__m128d)v93); /*0x10068e245*/
            v108 = _mm_cmpeq_epi32(v107, v106); /*0x10068e24d*/
            v109 = _mm_cmpgt_epi32(v107, v106); /*0x10068e251*/
            v110 = _mm_blendv_pd( /*0x10068e262*/
                     v92,
                     v90,
                     (__m128d)_mm_or_si128(_mm_and_si128(_mm_shuffle_epi32(v109, 160), v108), v109));
            v111 = (__m128d)_mm_shuffle_epi32((__m128i)v110, 238); /*0x10068e267*/
            v112 = _mm_xor_si128((__m128i)v110, v93); /*0x10068e270*/
            v113 = _mm_xor_si128((__m128i)v111, v93); /*0x10068e278*/
            v114 = _mm_cmpeq_epi32(v112, v113); /*0x10068e280*/
            v115 = _mm_cmpgt_epi32(v112, v113); /*0x10068e284*/
            a7 = (__m128d)_mm_or_si128(_mm_and_si128(_mm_cvtepi32_epi64(v115), v114), v115); /*0x10068e291*/
            v64 = (unsigned __int64)_mm_blendv_pd(v111, v110, a7); /*0x10068e29a*/
            while ( v88 != v89 ) /*0x10068e6d2*/
            {
LABEL_175:
              if ( v64 <= *(_QWORD *)(*((_QWORD *)&v176 + 1) + 8 * v89 + 8) ) /*0x10068e6c8*/
                v64 = *(_QWORD *)(*((_QWORD *)&v176 + 1) + 8 * v89 + 8); /*0x10068e6c8*/
              ++v89; /*0x10068e6cc*/
            }
          }
        }
LABEL_179:
        codexmate_lib::core::analytics::timestamp_to_date_string::hd4882f6580826531((unsigned __int64 *)v163, v64); /*0x10068e6e0*/
        alloc::vec::Vec$LT$T$C$A$GT$::retain::hfa490e7f5a228f0b(&v176, v163); /*0x10068e6fd*/
        v125 = v175; /*0x10068e702*/
        if ( *(_QWORD *)&v163[16] != v175 || memcmp(*(const void **)&v163[8], __s2, v175) ) /*0x10068e723*/
          v177 = 0; /*0x10068e72c*/
        v156[4] = *(_QWORD *)&v163[16]; /*0x10068e745*/
        v156[3] = *(_QWORD *)&v163[8]; /*0x10068e757*/
        v156[2] = *(_QWORD *)v163; /*0x10068e75b*/
        v156[7] = v177; /*0x10068e765*/
        *(_OWORD *)&v156[5] = v176; /*0x10068e77b*/
        v156[8] = v187; /*0x10068e783*/
        v156[0] = v189; /*0x10068e78e*/
        v156[1] = v184; /*0x10068e799*/
        v156[9] = v64; /*0x10068e7a0*/
        if ( *(_QWORD *)&v163[16] != v125 ) /*0x10068e7ae*/
          goto LABEL_157; /*0x10068e7ae*/
        goto LABEL_150; /*0x10068e7ae*/
      }
      v64 = *(_QWORD *)(v63 - 8); /*0x10068dc63*/
      v65 = v63 - 64; /*0x10068dc67*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v163, v63 - 64); /*0x10068dc72*/
      v66 = *(const void **)(v63 - 32); /*0x10068dc77*/
      v67 = *(_QWORD *)(v63 - 24); /*0x10068dc7b*/
      if ( v67 ) /*0x10068dc8a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v65); /*0x10068dc90*/
        v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8 * v67, 8); /*0x10068dca2*/
        if ( !v68 ) /*0x10068dca8*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 8 * v67); /*0x10068e868*/
      }
      else
      {
        v68 = 8; /*0x10068e3ea*/
      }
      memcpy((void *)v68, v66, 8 * v67); /*0x10068e3f9*/
      v156[2] = *(_QWORD *)v163; /*0x10068e413*/
      v156[3] = *(_QWORD *)&v163[8]; /*0x10068e416*/
      v156[4] = *(_QWORD *)&v163[16]; /*0x10068e421*/
      v156[5] = v67; /*0x10068e425*/
      v156[6] = v68; /*0x10068e42c*/
      v156[7] = v67; /*0x10068e433*/
      v156[0] = 1; /*0x10068e43a*/
      v156[1] = v184; /*0x10068e449*/
      v156[8] = v187; /*0x10068e454*/
      v156[9] = v64; /*0x10068e45b*/
      v125 = v175; /*0x10068e462*/
      if ( *(_QWORD *)&v163[16] != v175 ) /*0x10068e470*/
      {
LABEL_157:
        v156[7] = 0; /*0x10068e500*/
        v131 = 8; /*0x10068e50b*/
        v128 = 0; /*0x10068e511*/
        v132 = a10; /*0x10068e514*/
        v133 = a10[2]; /*0x10068e518*/
        if ( v133 != *a10 ) /*0x10068e520*/
          goto LABEL_159; /*0x10068e520*/
LABEL_158:
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(v132); /*0x10068e522*/
        goto LABEL_159; /*0x10068e525*/
      }
LABEL_150:
      v126 = v156[3]; /*0x10068e480*/
      if ( memcmp((const void *)v156[3], __s2, v125) ) /*0x10068e491*/
        goto LABEL_157; /*0x10068e498*/
      v127 = (const void *)v156[6]; /*0x10068e49a*/
      v128 = v156[7]; /*0x10068e4a1*/
      v129 = 8LL * v156[7]; /*0x10068e4a8*/
      if ( v156[7] ) /*0x10068e4b3*/
      {
        v130 = (const void *)v156[6]; /*0x10068e4b5*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v126, v156[6]); /*0x10068e4b8*/
        v127 = v130; /*0x10068e4ca*/
        v131 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v129, 8); /*0x10068e4cd*/
        if ( !v131 ) /*0x10068e4d3*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v129); /*0x10068e859*/
      }
      else
      {
        v131 = 8; /*0x10068e4da*/
      }
      memcpy((void *)v131, v127, v129); /*0x10068e4e6*/
      v132 = a10; /*0x10068e4eb*/
      v133 = a10[2]; /*0x10068e4ef*/
      if ( v133 == *a10 ) /*0x10068e4f7*/
        goto LABEL_158; /*0x10068e4f7*/
LABEL_159:
      v134 = v132[1]; /*0x10068e52a*/
      v135 = 5 * v133; /*0x10068e52e*/
      *(_QWORD *)(v134 + 8 * v135) = v128; /*0x10068e532*/
      *(_QWORD *)(v134 + 8 * v135 + 8) = v131; /*0x10068e536*/
      *(_QWORD *)(v134 + 8 * v135 + 16) = v128; /*0x10068e53b*/
      *(_QWORD *)(v134 + 8 * v135 + 24) = v187; /*0x10068e544*/
      *(_QWORD *)(v134 + 8 * v135 + 32) = v64; /*0x10068e549*/
      v132[2] = v133 + 1; /*0x10068e551*/
      v166 = __n; /*0x10068e55c*/
      v165 = __s1; /*0x10068e571*/
      v164 = v170; /*0x10068e578*/
      qmemcpy(v163, v156, 0x50u); /*0x10068e595*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h576dd544ddb16f23(&v176, a9, &v164, v163); /*0x10068e5ad*/
      a4 = v160; /*0x10068e5b9*/
      a3 = v161; /*0x10068e5c0*/
      if ( (_DWORD)v176 != 2 ) /*0x10068e5ce*/
      {
        if ( v177 ) /*0x10068e5da*/
          a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v178, v177, 1); /*0x10068e5e8*/
        if ( v180 ) /*0x10068e5f7*/
          a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v181, 8 * v180, 8); /*0x10068e609*/
      }
      if ( v157 ) /*0x10068e618*/
        a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v157, 1); /*0x10068e623*/
      if ( !_InterlockedDecrement64(v147[0]) ) /*0x10068e62f*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v147); /*0x10068e63c*/
      if ( !__dst[0] && (__dst[1] & 3) == 1 ) /*0x10068e65e*/
      {
        v136 = __dst[1] - 1LL; /*0x10068e664*/
        v137 = *(_QWORD *)(__dst[1] - 1LL); /*0x10068e668*/
        v138 = *(_QWORD *)(__dst[1] + 7LL); /*0x10068e66c*/
        if ( *(_QWORD *)v138 ) /*0x10068e670*/
          (*(void (__fastcall **)(__int64, double))v138)(v137, a7.f64[0]); /*0x10068e67b*/
        v139 = *(_QWORD *)(v138 + 8); /*0x10068e67d*/
        if ( v139 ) /*0x10068e684*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v139, *(_QWORD *)(v138 + 16)); /*0x10068e68d*/
        a7.f64[0] = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, 24, 8); /*0x10068e69f*/
        a4 = v160; /*0x10068e6a4*/
        a3 = v161; /*0x10068e6ab*/
      }
    }
  }
  if ( !_InterlockedDecrement64(v168) ) /*0x10068e817*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v168); /*0x10068e824*/
  v13 = v188; /*0x10068e829*/
  return v13 & 1; /*0x10068e82e*/
}