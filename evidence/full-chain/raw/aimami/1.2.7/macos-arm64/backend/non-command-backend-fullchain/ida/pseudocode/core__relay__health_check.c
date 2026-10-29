// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/health_check
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::health_check::probe::ProbeStream::dispatch::h0d5196506e18cdd5 @ 0x1003a0a50 size=2898 lines=487 =====
_QWORD *__fastcall codexmate_lib::core::relay::health_check::probe::ProbeStream::dispatch::h0d5196506e18cdd5(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rsi
  const __m128i *v9; // rdi
  __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // rax
  int v13; // ecx
  char v14; // dl
  char v15; // si
  char v16; // di
  __int64 v17; // rax
  int v18; // esi
  int v19; // edx
  _QWORD *v20; // r15
  void *v21; // rax
  void *v22; // rbx
  __int64 v23; // rsi
  _QWORD *result; // rax
  _QWORD *v25; // r15
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r15
  _QWORD *v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __m128i v32; // xmm0
  int v33; // r13d
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rbx
  void *v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __m128i v40; // xmm1
  __int64 v41; // rax
  void *v42; // rax
  _QWORD *v43; // rcx
  _QWORD *v44; // rsi
  _QWORD *v45; // r15
  _QWORD *v46; // r15
  unsigned __int64 v47; // r13
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  void *v50; // rax
  _QWORD *v51; // rcx
  _QWORD *v52; // rdi
  unsigned __int64 v53; // r12
  __int64 v54; // r15
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // rcx
  void *v58; // rax
  _QWORD *v59; // rcx
  _QWORD v60[3]; // [rsp+0h] [rbp-110h] BYREF
  _QWORD v61[2]; // [rsp+18h] [rbp-F8h] BYREF
  unsigned __int64 v62; // [rsp+28h] [rbp-E8h]
  _QWORD *v63; // [rsp+30h] [rbp-E0h]
  _QWORD v64[4]; // [rsp+38h] [rbp-D8h] BYREF
  _QWORD *v65; // [rsp+58h] [rbp-B8h]
  _QWORD *v66; // [rsp+60h] [rbp-B0h]
  _QWORD *v67; // [rsp+68h] [rbp-A8h]
  _QWORD *v68; // [rsp+70h] [rbp-A0h] BYREF
  _QWORD *v69; // [rsp+78h] [rbp-98h]
  unsigned __int64 v70; // [rsp+80h] [rbp-90h]
  __int64 v71; // [rsp+88h] [rbp-88h]
  __int64 v72; // [rsp+90h] [rbp-80h]
  _QWORD *v73; // [rsp+98h] [rbp-78h]
  _QWORD *v74; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD *v75; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v76; // [rsp+B0h] [rbp-60h]
  __int64 v77; // [rsp+B8h] [rbp-58h]
  __int64 v78; // [rsp+C0h] [rbp-50h]
  __int64 v79; // [rsp+C8h] [rbp-48h]
  __int64 v80; // [rsp+D0h] [rbp-40h]
  const __m128i *v81; // [rsp+D8h] [rbp-38h]
  _QWORD *v82; // [rsp+E0h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD **)(a2 + 40);
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 32) = 1;
  *(_QWORD *)(a2 + 40) = 0;
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(const __m128i **)(a2 + 56);
  v10 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 56) = 1;
  *(_QWORD *)(a2 + 64) = 0;
  if ( v10 == 5 && !(v9->i32[0] ^ 0x6F727265 | v9->u8[4] ^ 0x72) )
  {
    v29 = a1;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9);
    v78 = 31;
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1);
    if ( result )
    {
      qmemcpy(result, "upstream emitted an error event", 31);
      *v29 = 31;
      v29[1] = result;
      v29[2] = 31;
      goto LABEL_86;
    }
    goto LABEL_106;
  }
  if ( !v7 )
  {
    result = (_QWORD *)0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    goto LABEL_86;
  }
  v78 = a3;
  v82 = a1;
  v81 = v9;
  v80 = v8;
  do
  {
    while ( 1 )
    {
      v11 = v7;
      if ( !v7 )
        goto LABEL_17;
      v12 = (__int64)v7 + v6;
      v13 = *((char *)v11 + v6 - 1);
      if ( v13 < 0 )
        break;
      v7 = (_QWORD *)((char *)v11 - 1);
      if ( v13 != 10 )
        goto LABEL_15;
    }
    v14 = *(_BYTE *)(v12 - 2);
    if ( v14 >= -64 )
    {
      v17 = v12 - 2;
      v19 = v14 & 0x1F;
    }
    else
    {
      v15 = *(_BYTE *)(v12 - 3);
      if ( v15 >= -64 )
      {
        v17 = v12 - 3;
        v18 = v15 & 0xF;
      }
      else
      {
        v16 = *(_BYTE *)(v12 - 4);
        v17 = v12 - 4;
        v9 = (const __m128i *)((unsigned __int8)(v16 & 7) << 6);
        v18 = (unsigned int)v9 | v15 & 0x3F;
      }
      v19 = (v18 << 6) | v14 & 0x3F;
    }
    v7 = (_QWORD *)(v17 - v6);
  }
  while ( ((v19 << 6) | v13 & 0x3F) == 0xA );
LABEL_15:
  if ( v11 != (_QWORD *)6 || *(_DWORD *)v6 ^ 0x4E4F445B | *(unsigned __int16 *)(v6 + 4) ^ 0x5D45 )
  {
LABEL_17:
    v79 = v5;
    v68 = (_QWORD *)v6;
    v69 = v11;
    v70 = 0;
    v71 = 0;
    v72 = v6;
    v73 = v11;
    serde_json::de::from_trait::h99bf8e350a0ab991(&v74, &v68);
    if ( (_BYTE)v74 == 6 )
    {
      v20 = v75;
      v68 = v75;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v74);
      v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
      if ( !v21 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
      v22 = v21;
      qmemcpy(v21, "invalid JSON in probe SSE", 25);
      if ( *v20 == 1 )
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0f9d15e22e253cd(v20 + 1);
      }
      else if ( !*v20 )
      {
        v23 = v20[2];
        if ( v23 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20[1], v23, 1);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 40, 8);
      result = v82;
      *v82 = 25;
      result[1] = v22;
      result[2] = 25;
      goto LABEL_84;
    }
    v64[0] = v74;
    v64[1] = v75;
    v64[2] = v76;
    v64[3] = v77;
    codexmate_lib::core::relay::health_check::error_message_from_json::h4ddaed0de1518ddf(&v74, v6, v11);
    v25 = v82;
    if ( !__OFSUB__(0, v74) )
    {
      v70 = v76;
      v69 = v75;
      v68 = v74;
      v61[0] = &v68;
      v61[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_101A2F7B3, v61);
      v25[2] = v60[2];
      v30 = v60[0];
      v25[1] = v60[1];
      *v25 = v30;
      if ( v68 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1);
      goto LABEL_83;
    }
    v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "typefulljsonargsopenwithkindsavetrueuuidemithideshow",
            4,
            v64);
    v27 = 1;
    if ( v26 )
    {
      if ( *(_BYTE *)v26 != 3 )
      {
        v28 = 0;
        if ( v10 != 15 )
          goto LABEL_41;
        goto LABEL_45;
      }
      v27 = *(_QWORD *)(v26 + 16);
      v28 = *(_QWORD *)(v26 + 24);
      if ( v28 == 5 )
      {
        v28 = 5;
        if ( !(*(_DWORD *)v27 ^ 0x6F727265 | *(unsigned __int8 *)(v27 + 4) ^ 0x72) )
        {
LABEL_81:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("typefulljsonargsopenwithkindsavetrueuuidemithideshow");
          v36 = 39;
          v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
          if ( v50 )
          {
            qmemcpy(v50, "upstream probe failed or was incomplete", 39);
            v51 = v82;
            *v82 = 39;
            v51[1] = v50;
            v51[2] = 39;
            goto LABEL_83;
          }
LABEL_107:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v36);
        }
      }
    }
    else
    {
      v28 = 0;
    }
    if ( v10 != 15 )
    {
LABEL_41:
      if ( v10 == 19 )
      {
        v32 = _mm_or_si128(
                _mm_xor_si128(_mm_loadu_si128(v81), (__m128i)xmmword_101826410),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v81->i32 + 3)), (__m128i)xmmword_101826400));
        if ( _mm_testz_si128(v32, v32) )
          goto LABEL_81;
      }
LABEL_46:
      v33 = *(unsigned __int8 *)(a2 + 91);
      if ( *(_BYTE *)(a2 + 91) )
      {
        if ( v33 == 1 )
        {
          if ( v28 == 15 )
          {
            if ( !(*(_QWORD *)v27 ^ 0x65736E6F70736572LL | *(_QWORD *)(v27 + 7) ^ 0x64656C6961662E65LL) )
              goto LABEL_81;
            goto LABEL_75;
          }
          if ( v28 != 18 )
          {
            if ( v28 == 19 )
            {
              v34 = _mm_or_si128(
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)v27), (__m128i)xmmword_101826410),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v27 + 3)), (__m128i)xmmword_101826400));
              if ( _mm_testz_si128(v34, v34) )
                goto LABEL_81;
            }
LABEL_75:
            codexmate_lib::core::relay::health_check::extract_stream_text_delta::h8501250060950359(
              &v68,
              (unsigned __int8)v33,
              v64);
            v44 = v68;
            v45 = v82;
            if ( v68 == (_QWORD *)0x8000000000000000LL )
              goto LABEL_99;
            if ( v70 )
            {
              v65 = v68;
              v46 = v69;
              v47 = *(_QWORD *)(a2 + 80);
              v48 = 0;
              if ( v47 <= 0x190 )
                v48 = 400 - v47;
              v68 = v69;
              v69 = (_QWORD *)((char *)v69 + v70);
              v70 = v48;
              v63 = v46;
              _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hc0af177ec59ff14e(
                &v74,
                &v68);
              v66 = v75;
              v62 = v76;
              if ( v76 >= 0x20 )
                v49 = core::str::count::do_count_chars::h4875767a8f682eeb(v75, v76);
              else
                v49 = core::str::count::char_count_general_case::h35f326d7c82e4f55(v75, v76);
              v53 = v47 + v49;
              *(_QWORD *)(a2 + 80) = v47 + v49;
              v67 = v74;
              v54 = v78;
              v55 = *(_QWORD *)(v78 + 16);
              if ( v55 == *(_QWORD *)v78 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v78);
              v56 = *(_QWORD *)(v54 + 8);
              v57 = 3 * v55;
              *(_QWORD *)(v56 + 8 * v57) = v67;
              *(_QWORD *)(v56 + 8 * v57 + 8) = v66;
              *(_QWORD *)(v56 + 8 * v57 + 16) = v62;
              *(_QWORD *)(v54 + 16) = v55 + 1;
              *(_BYTE *)(a2 + 90) |= v53 >= 0x190;
              v44 = v65;
              v45 = v82;
              if ( !v65 )
              {
LABEL_99:
                *v45 = 0x8000000000000000LL;
                result = (_QWORD *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v64);
                if ( v80 )
                  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v80, 1);
                v5 = v79;
                if ( v79 )
                  return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1);
                return result;
              }
              v52 = v63;
            }
            else
            {
              if ( !v68 )
                goto LABEL_99;
              v52 = v69;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v44, 1);
            goto LABEL_99;
          }
          v40 = _mm_or_si128(
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v27 + 16)), (__m128i)xmmword_10181FD40),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v27), (__m128i)xmmword_10181FD30));
          if ( !_mm_testz_si128(v40, v40) )
            goto LABEL_75;
          v41 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v64, &unk_1018266C0, 16);
          if ( v41
            && *(_BYTE *)v41 == 3
            && (*(_QWORD *)(v41 + 24) != 9
             || **(_QWORD **)(v41 + 16) ^ 0x6574656C706D6F63LL
              | *(unsigned __int8 *)(*(_QWORD *)(v41 + 16) + 8LL) ^ 0x64LL) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64);
            v36 = 45;
            v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1);
            if ( !v42 )
              goto LABEL_107;
            qmemcpy(v42, "upstream returned conflicting terminal status", 45);
            v43 = v82;
            *v82 = 45;
            v43[1] = v42;
            v43[2] = 45;
            goto LABEL_83;
          }
        }
        else
        {
          v39 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v64, "/delta/stop_reason", 18);
          if ( v39
            && *(_BYTE *)v39 == 3
            && *(_QWORD *)(v39 + 24) == 7
            && !(**(_DWORD **)(v39 + 16) ^ 0x75666572 | *(_DWORD *)(*(_QWORD *)(v39 + 16) + 3LL) ^ 0x6C617375) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64);
            v36 = 27;
            v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
            if ( v58 )
            {
              qmemcpy(v58, "upstream refused this probe", 27);
              v59 = v82;
              *v82 = 27;
              v59[1] = v58;
              v59[2] = 27;
              goto LABEL_83;
            }
            goto LABEL_107;
          }
          if ( v28 != 12 || *(_QWORD *)v27 ^ 0x5F6567617373656DLL | *(unsigned int *)(v27 + 8) ^ 0x706F7473LL )
            goto LABEL_75;
        }
        *(_BYTE *)(a2 + 90) = 1;
        goto LABEL_75;
      }
      v35 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v64, "/choices/0/finish_reason", 24);
      if ( !v35
        || *(_BYTE *)v35 != 3
        || *(_QWORD *)(v35 + 24) != 14
        || **(_QWORD **)(v35 + 16) ^ 0x5F746E65746E6F63LL
         | *(_QWORD *)(*(_QWORD *)(v35 + 16) + 6LL) ^ 0x7265746C69665F74LL )
      {
        goto LABEL_75;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64);
      v36 = 28;
      v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
      if ( !v37 )
        goto LABEL_107;
      qmemcpy(v37, "upstream filtered this probe", 28);
      v38 = v82;
      *v82 = 28;
      v38[1] = v37;
      v38[2] = 28;
LABEL_83:
      result = (_QWORD *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v64);
LABEL_84:
      v5 = v79;
      goto LABEL_85;
    }
LABEL_45:
    if ( !(v81->i64[0] ^ 0x65736E6F70736572LL | *(__int64 *)((char *)v81->i64 + 7) ^ 0x64656C6961662E65LL) )
      goto LABEL_81;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(a2 + 91) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9);
    v78 = 45;
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1);
    v8 = v80;
    v9 = v81;
    v31 = v82;
    if ( result )
    {
      qmemcpy(result, "unexpected terminal marker for probe protocol", 45);
      *v82 = 45;
      v31[1] = result;
      v31[2] = 45;
      goto LABEL_86;
    }
LABEL_106:
    v81 = v9;
    v80 = v8;
    v79 = v5;
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v78);
  }
  *(_BYTE *)(a2 + 90) = 1;
  result = (_QWORD *)0x8000000000000000LL;
  *v82 = 0x8000000000000000LL;
LABEL_85:
  v8 = v80;
  v9 = v81;
LABEL_86:
  if ( v8 )
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1);
  if ( v5 )
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1);
  return result;
}

// ===== codexmate_lib::core::relay::health_check::probe::ProbeStream::line::h6ac0346e19aa23d4 @ 0x1003a0030 size=1098 lines=229 =====
_QWORD *__fastcall codexmate_lib::core::relay::health_check::probe::ProbeStream::line::h6ac0346e19aa23d4(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  signed __int64 v7; // rbx
  __int64 v8; // r14
  _QWORD *result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  bool v13; // zf
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r13
  bool v17; // cl
  __int64 v18; // rbx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rsi
  char v31[8]; // [rsp+8h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+10h] [rbp-90h]
  __int64 v33; // [rsp+18h] [rbp-88h]
  char *v34; // [rsp+20h] [rbp-80h]
  unsigned __int64 v35; // [rsp+28h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-70h]
  unsigned __int64 v37; // [rsp+38h] [rbp-68h]
  unsigned __int64 v38; // [rsp+40h] [rbp-60h]
  __int64 v39; // [rsp+48h] [rbp-58h]
  char v40; // [rsp+50h] [rbp-50h]
  __int64 v41; // [rsp+58h] [rbp-48h]
  __int64 v42; // [rsp+60h] [rbp-40h]
  void *__src; // [rsp+68h] [rbp-38h]
  __int64 v44; // [rsp+70h] [rbp-30h]

  v41 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 1;
  *(_QWORD *)(a2 + 16) = 0;
  v42 = v6;
  core::str::converts::from_utf8::hb32deb9559450f6e(&v35, v6);
  if ( (_DWORD)v35 == 1 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v35);
    v7 = 26;
    v8 = 1;
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
    if ( result )
    {
      qmemcpy(result, "invalid UTF-8 in probe SSE", 26);
      v10 = 26;
      goto LABEL_35;
    }
LABEL_39:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7);
  }
  v11 = v36;
  v12 = v37;
  v13 = *(_BYTE *)(a2 + 89) == 0;
  *(_BYTE *)(a2 + 89) = 0;
  if ( v13 || (LODWORD(v35) = 12565487, v12 < 3) )
  {
    if ( v12 )
      goto LABEL_7;
LABEL_17:
    result = codexmate_lib::core::relay::health_check::probe::ProbeStream::dispatch::h0d5196506e18cdd5(a1, a2, a3);
    v22 = v41;
    if ( !v41 )
      return result;
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v22, 1);
  }
  v19 = __ROL2__(v35, 8);
  v20 = __ROL2__(*(_WORD *)v11, 8);
  if ( v19 == v20 )
    v21 = BYTE2(v35) - *(unsigned __int8 *)(v11 + 2);
  else
    v21 = 2 * (v19 >= v20) - 1;
  if ( !v21 )
    v12 -= 3LL;
  v11 += 3LL * (v21 == 0);
  if ( !v12 )
    goto LABEL_17;
LABEL_7:
  v35 = v11;
  v36 = v12;
  v37 = 0;
  v38 = v12;
  v40 = 1;
  v39 = 0x3A0000003ALL;
  v14 = v31;
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
    v31,
    &v35);
  if ( v31[0] )
  {
    v15 = v11 + v33;
    v16 = v12 - v33;
    if ( v16 )
    {
      v17 = *(_BYTE *)v15 == 32;
      v18 = v16;
      v12 = v32;
      goto LABEL_21;
    }
    v18 = 0;
    v12 = v32;
  }
  else
  {
    v15 = 1;
    v18 = 0;
  }
  v17 = 0;
LABEL_21:
  __src = (void *)(v17 + v15);
  v7 = v18 - v17;
  if ( v12 == 5 )
  {
    if ( !(*(_DWORD *)v11 ^ 0x6E657665 | *(unsigned __int8 *)(v11 + 4) ^ 0x74) )
    {
      if ( v7 < 0 )
      {
        v8 = 0;
        goto LABEL_39;
      }
      if ( v7 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31);
        v8 = 1;
        v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1);
        if ( !v28 )
          goto LABEL_39;
        v29 = v28;
      }
      else
      {
        v29 = 1;
      }
      v14 = (char *)v29;
      memcpy((void *)v29, __src, v7);
      v30 = *(_QWORD *)(a2 + 48);
      if ( v30 )
      {
        v14 = *(char **)(a2 + 56);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v30, 1);
      }
      *(_QWORD *)(a2 + 48) = v7;
      *(_QWORD *)(a2 + 56) = v29;
      *(_QWORD *)(a2 + 64) = v7;
      if ( *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 64) <= 0x40000u )
        goto LABEL_29;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( v12 != 4 || *(_DWORD *)v11 != 1635017060 )
  {
LABEL_32:
    if ( *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 64) <= 0x40000u )
      goto LABEL_29;
    goto LABEL_33;
  }
  v23 = *(_QWORD *)(a2 + 24);
  v24 = *(_QWORD *)(a2 + 40);
  v34 = (char *)(a2 + 24);
  if ( v7 > (unsigned __int64)(v23 - v24) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(a2 + 24, v24, v7, 1, 1);
    v44 = *(_QWORD *)(a2 + 24);
    v24 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    v44 = v23;
  }
  v25 = *(_QWORD *)(a2 + 32);
  v14 = (char *)(v25 + v24);
  memcpy((void *)(v25 + v24), __src, v7);
  v26 = v7 + v24;
  *(_QWORD *)(a2 + 40) = v26;
  v27 = v26;
  if ( v44 == v26 )
  {
    v14 = v34;
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(v34, v44, 1, 1, 1);
    v25 = *(_QWORD *)(a2 + 32);
    v27 = *(_QWORD *)(a2 + 40);
  }
  *(_BYTE *)(v25 + v27) = 10;
  *(_QWORD *)(a2 + 40) = v26 + 1;
  if ( *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 64) <= 0x40000u )
  {
LABEL_29:
    result = (_QWORD *)0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    v22 = v41;
    if ( !v41 )
      return result;
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v22, 1);
  }
LABEL_33:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14);
  v7 = 34;
  v8 = 1;
  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1);
  if ( !result )
    goto LABEL_39;
  qmemcpy(result, "probe SSE frame exceeds size limit", 34);
  v10 = 34;
LABEL_35:
  *a1 = v10;
  a1[1] = (__int64)result;
  a1[2] = v10;
  v22 = v41;
  if ( v41 )
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v22, 1);
  return result;
}

// ===== codexmate_lib::core::relay::health_check::result::apply_if_current::h0656de25a866e7fa @ 0x100acabf0 size=997 lines=181 =====
__int64 __fastcall codexmate_lib::core::relay::health_check::result::apply_if_current::h0656de25a866e7fa(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  size_t v6; // rdx
  __int64 v9; // r14
  const void *v11; // rsi
  size_t v12; // rdx
  size_t v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  size_t v18; // rdx
  int v19; // eax
  size_t v20; // rdx
  size_t v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // cl
  int v27; // ecx
  __int64 v29; // r14
  __int64 v30; // rax
  size_t v31; // rdx
  const void *v32; // rsi
  const void *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD v37[3]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+18h] [rbp-48h]
  __int64 v39; // [rsp+20h] [rbp-40h]
  unsigned __int64 v40; // [rsp+28h] [rbp-38h]
  __int64 v41; // [rsp+30h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 != *(_QWORD *)(a2 + 16) )
    return 0;
  v9 = a3;
  v11 = *(const void **)(a2 + 8);
  v41 = a1;
  if ( memcmp(*(const void **)(a1 + 8), v11, v6) )
    return 0;
  if ( *(_QWORD *)(v41 + 232) != *(_QWORD *)(a2 + 232) )
    return 0;
  if ( *(_QWORD *)(v41 + 240) != *(_QWORD *)(a2 + 240) )
    return 0;
  v12 = *(_QWORD *)(v41 + 64);
  if ( v12 != *(_QWORD *)(a2 + 64) )
    return 0;
  if ( memcmp(*(const void **)(v41 + 56), *(const void **)(a2 + 56), v12) )
    return 0;
  v13 = *(_QWORD *)(v41 + 88);
  if ( v13 != *(_QWORD *)(a2 + 88) || memcmp(*(const void **)(v41 + 80), *(const void **)(a2 + 80), v13) )
    return 0;
  v14 = v41;
  v15 = *(_QWORD *)(v41 + 192) ^ 0x8000000000000000LL;
  if ( *(__int64 *)(v41 + 192) >= 0 )
    v15 = 2;
  v16 = *(_QWORD *)(a2 + 192) ^ 0x8000000000000000LL;
  if ( *(__int64 *)(a2 + 192) >= 0 )
    v16 = 2;
  if ( v15 != v16 )
    return 0;
  v17 = a2;
  if ( v15 == 2 )
  {
    v18 = *(_QWORD *)(v41 + 208);
    if ( v18 != *(_QWORD *)(a2 + 208) )
      return 0;
    v19 = memcmp(*(const void **)(v41 + 200), *(const void **)(a2 + 200), v18);
    v17 = a2;
    v14 = v41;
    if ( v19 )
      return 0;
  }
  v20 = *(_QWORD *)(v14 + 160);
  if ( v20 == *(_QWORD *)(v17 + 160)
    && !memcmp(*(const void **)(v14 + 152), *(const void **)(v17 + 152), v20)
    && (v40 = 0x8000000000000000LL, *(_BYTE *)(v41 + 253) == *(_BYTE *)(a2 + 253))
    && (v21 = *(_QWORD *)(v41 + 112), v21 == *(_QWORD *)(a2 + 112))
    && !memcmp(*(const void **)(v41 + 104), *(const void **)(a2 + 104), v21)
    && *(_BYTE *)(v41 + 254) == *(_BYTE *)(a2 + 254)
    && *(_BYTE *)(v41 + 255) == *(_BYTE *)(a2 + 255)
    && (unsigned __int8)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h06ae7c3c18cc3d26(
                          *(_QWORD *)(v41 + 128),
                          *(_QWORD *)(v41 + 136),
                          *(_QWORD *)(a2 + 128),
                          *(_QWORD *)(a2 + 136)) )
  {
    v22 = *(_QWORD *)(v41 + 224);
    v23 = 0;
    if ( v22 <= a4 && v22 == *(_QWORD *)(a2 + 224) )
    {
      v24 = v41;
      *(_QWORD *)(v41 + 224) = a5;
      v25 = *(_QWORD *)(v9 + 48);
      *(_QWORD *)(v24 + 216) = v25;
      v26 = *(_BYTE *)(v9 + 56);
      if ( v26 ^ 1 | ((v25 & 0x8000000000000000LL) != 0LL) )
      {
        *(_DWORD *)(v41 + 248) = 0;
        if ( !v26 )
        {
          if ( *(_QWORD *)(v9 + 24) != 0x8000000000000000LL )
          {
            codexmate_lib::core::relay::models::sanitize_error_for_display::ha859789d0aadfabc(
              v37,
              *(_QWORD *)(v9 + 32),
              *(_QWORD *)(v9 + 40));
            v40 = v37[0];
            v38 = v37[1];
            v39 = v37[2];
          }
          v34 = *(_QWORD *)(v41 + 168);
          if ( 2 * v34 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v41 + 176), v34, 1);
          v35 = v41;
          *(_QWORD *)(v41 + 168) = v40;
          v36 = v39;
          *(_QWORD *)(v35 + 176) = v38;
          *(_QWORD *)(v35 + 184) = v36;
          goto LABEL_49;
        }
      }
      else
      {
        v27 = 100;
        if ( v25 >= 0xC8 )
        {
          v27 = 70;
          if ( v25 >= 0x258 )
          {
            v27 = 20;
            if ( v25 < 0x5DC )
              v27 = 40;
          }
        }
        *(_DWORD *)(v41 + 248) = v27;
      }
      v29 = *(_QWORD *)(v41 + 168);
      v30 = *(_QWORD *)(a2 + 168);
      LOBYTE(v23) = 1;
      if ( v29 == 0x8000000000000000LL )
      {
        if ( v30 == 0x8000000000000000LL )
        {
LABEL_38:
          *(_QWORD *)(v41 + 168) = 0x8000000000000000LL;
LABEL_49:
          LOBYTE(v23) = 1;
        }
      }
      else if ( v30 != 0x8000000000000000LL )
      {
        v31 = *(_QWORD *)(v41 + 184);
        if ( v31 == *(_QWORD *)(a2 + 184) )
        {
          v32 = *(const void **)(a2 + 176);
          v33 = *(const void **)(v41 + 176);
          if ( !memcmp(v33, v32, v31) )
          {
            if ( v29 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v29, 1);
            goto LABEL_38;
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v23;
}

// ===== codexmate_lib::core::relay::health_check::probe::ProbeStream::push::h69373f4dac382db3 @ 0x1003a04a0 size=729 lines=142 =====
__int64 *__fastcall codexmate_lib::core::relay::health_check::probe::ProbeStream::push::h69373f4dac382db3(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // r15
  __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  void *v10; // rax
  __int64 i; // r13
  char v12; // bl
  __int64 v13; // r15
  __int64 v14; // r15
  void *v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rsi
  __int64 v22[3]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  __int64 v26; // [rsp+38h] [rbp-38h]
  __int64 *v27; // [rsp+40h] [rbp-30h]

  v23 = a3;
  v5 = a1;
  v6 = *(_QWORD *)(a2 + 72);
  v7 = __CFADD__(a4, v6);
  v8 = a4 + v6;
  v9 = -1;
  if ( !v7 )
    v9 = v8;
  *(_QWORD *)(a2 + 72) = v9;
  if ( v9 <= 0x100000 )
  {
    v27 = a1;
    v24 = 0;
    v25 = 8;
    v26 = 0;
    if ( a4 )
    {
      for ( i = 0; a4 != i; ++i )
      {
        if ( *(_BYTE *)(a2 + 90) )
          break;
        v12 = *(_BYTE *)(v23 + i);
        if ( v12 == 10 && *(_BYTE *)(a2 + 88) )
        {
          *(_BYTE *)(a2 + 88) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 88) = v12 == 13;
          if ( v12 == 10 || v12 == 13 )
          {
            a1 = v22;
            codexmate_lib::core::relay::health_check::probe::ProbeStream::line::h6ac0346e19aa23d4(
              v22,
              a2,
              (__int64)&v24);
            if ( !__OFSUB__(0, v22[0]) )
            {
              v5 = v27;
              v27[3] = v22[2];
              v18 = v22[0];
              v5[2] = v22[1];
              v5[1] = v18;
LABEL_24:
              *v5 = 1;
              v19 = v26;
              if ( v26 )
              {
                v20 = (_QWORD *)(v25 + 8);
                do
                {
                  v21 = *(v20 - 1);
                  if ( v21 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v21, 1);
                  v20 += 3;
                  --v19;
                }
                while ( v19 );
              }
              if ( v24 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24 * v24, 8);
              return v5;
            }
          }
          else
          {
            v13 = *(_QWORD *)(a2 + 16);
            if ( v13 == *(_QWORD *)a2 )
            {
              a1 = (__int64 *)a2;
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a2);
            }
            *(_BYTE *)(*(_QWORD *)(a2 + 8) + v13) = v12;
            v14 = v13 + 1;
            *(_QWORD *)(a2 + 16) = v14;
            if ( (unsigned __int64)(*(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 40) + v14) >= 0x40001 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1);
              v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1);
              if ( !v15 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34);
              qmemcpy(v15, "probe SSE frame exceeds size limit", 34);
              v5 = v27;
              v27[1] = 34;
              v5[2] = (__int64)v15;
              v5[3] = 34;
              goto LABEL_24;
            }
          }
        }
      }
    }
    v5 = v27;
    v27[3] = v26;
    v16 = v24;
    v5[2] = v25;
    v5[1] = v16;
    *v5 = 0;
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1);
    v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
    if ( !v10 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
    qmemcpy(v10, "probe response exceeds size limit", 33);
    a1[1] = 33;
    a1[2] = (__int64)v10;
    a1[3] = 33;
    *a1 = 1;
  }
  return v5;
}

// ===== codexmate_lib::core::relay::health_check::probe::validate_embedding::hf67a625817f1ebd2 @ 0x1003a16c0 size=701 lines=137 =====
_QWORD *__fastcall codexmate_lib::core::relay::health_check::probe::validate_embedding::hf67a625817f1ebd2(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // r14
  void *v5; // rax
  void *v6; // r15
  __int64 v7; // rsi
  char *v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  bool v19; // zf
  void *v20; // rax
  _QWORD *v22; // [rsp+0h] [rbp-60h] BYREF
  _QWORD *v23; // [rsp+8h] [rbp-58h]
  __int64 v24; // [rsp+10h] [rbp-50h]
  __int64 v25; // [rsp+18h] [rbp-48h]
  _QWORD *v26; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-38h]
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int64 v29; // [rsp+38h] [rbp-28h]

  v26 = a2;
  v27 = a3;
  v28 = 0;
  v29 = 0;
  serde_json::de::from_trait::he213214ce1dd6727(&v22, &v26);
  if ( (_BYTE)v22 == 6 )
  {
    v4 = v23;
    v26 = v23;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v22);
    v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1);
    if ( !v5 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40);
    v6 = v5;
    qmemcpy(v5, "upstream returned invalid embedding JSON", 40);
    if ( *v4 == 1 )
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0f9d15e22e253cd(v4 + 1);
    }
    else if ( !*v4 )
    {
      v7 = v4[2];
      if ( v7 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4[1], v7, 1);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 40, 8);
    *a1 = 40;
    a1[1] = v6;
    a1[2] = 40;
  }
  else
  {
    v26 = v22;
    v27 = v23;
    v28 = v24;
    v29 = v25;
    v8 = "error";
    v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "error",
                    5,
                    &v26);
    if ( !v9 || !*v9 )
    {
      v8 = "dataunittypefulljsonargsopenwithkindsavetrueuuidemithideshow";
      v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              "dataunittypefulljsonargsopenwithkindsavetrueuuidemithideshow",
              4,
              &v26);
      if ( v10 )
      {
        if ( *(_BYTE *)v10 == 4 )
        {
          v11 = *(_QWORD *)(v10 + 24);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v10 + 16);
            v13 = v12 + 32 * v11;
            while ( 1 )
            {
              v8 = (char *)&unk_101827A42;
              v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_101827A42,
                      9,
                      v12);
              if ( !v14 )
                break;
              if ( *(_BYTE *)v14 != 4 )
                break;
              v15 = *(_QWORD *)(v14 + 24);
              if ( !v15 )
                break;
              v12 += 32;
              v16 = *(_QWORD *)(v14 + 16);
              v17 = 32 * v15;
              v18 = 0;
              while ( v17 != v18 )
              {
                v19 = *(_BYTE *)(v16 + v18) == 2;
                v18 += 32;
                if ( !v19 )
                  goto LABEL_22;
              }
              if ( v12 == v13 )
              {
                *a1 = 0x8000000000000000LL;
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_22:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8);
    v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1);
    if ( !v20 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 51);
    qmemcpy(v20, "upstream returned no valid embedding for this probe", 51);
    *a1 = 51;
    a1[1] = v20;
    a1[2] = 51;
LABEL_24:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v26);
  }
  return a1;
}

// ===== codexmate_lib::core::relay::health_check::probe::ProbeStream::finish::ha6b031cb78ad6c16 @ 0x1003a0790 size=669 lines=103 =====
__int64 *__fastcall codexmate_lib::core::relay::health_check::probe::ProbeStream::finish::ha6b031cb78ad6c16(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  void *v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // rsi
  __int64 v12[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h]

  v2 = a1;
  v13 = 0;
  v14 = 8;
  v15 = 0;
  if ( !*(_BYTE *)(a2 + 90) )
  {
    codexmate_lib::core::relay::health_check::probe::ProbeStream::line::h6ac0346e19aa23d4(v12, a2, (__int64)&v13);
    if ( !__OFSUB__(0, v12[0])
      || (a1 = v12,
          codexmate_lib::core::relay::health_check::probe::ProbeStream::dispatch::h0d5196506e18cdd5(
            v12,
            a2,
            (__int64)&v13),
          v12[0] != 0x8000000000000000LL) )
    {
      v2[3] = v12[2];
      v7 = v12[0];
      v2[2] = v12[1];
      v2[1] = v7;
      *v2 = 1;
      v6 = v15;
      if ( v15 )
        goto LABEL_14;
      goto LABEL_18;
    }
    if ( !*(_BYTE *)(a2 + 90) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12);
      v4 = 57;
      v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(57, 1);
      if ( v5 )
      {
        qmemcpy(v5, "upstream stream ended without a successful terminal event", 57);
        v2[1] = 57;
        v2[2] = (__int64)v5;
        v2[3] = 57;
        *v2 = 1;
        v6 = v15;
        if ( v15 )
          goto LABEL_14;
        goto LABEL_18;
      }
LABEL_21:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4);
    }
  }
  if ( *(_QWORD *)(a2 + 80) )
  {
    v2[3] = v15;
    v3 = v13;
    v2[2] = v14;
    v2[1] = v3;
    *v2 = 0;
    return v2;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1);
  v4 = 48;
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1);
  if ( !v8 )
    goto LABEL_21;
  qmemcpy(v8, "upstream returned no model output for this probe", 48);
  v2[1] = 48;
  v2[2] = (__int64)v8;
  v2[3] = 48;
  *v2 = 1;
  v6 = v15;
  if ( v15 )
  {
LABEL_14:
    v9 = (_QWORD *)(v14 + 8);
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1);
      v9 += 3;
      --v6;
    }
    while ( v6 );
  }
LABEL_18:
  if ( v13 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24 * v13, 8);
  return v2;
}

// ===== codexmate_lib::core::relay::health_check::read_probe_body::_$u7b$$u7b$closure$u7d$$u7d$::ha3a853baf91f4c01 @ 0x1000ec780 size=181 lines=196 =====
char __fastcall codexmate_lib::core::relay::health_check::read_probe_body::_$u7b$$u7b$closure$u7d$$u7d$::ha3a853baf91f4c01(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _BYTE *v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rax
  const void *v9; // r13
  size_t v10; // r14
  __int128 v11; // xmm0
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  char result; // al
  __int64 v15; // r14
  __int64 v16; // r13
  unsigned __int128 v17; // kr00_16
  void *v18; // rax
  void *v19; // r14
  __int64 v20; // rsi
  void *v21; // rax
  unsigned __int64 v22; // r15
  __int64 *v23; // rax
  size_t __n[9]; // [rsp+0h] [rbp-120h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-D8h] BYREF
  _OWORD v26[9]; // [rsp+58h] [rbp-C8h] BYREF
  __int64 *v27; // [rsp+E8h] [rbp-38h]
  __int64 v28; // [rsp+F0h] [rbp-30h] BYREF

  v27 = a1;
  switch ( *((_BYTE *)a2 + 72) )
  {
    case 0:
      v5 = *a2;
      a2[1] = *a2;
      a2[2] = 0;
      a2[3] = 1;
      a2[4] = 0;
      break;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101BE7420);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101BE7420);
    case 3:
      v6 = a2 + 8;
      switch ( *((_BYTE *)a2 + 64) )
      {
        case 0:
          v5 = a2[5];
          a2[6] = v5;
          goto LABEL_23;
        case 1:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101BF1638);
        case 2:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101BF1638);
        case 3:
          v7 = (_QWORD *)a2[7];
          goto LABEL_10;
      }
  }
  while ( 2 )
  {
    a2[5] = v5;
    v6 = a2 + 8;
    *((_BYTE *)a2 + 64) = 0;
    for ( a2[6] = v5; ; v5 = a2[6] )
    {
LABEL_23:
      v7 = (_QWORD *)(v5 + 112);
      a2[7] = (__int64)v7;
LABEL_10:
      (*(void (__fastcall **)(_OWORD *, _QWORD, __int64))(v7[1] + 24LL))(v26, *v7, a3);
      if ( *(_QWORD *)&v26[0] == 6 )
      {
        *v6 = 3;
        *v27 = 2;
        result = 3;
        goto LABEL_34;
      }
      v8 = *((_QWORD *)&v26[0] + 1);
      v9 = *(const void **)&v26[1];
      qmemcpy(__n, (char *)&v26[1] + 8, sizeof(__n));
      if ( LODWORD(v26[0]) == 4 )
      {
        WORD4(v26[5]) = 5;
        v26[8] = *(_OWORD *)((char *)v26 + 8);
        *(_QWORD *)&v26[0] = 0x8000000000000000LL;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25);
        v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 8);
        if ( !v18 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 144);
        v19 = v18;
        memcpy(v18, v26, 0x90u);
        *v6 = 1;
        v28 = reqwest::error::Error::without_url::hd3bcffd7643367fc(v19);
        v25[0] = &v28;
        v25[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(
          v26,
          "\x18read probe body failed: \xC0\x14stream read failed: \xC0\x10request failed: \xC0\tupstream \xC0src/core/re"
          "lay/proxy_server.rs",
          v25);
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h9df2bb7224e1eb93(v28);
        v17 = v26[0];
        v15 = *(_QWORD *)&v26[1];
        v20 = a2[2];
        if ( !v20 )
          goto LABEL_32;
        goto LABEL_29;
      }
      if ( LODWORD(v26[0]) == 5 )
      {
        *v6 = 1;
        goto LABEL_26;
      }
      if ( LODWORD(v26[0]) == 3 )
        break;
      qmemcpy((char *)&v26[1] + 8, __n, 0x48u);
      core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hbc21c0b42cf04151(v26);
    }
    v10 = __n[0];
    *((_QWORD *)&v26[1] + 1) = __n[0];
    *(_QWORD *)&v26[2] = __n[1];
    v11 = *(_OWORD *)((char *)&v26[1] + 8);
    *v6 = 1;
    if ( !v8 )
    {
LABEL_26:
      v15 = a2[4];
      v16 = 0;
      v17 = *((_OWORD *)a2 + 1);
      goto LABEL_33;
    }
    *(_QWORD *)&v26[0] = v8;
    *((_QWORD *)&v26[0] + 1) = v9;
    v26[1] = v11;
    v12 = a2[4];
    v13 = -1;
    if ( !__CFADD__(v10, v12) )
      v13 = v10 + v12;
    if ( v13 < 0x100001 )
    {
      if ( v10 > a2[2] - v12 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(
          a2 + 2,
          a2[4],
          v10,
          1,
          1);
        v12 = a2[4];
      }
      memcpy((void *)(v12 + a2[3]), v9, v10);
      a2[4] = v10 + v12;
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)&v26[0] + 32LL))(
        (char *)&v26[1] + 8,
        *((_QWORD *)&v26[0] + 1),
        *(_QWORD *)&v26[1]);
      v5 = a2[1];
      continue;
    }
    break;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25);
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
  if ( !v21 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
  v22 = (unsigned __int64)v21;
  qmemcpy(v21, "probe response exceeds size limit", 33);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)&v26[0] + 32LL))(
    (char *)&v26[1] + 8,
    *((_QWORD *)&v26[0] + 1),
    *(_QWORD *)&v26[1]);
  v15 = 33;
  v20 = a2[2];
  v17 = __PAIR128__(v22, 33);
  if ( !v20 )
  {
LABEL_32:
    v16 = 1;
    goto LABEL_33;
  }
LABEL_29:
  v16 = 1;
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[3], v20, 1);
LABEL_33:
  v23 = v27;
  *v27 = v16;
  *(_OWORD *)(v23 + 1) = v17;
  v23[3] = v15;
  result = 1;
LABEL_34:
  *((_BYTE *)a2 + 72) = result;
  return result;
}

