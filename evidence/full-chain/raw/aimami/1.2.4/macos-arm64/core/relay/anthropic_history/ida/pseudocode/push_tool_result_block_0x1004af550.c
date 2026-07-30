// __ZN13codexmate_lib4core5relay17anthropic_history22push_tool_result_block @ 0x1004af550 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::push_tool_result_block::hc00835d0f78ac01a(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  char *v5; // r14
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // r13
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // r15
  _QWORD *v39; // rbx
  __int64 v40; // rax
  _QWORD v41[4]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+20h] [rbp-80h] BYREF
  _DWORD *v43; // [rsp+28h] [rbp-78h]
  __int64 v44; // [rsp+30h] [rbp-70h]
  _QWORD v45[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 v46; // [rsp+48h] [rbp-58h]
  __int64 v47; // [rsp+50h] [rbp-50h]
  __int64 v48; // [rsp+58h] [rbp-48h] BYREF
  __int64 v49; // [rsp+60h] [rbp-40h]
  _QWORD *v50; // [rsp+68h] [rbp-38h]
  __int64 v51; // [rsp+70h] [rbp-30h]

  v4 = (__int64 *)a2; /*0x1004af561*/
  v5 = a1; /*0x1004af564*/
  v6 = *((_QWORD *)a1 + 2); /*0x1004af567*/
  if ( !v6 ) /*0x1004af56e*/
    goto LABEL_6; /*0x1004af56e*/
  v7 = *((_QWORD *)a1 + 1) + 32 * v6 - 32; /*0x1004af57b*/
  a1 = "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody"; /*0x1004af580*/
  a2 = 4; /*0x1004af587*/
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004af58f*/
         "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
         4,
         v7);
  if ( !v8 ) /*0x1004af597*/
    goto LABEL_6; /*0x1004af597*/
  if ( *(_BYTE *)v8 == 3 /*0x1004af7eb*/
    && *(_QWORD *)(v8 + 24) == 4
    && **(_DWORD **)(v8 + 16) == 1919251317
    && (a1 = (char *)&anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
        a2 = 7,
        v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                7,
                v7,
                a4,
                v9,
                v10,
                v41[0],
                v41[1],
                v41[2],
                v41[3]),
        (v29 = v28) != 0)
    && *(_BYTE *)v28 == 4 )
  {
    v30 = *(_QWORD *)(v28 + 24); /*0x1004af7f4*/
    v47 = v28; /*0x1004af7fb*/
    if ( v30 ) /*0x1004af7ff*/
    {
      v31 = *(_QWORD *)(v28 + 16); /*0x1004af805*/
      v32 = 32 * v30; /*0x1004af809*/
      v33 = 0; /*0x1004af80d*/
      while ( 1 ) /*0x1004af81f*/
      {
        v34 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("type", 4, v31); /*0x1004af81f*/
        if ( !v34 /*0x1004af85a*/
          || *(_BYTE *)v34 != 3
          || *(_QWORD *)(v34 + 24) != 11
          || **(_QWORD **)(v34 + 16) ^ 0x7365725F6C6F6F74LL
           | *(_QWORD *)(*(_QWORD *)(v34 + 16) + 3LL) ^ 0x746C757365725F6CLL )
        {
          break; /*0x1004af85a*/
        }
        v31 += 32; /*0x1004af85f*/
        ++v33; /*0x1004af863*/
        v32 -= 32; /*0x1004af866*/
        if ( !v32 ) /*0x1004af86a*/
        {
          v33 = *(_QWORD *)(v47 + 24); /*0x1004af870*/
          goto LABEL_31; /*0x1004af874*/
        }
      }
      v35 = *(_QWORD *)(v47 + 24); /*0x1004af87a*/
      v51 = v4[3]; /*0x1004af882*/
      v50 = (_QWORD *)v4[2]; /*0x1004af88a*/
      v36 = *v4; /*0x1004af88e*/
      v49 = v4[1]; /*0x1004af895*/
      v48 = v36; /*0x1004af899*/
      if ( v33 > v35 ) /*0x1004af8a0*/
        alloc::vec::Vec$LT$T$C$A$GT$::insert_mut::assert_failed::h5a99f51db44041ca(v33, v35, &off_101971D40); /*0x1004af8af*/
    }
    else
    {
      v33 = 0; /*0x1004af8b9*/
LABEL_31:
      v51 = v4[3]; /*0x1004af8bc*/
      v50 = (_QWORD *)v4[2]; /*0x1004af8c8*/
      v37 = *v4; /*0x1004af8cc*/
      v49 = v4[1]; /*0x1004af8d3*/
      v48 = v37; /*0x1004af8d7*/
      v35 = v33; /*0x1004af8db*/
    }
    v38 = (_QWORD *)(v29 + 8); /*0x1004af8de*/
    if ( v35 == *v38 ) /*0x1004af8e5*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v38); /*0x1004af8ea*/
    v39 = (_QWORD *)(*(_QWORD *)(v47 + 16) + 32 * v33); /*0x1004af8fa*/
    if ( v35 > v33 ) /*0x1004af904*/
      memmove(v39 + 4, (const void *)(*(_QWORD *)(v47 + 16) + 32 * v33), 32 * (v35 - v33)); /*0x1004af911*/
    v39[3] = v51; /*0x1004af91a*/
    v39[2] = v50; /*0x1004af922*/
    v40 = v48; /*0x1004af926*/
    v39[1] = v49; /*0x1004af92e*/
    *v39 = v40; /*0x1004af932*/
    result = v47; /*0x1004af938*/
    *(_QWORD *)(v47 + 24) = v35 + 1; /*0x1004af93c*/
  }
  else
  {
LABEL_6:
    v45[0] = 0; /*0x1004af5b5*/
    v46 = 0; /*0x1004af5bd*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x1004af5c5*/
    v11 = 4; /*0x1004af5ca*/
    v12 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1004af5da*/
    if ( !v12 ) /*0x1004af5e2*/
      goto LABEL_39; /*0x1004af5e2*/
    *v12 = 1701605234; /*0x1004af5eb*/
    v42 = 4; /*0x1004af5f1*/
    v43 = v12; /*0x1004af5f9*/
    v44 = 4; /*0x1004af5fd*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v13, v14); /*0x1004af605*/
    v15 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1004af614*/
    if ( !v15 ) /*0x1004af61c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1004af9a2*/
    *v15 = 1919251317; /*0x1004af622*/
    LOBYTE(v48) = 3; /*0x1004af628*/
    v49 = 4; /*0x1004af62c*/
    v50 = v15; /*0x1004af634*/
    v51 = 4; /*0x1004af638*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v41, v45, &v42, &v48); /*0x1004af653*/
    if ( LOBYTE(v41[0]) != 6 ) /*0x1004af65f*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v41); /*0x1004af668*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v45, v16, v17); /*0x1004af66d*/
    v11 = 7; /*0x1004af672*/
    v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004af682*/
    if ( !v18 ) /*0x1004af68a*/
LABEL_39:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11); /*0x1004af991*/
    *(_DWORD *)((char *)v18 + 3) = 1953391988; /*0x1004af693*/
    *v18 = 1953394531; /*0x1004af69a*/
    v42 = 7; /*0x1004af6a0*/
    v43 = v18; /*0x1004af6a8*/
    v44 = 7; /*0x1004af6ac*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v19, v20); /*0x1004af6b4*/
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x1004af6c3*/
    if ( !v21 ) /*0x1004af6cb*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1004af94f*/
    v22 = (_QWORD *)v21; /*0x1004af6d1*/
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4( /*0x1004af6db*/
      &v48,
      v4);
    if ( (_BYTE)v48 == 6 ) /*0x1004af6e4*/
    {
      v41[0] = v49; /*0x1004af95a*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004af982*/
        "called `Result::unwrap()` on an `Err` value",
        43,
        v41,
        &off_1019723D0,
        &off_101971D58);
    }
    v22[3] = v51; /*0x1004af6ee*/
    v22[2] = v50; /*0x1004af6f7*/
    v23 = v48; /*0x1004af6fc*/
    v22[1] = v49; /*0x1004af704*/
    *v22 = v23; /*0x1004af709*/
    v49 = 1; /*0x1004af70d*/
    v50 = v22; /*0x1004af715*/
    v51 = 1; /*0x1004af719*/
    LOBYTE(v48) = 4; /*0x1004af721*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v41, v45, &v42, &v48); /*0x1004af738*/
    if ( LOBYTE(v41[0]) != 6 ) /*0x1004af744*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v41); /*0x1004af74d*/
    v49 = v45[0]; /*0x1004af75a*/
    v50 = (_QWORD *)v45[1]; /*0x1004af75e*/
    v51 = v46; /*0x1004af766*/
    LOBYTE(v48) = 5; /*0x1004af76a*/
    if ( v6 == *(_QWORD *)v5 ) /*0x1004af771*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v5); /*0x1004af776*/
    v24 = *((_QWORD *)v5 + 1); /*0x1004af77b*/
    v25 = 32 * v6; /*0x1004af782*/
    *(_QWORD *)(v24 + v25 + 24) = v51; /*0x1004af78a*/
    *(_QWORD *)(v24 + v25 + 16) = v50; /*0x1004af793*/
    v26 = v48; /*0x1004af798*/
    *(_QWORD *)(v24 + v25 + 8) = v49; /*0x1004af7a0*/
    *(_QWORD *)(v24 + v25) = v26; /*0x1004af7a5*/
    *((_QWORD *)v5 + 2) = v6 + 1; /*0x1004af7ac*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v4); /*0x1004af7b3*/
  }
  return result; /*0x1004af7b8*/
}