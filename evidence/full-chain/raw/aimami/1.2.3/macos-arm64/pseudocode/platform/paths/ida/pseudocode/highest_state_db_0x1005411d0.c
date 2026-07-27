// __ZN13codexmate_lib8platform5paths10CodexPaths16highest_state_db @ 0x1005411d0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::platform::paths::CodexPaths::highest_state_db::h679fbb676dfaffc6(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // r15
  volatile signed __int64 *v5; // rcx
  char *v6; // r14
  __m128i v7; // xmm0
  signed __int64 epi64; // rax
  char *v9; // r12
  signed __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r15
  _BYTE *v15; // rsi
  __int64 v16; // rsi
  int v17; // eax
  _BOOL8 v18; // rdx
  unsigned __int64 v19; // rcx
  _BYTE *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rdi
  bool v24; // of
  unsigned int v25; // edx
  bool v26; // cf
  char *v27; // r12
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rbx
  volatile signed __int64 *v32; // [rsp+0h] [rbp-1130h] BYREF
  char v33; // [rsp+8h] [rbp-1128h]
  __int64 v34; // [rsp+108h] [rbp-1028h]
  __int64 v35; // [rsp+428h] [rbp-D08h]
  volatile signed __int64 *v36; // [rsp+850h] [rbp-8E0h] BYREF
  char v37; // [rsp+858h] [rbp-8D8h]
  _QWORD __dst[130]; // [rsp+860h] [rbp-8D0h] BYREF
  _OWORD v39[67]; // [rsp+C70h] [rbp-4C0h] BYREF
  unsigned __int64 *v40; // [rsp+10A0h] [rbp-90h]
  unsigned __int64 v41; // [rsp+10A8h] [rbp-88h]
  __int64 v42; // [rsp+10B0h] [rbp-80h] BYREF
  __int64 v43; // [rsp+10B8h] [rbp-78h]
  unsigned __int64 v44; // [rsp+10C0h] [rbp-70h]
  __int64 v45; // [rsp+10C8h] [rbp-68h] BYREF
  __int64 v46; // [rsp+10D0h] [rbp-60h]
  __int64 v47; // [rsp+10D8h] [rbp-58h]
  unsigned __int64 v48; // [rsp+10E0h] [rbp-50h]
  unsigned __int32 v49; // [rsp+10ECh] [rbp-44h]
  __m128i v50; // [rsp+10F0h] [rbp-40h] BYREF
  unsigned __int64 v51; // [rsp+1100h] [rbp-30h]

  v34 = 0; /*0x1005411e4*/
  v3 = a1; /*0x1005411f3*/
  v4 = 0x8000000000000000LL; /*0x1005411f6*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v32, a2, a3); /*0x10054120a*/
  v5 = v32; /*0x100541216*/
  *(_QWORD *)&v39[0] = v32; /*0x10054121d*/
  BYTE8(v39[0]) = v33; /*0x100541224*/
  if ( v33 == 2 ) /*0x10054122c*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(v39); /*0x100541238*/
    goto LABEL_62; /*0x10054123d*/
  }
  v40 = a1; /*0x100541242*/
  v32 = nullptr; /*0x100541249*/
  v35 = 0; /*0x100541254*/
  v36 = v5; /*0x100541266*/
  v37 = v33; /*0x10054126d*/
  v6 = (char *)&v39[1] + 8; /*0x100541273*/
  v51 = 0x8000000000000000LL; /*0x10054128e*/
  do /*0x1005412d6*/
  {
    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(v39); /*0x1005412d6*/
    if ( *(_QWORD *)&v39[0] ) /*0x1005412e3*/
    {
      v50 = *(__m128i *)((char *)v39 + 8); /*0x1005412ec*/
      memcpy(__dst, v6, sizeof(__dst)); /*0x1005412fb*/
      goto LABEL_12; /*0x100541300*/
    }
    if ( v37 != 2 && !_InterlockedDecrement64(v36) ) /*0x100541320*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v36); /*0x100541329*/
    v37 = 2; /*0x10054132e*/
    v50 = *(__m128i *)((char *)v39 + 8); /*0x10054133c*/
    memcpy(__dst, v6, sizeof(__dst)); /*0x100541352*/
    if ( (v39[0] & 1) == 0 ) /*0x10054135a*/
      break; /*0x10054135a*/
LABEL_12:
    v7 = _mm_load_si128(&v50); /*0x100541360*/
    if ( !v7.i64[0] ) /*0x10054136d*/
    {
      epi64 = _mm_extract_epi64(v7, 1); /*0x10054136f*/
      if ( (epi64 & 3) == 1 ) /*0x10054137e*/
      {
        v9 = v6; /*0x100541384*/
        v10 = epi64 - 1; /*0x100541387*/
        v11 = *(_QWORD *)(epi64 - 1); /*0x10054138b*/
        v12 = *(_QWORD *)(epi64 + 7); /*0x10054138f*/
        if ( *(_QWORD *)v12 ) /*0x100541393*/
          (*(void (__fastcall **)(__int64))v12)(v11); /*0x10054139e*/
        v13 = *(_QWORD *)(v12 + 8); /*0x1005413a0*/
        if ( v13 ) /*0x1005413a7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1005413b4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8); /*0x1005412ad*/
        v6 = v9; /*0x1005412b2*/
      }
      continue; /*0x1005412b2*/
    }
    v50 = v7; /*0x1005413cd*/
    memcpy(&v39[1], __dst, 0x410u); /*0x1005413d2*/
    v39[0] = _mm_load_si128(&v50); /*0x1005413dc*/
    std::fs::DirEntry::file_name::h82e3a94f480fbff7(&v45, v39); /*0x1005413eb*/
    v14 = v46; /*0x1005413f0*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v42, v46, v47); /*0x1005413ff*/
    if ( v44 >= 6 && !(*(_DWORD *)v43 ^ 0x74617473 | *(unsigned __int16 *)(v43 + 4) ^ 0x5F65) && v44 - 6 >= 7 ) /*0x100541431*/
    {
      v15 = (_BYTE *)(v43 + 6); /*0x100541433*/
      if ( !(*(_DWORD *)(v43 + 6 + v44 - 13) ^ 0x6C71732E | *(_DWORD *)(v43 + 6 + v44 - 10) ^ 0x6574696C) && v44 != 13 ) /*0x1005414b9*/
      {
        if ( v44 == 14 ) /*0x1005414bf*/
        {
          v17 = (unsigned __int8)*v15; /*0x1005414c1*/
          if ( v17 == 43 || v17 == 45 ) /*0x1005414cc*/
            goto LABEL_22; /*0x1005414cc*/
        }
        else
        {
          LOBYTE(v17) = *v15; /*0x1005414d0*/
        }
        v18 = (_BYTE)v17 == 43; /*0x1005414db*/
        v19 = v44 - 13 - v18; /*0x1005414de*/
        v20 = &v15[v18]; /*0x1005414e1*/
        if ( v19 >= 9 ) /*0x1005414e8*/
        {
          v23 = 0; /*0x100541521*/
          v50.i64[0] = 0; /*0x100541523*/
          while ( v19 != v23 ) /*0x10054152e*/
          {
            v24 = (10 * (unsigned __int64)v50.u32[0]) >> 32 != 0; /*0x100541539*/
            v50.i64[0] = (unsigned int)(10 * v50.i32[0]); /*0x10054153b*/
            if ( !v24 ) /*0x10054153f*/
            {
              v25 = (unsigned __int8)v20[v23] - 48; /*0x100541549*/
              v26 = __CFADD__(v25, v50.i32[0]); /*0x100541550*/
              v50.i64[0] = v25 + v50.i32[0]; /*0x100541552*/
              if ( v25 <= 9 ) /*0x10054155c*/
              {
                ++v23; /*0x100541562*/
                if ( !v26 ) /*0x100541567*/
                  continue; /*0x100541567*/
              }
            }
            goto LABEL_22; /*0x100541567*/
          }
LABEL_48:
          if ( v51 == 0x8000000000000000LL || v50.i32[0] > v49 ) /*0x10054158c*/
          {
            v27 = v6; /*0x100541591*/
            std::fs::DirEntry::path::h1f82b6d8ef0530d7(__dst, v39); /*0x10054159b*/
            v28 = __dst[0]; /*0x1005415a0*/
            v29 = __dst[1]; /*0x1005415a7*/
            v41 = __dst[2]; /*0x1005415b5*/
            if ( 2 * v51 ) /*0x1005415c0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v51, 1); /*0x1005415d6*/
            v48 = v29; /*0x1005415db*/
            v51 = v28; /*0x1005415df*/
            v49 = v50.i32[0]; /*0x1005415e7*/
            v6 = v27; /*0x1005415ea*/
          }
          if ( v42 != 0x8000000000000000LL && v42 ) /*0x100541611*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v42, 1); /*0x10054161c*/
          if ( v45 ) /*0x100541628*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x100541633*/
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)&v39[0]) ) /*0x10054163f*/
            continue; /*0x100541643*/
LABEL_26:
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v39); /*0x100541490*/
          continue; /*0x100541498*/
        }
        if ( !v19 ) /*0x1005414ed*/
        {
          v50.i64[0] = 0; /*0x10054156e*/
          goto LABEL_48; /*0x10054156e*/
        }
        v21 = 0; /*0x1005414ef*/
        v50.i64[0] = 0; /*0x1005414f1*/
        while ( 1 ) /*0x1005414fd*/
        {
          v22 = (unsigned __int8)v20[v21] - 48; /*0x1005414fd*/
          if ( v22 > 9 ) /*0x100541503*/
            break; /*0x100541503*/
          v50.i64[0] = v22 + 10 * v50.i32[0]; /*0x100541513*/
          if ( v19 == ++v21 ) /*0x10054151d*/
            goto LABEL_48; /*0x10054151d*/
        }
      }
    }
LABEL_22:
    if ( !(2 * v42) ) /*0x100541455*/
    {
      v16 = v45; /*0x100541462*/
      if ( !v45 ) /*0x100541469*/
        goto LABEL_25; /*0x100541469*/
LABEL_24:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, 1); /*0x10054146b*/
      goto LABEL_25; /*0x100541473*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v42, 1); /*0x1005414a5*/
    v16 = v45; /*0x1005414aa*/
    if ( v45 ) /*0x1005414b1*/
      goto LABEL_24; /*0x1005414b1*/
LABEL_25:
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v39[0]) ) /*0x10054147f*/
      goto LABEL_26; /*0x10054148a*/
  }
  while ( v37 != 2 ); /*0x1005412d6*/
  v30 = v51; /*0x10054164e*/
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v32); /*0x100541659*/
  v3 = v40; /*0x10054165e*/
  v4 = 0x8000000000000000LL; /*0x100541665*/
  if ( v30 != 0x8000000000000000LL ) /*0x100541672*/
  {
    v40[1] = v48; /*0x100541678*/
    v3[2] = v41; /*0x100541683*/
    v4 = v30; /*0x100541687*/
  }
LABEL_62:
  *v3 = v4; /*0x10054168a*/
  return v3; /*0x100541690*/
}