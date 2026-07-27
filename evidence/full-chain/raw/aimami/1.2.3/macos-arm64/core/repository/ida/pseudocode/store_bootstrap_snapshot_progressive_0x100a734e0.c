// __ZN13codexmate_lib4core10repository10Repository36store_bootstrap_snapshot_progressive @ 0x100a734e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::store_bootstrap_snapshot_progressive::hd60d885067446f82(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  size_t v4; // r12
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD v18[2]; // [rsp+8h] [rbp-458h] BYREF
  _QWORD v19[46]; // [rsp+18h] [rbp-448h] BYREF
  size_t __n; // [rsp+188h] [rbp-2D8h]
  void *v21; // [rsp+198h] [rbp-2C8h]
  size_t v22; // [rsp+1A0h] [rbp-2C0h]
  void *v23; // [rsp+1B0h] [rbp-2B0h]
  size_t v24; // [rsp+1B8h] [rbp-2A8h]
  void *v25; // [rsp+1C8h] [rbp-298h]
  size_t v26; // [rsp+1D0h] [rbp-290h]
  void *v27; // [rsp+1E0h] [rbp-280h]
  size_t v28; // [rsp+1E8h] [rbp-278h]
  void *v29; // [rsp+1F8h] [rbp-268h]
  size_t v30; // [rsp+200h] [rbp-260h]
  void *v31; // [rsp+210h] [rbp-250h]
  size_t v32; // [rsp+218h] [rbp-248h]
  char v33; // [rsp+220h] [rbp-240h]
  char v34; // [rsp+221h] [rbp-23Fh]
  char v35; // [rsp+222h] [rbp-23Eh]
  _BYTE v36[40]; // [rsp+228h] [rbp-238h] BYREF
  __int64 v37; // [rsp+250h] [rbp-210h]
  void *v38; // [rsp+258h] [rbp-208h]
  size_t v39; // [rsp+260h] [rbp-200h]
  _BYTE v40[32]; // [rsp+268h] [rbp-1F8h] BYREF
  _BYTE v41[32]; // [rsp+288h] [rbp-1D8h] BYREF
  __int64 v42; // [rsp+2A8h] [rbp-1B8h]
  int v43; // [rsp+2B0h] [rbp-1B0h]
  char v44; // [rsp+2B4h] [rbp-1ACh]
  __int64 v45; // [rsp+2C0h] [rbp-1A0h]
  __int64 v46; // [rsp+2C8h] [rbp-198h]
  __int64 v47; // [rsp+2D0h] [rbp-190h]
  void *v48; // [rsp+2D8h] [rbp-188h]
  size_t v49; // [rsp+2E0h] [rbp-180h]
  __int64 v50; // [rsp+2E8h] [rbp-178h]
  void *v51; // [rsp+2F0h] [rbp-170h]
  size_t v52; // [rsp+2F8h] [rbp-168h]
  int v53; // [rsp+300h] [rbp-160h]
  int v54; // [rsp+304h] [rbp-15Ch]
  int v55; // [rsp+308h] [rbp-158h]
  char v56; // [rsp+30Ch] [rbp-154h]
  int v57; // [rsp+310h] [rbp-150h]
  int v58; // [rsp+314h] [rbp-14Ch]
  int v59; // [rsp+318h] [rbp-148h]
  char v60; // [rsp+31Ch] [rbp-144h]
  int v61; // [rsp+320h] [rbp-140h]
  int v62; // [rsp+324h] [rbp-13Ch]
  int v63; // [rsp+328h] [rbp-138h]
  char v64; // [rsp+32Ch] [rbp-134h]
  __int64 v65; // [rsp+330h] [rbp-130h]
  __int64 v66; // [rsp+338h] [rbp-128h]
  char v67; // [rsp+340h] [rbp-120h]
  void *v68; // [rsp+428h] [rbp-38h]
  __int64 v69; // [rsp+430h] [rbp-30h]

  v4 = a2[59]; /*0x100a73504*/
  v68 = (void *)a2[58]; /*0x100a73512*/
  codexmate_lib::core::bootstrap_cache::load::hbe2b23d0f811fb61(v18, (__int64)v68, v4); /*0x100a73519*/
  v5 = v19[0]; /*0x100a7351e*/
  v69 = a3; /*0x100a73529*/
  if ( v19[0] == 3 /*0x100a736ba*/
    || v43 != *(_DWORD *)(a3 + 664)
    || v42 != *(_QWORD *)(a3 + 656)
    || v33 != *(_BYTE *)(a3 + 520)
    || v34 != *(_BYTE *)(a3 + 521)
    || v35 != *(_BYTE *)(a3 + 522)
    || __n != *(_QWORD *)(a3 + 368)
    || memcmp((const void *)v19[45], *(const void **)(a3 + 360), __n)
    || v22 != *(_QWORD *)(a3 + 392)
    || memcmp(v21, *(const void **)(a3 + 384), v22)
    || v24 != *(_QWORD *)(a3 + 416)
    || memcmp(v23, *(const void **)(a3 + 408), v24)
    || v26 != *(_QWORD *)(a3 + 440)
    || memcmp(v25, *(const void **)(a3 + 432), v26)
    || v28 != *(_QWORD *)(a3 + 464)
    || memcmp(v27, *(const void **)(a3 + 456), v28)
    || v30 != *(_QWORD *)(a3 + 488)
    || memcmp(v29, *(const void **)(a3 + 480), v30)
    || v32 != *(_QWORD *)(a3 + 512)
    || memcmp(v31, *(const void **)(a3 + 504), v32) )
  {
    goto LABEL_21; /*0x100a736c1*/
  }
  v9 = *(_QWORD *)(a3 + 568); /*0x100a7371a*/
  v10 = 0x8000000000000000LL; /*0x100a73721*/
  if ( __OFSUB__(0, v37) ) /*0x100a73713*/
  {
    v11 = (__int64 *)v69; /*0x100a73730*/
    if ( v9 != 0x8000000000000000LL ) /*0x100a73734*/
      goto LABEL_21; /*0x100a73734*/
  }
  else
  {
    v11 = (__int64 *)v69; /*0x100a73751*/
    if ( v9 == 0x8000000000000000LL || v39 != *(_QWORD *)(v69 + 584) || memcmp(v38, *(const void **)(v69 + 576), v39) ) /*0x100a7377d*/
      goto LABEL_21; /*0x100a73784*/
  }
  v12 = *v11; /*0x100a73736*/
  if ( v5 == 2 ) /*0x100a7373d*/
  {
    v13 = v69; /*0x100a73742*/
    if ( (_DWORD)v12 != 2 ) /*0x100a73746*/
      goto LABEL_21; /*0x100a73746*/
  }
  else
  {
    v13 = v69; /*0x100a7378f*/
    if ( (_DWORD)v12 == 2 /*0x100a737a3*/
      || !(unsigned __int8)_$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..cmp..PartialEq$GT$::eq::hda5febdef9901cf9(
                             v19,
                             v69) )
    {
      goto LABEL_21; /*0x100a737aa*/
    }
  }
  if ( v44 != *(_BYTE *)(v13 + 668) /*0x100a73831*/
    || !(unsigned __int8)_$LT$codexmate_lib..core..models..AutoSwitchStatusPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4eb0efc986e146ae(
                           v36,
                           v13 + 528,
                           v6,
                           v10)
    || !(unsigned __int8)_$LT$codexmate_lib..core..models..ApiProxyConfigPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h406bc6dc11554629(
                           v40,
                           v13 + 592)
    || !(unsigned __int8)_$LT$codexmate_lib..core..models..ApiConnectivityPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h44554b7666593278(
                           v41,
                           v13 + 624)
    || !(unsigned __int8)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2d145f38b538cc9c(
                           v45,
                           v46,
                           *(_QWORD *)(v13 + 680),
                           *(_QWORD *)(v13 + 688)) )
  {
    goto LABEL_21; /*0x100a7383c*/
  }
  v14 = *(_QWORD *)(v69 + 696); /*0x100a73859*/
  if ( v47 == 0x8000000000000000LL || v14 == 0x8000000000000000LL ) /*0x100a73863*/
  {
    if ( !(v14 ^ 0x8000000000000000LL | v47 ^ 0x8000000000000000LL) ) /*0x100a7387c*/
    {
LABEL_43:
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(v18); /*0x100a73885*/
      *a1 = 11; /*0x100a73891*/
      return a1; /*0x100a73898*/
    }
  }
  else
  {
    v15 = v69; /*0x100a738a4*/
    if ( v65 != *(_QWORD *)(v69 + 792) /*0x100a73906*/
      || v66 != *(_QWORD *)(v69 + 800)
      || v49 != *(_QWORD *)(v69 + 712)
      || memcmp(v48, *(const void **)(v69 + 704), v49)
      || v67 != *(_BYTE *)(v15 + 808) )
    {
      goto LABEL_21; /*0x100a73906*/
    }
    v16 = *(_QWORD *)(v15 + 720); /*0x100a7390c*/
    if ( v50 == 0x8000000000000000LL ) /*0x100a73924*/
    {
      v17 = v69; /*0x100a7392d*/
      if ( v16 != 0x8000000000000000LL ) /*0x100a73931*/
        goto LABEL_21; /*0x100a73931*/
    }
    else
    {
      v17 = v69; /*0x100a73a26*/
      if ( v16 == 0x8000000000000000LL || v52 != *(_QWORD *)(v69 + 736) || memcmp(v51, *(const void **)(v69 + 728), v52) ) /*0x100a73a52*/
        goto LABEL_21; /*0x100a73a59*/
    }
    if ( v53 == *(_DWORD *)(v17 + 744) /*0x100a73a18*/
      && v54 == *(_DWORD *)(v17 + 748)
      && v55 == *(_DWORD *)(v17 + 752)
      && v56 == *(_BYTE *)(v17 + 756)
      && v57 == *(_DWORD *)(v17 + 760)
      && v58 == *(_DWORD *)(v17 + 764)
      && v59 == *(_DWORD *)(v17 + 768)
      && v60 == *(_BYTE *)(v17 + 772)
      && v61 == *(_DWORD *)(v17 + 776)
      && v62 == *(_DWORD *)(v17 + 780)
      && v63 == *(_DWORD *)(v17 + 784)
      && v64 == *(_BYTE *)(v17 + 788) )
    {
      goto LABEL_43; /*0x100a73a18*/
    }
  }
LABEL_21:
  core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(v18); /*0x100a736c3*/
  v7 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100a736d2*/
  if ( v7 ) /*0x100a736da*/
  {
    *a1 = 2; /*0x100a736dc*/
    a1[1] = v7; /*0x100a736e3*/
  }
  else
  {
    codexmate_lib::core::bootstrap_cache::update::h3bd104096f6abd57(a1, v68, v4, v69); /*0x100a736f7*/
  }
  return a1; /*0x100a736ff*/
}