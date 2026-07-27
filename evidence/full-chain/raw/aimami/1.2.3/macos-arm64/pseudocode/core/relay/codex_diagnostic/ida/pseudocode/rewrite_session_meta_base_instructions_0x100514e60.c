// __ZN13codexmate_lib4core5relay16codex_diagnostic38rewrite_session_meta_base_instructions @ 0x100514e60
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::rewrite_session_meta_base_instructions::h10cd62aebe74e8ff(
        _QWORD *a1,
        __int64 (__fastcall **a2)(),
        __int64 (__fastcall *a3)(),
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(); // rdx
  __int64 (__fastcall *v8)(); // rsi
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  __int64 v11; // r13
  void *v12; // rax
  _QWORD *v13; // rax
  void *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 (__fastcall *v18)(); // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(); // rdx
  _QWORD *v21; // rdx
  __int64 (__fastcall *v22)(); // rax
  __int64 (__fastcall *v23)(); // rcx
  __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-130h] BYREF
  void *v26; // [rsp+8h] [rbp-128h]
  __int64 v27; // [rsp+10h] [rbp-120h]
  _QWORD *v28; // [rsp+18h] [rbp-118h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+20h] [rbp-110h]
  __int64 v30; // [rsp+28h] [rbp-108h]
  __int64 v31; // [rsp+30h] [rbp-100h]
  _QWORD v32[4]; // [rsp+38h] [rbp-F8h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+58h] [rbp-D8h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+60h] [rbp-D0h]
  __int64 v35; // [rsp+68h] [rbp-C8h]
  __int64 v36; // [rsp+70h] [rbp-C0h]
  __int64 (__fastcall **v37)(); // [rsp+78h] [rbp-B8h]
  __int64 (__fastcall *v38)(); // [rsp+80h] [rbp-B0h]
  __int64 v39; // [rsp+88h] [rbp-A8h]
  __int64 (__fastcall **v40)(); // [rsp+90h] [rbp-A0h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+98h] [rbp-98h]
  __int64 v42; // [rsp+A0h] [rbp-90h]
  __int64 v43; // [rsp+A8h] [rbp-88h]
  __int64 (__fastcall **v44)(); // [rsp+B0h] [rbp-80h]
  __int64 (__fastcall *v45)(); // [rsp+B8h] [rbp-78h]
  __int64 v46; // [rsp+C0h] [rbp-70h]
  __int64 (__fastcall *v47)(); // [rsp+C8h] [rbp-68h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+D0h] [rbp-60h]
  __int64 v49; // [rsp+D8h] [rbp-58h]
  __int64 v50; // [rsp+E0h] [rbp-50h]
  _QWORD *v51; // [rsp+E8h] [rbp-48h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+F0h] [rbp-40h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-38h]
  __int64 v54; // [rsp+100h] [rbp-30h]

  v33 = a2; /*0x100514e7a*/
  v34 = a3; /*0x100514e81*/
  v35 = 0; /*0x100514e88*/
  v36 = 0; /*0x100514e93*/
  v37 = a2; /*0x100514e9e*/
  v38 = a3; /*0x100514ea5*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v40, &v33); /*0x100514eba*/
  if ( (_BYTE)v40 == 6 ) /*0x100514ec6*/
  {
    v32[0] = v41; /*0x100514eda*/
    v51 = v32; /*0x100514ee1*/
    v52 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100514eec*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33, &unk_1017C0FF7, &v51); /*0x100514f02*/
    v47 = (__int64 (__fastcall *)())v33; /*0x100514f15*/
    v48 = v34; /*0x100514f19*/
    v49 = v35; /*0x100514f24*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v32); /*0x100514f2f*/
    result = v50; /*0x100514f34*/
    v31 = v50; /*0x100514f38*/
    v6 = v49; /*0x100514f3f*/
    v30 = v49; /*0x100514f43*/
    v7 = v47; /*0x100514f4a*/
    v8 = v48; /*0x100514f4e*/
    v29 = v48; /*0x100514f52*/
    v28 = v47; /*0x100514f59*/
    a1[4] = v50; /*0x100514f60*/
    a1[3] = v6; /*0x100514f64*/
    a1[2] = v8; /*0x100514f68*/
    a1[1] = v7; /*0x100514f6c*/
    *a1 = 9; /*0x100514f70*/
    return result; /*0x100514f77*/
  }
  v28 = v40; /*0x100514f98*/
  v29 = v41; /*0x100514f9f*/
  v32[3] = v43; /*0x100514fa6*/
  v32[2] = v42; /*0x100514fad*/
  v32[1] = v41; /*0x100514fb4*/
  v32[0] = v40; /*0x100514fbb*/
  v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100514fd5*/
                  "payloadbase_instructions",
                  7,
                  v32);
  v10 = v9; /*0x100514fda*/
  if ( v9 && *v9 == 5 ) /*0x100514fea*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payloadbase_instructions", 7); /*0x100514ff0*/
    v11 = 17; /*0x100514ff5*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x100515005*/
    if ( v12 ) /*0x10051500d*/
    {
      qmemcpy(v12, "base_instructions", 17); /*0x10051502f*/
      v25 = 17; /*0x100515039*/
      v26 = v12; /*0x100515044*/
      v27 = 17; /*0x10051504b*/
      switch ( *(_BYTE *)a4 ) /*0x100515068*/
      {
        case 0: /*0x100515068*/
          LOBYTE(v51) = 0; /*0x100515137*/
          break; /*0x10051513b*/
        case 1: /*0x100515068*/
        case 2: /*0x100515068*/
          v54 = a4[3]; /*0x10051506e*/
          v53 = a4[2]; /*0x100515076*/
          v13 = (_QWORD *)*a4; /*0x10051507a*/
          v52 = (__int64 (__fastcall *)())a4[1]; /*0x100515081*/
          v51 = v13; /*0x100515085*/
          break; /*0x100515089*/
        case 3: /*0x100515068*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v52, a4 + 1); /*0x100515148*/
          LOBYTE(v51) = 3; /*0x10051514d*/
          break; /*0x100515151*/
        case 4: /*0x100515068*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v52, a4 + 1); /*0x10051512c*/
          LOBYTE(v51) = 4; /*0x100515131*/
          break; /*0x100515135*/
        case 5: /*0x100515068*/
          if ( a4[3] ) /*0x100515153*/
          {
            v15 = a4[1]; /*0x10051515a*/
            if ( !v15 ) /*0x100515161*/
              core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x1005153ac*/
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x10051516f*/
              &v52,
              v15,
              a4[2]);
          }
          else
          {
            v52 = nullptr; /*0x100515176*/
            v54 = 0; /*0x10051517e*/
          }
          LOBYTE(v51) = 5; /*0x100515186*/
          break; /*0x100515186*/
      }
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v40, v10 + 8, &v25); /*0x10051519f*/
      if ( __OFSUB__(0, v40) ) /*0x1005151a6*/
      {
        v18 = v41; /*0x1005151af*/
        v19 = 32 * v43; /*0x1005151bd*/
        v50 = *((_QWORD *)v41 + 4 * v43 + 3); /*0x1005151c6*/
        v49 = *((_QWORD *)v41 + 4 * v43 + 2); /*0x1005151cf*/
        v20 = *((__int64 (__fastcall **)())v41 + 4 * v43); /*0x1005151d3*/
        v48 = *((__int64 (__fastcall **)())v41 + 4 * v43 + 1); /*0x1005151dc*/
        v47 = v20; /*0x1005151e0*/
        *(_QWORD *)((char *)v41 + v19 + 24) = v54; /*0x1005151e8*/
        *(_QWORD *)((char *)v18 + v19 + 16) = v53; /*0x1005151f1*/
        v21 = v51; /*0x1005151f6*/
        *(_QWORD *)((char *)v18 + v19 + 8) = v52; /*0x1005151fe*/
        *(_QWORD *)((char *)v18 + v19) = v21; /*0x100515203*/
        if ( (_BYTE)v47 != 6 ) /*0x10051520b*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v47); /*0x100515215*/
      }
      else
      {
        v39 = v46; /*0x100515223*/
        v38 = v45; /*0x10051522e*/
        v37 = v44; /*0x100515239*/
        v36 = v43; /*0x100515247*/
        v35 = v42; /*0x100515255*/
        v34 = v41; /*0x10051526a*/
        v33 = v40; /*0x100515271*/
        v31 = v54; /*0x10051527c*/
        v30 = v53; /*0x100515287*/
        v29 = v52; /*0x100515296*/
        v28 = v51; /*0x10051529d*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1005152b6*/
          &v47,
          &v33,
          &v28);
      }
      serde_json::ser::to_vec::haa2ccd5674877793(&v33, v32, v21, v19, v16, v17, v25, v26, v27); /*0x1005152c9*/
      v22 = v34; /*0x1005152df*/
      if ( v33 == (__int64 (__fastcall **)())0x8000000000000000LL ) /*0x1005152e9*/
      {
        v47 = v34; /*0x1005152ef*/
        v40 = &v47; /*0x1005152f7*/
        v41 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100515305*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33, &unk_1017C1013, &v40); /*0x100515321*/
        v40 = v33; /*0x100515334*/
        v41 = v34; /*0x10051533b*/
        v42 = v35; /*0x100515349*/
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v47); /*0x100515354*/
        *a1 = 10; /*0x100515359*/
        v23 = v41; /*0x100515367*/
        a1[1] = v40; /*0x10051536e*/
        a1[2] = v23; /*0x100515372*/
        a1[3] = v42; /*0x10051537d*/
      }
      else
      {
        v24 = v35; /*0x100515386*/
        a1[1] = v33; /*0x10051538d*/
        a1[2] = v22; /*0x100515391*/
        a1[3] = v24; /*0x100515395*/
        *a1 = 11; /*0x100515399*/
      }
      return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v32); /*0x100515381*/
    }
LABEL_27:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11); /*0x1005153b3*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payloadbase_instructions", 7); /*0x10051508e*/
  v11 = 30; /*0x100515093*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1005150a3*/
  if ( !v14 ) /*0x1005150ab*/
    goto LABEL_27; /*0x1005150ab*/
  qmemcpy(v14, "session_meta payload not found", 30); /*0x1005150e5*/
  *a1 = 9; /*0x1005150e8*/
  a1[1] = 30; /*0x1005150ef*/
  a1[2] = v14; /*0x1005150f7*/
  a1[3] = 30; /*0x1005150fb*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v32); /*0x10051510f*/
}