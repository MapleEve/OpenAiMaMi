// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::canonical_tool::h59eff20a10b07782; addr: 0x1008a5550; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:20Z
__int64 __fastcall codexmate_lib::core::analytics::parser::tools::canonical_tool::h59eff20a10b07782(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  char *v8; // rbx
  size_t v9; // r15
  char *v10; // r13
  bool v11; // zf
  __int64 v12; // r8
  int v13; // ecx
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __int64 result; // rax
  void *v17; // rax
  void *v18; // r12
  __int64 v19; // [rsp+0h] [rbp-30h]

  v3 = (_QWORD *)a1; /*0x1008a555e*/
  v4 = a2; /*0x1008a5561*/
  v5 = a3; /*0x1008a5564*/
  if ( a3 < 0xA ) /*0x1008a556b*/
    goto LABEL_18; /*0x1008a556b*/
  v6 = 0x66756E6374696F6ELL; /*0x1008a5571*/
  v7 = _byteswap_uint64(*(_QWORD *)a2); /*0x1008a557e*/
  if ( v7 == 0x66756E6374696F6ELL ) /*0x1008a5584*/
  {
    v7 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 8), 8); /*0x1008a558e*/
    a1 = 0; /*0x1008a5591*/
    if ( (unsigned __int16)v7 == 29486 ) /*0x1008a5598*/
      goto LABEL_6; /*0x1008a5598*/
    v6 = 29486; /*0x1008a559a*/
  }
  a1 = 2 * (unsigned int)(v6 >= v7) - 1; /*0x1008a55a8*/
LABEL_6:
  v5 = a3 - 10; /*0x1008a55ac*/
  if ( (_DWORD)a1 ) /*0x1008a55b2*/
    v5 = a3; /*0x1008a55b2*/
  v4 = a2 + 10; /*0x1008a55b6*/
  if ( (_DWORD)a1 ) /*0x1008a55ba*/
    v4 = a2; /*0x1008a55ba*/
  if ( v5 == 12 ) /*0x1008a55c2*/
  {
    v12 = 7; /*0x1008a5700*/
    v8 = (char *)&unk_10178BA4A; /*0x1008a5706*/
    v9 = 5; /*0x1008a570d*/
    v10 = "shelltool_searchweb_searchcalled"; /*0x1008a5713*/
    a1 = *(_QWORD *)v4 ^ 0x6D6F635F63657865LL | *(unsigned int *)(v4 + 8) ^ 0x646E616DLL; /*0x1008a571a*/
    if ( !a1 ) /*0x1008a571d*/
      goto LABEL_52; /*0x1008a571d*/
    a1 = *(_QWORD *)v4 ^ 0x5F64656966696E75LL | *(unsigned int *)(v4 + 8) ^ 0x63657865LL; /*0x1008a573a*/
    if ( !a1 ) /*0x1008a573d*/
      goto LABEL_52; /*0x1008a573d*/
    if ( *(_QWORD *)v4 ^ 0x715F686372616573LL | *(unsigned int *)(v4 + 8) ^ 0x79726575LL ) /*0x1008a5759*/
      goto LABEL_43; /*0x1008a575c*/
    v12 = 6; /*0x1008a5762*/
    v8 = (char *)&unk_10178BA44; /*0x1008a5768*/
    v9 = 11; /*0x1008a576f*/
    v10 = "tool_searchweb_searchcalled"; /*0x1008a5775*/
    goto LABEL_52; /*0x1008a577c*/
  }
  if ( v5 != 11 ) /*0x1008a55cc*/
  {
LABEL_18:
    switch ( v5 ) /*0x1008a56d6*/
    {
      case 4uLL: /*0x1008a56d6*/
        if ( *(_DWORD *)v4 != 1953063287 ) /*0x1008a56de*/
          goto LABEL_43; /*0x1008a56de*/
        goto LABEL_29; /*0x1008a56de*/
      case 5uLL: /*0x1008a56d6*/
        v13 = *(_DWORD *)v4 ^ 0x6C656873; /*0x1008a57c9*/
        a1 = v13 | *(unsigned __int8 *)(v4 + 4) ^ 0x6Cu; /*0x1008a57d2*/
        if ( !(v13 | *(unsigned __int8 *)(v4 + 4) ^ 0x6C) ) /*0x1008a57d4*/
          goto LABEL_45; /*0x1008a57d4*/
        if ( *(_DWORD *)v4 ^ 0x65656C73 | *(unsigned __int8 *)(v4 + 4) ^ 0x70 ) /*0x1008a57e8*/
          goto LABEL_43; /*0x1008a57ea*/
LABEL_29:
        v12 = 5; /*0x1008a57f0*/
        v8 = (char *)&unk_10178BA3A; /*0x1008a57f6*/
        v9 = 4; /*0x1008a57fd*/
        v10 = "waitreadeditturnlsof"; /*0x1008a5803*/
        goto LABEL_52; /*0x1008a580a*/
      case 9uLL: /*0x1008a56d6*/
        if ( *(_QWORD *)v4 ^ 0x6C69665F64616572LL | *(unsigned __int8 *)(v4 + 8) ^ 0x65LL ) /*0x1008a587e*/
          goto LABEL_43; /*0x1008a5881*/
        goto LABEL_35; /*0x1008a5881*/
      case 0xAuLL: /*0x1008a56d6*/
        a1 = *(_QWORD *)v4 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v4 + 8) ^ 0x6863LL; /*0x1008a58ba*/
        if ( !a1 ) /*0x1008a58bd*/
        {
          v9 = 10; /*0x1008a59d3*/
          v12 = 6; /*0x1008a59d9*/
          v8 = (char *)&unk_10178BA44; /*0x1008a59df*/
          v10 = "web_searchcalled"; /*0x1008a59e6*/
          goto LABEL_52; /*0x1008a59ed*/
        }
        a1 = *(_QWORD *)v4 ^ 0x616D695F77656976LL | *(unsigned __int16 *)(v4 + 8) ^ 0x6567LL; /*0x1008a58db*/
        if ( !a1 ) /*0x1008a58de*/
        {
          v9 = 10; /*0x1008a5a13*/
          v12 = 4; /*0x1008a5a19*/
          v8 = "readeditturnlsof"; /*0x1008a5a1f*/
          v10 = "view_image"; /*0x1008a5a26*/
          goto LABEL_52; /*0x1008a5a2d*/
        }
        v8 = (char *)&unk_10178BA3A; /*0x1008a58fc*/
        v9 = 5; /*0x1008a5903*/
        v10 = (char *)&unk_10178BA3F; /*0x1008a5909*/
        a1 = *(_QWORD *)v4 ^ 0x706E695F646E6573LL | *(unsigned __int16 *)(v4 + 8) ^ 0x7475LL; /*0x1008a5910*/
        if ( !a1 ) /*0x1008a5913*/
          goto LABEL_49; /*0x1008a5913*/
        v11 = (*(_QWORD *)v4 ^ 0x6567615F74696177LL | *(unsigned __int16 *)(v4 + 8) ^ 0x746ELL) == 0; /*0x1008a5930*/
        break; /*0x1008a5930*/
      case 0xDuLL: /*0x1008a56d6*/
        a1 = *(_QWORD *)v4 ^ 0x6F635F6C6C656873LL | *(_QWORD *)(v4 + 5) ^ 0x646E616D6D6F635FLL; /*0x1008a595b*/
        if ( a1 ) /*0x1008a595e*/
          goto LABEL_43; /*0x1008a595e*/
LABEL_45:
        v12 = 7; /*0x1008a5998*/
        v8 = (char *)&unk_10178BA4A; /*0x1008a599e*/
        v9 = 5; /*0x1008a59a5*/
        v10 = "shelltool_searchweb_searchcalled"; /*0x1008a59ab*/
        goto LABEL_52; /*0x1008a59b2*/
      case 0xFuLL: /*0x1008a56d6*/
        a1 = *(_QWORD *)v4 ^ 0x726165735F626577LL | *(_QWORD *)(v4 + 7) ^ 0x6C6C61635F686372LL; /*0x1008a579c*/
        if ( a1 ) /*0x1008a579f*/
          goto LABEL_43; /*0x1008a579f*/
        v12 = 6; /*0x1008a57a5*/
        v8 = (char *)&unk_10178BA44; /*0x1008a57ab*/
        v9 = 10; /*0x1008a57b2*/
        v10 = "web_searchcalled"; /*0x1008a57b8*/
        goto LABEL_52; /*0x1008a57bf*/
      case 0x11uLL: /*0x1008a56d6*/
        v14 = _mm_or_si128( /*0x1008a582b*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v4 + 16)), (__m128i)xmmword_1016EDD10),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1017869F0));
        if ( !_mm_testz_si128(v14, v14) ) /*0x1008a5834*/
          goto LABEL_43; /*0x1008a5834*/
        goto LABEL_35; /*0x1008a5834*/
      case 0x12uLL: /*0x1008a56d6*/
        v15 = _mm_or_si128( /*0x1008a5858*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v4 + 16)), (__m128i)xmmword_1017869E0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1017869D0));
        if ( !_mm_testz_si128(v15, v15) ) /*0x1008a5861*/
          goto LABEL_43; /*0x1008a5861*/
LABEL_35:
        v9 = 4; /*0x1008a5887*/
        v10 = "readeditturnlsof"; /*0x1008a588d*/
        v8 = "readeditturnlsof"; /*0x1008a5894*/
        v12 = 4; /*0x1008a5897*/
        goto LABEL_52; /*0x1008a589d*/
      default:
        goto LABEL_43;
    }
LABEL_40:
    v12 = 5; /*0x1008a5933*/
    if ( v11 ) /*0x1008a5939*/
      goto LABEL_52; /*0x1008a5939*/
LABEL_43:
    codexmate_lib::core::analytics::parser::tools::safe_tool_name::h0db1700278b0404b(v3); /*0x1008a5960*/
    result = 5; /*0x1008a5968*/
    v8 = (char *)&unk_10178BA3A; /*0x1008a596d*/
    goto LABEL_54; /*0x1008a5974*/
  }
  a1 = *(_QWORD *)v4 ^ 0x61705F796C707061LL | *(_QWORD *)(v4 + 3) ^ 0x68637461705F796CLL; /*0x1008a55ed*/
  if ( a1 ) /*0x1008a55f0*/
  {
    a1 = *(_QWORD *)v4 ^ 0x74735F6574697277LL | *(_QWORD *)(v4 + 3) ^ 0x6E696474735F6574LL; /*0x1008a5611*/
    if ( a1 ) /*0x1008a5614*/
    {
      a1 = *(_QWORD *)v4 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)(v4 + 3) ^ 0x6863726165735F6CLL; /*0x1008a5635*/
      if ( a1 ) /*0x1008a5638*/
      {
        v8 = (char *)&unk_10178BA3A; /*0x1008a5659*/
        a1 = *(_QWORD *)v4 ^ 0x705F657461647075LL | *(_QWORD *)(v4 + 3) ^ 0x6E616C705F657461LL; /*0x1008a5660*/
        if ( a1 ) /*0x1008a5663*/
        {
          a1 = *(_QWORD *)v4 ^ 0x67615F6E77617073LL; /*0x1008a5673*/
          v9 = 5; /*0x1008a568b*/
          v10 = (char *)&unk_10178BA3F; /*0x1008a5691*/
          if ( a1 | *(_QWORD *)(v4 + 3) ^ 0x746E6567615F6E77LL ) /*0x1008a5698*/
          {
            a1 = *(_QWORD *)v4 ^ 0x67615F65736F6C63LL; /*0x1008a56ab*/
            v11 = (a1 | *(_QWORD *)(v4 + 3) ^ 0x746E6567615F6573LL) == 0; /*0x1008a56b2*/
            goto LABEL_40; /*0x1008a56b5*/
          }
LABEL_49:
          v12 = 5; /*0x1008a5a0b*/
        }
        else
        {
          v9 = 11; /*0x1008a5a2f*/
          v12 = 5; /*0x1008a5a35*/
          v10 = "update_plan"; /*0x1008a5a3b*/
        }
      }
      else
      {
        v9 = 11; /*0x1008a59ef*/
        v12 = 6; /*0x1008a59f5*/
        v8 = (char *)&unk_10178BA44; /*0x1008a59fb*/
        v10 = "tool_searchweb_searchcalled"; /*0x1008a5a02*/
      }
    }
    else
    {
      v9 = 11; /*0x1008a59b7*/
      v12 = 7; /*0x1008a59bd*/
      v8 = (char *)&unk_10178BA4A; /*0x1008a59c3*/
      v10 = "write_stdin"; /*0x1008a59ca*/
    }
  }
  else
  {
    v9 = 11; /*0x1008a5979*/
    v12 = 4; /*0x1008a597f*/
    v8 = "editturnlsof"; /*0x1008a5985*/
    v10 = (char *)&unk_10178B9D5; /*0x1008a598c*/
  }
LABEL_52:
  v19 = v12; /*0x1008a5a42*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1008a5a46*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1008a5a53*/
  if ( !v17 ) /*0x1008a5a5b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x1008a5a9c*/
  v18 = v17; /*0x1008a5a5d*/
  memcpy(v17, v10, v9); /*0x1008a5a69*/
  *v3 = v9; /*0x1008a5a6e*/
  v3[1] = v18; /*0x1008a5a71*/
  v3[2] = v9; /*0x1008a5a75*/
  result = v19; /*0x1008a5a79*/
LABEL_54:
  v3[3] = v8; /*0x1008a5a7d*/
  v3[4] = result; /*0x1008a5a81*/
  return result; /*0x1008a5a89*/
}