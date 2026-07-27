// __ZN13codexmate_lib4core5relay16codex_diagnostic22find_foreign_providers @ 0x1004ea580 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::find_foreign_providers::he2f1fa39fdef0c1d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // r13
  size_t v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // r13
  size_t v18; // rdx
  unsigned __int64 v19; // r14
  __int64 v20; // r14
  __int64 *v21; // rax
  __int64 result; // rax
  _QWORD v23[2]; // [rsp+8h] [rbp-F8h] BYREF
  _QWORD v24[2]; // [rsp+18h] [rbp-E8h] BYREF
  _BYTE v25[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v26[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  _QWORD v29[5]; // [rsp+68h] [rbp-98h] BYREF
  char v30; // [rsp+90h] [rbp-70h]
  __int16 v31; // [rsp+98h] [rbp-68h]
  _QWORD *v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 *v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]

  v35 = a4; /*0x1004ea594*/
  v36 = 0; /*0x1004ea59b*/
  v37 = 8; /*0x1004ea5a3*/
  v38 = 0; /*0x1004ea5ab*/
  v27 = 0; /*0x1004ea5b3*/
  v28 = a3; /*0x1004ea5be*/
  v29[0] = a2; /*0x1004ea5cc*/
  v29[1] = a3; /*0x1004ea5d3*/
  v29[2] = 0; /*0x1004ea5da*/
  v29[3] = a3; /*0x1004ea5e5*/
  v29[4] = 0xA0000000ALL; /*0x1004ea5f3*/
  v30 = 1; /*0x1004ea5f7*/
  v31 = 0; /*0x1004ea5fb*/
  while ( 1 ) /*0x1004ea64a*/
  {
    v7 = v29[0]; /*0x1004ea64a*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004ea657*/
      &v32,
      v29);
    if ( (_DWORD)v32 != 1 ) /*0x1004ea660*/
      break; /*0x1004ea660*/
    v8 = v27; /*0x1004ea666*/
    v27 = v34; /*0x1004ea66d*/
    v9 = v34 - v8; /*0x1004ea674*/
    v10 = v8 + v7; /*0x1004ea677*/
    if ( v34 == v8 ) /*0x1004ea67d*/
      goto LABEL_17; /*0x1004ea67d*/
LABEL_11:
    if ( *(_BYTE *)(v10 + v9 - 1) == 10 ) /*0x1004ea6cf*/
    {
      if ( v9 == 1 ) /*0x1004ea6d7*/
      {
        v9 = 0; /*0x1004ea6e7*/
      }
      else if ( *(_BYTE *)(v10 + v9 - 2) == 13 ) /*0x1004ea6df*/
      {
        v9 -= 2; /*0x1004ea6e1*/
      }
      else
      {
        --v9; /*0x1004ea6eb*/
      }
    }
LABEL_17:
    v11 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v10, v9); /*0x1004ea6f0*/
    if ( !v12 || *(_BYTE *)v11 != 91 || *(_BYTE *)(v11 + v12 - 1) != 93 ) /*0x1004ea712*/
      goto LABEL_4; /*0x1004ea712*/
    if ( v12 == 1 || *(char *)(v11 + 1) <= -65 ) /*0x1004ea726*/
      core::str::slice_error_fail::h480e51fbd8b15eba(v11, v12, 1, v12 - 1, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97); /*0x1004ea974*/
    if ( (unsigned __int64)(v12 - 2) >= 0x10 ) /*0x1004ea734*/
    {
      v13 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v11 + 1)), (__m128i)xmmword_1015DCC20); /*0x1004ea747*/
      if ( _mm_testz_si128(v13, v13) ) /*0x1004ea754*/
      {
        v17 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v11 + 17, v12 - 18, 34); /*0x1004ea7f8*/
        v19 = v18; /*0x1004ea7fb*/
        v24[0] = v17; /*0x1004ea7fe*/
        v24[1] = v18; /*0x1004ea805*/
        if ( codexmate_lib::core::relay::codex_diagnostic::is_known_or_builtin::hedd6b5aaa2876407((char *)v17, v18, v35) ) /*0x1004ea816*/
          goto LABEL_4; /*0x1004ea81d*/
        if ( v19 == 12 ) /*0x1004ea827*/
        {
          if ( !(anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)v17 | *(_DWORD *)(v17 + 8) ^ 0x79616C65u) ) /*0x1004ea842*/
            goto LABEL_4; /*0x1004ea845*/
        }
        else if ( v19 > 0xC /*0x1004ea8db*/
               && !(*(_QWORD *)v17 ^ anon_3ce6d1417794db0febde534c64082f90_194
                  | *(_QWORD *)(v17 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5)) )
        {
          goto LABEL_4; /*0x1004ea8db*/
        }
        v32 = v24; /*0x1004ea8e8*/
        v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004ea8f3*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, &unk_1017BF98A, &v32); /*0x1004ea908*/
        v20 = v38; /*0x1004ea90d*/
        if ( v38 == v36 ) /*0x1004ea915*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v36); /*0x1004ea91b*/
        v21 = (__int64 *)v26; /*0x1004ea920*/
        goto LABEL_3; /*0x1004ea927*/
      }
    }
    else if ( (unsigned __int64)(v12 - 2) < 9 ) /*0x1004ea73a*/
    {
      goto LABEL_4; /*0x1004ea73a*/
    }
    if ( *(_QWORD *)(v11 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v11 + 9) ^ 0x2ELL ) /*0x1004ea773*/
      goto LABEL_4; /*0x1004ea773*/
    v14 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v11 + 10, v12 - 11, 34); /*0x1004ea78e*/
    v16 = v15; /*0x1004ea791*/
    v23[0] = v14; /*0x1004ea794*/
    v23[1] = v15; /*0x1004ea79b*/
    if ( codexmate_lib::core::relay::codex_diagnostic::is_known_or_builtin::hedd6b5aaa2876407((char *)v14, v15, v35) ) /*0x1004ea7ac*/
      goto LABEL_4; /*0x1004ea7b3*/
    if ( v16 == 12 ) /*0x1004ea7bd*/
    {
      if ( !(anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)v14 | *(_DWORD *)(v14 + 8) ^ 0x79616C65u) ) /*0x1004ea7d8*/
        goto LABEL_4; /*0x1004ea7db*/
    }
    else if ( v16 > 0xC /*0x1004ea86b*/
           && !(*(_QWORD *)v14 ^ anon_3ce6d1417794db0febde534c64082f90_194
              | *(_QWORD *)(v14 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5)) )
    {
      goto LABEL_4; /*0x1004ea86b*/
    }
    v32 = v23; /*0x1004ea878*/
    v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004ea883*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017BF97B, &v32); /*0x1004ea898*/
    v20 = v38; /*0x1004ea89d*/
    if ( v38 == v36 ) /*0x1004ea8a5*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v36); /*0x1004ea8af*/
    v21 = (__int64 *)v25; /*0x1004ea8b4*/
LABEL_3:
    v4 = v37; /*0x1004ea60e*/
    v5 = 3 * v20; /*0x1004ea612*/
    *(_QWORD *)(v37 + 8 * v5 + 16) = v21[2]; /*0x1004ea61a*/
    v6 = *v21; /*0x1004ea61f*/
    *(_QWORD *)(v4 + 8 * v5 + 8) = v21[1]; /*0x1004ea626*/
    *(_QWORD *)(v4 + 8 * v5) = v6; /*0x1004ea62b*/
    v38 = v20 + 1; /*0x1004ea632*/
LABEL_4:
    if ( HIBYTE(v31) ) /*0x1004ea644*/
      goto LABEL_46; /*0x1004ea644*/
  }
  if ( !HIBYTE(v31) ) /*0x1004ea694*/
  {
    HIBYTE(v31) = 1; /*0x1004ea69a*/
    v9 = v28 - v27; /*0x1004ea6ac*/
    if ( ((unsigned __int8)v31 | (v28 != v27)) == 1 ) /*0x1004ea6b7*/
    {
      v10 = v29[0] + v27; /*0x1004ea6bd*/
      if ( !v9 ) /*0x1004ea6c7*/
        goto LABEL_17; /*0x1004ea6c7*/
      goto LABEL_11; /*0x1004ea6c7*/
    }
  }
LABEL_46:
  a1[2] = v38; /*0x1004ea938*/
  result = v36; /*0x1004ea940*/
  a1[1] = v37; /*0x1004ea948*/
  *a1 = result; /*0x1004ea94c*/
  return result; /*0x1004ea94f*/
}