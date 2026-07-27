// __ZN13codexmate_lib8platform7process26collect_codex_kill_targets @ 0x100362e80
__int64 __fastcall codexmate_lib::platform::process::collect_codex_kill_targets::hff13fe245335b237(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  char *v5; // r15
  unsigned int *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // rax
  char *v15; // r13
  char *v16; // r15
  char *v17; // rax
  __int64 v18; // r12
  unsigned int v19; // ebx
  __int64 v20; // r14
  __int64 v21; // r14
  unsigned int *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r13
  _QWORD *v26; // r15
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-180h]
  char *v30; // [rsp+8h] [rbp-178h]
  __int64 v31; // [rsp+18h] [rbp-168h]
  char *v32; // [rsp+20h] [rbp-160h]
  __int64 v33; // [rsp+28h] [rbp-158h] BYREF
  __int64 v34; // [rsp+30h] [rbp-150h]
  char *v35; // [rsp+38h] [rbp-148h]
  __int64 v36; // [rsp+40h] [rbp-140h]
  __int64 v37; // [rsp+48h] [rbp-138h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-130h] BYREF
  unsigned int *v39; // [rsp+58h] [rbp-128h]
  __int64 v40; // [rsp+60h] [rbp-120h]
  __int64 v41; // [rsp+68h] [rbp-118h]
  __int64 v42; // [rsp+70h] [rbp-110h]
  __int64 v43; // [rsp+78h] [rbp-108h]
  __int64 v44; // [rsp+80h] [rbp-100h]
  __int64 v45; // [rsp+88h] [rbp-F8h]
  __int64 v46; // [rsp+90h] [rbp-F0h]
  __int64 v47; // [rsp+98h] [rbp-E8h]
  __int64 v48; // [rsp+A0h] [rbp-E0h]
  __int64 v49; // [rsp+A8h] [rbp-D8h]
  __int64 v50; // [rsp+B0h] [rbp-D0h]
  __int64 v51; // [rsp+B8h] [rbp-C8h] BYREF
  char *v52; // [rsp+C0h] [rbp-C0h]
  __int64 v53; // [rsp+C8h] [rbp-B8h]
  __int64 v54; // [rsp+D0h] [rbp-B0h]
  __int64 v55; // [rsp+D8h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-A0h]
  __int64 v57; // [rsp+E8h] [rbp-98h]
  __int64 v58; // [rsp+F0h] [rbp-90h]
  __int64 v59; // [rsp+F8h] [rbp-88h]
  __int64 v60; // [rsp+100h] [rbp-80h]
  __int64 v61; // [rsp+108h] [rbp-78h]
  __int64 v62; // [rsp+110h] [rbp-70h]
  __int64 v63; // [rsp+118h] [rbp-68h]
  __int64 v64; // [rsp+120h] [rbp-60h]
  unsigned __int64 v65; // [rsp+128h] [rbp-58h] BYREF
  unsigned int *v66; // [rsp+130h] [rbp-50h]
  __int64 v67; // [rsp+138h] [rbp-48h]
  unsigned __int64 v68; // [rsp+140h] [rbp-40h] BYREF
  __int64 v69; // [rsp+148h] [rbp-38h]
  __int64 v70; // [rsp+150h] [rbp-30h]

  codexmate_lib::platform::process::list_codex_processes_matching::h0a0e1238c317b39e(&v51); /*0x100362e9e*/
  result = v51; /*0x100362ea3*/
  if ( v51 == 11 ) /*0x100362ec3*/
  {
    v33 = v53; /*0x100362ed0*/
    v34 = v53; /*0x100362ed7*/
    v35 = v52; /*0x100362ede*/
    v36 = v53 + 32 * v54; /*0x100362ee5*/
    alloc::vec::in_place_collect::from_iter_in_place::h92d26ab726254b06(&v38, &v33); /*0x100362efa*/
    v68 = v38; /*0x100362f0d*/
    v65 = v38; /*0x100362f18*/
    v66 = v39; /*0x100362f1c*/
    v67 = v40; /*0x100362f20*/
    codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(&v51); /*0x100362f2b*/
    v2 = v51; /*0x100362f3a*/
    if ( __OFSUB__(-v51, 1) ) /*0x100362f44*/
    {
      v68 = 0x8000000000000000LL; /*0x100362f4d*/
    }
    else
    {
      v5 = v52; /*0x100363062*/
      codexmate_lib::platform::process::codex_macos_bundle_main_executable::h65e006069063e1dd( /*0x100363077*/
        &v68,
        v52,
        v53,
        0x8000000000000000LL);
      if ( v2 ) /*0x10036307f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v2, 1); /*0x10036308c*/
    }
    v6 = v66; /*0x100363091*/
    v7 = v67; /*0x100363095*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1003630a0*/
    v9 = v8; /*0x1003630a2*/
    if ( *(_BYTE *)(v8 + 16) == 1 ) /*0x1003630a9*/
    {
      v10 = *(_QWORD *)v8; /*0x1003630af*/
      v11 = *(_QWORD *)(v9 + 8); /*0x1003630b2*/
    }
    else
    {
      v10 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100363421*/
      *(_QWORD *)v9 = v10; /*0x100363426*/
      *(_QWORD *)(v9 + 8) = v11; /*0x100363429*/
      *(_BYTE *)(v9 + 16) = 1; /*0x10036342d*/
    }
    *(_QWORD *)v9 = v10 + 1; /*0x1003630ba*/
    v54 = 0; /*0x1003630c4*/
    v53 = 0; /*0x1003630d2*/
    v52 = nullptr; /*0x1003630e0*/
    v51 = (__int64)anon_b0ee9adff4519c22b647af231a5a39fa_24; /*0x1003630ee*/
    v55 = v10; /*0x1003630f5*/
    v56 = v11; /*0x1003630fc*/
    if ( v7 ) /*0x100363106*/
    {
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h77c2bf960bb0f41e(&v51, v7, &v55, 1); /*0x10036344c*/
      do /*0x10036346a*/
      {
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he8d93d7117e279f5(&v51, *v6); /*0x10036345e*/
        v6 += 8; /*0x100363463*/
        --v7; /*0x100363467*/
      }
      while ( v7 ); /*0x10036346a*/
    }
    v42 = v56; /*0x10036311a*/
    v41 = v55; /*0x100363128*/
    v40 = v54; /*0x100363136*/
    v39 = (unsigned int *)v53; /*0x100363144*/
    v38 = (unsigned __int64)v52; /*0x100363159*/
    v37 = v51; /*0x100363160*/
    codexmate_lib::platform::process::list_codex_db_holder_processes::hfeff6cd4dce4f953(&v51); /*0x10036316e*/
    v12 = v51; /*0x100363173*/
    v13 = v52; /*0x10036317a*/
    v14 = v53; /*0x100363181*/
    v15 = &v52[32 * v53]; /*0x10036318f*/
    v51 = (__int64)v52; /*0x100363192*/
    v31 = v12; /*0x1003631a0*/
    v53 = v12; /*0x1003631a7*/
    v54 = (__int64)v15; /*0x1003631ae*/
    v16 = v52; /*0x1003631b5*/
    if ( v14 ) /*0x1003631bb*/
    {
      if ( v68 == 0x8000000000000000LL ) /*0x1003631cf*/
        v49 = 0; /*0x1003631de*/
      else
        v49 = v69; /*0x1003631d5*/
      v29 = v70; /*0x1003631ed*/
      v32 = v52; /*0x1003631f4*/
      v16 = v52 + 32; /*0x1003631fb*/
      while ( 1 ) /*0x100363225*/
      {
        v18 = *((_QWORD *)v16 - 3); /*0x100363225*/
        if ( v18 == 0x8000000000000000LL ) /*0x100363236*/
          break; /*0x100363236*/
        v19 = *((_DWORD *)v16 - 8); /*0x10036323c*/
        v20 = *((_QWORD *)v16 - 1); /*0x100363244*/
        v63 = *((_QWORD *)v16 - 2); /*0x100363248*/
        if ( (unsigned __int8)codexmate_lib::platform::process::is_codex_related_command_with_main::h90488d9238bc6272( /*0x100363273*/
                                v63,
                                v20,
                                v49,
                                v29)
          && !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he8d93d7117e279f5(&v37, v19) )
        {
          codexmate_lib::platform::process::extract_process_name::h50a7d2a16f8e5f38(&v33, v63, v20); /*0x10036328e*/
          v64 = v33; /*0x10036329a*/
          v50 = v34; /*0x1003632a5*/
          v30 = v35; /*0x1003632b3*/
          v21 = v67; /*0x1003632ba*/
          if ( v67 == v65 ) /*0x1003632c2*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v65); /*0x1003632c8*/
          v22 = v66; /*0x1003632cd*/
          v23 = 8 * v21; /*0x1003632d4*/
          v66[v23] = v19; /*0x1003632d8*/
          *(_QWORD *)&v22[v23 + 2] = v64; /*0x1003632df*/
          *(_QWORD *)&v22[v23 + 4] = v50; /*0x1003632eb*/
          *(_QWORD *)&v22[v23 + 6] = v30; /*0x1003632f7*/
          v67 = v21 + 1; /*0x1003632ff*/
        }
        if ( v18 ) /*0x100363306*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v18, 1); /*0x100363318*/
        v17 = v16 - 32; /*0x100363210*/
        v16 += 32; /*0x100363214*/
        if ( v17 + 32 == v15 ) /*0x10036321f*/
        {
          v16 = v15; /*0x100363322*/
          break; /*0x100363322*/
        }
      }
      v52 = v16; /*0x100363325*/
      v13 = v32; /*0x10036332c*/
    }
    v24 = v15 - v16; /*0x100363333*/
    if ( v24 ) /*0x100363336*/
    {
      v25 = v24 >> 5; /*0x100363338*/
      v26 = v16 + 16; /*0x10036333c*/
      do /*0x100363357*/
      {
        v27 = *(v26 - 1); /*0x100363359*/
        if ( v27 ) /*0x100363360*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v26, v27, 1); /*0x10036336a*/
        v26 += 4; /*0x100363350*/
        --v25; /*0x100363354*/
      }
      while ( v25 ); /*0x100363357*/
    }
    if ( v31 ) /*0x10036337b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 32 * v31, 8); /*0x100363389*/
    if ( v38 ) /*0x1003633a9*/
    {
      v28 = (4 * v38 + 19) & 0xFFFFFFFFFFFFFFF0LL; /*0x1003633b3*/
      if ( v28 + v38 != -17 ) /*0x1003633be*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37 - v28, v28 + v38 + 17, 16); /*0x1003633cf*/
    }
    if ( v68 != 0x8000000000000000LL ) /*0x1003633db*/
    {
      if ( v68 ) /*0x1003633e0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x1003633eb*/
    }
    a1[3] = v67; /*0x1003633f4*/
    result = v65; /*0x1003633f8*/
    a1[2] = (__int64)v66; /*0x100363400*/
    a1[1] = result; /*0x100363404*/
    *a1 = 11; /*0x100363408*/
  }
  else
  {
    v48 = v62; /*0x100362f5a*/
    v47 = v61; /*0x100362f65*/
    v46 = v60; /*0x100362f70*/
    v45 = v59; /*0x100362f7e*/
    v44 = v58; /*0x100362f8c*/
    v43 = v57; /*0x100362f9a*/
    v42 = v56; /*0x100362faf*/
    v41 = v55; /*0x100362fb6*/
    v38 = (unsigned __int64)v52; /*0x100362fbd*/
    v39 = (unsigned int *)v53; /*0x100362fc4*/
    v40 = v54; /*0x100362fcb*/
    v70 = v54; /*0x100362fd2*/
    v69 = v53; /*0x100362fd6*/
    v68 = (unsigned __int64)v52; /*0x100362fda*/
    a1[11] = v62; /*0x100362fe5*/
    a1[10] = v47; /*0x100362ff1*/
    a1[9] = v46; /*0x100362ffd*/
    a1[8] = v45; /*0x100363009*/
    a1[7] = v44; /*0x100363015*/
    a1[6] = v43; /*0x100363021*/
    v3 = v41; /*0x100363026*/
    a1[5] = v42; /*0x100363034*/
    a1[4] = v3; /*0x100363039*/
    a1[3] = v70; /*0x100363042*/
    v4 = v68; /*0x100363047*/
    a1[2] = v69; /*0x10036304f*/
    a1[1] = v4; /*0x100363054*/
    *a1 = result; /*0x100363059*/
  }
  return result; /*0x10036340f*/
}