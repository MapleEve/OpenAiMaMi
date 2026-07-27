// __ZN13codexmate_lib4core5relay12codex_writer22user_top_level_profile @ 0x1007c0dd0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_writer::user_top_level_profile::h38b499de53adc2fb(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // r14
  size_t v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r14
  size_t v17; // r8
  __int64 *v18; // rdi
  __int64 *v19; // rsi
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 **v22; // r14
  size_t v23; // rdx
  _QWORD *v24; // r13
  size_t v25; // rbx
  __int64 v26; // rbx
  int v27; // eax
  bool v28; // zf
  bool v29; // sf
  __int64 v30; // rsi
  __int64 v32; // rdi
  void *v33; // rax
  __int64 v34; // r13
  void *v35; // rax
  __int64 v36; // [rsp+18h] [rbp-298h] BYREF
  __int64 v37; // [rsp+20h] [rbp-290h]
  __int64 *v38; // [rsp+28h] [rbp-288h]
  __int64 *v39; // [rsp+30h] [rbp-280h]
  __int64 *v40; // [rsp+38h] [rbp-278h]
  void *v41; // [rsp+40h] [rbp-270h]
  _QWORD *v42; // [rsp+48h] [rbp-268h]
  void *v43; // [rsp+50h] [rbp-260h]
  __int64 v44; // [rsp+58h] [rbp-258h]
  size_t v45; // [rsp+60h] [rbp-250h]
  __int64 *v46; // [rsp+68h] [rbp-248h]
  __int64 *v47; // [rsp+70h] [rbp-240h]
  void *v48; // [rsp+78h] [rbp-238h]
  _BYTE __src[144]; // [rsp+80h] [rbp-230h] BYREF
  __int64 v50; // [rsp+110h] [rbp-1A0h] BYREF
  __int64 v51; // [rsp+118h] [rbp-198h]
  __int64 *v52; // [rsp+120h] [rbp-190h]
  __int64 v53; // [rsp+128h] [rbp-188h]
  __int64 *v54; // [rsp+130h] [rbp-180h]
  void *v55; // [rsp+138h] [rbp-178h]
  void *v56; // [rsp+140h] [rbp-170h]
  void *v57; // [rsp+148h] [rbp-168h]
  __int64 v58; // [rsp+150h] [rbp-160h]
  size_t v59; // [rsp+158h] [rbp-158h]
  __int64 *v60; // [rsp+160h] [rbp-150h]
  __int64 *v61; // [rsp+168h] [rbp-148h]
  void *v62; // [rsp+170h] [rbp-140h]
  _BYTE __dst[144]; // [rsp+178h] [rbp-138h] BYREF
  __int64 v64; // [rsp+208h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+210h] [rbp-A0h]
  size_t v66; // [rsp+218h] [rbp-98h]
  __int64 v67; // [rsp+220h] [rbp-90h]
  void *v68; // [rsp+228h] [rbp-88h]
  __int64 v69; // [rsp+230h] [rbp-80h]
  unsigned __int64 v70; // [rsp+238h] [rbp-78h]
  __int64 v71; // [rsp+240h] [rbp-70h]
  __int64 v72; // [rsp+248h] [rbp-68h]
  _QWORD *v73; // [rsp+250h] [rbp-60h]
  __int64 v74; // [rsp+258h] [rbp-58h]
  __int64 *v75; // [rsp+260h] [rbp-50h]
  __int64 v76; // [rsp+268h] [rbp-48h]
  __int64 *v77; // [rsp+270h] [rbp-40h]
  void *v78; // [rsp+278h] [rbp-38h]
  __int64 v79; // [rsp+280h] [rbp-30h]

  v3 = a1; /*0x1007c0de4*/
  v4 = *(_QWORD *)(a2 + 56); /*0x1007c0de7*/
  v5 = *(_QWORD *)(a2 + 64); /*0x1007c0deb*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v50, v4, v5); /*0x1007c0dfc*/
  if ( (_DWORD)v50 == 1 ) /*0x1007c0e08*/
  {
    if ( (v51 & 3) == 1 ) /*0x1007c0e19*/
    {
      v6 = v51 - 1; /*0x1007c0e1b*/
      v7 = *(_QWORD *)(v51 - 1); /*0x1007c0e1f*/
      v8 = *(_QWORD *)(v51 + 7); /*0x1007c0e23*/
      if ( *(_QWORD *)v8 ) /*0x1007c0e27*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x1007c0e33*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1007c0e35*/
      if ( v9 ) /*0x1007c0e3d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1007c0e47*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x1007c0e59*/
    }
    a1[1] = 0x8000000000000000LL; /*0x1007c0e68*/
    *a1 = 11; /*0x1007c0e6c*/
    return v3; /*0x1007c0e73*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v50, v4, v5); /*0x1007c0e85*/
  v10 = v51; /*0x1007c0e91*/
  if ( __OFSUB__(-v50, 1) ) /*0x1007c0e9b*/
  {
    *a1 = 2; /*0x1007c0ea0*/
    a1[1] = v10; /*0x1007c0ea7*/
    return v3; /*0x1007c0eab*/
  }
  v71 = v50; /*0x1007c0eb0*/
  v72 = v51; /*0x1007c0ec2*/
  codexmate_lib::core::relay::codex_writer::strip_all_managed_blocks::h80da2768569d91b4(&v64, v51, v52); /*0x1007c0ec6*/
  v70 = 0x8000000000000000LL; /*0x1007c0ed5*/
  v11 = v65; /*0x1007c0ed9*/
  v12 = v66; /*0x1007c0ee0*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v65, v66); /*0x1007c0eed*/
  if ( v13 ) /*0x1007c0ef5*/
  {
    _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x1007c0f08*/
      &v36,
      v11,
      v12);
    v79 = v11; /*0x1007c0f0d*/
    v14 = v37; /*0x1007c0f18*/
    v75 = v38; /*0x1007c0f26*/
    v76 = (__int64)v39; /*0x1007c0f31*/
    v2 = (__int64)v40; /*0x1007c0f35*/
    v15 = (__int64)v41; /*0x1007c0f3c*/
    v12 = (size_t)v43; /*0x1007c0f43*/
    v16 = v45; /*0x1007c0f51*/
    v17 = (size_t)v46; /*0x1007c0f58*/
    v18 = v47; /*0x1007c0f5f*/
    if ( v36 == 2 ) /*0x1007c0f6a*/
    {
      v78 = v43; /*0x1007c0f70*/
      v19 = v40; /*0x1007c0f84*/
      v2 = v44; /*0x1007c0f87*/
      if ( v37 == 2 ) /*0x1007c0f8e*/
        goto LABEL_14; /*0x1007c0f8e*/
    }
    else
    {
      v73 = v42; /*0x1007c10b5*/
      v78 = v48; /*0x1007c10c0*/
      v77 = v47; /*0x1007c10cb*/
      v69 = v37; /*0x1007c10d6*/
      v74 = (__int64)v46; /*0x1007c10df*/
      v68 = v41; /*0x1007c10e3*/
      v67 = v44; /*0x1007c10ea*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x1007c10f1*/
      v50 = v36; /*0x1007c1105*/
      v51 = v37; /*0x1007c1110*/
      v52 = v75; /*0x1007c1117*/
      v53 = v76; /*0x1007c111e*/
      v54 = v40; /*0x1007c1125*/
      v55 = v41; /*0x1007c1133*/
      v56 = v42; /*0x1007c113e*/
      v57 = v43; /*0x1007c1145*/
      v58 = v44; /*0x1007c1153*/
      v59 = v45; /*0x1007c115a*/
      v60 = v46; /*0x1007c1165*/
      v61 = v47; /*0x1007c1170*/
      v62 = v48; /*0x1007c117b*/
      v18 = &v36; /*0x1007c1182*/
      v16 = v79; /*0x1007c1190*/
      _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x1007c1194*/
        &v36,
        &v50);
      v14 = v36; /*0x1007c1199*/
      v75 = (__int64 *)v37; /*0x1007c11a7*/
      v76 = (__int64)v38; /*0x1007c11b2*/
      if ( v36 != 2 ) /*0x1007c11ba*/
      {
        v78 = v42; /*0x1007c11c5*/
        v2 = (__int64)v43; /*0x1007c11c9*/
        v16 = v44; /*0x1007c11d0*/
        v17 = v45; /*0x1007c11d7*/
        v18 = v46; /*0x1007c11de*/
      }
      v19 = v39; /*0x1007c11e5*/
      v15 = (__int64)v40; /*0x1007c11ec*/
      if ( v36 == 2 ) /*0x1007c11f7*/
      {
LABEL_14:
        v77 = v19; /*0x1007c0f94*/
        v51 = v76; /*0x1007c0fa0*/
        v50 = (__int64)v75; /*0x1007c0fa7*/
        v20 = (unsigned __int64)v19; /*0x1007c0fae*/
        v52 = v19; /*0x1007c0fb2*/
        v53 = v15; /*0x1007c0fb9*/
        if ( (_BYTE)v75 == 6 ) /*0x1007c0fc2*/
        {
          v20 = v51; /*0x1007c0fc8*/
          v11 = v79; /*0x1007c0fd2*/
          if ( !v51 ) /*0x1007c0fd6*/
          {
LABEL_46:
            core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v50, v19, v14, v20, v17); /*0x1007c12a3*/
            goto LABEL_47; /*0x1007c12aa*/
          }
          while ( 1 ) /*0x1007c0fdc*/
          {
            v21 = (_QWORD *)(v20 + 360); /*0x1007c0fdc*/
            v14 = *(unsigned __int16 *)(v20 + 626); /*0x1007c0fe3*/
            v73 = (_QWORD *)v20; /*0x1007c0fea*/
            v22 = (__int64 **)(v20 - 8); /*0x1007c0fee*/
            v74 = v14; /*0x1007c0ff2*/
            v20 = (unsigned int)(8 * v14); /*0x1007c0ff6*/
            v12 = 3 * v20; /*0x1007c0ffd*/
            v2 = -1; /*0x1007c1001*/
            do /*0x1007c106f*/
            {
              if ( !v12 ) /*0x1007c1013*/
              {
                v2 = v74; /*0x1007c107e*/
                goto LABEL_26; /*0x1007c107e*/
              }
              v78 = v21 + 3; /*0x1007c1019*/
              v19 = (__int64 *)v21[1]; /*0x1007c101d*/
              v23 = v21[2]; /*0x1007c1021*/
              v24 = v3; /*0x1007c1025*/
              v25 = v23 - 7; /*0x1007c102b*/
              if ( v23 >= 7 ) /*0x1007c1034*/
                v23 = 7; /*0x1007c1034*/
              v26 = -(__int64)v25; /*0x1007c1038*/
              v27 = memcmp(&unk_101673B15, v19, v23); /*0x1007c1042*/
              if ( v27 ) /*0x1007c104b*/
                v26 = v27; /*0x1007c104b*/
              v28 = v26 == 0; /*0x1007c104f*/
              v29 = v26 < 0; /*0x1007c104f*/
              v3 = v24; /*0x1007c1052*/
              LOBYTE(v20) = (!v29 && !v28) - v29; /*0x1007c105b*/
              v22 += 4; /*0x1007c105d*/
              ++v2; /*0x1007c1061*/
              v12 -= 24LL; /*0x1007c1064*/
              v21 = v78; /*0x1007c1068*/
            }
            while ( (_BYTE)v20 == 1 ); /*0x1007c106f*/
            if ( !(_BYTE)v20 ) /*0x1007c1076*/
              break; /*0x1007c1076*/
LABEL_26:
            v11 = v79; /*0x1007c1082*/
            if ( !v77 ) /*0x1007c108e*/
              goto LABEL_46; /*0x1007c108e*/
            v77 = (__int64 *)((char *)v77 - 1); /*0x1007c1094*/
            v20 = v73[v2 + 79]; /*0x1007c109c*/
          }
          if ( !*((_BYTE *)v22 - 24) ) /*0x1007c1296*/
          {
            v32 = (__int64)*(v22 - 1); /*0x1007c130b*/
            v19 = *v22; /*0x1007c130f*/
            v33 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v32, *v22); /*0x1007c1312*/
            if ( v14 ) /*0x1007c131a*/
            {
              v12 = v14; /*0x1007c131c*/
              if ( v14 < 0 ) /*0x1007c131f*/
              {
                v34 = 0; /*0x1007c1321*/
                goto LABEL_55; /*0x1007c1321*/
              }
              v78 = v33; /*0x1007c1335*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v19); /*0x1007c1339*/
              v34 = 1; /*0x1007c133e*/
              v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1007c134c*/
              v11 = v79; /*0x1007c1354*/
              if ( !v35 ) /*0x1007c1358*/
LABEL_55:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v34, v12); /*0x1007c1328*/
              v2 = (__int64)v35; /*0x1007c135a*/
              v19 = (__int64 *)v78; /*0x1007c1360*/
              memcpy(v35, v78, v12); /*0x1007c1367*/
              v70 = v12; /*0x1007c136c*/
              goto LABEL_46; /*0x1007c1370*/
            }
          }
        }
        v11 = v79; /*0x1007c129d*/
        goto LABEL_46; /*0x1007c129d*/
      }
    }
    if ( v19 ) /*0x1007c1200*/
    {
      v12 = v17; /*0x1007c120d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v19, 1); /*0x1007c1210*/
      v17 = v12; /*0x1007c1218*/
    }
    if ( 2 * v17 ) /*0x1007c121b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1007c1230*/
    if ( v16 ) /*0x1007c1238*/
    {
      v12 = v2 + 8; /*0x1007c123a*/
      do /*0x1007c1257*/
      {
        v30 = *(_QWORD *)(v12 - 8); /*0x1007c1259*/
        if ( v30 ) /*0x1007c1260*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v12, v30, 1); /*0x1007c126a*/
        v12 += 24LL; /*0x1007c1250*/
        --v16; /*0x1007c1254*/
      }
      while ( v16 ); /*0x1007c1257*/
    }
    if ( v78 ) /*0x1007c1278*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24LL * (_QWORD)v78, 8); /*0x1007c128b*/
    v11 = v79; /*0x1007c1290*/
  }
LABEL_47:
  v3[1] = v70; /*0x1007c12af*/
  v3[2] = v2; /*0x1007c12b7*/
  v3[3] = v12; /*0x1007c12bb*/
  *v3 = 11; /*0x1007c12bf*/
  if ( v64 ) /*0x1007c12d0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v64, 1); /*0x1007c12da*/
  if ( v71 ) /*0x1007c12e6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x1007c12f1*/
  return v3; /*0x1007c12f9*/
}