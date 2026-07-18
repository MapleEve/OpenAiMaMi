// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x100a3d6b0 d=1
_QWORD *__fastcall codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h3e0dde50a913824a(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  void *v5; // rbx
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  void *v12; // r13
  size_t v13; // r12
  void *v14; // r8
  _QWORD *v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // r14
  signed __int64 v22; // rbx
  __int64 v23; // r13
  const void *v24; // r15
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r14
  _QWORD *v29; // r15
  _QWORD *result; // rax
  __int64 v31; // rdx
  _QWORD v32[2]; // [rsp+0h] [rbp-220h] BYREF
  char v33; // [rsp+10h] [rbp-210h]
  __int64 v34; // [rsp+11h] [rbp-20Fh]
  __int64 v35; // [rsp+19h] [rbp-207h]
  __int64 v36; // [rsp+21h] [rbp-1FFh]
  _BYTE v37[15]; // [rsp+29h] [rbp-1F7h]
  __int16 v38; // [rsp+38h] [rbp-1E8h]
  char v39; // [rsp+3Ah] [rbp-1E6h]
  void *__s2; // [rsp+40h] [rbp-1E0h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-1D8h]
  char v42; // [rsp+50h] [rbp-1D0h]
  __int64 v43; // [rsp+51h] [rbp-1CFh]
  __int64 v44; // [rsp+59h] [rbp-1C7h]
  __int64 v45; // [rsp+61h] [rbp-1BFh]
  _BYTE v46[15]; // [rsp+69h] [rbp-1B7h]
  __int16 v47; // [rsp+78h] [rbp-1A8h]
  char v48; // [rsp+7Ah] [rbp-1A6h]
  void *__s1; // [rsp+80h] [rbp-1A0h] BYREF
  size_t __n; // [rsp+88h] [rbp-198h]
  char v51; // [rsp+90h] [rbp-190h]
  __int64 v52; // [rsp+91h] [rbp-18Fh]
  __int64 v53; // [rsp+99h] [rbp-187h]
  __int64 v54; // [rsp+A1h] [rbp-17Fh]
  _BYTE v55[15]; // [rsp+A9h] [rbp-177h]
  __int16 v56; // [rsp+B8h] [rbp-168h]
  char v57; // [rsp+BAh] [rbp-166h]
  _QWORD v58[3]; // [rsp+C0h] [rbp-160h] BYREF
  void *v59; // [rsp+D8h] [rbp-148h] BYREF
  _QWORD *v60; // [rsp+E0h] [rbp-140h]
  _BYTE v61[25]; // [rsp+E8h] [rbp-138h]
  _BYTE v62[15]; // [rsp+101h] [rbp-11Fh]
  __int16 v63; // [rsp+110h] [rbp-110h]
  char v64; // [rsp+112h] [rbp-10Eh]
  void *v65; // [rsp+118h] [rbp-108h]
  __int64 v66; // [rsp+120h] [rbp-100h]
  __int64 v67; // [rsp+128h] [rbp-F8h]
  __int64 v68; // [rsp+130h] [rbp-F0h]
  _BYTE v69[15]; // [rsp+138h] [rbp-E8h]
  __int64 v70; // [rsp+148h] [rbp-D8h]
  __int64 v71; // [rsp+150h] [rbp-D0h]
  __int64 v72; // [rsp+158h] [rbp-C8h]
  _BYTE v73[15]; // [rsp+160h] [rbp-C0h]
  _QWORD *v74; // [rsp+170h] [rbp-B0h]
  _QWORD *v75; // [rsp+178h] [rbp-A8h]
  void *v76; // [rsp+180h] [rbp-A0h]
  _QWORD *v77; // [rsp+188h] [rbp-98h]
  __int64 v78; // [rsp+190h] [rbp-90h]
  __int64 v79; // [rsp+198h] [rbp-88h]
  __int64 v80; // [rsp+1A0h] [rbp-80h]
  void *v81; // [rsp+1A8h] [rbp-78h]
  _QWORD *v82; // [rsp+1B0h] [rbp-70h]
  _QWORD *v83; // [rsp+1B8h] [rbp-68h]
  __int64 *v84; // [rsp+1C0h] [rbp-60h]
  __int64 v85; // [rsp+1C8h] [rbp-58h] BYREF
  __int64 v86; // [rsp+1D0h] [rbp-50h]
  __int64 v87; // [rsp+1D8h] [rbp-48h]
  _QWORD *v88; // [rsp+1E0h] [rbp-40h]
  __int64 v89; // [rsp+1E8h] [rbp-38h]
  __int64 v90; // [rsp+1F0h] [rbp-30h]

  v83 = a1; /*0x100a3d6c7*/
  if ( !__OFSUB__(0, a2[90]) ) /*0x100a3d6d4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3dad0*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100a3dadf*/
    if ( !v20 ) /*0x100a3dae7*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100a3dc0a*/
    v21 = (_QWORD *)v20; /*0x100a3daed*/
    v22 = a2[92]; /*0x100a3daf0*/
    if ( v22 < 0 ) /*0x100a3dafa*/
    {
      v23 = 0; /*0x100a3dafc*/
      goto LABEL_30; /*0x100a3dafc*/
    }
    v24 = (const void *)a2[91]; /*0x100a3db0c*/
    if ( v22 ) /*0x100a3db13*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3db19*/
      v23 = 1; /*0x100a3db1e*/
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1u); /*0x100a3db2c*/
      if ( !v25 ) /*0x100a3db34*/
LABEL_30:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23); /*0x100a3daff*/
      v26 = v25; /*0x100a3db36*/
    }
    else
    {
      v26 = 1; /*0x100a3dbb8*/
    }
    memcpy((void *)v26, v24, v22); /*0x100a3dbc7*/
    *v21 = v22; /*0x100a3dbcc*/
    v21[1] = v26; /*0x100a3dbcf*/
    v21[2] = v22; /*0x100a3dbd3*/
    result = v83; /*0x100a3dbd7*/
    *v83 = 1; /*0x100a3dbdb*/
    result[1] = v21; /*0x100a3dbe2*/
    result[2] = 1; /*0x100a3dbe6*/
    return result; /*0x100a3dbff*/
  }
  v3 = a2[1]; /*0x100a3d6da*/
  v4 = a2[2]; /*0x100a3d6de*/
  v85 = 0; /*0x100a3d6e2*/
  v86 = 8; /*0x100a3d6ea*/
  v87 = 0; /*0x100a3d6f2*/
  codexmate_lib::platform::paths::CodexPaths::state_db_search_dirs::ha11ba42e47ba4078(&v59, v3, v4); /*0x100a3d701*/
  v5 = v59; /*0x100a3d706*/
  v6 = v60; /*0x100a3d70d*/
  v7 = &v60[4 * *(_QWORD *)v61]; /*0x100a3d722*/
  v74 = v60; /*0x100a3d725*/
  v75 = v60; /*0x100a3d72c*/
  v76 = v59; /*0x100a3d733*/
  v77 = v7; /*0x100a3d73a*/
  v84 = v60; /*0x100a3d741*/
  if ( !*(_QWORD *)v61 ) /*0x100a3d748*/
    goto LABEL_36; /*0x100a3d748*/
  v8 = v84; /*0x100a3d74e*/
  v81 = v59; /*0x100a3d752*/
  v82 = &v60[4 * *(_QWORD *)v61]; /*0x100a3d756*/
  while ( 1 ) /*0x100a3d786*/
  {
    v6 = v8 + 4; /*0x100a3d786*/
    v79 = *v8; /*0x100a3d78d*/
    if ( v79 == 0x8000000000000000LL ) /*0x100a3d7a1*/
      break; /*0x100a3d7a1*/
    v9 = v8[2]; /*0x100a3d7ab*/
    v80 = v8[1]; /*0x100a3d7b6*/
    codexmate_lib::platform::paths::CodexPaths::highest_state_db::h0ebccf63eecdb81a(v58, v80, v9); /*0x100a3d7ba*/
    if ( v58[0] != 0x8000000000000000LL ) /*0x100a3d7d3*/
    {
      v90 = v58[0]; /*0x100a3d7d5*/
      v88 = v6; /*0x100a3d7d9*/
      v89 = v58[1]; /*0x100a3d7e4*/
      v78 = v58[2]; /*0x100a3d7ef*/
      v10 = v86; /*0x100a3d7f6*/
      v11 = 24 * v87; /*0x100a3d802*/
      while ( v11 ) /*0x100a3d813*/
      {
        std::path::Path::components::he8b0f71a48373be5(&__s1, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16)); /*0x100a3d828*/
        std::path::Path::components::he8b0f71a48373be5(&__s2, v89, v78); /*0x100a3d83f*/
        v12 = __s1; /*0x100a3d844*/
        v13 = __n; /*0x100a3d84b*/
        v14 = __s2; /*0x100a3d852*/
        v15 = v41; /*0x100a3d859*/
        if ( (_QWORD *)__n != v41 /*0x100a3d8a4*/
          || (_BYTE)v56 != (_BYTE)v47
          || HIBYTE(v56) != 2
          || HIBYTE(v47) != 2
          || (v65 = __s2, v16 = memcmp(__s1, __s2, __n), v14 = v65, v16) )
        {
          if ( v51 != 6 ) /*0x100a3d8b3*/
          {
            *(_QWORD *)&v73[7] = *(_QWORD *)&v55[7]; /*0x100a3d8c0*/
            *(_QWORD *)v73 = *(_QWORD *)v55; /*0x100a3d8cb*/
            v72 = v54; /*0x100a3d8d6*/
            v71 = v53; /*0x100a3d8e4*/
            v70 = v52; /*0x100a3d8eb*/
          }
          v32[0] = v12; /*0x100a3d900*/
          v32[1] = v13; /*0x100a3d907*/
          v33 = v51; /*0x100a3d90e*/
          *(_QWORD *)&v37[7] = *(_QWORD *)&v73[7]; /*0x100a3d922*/
          *(_QWORD *)v37 = *(_QWORD *)v73; /*0x100a3d92d*/
          v36 = v72; /*0x100a3d938*/
          v35 = v71; /*0x100a3d94a*/
          v34 = v70; /*0x100a3d94e*/
          v38 = v56; /*0x100a3d951*/
          v39 = v57; /*0x100a3d958*/
          if ( v42 != 6 ) /*0x100a3d967*/
          {
            *(_QWORD *)&v69[7] = *(_QWORD *)&v46[7]; /*0x100a3d974*/
            *(_QWORD *)v69 = *(_QWORD *)v46; /*0x100a3d97f*/
            v68 = v45; /*0x100a3d98a*/
            v67 = v44; /*0x100a3d998*/
            v66 = v43; /*0x100a3d99f*/
          }
          v59 = v14; /*0x100a3d9b4*/
          v60 = v15; /*0x100a3d9bb*/
          v61[0] = v42; /*0x100a3d9c2*/
          *(_QWORD *)&v62[7] = *(_QWORD *)&v69[7]; /*0x100a3d9d6*/
          *(_QWORD *)v62 = *(_QWORD *)v69; /*0x100a3d9e1*/
          *(_QWORD *)&v61[17] = v68; /*0x100a3d9ec*/
          *(_QWORD *)&v61[9] = v67; /*0x100a3d9fe*/
          *(_QWORD *)&v61[1] = v66; /*0x100a3da02*/
          v63 = v47; /*0x100a3da05*/
          v64 = v48; /*0x100a3da0c*/
          v10 += 24; /*0x100a3da25*/
          v11 -= 24; /*0x100a3da29*/
          if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD *, void **))core::iter::traits::iterator::Iterator::eq_by::h503c0ee61ddcdabe)( /*0x100a3da20*/
                                   v32,
                                   &v59) )
            continue; /*0x100a3da20*/
        }
        v5 = v81; /*0x100a3da3c*/
        v7 = v82; /*0x100a3da40*/
        v6 = v88; /*0x100a3da44*/
        if ( v90 ) /*0x100a3da48*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3da57*/
        goto LABEL_4; /*0x100a3da5c*/
      }
      v17 = v87; /*0x100a3da70*/
      if ( v87 == v85 ) /*0x100a3da78*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v85); /*0x100a3da7e*/
      v18 = v86; /*0x100a3da83*/
      v19 = 3 * v17; /*0x100a3da87*/
      *(_QWORD *)(v86 + 8 * v19) = v90; /*0x100a3da8f*/
      *(_QWORD *)(v18 + 8 * v19 + 8) = v89; /*0x100a3da97*/
      *(_QWORD *)(v18 + 8 * v19 + 16) = v78; /*0x100a3daa3*/
      v87 = v17 + 1; /*0x100a3daab*/
      v5 = v81; /*0x100a3daaf*/
      v7 = v82; /*0x100a3dab3*/
      v6 = v88; /*0x100a3dab7*/
      if ( !v79 ) /*0x100a3dac5*/
        goto LABEL_6; /*0x100a3dac5*/
LABEL_5:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3d76c*/
      goto LABEL_6; /*0x100a3d775*/
    }
LABEL_4:
    if ( v79 ) /*0x100a3d76a*/
      goto LABEL_5; /*0x100a3d76a*/
LABEL_6:
    v8 = v6; /*0x100a3d77a*/
    if ( v6 == v7 ) /*0x100a3d780*/
    {
      v6 = v7; /*0x100a3db3e*/
      break; /*0x100a3db3e*/
    }
  }
  v75 = v6; /*0x100a3db41*/
LABEL_36:
  v27 = (char *)v7 - (char *)v6; /*0x100a3db48*/
  if ( v27 ) /*0x100a3db4b*/
  {
    v28 = v27 >> 5; /*0x100a3db4d*/
    v29 = v6 + 1; /*0x100a3db51*/
    do /*0x100a3db67*/
    {
      if ( *(v29 - 1) ) /*0x100a3db69*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3db7a*/
      v29 += 4; /*0x100a3db60*/
      --v28; /*0x100a3db64*/
    }
    while ( v28 ); /*0x100a3db67*/
  }
  if ( v5 ) /*0x100a3db84*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3db96*/
  result = v83; /*0x100a3db9f*/
  v83[2] = v87; /*0x100a3dba3*/
  v31 = v85; /*0x100a3dba7*/
  result[1] = v86; /*0x100a3dbaf*/
  *result = v31; /*0x100a3dbb3*/
  return result; /*0x100a3dbee*/
}