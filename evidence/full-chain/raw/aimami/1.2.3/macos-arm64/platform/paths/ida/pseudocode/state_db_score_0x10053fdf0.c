// __ZN13codexmate_lib8platform5paths10CodexPaths14state_db_score @ 0x10053fdf0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::state_db_score::he381df717ce2fa7b(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v6; // edx
  int v7; // r13d
  signed __int64 v8; // r15
  unsigned int v9; // ebx
  char v10; // r13
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned int v15; // eax
  signed __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rsi
  bool v20; // cl
  bool v21; // si
  unsigned __int128 v22; // kr00_16
  unsigned __int64 v23; // r14
  __int64 v24; // r15
  signed __int64 epi64; // r13
  int v26; // r9d
  unsigned __int8 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int128 *v33; // rdi
  __int8 *v34; // rdx
  __int64 v35; // rcx
  int v36; // r15d
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  _QWORD *v47; // r15
  __int64 v48; // rax
  __int32 v49; // r14d
  __m128i v50; // xmm0
  int v51; // esi
  unsigned __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rcx
  __int64 result; // rax
  __int64 v56; // rcx
  _QWORD *v57; // r14
  unsigned __int64 v58; // [rsp+20h] [rbp-2A0h] BYREF
  _QWORD __dst[17]; // [rsp+28h] [rbp-298h] BYREF
  __m128i v60; // [rsp+B0h] [rbp-210h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-1F8h] BYREF
  _BYTE v62[11]; // [rsp+D8h] [rbp-1E8h]
  __int64 v63; // [rsp+E8h] [rbp-1D8h]
  __int64 v64; // [rsp+F0h] [rbp-1D0h]
  __int64 v65; // [rsp+F8h] [rbp-1C8h]
  unsigned __int128 v66; // [rsp+100h] [rbp-1C0h]
  __int128 v67; // [rsp+110h] [rbp-1B0h]
  int v68; // [rsp+120h] [rbp-1A0h]
  __int16 v69; // [rsp+124h] [rbp-19Ch] BYREF
  __int64 v70; // [rsp+126h] [rbp-19Ah]
  unsigned __int16 v71; // [rsp+12Eh] [rbp-192h]
  unsigned __int64 v72; // [rsp+130h] [rbp-190h]
  _BYTE v73[152]; // [rsp+138h] [rbp-188h] BYREF
  __int64 v74; // [rsp+1D0h] [rbp-F0h]
  unsigned __int64 v75; // [rsp+1D8h] [rbp-E8h]
  __int128 v76; // [rsp+1E0h] [rbp-E0h] BYREF
  __m128i v77; // [rsp+1F0h] [rbp-D0h] BYREF
  __m256i v78; // [rsp+200h] [rbp-C0h] BYREF
  int v79; // [rsp+224h] [rbp-9Ch]
  __int128 v80; // [rsp+228h] [rbp-98h]
  _QWORD v81[2]; // [rsp+238h] [rbp-88h]
  __int64 v82; // [rsp+248h] [rbp-78h]
  __int64 v83; // [rsp+250h] [rbp-70h]
  __int128 v84; // [rsp+258h] [rbp-68h] BYREF
  __m128i v85; // [rsp+268h] [rbp-58h]
  __m256i v86; // [rsp+278h] [rbp-48h]

  v63 = a1; /*0x10053fe0d*/
  v7 = 0; /*0x10053fe1f*/
  if ( (codexmate_lib::platform::paths::CodexPaths::state_db_version::ha9566e9da440a76a(a2, a3) & 1) != 0 ) /*0x10053fe24*/
    v7 = v6; /*0x10053fe24*/
  v65 = a2; /*0x10053fe2f*/
  v64 = a3; /*0x10053fe39*/
  std::sys::fs::metadata::h32fa16d3052ea535(v73, a2, a3); /*0x10053fe43*/
  v8 = *(_QWORD *)&v73[8]; /*0x10053fe48*/
  LODWORD(v82) = a4; /*0x10053fe56*/
  v79 = v7; /*0x10053fe5a*/
  if ( *(_DWORD *)v73 == 1 /*0x10053fea8*/
    || (memcpy(__dst, &v73[16], sizeof(__dst)),
        v58 = *(_QWORD *)&v73[8],
        std::fs::Metadata::modified::h0e075817eaa8c909(v73, &v58),
        v9 = *(_DWORD *)&v73[8],
        v8 = *(_QWORD *)v73,
        *(_DWORD *)&v73[8] == 1000000000) )
  {
    v9 = 1000000000; /*0x10053feb0*/
    v10 = 1; /*0x10053feb5*/
    if ( (v8 & 3) == 1 ) /*0x10053febb*/
    {
      v75 = v8 - 1; /*0x10053fec1*/
      v11 = *(_QWORD *)(v8 - 1); /*0x10053fec8*/
      v12 = *(_QWORD *)(v8 + 7); /*0x10053fecc*/
      if ( *(_QWORD *)v12 ) /*0x10053fed0*/
        (*(void (__fastcall **)(_QWORD))v12)(*(_QWORD *)(v8 - 1)); /*0x10053fedb*/
      v13 = *(_QWORD *)(v12 + 8); /*0x10053fedd*/
      if ( v13 ) /*0x10053fee4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x10053feed*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, 24, 8); /*0x10053ff03*/
    }
  }
  else
  {
    v10 = 0; /*0x10053ff0a*/
  }
  std::path::Path::_with_extension::hcb726c8e846e50fc(&v84, v65, v64, &unk_1015FF692, 10); /*0x10053ff2c*/
  v75 = *((_QWORD *)&v84 + 1); /*0x10053ff43*/
  std::sys::fs::metadata::h32fa16d3052ea535(v73, *((_QWORD *)&v84 + 1), v85.i64[0]); /*0x10053ff4a*/
  v14 = *(_QWORD *)&v73[8]; /*0x10053ff4f*/
  if ( v73[0] ) /*0x10053ff5d*/
  {
    if ( (v73[8] & 3) == 1 ) /*0x10053ff6a*/
    {
LABEL_17:
      v83 = v14 - 1; /*0x10053ffc5*/
      v17 = *(_QWORD *)(v14 + 7); /*0x10053ffd3*/
      v18 = *(_QWORD *)(v14 - 1); /*0x10053ffd8*/
      if ( *(_QWORD *)v17 ) /*0x10053ffdb*/
        (*(void (__fastcall **)(__int64))v17)(v18); /*0x10053ffe6*/
      v19 = *(_QWORD *)(v17 + 8); /*0x10053ffe8*/
      if ( v19 ) /*0x10053ffef*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v19, *(_QWORD *)(v17 + 16)); /*0x10053fff8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 24, 8); /*0x10054000b*/
    }
  }
  else
  {
    memcpy(__dst, &v73[16], sizeof(__dst)); /*0x10053ff85*/
    v58 = *(_QWORD *)&v73[8]; /*0x10053ff8a*/
    std::fs::Metadata::modified::h0e075817eaa8c909(&v76, &v58); /*0x10053ff9f*/
    v15 = DWORD2(v76); /*0x10053ffa4*/
    v16 = v76; /*0x10053ffaa*/
    if ( DWORD2(v76) != 1000000000 ) /*0x10053ffb6*/
    {
      if ( v10 ) /*0x100540029*/
        v8 = 0; /*0x100540029*/
      v20 = (_QWORD)v76 == v8; /*0x100540030*/
      goto LABEL_28; /*0x100540030*/
    }
    v14 = v76; /*0x10053ffb8*/
    if ( (v76 & 3) == 1 ) /*0x10053ffc3*/
      goto LABEL_17; /*0x10053ffc3*/
  }
  v16 = 0; /*0x100540010*/
  if ( v10 ) /*0x100540016*/
    v8 = 0; /*0x100540016*/
  v20 = v8 == 0; /*0x10054001d*/
  v15 = 0; /*0x100540020*/
LABEL_28:
  if ( v10 ) /*0x100540038*/
    v9 = 0; /*0x100540038*/
  v21 = v16 < v8; /*0x100540047*/
  if ( v20 ) /*0x10054004d*/
    v21 = v15 < v9; /*0x10054004d*/
  if ( v21 ) /*0x100540053*/
    v16 = v8; /*0x100540053*/
  else
    v9 = v15; /*0x100540057*/
  if ( (_QWORD)v84 ) /*0x100540061*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v84, 1); /*0x10054006f*/
  v58 = v16; /*0x100540074*/
  LODWORD(__dst[0]) = v9; /*0x10054007b*/
  std::time::SystemTime::duration_since::had059553cab94f96(v73, &v58, 0, 0); /*0x100540096*/
  v22 = 0u; /*0x1005400b0*/
  if ( !v73[0] ) /*0x1005400b0*/
    v22 = *(unsigned int *)&v73[16] + *(unsigned __int64 *)&v73[8] * (unsigned __int128)0x3B9ACA00uLL; /*0x1005400c7*/
  v68 = v79; /*0x1005400d8*/
  v69 = 256; /*0x1005400de*/
  v67 = 0; /*0x1005400eb*/
  v66 = v22; /*0x1005400f3*/
  LOBYTE(v70) = v82; /*0x100540101*/
  LOBYTE(v79) = 1; /*0x100540108*/
  v75 = 0x8000000000000000LL; /*0x10054011a*/
  while ( 1 ) /*0x100540146*/
  {
    rusqlite::Connection::open_with_flags::h45227a733d927884(v73, v65, v64, 32769); /*0x100540146*/
    v23 = *(_QWORD *)v73; /*0x100540152*/
    v24 = *(_QWORD *)&v73[16]; /*0x100540160*/
    epi64 = *(_QWORD *)&v73[24]; /*0x100540167*/
    v26 = *(_DWORD *)&v73[32]; /*0x10054016e*/
    v27 = v73[36]; /*0x100540175*/
    v84 = *(_OWORD *)&v73[37]; /*0x10054018b*/
    v85.i64[0] = *(_QWORD *)&v73[53]; /*0x100540197*/
    *(__int32 *)((char *)&v85.i32[1] + 3) = *(_DWORD *)&v73[60]; /*0x10054019e*/
    if ( v73[104] == 3 ) /*0x1005401a3*/
      break; /*0x1005401a3*/
    __dst[11] = *(_QWORD *)&v73[96]; /*0x10054020b*/
    __dst[10] = *(_QWORD *)&v73[88]; /*0x100540213*/
    __dst[9] = *(_QWORD *)&v73[80]; /*0x10054021b*/
    __dst[8] = *(_QWORD *)&v73[72]; /*0x100540227*/
    __dst[7] = *(_QWORD *)&v73[64]; /*0x10054022b*/
    __dst[12] = *(_QWORD *)&v73[104]; /*0x100540235*/
    v58 = *(_QWORD *)v73; /*0x10054023a*/
    __dst[0] = *(_QWORD *)&v73[8]; /*0x100540241*/
    __dst[1] = *(_QWORD *)&v73[16]; /*0x100540248*/
    __dst[2] = *(_QWORD *)&v73[24]; /*0x10054024f*/
    LODWORD(__dst[3]) = *(_DWORD *)&v73[32]; /*0x100540256*/
    BYTE4(__dst[3]) = v73[36]; /*0x10054025d*/
    HIDWORD(__dst[6]) = *(__int32 *)((char *)&v85.i32[1] + 3); /*0x100540267*/
    *(_QWORD *)((char *)&__dst[5] + 5) = v85.i64[0]; /*0x10054026e*/
    *(_OWORD *)((char *)&__dst[3] + 5) = v84; /*0x10054027e*/
    v31 = (__int64)&v58; /*0x10054028b*/
    rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v73, &v58, 0, 75000000); /*0x100540299*/
    v23 = *(_QWORD *)v73; /*0x10054029e*/
    if ( *(_QWORD *)v73 == 0x8000000000000016LL ) /*0x1005402b2*/
    {
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v73, &v58, &unk_1015FC54D, 26); /*0x1005402d1*/
      v23 = *(_QWORD *)&v73[8]; /*0x1005402d6*/
      v31 = *(_QWORD *)&v73[16]; /*0x1005402dd*/
      v32 = *(_QWORD *)&v73[24]; /*0x1005402e4*/
      epi64 = *(_QWORD *)&v73[32]; /*0x1005402eb*/
      LODWORD(v33) = *(_DWORD *)&v73[40]; /*0x1005402f2*/
      v27 = v73[44]; /*0x1005402f8*/
      v34 = &v73[37]; /*0x100540300*/
      v76 = *(_OWORD *)&v73[45]; /*0x10054030f*/
      v77.i64[0] = *(_QWORD *)&v73[61]; /*0x100540321*/
      *(__int32 *)((char *)&v77.i32[1] + 3) = *(_DWORD *)&v73[68]; /*0x10054032b*/
      if ( v73[0] ) /*0x100540338*/
      {
        v82 = *(_QWORD *)&v73[16]; /*0x10054033e*/
        *(_DWORD *)&v62[7] = *(__int32 *)((char *)&v77.i32[1] + 3); /*0x100540348*/
        *(_QWORD *)v62 = v77.i64[0]; /*0x100540355*/
        v35 = *((_QWORD *)&v76 + 1); /*0x100540363*/
        v61 = v76; /*0x100540371*/
        if ( *(_QWORD *)&v73[8] == 0x8000000000000016LL ) /*0x100540385*/
          goto LABEL_53; /*0x100540385*/
      }
      else
      {
        v84 = *(_OWORD *)&v73[8]; /*0x1005403ed*/
        v85 = *(__m128i *)&v73[24]; /*0x1005403f5*/
        v86.i32[0] = *(_DWORD *)&v73[40]; /*0x1005403fd*/
        v86.i8[4] = v73[44]; /*0x100540400*/
        v86.i32[7] = *(__int32 *)((char *)&v77.i32[1] + 3); /*0x10054040e*/
        *(__int64 *)((char *)&v86.i64[2] + 5) = v77.i64[0]; /*0x100540418*/
        *(__int128 *)((char *)v86.i128 + 5) = v76; /*0x10054042e*/
        v38 = sqlite3_bind_parameter_count((sqlite3_stmt *)v86.i64[3]); /*0x100540435*/
        v32 = v38; /*0x10054043a*/
        if ( !v38 ) /*0x10054043f*/
        {
          v31 = (__int64)&v84; /*0x1005404aa*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4b8e3009ff58106b( /*0x1005404b0*/
            v73,
            &v84,
            0);
          v82 = *(_QWORD *)v73; /*0x1005404bc*/
          v32 = *(_QWORD *)&v73[8]; /*0x1005404c0*/
          epi64 = *(_QWORD *)&v73[16]; /*0x1005404c7*/
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v84); /*0x1005404d1*/
LABEL_53:
          v39 = v82; /*0x1005404d6*/
          if ( epi64 ) /*0x1005404f2*/
          {
            v40 = 24 * epi64; /*0x100540500*/
            v41 = 0; /*0x100540504*/
            do /*0x100540527*/
            {
              if ( *(_QWORD *)(v32 + v41 + 16) == 13 /*0x100540551*/
                && !(**(_QWORD **)(v32 + v41 + 8) ^ 0x5F79636E65636572LL
                   | *(_QWORD *)(*(_QWORD *)(v32 + v41 + 8) + 5LL) ^ 0x736D5F74615F7963LL) )
              {
                LOBYTE(v41) = 2; /*0x100540556*/
                LODWORD(v83) = v41; /*0x100540558*/
                goto LABEL_65; /*0x10054055b*/
              }
              v41 += 24; /*0x100540520*/
            }
            while ( v40 != v41 ); /*0x100540527*/
            v42 = 0; /*0x10054055d*/
            do /*0x100540577*/
            {
              if ( *(_QWORD *)(v32 + v42 + 16) == 13 /*0x100540593*/
                && !(**(_QWORD **)(v32 + v42 + 8) ^ 0x5F64657461647075LL
                   | *(_QWORD *)(*(_QWORD *)(v32 + v42 + 8) + 5LL) ^ 0x736D5F74615F6465LL) )
              {
                LOBYTE(v42) = 1; /*0x100540598*/
                LODWORD(v83) = v42; /*0x10054059a*/
                goto LABEL_65; /*0x10054059d*/
              }
              v42 += 24; /*0x100540570*/
            }
            while ( v40 != v42 ); /*0x100540577*/
            LODWORD(v83) = 0; /*0x10054059f*/
LABEL_65:
            v43 = 0; /*0x1005405a6*/
            while ( *(_QWORD *)(v32 + v43 + 16) != 13 /*0x1005405da*/
                 || **(_QWORD **)(v32 + v43 + 8) ^ 0x5F64657461647075LL
                  | *(_QWORD *)(*(_QWORD *)(v32 + v43 + 8) + 5LL) ^ 0x736D5F74615F6465LL )
            {
              v43 += 24; /*0x1005405b0*/
              if ( v40 == v43 ) /*0x1005405b7*/
              {
                v44 = 0; /*0x1005406ae*/
                while ( *(_QWORD *)(v32 + v44 + 16) != 10 /*0x1005406ee*/
                     || **(_QWORD **)(v32 + v44 + 8) ^ 0x5F64657461647075LL
                      | *(unsigned __int16 *)(*(_QWORD *)(v32 + v44 + 8) + 8LL) ^ 0x7461LL )
                {
                  v44 += 24; /*0x1005406c0*/
                  if ( v40 == v44 ) /*0x1005406c7*/
                  {
                    v45 = 0; /*0x1005407c2*/
                    goto LABEL_85; /*0x1005407c5*/
                  }
                }
                rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v73, &v58, &unk_1015FF5D7, 48); /*0x10054070a*/
                v84 = *(_OWORD *)&v73[8]; /*0x100540724*/
                v85 = *(__m128i *)&v73[24]; /*0x100540730*/
                v86 = *(__m256i *)&v73[40]; /*0x100540740*/
                if ( *(_DWORD *)v73 == 1 ) /*0x10054075f*/
                {
                  v78 = v86; /*0x100540774*/
                  v77 = v85; /*0x1005407a0*/
                  v76 = v84; /*0x1005407b6*/
                }
                else
                {
                  *(__m256i *)&v73[32] = v86; /*0x100540883*/
                  *(__m128i *)&v73[16] = v85; /*0x1005408af*/
                  *(_OWORD *)v73 = v84; /*0x1005408c5*/
                  rusqlite::statement::Statement::query_row::he322cd633d20df6e(&v76, v73); /*0x1005408dd*/
                  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v73); /*0x1005408e5*/
                }
                if ( (_QWORD)v76 == 0x8000000000000016LL ) /*0x100540905*/
                {
                  v45 = 1000LL * *((_QWORD *)&v76 + 1); /*0x10054090b*/
                  if ( !is_mul_ok(0x3E8u, *((unsigned __int64 *)&v76 + 1)) ) /*0x10054090b*/
                    v45 = (*((_QWORD *)&v76 + 1) >> 63) + 0x7FFFFFFFFFFFFFFFLL; /*0x100540d6f*/
                  goto LABEL_85; /*0x100540d6f*/
                }
                v74 = *((_QWORD *)&v76 + 1); /*0x100540d5f*/
                v72 = v76; /*0x100540d5f*/
LABEL_96:
                v60 = _mm_loadu_si128(&v77); /*0x100540ba9*/
                LODWORD(v33) = v78.i32[0]; /*0x100540bb9*/
                v27 = v78.u8[4]; /*0x100540bbf*/
                v34 = &v78.i8[5]; /*0x100540bc7*/
                v80 = *(__int128 *)((char *)v78.i128 + 5); /*0x100540bd5*/
                v81[0] = *(__int64 *)((char *)&v78.i64[2] + 5); /*0x100540be7*/
                *(_DWORD *)((char *)v81 + 7) = v78.i32[7]; /*0x100540bf1*/
                v47 = (_QWORD *)(v32 + 8); /*0x100540bf7*/
                v48 = v82; /*0x100540bfb*/
                v49 = v78.i32[0]; /*0x100540bff*/
                do /*0x100540c17*/
                {
                  v31 = *(v47 - 1); /*0x100540c19*/
                  if ( v31 ) /*0x100540c20*/
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v47, v31, 1); /*0x100540c2a*/
                    LODWORD(v33) = v49; /*0x100540c2f*/
                    v48 = v82; /*0x100540c32*/
                  }
                  v47 += 3; /*0x100540c10*/
                  --epi64; /*0x100540c14*/
                }
                while ( epi64 ); /*0x100540c17*/
                v50 = _mm_load_si128(&v60); /*0x100540c38*/
                v37 = v50.i64[0]; /*0x100540c40*/
                epi64 = _mm_extract_epi64(v50, 1); /*0x100540c45*/
                v83 = v50.i64[0]; /*0x100540c4f*/
                if ( v48 ) /*0x100540c53*/
                {
                  v31 = 24 * v48; /*0x100540c59*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24 * v48, 8); /*0x100540c65*/
                  LODWORD(v33) = v49; /*0x100540c6a*/
                }
                v28 = v74; /*0x100540c6d*/
                v23 = v72; /*0x100540c74*/
                goto LABEL_103; /*0x100540c74*/
              }
            }
            rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v73, &v58, &unk_1015FF607, 51); /*0x1005405f6*/
            v84 = *(_OWORD *)&v73[8]; /*0x100540610*/
            v85 = *(__m128i *)&v73[24]; /*0x10054061c*/
            v86 = *(__m256i *)&v73[40]; /*0x10054062c*/
            if ( *(_DWORD *)v73 == 1 ) /*0x10054064b*/
            {
              v78 = v86; /*0x100540660*/
              v77 = v85; /*0x10054068c*/
              v76 = v84; /*0x1005406a2*/
            }
            else
            {
              *(__m256i *)&v73[32] = v86; /*0x1005407d9*/
              *(__m128i *)&v73[16] = v85; /*0x100540805*/
              *(_OWORD *)v73 = v84; /*0x10054081b*/
              rusqlite::statement::Statement::query_row::he322cd633d20df6e(&v76, v73); /*0x100540833*/
              core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v73); /*0x10054083b*/
            }
            v45 = *((_QWORD *)&v76 + 1); /*0x100540847*/
            if ( (_QWORD)v76 != 0x8000000000000016LL ) /*0x10054085b*/
            {
              v74 = *((_QWORD *)&v76 + 1); /*0x100540868*/
              v72 = v76; /*0x100540868*/
              goto LABEL_96; /*0x10054086f*/
            }
LABEL_85:
            v46 = 0; /*0x100540918*/
            while ( *(_QWORD *)(v32 + v46 + 16) != 8 || **(_QWORD **)(v32 + v46 + 8) != 0x6465766968637261LL ) /*0x100540947*/
            {
              v46 += 24; /*0x100540920*/
              if ( v40 == v46 ) /*0x100540927*/
              {
                rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v73, &v58, &unk_1015FF63A, 28); /*0x100540a53*/
                v34 = *(__int8 **)&v73[16]; /*0x100540a69*/
                v84 = *(_OWORD *)&v73[8]; /*0x100540a6d*/
                v85 = *(__m128i *)&v73[24]; /*0x100540a79*/
                v86 = *(__m256i *)&v73[40]; /*0x100540a89*/
                if ( *(_DWORD *)v73 == 1 ) /*0x100540aa8*/
                  goto LABEL_92; /*0x100540aa8*/
                goto LABEL_93; /*0x100540aa8*/
              }
            }
            rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v73, &v58, &unk_1015FF656, 60); /*0x100540963*/
            v34 = *(__int8 **)&v73[16]; /*0x100540979*/
            v84 = *(_OWORD *)&v73[8]; /*0x10054097d*/
            v85 = *(__m128i *)&v73[24]; /*0x100540989*/
            v86 = *(__m256i *)&v73[40]; /*0x100540999*/
            if ( *(_DWORD *)v73 == 1 ) /*0x1005409b8*/
            {
LABEL_92:
              v78 = v86; /*0x100540aaa*/
              v77 = v85; /*0x100540ae5*/
              v76 = v84; /*0x100540afb*/
              goto LABEL_94; /*0x100540b02*/
            }
LABEL_93:
            *(__m256i *)&v73[32] = v86; /*0x100540b04*/
            *(__m128i *)&v73[16] = v85; /*0x100540b3f*/
            *(_OWORD *)v73 = v84; /*0x100540b55*/
            rusqlite::statement::Statement::query_row::he322cd633d20df6e(&v76, v73); /*0x100540b6d*/
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v73); /*0x100540b75*/
LABEL_94:
            v74 = *((_QWORD *)&v76 + 1); /*0x100540b7a*/
            if ( (_QWORD)v76 != 0x8000000000000016LL ) /*0x100540b9c*/
            {
              v72 = v76; /*0x100540ba2*/
              goto LABEL_96; /*0x100540ba2*/
            }
            v57 = (_QWORD *)(v32 + 8); /*0x10054102f*/
            v39 = v82; /*0x100541033*/
            do /*0x100541047*/
            {
              v31 = *(v57 - 1); /*0x100541049*/
              if ( v31 ) /*0x100541050*/
              {
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v57, v31, 1); /*0x10054105a*/
                v39 = v82; /*0x10054105f*/
              }
              v57 += 3; /*0x100541040*/
              --epi64; /*0x100541044*/
            }
            while ( epi64 ); /*0x100541047*/
            v24 = v74; /*0x100541065*/
            v35 = (unsigned int)v83; /*0x10054106c*/
            LOBYTE(epi64) = v83; /*0x10054106f*/
            if ( !v39 ) /*0x100541075*/
              goto LABEL_115; /*0x100541075*/
LABEL_114:
            v31 = 24 * v39; /*0x100540f83*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24 * v39, 8); /*0x100540f93*/
          }
          else
          {
            v24 = 0; /*0x100540f75*/
            LOBYTE(epi64) = 0; /*0x100540f78*/
            v45 = 0; /*0x100540f7b*/
            if ( v82 ) /*0x100540f81*/
              goto LABEL_114; /*0x100540f81*/
          }
LABEL_115:
          core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v58, v31, v34, v35); /*0x100540f98*/
          v28 = v45; /*0x100540fa4*/
LABEL_116:
          HIBYTE(v69) = 2; /*0x100540fa7*/
          *(_QWORD *)&v67 = v28; /*0x100540fae*/
          LOBYTE(v69) = epi64; /*0x100540fb5*/
          *((_QWORD *)&v67 + 1) = v24; /*0x100540fbc*/
          v56 = v63; /*0x100540fca*/
          *(_OWORD *)v63 = v66; /*0x100540fd1*/
          *(_OWORD *)(v56 + 16) = v67; /*0x100540fdb*/
          *(_DWORD *)(v56 + 32) = v68; /*0x100540ff0*/
          *(_WORD *)(v56 + 36) = v69; /*0x100540ffa*/
          *(_QWORD *)(v56 + 38) = v70; /*0x10054100e*/
          result = v71; /*0x100541012*/
          *(_WORD *)(v56 + 46) = v71; /*0x100541019*/
          return result; /*0x10054102e*/
        }
        v33 = &v84; /*0x100540441*/
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v84); /*0x100540445*/
        v23 = 0x8000000000000013LL; /*0x100540454*/
        v82 = 0; /*0x100540458*/
      }
      *(_DWORD *)((char *)v81 + 7) = *(_DWORD *)&v62[7]; /*0x100540466*/
      v81[0] = *(_QWORD *)v62; /*0x100540473*/
      v37 = *((_QWORD *)&v61 + 1); /*0x100540481*/
      v80 = v61; /*0x10054048f*/
      v83 = v32; /*0x100540496*/
      v28 = v82; /*0x10054049a*/
LABEL_103:
      v36 = (int)v33; /*0x100540c7b*/
    }
    else
    {
      v28 = *(_QWORD *)&v73[8]; /*0x100540390*/
      v83 = *(_QWORD *)&v73[16]; /*0x10054039e*/
      epi64 = *(_QWORD *)&v73[24]; /*0x1005403a2*/
      v36 = *(_DWORD *)&v73[32]; /*0x1005403a9*/
      v27 = v73[36]; /*0x1005403b0*/
      v34 = &v73[37]; /*0x1005403b8*/
      v37 = *(_QWORD *)&v73[45]; /*0x1005403c2*/
      v80 = *(_OWORD *)&v73[37]; /*0x1005403c6*/
      v81[0] = *(_QWORD *)&v73[53]; /*0x1005403d8*/
      *(_DWORD *)((char *)v81 + 7) = *(_DWORD *)&v73[60]; /*0x1005403e2*/
    }
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v58, v31, v34, v37); /*0x100540c85*/
    v26 = v36; /*0x100540c8a*/
    v24 = v83; /*0x100540c8d*/
    v29 = (unsigned __int8)epi64; /*0x100540c91*/
    v30 = v75; /*0x100540c95*/
    if ( v23 != v75 ) /*0x100540c9f*/
      goto LABEL_110; /*0x100540c9f*/
LABEL_105:
    if ( v27 > 0xEu ) /*0x100540ca9*/
      goto LABEL_110; /*0x100540ca9*/
    v51 = 28952; /*0x100540cb3*/
    if ( !_bittest(&v51, v27) || (_BYTE)v79 == 3 ) /*0x100540cc8*/
      goto LABEL_110; /*0x100540cc8*/
    *(_QWORD *)v73 = v30; /*0x100540cce*/
    *(_QWORD *)&v73[8] = v28; /*0x100540cd5*/
    *(_QWORD *)&v73[16] = v24; /*0x100540cdc*/
    *(_QWORD *)&v73[24] = epi64 & 0xFFFFFFFFFFFFFF00LL | v29; /*0x100540ced*/
    *(_DWORD *)&v73[32] = v26; /*0x100540cf4*/
    v73[36] = v27; /*0x100540cfb*/
    *(_DWORD *)&v73[60] = *(_DWORD *)((char *)v81 + 7); /*0x100540d0f*/
    *(_QWORD *)&v73[53] = v81[0]; /*0x100540d19*/
    *(_OWORD *)&v73[37] = v80; /*0x100540d2f*/
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 25000000); /*0x100540d39*/
    LOBYTE(v79) = v79 + 1; /*0x100540d3e*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v73); /*0x100540d4e*/
  }
  v80 = v84; /*0x1005401ad*/
  v81[0] = v85.i64[0]; /*0x1005401bf*/
  *(_DWORD *)((char *)v81 + 7) = *(__int32 *)((char *)&v85.i32[1] + 3); /*0x1005401c9*/
  v28 = *(_QWORD *)&v73[8]; /*0x1005401dc*/
  if ( *(_QWORD *)v73 == 0x8000000000000016LL ) /*0x1005401df*/
    goto LABEL_116; /*0x1005401df*/
  v29 = v73[24]; /*0x1005401e5*/
  v30 = v75; /*0x1005401e9*/
  if ( *(_QWORD *)v73 == v75 ) /*0x1005401f3*/
    goto LABEL_105; /*0x1005401f3*/
LABEL_110:
  v58 = v23; /*0x100540d79*/
  __dst[0] = v28; /*0x100540d8d*/
  __dst[1] = v24; /*0x100540d94*/
  __dst[2] = epi64 & 0xFFFFFFFFFFFFFF00LL | v29; /*0x100540d9e*/
  LODWORD(__dst[3]) = v26; /*0x100540da5*/
  BYTE4(__dst[3]) = v27; /*0x100540dac*/
  *(_OWORD *)((char *)&__dst[3] + 5) = v80; /*0x100540dc1*/
  *(_QWORD *)((char *)&__dst[5] + 5) = v81[0]; /*0x100540dd6*/
  HIDWORD(__dst[6]) = *(_DWORD *)((char *)v81 + 7); /*0x100540de3*/
  HIBYTE(v69) = v23 != v30 || v27 != 9 && v27 != 22; /*0x100540dfb*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100540e0f*/
  {
    *(_QWORD *)&v76 = v65; /*0x100540e1c*/
    *((_QWORD *)&v76 + 1) = v64; /*0x100540e2a*/
    *(_QWORD *)&v84 = &v76; /*0x100540e38*/
    *((_QWORD *)&v84 + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100540e43*/
    v85.i64[0] = (__int64)&v69 + 1; /*0x100540e4e*/
    v85.i64[1] = (__int64)_$LT$codexmate_lib..platform..paths..StateDbReadState$u20$as$u20$core..fmt..Debug$GT$::fmt::h0c1dadef05595d7a; /*0x100540e59*/
    v86.i64[0] = (__int64)&v58; /*0x100540e64*/
    v86.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100540e6f*/
    *(_QWORD *)&v73[48] = 2; /*0x100540e73*/
    *(_QWORD *)&v73[56] = &unk_1015FF5B9; /*0x100540e85*/
    *(_QWORD *)&v73[64] = 30; /*0x100540e8c*/
    *(_QWORD *)&v73[80] = &unk_1017C1E61; /*0x100540e9e*/
    *(_QWORD *)&v73[88] = &v84; /*0x100540ea9*/
    *(_QWORD *)v73 = 0; /*0x100540eb0*/
    *(_QWORD *)&v73[8] = &unk_1015FF5B9; /*0x100540ebb*/
    *(_QWORD *)&v73[16] = 30; /*0x100540ec2*/
    *(_QWORD *)&v73[24] = 0; /*0x100540ecd*/
    *(_QWORD *)&v73[32] = "src/platform/paths.rs"; /*0x100540edf*/
    *(_QWORD *)&v73[40] = 21; /*0x100540ee6*/
    *(_QWORD *)&v73[72] = 0x10D00000001LL; /*0x100540efb*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v61, v73); /*0x100540f10*/
  }
  v52 = v66; /*0x100540f15*/
  v53 = v67; /*0x100540f1c*/
  v54 = v63; /*0x100540f29*/
  *(_DWORD *)(v63 + 32) = v68; /*0x100540f30*/
  *(_WORD *)(v54 + 36) = v69; /*0x100540f3a*/
  *(_QWORD *)(v54 + 38) = v70; /*0x100540f4e*/
  *(_WORD *)(v54 + 46) = v71; /*0x100540f59*/
  *(_OWORD *)(v54 + 16) = v53; /*0x100540f5d*/
  *(_OWORD *)v54 = v52; /*0x100540f61*/
  return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v58); /*0x10054101d*/
}