// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h4082c4e542f661cc; addr: 0x1002a81b0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:54Z
double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h4082c4e542f661cc(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(),
        char *a5)
{
  _QWORD *v8; // rbx
  char v9; // r13
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rsi
  void *v13; // rax
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(); // rcx
  __int64 *v17; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+8h] [rbp-B8h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+10h] [rbp-B0h]
  __int64 v20; // [rsp+18h] [rbp-A8h]
  __int64 (__fastcall *v21)(); // [rsp+20h] [rbp-A0h]
  __int64 v22; // [rsp+28h] [rbp-98h]
  __int64 v23; // [rsp+30h] [rbp-90h]
  __int64 v24; // [rsp+38h] [rbp-88h]
  __int64 *v25; // [rsp+40h] [rbp-80h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-78h]
  _QWORD *v27; // [rsp+50h] [rbp-70h]
  __int64 (__fastcall *v28)(); // [rsp+58h] [rbp-68h]
  __int64 v29; // [rsp+60h] [rbp-60h]
  __int64 v30; // [rsp+68h] [rbp-58h]
  __int64 v31; // [rsp+70h] [rbp-50h]
  __int64 v32; // [rsp+78h] [rbp-48h] BYREF
  _QWORD v33[2]; // [rsp+80h] [rbp-40h] BYREF
  __int64 v34; // [rsp+90h] [rbp-30h]

  v8 = a1; /*0x1002a81cd*/
  v9 = *a5; /*0x1002a81d0*/
  switch ( *a5 ) /*0x1002a81e6*/
  {
    case 0: /*0x1002a81e6*/
      goto LABEL_9;
    case 1: /*0x1002a81e6*/
    case 2: /*0x1002a81e6*/
      v34 = *((_QWORD *)a5 + 3); /*0x1002a81ec*/
      v33[1] = *((_QWORD *)a5 + 2); /*0x1002a81f4*/
      v10 = *(_QWORD *)a5; /*0x1002a81f8*/
      v33[0] = *((_QWORD *)a5 + 1); /*0x1002a81ff*/
      v32 = v10; /*0x1002a8203*/
      v11 = *a2 + 1; /*0x1002a820b*/
      *a2 = v11; /*0x1002a820e*/
      if ( (_BYTE)v10 != 5 ) /*0x1002a8214*/
        break; /*0x1002a8214*/
      goto LABEL_12; /*0x1002a8214*/
    case 3: /*0x1002a81e6*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v33, a5 + 8); /*0x1002a8226*/
      goto LABEL_9; /*0x1002a822b*/
    case 4: /*0x1002a81e6*/
      _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7792aaf1fd665bd1( /*0x1002a825c*/
        v33,
        *((_QWORD *)a5 + 2),
        *((_QWORD *)a5 + 3));
LABEL_9:
      LOBYTE(v32) = v9; /*0x1002a8261*/
      ++*a2; /*0x1002a8265*/
      break; /*0x1002a8269*/
    case 5: /*0x1002a81e6*/
      if ( *((_QWORD *)a5 + 3) ) /*0x1002a822d*/
      {
        v12 = *((_QWORD *)a5 + 1); /*0x1002a8234*/
        if ( !v12 ) /*0x1002a823b*/
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_808); /*0x1002a8416*/
        a1 = v33; /*0x1002a8241*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h2436c8696ffdecf8( /*0x1002a8249*/
          v33,
          v12,
          *((_QWORD *)a5 + 2));
      }
      else
      {
        v33[0] = 0; /*0x1002a826e*/
        v34 = 0; /*0x1002a8276*/
      }
      LOBYTE(v32) = 5; /*0x1002a827e*/
      v11 = *a2 + 1; /*0x1002a8286*/
      *a2 = v11; /*0x1002a8289*/
LABEL_12:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1002a828d*/
      v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1002a829c*/
      if ( !v13 ) /*0x1002a82a4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1002a8425*/
      qmemcpy(v13, "sequence_number", 15); /*0x1002a82c6*/
      v18 = 15; /*0x1002a82c9*/
      v19 = (__int64 (__fastcall *)())v13; /*0x1002a82d4*/
      v20 = 15; /*0x1002a82db*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::hafd49d30007cd639(&v25, v33, &v18); /*0x1002a82f1*/
      if ( __OFSUB__(0, v25) ) /*0x1002a82f8*/
      {
        v14 = 0x8000000000000000LL; /*0x1002a82fe*/
        v22 = v29; /*0x1002a830c*/
        v21 = v28; /*0x1002a8317*/
        v15 = v26; /*0x1002a831e*/
        v20 = (__int64)v27; /*0x1002a8326*/
      }
      else
      {
        v24 = v31; /*0x1002a8333*/
        v23 = v30; /*0x1002a833e*/
        v22 = v29; /*0x1002a8349*/
        v21 = v28; /*0x1002a8354*/
        v20 = (__int64)v27; /*0x1002a835f*/
        v14 = (unsigned __int64)v25; /*0x1002a8366*/
        v15 = v26; /*0x1002a836a*/
      }
      v19 = v15; /*0x1002a836e*/
      v18 = v14; /*0x1002a8375*/
      LOBYTE(v25) = 2; /*0x1002a837c*/
      v26 = nullptr; /*0x1002a8380*/
      v27 = (_QWORD *)v11; /*0x1002a8388*/
      serde_json::map::Entry::or_insert::h6943c3d5850f40d0(&v18, &v25); /*0x1002a8397*/
      break; /*0x1002a8397*/
  }
  v18 = a3; /*0x1002a839c*/
  v19 = a4; /*0x1002a83a3*/
  v17 = &v32; /*0x1002a83ae*/
  v25 = &v18; /*0x1002a83bc*/
  v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1002a83c7*/
  v27 = &v17; /*0x1002a83d2*/
  v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb5e944274d70fb9; /*0x1002a83dd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_101A2CC54, &v25); /*0x1002a83ef*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v32); /*0x1002a83fd*/
}