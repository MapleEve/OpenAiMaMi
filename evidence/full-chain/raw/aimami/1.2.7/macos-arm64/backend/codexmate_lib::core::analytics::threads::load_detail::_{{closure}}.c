// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::load_detail::_$u7b$$u7b$closure$u7d$$u7d$::ha3004fde5a38977f; addr: 0x1008a99b0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
void *__fastcall codexmate_lib::core::analytics::threads::load_detail::_$u7b$$u7b$closure$u7d$$u7d$::ha3004fde5a38977f(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r14
  size_t v16; // rdx
  __int64 v17; // r13
  int v18; // eax
  char v19; // cl
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r13
  char v23; // r14
  char v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rax
  void *result; // rax
  _QWORD __dst[32]; // [rsp+8h] [rbp-2C8h] BYREF
  _QWORD __src[25]; // [rsp+108h] [rbp-1C8h] BYREF
  _QWORD v32[3]; // [rsp+1D0h] [rbp-100h] BYREF
  __int64 v33; // [rsp+1E8h] [rbp-E8h]
  __int64 v34; // [rsp+1F0h] [rbp-E0h]
  __int64 v35; // [rsp+1F8h] [rbp-D8h]
  __int64 v36; // [rsp+200h] [rbp-D0h]
  __int64 v37; // [rsp+208h] [rbp-C8h]
  __int64 v38; // [rsp+210h] [rbp-C0h]
  __int64 v39; // [rsp+218h] [rbp-B8h]
  __int64 v40; // [rsp+220h] [rbp-B0h]
  __int64 v41; // [rsp+228h] [rbp-A8h]
  _QWORD *v42; // [rsp+230h] [rbp-A0h]
  __int64 v43; // [rsp+238h] [rbp-98h]
  __int64 v44; // [rsp+240h] [rbp-90h] BYREF
  __int64 v45; // [rsp+248h] [rbp-88h]
  __int64 v46; // [rsp+250h] [rbp-80h]
  __int64 v47; // [rsp+258h] [rbp-78h] BYREF
  __int64 v48; // [rsp+260h] [rbp-70h]
  __int64 v49; // [rsp+268h] [rbp-68h]
  size_t __n; // [rsp+270h] [rbp-60h]
  void *__s1; // [rsp+278h] [rbp-58h]
  __int64 v52; // [rsp+280h] [rbp-50h]
  __int64 v53; // [rsp+288h] [rbp-48h]
  __int64 v54; // [rsp+290h] [rbp-40h]
  __int64 v55; // [rsp+298h] [rbp-38h]
  __int64 *v56; // [rsp+2A0h] [rbp-30h]

  v5 = a5; /*0x1008a99c4*/
  v6 = a4; /*0x1008a99c7*/
  __n = a3; /*0x1008a99ca*/
  __s1 = a2; /*0x1008a99ce*/
  v7 = a1; /*0x1008a99d2*/
  v8 = *(_QWORD *)(a4 + 48); /*0x1008a99d5*/
  v9 = 2; /*0x1008a99d9*/
  if ( v8 ) /*0x1008a99e1*/
  {
    v42 = a1; /*0x1008a99e7*/
    v56 = a5; /*0x1008a99ee*/
    v43 = v6; /*0x1008a99f2*/
    v55 = *(_QWORD *)(v6 + 56); /*0x1008a99fd*/
    while ( 2 ) /*0x1008a9a01*/
    {
      v10 = v8 + 2824; /*0x1008a9a01*/
      v11 = *(unsigned __int16 *)(v8 + 3090); /*0x1008a9a08*/
      v54 = v8; /*0x1008a9a0f*/
      v12 = (char *)(v8 - 55); /*0x1008a9a13*/
      v52 = v11; /*0x1008a9a17*/
      v13 = 3LL * (unsigned int)(8 * v11); /*0x1008a9a22*/
      v14 = -1; /*0x1008a9a26*/
      v15 = 0; /*0x1008a9a2d*/
      do /*0x1008a9a8b*/
      {
        if ( !v13 ) /*0x1008a9a33*/
        {
          v14 = v52; /*0x1008a9aa0*/
          goto LABEL_13; /*0x1008a9aa0*/
        }
        v53 = v10 + 24; /*0x1008a9a39*/
        v16 = *(_QWORD *)(v10 + 16); /*0x1008a9a41*/
        v17 = __n - v16; /*0x1008a9a4c*/
        if ( __n < v16 ) /*0x1008a9a4f*/
          v16 = __n; /*0x1008a9a4f*/
        v18 = memcmp(__s1, *(const void **)(v10 + 8), v16); /*0x1008a9a57*/
        if ( v18 ) /*0x1008a9a60*/
          v17 = v18; /*0x1008a9a60*/
        v19 = (v17 > 0) - (v17 < 0); /*0x1008a9a6d*/
        v12 += 256; /*0x1008a9a6f*/
        v15 -= 256; /*0x1008a9a76*/
        ++v14; /*0x1008a9a7d*/
        v13 -= 24; /*0x1008a9a80*/
        v10 = v53; /*0x1008a9a84*/
      }
      while ( v19 == 1 ); /*0x1008a9a8b*/
      if ( !v19 ) /*0x1008a9a92*/
      {
        v20 = v54 - v15; /*0x1008a9acb*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v32, v54 - v15 - 128); /*0x1008a9ad9*/
        v53 = *(_QWORD *)(v12 - 201); /*0x1008a9ae5*/
        __n = *(_QWORD *)(v12 - 193); /*0x1008a9af0*/
        __s1 = *(void **)(v12 - 185); /*0x1008a9afb*/
        v21 = *(_QWORD *)(v12 - 177); /*0x1008a9aff*/
        v22 = *(_QWORD *)(v12 - 169); /*0x1008a9b06*/
        v55 = *(_QWORD *)(v12 - 161); /*0x1008a9b14*/
        v52 = *(_QWORD *)(v12 - 153); /*0x1008a9b1f*/
        v33 = *(_QWORD *)(v12 - 145); /*0x1008a9b2a*/
        v34 = *(_QWORD *)(v12 - 137); /*0x1008a9b38*/
        v35 = *(_QWORD *)(v12 - 129); /*0x1008a9b46*/
        v36 = *(_QWORD *)(v12 - 121); /*0x1008a9b51*/
        v37 = *(_QWORD *)(v12 - 113); /*0x1008a9b5c*/
        v38 = *(_QWORD *)(v12 - 105); /*0x1008a9b67*/
        v39 = *(_QWORD *)(v12 - 97); /*0x1008a9b72*/
        v40 = *(_QWORD *)(v12 - 89); /*0x1008a9b7d*/
        v41 = *(_QWORD *)(v12 - 81); /*0x1008a9b88*/
        v54 = v20; /*0x1008a9b8f*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd97c34bed526d814(&v47, v20 - 104); /*0x1008a9b9b*/
        v23 = *(v12 - 1); /*0x1008a9ba0*/
        v24 = *v12; /*0x1008a9ba5*/
        if ( *(_QWORD *)(v12 - 9) ) /*0x1008a9ba9*/
        {
          v25 = *(_QWORD *)(v12 - 25); /*0x1008a9bb0*/
          if ( !v25 ) /*0x1008a9bb7*/
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_f3f46b48c4f9c057aa63801556530189_876); /*0x1008a9e56*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h0ddc876726f88c44( /*0x1008a9bc8*/
            &v44,
            v25,
            *(_QWORD *)(v12 - 17));
        }
        else
        {
          v44 = 0; /*0x1008a9bcf*/
          v46 = 0; /*0x1008a9bda*/
        }
        __src[23] = v46; /*0x1008a9be6*/
        __src[22] = v45; /*0x1008a9bf4*/
        __src[21] = v44; /*0x1008a9c02*/
        __src[15] = v32[0]; /*0x1008a9c10*/
        __src[16] = v32[1]; /*0x1008a9c1e*/
        __src[17] = v32[2]; /*0x1008a9c2c*/
        __dst[31] = v53; /*0x1008a9c37*/
        __src[0] = __n; /*0x1008a9c42*/
        __src[1] = __s1; /*0x1008a9c4d*/
        __src[2] = v21; /*0x1008a9c54*/
        __src[3] = v22; /*0x1008a9c5b*/
        __src[4] = v55; /*0x1008a9c66*/
        __src[5] = v52; /*0x1008a9c71*/
        __src[6] = v33; /*0x1008a9c7f*/
        __src[7] = v34; /*0x1008a9c8d*/
        __src[8] = v35; /*0x1008a9c9b*/
        __src[9] = v36; /*0x1008a9ca9*/
        __src[10] = v37; /*0x1008a9cb7*/
        __src[11] = v38; /*0x1008a9cc5*/
        __src[12] = v39; /*0x1008a9cd3*/
        __src[13] = v40; /*0x1008a9ce1*/
        __src[14] = v41; /*0x1008a9cef*/
        __src[20] = v49; /*0x1008a9cfa*/
        __src[19] = v48; /*0x1008a9d05*/
        __src[18] = v47; /*0x1008a9d10*/
        LOBYTE(__src[24]) = v23; /*0x1008a9d17*/
        BYTE1(__src[24]) = v24; /*0x1008a9d1e*/
        v26 = v54; /*0x1008a9d25*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd97c34bed526d814(&v47, v54 - 48); /*0x1008a9d31*/
        v5 = v56; /*0x1008a9d44*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd97c34bed526d814(&v44, v26 - 24); /*0x1008a9d48*/
        v7 = v42; /*0x1008a9d4d*/
        v6 = v43; /*0x1008a9d54*/
        memcpy(__dst, __src, 0xC8u); /*0x1008a9d6e*/
        __dst[25] = v47; /*0x1008a9d7b*/
        __dst[26] = v48; /*0x1008a9d82*/
        __dst[27] = v49; /*0x1008a9d8d*/
        __dst[28] = v44; /*0x1008a9da2*/
        __dst[29] = v45; /*0x1008a9da9*/
        __dst[30] = v46; /*0x1008a9db4*/
        v9 = v53; /*0x1008a9dbb*/
        goto LABEL_20; /*0x1008a9dbb*/
      }
LABEL_13:
      if ( v55 ) /*0x1008a9aac*/
      {
        --v55; /*0x1008a9ab2*/
        v8 = *(_QWORD *)(v54 + 8 * v14 + 3096); /*0x1008a9aba*/
        continue; /*0x1008a9ac2*/
      }
      break;
    }
    v5 = v56; /*0x1008a9e33*/
    v7 = v42; /*0x1008a9e37*/
    v6 = v43; /*0x1008a9e3e*/
    v9 = 2; /*0x1008a9e45*/
  }
LABEL_20:
  v27 = *(_QWORD *)(v6 + 40); /*0x1008a9dbf*/
  v7[7] = v5[7]; /*0x1008a9dc7*/
  v7[6] = v5[6]; /*0x1008a9dcf*/
  v7[5] = v5[5]; /*0x1008a9dd7*/
  v7[4] = v5[4]; /*0x1008a9ddf*/
  v7[3] = v5[3]; /*0x1008a9de7*/
  v7[2] = v5[2]; /*0x1008a9def*/
  v28 = *v5; /*0x1008a9df3*/
  v7[1] = v5[1]; /*0x1008a9dfa*/
  *v7 = v28; /*0x1008a9dfe*/
  v7[8] = v9; /*0x1008a9e01*/
  result = memcpy(v7 + 9, __dst, 0xF8u); /*0x1008a9e15*/
  v7[40] = v27; /*0x1008a9e1a*/
  return result; /*0x1008a9e21*/
}