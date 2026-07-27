// __ZN13codexmate_lib4core5relay23codex_thread_visibility28collect_router_model_targets @ 0x100ada170 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::collect_router_model_targets::hf5ddd6ccb607c54c(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r12
  char v4; // r14
  char v5; // r15
  _QWORD *v6; // r13
  sqlite3_stmt *v7; // r15
  int v8; // eax
  int v9; // r12d
  unsigned int v10; // eax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  __m128i inserted; // xmm0
  unsigned __int64 *v14; // r12
  unsigned __int128 v15; // kr00_16
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // r14
  unsigned __int64 v17; // r15
  _QWORD v18[4]; // [rsp+0h] [rbp-1D0h] BYREF
  _QWORD v19[3]; // [rsp+20h] [rbp-1B0h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-198h] BYREF
  _QWORD v21[8]; // [rsp+48h] [rbp-188h] BYREF
  unsigned __int64 *v22; // [rsp+88h] [rbp-148h] BYREF
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+90h] [rbp-140h]
  unsigned __int64 v24; // [rsp+98h] [rbp-138h]
  __int64 v25; // [rsp+A0h] [rbp-130h]
  __int64 v26; // [rsp+A8h] [rbp-128h]
  __int64 v27; // [rsp+B0h] [rbp-120h]
  __int64 v28; // [rsp+B8h] [rbp-118h]
  __int64 v29; // [rsp+C0h] [rbp-110h]
  unsigned __int64 v30; // [rsp+C8h] [rbp-108h] BYREF
  _BYTE __src[88]; // [rsp+D0h] [rbp-100h] BYREF
  unsigned __int64 *v32; // [rsp+128h] [rbp-A8h] BYREF
  __int64 (__fastcall *v33)(_QWORD, _QWORD); // [rsp+130h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+138h] [rbp-98h]
  __int64 v35; // [rsp+140h] [rbp-90h]
  __int64 v36; // [rsp+148h] [rbp-88h]
  __int64 v37; // [rsp+150h] [rbp-80h]
  __int64 v38; // [rsp+158h] [rbp-78h]
  __int64 v39; // [rsp+160h] [rbp-70h]
  unsigned __int64 *v40; // [rsp+168h] [rbp-68h] BYREF
  unsigned __int128 v41; // [rsp+170h] [rbp-60h]
  __int64 v42; // [rsp+180h] [rbp-50h]
  __int128 v43; // [rsp+188h] [rbp-48h]
  __int64 v44; // [rsp+198h] [rbp-38h]
  __int64 v45; // [rsp+1A0h] [rbp-30h]

  result = codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::h4c3d9b33239405b8( /*0x100ada191*/
             (__int64)&v30,
             a2);
  v3 = v30; /*0x100ada196*/
  v4 = __src[0]; /*0x100ada19d*/
  if ( v30 != 11 ) /*0x100ada1a9*/
  {
    v5 = __src[1]; /*0x100ada34c*/
    result = (__int64)memcpy((void *)(a1 + 10), &__src[2], 0x56u); /*0x100ada364*/
    *(_QWORD *)a1 = v3; /*0x100ada369*/
    *(_BYTE *)(a1 + 8) = v4; /*0x100ada36c*/
    *(_BYTE *)(a1 + 9) = v5; /*0x100ada370*/
    return result; /*0x100ada374*/
  }
  if ( (__src[0] & 1) == 0 ) /*0x100ada1b3*/
  {
    *(_QWORD *)(a1 + 8) = 0; /*0x100ada379*/
    *(_QWORD *)(a1 + 16) = 8; /*0x100ada381*/
    *(_QWORD *)(a1 + 24) = 0; /*0x100ada389*/
    *(_QWORD *)a1 = 11; /*0x100ada391*/
    return result; /*0x100ada398*/
  }
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v30, a2, &unk_10167D8CC, 133); /*0x100ada1d2*/
  if ( (_DWORD)v30 == 1 ) /*0x100ada1de*/
  {
    v45 = *(_QWORD *)&__src[56]; /*0x100ada1e8*/
    v44 = *(_QWORD *)&__src[48]; /*0x100ada1f0*/
    v43 = *(_OWORD *)&__src[32]; /*0x100ada200*/
    v42 = *(_QWORD *)&__src[24]; /*0x100ada208*/
    v41 = *(_OWORD *)&__src[8]; /*0x100ada21c*/
    v40 = *(unsigned __int64 **)__src; /*0x100ada220*/
    v20[0] = &v40; /*0x100ada228*/
    v20[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ada236*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v19, &unk_1017CAD68, v20); /*0x100ada252*/
    v22 = (unsigned __int64 *)v19[0]; /*0x100ada265*/
    v23 = (__int64 (__fastcall *)(_QWORD, _QWORD))v19[1]; /*0x100ada26c*/
    v24 = v19[2]; /*0x100ada27a*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v40); /*0x100ada285*/
    v32 = v22; /*0x100ada298*/
    v33 = v23; /*0x100ada29f*/
    v34 = v24; /*0x100ada2ad*/
    v35 = v25; /*0x100ada2bb*/
    v36 = v26; /*0x100ada2c9*/
    v37 = v27; /*0x100ada2d7*/
    v38 = v28; /*0x100ada2e2*/
    v39 = v29; /*0x100ada2ed*/
    *(_QWORD *)(a1 + 64) = v29; /*0x100ada2f5*/
    *(_QWORD *)(a1 + 56) = v38; /*0x100ada2fd*/
    *(_QWORD *)(a1 + 48) = v37; /*0x100ada305*/
    *(_QWORD *)(a1 + 40) = v36; /*0x100ada310*/
    *(_QWORD *)(a1 + 32) = v35; /*0x100ada31b*/
    *(_QWORD *)(a1 + 24) = v34; /*0x100ada326*/
    result = (__int64)v32; /*0x100ada32a*/
    *(_QWORD *)(a1 + 16) = v33; /*0x100ada338*/
    *(_QWORD *)(a1 + 8) = result; /*0x100ada33c*/
    *(_QWORD *)a1 = 10; /*0x100ada340*/
    return result; /*0x100ada347*/
  }
  v29 = *(_QWORD *)&__src[56]; /*0x100ada3a1*/
  v28 = *(_QWORD *)&__src[48]; /*0x100ada3ac*/
  v27 = *(_QWORD *)&__src[40]; /*0x100ada3b7*/
  v26 = *(_QWORD *)&__src[32]; /*0x100ada3c2*/
  v32 = *(unsigned __int64 **)__src; /*0x100ada3d9*/
  v33 = *(__int64 (__fastcall **)(_QWORD, _QWORD))&__src[8]; /*0x100ada3e0*/
  v34 = *(_QWORD *)&__src[16]; /*0x100ada3e7*/
  v35 = *(_QWORD *)&__src[24]; /*0x100ada3ee*/
  v36 = *(_QWORD *)&__src[32]; /*0x100ada3f5*/
  v37 = *(_QWORD *)&__src[40]; /*0x100ada3fc*/
  v38 = *(_QWORD *)&__src[48]; /*0x100ada400*/
  v39 = *(_QWORD *)&__src[56]; /*0x100ada404*/
  v21[7] = *(_QWORD *)&__src[56]; /*0x100ada40c*/
  v21[6] = *(_QWORD *)&__src[48]; /*0x100ada417*/
  v21[5] = *(_QWORD *)&__src[40]; /*0x100ada422*/
  v21[4] = *(_QWORD *)&__src[32]; /*0x100ada430*/
  v21[3] = *(_QWORD *)&__src[24]; /*0x100ada43e*/
  v21[2] = *(_QWORD *)&__src[16]; /*0x100ada44c*/
  v21[1] = *(_QWORD *)&__src[8]; /*0x100ada461*/
  v21[0] = *(_QWORD *)__src; /*0x100ada468*/
  v6 = *(_QWORD **)__src; /*0x100ada46f*/
  v7 = *(sqlite3_stmt **)&__src[56]; /*0x100ada476*/
  v8 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&__src[56]); /*0x100ada480*/
  if ( !v8 ) /*0x100ada487*/
  {
    inserted = _mm_cvtsi32_si128(1u); /*0x100ada59e*/
    v11 = 0x8000000000000013LL; /*0x100ada5a6*/
LABEL_16:
    *(_QWORD *)&__src[48] = v43; /*0x100ada608*/
    *(_QWORD *)&__src[40] = v42; /*0x100ada617*/
    *(_OWORD *)&__src[24] = v41; /*0x100ada631*/
    *(_QWORD *)&__src[16] = v40; /*0x100ada638*/
    v30 = v11; /*0x100ada63f*/
    *(__m128i *)__src = inserted; /*0x100ada646*/
    v22 = &v30; /*0x100ada64e*/
    v23 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ada65c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_1017CADA1, &v22); /*0x100ada675*/
    v14 = v40; /*0x100ada67a*/
    v15 = v41; /*0x100ada682*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v30); /*0x100ada68d*/
LABEL_17:
    *(_QWORD *)a1 = 10; /*0x100ada692*/
    *(_QWORD *)(a1 + 8) = v14; /*0x100ada699*/
    *(_OWORD *)(a1 + 16) = v15; /*0x100ada69d*/
    return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v21); /*0x100ada69d*/
  }
  v9 = v8; /*0x100ada48d*/
  v10 = sqlite3_bind_text64( /*0x100ada4b1*/
          v7,
          1,
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_812,
          6u,
          (void (__cdecl *)(void *))0xFFFFFFFFFFFFFFFFLL,
          1u);
  v11 = 0x8000000000000013LL; /*0x100ada4c4*/
  if ( *v6 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100ada4ce*/
    core::cell::panic_already_mutably_borrowed::h333111125182db63(&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1546); /*0x100ada77e*/
  ++*v6; /*0x100ada4d7*/
  rusqlite::error::decode_result_raw::h0a038d2a8c5fdb22(&v30, v6[2], v10); /*0x100ada4e8*/
  --*v6; /*0x100ada4ed*/
  if ( v30 != 0x8000000000000016LL ) /*0x100ada4ff*/
  {
    inserted = _mm_loadu_si128((const __m128i *)__src); /*0x100ada5b2*/
    v40 = *(unsigned __int64 **)&__src[16]; /*0x100ada5c1*/
    v41 = *(_OWORD *)&__src[24]; /*0x100ada5cc*/
    v42 = *(_QWORD *)&__src[40]; /*0x100ada5e2*/
    *(_QWORD *)&v43 = *(_QWORD *)&__src[48]; /*0x100ada5ed*/
    v11 = v30; /*0x100ada5f1*/
    goto LABEL_16; /*0x100ada5f4*/
  }
  if ( v9 != 1 ) /*0x100ada509*/
  {
    inserted = _mm_insert_epi64(_mm_cvtsi32_si128(1u), v9, 1); /*0x100ada601*/
    goto LABEL_16; /*0x100ada601*/
  }
  core::iter::adapters::try_process::hc5d9fdbf5f2e6f90(&v40, v21, 0); /*0x100ada51c*/
  if ( v40 != (unsigned __int64 *)0x8000000000000016LL ) /*0x100ada525*/
  {
    *(_QWORD *)&__src[48] = v45; /*0x100ada6c7*/
    *(_QWORD *)&__src[40] = v44; /*0x100ada6d2*/
    *(_OWORD *)&__src[24] = v43; /*0x100ada6e8*/
    *(_QWORD *)&__src[16] = v42; /*0x100ada6f3*/
    *(_OWORD *)__src = v41; /*0x100ada70d*/
    v30 = (unsigned __int64)v40; /*0x100ada714*/
    v32 = &v30; /*0x100ada722*/
    v33 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ada730*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v22, &unk_1017CAD87, &v32); /*0x100ada74c*/
    v14 = v22; /*0x100ada751*/
    v16 = v23; /*0x100ada758*/
    v17 = v24; /*0x100ada75f*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v30); /*0x100ada76d*/
    v15 = __PAIR128__(v17, (unsigned __int64)v16); /*0x100ada772*/
    goto LABEL_17; /*0x100ada772*/
  }
  v18[0] = *((_QWORD *)&v41 + 1); /*0x100ada542*/
  v18[1] = *((_QWORD *)&v41 + 1); /*0x100ada549*/
  v18[2] = v41; /*0x100ada550*/
  v18[3] = *((_QWORD *)&v41 + 1) + 96 * v42; /*0x100ada557*/
  ((void (__fastcall *)(unsigned __int64 *, _QWORD *))alloc::vec::in_place_collect::from_iter_in_place::h2d364d7fc905e33c)( /*0x100ada56c*/
    &v30,
    v18);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&__src[8]; /*0x100ada578*/
  v12 = v30; /*0x100ada57c*/
  *(_QWORD *)(a1 + 16) = *(_QWORD *)__src; /*0x100ada58a*/
  *(_QWORD *)(a1 + 8) = v12; /*0x100ada58e*/
  *(_QWORD *)a1 = 11; /*0x100ada592*/
  return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v21); /*0x100ada6b1*/
}