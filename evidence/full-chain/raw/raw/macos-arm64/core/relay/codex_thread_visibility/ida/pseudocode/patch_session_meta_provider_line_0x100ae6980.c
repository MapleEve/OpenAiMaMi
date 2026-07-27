// __ZN13codexmate_lib4core5relay23codex_thread_visibility32patch_session_meta_provider_line @ 0x100ae6980 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_provider_line::hd36493268159f620(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        signed __int64 a5)
{
  __int64 v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // r13
  __int64 v11; // r12
  void *v12; // rax
  _BYTE *v13; // r13
  __int64 v14; // rdi
  void *v15; // rax
  double result; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 **v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD v30[4]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v31[3]; // [rsp+28h] [rbp-118h] BYREF
  _QWORD v32[4]; // [rsp+40h] [rbp-100h] BYREF
  void *__src; // [rsp+60h] [rbp-E0h]
  _QWORD v34[4]; // [rsp+68h] [rbp-D8h] BYREF
  __int64 *v35; // [rsp+88h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+90h] [rbp-B0h]
  __int64 v37; // [rsp+98h] [rbp-A8h]
  __int64 v38; // [rsp+A0h] [rbp-A0h]
  __int64 v39; // [rsp+A8h] [rbp-98h]
  __int64 v40; // [rsp+B0h] [rbp-90h]
  __int64 v41; // [rsp+B8h] [rbp-88h]
  __int64 v42; // [rsp+C0h] [rbp-80h]
  __int64 *v43; // [rsp+C8h] [rbp-78h]
  __int64 v44; // [rsp+D0h] [rbp-70h]
  signed __int64 v45; // [rsp+D8h] [rbp-68h]
  __int64 v46; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-58h]
  __int64 v48; // [rsp+F0h] [rbp-50h]
  __int64 v49; // [rsp+F8h] [rbp-48h]
  __int64 v50; // [rsp+100h] [rbp-40h]
  __int64 v51; // [rsp+108h] [rbp-38h]
  __int64 v52; // [rsp+110h] [rbp-30h]

  v46 = a2; /*0x100ae699d*/
  v47 = a3; /*0x100ae69a1*/
  v48 = 0; /*0x100ae69a5*/
  v49 = 0; /*0x100ae69ad*/
  v50 = a2; /*0x100ae69b5*/
  v51 = a3; /*0x100ae69b9*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v35, &v46); /*0x100ae69c8*/
  if ( (_BYTE)v35 == 6 ) /*0x100ae69d6*/
  {
    v8 = v36; /*0x100ae69d8*/
    *a1 = 3; /*0x100ae69df*/
    a1[1] = v8; /*0x100ae69e6*/
    return result; /*0x100ae69ea*/
  }
  v34[0] = v35; /*0x100ae69fb*/
  v34[2] = v37; /*0x100ae6a15*/
  v34[3] = v38; /*0x100ae6a23*/
  v34[1] = v36; /*0x100ae6a30*/
  v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100ae6a4a*/
                  "payload",
                  7,
                  v34);
  v10 = v9; /*0x100ae6a4f*/
  if ( v9 && *v9 == 5 ) /*0x100ae6a60*/
  {
    __src = a4; /*0x100ae6a66*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payload", 7); /*0x100ae6a6d*/
    v11 = 14; /*0x100ae6a72*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x100ae6a82*/
    if ( v12 ) /*0x100ae6a8a*/
    {
      v13 = v10 + 8; /*0x100ae6a93*/
      qmemcpy(v12, "model_provider", 14); /*0x100ae6aaf*/
      v31[0] = 14; /*0x100ae6ab2*/
      v31[1] = v12; /*0x100ae6abd*/
      v31[2] = 14; /*0x100ae6ac4*/
      if ( a5 < 0 ) /*0x100ae6ad2*/
      {
        v14 = 0; /*0x100ae6ad8*/
        goto LABEL_8; /*0x100ae6ad8*/
      }
      if ( a5 ) /*0x100ae6b7a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1); /*0x100ae6b7c*/
        v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x100ae6b89*/
        v14 = 1; /*0x100ae6b8e*/
        if ( !v17 ) /*0x100ae6b96*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, a5); /*0x100ae6ada*/
        v18 = v17; /*0x100ae6b9c*/
      }
      else
      {
        v18 = 1; /*0x100ae6ba1*/
      }
      memcpy((void *)v18, __src, a5); /*0x100ae6bb4*/
      v43 = (__int64 *)a5; /*0x100ae6bb9*/
      v44 = v18; /*0x100ae6bbd*/
      v45 = a5; /*0x100ae6bc1*/
      LOBYTE(v42) = 3; /*0x100ae6bc5*/
      v19 = &v35; /*0x100ae6bc9*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v35, v13, v31); /*0x100ae6bda*/
      if ( __OFSUB__(0, v35) ) /*0x100ae6be1*/
      {
        v20 = v36; /*0x100ae6bee*/
        v21 = 32 * v38; /*0x100ae6bfc*/
        v32[3] = *(_QWORD *)(v36 + 32 * v38 + 24); /*0x100ae6c05*/
        v32[2] = *(_QWORD *)(v36 + 32 * v38 + 16); /*0x100ae6c11*/
        v22 = *(_QWORD *)(v36 + 32 * v38); /*0x100ae6c18*/
        v32[1] = *(_QWORD *)(v36 + 32 * v38 + 8); /*0x100ae6c21*/
        v32[0] = v22; /*0x100ae6c28*/
        *(_QWORD *)(v36 + v21 + 24) = v45; /*0x100ae6c33*/
        *(_QWORD *)(v20 + v21 + 16) = v44; /*0x100ae6c3c*/
        v23 = v42; /*0x100ae6c41*/
        v24 = v43; /*0x100ae6c45*/
        *(_QWORD *)(v20 + v21 + 8) = v43; /*0x100ae6c49*/
        *(_QWORD *)(v20 + v21) = v23; /*0x100ae6c4e*/
        if ( LOBYTE(v32[0]) != 6 ) /*0x100ae6c59*/
        {
          v19 = (__int64 **)v32; /*0x100ae6c5f*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v32); /*0x100ae6c66*/
        }
      }
      else
      {
        v52 = v41; /*0x100ae6c77*/
        v51 = v40; /*0x100ae6c82*/
        v50 = v39; /*0x100ae6c8d*/
        v49 = v38; /*0x100ae6c98*/
        v48 = v37; /*0x100ae6ca3*/
        v47 = v36; /*0x100ae6cb5*/
        v46 = (__int64)v35; /*0x100ae6cb9*/
        v30[3] = v45; /*0x100ae6cc1*/
        v30[2] = v44; /*0x100ae6ccc*/
        v30[1] = v43; /*0x100ae6cdb*/
        v30[0] = v42; /*0x100ae6ce2*/
        v19 = (__int64 **)v32; /*0x100ae6ce9*/
        v24 = &v46; /*0x100ae6cf0*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ae6cfb*/
          v32,
          &v46,
          v30);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v24); /*0x100ae6d00*/
      v11 = 128; /*0x100ae6d05*/
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100ae6d15*/
      if ( v25 ) /*0x100ae6d1d*/
      {
        v46 = 128; /*0x100ae6d23*/
        v47 = v25; /*0x100ae6d2b*/
        v48 = 0; /*0x100ae6d2f*/
        v35 = &v46; /*0x100ae6d3b*/
        v26 = serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4( /*0x100ae6d55*/
                v34,
                &v35);
        if ( v26 ) /*0x100ae6d5b*/
        {
          if ( v46 ) /*0x100ae6d64*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x100ae6d6f*/
        }
        else
        {
          v27 = v46; /*0x100ae6d80*/
          v26 = v47; /*0x100ae6d84*/
          if ( v46 != 0x8000000000000000LL ) /*0x100ae6d8b*/
          {
            v29 = v48; /*0x100ae6da1*/
            a1[2] = v47; /*0x100ae6da5*/
            a1[3] = v29; /*0x100ae6da9*/
            v28 = 11; /*0x100ae6dad*/
            goto LABEL_26; /*0x100ae6db2*/
          }
        }
        v28 = 3; /*0x100ae6d8d*/
        v27 = v26; /*0x100ae6d92*/
LABEL_26:
        *a1 = v28; /*0x100ae6d95*/
        a1[1] = v27; /*0x100ae6d98*/
        return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v34); /*0x100ae6d9c*/
      }
    }
LABEL_28:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11); /*0x100ae6db4*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payload", 7); /*0x100ae6ae7*/
  v11 = 30; /*0x100ae6aec*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100ae6afc*/
  if ( !v15 ) /*0x100ae6b04*/
    goto LABEL_28; /*0x100ae6b04*/
  qmemcpy(v15, "session_meta payload not found", 30); /*0x100ae6b3e*/
  *a1 = 9; /*0x100ae6b41*/
  a1[1] = 30; /*0x100ae6b48*/
  a1[2] = (__int64)v15; /*0x100ae6b50*/
  a1[3] = 30; /*0x100ae6b54*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v34); /*0x100ae6b68*/
}