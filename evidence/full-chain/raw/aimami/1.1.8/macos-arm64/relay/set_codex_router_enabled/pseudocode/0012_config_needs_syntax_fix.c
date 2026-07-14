// codexmate_lib::core::relay::codex_diagnostic::config_needs_syntax_fix
// addr: 0x1003e1810
// decompiled via 反编译器 MCP (mac) live 1.1.8 IDB, session <审计会话>

__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::config_needs_syntax_fix::hcdf2b65801035e30(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // rcx
  __m128i si128; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm3
  __int64 v9; // [rsp+0h] [rbp-30h] BYREF
  __int64 v10; // [rsp+8h] [rbp-28h]
  __int64 v11; // [rsp+10h] [rbp-20h]

  codexmate_lib::core::relay::codex_diagnostic::run_diagnostics::h223fc611634f153e(&v9, a1, a2); /*0x1003e1825*/
  v3 = v10; /*0x1003e182a*/
  if ( v11 ) /*0x1003e1835*/
  {
    v4 = 0; /*0x1003e183b*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1012C1A60); /*0x1003e183d*/
    v6 = _mm_cvtsi32_si128(0x7861u); /*0x1003e1845*/
    while ( 1 ) /*0x1003e1859*/
    {
      if ( *(_QWORD *)(v10 + v4 + 16) == 18 ) /*0x1003e185f*/
      {
        v7 = _mm_or_si128( /*0x1003e187a*/
               _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(v10 + v4 + 8) + 16LL)), v6),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v10 + v4 + 8)), si128));
        if ( _mm_testz_si128(v7, v7) ) /*0x1003e187e*/
        {
          if ( *(_BYTE *)(v10 + v4 + 96) ) /*0x1003e1885*/
          {
            LOBYTE(v2) = 1; /*0x1003e188c*/
            if ( *(_QWORD *)(v10 + v4 + 40) != 2 || **(_WORD **)(v10 + v4 + 32) != 27503 ) /*0x1003e18a1*/
              break; /*0x1003e18a1*/
          }
        }
      }
      v4 += 104; /*0x1003e1850*/
      if ( 104 * v11 == v4 ) /*0x1003e1857*/
        goto LABEL_10; /*0x1003e1857*/
    }
  }
  else
  {
LABEL_10:
    v2 = 0; /*0x1003e18a5*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha93bd4347c336712(&v9); /*0x1003e18ac*/
  if ( v9 ) /*0x1003e18b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 104 * v9, 8); /*0x1003e18c6*/
  return v2; /*0x1003e18ce*/
}
