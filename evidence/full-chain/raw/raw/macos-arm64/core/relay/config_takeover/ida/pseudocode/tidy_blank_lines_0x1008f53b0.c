// __ZN13codexmate_lib4core5relay15config_takeover16tidy_blank_lines @ 0x1008f53b0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::config_takeover::tidy_blank_lines::ha2f63e114ed499f6(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  size_t v11; // r12
  char *v12; // r14
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 i; // rcx
  size_t v16; // rax
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // r9
  size_t v20; // r12
  size_t v21; // rax
  __int64 *result; // rax
  __int64 v23; // rdx
  int v24[4]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+10h] [rbp-A0h]
  __int64 *v26; // [rsp+18h] [rbp-98h]
  __int64 v27; // [rsp+20h] [rbp-90h]
  __int64 v28; // [rsp+28h] [rbp-88h]
  _QWORD v29[5]; // [rsp+30h] [rbp-80h] BYREF
  char v30; // [rsp+58h] [rbp-58h]
  __int16 v31; // [rsp+60h] [rbp-50h]
  __int64 v32; // [rsp+68h] [rbp-48h]
  __int64 v33; // [rsp+70h] [rbp-40h] BYREF
  __int64 v34; // [rsp+78h] [rbp-38h]
  size_t v35; // [rsp+80h] [rbp-30h]

  if ( a3 < 0 ) /*0x1008f53ca*/
  {
    v4 = 0; /*0x1008f53cc*/
    goto LABEL_3; /*0x1008f53cc*/
  }
  v26 = a1; /*0x1008f53da*/
  if ( a3 ) /*0x1008f53e1*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1008f53e6*/
    v4 = 1; /*0x1008f53eb*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1008f53f9*/
    if ( !v5 ) /*0x1008f5401*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x1008f53cf*/
  }
  else
  {
    v5 = 1; /*0x1008f5408*/
  }
  v33 = a3; /*0x1008f540d*/
  v32 = v5; /*0x1008f5411*/
  v34 = v5; /*0x1008f5415*/
  v35 = 0; /*0x1008f5419*/
  v27 = 0; /*0x1008f5421*/
  v28 = a3; /*0x1008f542c*/
  v29[0] = a2; /*0x1008f5433*/
  v29[1] = a3; /*0x1008f5437*/
  v29[2] = 0; /*0x1008f543b*/
  v29[3] = a3; /*0x1008f5443*/
  v29[4] = 0xA0000000ALL; /*0x1008f5451*/
  v30 = 1; /*0x1008f5455*/
  v31 = 0; /*0x1008f5459*/
  v6 = 0; /*0x1008f545f*/
  v7 = 0; /*0x1008f5461*/
  do /*0x1008f55ee*/
  {
    v8 = 0; /*0x1008f5464*/
    while ( 1 ) /*0x1008f5470*/
    {
      v9 = v29[0]; /*0x1008f5470*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1008f547f*/
        v24,
        v29);
      if ( v24[0] == 1 ) /*0x1008f548b*/
      {
        v10 = v27; /*0x1008f5494*/
        v27 = v25; /*0x1008f549b*/
        v11 = v25 - v10; /*0x1008f54a2*/
        v12 = (char *)(v10 + v9); /*0x1008f54a5*/
        if ( v25 == v10 ) /*0x1008f54ab*/
          goto LABEL_22; /*0x1008f54ab*/
LABEL_16:
        if ( v12[v11 - 1] == 10 ) /*0x1008f54ec*/
        {
          if ( v11 == 1 ) /*0x1008f54f4*/
          {
            v11 = 0; /*0x1008f5504*/
          }
          else if ( v12[v11 - 2] == 13 ) /*0x1008f54fc*/
          {
            v11 -= 2LL; /*0x1008f54fe*/
          }
          else
          {
            --v11; /*0x1008f5509*/
          }
        }
        goto LABEL_22; /*0x1008f5502*/
      }
      if ( HIBYTE(v31) ) /*0x1008f54b4*/
        goto LABEL_34; /*0x1008f54b4*/
      HIBYTE(v31) = 1; /*0x1008f54ba*/
      v11 = v28 - v27; /*0x1008f54cc*/
      if ( ((unsigned __int8)v31 | (v28 != v27)) != 1 ) /*0x1008f54d7*/
        goto LABEL_34; /*0x1008f54d7*/
      v12 = (char *)(v29[0] + v27); /*0x1008f54dd*/
      if ( v11 ) /*0x1008f54e4*/
        goto LABEL_16; /*0x1008f54e4*/
LABEL_22:
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v12, v11); /*0x1008f5516*/
      if ( v14 ) /*0x1008f551e*/
        break; /*0x1008f551e*/
      v8 += v7; /*0x1008f5520*/
      if ( HIBYTE(v31) ) /*0x1008f5527*/
        goto LABEL_34; /*0x1008f5527*/
    }
    for ( i = v32; v8; --v8 ) /*0x1008f5547*/
    {
      v16 = v6; /*0x1008f5550*/
      if ( v6 == v33 ) /*0x1008f5557*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v33, v6, 1, 1, 1, v13); /*0x1008f5582*/
        i = v34; /*0x1008f5587*/
        v16 = v35; /*0x1008f558b*/
      }
      *(_BYTE *)(i + v16) = 10; /*0x1008f5559*/
      v35 = ++v6; /*0x1008f5560*/
    }
    v17 = v33; /*0x1008f55a0*/
    if ( v11 > v33 - v6 ) /*0x1008f55ad*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v33, v6, v11, 1, 1, v13); /*0x1008f560b*/
      v17 = v33; /*0x1008f5610*/
      v6 = v35; /*0x1008f5614*/
    }
    v18 = v34; /*0x1008f55af*/
    memcpy((void *)(v34 + v6), v12, v11); /*0x1008f55bd*/
    v20 = v6 + v11; /*0x1008f55c2*/
    v35 = v20; /*0x1008f55c5*/
    v21 = v20; /*0x1008f55c9*/
    if ( v17 == v20 ) /*0x1008f55cf*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v33, v17, 1, 1, 1, v19); /*0x1008f5631*/
      v18 = v34; /*0x1008f5636*/
      v21 = v35; /*0x1008f563a*/
    }
    v32 = v18; /*0x1008f55d1*/
    *(_BYTE *)(v18 + v21) = 10; /*0x1008f55d5*/
    v35 = v20 + 1; /*0x1008f55dd*/
    v7 = 1; /*0x1008f55e1*/
    v6 = v20 + 1; /*0x1008f55eb*/
  }
  while ( !HIBYTE(v31) ); /*0x1008f55ee*/
LABEL_34:
  result = v26; /*0x1008f5640*/
  v26[2] = v35; /*0x1008f564b*/
  v23 = v33; /*0x1008f564f*/
  result[1] = v34; /*0x1008f5657*/
  *result = v23; /*0x1008f565b*/
  return result; /*0x1008f565e*/
}