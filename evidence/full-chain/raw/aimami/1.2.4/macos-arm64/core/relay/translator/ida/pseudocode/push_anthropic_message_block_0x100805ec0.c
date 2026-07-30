// __ZN13codexmate_lib4core5relay10translator28push_anthropic_message_block @ 0x100805ec0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::push_anthropic_message_block::h92463a735672c30c(
        char *a1,
        __int64 a2,
        size_t a3,
        __int64 *a4)
{
  const void *v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // r12
  __int64 v24; // rax
  char *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 result; // rax
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 *v34; // rdi
  __int64 v35; // rsi
  _QWORD v36[4]; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-88h] BYREF
  _DWORD *v38; // [rsp+30h] [rbp-80h]
  __int64 v39; // [rsp+38h] [rbp-78h]
  _QWORD v40[2]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v41; // [rsp+50h] [rbp-60h]
  char *v42; // [rsp+58h] [rbp-58h]
  __int64 *v43; // [rsp+60h] [rbp-50h]
  __int64 v44; // [rsp+68h] [rbp-48h] BYREF
  __int64 v45; // [rsp+70h] [rbp-40h]
  _QWORD *v46; // [rsp+78h] [rbp-38h]
  __int64 v47; // [rsp+80h] [rbp-30h]

  v43 = a4; /*0x100805ed4*/
  v5 = (const void *)a2; /*0x100805edb*/
  v42 = a1; /*0x100805ede*/
  v6 = *((_QWORD *)a1 + 2); /*0x100805ee2*/
  if ( !v6 ) /*0x100805ee9*/
    goto LABEL_6; /*0x100805ee9*/
  v7 = *((_QWORD *)v42 + 1) + 32 * v6 - 32; /*0x100805efa*/
  a1 = "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody"; /*0x100805eff*/
  a2 = 4; /*0x100805f06*/
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100805f0e*/
         "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
         4,
         v7);
  if ( !v8 ) /*0x100805f16*/
    goto LABEL_6; /*0x100805f16*/
  if ( *(_BYTE *)v8 == 3 /*0x100806180*/
    && *(_QWORD *)(v8 + 24) == a3
    && (a1 = *(char **)(v8 + 16), a2 = (__int64)v5, !memcmp(a1, v5, a3))
    && (a1 = "contentpattern.output_modehead_limit",
        a2 = 7,
        (result = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                    "contentpattern.output_modehead_limit",
                    7,
                    v7,
                    a4,
                    v9,
                    v10)) != 0)
    && *(_BYTE *)result == 4 )
  {
    v30 = *(_QWORD *)(result + 24); /*0x100806186*/
    if ( v30 == *(_QWORD *)(result + 8) ) /*0x10080618e*/
    {
      v31 = result; /*0x100806197*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(result + 8); /*0x10080619a*/
      result = v31; /*0x10080619f*/
    }
    v32 = *(_QWORD *)(result + 16); /*0x1008061a2*/
    v33 = 32 * v30; /*0x1008061a9*/
    v34 = v43; /*0x1008061ad*/
    *(_QWORD *)(v32 + v33 + 24) = v43[3]; /*0x1008061b5*/
    *(_QWORD *)(v32 + v33 + 16) = v34[2]; /*0x1008061be*/
    v35 = *v34; /*0x1008061c3*/
    *(_QWORD *)(v32 + v33 + 8) = v34[1]; /*0x1008061ca*/
    *(_QWORD *)(v32 + v33) = v35; /*0x1008061cf*/
    *(_QWORD *)(result + 24) = v30 + 1; /*0x1008061d6*/
  }
  else
  {
LABEL_6:
    v40[0] = 0; /*0x100805f3a*/
    v41 = 0; /*0x100805f42*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x100805f4a*/
    v11 = 4; /*0x100805f4f*/
    v12 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100805f5e*/
    if ( !v12 ) /*0x100805f66*/
      goto LABEL_25; /*0x100805f66*/
    *v12 = 1701605234; /*0x100805f6f*/
    v37 = 4; /*0x100805f75*/
    v38 = v12; /*0x100805f80*/
    v39 = 4; /*0x100805f84*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v13, v14); /*0x100805f8c*/
    v15 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100805f99*/
    if ( !v15 ) /*0x100805fa1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x10080623a*/
    v16 = v15; /*0x100805fa7*/
    memcpy(v15, v5, a3); /*0x100805fb3*/
    LOBYTE(v44) = 3; /*0x100805fb8*/
    v45 = a3; /*0x100805fbc*/
    v46 = v16; /*0x100805fc0*/
    v47 = a3; /*0x100805fc4*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v36, v40, &v37, &v44); /*0x100805fde*/
    if ( LOBYTE(v36[0]) != 6 ) /*0x100805fea*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v36); /*0x100805ff3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v40, v17, v18); /*0x100805ff8*/
    v11 = 7; /*0x100805ffd*/
    v19 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10080600c*/
    if ( !v19 ) /*0x100806014*/
LABEL_25:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11); /*0x10080622b*/
    *(_DWORD *)((char *)v19 + 3) = 1953391988; /*0x10080601d*/
    *v19 = 1953394531; /*0x100806024*/
    v37 = 7; /*0x10080602a*/
    v38 = v19; /*0x100806035*/
    v39 = 7; /*0x100806039*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v20, v21); /*0x100806041*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100806050*/
    if ( !v22 ) /*0x100806058*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1008061e9*/
    v23 = (_QWORD *)v22; /*0x10080605e*/
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4( /*0x100806069*/
      &v44,
      v43);
    if ( (_BYTE)v44 == 6 ) /*0x100806072*/
    {
      v36[0] = v45; /*0x1008061f4*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167D112, 43, v36, &off_10197B9E8, &off_10197A508); /*0x10080621c*/
    }
    v23[3] = v47; /*0x10080607c*/
    v23[2] = v46; /*0x100806085*/
    v24 = v44; /*0x10080608a*/
    v23[1] = v45; /*0x100806092*/
    *v23 = v24; /*0x100806097*/
    v45 = 1; /*0x10080609b*/
    v46 = v23; /*0x1008060a3*/
    v47 = 1; /*0x1008060a7*/
    LOBYTE(v44) = 4; /*0x1008060af*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v36, v40, &v37, &v44); /*0x1008060c9*/
    if ( LOBYTE(v36[0]) != 6 ) /*0x1008060d5*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v36); /*0x1008060de*/
    v45 = v40[0]; /*0x1008060eb*/
    v46 = (_QWORD *)v40[1]; /*0x1008060ef*/
    v47 = v41; /*0x1008060f7*/
    LOBYTE(v44) = 5; /*0x1008060fb*/
    v25 = v42; /*0x1008060ff*/
    if ( v6 == *(_QWORD *)v42 ) /*0x100806106*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v42); /*0x10080610b*/
    v26 = *((_QWORD *)v25 + 1); /*0x100806110*/
    v27 = 32 * v6; /*0x100806117*/
    *(_QWORD *)(v26 + v27 + 24) = v47; /*0x10080611f*/
    *(_QWORD *)(v26 + v27 + 16) = v46; /*0x100806128*/
    v28 = v44; /*0x10080612d*/
    *(_QWORD *)(v26 + v27 + 8) = v45; /*0x100806135*/
    *(_QWORD *)(v26 + v27) = v28; /*0x10080613a*/
    *((_QWORD *)v25 + 2) = v6 + 1; /*0x100806141*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v43); /*0x100806149*/
  }
  return result; /*0x10080614e*/
}