// __ZN13codexmate_lib4core5voice7runtime17read_runtime_file @ 0x100673290 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::read_runtime_file::h7a5982944da78c50(char *__dst, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rsi
  double result; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  bool v16; // bl
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  _DWORD *v26; // rax
  _DWORD *v27; // rbx
  const char *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  void *v35; // rax
  void *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  void *v40; // rax
  void *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  void *v50; // rax
  void *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  _QWORD *v55; // rax
  _QWORD *v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdx
  void *v60; // rax
  void *v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdx
  _QWORD *v65; // rax
  _QWORD *v66; // rbx
  _QWORD *v67; // r13
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rax
  _QWORD v71[12]; // [rsp+0h] [rbp-400h] BYREF
  _QWORD __src[50]; // [rsp+60h] [rbp-3A0h] BYREF
  __int64 v73; // [rsp+1F0h] [rbp-210h]
  __int64 v74; // [rsp+1F8h] [rbp-208h]
  __int64 v75; // [rsp+200h] [rbp-200h]
  __int64 v76; // [rsp+208h] [rbp-1F8h]
  _QWORD v77[50]; // [rsp+210h] [rbp-1F0h] BYREF
  int v78; // [rsp+3A4h] [rbp-5Ch]
  __int64 v79; // [rsp+3A8h] [rbp-58h] BYREF
  void *__s2; // [rsp+3B0h] [rbp-50h]
  __int64 v81; // [rsp+3B8h] [rbp-48h]
  __int64 v82; // [rsp+3C0h] [rbp-40h]
  __int64 v83; // [rsp+3C8h] [rbp-38h]
  int v84; // [rsp+3D4h] [rbp-2Ch]

  v4 = *(_QWORD *)(a2 + 560); /*0x1006732aa*/
  v5 = *(_QWORD *)(a2 + 568); /*0x1006732b1*/
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v4, v5); /*0x1006732c5*/
  if ( LODWORD(__src[0]) == 1 ) /*0x1006732d1*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x1006732e6*/
    {
      v6 = __src[1] - 1LL; /*0x1006732e8*/
      v7 = *(_QWORD *)(__src[1] - 1LL); /*0x1006732ec*/
      v8 = *(_QWORD *)(__src[1] + 7LL); /*0x1006732f0*/
      if ( *(_QWORD *)v8 ) /*0x1006732f4*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x100673300*/
      v9 = *(_QWORD *)(v8 + 8); /*0x100673302*/
      if ( v9 ) /*0x100673309*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x100673312*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x100673324*/
    }
    _$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$u20$as$u20$core..default..Default$GT$::default::h3222dc64aa78695e(__src); /*0x100673333*/
    codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65(v77, a2, __src); /*0x100673345*/
    if ( LODWORD(v77[0]) == 11 ) /*0x100673351*/
    {
      memcpy(__dst, __src, 0x190u); /*0x100673366*/
    }
    else
    {
      qmemcpy(__dst + 8, v77, 0x60u); /*0x10067344f*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10067345c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(__src); /*0x100673466*/
    }
    return result; /*0x10067336b*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, v4, v5); /*0x100673387*/
  v11 = __src[1]; /*0x100673393*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x10067339d*/
  {
    *((_QWORD *)__dst + 1) = 2; /*0x1006733a2*/
    *((_QWORD *)__dst + 2) = v11; /*0x1006733aa*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006733ae*/
    return result; /*0x1006733b1*/
  }
  v71[0] = __src[1]; /*0x1006733bd*/
  v71[1] = __src[2]; /*0x1006733c4*/
  v71[2] = 0; /*0x1006733cb*/
  v71[3] = 0; /*0x1006733d6*/
  v82 = __src[1]; /*0x1006733e1*/
  v71[4] = __src[1]; /*0x1006733e5*/
  v71[5] = __src[2]; /*0x1006733ec*/
  v83 = __src[0]; /*0x100673401*/
  serde_json::de::from_trait::h78e2323dc0d7a242(__src); /*0x100673405*/
  v12 = __src[1]; /*0x100673411*/
  if ( __src[0] != 0x8000000000000000LL ) /*0x100673425*/
  {
    v14 = &__src[2]; /*0x100673470*/
    v15 = (__int64)&v77[2]; /*0x100673477*/
    memcpy(&v77[2], &__src[2], 0x180u); /*0x100673483*/
    v77[0] = __src[0]; /*0x100673488*/
    v77[1] = __src[1]; /*0x10067348f*/
    v78 = v77[48]; /*0x100673499*/
    v16 = SLODWORD(v77[48]) < 7; /*0x10067349f*/
    if ( !BYTE6(v77[48]) ) /*0x1006734a6*/
    {
      BYTE6(v77[48]) = 1; /*0x1006734a8*/
      v16 = 1; /*0x1006734ac*/
    }
    v13 = v83; /*0x1006734b6*/
    if ( v77[29] != 6 || *(_DWORD *)v77[28] ^ 0x74737973 | *(unsigned __int16 *)(v77[28] + 4LL) ^ 0x6D65 ) /*0x1006734d3*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v77[2], &__src[2]); /*0x1006734d7*/
      v17 = 6; /*0x1006734dc*/
      v15 = 6; /*0x1006734e2*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1006734ec*/
      if ( !v18 ) /*0x1006734f4*/
        goto LABEL_135; /*0x1006734f4*/
      v19 = v18; /*0x1006734fa*/
      *(_WORD *)(v18 + 4) = 28005; /*0x1006734fd*/
      *(_DWORD *)v18 = 1953724787; /*0x100673503*/
      v14 = (_QWORD *)v77[27]; /*0x100673509*/
      if ( v77[27] ) /*0x100673513*/
      {
        v15 = v77[28]; /*0x100673515*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[28], v77[27], 1); /*0x100673521*/
      }
      v77[27] = 6; /*0x100673526*/
      v77[28] = v19; /*0x100673531*/
      v77[29] = 6; /*0x100673538*/
      v16 = 1; /*0x100673543*/
    }
    if ( LOBYTE(v77[49]) ) /*0x100673549*/
    {
      LOBYTE(v77[49]) = 0; /*0x10067354b*/
      v16 = 1; /*0x10067354f*/
    }
    if ( WORD2(v77[48]) != 20 ) /*0x100673556*/
    {
      WORD2(v77[48]) = 20; /*0x100673558*/
      v16 = 1; /*0x10067355e*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v14); /*0x100673560*/
    v17 = 6; /*0x100673565*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100673575*/
    if ( !v20 ) /*0x10067357d*/
      goto LABEL_135; /*0x10067357d*/
    *(_WORD *)(v20 + 4) = 12914; /*0x100673583*/
    *(_DWORD *)v20 = 1702125943; /*0x100673589*/
    if ( v77[32] == 6 /*0x1006735b1*/
      && !(*(_DWORD *)v20 ^ *(_DWORD *)v77[31] | (unsigned __int16)(*(_WORD *)(v20 + 4) ^ *(_WORD *)(v77[31] + 4LL))) )
    {
      v25 = 6; /*0x10067380d*/
      v22 = v20; /*0x100673817*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 6, 1); /*0x10067381a*/
      if ( !v77[35] ) /*0x100673827*/
        goto LABEL_35; /*0x100673827*/
    }
    else
    {
      v21 = v20; /*0x1006735c1*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 6, 1); /*0x1006735c4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, 6); /*0x1006735c9*/
      v22 = 6; /*0x1006735ce*/
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1006735d8*/
      if ( !v23 ) /*0x1006735e0*/
        goto LABEL_135; /*0x1006735e0*/
      v24 = v23; /*0x1006735e6*/
      *(_WORD *)(v23 + 4) = 12914; /*0x1006735e9*/
      *(_DWORD *)v23 = 1702125943; /*0x1006735ef*/
      v25 = v77[30]; /*0x1006735f5*/
      if ( v77[30] ) /*0x1006735ff*/
      {
        v22 = v77[31]; /*0x100673601*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[31], v77[30], 1); /*0x10067360d*/
      }
      v77[30] = 6; /*0x100673612*/
      v77[31] = v24; /*0x10067361d*/
      v77[32] = 6; /*0x100673624*/
      v16 = 1; /*0x10067362f*/
      if ( !v77[35] ) /*0x100673639*/
      {
LABEL_35:
        if ( v77[23] != 4 || *(_DWORD *)v77[22] != 1869903201 ) /*0x10067365f*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v25); /*0x100673661*/
          v17 = 4; /*0x100673666*/
          v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100673676*/
          if ( !v26 ) /*0x10067367e*/
            goto LABEL_135; /*0x10067367e*/
          v27 = v26; /*0x100673684*/
          *v26 = 1869903201; /*0x100673687*/
          if ( v77[21] ) /*0x100673697*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[22], v77[21], 1); /*0x1006736a5*/
          v77[21] = 4; /*0x1006736aa*/
          v77[22] = v27; /*0x1006736b5*/
          v77[23] = 4; /*0x1006736bc*/
          v16 = 1; /*0x1006736c7*/
        }
        if ( !BYTE1(v77[49]) ) /*0x1006736cf*/
          goto LABEL_63; /*0x1006736cf*/
        if ( BYTE1(v77[49]) == 1 ) /*0x1006736d8*/
        {
          v28 = "aliyunFunAsr"; /*0x1006736da*/
          v29 = 12; /*0x1006736e1*/
        }
        else
        {
          v28 = "openai"; /*0x1006736e8*/
          v29 = 6; /*0x1006736ef*/
        }
        codexmate_lib::core::voice::asr::load_saved_config::hf8730c4a0b983581((__int64)__src, (__int64)v28, v29); /*0x1006736fb*/
        if ( __src[0] == 0x8000000000000000LL ) /*0x100673714*/
        {
          qmemcpy(v71, &__src[1], sizeof(v71)); /*0x100673729*/
          if ( v71[0] == 11 ) /*0x100673734*/
          {
            if ( LOBYTE(v71[1]) ) /*0x100673741*/
              goto LABEL_63; /*0x100673741*/
          }
          else
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v71); /*0x100673839*/
          }
        }
        else
        {
          v30 = __src[3]; /*0x10067374c*/
          v31 = __src[4]; /*0x100673753*/
          v17 = __src[6]; /*0x10067375a*/
          v75 = __src[7]; /*0x100673768*/
          v73 = __src[9]; /*0x100673776*/
          v74 = __src[10]; /*0x100673784*/
          LOBYTE(v84) = __src[12]; /*0x100673792*/
          if ( __src[0] ) /*0x100673798*/
          {
            v76 = __src[4]; /*0x10067379a*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1); /*0x1006737ad*/
            v31 = v76; /*0x1006737b2*/
          }
          if ( v30 ) /*0x1006737bc*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v30, 1); /*0x1006737c6*/
          if ( v17 ) /*0x1006737ce*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v17, 1); /*0x1006737df*/
          v13 = v83; /*0x1006737ee*/
          if ( v73 ) /*0x1006737f2*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1); /*0x100673800*/
          if ( (v84 & 1) != 0 ) /*0x100673809*/
            goto LABEL_63; /*0x100673809*/
        }
        BYTE1(v77[49]) = 0; /*0x10067383e*/
        v16 = 1; /*0x100673842*/
LABEL_63:
        v32 = v77[1]; /*0x100673844*/
        v33 = v77[2]; /*0x10067384b*/
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v77[1], v77[2]); /*0x100673852*/
        if ( !v34 ) /*0x10067385a*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v33); /*0x10067385c*/
          v17 = 15; /*0x100673861*/
          v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x100673871*/
          if ( !v35 ) /*0x100673879*/
            goto LABEL_135; /*0x100673879*/
          v36 = v35; /*0x10067387f*/
          qmemcpy(v35, "Cmd+Shift+Space", 15); /*0x10067389a*/
          if ( v77[0] ) /*0x1006738a7*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[1], v77[0], 1); /*0x1006738b5*/
          v77[0] = 15; /*0x1006738ba*/
          v77[1] = v36; /*0x1006738c5*/
          v77[2] = 15; /*0x1006738cc*/
          v16 = 1; /*0x1006738d7*/
        }
        if ( v77[42] > 0LL ) /*0x1006738e1*/
        {
          v37 = v77[4]; /*0x1006738e7*/
          v38 = v77[5]; /*0x1006738ee*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v77[4], v77[5]); /*0x1006738f5*/
          if ( !v39 ) /*0x1006738fd*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v38); /*0x1006738ff*/
            v17 = 12; /*0x100673904*/
            v40 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100673914*/
            if ( !v40 ) /*0x10067391c*/
              goto LABEL_135; /*0x10067391c*/
            v41 = v40; /*0x100673922*/
            qmemcpy(v40, "Right Option", 12); /*0x10067392f*/
            if ( v77[3] ) /*0x100673943*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[4], v77[3], 1); /*0x100673951*/
            v77[3] = 12; /*0x100673956*/
            v77[4] = v41; /*0x100673961*/
            v77[5] = 12; /*0x100673968*/
            v16 = 1; /*0x100673973*/
          }
          v42 = v77[7]; /*0x100673975*/
          v43 = v77[8]; /*0x10067397c*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v77[7], v77[8]); /*0x100673983*/
          if ( !v44 ) /*0x10067398b*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v43); /*0x10067398d*/
            v17 = 8; /*0x100673992*/
            v45 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1006739a2*/
            if ( !v45 ) /*0x1006739aa*/
              goto LABEL_135; /*0x1006739aa*/
            v46 = v45; /*0x1006739b0*/
            *v45 = 0x7265696669646F6DLL; /*0x1006739bd*/
            if ( v77[6] ) /*0x1006739ca*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[7], v77[6], 1); /*0x1006739d8*/
            v77[6] = 8; /*0x1006739dd*/
            v77[7] = v46; /*0x1006739e8*/
            v77[8] = 8; /*0x1006739ef*/
            v16 = 1; /*0x1006739fa*/
          }
        }
        if ( v77[44] > 0LL ) /*0x100673a04*/
        {
          v47 = v77[10]; /*0x100673a0a*/
          v48 = v77[11]; /*0x100673a11*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v77[10], v77[11]); /*0x100673a18*/
          if ( !v49 ) /*0x100673a20*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v48); /*0x100673a22*/
            v17 = 12; /*0x100673a27*/
            v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100673a37*/
            if ( !v50 ) /*0x100673a3f*/
              goto LABEL_135; /*0x100673a3f*/
            v51 = v50; /*0x100673a45*/
            qmemcpy(v50, "Right Option", 12); /*0x100673a52*/
            if ( v77[9] ) /*0x100673a66*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[10], v77[9], 1); /*0x100673a74*/
            v77[9] = 12; /*0x100673a79*/
            v77[10] = v51; /*0x100673a84*/
            v77[11] = 12; /*0x100673a8b*/
            v16 = 1; /*0x100673a96*/
          }
          v52 = v77[13]; /*0x100673a98*/
          v53 = v77[14]; /*0x100673a9f*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v77[13], v77[14]); /*0x100673aa6*/
          if ( !v54 ) /*0x100673aae*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v53); /*0x100673ab0*/
            v17 = 8; /*0x100673ab5*/
            v55 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100673ac5*/
            if ( !v55 ) /*0x100673acd*/
              goto LABEL_135; /*0x100673acd*/
            v56 = v55; /*0x100673ad3*/
            *v55 = 0x7265696669646F6DLL; /*0x100673ae0*/
            if ( v77[12] ) /*0x100673aed*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[13], v77[12], 1); /*0x100673afb*/
            v77[12] = 8; /*0x100673b00*/
            v77[13] = v56; /*0x100673b0b*/
            v77[14] = 8; /*0x100673b12*/
            v16 = 1; /*0x100673b1d*/
          }
        }
        if ( v77[46] <= 0LL ) /*0x100673b24*/
          goto LABEL_101; /*0x100673b24*/
        v57 = v77[16]; /*0x100673b2a*/
        v58 = v77[17]; /*0x100673b31*/
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v77[16], v77[17]); /*0x100673b38*/
        if ( !v59 ) /*0x100673b40*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v58); /*0x100673b42*/
          v17 = 13; /*0x100673b47*/
          v60 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100673b57*/
          if ( !v60 ) /*0x100673b5f*/
            goto LABEL_135; /*0x100673b5f*/
          v61 = v60; /*0x100673b65*/
          qmemcpy(v60, "Right Control", 13); /*0x100673b80*/
          if ( v77[15] ) /*0x100673b8d*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[16], v77[15], 1); /*0x100673b9b*/
          v77[15] = 13; /*0x100673ba0*/
          v77[16] = v61; /*0x100673bab*/
          v77[17] = 13; /*0x100673bb2*/
          v16 = 1; /*0x100673bbd*/
        }
        v62 = v77[19]; /*0x100673bbf*/
        v63 = v77[20]; /*0x100673bc6*/
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v77[19], v77[20]); /*0x100673bcd*/
        if ( v64 ) /*0x100673bd5*/
          goto LABEL_101; /*0x100673bd5*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v63); /*0x100673bd7*/
        v17 = 8; /*0x100673bdc*/
        v65 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100673bec*/
        if ( v65 ) /*0x100673bf4*/
        {
          v66 = v65; /*0x100673bfa*/
          *v65 = 0x7265696669646F6DLL; /*0x100673c07*/
          if ( v77[18] ) /*0x100673c14*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[19], v77[18], 1); /*0x100673c22*/
          v77[18] = 8; /*0x100673c27*/
          v77[19] = v66; /*0x100673c32*/
          v77[20] = 8; /*0x100673c39*/
          v16 = 1; /*0x100673c44*/
LABEL_101:
          codexmate_lib::core::voice::runtime::normalize_processing_mode_id::hecc8c93fa1ac0fb0(&v79, v77[25], v77[26]); /*0x100673c46*/
          if ( v77[26] == v81 && !memcmp((const void *)v77[25], __s2, v77[26]) ) /*0x100673c80*/
          {
            LOBYTE(v17) = 1; /*0x100673fa5*/
            v84 = v17; /*0x100673fac*/
            if ( v78 >= 7 ) /*0x100673fb0*/
            {
LABEL_121:
              if ( v16 /*0x100673f01*/
                && (codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65(__src, a2, v77),
                    LOBYTE(v17) = v84,
                    LODWORD(__src[0]) != 11) )
              {
                qmemcpy(__dst + 8, __src, 0x60u); /*0x100673f45*/
                *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100673f52*/
                if ( (_BYTE)v17 && v79 ) /*0x100673f61*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v79, 1); /*0x100673f6c*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(v77); /*0x100673f78*/
              }
              else
              {
                memcpy(__dst, v77, 0x190u); /*0x100673f12*/
                if ( (_BYTE)v17 && v79 ) /*0x100673f23*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v79, 1); /*0x100673f2e*/
              }
              goto LABEL_130; /*0x100673f33*/
            }
          }
          else
          {
            if ( v77[24] ) /*0x100673c97*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[25], v77[24], 1); /*0x100673ca5*/
            v77[26] = v81; /*0x100673cae*/
            v77[25] = __s2; /*0x100673cba*/
            v77[24] = v79; /*0x100673cbe*/
            v16 = 1; /*0x100673cc1*/
            LOBYTE(v17) = 0; /*0x100673cc3*/
            v84 = 0; /*0x100673cca*/
            if ( v78 >= 7 ) /*0x100673cce*/
              goto LABEL_121; /*0x100673cce*/
          }
          if ( HIBYTE(v77[48]) == 1 ) /*0x100673ce6*/
          {
            v77[46] = v77[42]; /*0x100673cec*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v77[3]); /*0x100673cfa*/
            if ( v77[15] ) /*0x100673d10*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[16], v77[15], 1); /*0x100673d1e*/
            v77[17] = __src[2]; /*0x100673d2a*/
            v77[16] = __src[1]; /*0x100673d3c*/
            v77[15] = __src[0]; /*0x100673d40*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v77[6]); /*0x100673d52*/
            v67 = &v77[18]; /*0x100673d57*/
            v68 = v77[18]; /*0x100673d5e*/
            if ( !v77[18] ) /*0x100673d68*/
              goto LABEL_116; /*0x100673d68*/
            v69 = v77[19]; /*0x100673d6e*/
          }
          else
          {
            v77[44] = v77[42]; /*0x100673d7a*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v77[3]); /*0x100673d8b*/
            if ( v77[9] ) /*0x100673da1*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[10], v77[9], 1); /*0x100673daf*/
            v77[11] = __src[2]; /*0x100673dbb*/
            v77[10] = __src[1]; /*0x100673dcd*/
            v77[9] = __src[0]; /*0x100673dd1*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v77[6]); /*0x100673de3*/
            v67 = &v77[12]; /*0x100673de8*/
            v68 = v77[12]; /*0x100673def*/
            if ( !v77[12] ) /*0x100673df9*/
              goto LABEL_116; /*0x100673df9*/
            v69 = v77[13]; /*0x100673dfb*/
          }
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x100673e07*/
LABEL_116:
          v67[2] = __src[2]; /*0x100673e0c*/
          v70 = __src[0]; /*0x100673e17*/
          v67[1] = __src[1]; /*0x100673e25*/
          *v67 = v70; /*0x100673e29*/
          codexmate_lib::core::voice::runtime::active_trigger_from_file::h358f7a2569fbbfb7(__src, v77); /*0x100673e3b*/
          v77[42] = __src[6]; /*0x100673e47*/
          if ( v77[3] ) /*0x100673e58*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[4], v77[3], 1); /*0x100673e66*/
          v77[5] = __src[2]; /*0x100673e72*/
          v77[4] = __src[1]; /*0x100673e84*/
          v77[3] = __src[0]; /*0x100673e88*/
          if ( v77[6] ) /*0x100673ea3*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[7], v77[6], 1); /*0x100673eb1*/
          v77[8] = __src[5]; /*0x100673eba*/
          v77[7] = __src[4]; /*0x100673ec5*/
          v77[6] = __src[3]; /*0x100673ec9*/
          LODWORD(v77[48]) = 7; /*0x100673ecd*/
          v13 = v83; /*0x100673ed4*/
          LOBYTE(v17) = v84; /*0x100673ed8*/
          goto LABEL_121; /*0x100673ed8*/
        }
LABEL_135:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v17); /*0x100673fbb*/
      }
    }
    v77[35] = 0; /*0x10067363b*/
    v16 = 1; /*0x100673646*/
    goto LABEL_35; /*0x100673646*/
  }
  *((_QWORD *)__dst + 1) = 3; /*0x100673427*/
  *((_QWORD *)__dst + 2) = v12; /*0x10067342f*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100673433*/
  v13 = v83; /*0x100673436*/
LABEL_130:
  if ( v13 ) /*0x100673f80*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v13, 1); /*0x100673f8e*/
  return result; /*0x100673f93*/
}