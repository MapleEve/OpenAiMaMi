// __ZN13codexmate_lib4core5relay10translator32collect_loaded_custom_tool_names @ 0x10080d800 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::collect_loaded_custom_tool_names::hd849a37a4915f0e0(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r14
  size_t v9; // rdx
  size_t v10; // r15
  __int64 v11; // r15
  int v12; // eax
  unsigned __int8 v13; // cl
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r9
  const void *v19; // r15
  void *v20; // r14
  void *v21; // r12
  void *v22; // r13
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // [rsp+8h] [rbp-68h]
  __int64 v29; // [rsp+10h] [rbp-60h]
  _QWORD *v30; // [rsp+18h] [rbp-58h]
  void *v31; // [rsp+20h] [rbp-50h] BYREF
  void *v32; // [rsp+28h] [rbp-48h]
  void *__dst; // [rsp+30h] [rbp-40h]
  __int64 v34; // [rsp+38h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-30h]

  result = *(unsigned __int8 *)a1; /*0x10080d814*/
  if ( (_DWORD)result == 4 ) /*0x10080d81a*/
  {
    v14 = a1[3]; /*0x10080d917*/
    if ( v14 ) /*0x10080d91e*/
    {
      v15 = a1[2]; /*0x10080d924*/
      v16 = 32 * v14; /*0x10080d928*/
      do /*0x10080d943*/
      {
        result = codexmate_lib::core::relay::translator::collect_loaded_custom_tool_names::hd849a37a4915f0e0(v15, a2); /*0x10080d937*/
        v15 += 32; /*0x10080d93c*/
        v16 -= 32; /*0x10080d93f*/
      }
      while ( v16 ); /*0x10080d943*/
    }
  }
  else if ( (_DWORD)result == 5 ) /*0x10080d823*/
  {
    v3 = a1[1]; /*0x10080d829*/
    if ( v3 ) /*0x10080d830*/
    {
      v35 = a2; /*0x10080d836*/
      v34 = a1[2]; /*0x10080d83e*/
      v30 = a1 + 1; /*0x10080d846*/
LABEL_5:
      v4 = v3 + 360; /*0x10080d84a*/
      v28 = v3; /*0x10080d858*/
      v5 = (_QWORD *)(v3 - 8); /*0x10080d85c*/
      v29 = *(unsigned __int16 *)(v3 + 626); /*0x10080d860*/
      v6 = 3LL * (unsigned int)(8 * v29); /*0x10080d86b*/
      v7 = -1; /*0x10080d86f*/
      do /*0x10080d8d4*/
      {
        if ( !v6 ) /*0x10080d883*/
        {
          v7 = v29; /*0x10080d8f0*/
LABEL_15:
          result = v34 - 1; /*0x10080d8f4*/
          if ( !v34 ) /*0x10080d900*/
            return result; /*0x10080d900*/
          --v34; /*0x10080d906*/
          v3 = *(_QWORD *)(v28 + 8 * v7 + 632); /*0x10080d90a*/
          goto LABEL_5; /*0x10080d912*/
        }
        v8 = v4 + 24; /*0x10080d885*/
        v9 = *(_QWORD *)(v4 + 16); /*0x10080d88d*/
        v10 = v9 - 4; /*0x10080d894*/
        if ( v9 >= 4 ) /*0x10080d89d*/
          v9 = 4; /*0x10080d89d*/
        v11 = -(__int64)v10; /*0x10080d8a1*/
        v12 = memcmp(&anon_22327b6004f579c0722d6ebc68f79196_45, *(const void **)(v4 + 8), v9); /*0x10080d8ab*/
        if ( v12 ) /*0x10080d8b4*/
          v11 = v12; /*0x10080d8b4*/
        v13 = (v11 > 0) - (v11 < 0); /*0x10080d8c1*/
        v5 += 4; /*0x10080d8c3*/
        ++v7; /*0x10080d8c7*/
        v6 -= 24; /*0x10080d8ca*/
        v4 = v8; /*0x10080d8ce*/
      }
      while ( v13 == 1 ); /*0x10080d8d4*/
      result = v13; /*0x10080d8d6*/
      if ( v13 ) /*0x10080d8df*/
        goto LABEL_15; /*0x10080d8df*/
      if ( *((_BYTE *)v5 - 24) == 3 ) /*0x10080d953*/
      {
        result = *(v5 - 1); /*0x10080d959*/
        v17 = *v5; /*0x10080d95d*/
        if ( *v5 == 18 ) /*0x10080d965*/
        {
          v23 = _mm_loadu_si128((const __m128i *)result); /*0x10080da3c*/
          result = *(unsigned __int16 *)(result + 16); /*0x10080da40*/
          v24 = _mm_or_si128( /*0x10080da58*/
                  _mm_xor_si128(_mm_cvtsi32_si128(result), (__m128i)xmmword_10167AD70),
                  _mm_xor_si128(v23, (__m128i)xmmword_10167AD60));
          if ( !_mm_testz_si128(v24, v24) ) /*0x10080da61*/
            return result; /*0x10080da61*/
        }
        else
        {
          if ( v17 != 9 ) /*0x10080d96f*/
          {
            if ( v17 == 6 ) /*0x10080d979*/
            {
              result = *(_DWORD *)result ^ 0x74737563 | *(unsigned __int16 *)(result + 4) ^ 0x6D6Fu; /*0x10080d98f*/
              if ( !(_DWORD)result ) /*0x10080d991*/
              {
                result = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hecba87f1181f86d0( /*0x10080d9a6*/
                           v30,
                           "nameetagfromlinkvaryIpv4Ipv6",
                           4);
                if ( result ) /*0x10080d9ae*/
                {
                  if ( *(_BYTE *)result == 3 ) /*0x10080d9b7*/
                  {
                    v19 = *(const void **)(result + 16); /*0x10080d9bd*/
                    v20 = *(void **)(result + 24); /*0x10080d9c1*/
                    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5(&v31, v20, 0, 1, 1, v18); /*0x10080d9d9*/
                    v21 = v32; /*0x10080d9de*/
                    if ( (_DWORD)v31 == 1 ) /*0x10080d9e6*/
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, __dst); /*0x10080dad6*/
                    v22 = __dst; /*0x10080d9ec*/
                    memcpy(__dst, v19, (size_t)v20); /*0x10080d9f9*/
                    v31 = v21; /*0x10080d9fe*/
                    v32 = v22; /*0x10080da02*/
                    __dst = v20; /*0x10080da06*/
                    return hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(v35, &v31); /*0x10080da12*/
                  }
                }
              }
            }
            return result; /*0x10080da17*/
          }
          result = *(_QWORD *)result ^ 0x63617073656D616ELL | *(unsigned __int8 *)(result + 8) ^ 0x65LL; /*0x10080da31*/
          if ( result ) /*0x10080da34*/
            return result; /*0x10080da34*/
        }
        result = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hecba87f1181f86d0( /*0x10080da72*/
                   v30,
                   &unk_10167B7AA,
                   5);
        if ( (result /*0x10080da98*/
           || (result = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hecba87f1181f86d0(
                          v30,
                          "childrenend_turnno-cache",
                          8)) != 0)
          && *(_BYTE *)result == 4 )
        {
          v25 = *(_QWORD *)(result + 24); /*0x10080da9a*/
          if ( v25 ) /*0x10080daa1*/
          {
            v26 = *(_QWORD *)(result + 16); /*0x10080daa3*/
            v27 = 32 * v25; /*0x10080daa7*/
            do /*0x10080dabe*/
            {
              result = codexmate_lib::core::relay::translator::collect_loaded_custom_tool_names::hd849a37a4915f0e0( /*0x10080dab2*/
                         v26,
                         v35);
              v26 += 32; /*0x10080dab7*/
              v27 -= 32; /*0x10080daba*/
            }
            while ( v27 ); /*0x10080dabe*/
          }
        }
      }
    }
  }
  return result; /*0x10080dac0*/
}