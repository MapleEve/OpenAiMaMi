// __ZN13codexmate_lib4core5relay16codex_diagnostic25find_third_party_base_url @ 0x1004f3ac0 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::find_third_party_base_url::h66db96e52908178a(
        unsigned __int64 *a1,
        __int64 a2,
        _BYTE *a3)
{
  char v3; // r12
  bool v4; // r14
  __int64 v5; // r15
  _BYTE *v6; // rcx
  char *v7; // rax
  char *v8; // r15
  char *v9; // rsi
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r13
  bool v13; // al
  __m128i v14; // xmm2
  bool v15; // zf
  size_t v16; // rdx
  const void *v17; // rdi
  const void *v18; // rsi
  _BYTE *v19; // r15
  signed __int64 v20; // rsi
  char *v21; // r15
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r15
  unsigned __int64 result; // rax
  unsigned __int64 *v29; // rdx
  int v30; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+8h] [rbp-D8h]
  _BYTE *v32; // [rsp+10h] [rbp-D0h]
  _BYTE *v33; // [rsp+18h] [rbp-C8h]
  _BYTE *v34; // [rsp+20h] [rbp-C0h]
  _QWORD v35[5]; // [rsp+28h] [rbp-B8h] BYREF
  char v36; // [rsp+50h] [rbp-90h]
  __int16 v37; // [rsp+58h] [rbp-88h]
  unsigned __int64 *v38; // [rsp+60h] [rbp-80h]
  __int64 v39; // [rsp+68h] [rbp-78h] BYREF
  void *__s1; // [rsp+70h] [rbp-70h]
  _BYTE *v41; // [rsp+78h] [rbp-68h]
  _QWORD v42[5]; // [rsp+80h] [rbp-60h] BYREF
  char v43; // [rsp+A8h] [rbp-38h]
  __int16 v44; // [rsp+B0h] [rbp-30h]

  v38 = a1; /*0x1004f3ad4*/
  v33 = nullptr; /*0x1004f3ad8*/
  v34 = a3; /*0x1004f3ae3*/
  v35[0] = a2; /*0x1004f3aea*/
  v35[1] = a3; /*0x1004f3af1*/
  v35[2] = 0; /*0x1004f3af8*/
  v35[3] = a3; /*0x1004f3b03*/
  v35[4] = 0xA0000000ALL; /*0x1004f3b14*/
  v36 = 1; /*0x1004f3b1b*/
  v37 = 0; /*0x1004f3b22*/
  v3 = 0; /*0x1004f3b2b*/
  v4 = 0; /*0x1004f3b35*/
  while ( 2 ) /*0x1004f3b52*/
  {
    v5 = v35[0]; /*0x1004f3b52*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004f3b64*/
      &v39,
      v35);
    if ( (_DWORD)v39 == 1 ) /*0x1004f3b6d*/
    {
      v6 = v33; /*0x1004f3b73*/
      v33 = v41; /*0x1004f3b7a*/
      v7 = (char *)(v41 - v6); /*0x1004f3b81*/
      v8 = &v6[v5]; /*0x1004f3b84*/
      if ( v41 == v6 ) /*0x1004f3b8a*/
        goto LABEL_14; /*0x1004f3b8a*/
    }
    else
    {
      if ( HIBYTE(v37) || (HIBYTE(v37) = 1, v7 = (char *)(v34 - v33), ((unsigned __int8)v37 | (v34 != v33)) != 1) ) /*0x1004f3bc1*/
      {
LABEL_64:
        *v38 = 0x8000000000000000LL; /*0x1004f3eeb*/
        return 0x8000000000000000LL; /*0x1004f3f0d*/
      }
      v8 = &v33[v35[0]]; /*0x1004f3bc7*/
      if ( !v7 ) /*0x1004f3bd1*/
        goto LABEL_14; /*0x1004f3bd1*/
    }
    v9 = v7; /*0x1004f3bd9*/
    if ( v7[(_QWORD)v8 - 1] == 10 ) /*0x1004f3bdc*/
    {
      v9 = v7 - 1; /*0x1004f3be1*/
      if ( v7 != (char *)1 && v7[(_QWORD)v8 - 2] == 13 ) /*0x1004f3bec*/
      {
        v7 -= 2; /*0x1004f3bee*/
LABEL_14:
        v9 = v7; /*0x1004f3bf2*/
      }
    }
    v10 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v8, v9); /*0x1004f3bfd*/
    v12 = v11; /*0x1004f3c00*/
    v13 = 0; /*0x1004f3c03*/
    switch ( v11 ) /*0x1004f3c16*/
    {
      case 0x1EuLL: /*0x1004f3c16*/
        v14 = _mm_or_si128( /*0x1004f3c3b*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  _mm_loadu_si128((const __m128i *)(v10 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v10),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        v15 = _mm_testz_si128(v14, v14); /*0x1004f3c3f*/
        goto LABEL_24; /*0x1004f3c44*/
      case 0x24uLL: /*0x1004f3c16*/
        v16 = 36; /*0x1004f3c80*/
        v17 = (const void *)v10; /*0x1004f3c85*/
        v18 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99; /*0x1004f3c88*/
        goto LABEL_23; /*0x1004f3c88*/
      case 0x27uLL: /*0x1004f3c16*/
        v16 = 39; /*0x1004f3c46*/
        v17 = (const void *)v10; /*0x1004f3c4b*/
        v18 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100; /*0x1004f3c4e*/
LABEL_23:
        v15 = memcmp(v17, v18, v16) == 0; /*0x1004f3c8f*/
LABEL_24:
        v13 = v15; /*0x1004f3c96*/
        if ( !(v15 | v3 & 1) ) /*0x1004f3c9c*/
          goto LABEL_25; /*0x1004f3ca0*/
        goto LABEL_2; /*0x1004f3ca0*/
      case 0x37uLL: /*0x1004f3c16*/
        if ( !memcmp((const void *)v10, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) ) /*0x1004f3cd5*/
          goto LABEL_31; /*0x1004f3cdc*/
        goto LABEL_19; /*0x1004f3cdc*/
      case 0x3CuLL: /*0x1004f3c16*/
        if ( !memcmp((const void *)v10, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) ) /*0x1004f3cf5*/
          goto LABEL_31; /*0x1004f3cfc*/
        goto LABEL_19; /*0x1004f3cfc*/
      case 0x40uLL: /*0x1004f3c16*/
        if ( !memcmp((const void *)v10, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) ) /*0x1004f3c6d*/
        {
LABEL_31:
          v3 = 1; /*0x1004f3cde*/
          goto LABEL_3; /*0x1004f3ce1*/
        }
LABEL_19:
        v13 = 0; /*0x1004f3c6f*/
LABEL_20:
        if ( (v3 & 1) != 0 ) /*0x1004f3c78*/
        {
LABEL_2:
          v3 = !v13; /*0x1004f3b40*/
LABEL_3:
          if ( HIBYTE(v37) ) /*0x1004f3b4c*/
            goto LABEL_64; /*0x1004f3b4c*/
          continue; /*0x1004f3b4c*/
        }
LABEL_25:
        if ( !v12 ) /*0x1004f3ca9*/
        {
          if ( v4 ) /*0x1004f3cbb*/
            goto LABEL_35; /*0x1004f3cbf*/
          goto LABEL_53; /*0x1004f3cbf*/
        }
        if ( *(_BYTE *)v10 == 91 ) /*0x1004f3cb1*/
        {
          v4 = 1; /*0x1004f3cb3*/
LABEL_54:
          v3 = 0; /*0x1004f3e21*/
          goto LABEL_3; /*0x1004f3e24*/
        }
        if ( v4 ) /*0x1004f3d04*/
        {
LABEL_35:
          v4 = v12 != 0; /*0x1004f3d0a*/
          goto LABEL_54; /*0x1004f3d11*/
        }
        if ( *(_BYTE *)v10 == 35 /*0x1004f3d4b*/
          || v12 < 0xF
          || *(_QWORD *)v10 ^ 0x625F69616E65706FLL | *(_QWORD *)(v10 + 7) ^ 0x6C72755F65736162LL )
        {
LABEL_53:
          v4 = 0; /*0x1004f3e1e*/
          goto LABEL_54; /*0x1004f3e1e*/
        }
        __s1 = nullptr; /*0x1004f3d54*/
        v41 = (_BYTE *)v12; /*0x1004f3d5c*/
        v42[0] = v10; /*0x1004f3d60*/
        v42[1] = v12; /*0x1004f3d64*/
        v42[2] = 0; /*0x1004f3d68*/
        v42[3] = v12; /*0x1004f3d70*/
        v42[4] = 0x3D0000003DLL; /*0x1004f3d7e*/
        v43 = 1; /*0x1004f3d82*/
        v44 = 1; /*0x1004f3d86*/
        v39 = 1; /*0x1004f3d8c*/
        _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004f3d9f*/
          &v30,
          v42);
        if ( v30 == 1 ) /*0x1004f3dab*/
        {
          v19 = v32; /*0x1004f3dad*/
          __s1 = v32; /*0x1004f3db4*/
          goto LABEL_40; /*0x1004f3db4*/
        }
        if ( HIBYTE(v44) ) /*0x1004f3de9*/
          goto LABEL_52; /*0x1004f3de9*/
        HIBYTE(v44) = 1; /*0x1004f3deb*/
        v19 = __s1; /*0x1004f3def*/
        if ( !(_BYTE)v44 && v41 == __s1 ) /*0x1004f3dfd*/
          goto LABEL_52; /*0x1004f3dfd*/
LABEL_40:
        if ( !v39 ) /*0x1004f3dbf*/
          goto LABEL_52; /*0x1004f3dbf*/
        if ( v39 == 1 ) /*0x1004f3dc5*/
        {
          if ( !HIBYTE(v44) && ((_BYTE)v44 || v41 != v19) ) /*0x1004f3dda*/
          {
            v20 = v41 - v19; /*0x1004f3ddc*/
            goto LABEL_46; /*0x1004f3ddc*/
          }
LABEL_52:
          v39 = 0; /*0x1004f3e0e*/
          __s1 = (void *)1; /*0x1004f3e16*/
          goto LABEL_53; /*0x1004f3e16*/
        }
        --v39; /*0x1004f3e04*/
        if ( HIBYTE(v44) ) /*0x1004f3e0c*/
          goto LABEL_52; /*0x1004f3e0c*/
        v22 = v42[0]; /*0x1004f3e29*/
        _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004f3e38*/
          &v30,
          v42);
        if ( v30 == 1 ) /*0x1004f3e44*/
        {
          v20 = v31 - (_QWORD)__s1; /*0x1004f3e51*/
          v21 = (char *)__s1 + v22; /*0x1004f3e54*/
        }
        else
        {
          if ( HIBYTE(v44) ) /*0x1004f3ec7*/
            goto LABEL_52; /*0x1004f3ec7*/
          v19 = __s1; /*0x1004f3ecd*/
          v20 = v41 - (_BYTE *)__s1; /*0x1004f3ed5*/
          if ( ((unsigned __int8)v44 | (v41 != __s1)) != 1 ) /*0x1004f3ee0*/
            goto LABEL_52; /*0x1004f3ee0*/
LABEL_46:
          v21 = &v19[v42[0]]; /*0x1004f3ddf*/
        }
        v23 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21, v20); /*0x1004f3e5a*/
        v25 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v23, v24, 34); /*0x1004f3e6a*/
        v27 = v26; /*0x1004f3e6f*/
        codexmate_lib::core::relay::codex_diagnostic::unescape_toml_basic_string::h71fa7a97db3de3a3(&v39, v25); /*0x1004f3e79*/
        if ( !v27 /*0x1004f3e9a*/
          || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                "/codex/router/v1xy-authorizationproxy-authorizatproxy-authenticate",
                                0x10u,
                                __s1) )
        {
          if ( v39 ) /*0x1004f3eaa*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v39, 1); /*0x1004f3eb9*/
          goto LABEL_53; /*0x1004f3ebe*/
        }
        v29 = v38; /*0x1004f3f12*/
        v38[2] = (unsigned __int64)v41; /*0x1004f3f16*/
        result = v39; /*0x1004f3f1a*/
        v29[1] = (unsigned __int64)__s1; /*0x1004f3f22*/
        *v29 = result; /*0x1004f3f26*/
        return result;
      default:
        goto LABEL_20;
    }
  }
}