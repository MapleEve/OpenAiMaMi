// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::merge::hc4e887c1382a8633; addr: 0x1007f50b0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:21Z
_QWORD *__fastcall codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::merge::hc4e887c1382a8633(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  _BOOL8 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  signed __int64 v8; // rcx
  _QWORD *v9; // r14
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // r14
  void *v13; // r15
  void *v14; // rdx
  void *v15; // r12
  unsigned __int16 *v16; // r13
  __int64 v17; // rsi
  _QWORD *result; // rax
  _QWORD *v19; // rbx
  __int64 v20; // [rsp+18h] [rbp-128h] BYREF
  _QWORD *v21; // [rsp+20h] [rbp-120h]
  __int64 v22; // [rsp+28h] [rbp-118h]
  _QWORD v23[9]; // [rsp+30h] [rbp-110h] BYREF
  void *v24; // [rsp+78h] [rbp-C8h]
  signed __int64 v25; // [rsp+80h] [rbp-C0h]
  signed __int64 v26; // [rsp+88h] [rbp-B8h]
  unsigned __int16 *v27; // [rsp+90h] [rbp-B0h]
  unsigned __int16 *v28; // [rsp+98h] [rbp-A8h]
  __int64 v29; // [rsp+A0h] [rbp-A0h]
  void *v30; // [rsp+A8h] [rbp-98h]
  signed __int64 v31; // [rsp+B0h] [rbp-90h]
  __int64 v32; // [rsp+B8h] [rbp-88h]
  _QWORD *v33; // [rsp+C0h] [rbp-80h] BYREF
  void *v34; // [rsp+C8h] [rbp-78h]
  signed __int64 v35; // [rsp+D0h] [rbp-70h]
  unsigned __int16 *v36; // [rsp+D8h] [rbp-68h]
  unsigned __int16 *v37; // [rsp+E0h] [rbp-60h]
  unsigned __int16 *v38; // [rsp+E8h] [rbp-58h]
  __int64 v39; // [rsp+F0h] [rbp-50h]
  signed __int64 v40; // [rsp+F8h] [rbp-48h]
  signed __int64 v41; // [rsp+100h] [rbp-40h]
  _QWORD *v42; // [rsp+108h] [rbp-38h]
  __int64 *v43; // [rsp+110h] [rbp-30h]

  v42 = a1; /*0x1007f50c4*/
  v2 = a2[4]; /*0x1007f50c8*/
  v43 = a2; /*0x1007f50cc*/
  v3 = a2[5]; /*0x1007f50d0*/
  v4 = v2; /*0x1007f50d6*/
  v5 = v2 != 0; /*0x1007f50dc*/
  if ( v2 ) /*0x1007f50df*/
    v4 = v43[6]; /*0x1007f50e5*/
  v23[0] = v2 != 0; /*0x1007f50f3*/
  v23[1] = 0; /*0x1007f50fa*/
  v23[2] = v2; /*0x1007f5105*/
  v23[3] = v3; /*0x1007f510c*/
  v23[4] = v23[0]; /*0x1007f5113*/
  v23[5] = 0; /*0x1007f511a*/
  v23[6] = v2; /*0x1007f5125*/
  v23[7] = v3; /*0x1007f512c*/
  v23[8] = v4; /*0x1007f5133*/
  while ( 1 ) /*0x1007f514b*/
  {
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hbb65857e14884588(&v33, v23, v5); /*0x1007f514b*/
    if ( !v33 ) /*0x1007f5157*/
      goto LABEL_21; /*0x1007f5157*/
    v6 = v33[3 * v35 + 1]; /*0x1007f5165*/
    if ( v6 == 0x8000000000000000LL ) /*0x1007f516d*/
      goto LABEL_21; /*0x1007f516d*/
    v7 = v33[3 * v35 + 2]; /*0x1007f5173*/
    v8 = 9 * v35; /*0x1007f5178*/
    v9 = (_QWORD *)v33[9 * v35 + 34]; /*0x1007f517c*/
    v10 = (_QWORD *)v33[9 * v35 + 35]; /*0x1007f5184*/
    v40 = v33[9 * v35 + 42]; /*0x1007f5194*/
    v39 = v33[9 * v35 + 41]; /*0x1007f51a0*/
    v38 = (unsigned __int16 *)v33[9 * v35 + 40]; /*0x1007f51ac*/
    v37 = (unsigned __int16 *)v33[9 * v35 + 39]; /*0x1007f51b8*/
    v36 = (unsigned __int16 *)v33[9 * v35 + 38]; /*0x1007f51c4*/
    v35 = v33[9 * v35 + 37]; /*0x1007f51d0*/
    v34 = (void *)v33[v8 + 36]; /*0x1007f51dc*/
    v33 = v10; /*0x1007f51e0*/
    if ( v6 ) /*0x1007f51e7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x1007f51ee*/
    v31 = v40; /*0x1007f51f7*/
    v30 = (void *)v39; /*0x1007f5202*/
    v29 = (__int64)v38; /*0x1007f520d*/
    v28 = v37; /*0x1007f5218*/
    v27 = v36; /*0x1007f5223*/
    v26 = v35; /*0x1007f522e*/
    v25 = (signed __int64)v34; /*0x1007f523d*/
    v24 = v33; /*0x1007f5244*/
    if ( v9 == (_QWORD *)0x8000000000000000LL ) /*0x1007f524e*/
    {
LABEL_21:
      _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdf8beb86d98b7008(v23); /*0x1007f539e*/
      v17 = *v43; /*0x1007f53a7*/
      result = nullptr; /*0x1007f53aa*/
      if ( *v43 == 0x8000000000000000LL ) /*0x1007f53af*/
        return result; /*0x1007f53af*/
      goto LABEL_22; /*0x1007f53af*/
    }
    v11 = v9; /*0x1007f5254*/
    v33 = v9; /*0x1007f5257*/
    v41 = v31; /*0x1007f5266*/
    v40 = (signed __int64)v30; /*0x1007f5271*/
    v39 = v29; /*0x1007f527c*/
    v38 = v28; /*0x1007f5287*/
    v37 = v27; /*0x1007f5292*/
    v36 = (unsigned __int16 *)v26; /*0x1007f529d*/
    v35 = v25; /*0x1007f52af*/
    v34 = v24; /*0x1007f52b3*/
    v12 = v29; /*0x1007f52b6*/
    v13 = v30; /*0x1007f52bd*/
    v14 = v30; /*0x1007f52c5*/
    if ( v29 == 0x8000000000000000LL ) /*0x1007f52cd*/
      v14 = nullptr; /*0x1007f52cd*/
    v15 = v34; /*0x1007f52d1*/
    v16 = v37; /*0x1007f52d9*/
    codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::register::h115de28204431356( /*0x1007f52f8*/
      (const char **)&v20,
      v42,
      v14,
      v31,
      v34,
      v35,
      v37,
      (__int64)v38);
    if ( v20 ) /*0x1007f5307*/
      break; /*0x1007f5307*/
LABEL_14:
    if ( 2 * v12 ) /*0x1007f5326*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1007f538b*/
      if ( !v11 ) /*0x1007f5393*/
        goto LABEL_17; /*0x1007f5393*/
LABEL_16:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v11, 1); /*0x1007f5338*/
      goto LABEL_17; /*0x1007f5343*/
    }
    if ( v11 ) /*0x1007f5336*/
      goto LABEL_16; /*0x1007f5336*/
LABEL_17:
    if ( v36 ) /*0x1007f5359*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v36, 1); /*0x1007f5367*/
  }
  if ( !__OFSUB__(-v20, 1) ) /*0x1007f5316*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x1007f5321*/
    goto LABEL_14; /*0x1007f5321*/
  }
  v42 = v21; /*0x1007f53e3*/
  v32 = v22; /*0x1007f53ee*/
  if ( 2 * v12 ) /*0x1007f53f5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1007f540d*/
  if ( v11 ) /*0x1007f5415*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v11, 1); /*0x1007f5422*/
  if ( v36 ) /*0x1007f5438*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v36, 1); /*0x1007f5442*/
  _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdf8beb86d98b7008(v23); /*0x1007f544e*/
  v17 = *v43; /*0x1007f5457*/
  result = v42; /*0x1007f545d*/
  if ( *v43 != 0x8000000000000000LL ) /*0x1007f5468*/
  {
LABEL_22:
    if ( v17 ) /*0x1007f53b4*/
    {
      v19 = result; /*0x1007f53b6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43[1], v17, 1); /*0x1007f53c6*/
      return v19; /*0x1007f53cb*/
    }
  }
  return result; /*0x1007f53d1*/
}