// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1004d4fc0 depth=2
// codexmate_lib8platform5paths10CodexPaths16highest_state_db
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::highest_state_db::ha8f8ab1f72fa3776(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // r15
  volatile signed __int64 *v5; // rcx
  __int64 result; // rax
  char *v7; // r14
  __m128i v8; // xmm0
  signed __int64 epi64; // rax
  char *v10; // r12
  __int64 v11; // r14
  _BYTE *v12; // rsi
  int v13; // eax
  _BOOL8 v14; // rdx
  unsigned __int64 v15; // rcx
  _BYTE *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rdi
  bool v20; // of
  unsigned int v21; // edx
  bool v22; // cf
  char *v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbx
  volatile signed __int64 *v27; // [rsp+0h] [rbp-1130h] BYREF
  char v28; // [rsp+8h] [rbp-1128h]
  __int64 v29; // [rsp+108h] [rbp-1028h]
  __int64 v30; // [rsp+428h] [rbp-D08h]
  volatile signed __int64 *v31; // [rsp+850h] [rbp-8E0h] BYREF
  char v32; // [rsp+858h] [rbp-8D8h]
  _QWORD __dst[130]; // [rsp+860h] [rbp-8D0h] BYREF
  _OWORD v34[67]; // [rsp+C70h] [rbp-4C0h] BYREF
  unsigned __int64 *v35; // [rsp+10A0h] [rbp-90h]
  __int64 v36; // [rsp+10A8h] [rbp-88h]
  __int64 v37; // [rsp+10B0h] [rbp-80h] BYREF
  __int64 v38; // [rsp+10B8h] [rbp-78h]
  unsigned __int64 v39; // [rsp+10C0h] [rbp-70h]
  _QWORD v40[3]; // [rsp+10C8h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+10E0h] [rbp-50h]
  unsigned __int32 v42; // [rsp+10ECh] [rbp-44h]
  __m128i v43; // [rsp+10F0h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+1100h] [rbp-30h]

  v29 = 0; /*0x1004d4fd4*/
  v3 = a1; /*0x1004d4fe3*/
  v4 = 0x8000000000000000LL; /*0x1004d4fe6*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v27, a2, a3); /*0x1004d4ffa*/
  v5 = v27; /*0x1004d5006*/
  *(_QWORD *)&v34[0] = v27; /*0x1004d500d*/
  BYTE8(v34[0]) = v28; /*0x1004d5014*/
  if ( v28 == 2 ) /*0x1004d501c*/
  {
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hccbbdc7438ddc5d0(v34); /*0x1004d5028*/
    goto LABEL_62; /*0x1004d502d*/
  }
  v35 = a1; /*0x1004d5032*/
  v27 = nullptr; /*0x1004d5039*/
  v30 = 0; /*0x1004d5044*/
  v31 = v5; /*0x1004d5056*/
  v32 = v28; /*0x1004d505d*/
  v7 = (char *)&v34[1] + 8; /*0x1004d5063*/
  v44 = 0x8000000000000000LL; /*0x1004d507e*/
  do /*0x1004d50c6*/
  {
    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c((__int64)v34); /*0x1004d50c6*/
    if ( *(_QWORD *)&v34[0] ) /*0x1004d50d3*/
    {
      v43 = *(__m128i *)((char *)v34 + 8); /*0x1004d50dc*/
      memcpy(__dst, v7, sizeof(__dst)); /*0x1004d50eb*/
      goto LABEL_12; /*0x1004d50f0*/
    }
    if ( v32 != 2 && !_InterlockedDecrement64(v31) ) /*0x1004d5110*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v31); /*0x1004d5119*/
    v32 = 2; /*0x1004d511e*/
    v43 = *(__m128i *)((char *)v34 + 8); /*0x1004d512c*/
    memcpy(__dst, v7, sizeof(__dst)); /*0x1004d5142*/
    if ( (v34[0] & 1) == 0 ) /*0x1004d514a*/
      break; /*0x1004d514a*/
LABEL_12:
    v8 = _mm_load_si128(&v43); /*0x1004d5150*/
    if ( !v8.i64[0] ) /*0x1004d515d*/
    {
      epi64 = _mm_extract_epi64(v8, 1); /*0x1004d515f*/
      if ( (epi64 & 3) == 1 ) /*0x1004d516e*/
      {
        v10 = v7; /*0x1004d5174*/
        v11 = *(_QWORD *)(epi64 + 7); /*0x1004d517f*/
        if ( *(_QWORD *)v11 ) /*0x1004d5183*/
          (*(void (__fastcall **)(_QWORD))v11)(*(_QWORD *)(epi64 - 1)); /*0x1004d518e*/
        if ( *(_QWORD *)(v11 + 8) ) /*0x1004d5190*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d51a4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d509d*/
        v7 = v10; /*0x1004d50a2*/
      }
      continue; /*0x1004d50a2*/
    }
    v43 = v8; /*0x1004d51bd*/
    memcpy(&v34[1], __dst, 0x410u); /*0x1004d51c2*/
    v34[0] = _mm_load_si128(&v43); /*0x1004d51cc*/
    std::fs::DirEntry::file_name::h82e3a94f480fbff7(v40, v34); /*0x1004d51db*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v37, v40[1], v40[2]); /*0x1004d51ef*/
    if ( v39 >= 6 && !(*(_DWORD *)v38 ^ 0x74617473 | *(unsigned __int16 *)(v38 + 4) ^ 0x5F65) && v39 - 6 >= 7 ) /*0x1004d5221*/
    {
      v12 = (_BYTE *)(v38 + 6); /*0x1004d5223*/
      if ( !(*(_DWORD *)(v38 + 6 + v39 - 13) ^ 0x6C71732E | *(_DWORD *)(v38 + 6 + v39 - 10) ^ 0x6574696C) && v39 != 13 ) /*0x1004d52a9*/
      {
        if ( v39 == 14 ) /*0x1004d52af*/
        {
          v13 = (unsigned __int8)*v12; /*0x1004d52b1*/
          if ( v13 == 43 || v13 == 45 ) /*0x1004d52bc*/
            goto LABEL_22; /*0x1004d52bc*/
        }
        else
        {
          LOBYTE(v13) = *v12; /*0x1004d52c0*/
        }
        v14 = (_BYTE)v13 == 43; /*0x1004d52cb*/
        v15 = v39 - 13 - v14; /*0x1004d52ce*/
        v16 = &v12[v14]; /*0x1004d52d1*/
        if ( v15 >= 9 ) /*0x1004d52d8*/
        {
          v19 = 0; /*0x1004d5311*/
          v43.i64[0] = 0; /*0x1004d5313*/
          while ( v15 != v19 ) /*0x1004d531e*/
          {
            v20 = (10 * (unsigned __int64)v43.u32[0]) >> 32 != 0; /*0x1004d5329*/
            v43.i64[0] = (unsigned int)(10 * v43.i32[0]); /*0x1004d532b*/
            if ( !v20 ) /*0x1004d532f*/
            {
              v21 = (unsigned __int8)v16[v19] - 48; /*0x1004d5339*/
              v22 = __CFADD__(v21, v43.i32[0]); /*0x1004d5340*/
              v43.i64[0] = v21 + v43.i32[0]; /*0x1004d5342*/
              if ( v21 <= 9 ) /*0x1004d534c*/
              {
                ++v19; /*0x1004d5352*/
                if ( !v22 ) /*0x1004d5357*/
                  continue; /*0x1004d5357*/
              }
            }
            goto LABEL_22; /*0x1004d5357*/
          }
LABEL_48:
          if ( v44 == 0x8000000000000000LL || v43.i32[0] > v42 ) /*0x1004d537c*/
          {
            v23 = v7; /*0x1004d5381*/
            std::fs::DirEntry::path::h1f82b6d8ef0530d7(__dst, v34); /*0x1004d538b*/
            v24 = __dst[0]; /*0x1004d5390*/
            v25 = __dst[1]; /*0x1004d5397*/
            v36 = __dst[2]; /*0x1004d53a5*/
            if ( 2 * v44 ) /*0x1004d53b0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d53c6*/
            v41 = v25; /*0x1004d53cb*/
            v44 = v24; /*0x1004d53cf*/
            v42 = v43.i32[0]; /*0x1004d53d7*/
            v7 = v23; /*0x1004d53da*/
          }
          if ( v37 != 0x8000000000000000LL && v37 ) /*0x1004d5401*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d540c*/
          if ( v40[0] ) /*0x1004d5418*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d5423*/
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)&v34[0]) ) /*0x1004d542f*/
            continue; /*0x1004d5433*/
LABEL_26:
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v34); /*0x1004d5280*/
          continue; /*0x1004d5288*/
        }
        if ( !v15 ) /*0x1004d52dd*/
        {
          v43.i64[0] = 0; /*0x1004d535e*/
          goto LABEL_48; /*0x1004d535e*/
        }
        v17 = 0; /*0x1004d52df*/
        v43.i64[0] = 0; /*0x1004d52e1*/
        while ( 1 ) /*0x1004d52ed*/
        {
          v18 = (unsigned __int8)v16[v17] - 48; /*0x1004d52ed*/
          if ( v18 > 9 ) /*0x1004d52f3*/
            break; /*0x1004d52f3*/
          v43.i64[0] = v18 + 10 * v43.i32[0]; /*0x1004d5303*/
          if ( v15 == ++v17 ) /*0x1004d530d*/
            goto LABEL_48; /*0x1004d530d*/
        }
      }
    }
LABEL_22:
    if ( !(2 * v37) ) /*0x1004d5245*/
    {
      if ( !v40[0] ) /*0x1004d5259*/
        goto LABEL_25; /*0x1004d5259*/
LABEL_24:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d525b*/
      goto LABEL_25; /*0x1004d5263*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d5295*/
    if ( v40[0] ) /*0x1004d52a1*/
      goto LABEL_24; /*0x1004d52a1*/
LABEL_25:
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v34[0]) ) /*0x1004d526f*/
      goto LABEL_26; /*0x1004d527a*/
  }
  while ( v32 != 2 ); /*0x1004d50c6*/
  v26 = v44; /*0x1004d543e*/
  result = core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::he15cef2cd682728c(&v27); /*0x1004d5449*/
  v3 = v35; /*0x1004d544e*/
  v4 = 0x8000000000000000LL; /*0x1004d5455*/
  if ( v26 != 0x8000000000000000LL ) /*0x1004d5462*/
  {
    v35[1] = v41; /*0x1004d5468*/
    result = v36; /*0x1004d546c*/
    v3[2] = v36; /*0x1004d5473*/
    v4 = v26; /*0x1004d5477*/
  }
LABEL_62:
  *v3 = v4; /*0x1004d547a*/
  return result; /*0x1004d547d*/
}