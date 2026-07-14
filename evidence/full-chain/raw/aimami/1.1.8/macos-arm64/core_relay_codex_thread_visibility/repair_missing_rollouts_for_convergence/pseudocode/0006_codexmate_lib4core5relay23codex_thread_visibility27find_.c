// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x100400530 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::find_trusted_rollout_backup::h3625e2e7ba2f0c45(
        _QWORD *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7)
{
  void *v8; // rax
  size_t v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r15
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 *v17; // r15
  _QWORD *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int16 v25; // bx
  _QWORD *v26; // r14
  __int64 *v27; // r12
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  void *v34; // rax
  __int64 v35; // rbx
  _QWORD *v36; // r14
  _QWORD v37[132]; // [rsp+0h] [rbp-1150h] BYREF
  __int64 v38; // [rsp+420h] [rbp-D30h] BYREF
  char v39; // [rsp+428h] [rbp-D28h]
  __int64 v40; // [rsp+848h] [rbp-908h]
  __int64 v41; // [rsp+C70h] [rbp-4E0h]
  char v42; // [rsp+C78h] [rbp-4D8h]
  volatile signed __int64 *__dst[132]; // [rsp+C80h] [rbp-4D0h] BYREF
  void *__s2; // [rsp+10A0h] [rbp-B0h]
  __int64 v45; // [rsp+10A8h] [rbp-A8h]
  __int64 v46; // [rsp+10B0h] [rbp-A0h]
  size_t __n; // [rsp+10B8h] [rbp-98h]
  _QWORD *v48; // [rsp+10C0h] [rbp-90h]
  __int64 v49; // [rsp+10C8h] [rbp-88h] BYREF
  void *__s1; // [rsp+10D0h] [rbp-80h]
  __int64 v51; // [rsp+10D8h] [rbp-78h]
  __int64 v52; // [rsp+10E0h] [rbp-70h]
  void *v53; // [rsp+10E8h] [rbp-68h] BYREF
  __int64 v54; // [rsp+10F0h] [rbp-60h]
  __int64 v55; // [rsp+10F8h] [rbp-58h]
  __int64 v56; // [rsp+1100h] [rbp-50h] BYREF
  _QWORD *v57; // [rsp+1108h] [rbp-48h]
  __int64 v58; // [rsp+1110h] [rbp-40h]
  void *__src; // [rsp+1118h] [rbp-38h]
  __int64 v60; // [rsp+1120h] [rbp-30h]

  v37[37] = 0; /*0x100400544*/
  v45 = a5; /*0x100400553*/
  v46 = a4; /*0x10040055a*/
  v8 = (void *)std::path::Path::file_name::hf6c2daad91e50ebf(a6, a7, a3, a4, a5, (__int64)a6); /*0x100400571*/
  __n = v9; /*0x100400576*/
  __s2 = v8; /*0x10040057d*/
  if ( !v8 ) /*0x100400587*/
  {
    *a1 = 0x8000000000000000LL; /*0x1004005c8*/
    return 0x8000000000000000LL; /*0x1004005cb*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100400589*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100400598*/
  if ( !v10 ) /*0x1004005a0*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100400a8f*/
  v11 = (_QWORD *)v10; /*0x1004005a6*/
  if ( a3 < 0 ) /*0x1004005ac*/
  {
    v12 = 0; /*0x1004005ae*/
    goto LABEL_5; /*0x1004005ae*/
  }
  __src = a2; /*0x1004005d0*/
  v48 = a1; /*0x1004005d4*/
  v14 = 1; /*0x1004005db*/
  v15 = 1; /*0x1004005e1*/
  if ( a3 ) /*0x1004005e7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004005e9*/
    v12 = 1; /*0x1004005ee*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x1004005fc*/
    if ( !v16 ) /*0x100400604*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, a3); /*0x1004005b1*/
    v15 = v16; /*0x100400606*/
  }
  memcpy((void *)v15, __src, a3); /*0x100400613*/
  *v11 = a3; /*0x100400618*/
  v11[1] = v15; /*0x10040061b*/
  v11[2] = a3; /*0x10040061f*/
  v56 = 1; /*0x100400623*/
  v57 = v11; /*0x10040062b*/
  v17 = &v38; /*0x10040062f*/
  v18 = v37; /*0x100400636*/
  while ( 1 ) /*0x100400660*/
  {
    v58 = v14 - 1; /*0x100400660*/
    v19 = 3 * (v14 - 1); /*0x100400668*/
    v20 = v57[3 * v14 - 3]; /*0x10040066d*/
    v21 = v57[v19 + 2]; /*0x100400676*/
    v52 = v57[v19 + 1]; /*0x10040067e*/
    std::sys::fs::read_dir::h768dda1fe4336014(v17, v52, v21); /*0x100400682*/
    v22 = v38; /*0x10040068e*/
    v60 = v20; /*0x100400698*/
    if ( v39 != 2 ) /*0x10040069c*/
      break; /*0x10040069c*/
    if ( (v38 & 3) == 1 ) /*0x1004006a6*/
    {
      v23 = *(_QWORD *)(v38 + 7); /*0x1004006b4*/
      if ( *(_QWORD *)v23 ) /*0x1004006b8*/
        (*(void (__fastcall **)(_QWORD))v23)(*(_QWORD *)(v38 - 1)); /*0x1004006c3*/
      if ( *(_QWORD *)(v23 + 8) ) /*0x1004006c5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004006d5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004006e7*/
      v20 = v60; /*0x1004006ec*/
    }
LABEL_50:
    if ( v20 ) /*0x10040098b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040099d*/
    v14 = v58; /*0x100400650*/
    if ( !v58 ) /*0x100400657*/
    {
      *v48 = 0x8000000000000000LL; /*0x1004009b8*/
      goto LABEL_53; /*0x1004009b8*/
    }
  }
  v38 = 0; /*0x100400700*/
  v40 = 0; /*0x10040070b*/
  v41 = v22; /*0x100400716*/
  v42 = v39; /*0x10040071d*/
  while ( 1 ) /*0x100400777*/
  {
    while ( 1 ) /*0x10040073e*/
    {
      _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he040380398a2fb7a( /*0x10040073e*/
        v18,
        v17);
      if ( !v37[0] ) /*0x10040074b*/
      {
        core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::he15cef2cd682728c(v17); /*0x100400983*/
        goto LABEL_50; /*0x100400983*/
      }
      memcpy(__dst, v18, sizeof(__dst)); /*0x10040075c*/
      std::fs::DirEntry::file_type::hdd298e01714fd423(&v49, __dst); /*0x10040076b*/
      if ( (_BYTE)v49 != 1 ) /*0x100400777*/
        break; /*0x100400777*/
      if ( ((unsigned __int8)__s1 & 3) == 1 ) /*0x100400785*/
      {
        v24 = *(_QWORD *)((char *)__s1 + 7); /*0x100400793*/
        if ( *(_QWORD *)v24 ) /*0x100400797*/
          (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)((char *)__s1 - 1)); /*0x1004007a2*/
        if ( *(_QWORD *)(v24 + 8) ) /*0x1004007a4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004007b4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004007c6*/
        v20 = v60; /*0x1004007cb*/
      }
LABEL_40:
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x1004008f7*/
        goto LABEL_20; /*0x1004008fb*/
    }
    v25 = WORD1(v49); /*0x1004007e0*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v53, __dst); /*0x1004007ee*/
    if ( (v25 & 0xF000) == 0x4000 ) /*0x1004007ff*/
    {
      v26 = v18; /*0x100400801*/
      v27 = v17; /*0x100400804*/
      __src = v53; /*0x10040080b*/
      v28 = v54; /*0x10040080f*/
      v29 = v55; /*0x100400813*/
      v30 = v58; /*0x100400817*/
      if ( v58 == v56 ) /*0x10040081f*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v56); /*0x100400825*/
      v31 = v57; /*0x10040082a*/
      v32 = 3 * v30; /*0x10040082e*/
      v57[v32] = __src; /*0x100400836*/
      v31[v32 + 1] = v28; /*0x10040083a*/
      v31[v32 + 2] = v29; /*0x10040083f*/
      v58 = v30 + 1; /*0x100400847*/
      v20 = v60; /*0x10040084b*/
      v17 = v27; /*0x10040084f*/
      v18 = v26; /*0x100400852*/
      goto LABEL_40; /*0x10040085c*/
    }
    if ( v25 >= -28672 ) /*0x100400878*/
      goto LABEL_38; /*0x100400878*/
    std::fs::DirEntry::file_name::h82e3a94f480fbff7(&v49, __dst); /*0x100400884*/
    if ( v51 != __n || memcmp(__s1, __s2, __n) ) /*0x1004008ab*/
    {
      if ( v49 ) /*0x1004008be*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004008c9*/
LABEL_38:
      if ( v53 ) /*0x1004008dc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004008e7*/
      goto LABEL_40; /*0x1004008e7*/
    }
    if ( v49 ) /*0x100400910*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040091a*/
    if ( (unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::rollout_file_belongs_to_thread::hbd9f93e25b28d29c( /*0x100400938*/
                            v54,
                            v55,
                            v46,
                            v45) )
      break; /*0x100400938*/
    if ( v53 ) /*0x10040094c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100400956*/
    if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100400962*/
LABEL_20:
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x100400730*/
  }
  v33 = v48; /*0x1004009f0*/
  v48[2] = v55; /*0x1004009f7*/
  v34 = v53; /*0x1004009fb*/
  v33[1] = v54; /*0x100400a03*/
  *v33 = v34; /*0x100400a07*/
  if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100400a11*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x100400a1e*/
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::he15cef2cd682728c(&v38); /*0x100400a2a*/
  if ( v20 ) /*0x100400a32*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100400a40*/
  v35 = v58; /*0x100400a45*/
  if ( v58 ) /*0x100400a4c*/
  {
    v36 = v57 + 1; /*0x100400a56*/
    do /*0x100400a67*/
    {
      if ( *(v36 - 1) ) /*0x100400a6d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100400a7e*/
      v36 += 3; /*0x100400a60*/
      --v35; /*0x100400a64*/
    }
    while ( v35 ); /*0x100400a67*/
  }
LABEL_53:
  result = v56; /*0x1004009bb*/
  if ( v56 ) /*0x1004009c2*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004009d5*/
  return result; /*0x1004009da*/
}