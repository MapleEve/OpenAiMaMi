// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream15responses_event @ 0x100abad00 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(),
        char *a5)
{
  __int64 *v7; // r12
  _QWORD *v8; // rbx
  char v9; // r13
  __int64 v10; // rax
  __int64 v11; // r13
  void *v12; // rax
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(); // rcx
  __int64 *v16; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+8h] [rbp-B8h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+10h] [rbp-B0h]
  __int64 v19; // [rsp+18h] [rbp-A8h]
  __int64 (__fastcall *v20)(); // [rsp+20h] [rbp-A0h]
  __int64 v21; // [rsp+28h] [rbp-98h]
  __int64 v22; // [rsp+30h] [rbp-90h]
  __int64 v23; // [rsp+38h] [rbp-88h]
  __int64 *v24; // [rsp+40h] [rbp-80h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+48h] [rbp-78h]
  _QWORD *v26; // [rsp+50h] [rbp-70h]
  __int64 (__fastcall *v27)(); // [rsp+58h] [rbp-68h]
  __int64 v28; // [rsp+60h] [rbp-60h]
  __int64 v29; // [rsp+68h] [rbp-58h]
  __int64 v30; // [rsp+70h] [rbp-50h]
  __int64 v31; // [rsp+78h] [rbp-48h] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp-40h] BYREF
  __int64 v33; // [rsp+90h] [rbp-30h]

  v7 = a2; /*0x100abad1a*/
  v8 = a1; /*0x100abad1d*/
  v9 = *a5; /*0x100abad20*/
  switch ( *a5 ) /*0x100abad36*/
  {
    case 0: /*0x100abad36*/
      goto LABEL_9;
    case 1: /*0x100abad36*/
    case 2: /*0x100abad36*/
      v33 = *((_QWORD *)a5 + 3); /*0x100abad3c*/
      v32[1] = *((_QWORD *)a5 + 2); /*0x100abad44*/
      v10 = *(_QWORD *)a5; /*0x100abad48*/
      v32[0] = *((_QWORD *)a5 + 1); /*0x100abad4f*/
      v31 = v10; /*0x100abad53*/
      v11 = *a2 + 1; /*0x100abad5b*/
      *a2 = v11; /*0x100abad5e*/
      if ( (_BYTE)v10 != 5 ) /*0x100abad64*/
        break; /*0x100abad64*/
      goto LABEL_12; /*0x100abad64*/
    case 3: /*0x100abad36*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v32, a5 + 8); /*0x100abad76*/
      goto LABEL_9; /*0x100abad7b*/
    case 4: /*0x100abad36*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(v32, a5 + 8); /*0x100abadab*/
LABEL_9:
      LOBYTE(v31) = v9; /*0x100abadb0*/
      ++*a2; /*0x100abadb4*/
      break; /*0x100abadb8*/
    case 5: /*0x100abad36*/
      if ( *((_QWORD *)a5 + 3) ) /*0x100abad7d*/
      {
        a2 = *((__int64 **)a5 + 1); /*0x100abad84*/
        if ( !a2 ) /*0x100abad8b*/
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x100abaf65*/
        a1 = v32; /*0x100abad91*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100abad99*/
          v32,
          a2,
          *((_QWORD *)a5 + 2));
      }
      else
      {
        v32[0] = 0; /*0x100abadbd*/
        v33 = 0; /*0x100abadc5*/
      }
      LOBYTE(v31) = 5; /*0x100abadcd*/
      v11 = *v7 + 1; /*0x100abadd5*/
      *v7 = v11; /*0x100abadd8*/
LABEL_12:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100abaddc*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x100abadeb*/
      if ( !v12 ) /*0x100abadf3*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x100abaf74*/
      qmemcpy(v12, "sequence_number", 15); /*0x100abae15*/
      v17 = 15; /*0x100abae18*/
      v18 = (__int64 (__fastcall *)())v12; /*0x100abae23*/
      v19 = 15; /*0x100abae2a*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v24, v32, &v17); /*0x100abae40*/
      if ( __OFSUB__(0, v24) ) /*0x100abae47*/
      {
        v13 = 0x8000000000000000LL; /*0x100abae4d*/
        v21 = v28; /*0x100abae5b*/
        v20 = v27; /*0x100abae66*/
        v14 = v25; /*0x100abae6d*/
        v19 = (__int64)v26; /*0x100abae75*/
      }
      else
      {
        v23 = v30; /*0x100abae82*/
        v22 = v29; /*0x100abae8d*/
        v21 = v28; /*0x100abae98*/
        v20 = v27; /*0x100abaea3*/
        v19 = (__int64)v26; /*0x100abaeae*/
        v13 = (unsigned __int64)v24; /*0x100abaeb5*/
        v14 = v25; /*0x100abaeb9*/
      }
      v18 = v14; /*0x100abaebd*/
      v17 = v13; /*0x100abaec4*/
      LOBYTE(v24) = 2; /*0x100abaecb*/
      v25 = nullptr; /*0x100abaecf*/
      v26 = (_QWORD *)v11; /*0x100abaed7*/
      serde_json::map::Entry::or_insert::h6943c3d5850f40d0(&v17, &v24); /*0x100abaee6*/
      break; /*0x100abaee6*/
  }
  v17 = a3; /*0x100abaeeb*/
  v18 = a4; /*0x100abaef2*/
  v16 = &v31; /*0x100abaefd*/
  v24 = &v17; /*0x100abaf0b*/
  v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100abaf16*/
  v26 = &v16; /*0x100abaf21*/
  v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100abaf2c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017C9F28, &v24); /*0x100abaf3e*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v31); /*0x100abaf4c*/
}