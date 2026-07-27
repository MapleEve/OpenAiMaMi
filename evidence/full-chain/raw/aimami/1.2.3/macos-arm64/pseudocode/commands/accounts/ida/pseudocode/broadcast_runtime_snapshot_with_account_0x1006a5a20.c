// __ZN13codexmate_lib8commands8accounts39broadcast_runtime_snapshot_with_account @ 0x1006a5a20
__int64 __fastcall codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h4b255ecc5717b597(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        size_t a4,
        void *a5,
        __int64 a6,
        __m128 a7)
{
  __int64 v7; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  char v13; // r15
  _OWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  _BYTE *v19; // rbx
  _BYTE *v20; // r12
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  char v25; // r11
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rdi
  int v29; // r10d
  char v30; // r9
  size_t v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rsi
  unsigned int v34; // eax
  char v35; // si
  char v36; // r10
  __int64 v37; // r8
  __int64 v38; // rcx
  __int128 v39; // rax
  int v40; // r11d
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdi
  int v52; // edx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 result; // rax
  _QWORD v61[102]; // [rsp+8h] [rbp-DA8h] BYREF
  _OWORD v62[51]; // [rsp+338h] [rbp-A78h] BYREF
  size_t v63; // [rsp+668h] [rbp-748h]
  __int64 v64; // [rsp+670h] [rbp-740h]
  size_t v65; // [rsp+678h] [rbp-738h]
  __int64 v66; // [rsp+680h] [rbp-730h]
  __int64 v67; // [rsp+688h] [rbp-728h]
  __int64 v68; // [rsp+690h] [rbp-720h]
  _OWORD __dst[51]; // [rsp+698h] [rbp-718h] BYREF
  _OWORD __src[51]; // [rsp+9C8h] [rbp-3E8h] BYREF
  __int64 v71; // [rsp+CF8h] [rbp-B8h]
  __int64 v72; // [rsp+D00h] [rbp-B0h]
  __int64 v73; // [rsp+D08h] [rbp-A8h]
  __int128 v74; // [rsp+D10h] [rbp-A0h]
  __int128 v75; // [rsp+D20h] [rbp-90h]
  __int64 v76; // [rsp+D30h] [rbp-80h]
  __int64 v77; // [rsp+D38h] [rbp-78h]
  _DWORD *v78; // [rsp+D40h] [rbp-70h]
  __int64 v79; // [rsp+D48h] [rbp-68h]
  __m128 v80; // [rsp+D50h] [rbp-60h]
  void *__s2; // [rsp+D60h] [rbp-50h]
  __int64 v82; // [rsp+D68h] [rbp-48h]
  size_t __n; // [rsp+D70h] [rbp-40h]
  size_t v84; // [rsp+D78h] [rbp-38h]
  int v85; // [rsp+D84h] [rbp-2Ch]

  __s2 = a5; /*0x1006a5a37*/
  v84 = a4; /*0x1006a5a3b*/
  v80.i64[0] = a2; /*0x1006a5a42*/
  if ( qword_1019FF070 ) /*0x1006a5a53*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hf4b9d93378c2f010(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc); /*0x1006a692d*/
    v11 = codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc; /*0x1006a6932*/
    if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc ) /*0x1006a693c*/
      goto LABEL_3; /*0x1006a693c*/
  }
  else
  {
    v11 = codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc; /*0x1006a5a59*/
    if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc ) /*0x1006a5a63*/
      goto LABEL_3; /*0x1006a5a63*/
  }
  v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc); /*0x1006a694e*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11); /*0x1006a5a69*/
  v77 = 0x7FFFFFFFFFFFFFFFLL; /*0x1006a5a86*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006a5a8d*/
    v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, a2, v12, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x1006a695e*/
  else
    v13 = 0; /*0x1006a5a93*/
  *((_QWORD *)&v62[0] + 1) = &codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc; /*0x1006a5aab*/
  LOBYTE(v62[1]) = v13; /*0x1006a5ab2*/
  *(_QWORD *)&v62[0] = byte_1019FED38 != 0; /*0x1006a5ab9*/
  if ( byte_1019FED38 ) /*0x1006a5ac0*/
  {
    v14 = (_OWORD *)v80.i64[0]; /*0x1006a5ac9*/
    _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(v61); /*0x1006a5acd*/
    if ( v13 ) /*0x1006a5ad5*/
      goto LABEL_130; /*0x1006a5ad5*/
    goto LABEL_129; /*0x1006a5ad5*/
  }
  if ( v84 != 7 || dword_1019FED40 == 3 || !__s2 || *a3 ^ 0x6F636361 | *(_DWORD *)((char *)a3 + 3) ^ 0x746E756F ) /*0x1006a5b16*/
  {
    _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(__dst); /*0x1006a5bdb*/
  }
  else
  {
    v78 = a3; /*0x1006a5b1e*/
    v17 = *(_QWORD *)(v80.i64[0] + 688); /*0x1006a5b26*/
    if ( v17 ) /*0x1006a5b30*/
    {
      v18 = 352 * v17; /*0x1006a5b41*/
      v7 = *(_QWORD *)(v80.i64[0] + 680) + 256LL; /*0x1006a5b48*/
      while ( *(_QWORD *)(v7 - 56) != a6 || memcmp(*(const void **)(v7 - 64), __s2, a6) ) /*0x1006a5b8c*/
      {
        v7 += 352; /*0x1006a5b60*/
        v18 -= 352; /*0x1006a5b67*/
        if ( !v18 ) /*0x1006a5b6e*/
          goto LABEL_27; /*0x1006a5b6e*/
      }
      _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(v62); /*0x1006a5b9c*/
      v79 = a1; /*0x1006a5ba1*/
      __n = a6; /*0x1006a5ba5*/
      if ( *(_QWORD *)&v62[43] ) /*0x1006a5bb3*/
      {
        v19 = (_BYTE *)(v7 - 256); /*0x1006a5bb9*/
        v20 = *((_BYTE **)&v62[42] + 1); /*0x1006a5bc0*/
        v21 = 352LL * *(_QWORD *)&v62[43]; /*0x1006a5bc7*/
        while ( *((_QWORD *)v20 + 25) != __n || memcmp(*((const void **)v20 + 24), __s2, __n) ) /*0x1006a5c29*/
        {
          v20 += 352; /*0x1006a5bf0*/
          v21 -= 352; /*0x1006a5bf7*/
          if ( !v21 ) /*0x1006a5bfe*/
            goto LABEL_28; /*0x1006a5bfe*/
        }
        _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x1006a5c35*/
          __src,
          v20);
        if ( *(_QWORD *)v7 == 0x8000000000000000LL /*0x1006a5c63*/
          || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v7),
              *(_QWORD *)&__dst[0] == 0x8000000000000000LL) )
        {
          if ( *((_QWORD *)v20 + 32) == 0x8000000000000000LL ) /*0x1006a5c6d*/
            *(_QWORD *)&__dst[0] = 0x8000000000000000LL; /*0x1006a5c6f*/
          else
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v20 + 256); /*0x1006a5ccb*/
        }
        if ( *(_QWORD *)&__src[16] != 0x8000000000000000LL && *(_QWORD *)&__src[16] ) /*0x1006a5d0b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[16] + 1), *(_QWORD *)&__src[16], 1); /*0x1006a5d1c*/
        *(_QWORD *)&__src[17] = *(_QWORD *)&__dst[1]; /*0x1006a5d2b*/
        __src[16] = __dst[0]; /*0x1006a5d41*/
        if ( *(_QWORD *)(v7 + 24) == 0x8000000000000000LL /*0x1006a5d6e*/
          || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v7 + 24),
              *(_QWORD *)&__dst[0] == 0x8000000000000000LL) )
        {
          if ( *((_QWORD *)v20 + 35) == 0x8000000000000000LL ) /*0x1006a5d78*/
            *(_QWORD *)&__dst[0] = 0x8000000000000000LL; /*0x1006a5d7a*/
          else
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v20 + 280); /*0x1006a5d92*/
        }
        if ( *((_QWORD *)&__src[17] + 1) != 0x8000000000000000LL && *((_QWORD *)&__src[17] + 1) ) /*0x1006a5dd2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[18], *((_QWORD *)&__src[17] + 1), 1); /*0x1006a5de3*/
        __src[18] = *(_OWORD *)((char *)__dst + 8); /*0x1006a5e04*/
        *((_QWORD *)&__src[17] + 1) = *(_QWORD *)&__dst[0]; /*0x1006a5e08*/
        if ( *(_QWORD *)(v7 + 48) == 0x8000000000000000LL /*0x1006a5e35*/
          || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v7 + 48),
              *(_QWORD *)&__dst[0] == 0x8000000000000000LL) )
        {
          if ( *((_QWORD *)v20 + 38) == 0x8000000000000000LL ) /*0x1006a5e3f*/
            *(_QWORD *)&__dst[0] = 0x8000000000000000LL; /*0x1006a5e41*/
          else
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v20 + 304); /*0x1006a5e59*/
        }
        if ( *(_QWORD *)&__src[19] != 0x8000000000000000LL && *(_QWORD *)&__src[19] ) /*0x1006a5e99*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[19] + 1), *(_QWORD *)&__src[19], 1); /*0x1006a5eaa*/
        *(_QWORD *)&__src[20] = *(_QWORD *)&__dst[1]; /*0x1006a5eb9*/
        __src[19] = __dst[0]; /*0x1006a5ecf*/
        v22 = *(_QWORD *)v20; /*0x1006a5ed2*/
        v23 = *((_QWORD *)v20 + 1); /*0x1006a5ed6*/
        v24 = (unsigned __int8)v20[341]; /*0x1006a5edb*/
        switch ( v20[341] ) /*0x1006a5ef2*/
        {
          case 0: /*0x1006a5ef2*/
            v25 = 1; /*0x1006a5ef4*/
            v26 = 1; /*0x1006a5ef7*/
            v85 = 0; /*0x1006a5efd*/
            v27 = *(_QWORD *)(v7 - 256); /*0x1006a5f04*/
            v82 = *(_QWORD *)(v7 - 248); /*0x1006a5f12*/
            v28 = *(unsigned __int8 *)(v7 + 85); /*0x1006a5f16*/
            v29 = 2; /*0x1006a5f1b*/
            v30 = 1; /*0x1006a5f33*/
            switch ( (char)v28 ) /*0x1006a5f36*/
            {
              case 0: /*0x1006a5f36*/
                goto LABEL_169;
              case 1: /*0x1006a5f36*/
                goto LABEL_55;
              case 2: /*0x1006a5f36*/
                goto LABEL_54;
              case 3: /*0x1006a5f36*/
                goto LABEL_64;
            }
          case 1: /*0x1006a5ef2*/
            v25 = 1; /*0x1006a5fb9*/
            v26 = 2; /*0x1006a5fbc*/
            v85 = 0; /*0x1006a5fc2*/
            v27 = *(_QWORD *)(v7 - 256); /*0x1006a5fc9*/
            v82 = *(_QWORD *)(v7 - 248); /*0x1006a5fd7*/
            v28 = *(unsigned __int8 *)(v7 + 85); /*0x1006a5fdb*/
            v29 = 2; /*0x1006a5fe0*/
LABEL_55:
            if ( ((v29 != v26) & (unsigned __int8)v25) != 0 ) /*0x1006a6018*/
            {
              v31 = __n; /*0x1006a601d*/
              if ( v29 <= v26 ) /*0x1006a6021*/
                goto LABEL_71; /*0x1006a6021*/
              goto LABEL_70; /*0x1006a6021*/
            }
            v32 = v82; /*0x1006a6028*/
            if ( !v27 ) /*0x1006a602c*/
              v32 = 0; /*0x1006a602c*/
            if ( !v22 ) /*0x1006a6033*/
              v23 = 0; /*0x1006a6033*/
            v31 = __n; /*0x1006a603a*/
            if ( v32 >= v23 ) /*0x1006a603e*/
            {
LABEL_70:
              BYTE8(__src[21]) = *(_BYTE *)(v7 + 88); /*0x1006a6063*/
              BYTE5(__src[21]) = v28; /*0x1006a606e*/
              *(_QWORD *)&__src[0] = v27; /*0x1006a6075*/
              *((_QWORD *)&__src[0] + 1) = v82; /*0x1006a6080*/
            }
LABEL_71:
            v34 = (unsigned __int8)v20[343]; /*0x1006a6087*/
            if ( v34 >= 2 ) /*0x1006a6093*/
            {
              if ( v34 == 2 ) /*0x1006a60a2*/
              {
                v35 = 1; /*0x1006a60a4*/
                v28 = 2; /*0x1006a60a7*/
                v36 = 0; /*0x1006a60ac*/
              }
              else
              {
                v35 = 0; /*0x1006a60b1*/
                v36 = 1; /*0x1006a60b3*/
              }
            }
            else
            {
              v35 = 1; /*0x1006a6095*/
              v28 = 1; /*0x1006a6098*/
              v36 = 0; /*0x1006a609d*/
            }
            v37 = *((_QWORD *)v20 + 5); /*0x1006a60bb*/
            *(_QWORD *)&v39 = *(_QWORD *)(v7 - 224); /*0x1006a60c0*/
            v38 = *(_QWORD *)(v7 - 216); /*0x1006a60c7*/
            *((_QWORD *)&v39 + 1) = *(unsigned __int8 *)(v7 + 87); /*0x1006a60ce*/
            if ( DWORD2(v39) >= 2 ) /*0x1006a60d6*/
            {
              v40 = *(unsigned __int8 *)(v7 + 87); /*0x1006a60e0*/
              if ( DWORD2(v39) != 2 ) /*0x1006a60e3*/
              {
                if ( !v36 ) /*0x1006a60fb*/
                  goto LABEL_89; /*0x1006a60fb*/
                goto LABEL_83; /*0x1006a60fb*/
              }
            }
            else
            {
              v40 = 1; /*0x1006a60d8*/
            }
            if ( ((v40 != (_DWORD)v28) & (unsigned __int8)v35) != 0 ) /*0x1006a60ef*/
            {
              if ( v40 <= (int)v28 ) /*0x1006a60f4*/
                goto LABEL_89; /*0x1006a60f4*/
              goto LABEL_88; /*0x1006a60f4*/
            }
LABEL_83:
            v41 = *(_QWORD *)(v7 - 216); /*0x1006a60fd*/
            if ( !(_QWORD)v39 ) /*0x1006a6103*/
              v41 = 0; /*0x1006a6103*/
            if ( !*((_QWORD *)v20 + 4) ) /*0x1006a60b6*/
              v37 = 0; /*0x1006a610a*/
            if ( v41 >= v37 ) /*0x1006a6111*/
            {
LABEL_88:
              BYTE3(__src[21]) = *(_BYTE *)(v7 + 83); /*0x1006a6113*/
              a7 = *(__m128 *)(v7 - 240); /*0x1006a611f*/
              __src[1] = a7; /*0x1006a6127*/
              BYTE4(__src[21]) = *(_BYTE *)(v7 + 84); /*0x1006a6133*/
              BYTE6(__src[21]) = *(_BYTE *)(v7 + 86); /*0x1006a613f*/
              BYTE7(__src[21]) = BYTE8(v39); /*0x1006a6146*/
              *(_QWORD *)&__src[2] = v39; /*0x1006a614c*/
              *((_QWORD *)&__src[2] + 1) = v38; /*0x1006a6153*/
            }
LABEL_89:
            *(_QWORD *)&v39 = *(_QWORD *)(v7 - 96); /*0x1006a615a*/
            if ( (_QWORD)v39 == 2 && (*(_QWORD *)&v39 = *((_QWORD *)v20 + 20), v19 = v20, (_QWORD)v39 == 2) ) /*0x1006a6173*/
            {
              *(_QWORD *)&v39 = 2; /*0x1006a6175*/
            }
            else
            {
              LOBYTE(v38) = v19[176]; /*0x1006a617c*/
              *((_QWORD *)&v39 + 1) = *((_QWORD *)v19 + 21); /*0x1006a6183*/
            }
            __src[10] = v39; /*0x1006a618a*/
            LOBYTE(__src[11]) = v38; /*0x1006a6198*/
            v42 = *(_QWORD *)(v7 - 184); /*0x1006a61a5*/
            v43 = v42; /*0x1006a61af*/
            if ( !*(_QWORD *)(v7 - 192) ) /*0x1006a619e*/
              v43 = 0; /*0x1006a61b2*/
            if ( v20[64] ) /*0x1006a61b6*/
              v44 = *((_QWORD *)v20 + 9); /*0x1006a61be*/
            else
              v44 = 0; /*0x1006a61c5*/
            if ( v43 >= v44 ) /*0x1006a61ca*/
            {
              *(_QWORD *)&__src[4] = *(_QWORD *)(v7 - 192); /*0x1006a61d0*/
              *((_QWORD *)&__src[4] + 1) = v42; /*0x1006a61d7*/
              BYTE2(__src[21]) = *(_BYTE *)(v7 + 82); /*0x1006a61e3*/
              if ( *(_QWORD *)(v7 - 176) != 2 ) /*0x1006a61f4*/
              {
                a7 = (__m128)*(unsigned __int64 *)(v7 - 152); /*0x1006a61f8*/
                LODWORD(v42) = *(_DWORD *)(v7 - 144); /*0x1006a6201*/
                LODWORD(v44) = *(_DWORD *)(v7 - 160); /*0x1006a6208*/
                LODWORD(v43) = *(_DWORD *)(v7 - 156); /*0x1006a620f*/
                v28 = *(_QWORD *)(v7 - 168); /*0x1006a6216*/
              }
              *(_QWORD *)&__src[5] = *(_QWORD *)(v7 - 176); /*0x1006a621d*/
              *((_QWORD *)&__src[5] + 1) = v28; /*0x1006a6224*/
              *(_QWORD *)&__src[6] = __PAIR64__(v43, v44); /*0x1006a622b*/
              *((_QWORD *)&__src[6] + 1) = a7.i64[0]; /*0x1006a6237*/
              LODWORD(__src[7]) = v42; /*0x1006a623f*/
              if ( *(_QWORD *)(v7 - 136) != 2 ) /*0x1006a6250*/
              {
                a7 = (__m128)*(unsigned __int64 *)(v7 - 112); /*0x1006a6254*/
                LODWORD(v42) = *(_DWORD *)(v7 - 104); /*0x1006a625a*/
                LODWORD(v43) = *(_DWORD *)(v7 - 120); /*0x1006a625e*/
                LODWORD(v44) = *(_DWORD *)(v7 - 116); /*0x1006a6262*/
                v28 = *(_QWORD *)(v7 - 128); /*0x1006a6266*/
              }
              *((_QWORD *)&__src[7] + 1) = *(_QWORD *)(v7 - 136); /*0x1006a626a*/
              *(_QWORD *)&__src[8] = v28; /*0x1006a6271*/
              *((_QWORD *)&__src[8] + 1) = __PAIR64__(v44, v43); /*0x1006a6278*/
              *(_QWORD *)&__src[9] = a7.i64[0]; /*0x1006a6284*/
              DWORD2(__src[9]) = v42; /*0x1006a628c*/
            }
            v7 = (__int64)__dst; /*0x1006a6292*/
            memcpy(__dst, __src, 0x160u); /*0x1006a62a8*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v20); /*0x1006a62b0*/
            memcpy(v20, __dst, 0x160u); /*0x1006a62c0*/
            if ( *((_QWORD *)&v62[35] + 1) != 0x8000000000000000LL /*0x1006a62f7*/
              && *((_QWORD *)&v62[36] + 1) == v31
              && !memcmp(*(const void **)&v62[36], __s2, v31) )
            {
              _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x1006a630e*/
                __src,
                v20);
              memcpy(__dst, __src, 0x160u); /*0x1006a6326*/
              if ( LODWORD(v62[0]) != 2 ) /*0x1006a6332*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v62); /*0x1006a633b*/
              memcpy(v62, __dst, 0x160u); /*0x1006a6353*/
              BYTE12(v62[41]) = *(_BYTE *)(v80.i64[0] + 668); /*0x1006a6363*/
              LOBYTE(v20) = *(_BYTE *)(v80.i64[0] + 648); /*0x1006a6369*/
              v7 = 0x8000000000000000LL; /*0x1006a637b*/
              if ( *(_QWORD *)(v80.i64[0] + 624) != 0x8000000000000000LL ) /*0x1006a6385*/
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1006a6395*/
                  __src,
                  v80.i64[0] + 624);
                v71 = *((_QWORD *)&__src[0] + 1); /*0x1006a63a8*/
                v7 = *(_QWORD *)&__src[0]; /*0x1006a63a8*/
                v72 = *(_QWORD *)&__src[1]; /*0x1006a63b6*/
              }
              if ( *(_QWORD *)&v62[39] != 0x8000000000000000LL && *(_QWORD *)&v62[39] ) /*0x1006a63d6*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v62[39] + 1), *(_QWORD *)&v62[39], 1); /*0x1006a63e4*/
              *(_QWORD *)&v62[39] = v7; /*0x1006a63e9*/
              *((_QWORD *)&v62[39] + 1) = v71; /*0x1006a63fe*/
              *(_QWORD *)&v62[40] = v72; /*0x1006a6405*/
              BYTE8(v62[40]) = (_BYTE)v20; /*0x1006a640c*/
            }
            v45 = *(_QWORD *)&v62[41]; /*0x1006a6413*/
            if ( *(_QWORD *)(v80.i64[0] + 656) > *(__int64 *)&v62[41] ) /*0x1006a6428*/
              v45 = *(_QWORD *)(v80.i64[0] + 656); /*0x1006a6428*/
            *(_QWORD *)&v62[41] = v45; /*0x1006a642c*/
            if ( *(_QWORD *)(v80.i64[0] + 696) == 0x8000000000000000LL ) /*0x1006a6444*/
            {
              v46 = 0x8000000000000000LL; /*0x1006a6446*/
            }
            else
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1006a645c*/
                __dst,
                v80.i64[0] + 696);
              v47 = v80.i64[0]; /*0x1006a6461*/
              LOBYTE(v20) = *(_BYTE *)(v80.i64[0] + 808); /*0x1006a6465*/
              v7 = 0x8000000000000000LL; /*0x1006a6477*/
              if ( *(_QWORD *)(v80.i64[0] + 720) != 0x8000000000000000LL ) /*0x1006a6481*/
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1006a6491*/
                  __src,
                  v80.i64[0] + 720);
                v61[0] = *((_QWORD *)&__src[0] + 1); /*0x1006a64a4*/
                v7 = *(_QWORD *)&__src[0]; /*0x1006a64a4*/
                v61[1] = *(_QWORD *)&__src[1]; /*0x1006a64b2*/
              }
              a7 = *(__m128 *)(v47 + 792); /*0x1006a64b9*/
              v48 = *(_QWORD *)(v47 + 744); /*0x1006a64c0*/
              *(_QWORD *)&v74 = *(_QWORD *)(v47 + 752); /*0x1006a64ce*/
              v73 = v48; /*0x1006a64d5*/
              v49 = *(_QWORD *)(v47 + 760); /*0x1006a64dc*/
              *(_QWORD *)&v75 = *(_QWORD *)(v47 + 768); /*0x1006a64ea*/
              *((_QWORD *)&v74 + 1) = v49; /*0x1006a64f1*/
              v50 = *(_QWORD *)(v47 + 784); /*0x1006a64ff*/
              *((_QWORD *)&v75 + 1) = *(_QWORD *)(v47 + 776); /*0x1006a6506*/
              v76 = v50; /*0x1006a650d*/
              v46 = *(_QWORD *)&__dst[0]; /*0x1006a6511*/
              __src[0] = *(_OWORD *)((char *)__dst + 8); /*0x1006a651f*/
            }
            if ( *((_QWORD *)&v62[43] + 1) != 0x8000000000000000LL ) /*0x1006a6545*/
            {
              v80 = a7; /*0x1006a654e*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountRefreshReport$GT$::he8d089c576c2cc3c((char *)&v62[43] + 8); /*0x1006a6552*/
              a7 = v80; /*0x1006a6557*/
            }
            *((_QWORD *)&v62[43] + 1) = v46; /*0x1006a655b*/
            v62[44] = __src[0]; /*0x1006a6570*/
            *(_QWORD *)&v62[45] = v7; /*0x1006a657e*/
            *((_QWORD *)&v62[45] + 1) = v61[0]; /*0x1006a6593*/
            *(_QWORD *)&v62[46] = v61[1]; /*0x1006a659a*/
            *((_QWORD *)&v62[46] + 1) = v73; /*0x1006a65af*/
            v62[47] = v74; /*0x1006a65b6*/
            v62[48] = v75; /*0x1006a65d2*/
            *(_QWORD *)&v62[49] = v76; /*0x1006a65e4*/
            *(__m128 *)((char *)&v62[49] + 8) = a7; /*0x1006a65f2*/
            BYTE8(v62[50]) = (_BYTE)v20; /*0x1006a65f9*/
            memcpy(__dst, v62, sizeof(__dst)); /*0x1006a6613*/
            a6 = __n; /*0x1006a6618*/
            break; /*0x1006a6618*/
          case 2: /*0x1006a5ef2*/
            v25 = 1; /*0x1006a5f38*/
            v26 = 3; /*0x1006a5f3b*/
            v85 = 0; /*0x1006a5f41*/
            v27 = *(_QWORD *)(v7 - 256); /*0x1006a5f48*/
            v82 = *(_QWORD *)(v7 - 248); /*0x1006a5f56*/
            v28 = *(unsigned __int8 *)(v7 + 85); /*0x1006a5f5a*/
            v29 = 2; /*0x1006a5f5f*/
            v30 = 1; /*0x1006a5f77*/
            switch ( (char)v28 ) /*0x1006a5f7a*/
            {
              case 0: /*0x1006a5f7a*/
                goto LABEL_169;
              case 1: /*0x1006a5f7a*/
                goto LABEL_55;
              case 2: /*0x1006a5f7a*/
                goto LABEL_54;
              case 3: /*0x1006a5f7a*/
                goto LABEL_64;
            }
          case 3: /*0x1006a5ef2*/
            LOBYTE(v24) = 1; /*0x1006a5f7c*/
            v85 = v24; /*0x1006a5f7e*/
            v25 = 0; /*0x1006a5f81*/
            v27 = *(_QWORD *)(v7 - 256); /*0x1006a5f84*/
            v82 = *(_QWORD *)(v7 - 248); /*0x1006a5f92*/
            v28 = *(unsigned __int8 *)(v7 + 85); /*0x1006a5f96*/
            v29 = 2; /*0x1006a5f9b*/
            v26 = (unsigned __int8)v28; /*0x1006a5fa1*/
            v30 = 0; /*0x1006a5fb3*/
            switch ( (char)v28 ) /*0x1006a5fb6*/
            {
              case 0: /*0x1006a5fb6*/
LABEL_169:
                JUMPOUT(0x1006A5FFDLL); /*0x1006a5ffd*/
              case 1: /*0x1006a5fb6*/
                goto LABEL_55;
              case 2: /*0x1006a5fb6*/
LABEL_54:
                v29 = 3; /*0x1006a6005*/
                v25 = v30; /*0x1006a600b*/
                goto LABEL_55; /*0x1006a600b*/
              case 3: /*0x1006a5fb6*/
LABEL_64:
                v31 = __n; /*0x1006a6042*/
                if ( (_BYTE)v85 ) /*0x1006a604a*/
                {
                  v33 = v82; /*0x1006a604f*/
                  if ( !v27 ) /*0x1006a6053*/
                    v33 = 0; /*0x1006a6053*/
                  if ( !v22 ) /*0x1006a605a*/
                    v23 = 0; /*0x1006a605a*/
                  if ( v33 >= v23 ) /*0x1006a6061*/
                    goto LABEL_70; /*0x1006a6061*/
                }
                goto LABEL_71; /*0x1006a6061*/
            }
        }
      }
      else
      {
LABEL_28:
        _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(__dst); /*0x1006a5c94*/
        a6 = __n; /*0x1006a5ca7*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043( /*0x1006a5cb2*/
          v62,
          &dword_1019FED40);
      }
      a3 = v78; /*0x1006a661c*/
      a1 = v79; /*0x1006a6620*/
    }
    else
    {
LABEL_27:
      _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(__dst); /*0x1006a5c78*/
      a3 = v78; /*0x1006a5c8b*/
    }
  }
  _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(v62); /*0x1006a6632*/
  memcpy(__src, v62, sizeof(__src)); /*0x1006a664a*/
  if ( dword_1019FED40 != 3 ) /*0x1006a6656*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043( /*0x1006a665f*/
      &dword_1019FED40,
      v62);
  memcpy(&dword_1019FED40, __src, 0x330u); /*0x1006a6677*/
  v14 = __dst; /*0x1006a6683*/
  memcpy(v61, __dst, sizeof(v61)); /*0x1006a668f*/
  if ( !v13 ) /*0x1006a6697*/
  {
LABEL_129:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v77) != 0 /*0x1006a6967*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v61, v14, v15, v16) )
    {
      byte_1019FED38 = 1; /*0x1006a6974*/
    }
  }
LABEL_130:
  v51 = codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc; /*0x1006a66ad*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::hdbdeb1536164aedc); /*0x1006a66b4*/
  switch ( v84 ) /*0x1006a66d9*/
  {
    case 4uLL: /*0x1006a66d9*/
      if ( *a3 == 1819047270 ) /*0x1006a66e3*/
        goto LABEL_140; /*0x1006a66e3*/
      break; /*0x1006a66e3*/
    case 5uLL: /*0x1006a66d9*/
      if ( !(*a3 ^ 0x67617375 | *((unsigned __int8 *)a3 + 4) ^ 0x65) ) /*0x1006a671a*/
        goto LABEL_140; /*0x1006a671c*/
      break; /*0x1006a671c*/
    case 7uLL: /*0x1006a66d9*/
      if ( !(*a3 ^ 0x6F636361 | *(_DWORD *)((char *)a3 + 3) ^ 0x746E756F) ) /*0x1006a66fe*/
        goto LABEL_140; /*0x1006a6700*/
      break; /*0x1006a6700*/
    case 8uLL: /*0x1006a66d9*/
      if ( *(_QWORD *)a3 == 0x6E6F69746174756DLL ) /*0x1006a672e*/
        goto LABEL_140; /*0x1006a672e*/
      break; /*0x1006a672e*/
    case 0xBuLL: /*0x1006a66d9*/
      if ( !(*(_QWORD *)a3 ^ 0x73736572676F7270LL | *(_QWORD *)((char *)a3 + 3) ^ 0x6576697373657267LL) ) /*0x1006a674f*/
      {
LABEL_140:
        *(_QWORD *)&__src[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v51, v14); /*0x1006a6754*/
        DWORD2(__src[0]) = v52; /*0x1006a6760*/
        std::time::SystemTime::duration_since::had059553cab94f96(v62, __src, 0, 0); /*0x1006a6778*/
        if ( LOBYTE(v62[0]) ) /*0x1006a6784*/
          v53 = 0; /*0x1006a678f*/
        else
          v53 = *((_QWORD *)&v62[0] + 1); /*0x1006a6786*/
        codexmate_lib::commands::system::note_usage_refresh_activity::h0d537a565f552410(v53); /*0x1006a6791*/
      }
      break; /*0x1006a6791*/
    default:
      break;
  }
  codexmate_lib::commands::tray_menu::refresh_tray_menu_with_snapshot::h91c6604bb87704c1(a1, v61); /*0x1006a6796*/
  memcpy(__src, v61, sizeof(__src)); /*0x1006a67bb*/
  if ( (v84 & 0x8000000000000000LL) != 0LL ) /*0x1006a67c5*/
  {
    v7 = 0; /*0x1006a67c7*/
    goto LABEL_146; /*0x1006a67c7*/
  }
  if ( v84 ) /*0x1006a67d8*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v61); /*0x1006a67da*/
    v7 = 1; /*0x1006a67df*/
    v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v84, 1); /*0x1006a67ee*/
    if ( !v54 ) /*0x1006a67f6*/
LABEL_146:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v84); /*0x1006a67ca*/
    v55 = v54; /*0x1006a67f8*/
  }
  else
  {
    v55 = 1; /*0x1006a67fd*/
  }
  v80.i64[0] = v55; /*0x1006a6802*/
  memcpy((void *)v55, a3, v84); /*0x1006a680d*/
  if ( __s2 ) /*0x1006a6817*/
  {
    if ( a6 < 0 ) /*0x1006a681c*/
    {
      v56 = a6; /*0x1006a681e*/
      v57 = 0; /*0x1006a6821*/
      goto LABEL_154; /*0x1006a6821*/
    }
    v79 = a1; /*0x1006a6843*/
    if ( a6 ) /*0x1006a6847*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v55, a3); /*0x1006a6849*/
      v58 = a6; /*0x1006a684e*/
      v57 = 1; /*0x1006a6851*/
      v56 = v58; /*0x1006a685b*/
      v59 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v58, 1); /*0x1006a685e*/
      if ( !v59 ) /*0x1006a6866*/
LABEL_154:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v57, v56); /*0x1006a6823*/
      v7 = v59; /*0x1006a6868*/
      a6 = v58; /*0x1006a686b*/
    }
    else
    {
      v7 = 1; /*0x1006a6870*/
    }
    memcpy((void *)v7, __s2, a6); /*0x1006a6880*/
  }
  else
  {
    v79 = a1; /*0x1006a6830*/
    a6 = 0x8000000000000000LL; /*0x1006a683e*/
  }
  memcpy(v62, __src, sizeof(v62)); /*0x1006a68a5*/
  v63 = v84; /*0x1006a68ae*/
  v64 = v80.i64[0]; /*0x1006a68b9*/
  v65 = v84; /*0x1006a68c0*/
  v66 = a6; /*0x1006a68c7*/
  v67 = v7; /*0x1006a68ce*/
  v68 = a6; /*0x1006a68d5*/
  result = tauri::Emitter::emit::h0dbf4b4678b9e6e4(__src, v79, &unk_1016048BE, 21, v62); /*0x1006a68f6*/
  if ( *(_QWORD *)&__src[0] != 0x8000000000000025LL ) /*0x1006a6906*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006a690f*/
  return result; /*0x1006a6914*/
}