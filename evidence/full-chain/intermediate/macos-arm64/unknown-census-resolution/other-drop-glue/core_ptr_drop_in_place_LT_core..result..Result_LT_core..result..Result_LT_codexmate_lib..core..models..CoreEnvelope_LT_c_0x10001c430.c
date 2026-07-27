// IDA Hex-Rays decompile evidence
// addr: 0x10001c430
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$core..result..Result$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..VoiceGeneratePayload$GT$$C$alloc..string..String$GT$$C$tokio..runtime..task..error..JoinError$GT$$GT$::h7fba89989457972f(
        _QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  double result; // xmm0_8
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  _QWORD *v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r13
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rsi

  if ( *a1 == 2 ) /*0x10001c448*/
  {
    v3 = a1[1]; /*0x10001c486*/
    if ( !v3 ) /*0x10001c48d*/
      return result; /*0x10001c48d*/
    v5 = a1[2]; /*0x10001c493*/
    goto LABEL_91; /*0x10001c497*/
  }
  if ( (unsigned int)*a1 != 3 ) /*0x10001c44d*/
  {
    v6 = a1[80]; /*0x10001c49c*/
    if ( v6 ) /*0x10001c4a6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[81], v6, 1); /*0x10001c4b4*/
    v8 = a1[83]; /*0x10001c4b9*/
    if ( v8 ) /*0x10001c4c3*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[84], v8, 1); /*0x10001c4d1*/
    v9 = a1[87]; /*0x10001c4d6*/
    v10 = a1[88]; /*0x10001c4dd*/
    if ( v10 ) /*0x10001c4e7*/
    {
      v11 = (_QWORD *)(v9 + 32); /*0x10001c4e9*/
      do /*0x10001c4f7*/
      {
        v12 = *(v11 - 4); /*0x10001c4f9*/
        if ( v12 ) /*0x10001c501*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v11 - 3), v12, 1); /*0x10001c50d*/
        v13 = *(v11 - 1); /*0x10001c512*/
        if ( v13 ) /*0x10001c51a*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v13, 1); /*0x10001c525*/
        v11 += 6; /*0x10001c4f0*/
        --v10; /*0x10001c4f4*/
      }
      while ( v10 ); /*0x10001c4f7*/
    }
    v14 = a1[86]; /*0x10001c52c*/
    if ( v14 ) /*0x10001c536*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 48 * v14, 8); /*0x10001c548*/
    v15 = a1[55]; /*0x10001c54d*/
    if ( v15 ) /*0x10001c557*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[56], v15, 1); /*0x10001c565*/
    v16 = a1[2]; /*0x10001c56a*/
    if ( v16 ) /*0x10001c571*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[3], v16, 1); /*0x10001c57c*/
    v17 = a1[5]; /*0x10001c581*/
    if ( v17 ) /*0x10001c588*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[6], v17, 1); /*0x10001c593*/
    v18 = a1[8]; /*0x10001c598*/
    if ( v18 ) /*0x10001c59f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[9], v18, 1); /*0x10001c5aa*/
    v19 = a1[11]; /*0x10001c5af*/
    if ( v19 ) /*0x10001c5b6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[12], v19, 1); /*0x10001c5c1*/
    v20 = a1[14]; /*0x10001c5c6*/
    if ( v20 ) /*0x10001c5cd*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[15], v20, 1); /*0x10001c5d8*/
    v21 = a1[17]; /*0x10001c5dd*/
    if ( v21 ) /*0x10001c5e7*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[18], v21, 1); /*0x10001c5f5*/
    v22 = a1[20]; /*0x10001c5fa*/
    if ( v22 ) /*0x10001c604*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[21], v22, 1); /*0x10001c612*/
    v23 = a1[23]; /*0x10001c617*/
    if ( v23 ) /*0x10001c621*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[24], v23, 1); /*0x10001c62f*/
    v24 = a1[26]; /*0x10001c634*/
    if ( v24 ) /*0x10001c63e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[27], v24, 1); /*0x10001c64c*/
    v25 = a1[29]; /*0x10001c651*/
    if ( v25 ) /*0x10001c65b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[30], v25, 1); /*0x10001c669*/
    v26 = a1[32]; /*0x10001c66e*/
    if ( v26 ) /*0x10001c678*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[33], v26, 1); /*0x10001c686*/
    if ( !__OFSUB__(-a1[47], 1) && a1[47] ) /*0x10001c692*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[48], a1[47], 1); /*0x10001c6a8*/
    v27 = a1[35]; /*0x10001c6ad*/
    if ( v27 ) /*0x10001c6b7*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[36], v27, 1); /*0x10001c6c5*/
    v28 = a1[38]; /*0x10001c6ca*/
    if ( v28 ) /*0x10001c6d4*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[39], v28, 1); /*0x10001c6e2*/
    v29 = a1[41]; /*0x10001c6e7*/
    if ( v29 ) /*0x10001c6f1*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[42], v29, 1); /*0x10001c6ff*/
    v30 = a1[44]; /*0x10001c70e*/
    if ( v30 ) /*0x10001c718*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[45], v30, 1); /*0x10001c726*/
    v31 = a1[50]; /*0x10001c72b*/
    if ( v31 != 0x8000000000000000LL && v31 ) /*0x10001c73a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[51], v31, 1); /*0x10001c748*/
    v32 = a1[59]; /*0x10001c74d*/
    core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..models..VoicePromptTemplate$u5d$$GT$::hd6af1f5b3fc8a147( /*0x10001c75e*/
      v32,
      a1[60]);
    v33 = a1[58]; /*0x10001c763*/
    if ( v33 ) /*0x10001c76d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 112 * v33, 8); /*0x10001c77b*/
    v34 = a1[62]; /*0x10001c780*/
    v35 = a1[63]; /*0x10001c787*/
    if ( v35 ) /*0x10001c791*/
    {
      v36 = a1[62]; /*0x10001c793*/
      do /*0x10001c7b2*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::h34eaa804dcf1652a(v36); /*0x10001c7a3*/
        v36 += 160; /*0x10001c7a8*/
        --v35; /*0x10001c7af*/
      }
      while ( v35 ); /*0x10001c7b2*/
    }
    v37 = a1[61]; /*0x10001c7b4*/
    if ( v37 ) /*0x10001c7be*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 160 * v37, 8); /*0x10001c7d0*/
    v38 = a1[65]; /*0x10001c7d5*/
    v39 = a1[66]; /*0x10001c7dc*/
    if ( v39 ) /*0x10001c7e6*/
    {
      v40 = (_QWORD *)(v38 + 56); /*0x10001c7e8*/
      do /*0x10001c7f7*/
      {
        v41 = *(v40 - 7); /*0x10001c7f9*/
        if ( v41 ) /*0x10001c800*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v40 - 6), v41, 1); /*0x10001c80b*/
        v42 = *(v40 - 4); /*0x10001c810*/
        if ( v42 ) /*0x10001c817*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v40 - 3), v42, 1); /*0x10001c822*/
        v43 = *(v40 - 1); /*0x10001c827*/
        if ( v43 ) /*0x10001c82e*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v40, v43, 1); /*0x10001c839*/
        v40 += 9; /*0x10001c7f0*/
        --v39; /*0x10001c7f4*/
      }
      while ( v39 ); /*0x10001c7f7*/
    }
    v44 = a1[64]; /*0x10001c840*/
    if ( v44 ) /*0x10001c84a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 72 * v44, 8); /*0x10001c85c*/
    v45 = a1[68]; /*0x10001c861*/
    v46 = a1[69]; /*0x10001c868*/
    if ( v46 ) /*0x10001c872*/
    {
      v47 = a1[68]; /*0x10001c874*/
      do /*0x10001c892*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$::h511d12a3e26047e3(v47); /*0x10001c883*/
        v47 += 440; /*0x10001c888*/
        --v46; /*0x10001c88f*/
      }
      while ( v46 ); /*0x10001c892*/
    }
    v48 = a1[67]; /*0x10001c894*/
    if ( v48 ) /*0x10001c89e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 440 * v48, 8); /*0x10001c8af*/
    v49 = a1[70]; /*0x10001c8b4*/
    if ( v49 ) /*0x10001c8be*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[71], v49, 1); /*0x10001c8cc*/
    v50 = a1[74]; /*0x10001c8d1*/
    if ( v50 ) /*0x10001c8db*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[75], v50, 1); /*0x10001c8e9*/
    v3 = a1[77]; /*0x10001c8ee*/
    if ( v3 == 0x8000000000000000LL || !v3 ) /*0x10001c8fd*/
      return result; /*0x10001c8fd*/
    v5 = a1[78]; /*0x10001c8ff*/
LABEL_91:
    v4 = 1; /*0x10001c906*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v3, v4); /*0x10001c906*/
  }
  v1 = a1[2]; /*0x10001c44f*/
  if ( v1 ) /*0x10001c456*/
  {
    v2 = a1[3]; /*0x10001c45c*/
    if ( *(_QWORD *)v2 ) /*0x10001c460*/
      (*(void (__fastcall **)(_QWORD))v2)(a1[2]); /*0x10001c46b*/
    v3 = *(_QWORD *)(v2 + 8); /*0x10001c46d*/
    if ( v3 ) /*0x10001c474*/
    {
      v4 = *(_QWORD *)(v2 + 16); /*0x10001c47a*/
      v5 = v1; /*0x10001c47e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v3, v4); /*0x10001c90b*/
    }
  }
  return result; /*0x10001c90f*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1007e31c0  __ZN4core3ptr79drop_in_place$LT$$u5b$codexmate_lib..core..models..VoicePromptTemplate$u5d$$GT$17hd6af1f5b3fc8a147E
// 0x1007e2210  __ZN4core3ptr70drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyEntry$GT$17h34eaa804dcf1652aE_0
// 0x1007e1c80  __ZN4core3ptr67drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$17h511d12a3e26047e3E_0
