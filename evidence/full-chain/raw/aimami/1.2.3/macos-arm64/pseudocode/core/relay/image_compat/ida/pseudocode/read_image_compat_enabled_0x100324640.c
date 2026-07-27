// __ZN13codexmate_lib4core5relay12image_compat25read_image_compat_enabled @ 0x100324640 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::image_compat::read_image_compat_enabled::h8dc099761b0d7d30(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // r15
  bool v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r13
  const __m128i *v17; // rax
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm0
  _BYTE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v25[4]; // [rsp+0h] [rbp-90h] BYREF
  __int64 v26; // [rsp+10h] [rbp-80h]
  __int64 v27; // [rsp+18h] [rbp-78h] BYREF
  __int64 v28; // [rsp+20h] [rbp-70h]
  _QWORD v29[5]; // [rsp+28h] [rbp-68h] BYREF
  char v30; // [rsp+50h] [rbp-40h]
  __int16 v31; // [rsp+58h] [rbp-38h]
  __int64 v32; // [rsp+60h] [rbp-30h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v27, a1, a2); /*0x10032465b*/
  v2 = v27; /*0x100324660*/
  if ( __OFSUB__(-v27, 1) ) /*0x100324667*/
  {
    if ( (v28 & 3) == 1 ) /*0x100324678*/
    {
      v3 = v28 - 1; /*0x10032467e*/
      v4 = *(_QWORD *)(v28 - 1); /*0x100324682*/
      v5 = *(_QWORD *)(v28 + 7); /*0x100324686*/
      if ( *(_QWORD *)v5 ) /*0x10032468a*/
        (*(void (__fastcall **)(__int64))v5)(v4); /*0x100324696*/
      v6 = *(_QWORD *)(v5 + 8); /*0x100324698*/
      if ( v6 ) /*0x1003246a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x1003246aa*/
      v7 = 24; /*0x1003246af*/
      v8 = 8; /*0x1003246b4*/
      v9 = v3; /*0x1003246b9*/
      goto LABEL_41; /*0x1003246bc*/
    }
    goto LABEL_42; /*0x100324678*/
  }
  v10 = v28; /*0x1003246c1*/
  v27 = 0; /*0x1003246c9*/
  v28 = v29[0]; /*0x1003246d1*/
  v11 = v29; /*0x1003246d5*/
  v32 = v10; /*0x1003246d9*/
  v29[0] = v10; /*0x1003246dd*/
  v29[1] = v28; /*0x1003246e1*/
  v29[2] = 0; /*0x1003246e5*/
  v29[3] = v28; /*0x1003246ed*/
  v29[4] = 0xA0000000ALL; /*0x1003246fb*/
  v30 = 1; /*0x1003246ff*/
  v31 = 0; /*0x100324703*/
  v12 = 0; /*0x100324709*/
  while ( 1 ) /*0x100324734*/
  {
    v13 = v29[0]; /*0x100324734*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10032473e*/
      v25,
      v29);
    if ( v25[0] == 1 ) /*0x10032474a*/
    {
      v14 = v27; /*0x100324750*/
      v27 = v26; /*0x100324754*/
      v15 = v26 - v14; /*0x100324758*/
      v16 = v14 + v13; /*0x10032475b*/
      if ( v26 != v14 ) /*0x100324761*/
        goto LABEL_17; /*0x100324761*/
      goto LABEL_23; /*0x100324761*/
    }
    if ( HIBYTE(v31) ) /*0x100324774*/
      break; /*0x100324774*/
    HIBYTE(v31) = 1; /*0x10032477a*/
    v15 = v28 - v27; /*0x100324786*/
    if ( ((unsigned __int8)v31 | (v28 != v27)) != 1 ) /*0x100324791*/
      break; /*0x100324791*/
    v16 = v29[0] + v27; /*0x100324797*/
    if ( v15 ) /*0x10032479e*/
    {
LABEL_17:
      if ( *(_BYTE *)(v16 + v15 - 1) == 10 ) /*0x1003247a6*/
      {
        if ( v15 == 1 ) /*0x1003247ae*/
        {
          v15 = 0; /*0x1003247be*/
        }
        else if ( *(_BYTE *)(v16 + v15 - 2) == 13 ) /*0x1003247b6*/
        {
          v15 -= 2; /*0x1003247b8*/
        }
        else
        {
          --v15; /*0x1003247c2*/
        }
      }
    }
LABEL_23:
    v17 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v16, v15); /*0x1003247d0*/
    if ( v18 ) /*0x1003247db*/
    {
      if ( v17->i8[0] == 91 ) /*0x1003247e4*/
      {
        if ( v18 == 10 ) /*0x10032486e*/
        {
          v12 = (v17->i64[0] ^ 0x657275746165665BLL | v17->u16[4] ^ 0x5D73LL) == 0; /*0x100324895*/
          if ( HIBYTE(v31) ) /*0x100324898*/
            break; /*0x100324898*/
        }
        else
        {
          v12 = 0; /*0x1003248b9*/
          if ( HIBYTE(v31) ) /*0x1003248bc*/
            break; /*0x1003248bc*/
        }
      }
      else
      {
        if ( !v12 ) /*0x1003247ee*/
          goto LABEL_10; /*0x1003247ee*/
        if ( v18 >= 0x10 ) /*0x1003247fb*/
        {
          v19 = _mm_xor_si128(_mm_loadu_si128(v17), (__m128i)xmmword_1015E35C0); /*0x100324805*/
          if ( _mm_testz_si128(v19, v19) ) /*0x10032480d*/
          {
            v20 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(&v17[1], v18 - 16); /*0x100324823*/
            if ( v21 ) /*0x10032482b*/
            {
              if ( *v20 == 61 ) /*0x100324830*/
              {
                v22 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v20 + 1, v21 - 1); /*0x10032483e*/
                if ( v23 == 5 && !(*(_DWORD *)v22 ^ 0x736C6166 | *(unsigned __int8 *)(v22 + 4) ^ 0x65) ) /*0x10032485d*/
                {
                  LOBYTE(v11) = 1; /*0x1003248ed*/
                  if ( v2 ) /*0x1003248f3*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v2, 1); /*0x100324901*/
                  return (unsigned int)v11; /*0x100324906*/
                }
                goto LABEL_10; /*0x10032485f*/
              }
            }
          }
        }
LABEL_36:
        v12 = 1; /*0x1003248a3*/
        if ( HIBYTE(v31) ) /*0x1003248aa*/
          break; /*0x1003248aa*/
      }
    }
    else
    {
      if ( v12 ) /*0x100324720*/
        goto LABEL_36; /*0x100324724*/
LABEL_10:
      if ( HIBYTE(v31) ) /*0x10032472e*/
        break; /*0x10032472e*/
    }
  }
  if ( !v2 ) /*0x1003248c5*/
    goto LABEL_42; /*0x1003248c5*/
  v8 = 1; /*0x1003248c7*/
  v9 = v32; /*0x1003248cc*/
  v7 = v2; /*0x1003248d0*/
LABEL_41:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v7, v8); /*0x1003248d3*/
LABEL_42:
  LODWORD(v11) = 0; /*0x1003248d8*/
  return (unsigned int)v11; /*0x1003248de*/
}