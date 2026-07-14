// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1004d5e90 d=1
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs_for_home::h53819d65dd7d53b6(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r15
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rbx
  __int64 i; // rbx
  __int64 v9; // rcx
  void *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // r14
  void *v14; // r15
  size_t v15; // r12
  size_t v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  void *v20; // rbx
  __int64 v21; // r13
  __int64 v22; // r14
  void *v23; // r15
  size_t v24; // r12
  void *v25; // r8
  size_t v26; // rbx
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+8h] [rbp-218h]
  __int64 v33; // [rsp+10h] [rbp-210h]
  size_t v34; // [rsp+18h] [rbp-208h]
  void *v35; // [rsp+28h] [rbp-1F8h]
  size_t v36; // [rsp+30h] [rbp-1F0h]
  __int64 v37; // [rsp+38h] [rbp-1E8h]
  void *v38; // [rsp+40h] [rbp-1E0h] BYREF
  size_t v39; // [rsp+48h] [rbp-1D8h]
  _BYTE v40[9]; // [rsp+50h] [rbp-1D0h]
  __int64 v41; // [rsp+59h] [rbp-1C7h]
  __int64 v42; // [rsp+61h] [rbp-1BFh]
  _BYTE v43[15]; // [rsp+69h] [rbp-1B7h]
  __int16 v44; // [rsp+78h] [rbp-1A8h]
  char v45; // [rsp+7Ah] [rbp-1A6h]
  void *__s1; // [rsp+80h] [rbp-1A0h] BYREF
  size_t __n; // [rsp+88h] [rbp-198h]
  char v48; // [rsp+90h] [rbp-190h]
  __int64 v49; // [rsp+91h] [rbp-18Fh]
  __int64 v50; // [rsp+99h] [rbp-187h]
  __int64 v51; // [rsp+A1h] [rbp-17Fh]
  _BYTE v52[15]; // [rsp+A9h] [rbp-177h]
  __int16 v53; // [rsp+B8h] [rbp-168h]
  char v54; // [rsp+BAh] [rbp-166h]
  void *v55; // [rsp+C0h] [rbp-160h] BYREF
  size_t v56; // [rsp+C8h] [rbp-158h]
  _BYTE v57[40]; // [rsp+D0h] [rbp-150h]
  __int16 v58; // [rsp+F8h] [rbp-128h]
  char v59; // [rsp+FAh] [rbp-126h]
  __int64 v60; // [rsp+100h] [rbp-120h] BYREF
  __int64 v61; // [rsp+108h] [rbp-118h]
  __int64 v62; // [rsp+110h] [rbp-110h]
  void *__s2; // [rsp+118h] [rbp-108h] BYREF
  size_t v64; // [rsp+120h] [rbp-100h]
  _BYTE v65[17]; // [rsp+128h] [rbp-F8h]
  unsigned __int64 v66; // [rsp+139h] [rbp-E7h]
  _BYTE v67[15]; // [rsp+141h] [rbp-DFh]
  __int16 v68; // [rsp+150h] [rbp-D0h]
  char v69; // [rsp+152h] [rbp-CEh]
  void *v70; // [rsp+158h] [rbp-C8h]
  __int128 v71; // [rsp+160h] [rbp-C0h]
  unsigned __int64 v72; // [rsp+170h] [rbp-B0h]
  _BYTE v73[15]; // [rsp+178h] [rbp-A8h]
  __int64 v74; // [rsp+188h] [rbp-98h]
  __int64 v75; // [rsp+190h] [rbp-90h]
  __int64 v76; // [rsp+198h] [rbp-88h]
  _BYTE v77[15]; // [rsp+1A0h] [rbp-80h]
  __int64 v78; // [rsp+1B0h] [rbp-70h]
  _QWORD *v79; // [rsp+1B8h] [rbp-68h]
  __int64 v80; // [rsp+1C0h] [rbp-60h] BYREF
  __int64 v81; // [rsp+1C8h] [rbp-58h]
  __int64 v82; // [rsp+1D0h] [rbp-50h]
  size_t v83; // [rsp+1D8h] [rbp-48h]
  void *v84; // [rsp+1E0h] [rbp-40h]
  __int64 v85; // [rsp+1E8h] [rbp-38h]
  __int64 v86; // [rsp+1F0h] [rbp-30h]

  v4 = a1; /*0x1004d5eaa*/
  v80 = 0; /*0x1004d5ead*/
  v81 = 8; /*0x1004d5eb5*/
  v82 = 0; /*0x1004d5ebd*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d5ed9*/
    &__s2,
    a2,
    a3,
    "sqlitestate_5.sqliteLibrary/LaunchAgents/dev.aimami.auto-switch.plistcodexmatecustom-instructionsrelayauth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    6);
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v38, a2, a3); /*0x1004d5eeb*/
  *(_QWORD *)v57 = *(_QWORD *)v65; /*0x1004d5ef7*/
  v7 = __s2; /*0x1004d5efe*/
  v56 = v64; /*0x1004d5f0c*/
  v55 = __s2; /*0x1004d5f13*/
  *(_QWORD *)&v57[8] = v38; /*0x1004d5f28*/
  *(_QWORD *)&v57[16] = v39; /*0x1004d5f2f*/
  *(_QWORD *)&v57[24] = *(_QWORD *)v40; /*0x1004d5f3d*/
  v37 = *(_QWORD *)v40; /*0x1004d5f44*/
  v36 = v39; /*0x1004d5f4b*/
  v35 = v38; /*0x1004d5f52*/
  v34 = v64; /*0x1004d5f60*/
  if ( __OFSUB__(-(__int64)__s2, 1) ) /*0x1004d5f87*/
  {
    for ( i = 0; i != 24; i += 24 ) /*0x1004d5f8c*/
    {
      if ( *(void **)((char *)&v35 + i) ) /*0x1004d5f9e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d5fb8*/
    }
  }
  else
  {
    codexmate_lib::platform::paths::CodexPaths::highest_state_db::ha8f8ab1f72fa3776( /*0x1004d5fdd*/
      &v60,
      v64,
      *(_QWORD *)v65,
      v64,
      v5,
      v6,
      1,
      2,
      __s2);
    if ( v60 != 0x8000000000000000LL ) /*0x1004d5ff6*/
    {
      v86 = v60; /*0x1004d5ffc*/
      v79 = a1; /*0x1004d6000*/
      v83 = v34; /*0x1004d6004*/
      v84 = v7; /*0x1004d6008*/
      v85 = v61; /*0x1004d6013*/
      v78 = v62; /*0x1004d601e*/
      v12 = v81; /*0x1004d6022*/
      v13 = 24 * v82; /*0x1004d602e*/
      while ( v13 ) /*0x1004d6043*/
      {
        std::path::Path::components::he8b0f71a48373be5(&__s1, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16)); /*0x1004d6058*/
        std::path::Path::components::he8b0f71a48373be5(&__s2, v85, v78); /*0x1004d606c*/
        v14 = __s1; /*0x1004d6071*/
        v15 = __n; /*0x1004d6078*/
        v10 = __s2; /*0x1004d607f*/
        v16 = v64; /*0x1004d6086*/
        if ( __n != v64 /*0x1004d60d1*/
          || (_BYTE)v53 != (_BYTE)v68
          || HIBYTE(v53) != 2
          || HIBYTE(v68) != 2
          || (v70 = __s2, v17 = memcmp(__s1, __s2, __n), v10 = v70, v17) )
        {
          if ( v48 != 6 ) /*0x1004d60e0*/
          {
            *(_QWORD *)&v77[7] = *(_QWORD *)&v52[7]; /*0x1004d60ed*/
            *(_QWORD *)v77 = *(_QWORD *)v52; /*0x1004d60f5*/
            v76 = v51; /*0x1004d60fd*/
            v75 = v50; /*0x1004d610b*/
            v74 = v49; /*0x1004d6112*/
          }
          v38 = v14; /*0x1004d6127*/
          v39 = v15; /*0x1004d612e*/
          v40[0] = v48; /*0x1004d6135*/
          *(_QWORD *)&v43[7] = *(_QWORD *)&v77[7]; /*0x1004d6146*/
          *(_QWORD *)v43 = *(_QWORD *)v77; /*0x1004d614e*/
          v42 = v76; /*0x1004d6159*/
          v41 = v75; /*0x1004d616b*/
          *(_QWORD *)&v40[1] = v74; /*0x1004d616f*/
          v44 = v53; /*0x1004d6172*/
          v45 = v54; /*0x1004d6179*/
          if ( v65[0] != 6 ) /*0x1004d6188*/
          {
            *(_QWORD *)&v73[7] = *(_QWORD *)&v67[7]; /*0x1004d6195*/
            *(_QWORD *)v73 = *(_QWORD *)v67; /*0x1004d61a0*/
            v72 = v66; /*0x1004d61ab*/
            v71 = *(_OWORD *)&v65[1]; /*0x1004d61c0*/
          }
          v55 = v10; /*0x1004d61d5*/
          v56 = v16; /*0x1004d61dc*/
          v57[0] = v65[0]; /*0x1004d61e3*/
          *(_QWORD *)&v57[32] = *(_QWORD *)&v73[7]; /*0x1004d61f7*/
          *(_OWORD *)&v57[17] = __PAIR128__(*(unsigned __int64 *)v73, v72); /*0x1004d620d*/
          *(_OWORD *)&v57[1] = v71; /*0x1004d6223*/
          v58 = v68; /*0x1004d6226*/
          v59 = v69; /*0x1004d622d*/
          v12 += 24; /*0x1004d6246*/
          v13 -= 24; /*0x1004d624a*/
          if ( !(unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h77f76f8e43e3e623(&v38, &v55) ) /*0x1004d6241*/
            continue; /*0x1004d6241*/
        }
        v7 = v84; /*0x1004d625d*/
        v4 = v79; /*0x1004d6265*/
        if ( v86 ) /*0x1004d6273*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d627e*/
        goto LABEL_24; /*0x1004d6283*/
      }
      v18 = v82; /*0x1004d6285*/
      if ( v82 == v80 ) /*0x1004d628d*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v80); /*0x1004d6299*/
      v19 = v81; /*0x1004d629e*/
      v9 = 3 * v18; /*0x1004d62a2*/
      *(_QWORD *)(v81 + 8 * v9) = v86; /*0x1004d62aa*/
      *(_QWORD *)(v19 + 8 * v9 + 8) = v85; /*0x1004d62b2*/
      *(_QWORD *)(v19 + 8 * v9 + 16) = v78; /*0x1004d62bb*/
      v82 = v18 + 1; /*0x1004d62c3*/
      v7 = v84; /*0x1004d62c7*/
      v4 = v79; /*0x1004d62cf*/
    }
LABEL_24:
    if ( v7 ) /*0x1004d62e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d62ed*/
    v20 = v35; /*0x1004d62fd*/
    if ( v35 != (void *)0x8000000000000000LL ) /*0x1004d6307*/
    {
      codexmate_lib::platform::paths::CodexPaths::highest_state_db::ha8f8ab1f72fa3776( /*0x1004d632b*/
        &v60,
        v36,
        v37,
        v9,
        v10,
        v11,
        2,
        v32,
        v33);
      if ( v60 != 0x8000000000000000LL ) /*0x1004d633a*/
      {
        v86 = v60; /*0x1004d6340*/
        v79 = v4; /*0x1004d6344*/
        v83 = v36; /*0x1004d6348*/
        v84 = v35; /*0x1004d634c*/
        v85 = v61; /*0x1004d6357*/
        v78 = v62; /*0x1004d6362*/
        v21 = v81; /*0x1004d6366*/
        v22 = 24 * v82; /*0x1004d6372*/
        while ( v22 ) /*0x1004d6383*/
        {
          std::path::Path::components::he8b0f71a48373be5(&__s1, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16)); /*0x1004d6398*/
          std::path::Path::components::he8b0f71a48373be5(&__s2, v85, v78); /*0x1004d63ac*/
          v23 = __s1; /*0x1004d63b1*/
          v24 = __n; /*0x1004d63b8*/
          v25 = __s2; /*0x1004d63bf*/
          v26 = v64; /*0x1004d63c6*/
          if ( __n != v64 /*0x1004d6411*/
            || (_BYTE)v53 != (_BYTE)v68
            || HIBYTE(v53) != 2
            || HIBYTE(v68) != 2
            || (v70 = __s2, v27 = memcmp(__s1, __s2, __n), v25 = v70, v27) )
          {
            if ( v48 != 6 ) /*0x1004d6420*/
            {
              *(_QWORD *)&v77[7] = *(_QWORD *)&v52[7]; /*0x1004d642d*/
              *(_QWORD *)v77 = *(_QWORD *)v52; /*0x1004d6435*/
              v76 = v51; /*0x1004d643d*/
              v75 = v50; /*0x1004d644b*/
              v74 = v49; /*0x1004d6452*/
            }
            v38 = v23; /*0x1004d6467*/
            v39 = v24; /*0x1004d646e*/
            v40[0] = v48; /*0x1004d6475*/
            *(_QWORD *)&v43[7] = *(_QWORD *)&v77[7]; /*0x1004d6486*/
            *(_QWORD *)v43 = *(_QWORD *)v77; /*0x1004d648e*/
            v42 = v76; /*0x1004d6499*/
            v41 = v75; /*0x1004d64ab*/
            *(_QWORD *)&v40[1] = v74; /*0x1004d64af*/
            v44 = v53; /*0x1004d64b2*/
            v45 = v54; /*0x1004d64b9*/
            if ( v65[0] != 6 ) /*0x1004d64c8*/
            {
              *(_QWORD *)&v73[7] = *(_QWORD *)&v67[7]; /*0x1004d64d5*/
              *(_QWORD *)v73 = *(_QWORD *)v67; /*0x1004d64e0*/
              v72 = v66; /*0x1004d64eb*/
              v71 = *(_OWORD *)&v65[1]; /*0x1004d6500*/
            }
            v55 = v25; /*0x1004d6515*/
            v56 = v26; /*0x1004d651c*/
            v57[0] = v65[0]; /*0x1004d6523*/
            *(_QWORD *)&v57[32] = *(_QWORD *)&v73[7]; /*0x1004d6537*/
            *(_QWORD *)&v57[25] = *(_QWORD *)v73; /*0x1004d6542*/
            *(_QWORD *)&v57[17] = v72; /*0x1004d654d*/
            *(_OWORD *)&v57[1] = v71; /*0x1004d6563*/
            v58 = v68; /*0x1004d6566*/
            v59 = v69; /*0x1004d656d*/
            v21 += 24; /*0x1004d6586*/
            v22 -= 24; /*0x1004d658a*/
            if ( !(unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h77f76f8e43e3e623(&v38, &v55) ) /*0x1004d6581*/
              continue; /*0x1004d6581*/
          }
          v20 = v84; /*0x1004d659d*/
          v4 = v79; /*0x1004d65a5*/
          if ( v86 ) /*0x1004d65a9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d65b4*/
          goto LABEL_45; /*0x1004d65b9*/
        }
        v28 = v82; /*0x1004d65bb*/
        if ( v82 == v80 ) /*0x1004d65c3*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v80); /*0x1004d65cf*/
        v29 = v81; /*0x1004d65d4*/
        v30 = 3 * v28; /*0x1004d65d8*/
        *(_QWORD *)(v81 + 8 * v30) = v86; /*0x1004d65e0*/
        *(_QWORD *)(v29 + 8 * v30 + 8) = v85; /*0x1004d65e8*/
        *(_QWORD *)(v29 + 8 * v30 + 16) = v78; /*0x1004d65f1*/
        v82 = v28 + 1; /*0x1004d65f9*/
        v20 = v84; /*0x1004d65fd*/
        v4 = v79; /*0x1004d6605*/
      }
LABEL_45:
      if ( v20 ) /*0x1004d660c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d6619*/
    }
  }
  v4[2] = v82; /*0x1004d6622*/
  result = v80; /*0x1004d6626*/
  v4[1] = v81; /*0x1004d662e*/
  *v4 = result; /*0x1004d6632*/
  return result; /*0x1004d6635*/
}