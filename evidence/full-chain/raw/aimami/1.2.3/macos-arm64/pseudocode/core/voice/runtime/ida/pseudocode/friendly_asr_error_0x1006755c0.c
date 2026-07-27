// __ZN13codexmate_lib4core5voice7runtime18friendly_asr_error @ 0x1006755c0 | 基线 same-set
void __fastcall codexmate_lib::core::voice::runtime::friendly_asr_error::hded542bba6d15307(
        signed __int64 *a1,
        const void *a2,
        size_t a3)
{
  signed __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r14
  __m128i v11; // xmm1
  void *v12; // rax
  __int64 v13; // r15
  __int64 v14; // [rsp+0h] [rbp-40h] BYREF
  const __m128i *v15; // [rsp+8h] [rbp-38h]
  __int64 v16; // [rsp+10h] [rbp-30h]

  v3 = a3; /*0x1006755d1*/
  codexmate_lib::core::voice::runtime::classify_asr_error::hf198f9c48248a5db(&v14, a2, a3); /*0x1006755de*/
  v4 = v14; /*0x1006755e3*/
  if ( __OFSUB__(-v14, 1) ) /*0x1006755ea*/
    goto LABEL_2; /*0x1006755ed*/
  switch ( v16 ) /*0x100675627*/
  {
    case 9LL: /*0x100675627*/
      if ( v15->i64[0] ^ 0x63656570735F6F6ELL | v15->u8[8] ^ 0x68LL ) /*0x10067563e*/
        goto LABEL_2; /*0x100675641*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v14, a2); /*0x100675643*/
      v3 = 18; /*0x100675648*/
      v5 = 1; /*0x10067564e*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x10067565d*/
      if ( !v6 ) /*0x100675665*/
        goto LABEL_4; /*0x100675665*/
      v7 = v4; /*0x100675667*/
      *(_QWORD *)(v6 + 8) = 0xE9ADAFE8B088E58BLL; /*0x100675674*/
      *(_QWORD *)v6 = 0xB5E680A3E6AA9CE6LL; /*0x100675682*/
      *(_WORD *)(v6 + 16) = -19553; /*0x100675685*/
      v8 = 18; /*0x10067568b*/
      goto LABEL_28; /*0x100675691*/
    case 11LL: /*0x100675627*/
      if ( v15->i64[0] ^ 0x6961665F68747561LL | *(__int64 *)((char *)v15->i64 + 3) ^ 0x64656C6961665F68LL ) /*0x100675802*/
        goto LABEL_2; /*0x100675805*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v14, a2); /*0x10067580b*/
      v3 = 49; /*0x100675810*/
      v5 = 1; /*0x100675816*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x100675825*/
      if ( !v6 ) /*0x10067582d*/
        goto LABEL_4; /*0x10067582d*/
      v7 = v4; /*0x100675833*/
      *(_QWORD *)(v6 + 40) = 0x80E379654B204950LL; /*0x100675840*/
      *(_QWORD *)(v6 + 32) = 0x412065706F635368LL; /*0x10067584e*/
      *(_QWORD *)(v6 + 24) = 0x73614420A59FE680LL; /*0x10067585c*/
      *(_QWORD *)(v6 + 16) = 0xA3E6B7AFE88CBCEFLL; /*0x10067586a*/
      *(_QWORD *)(v6 + 8) = 0xA5B4E8B1A4E581AFLL; /*0x100675878*/
      *(_QWORD *)v6 = 0xE8A4AEE820525341LL; /*0x100675886*/
      *(_BYTE *)(v6 + 48) = -126; /*0x100675889*/
      v8 = 49; /*0x10067588d*/
      goto LABEL_28; /*0x100675893*/
    case 15LL: /*0x100675627*/
      if ( v15->i64[0] ^ 0x78655F61746F7571LL | *(__int64 *)((char *)v15->i64 + 7) ^ 0x6465747375616878LL ) /*0x10067572a*/
      {
        if ( v15->i64[0] ^ 0x5F6B726F7774656ELL | *(__int64 *)((char *)v15->i64 + 7) ^ 0x74756F656D69745FLL ) /*0x10067574e*/
        {
LABEL_2:
          if ( v3 < 0 ) /*0x1006755f2*/
          {
            v5 = 0; /*0x1006755f8*/
            goto LABEL_4; /*0x1006755f8*/
          }
          v7 = v14; /*0x100675696*/
          if ( !v3 ) /*0x100675699*/
          {
            v10 = 1; /*0x1006756bb*/
            goto LABEL_13; /*0x1006756bb*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v14, a2); /*0x10067569b*/
          v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1); /*0x1006756a8*/
          if ( v9 ) /*0x1006756b0*/
          {
            v10 = v9; /*0x1006756b6*/
LABEL_13:
            memcpy((void *)v10, a2, v3); /*0x1006756c1*/
            *a1 = v3; /*0x1006756d5*/
            a1[1] = v10; /*0x1006756d9*/
            a1[2] = v3; /*0x1006756dd*/
            if ( !__OFSUB__(-v7, 1) && v7 ) /*0x1006756ea*/
              goto LABEL_15; /*0x1006756ea*/
            return; /*0x1006756ea*/
          }
          v5 = 1; /*0x1006759d7*/
LABEL_4:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v3); /*0x1006755fa*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v14, a2); /*0x100675757*/
        v3 = 52; /*0x10067575c*/
        v5 = 1; /*0x100675762*/
        v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x100675771*/
        if ( !v6 ) /*0x100675779*/
          goto LABEL_4; /*0x100675779*/
        v7 = v4; /*0x10067577f*/
        *(_QWORD *)(v6 + 40) = 0xB5E68688E58690E7LL; /*0x10067578c*/
        *(_QWORD *)(v6 + 32) = 0xA3BBE49688E69CBBLL; /*0x10067579a*/
        *(_QWORD *)(v6 + 24) = 0xE791BDE7A59FE680LL; /*0x1006757a8*/
        *(_QWORD *)(v6 + 16) = 0xA3E6B7AFE88CBCEFLL; /*0x1006757b6*/
        *(_QWORD *)(v6 + 8) = 0xB697E685B6E89CBBLL; /*0x1006757c4*/
        *(_QWORD *)v6 = 0xE791BDE720525341LL; /*0x1006757d2*/
        *(_DWORD *)(v6 + 48) = -2105482367; /*0x1006757d5*/
        v8 = 52; /*0x1006757dc*/
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v14, a2); /*0x100675965*/
        v3 = 67; /*0x10067596a*/
        v5 = 1; /*0x100675970*/
        v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(67, 1); /*0x10067597f*/
        if ( !v12 ) /*0x100675987*/
          goto LABEL_4; /*0x100675987*/
        v7 = v4; /*0x10067598d*/
        v8 = 67; /*0x100675997*/
        v13 = (__int64)v12; /*0x1006759a5*/
        memcpy(v12, &unk_101602D8B, 0x43u); /*0x1006759a8*/
        v6 = v13; /*0x1006759ad*/
      }
LABEL_28:
      *a1 = v8; /*0x1006759b0*/
      a1[1] = v6; /*0x1006759b4*/
      a1[2] = v8; /*0x1006759b8*/
      if ( v7 ) /*0x1006759bf*/
LABEL_15:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v7, 1); /*0x1006756f0*/
      return;
    case 17LL: /*0x100675627*/
      v11 = _mm_or_si128( /*0x1006758b4*/
              _mm_xor_si128(_mm_cvtsi32_si128(v15[1].u8[0]), (__m128i)xmmword_1015E35B0),
              _mm_xor_si128(_mm_loadu_si128(v15), (__m128i)xmmword_101601D30));
      if ( !_mm_testz_si128(v11, v11) ) /*0x1006758bd*/
        goto LABEL_2; /*0x1006758bd*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v14, a2); /*0x1006758c3*/
      v3 = 61; /*0x1006758c8*/
      v5 = 1; /*0x1006758ce*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x1006758dd*/
      if ( !v6 ) /*0x1006758e5*/
        goto LABEL_4; /*0x1006758e5*/
      v7 = v4; /*0x1006758eb*/
      *(_QWORD *)(v6 + 53) = 0x8280E3B0A7E78D90LL; /*0x1006758f8*/
      *(_QWORD *)(v6 + 48) = 0xE78D90E58B9EE5A1LL; /*0x100675906*/
      *(_QWORD *)(v6 + 40) = 0xA8E68C92E59F9FE5LL; /*0x100675914*/
      *(_QWORD *)(v6 + 32) = 0xB09CE58D89E593BDLL; /*0x100675922*/
      *(_QWORD *)(v6 + 24) = 0xE5A4AEE8AEA1E7B7LL; /*0x100675930*/
      *(_QWORD *)(v6 + 16) = 0xAFE88CBCEFA894E7LL; /*0x10067593e*/
      *(_QWORD *)(v6 + 8) = 0xAF8FE58DB8E48B9ELL; /*0x10067594c*/
      *(_QWORD *)v6 = 0xE5A1A8E620525341LL; /*0x10067595a*/
      v8 = 61; /*0x10067595d*/
      goto LABEL_28; /*0x100675963*/
    default:
      goto LABEL_2;
  }
}