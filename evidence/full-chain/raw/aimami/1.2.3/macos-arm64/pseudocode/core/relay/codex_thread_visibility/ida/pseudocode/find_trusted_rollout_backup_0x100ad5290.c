// __ZN13codexmate_lib4core5relay23codex_thread_visibility27find_trusted_rollout_backup @ 0x100ad5290 | 基线 same-set
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::find_trusted_rollout_backup::ha066b49cdc5f109c(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  void *v10; // rax
  size_t v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 *v16; // r15
  _QWORD *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rsi
  char *v26; // r14
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int16 v30; // bx
  _QWORD *v31; // r14
  __int64 *v32; // r12
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  void *v38; // r14
  __int64 v39; // r14
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // r14
  __int64 v44; // rsi
  _QWORD __src[132]; // [rsp+0h] [rbp-1150h] BYREF
  __int64 v46; // [rsp+420h] [rbp-D30h] BYREF
  char v47; // [rsp+428h] [rbp-D28h]
  __int64 v48; // [rsp+848h] [rbp-908h]
  __int64 v49; // [rsp+C70h] [rbp-4E0h]
  char v50; // [rsp+C78h] [rbp-4D8h]
  volatile signed __int64 *__dst[132]; // [rsp+C80h] [rbp-4D0h] BYREF
  void *__s2; // [rsp+10A0h] [rbp-B0h]
  __int64 v53; // [rsp+10A8h] [rbp-A8h]
  __int64 v54; // [rsp+10B0h] [rbp-A0h]
  size_t __n; // [rsp+10B8h] [rbp-98h]
  _QWORD *v56; // [rsp+10C0h] [rbp-90h]
  __int64 v57; // [rsp+10C8h] [rbp-88h] BYREF
  void *__s1; // [rsp+10D0h] [rbp-80h]
  __int64 v59; // [rsp+10D8h] [rbp-78h]
  __int64 v60; // [rsp+10E0h] [rbp-70h]
  __int64 v61; // [rsp+10E8h] [rbp-68h]
  __int64 v62; // [rsp+10F0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+10F8h] [rbp-58h]
  __int64 v64; // [rsp+1100h] [rbp-50h]
  __int64 v65; // [rsp+1108h] [rbp-48h] BYREF
  _QWORD *v66; // [rsp+1110h] [rbp-40h]
  __int64 v67; // [rsp+1118h] [rbp-38h]
  __int64 v68; // [rsp+1120h] [rbp-30h]

  __src[37] = 0; /*0x100ad52a4*/
  v53 = a5; /*0x100ad52b3*/
  v54 = a4; /*0x100ad52ba*/
  v10 = (void *)std::path::Path::file_name::hf6c2daad91e50ebf(a6, a7); /*0x100ad52d1*/
  __n = v11; /*0x100ad52d6*/
  __s2 = v10; /*0x100ad52dd*/
  if ( !v10 ) /*0x100ad52e7*/
  {
    *a1 = 0x8000000000000000LL; /*0x100ad5716*/
    return; /*0x100ad5716*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a6, a7); /*0x100ad52ed*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100ad52fc*/
  if ( !v12 ) /*0x100ad5304*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100ad57cf*/
  v13 = (_QWORD *)v12; /*0x100ad530a*/
  v56 = a1; /*0x100ad530d*/
  v14 = 1; /*0x100ad5314*/
  v15 = 1; /*0x100ad531a*/
  if ( a3 ) /*0x100ad5323*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100ad5325*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100ad5337*/
    if ( !v15 ) /*0x100ad533d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x100ad57dc*/
  }
  memcpy((void *)v15, a2, a3); /*0x100ad534c*/
  *v13 = a3; /*0x100ad5351*/
  v13[1] = v15; /*0x100ad5354*/
  v13[2] = a3; /*0x100ad5358*/
  v65 = 1; /*0x100ad535c*/
  v66 = v13; /*0x100ad5364*/
  v16 = &v46; /*0x100ad5368*/
  v17 = __src; /*0x100ad536f*/
  while ( 1 ) /*0x100ad5390*/
  {
    v67 = v14 - 1; /*0x100ad5390*/
    v18 = 3 * (v14 - 1); /*0x100ad5398*/
    v19 = v66[3 * v14 - 3]; /*0x100ad539d*/
    v20 = v66[v18 + 2]; /*0x100ad53a6*/
    v61 = v66[v18 + 1]; /*0x100ad53ae*/
    std::sys::fs::read_dir::h768dda1fe4336014(v16, v61, v20); /*0x100ad53b2*/
    v21 = v46; /*0x100ad53be*/
    v68 = v19; /*0x100ad53c8*/
    if ( v47 != 2 ) /*0x100ad53cc*/
      break; /*0x100ad53cc*/
    if ( (v46 & 3) == 1 ) /*0x100ad53d6*/
    {
      v22 = v46 - 1; /*0x100ad53dc*/
      v23 = *(_QWORD *)(v46 - 1); /*0x100ad53e0*/
      v24 = *(_QWORD *)(v46 + 7); /*0x100ad53e4*/
      if ( *(_QWORD *)v24 ) /*0x100ad53e8*/
        (*(void (__fastcall **)(__int64))v24)(v23); /*0x100ad53f3*/
      v25 = *(_QWORD *)(v24 + 8); /*0x100ad53f5*/
      if ( v25 ) /*0x100ad53fc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x100ad5405*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24, 8); /*0x100ad5417*/
      v19 = v68; /*0x100ad541c*/
    }
LABEL_45:
    if ( v19 ) /*0x100ad56bb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v19, 1); /*0x100ad56cd*/
    v14 = v67; /*0x100ad5380*/
    if ( !v67 ) /*0x100ad5387*/
    {
      *v56 = 0x8000000000000000LL; /*0x100ad56e8*/
      goto LABEL_48; /*0x100ad56e8*/
    }
  }
  v46 = 0; /*0x100ad5430*/
  v48 = 0; /*0x100ad543b*/
  v49 = v21; /*0x100ad5446*/
  v50 = v47; /*0x100ad544d*/
  while ( 1 ) /*0x100ad54a7*/
  {
    while ( 1 ) /*0x100ad546e*/
    {
      _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb16283f610dc29bd( /*0x100ad546e*/
        v17,
        v16);
      if ( !__src[0] ) /*0x100ad547b*/
      {
        core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(v16); /*0x100ad56b3*/
        goto LABEL_45; /*0x100ad56b3*/
      }
      memcpy(__dst, v17, sizeof(__dst)); /*0x100ad548c*/
      std::fs::DirEntry::file_type::hdd298e01714fd423(&v57, __dst); /*0x100ad549b*/
      if ( (_BYTE)v57 != 1 ) /*0x100ad54a7*/
        break; /*0x100ad54a7*/
      if ( ((unsigned __int8)__s1 & 3) == 1 ) /*0x100ad54b5*/
      {
        v26 = (char *)__s1 - 1; /*0x100ad54bb*/
        v27 = *(_QWORD *)((char *)__s1 - 1); /*0x100ad54bf*/
        v28 = *(_QWORD *)((char *)__s1 + 7); /*0x100ad54c3*/
        if ( *(_QWORD *)v28 ) /*0x100ad54c7*/
          (*(void (__fastcall **)(__int64))v28)(v27); /*0x100ad54d2*/
        v29 = *(_QWORD *)(v28 + 8); /*0x100ad54d4*/
        if ( v29 ) /*0x100ad54db*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16)); /*0x100ad54e4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 24, 8); /*0x100ad54f6*/
        v19 = v68; /*0x100ad54fb*/
      }
LABEL_35:
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100ad5627*/
        goto LABEL_15; /*0x100ad562b*/
    }
    v30 = WORD1(v57); /*0x100ad5510*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v62, __dst); /*0x100ad551e*/
    if ( (v30 & 0xF000) == 0x4000 ) /*0x100ad552f*/
    {
      v31 = v17; /*0x100ad5531*/
      v32 = v16; /*0x100ad5534*/
      v60 = v62; /*0x100ad553b*/
      v33 = v63; /*0x100ad553f*/
      v34 = v64; /*0x100ad5543*/
      v35 = v67; /*0x100ad5547*/
      if ( v67 == v65 ) /*0x100ad554f*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v65); /*0x100ad5555*/
      v36 = v66; /*0x100ad555a*/
      v37 = 3 * v35; /*0x100ad555e*/
      v66[v37] = v60; /*0x100ad5566*/
      v36[v37 + 1] = v33; /*0x100ad556a*/
      v36[v37 + 2] = v34; /*0x100ad556f*/
      v67 = v35 + 1; /*0x100ad5577*/
      v19 = v68; /*0x100ad557b*/
      v16 = v32; /*0x100ad557f*/
      v17 = v31; /*0x100ad5582*/
      goto LABEL_35; /*0x100ad558c*/
    }
    if ( v30 >= -28672 ) /*0x100ad55a8*/
      goto LABEL_33; /*0x100ad55a8*/
    std::fs::DirEntry::file_name::h82e3a94f480fbff7(&v57, __dst); /*0x100ad55b4*/
    if ( v59 != __n || (v38 = __s1, memcmp(__s1, __s2, __n)) ) /*0x100ad55db*/
    {
      if ( v57 ) /*0x100ad55ee*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v57, 1); /*0x100ad55f9*/
LABEL_33:
      if ( v62 ) /*0x100ad560c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v62, 1); /*0x100ad5617*/
      goto LABEL_35; /*0x100ad5617*/
    }
    if ( v57 ) /*0x100ad5640*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v57, 1); /*0x100ad564a*/
    v39 = v63; /*0x100ad564f*/
    if ( (unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::rollout_file_belongs_to_thread::h40fc6d4d854da212( /*0x100ad5668*/
                            v63,
                            v64,
                            v54,
                            v53) )
      break; /*0x100ad5668*/
    if ( v62 ) /*0x100ad567c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v62, 1); /*0x100ad5686*/
    if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100ad5692*/
LABEL_15:
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x100ad5460*/
  }
  v40 = v56; /*0x100ad5730*/
  v56[2] = v64; /*0x100ad5737*/
  v41 = v62; /*0x100ad573b*/
  v40[1] = v63; /*0x100ad5743*/
  *v40 = v41; /*0x100ad5747*/
  if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100ad5751*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x100ad575e*/
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v46); /*0x100ad576a*/
  if ( v19 ) /*0x100ad5772*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v19, 1); /*0x100ad5780*/
  v42 = v67; /*0x100ad5785*/
  if ( v67 ) /*0x100ad578c*/
  {
    v43 = v66 + 1; /*0x100ad5796*/
    do /*0x100ad57a7*/
    {
      v44 = *(v43 - 1); /*0x100ad57ad*/
      if ( v44 ) /*0x100ad57b4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v43, v44, 1); /*0x100ad57be*/
      v43 += 3; /*0x100ad57a0*/
      --v42; /*0x100ad57a4*/
    }
    while ( v42 ); /*0x100ad57a7*/
  }
LABEL_48:
  if ( v65 ) /*0x100ad56f2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, 24 * v65, 8); /*0x100ad5705*/
}