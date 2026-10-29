// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::translator::chat_content::tool_output::h4b8b3013d2a6e1ae; addr: 0x100398930; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
__int64 __fastcall codexmate_lib::core::relay::translator::chat_content::tool_output::h4b8b3013d2a6e1ae(
        __int64 a1,
        _BYTE *a2)
{
  _BYTE *v2; // r14
  _BYTE *v4; // rax
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // edi
  int v10; // edi
  unsigned __int8 v12[8]; // [rsp+8h] [rbp-38h] BYREF
  _BYTE v13[24]; // [rsp+10h] [rbp-30h] BYREF
  _BYTE v14[7]; // [rsp+28h] [rbp-18h]

  v2 = a2; /*0x10039893b*/
  if ( a2 /*0x100398970*/
    && (*a2 == 4
     || (v4 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         &anon_7534e791983e23e0bbee4dd7c8383343_174,
                         13,
                         a2)) != nullptr
     && (a2 = v4, *v4 == 4)) )
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0b6d280b62bbfd36(v13, a2 + 8); /*0x10039897a*/
    v12[0] = 4; /*0x10039897f*/
    codexmate_lib::core::relay::translator::chat_content::content::hc6150f2d711a50cb( /*0x100398996*/
      a1,
      v12,
      &anon_7534e791983e23e0bbee4dd7c8383343_172,
      (void *)4);
    if ( *(_BYTE *)a1 != 6 ) /*0x10039899e*/
    {
      v5 = *(_BYTE *)a1; /*0x1003989a0*/
      if ( *(_BYTE *)a1 ) /*0x1003989a0*/
      {
        v6 = *(_QWORD *)(a1 + 8); /*0x1003989a7*/
        v7 = *(_QWORD *)(a1 + 16); /*0x1003989ab*/
        v8 = *(_QWORD *)(a1 + 24); /*0x1003989af*/
        v9 = *(_DWORD *)(a1 + 1); /*0x1003989b3*/
        *(_DWORD *)&v14[3] = *(_DWORD *)(a1 + 4); /*0x1003989ba*/
        *(_DWORD *)v14 = v9; /*0x1003989be*/
      }
      else
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(a1); /*0x1003989d3*/
        v5 = 3; /*0x1003989d8*/
        v7 = 1; /*0x1003989da*/
        v8 = 0; /*0x1003989df*/
        v6 = 0; /*0x1003989e1*/
      }
      *(_BYTE *)a1 = v5; /*0x1003989e3*/
      v10 = *(_DWORD *)&v14[3]; /*0x1003989e8*/
      *(_DWORD *)(a1 + 1) = *(_DWORD *)v14; /*0x1003989eb*/
      *(_DWORD *)(a1 + 4) = v10; /*0x1003989ee*/
      *(_QWORD *)(a1 + 8) = v6; /*0x1003989f1*/
      *(_QWORD *)(a1 + 16) = v7; /*0x1003989f5*/
      *(_QWORD *)(a1 + 24) = v8; /*0x1003989f9*/
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v12); /*0x100398a01*/
  }
  else
  {
    codexmate_lib::core::relay::translator::flatten_function_call_output::h0b1801f838f5a932(a1, v2); /*0x1003989c9*/
  }
  return a1; /*0x100398a09*/
}