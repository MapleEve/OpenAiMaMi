// __ZN13codexmate_lib4core4auth40ensure_managed_account_snapshot_location @ 0x1008f2f30
// 1.2.3 NEW-delta | codexmate_lib::core::auth::ensure_managed_account_snapshot_location | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // rdx
  void *v15; // rax
  __int64 v16; // r12
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // rdx
  __int64 v18; // r14
  void *v19; // r12
  size_t v20; // r15
  _QWORD *v21; // rsi
  __int64 (__fastcall *v22)(_QWORD, _QWORD); // r14
  int v23; // eax
  void *v25; // [rsp+8h] [rbp-1A8h] BYREF
  size_t v26; // [rsp+10h] [rbp-1A0h]
  char v27; // [rsp+18h] [rbp-198h]
  __int64 v28; // [rsp+19h] [rbp-197h]
  __int64 v29; // [rsp+21h] [rbp-18Fh]
  __int64 v30; // [rsp+29h] [rbp-187h]
  _BYTE v31[15]; // [rsp+31h] [rbp-17Fh]
  __int16 v32; // [rsp+40h] [rbp-170h]
  char v33; // [rsp+42h] [rbp-16Eh]
  void *__s2; // [rsp+48h] [rbp-168h] BYREF
  __int64 (__fastcall *v35)(_QWORD, _QWORD); // [rsp+50h] [rbp-160h]
  char v36; // [rsp+58h] [rbp-158h]
  __int64 v37; // [rsp+59h] [rbp-157h]
  __int64 v38; // [rsp+61h] [rbp-14Fh]
  __int64 v39; // [rsp+69h] [rbp-147h]
  _BYTE v40[15]; // [rsp+71h] [rbp-13Fh]
  __int16 v41; // [rsp+80h] [rbp-130h]
  char v42; // [rsp+82h] [rbp-12Eh]
  void *__s1; // [rsp+88h] [rbp-128h] BYREF
  size_t __n; // [rsp+90h] [rbp-120h]
  char v45; // [rsp+98h] [rbp-118h]
  __int64 v46; // [rsp+99h] [rbp-117h]
  __int64 v47; // [rsp+A1h] [rbp-10Fh]
  __int64 v48; // [rsp+A9h] [rbp-107h]
  _BYTE v49[15]; // [rsp+B1h] [rbp-FFh]
  __int16 v50; // [rsp+C0h] [rbp-F0h]
  char v51; // [rsp+C2h] [rbp-EEh]
  size_t v52; // [rsp+C8h] [rbp-E8h]
  _QWORD *v53; // [rsp+D0h] [rbp-E0h]
  __int64 v54; // [rsp+D8h] [rbp-D8h]
  __int64 v55; // [rsp+E0h] [rbp-D0h]
  __int64 v56; // [rsp+E8h] [rbp-C8h]
  _BYTE v57[15]; // [rsp+F0h] [rbp-C0h]
  __int64 v58; // [rsp+100h] [rbp-B0h]
  __int64 v59; // [rsp+108h] [rbp-A8h]
  __int64 v60; // [rsp+110h] [rbp-A0h]
  _BYTE v61[15]; // [rsp+118h] [rbp-98h]
  __int64 v62; // [rsp+128h] [rbp-88h] BYREF
  __int64 (__fastcall *v63)(_QWORD, _QWORD); // [rsp+130h] [rbp-80h]
  _BYTE v64[25]; // [rsp+138h] [rbp-78h]
  _BYTE v65[15]; // [rsp+151h] [rbp-5Fh]
  __int16 v66; // [rsp+160h] [rbp-50h]
  char v67; // [rsp+162h] [rbp-4Eh]
  __int64 (__fastcall *v68)(_QWORD, _QWORD); // [rsp+168h] [rbp-48h]
  __int64 v69; // [rsp+170h] [rbp-40h]
  __int64 (__fastcall *v70)(_QWORD, _QWORD); // [rsp+178h] [rbp-38h]
  __int64 v71; // [rsp+180h] [rbp-30h]

  v12 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x1008f2f59*/
  if ( v12 ) /*0x1008f2f61*/
  {
    std::sys::fs::canonicalize::h06efd38dcb2724a4(&v62, v12, v13); /*0x1008f2f6d*/
    v14 = v63; /*0x1008f2f79*/
    if ( __OFSUB__(-v62, 1) ) /*0x1008f2f80*/
    {
      *a1 = 2; /*0x1008f2f89*/
      a1[1] = v14; /*0x1008f2f90*/
    }
    else
    {
      v52 = a3; /*0x1008f300d*/
      v70 = v63; /*0x1008f3014*/
      v71 = v62; /*0x1008f3018*/
      v16 = *(_QWORD *)v64; /*0x1008f301c*/
      std::sys::fs::canonicalize::h06efd38dcb2724a4(&v62, a4, a5); /*0x1008f302d*/
      v17 = v63; /*0x1008f3043*/
      if ( v62 == 0x8000000000000000LL ) /*0x1008f304a*/
      {
        *a1 = 2; /*0x1008f304c*/
        a1[1] = v17; /*0x1008f3053*/
        if ( v71 ) /*0x1008f305e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v71, 1); /*0x1008f306d*/
      }
      else
      {
        v68 = v63; /*0x1008f3077*/
        v69 = v62; /*0x1008f307b*/
        v18 = *(_QWORD *)v64; /*0x1008f307f*/
        std::path::Path::components::he8b0f71a48373be5(&__s1, v70, v16); /*0x1008f3091*/
        std::path::Path::components::he8b0f71a48373be5(&__s2, v68, v18); /*0x1008f30a4*/
        v19 = __s1; /*0x1008f30a9*/
        v20 = __n; /*0x1008f30b0*/
        v21 = __s2; /*0x1008f30b7*/
        v22 = v35; /*0x1008f30be*/
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD))__n == v35 /*0x1008f30e9*/
          && (_BYTE)v50 == (_BYTE)v41
          && HIBYTE(v50) == 2
          && HIBYTE(v41) == 2 )
        {
          v53 = __s2; /*0x1008f30f1*/
          v23 = memcmp(__s1, __s2, __n); /*0x1008f30f8*/
          v21 = v53; /*0x1008f30fd*/
          if ( !v23 ) /*0x1008f3106*/
            goto LABEL_19; /*0x1008f3106*/
        }
        if ( v45 != 6 ) /*0x1008f3115*/
        {
          *(_QWORD *)&v61[7] = *(_QWORD *)&v49[7]; /*0x1008f311e*/
          *(_QWORD *)v61 = *(_QWORD *)v49; /*0x1008f312c*/
          v60 = v48; /*0x1008f313a*/
          v59 = v47; /*0x1008f314f*/
          v58 = v46; /*0x1008f3156*/
        }
        v25 = v19; /*0x1008f316b*/
        v26 = v20; /*0x1008f3172*/
        v27 = v45; /*0x1008f3179*/
        v28 = v58; /*0x1008f318d*/
        v29 = v59; /*0x1008f3194*/
        v30 = v60; /*0x1008f31a2*/
        *(_QWORD *)v31 = *(_QWORD *)v61; /*0x1008f31b0*/
        *(_QWORD *)&v31[7] = *(_QWORD *)&v61[7]; /*0x1008f31be*/
        v32 = v50; /*0x1008f31c5*/
        v33 = v51; /*0x1008f31cc*/
        if ( v36 != 6 ) /*0x1008f31db*/
        {
          *(_QWORD *)&v57[7] = *(_QWORD *)&v40[7]; /*0x1008f31e4*/
          *(_QWORD *)v57 = *(_QWORD *)v40; /*0x1008f31f2*/
          v56 = v39; /*0x1008f3200*/
          v55 = v38; /*0x1008f3215*/
          v54 = v37; /*0x1008f321c*/
        }
        v62 = (__int64)v21; /*0x1008f3231*/
        v63 = v22; /*0x1008f3238*/
        v64[0] = v36; /*0x1008f323c*/
        *(_QWORD *)&v64[1] = v54; /*0x1008f324d*/
        *(_QWORD *)&v64[9] = v55; /*0x1008f3251*/
        *(_QWORD *)&v64[17] = v56; /*0x1008f325c*/
        *(_QWORD *)v65 = *(_QWORD *)v57; /*0x1008f3267*/
        *(_QWORD *)&v65[7] = *(_QWORD *)&v57[7]; /*0x1008f3272*/
        v66 = v41; /*0x1008f3276*/
        v67 = v42; /*0x1008f327a*/
        if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(&v25, &v62) ) /*0x1008f328e*/
        {
LABEL_19:
          if ( v69 ) /*0x1008f329e*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v69, 1); /*0x1008f32a9*/
          if ( v71 ) /*0x1008f32b5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v71, 1); /*0x1008f32c0*/
          *a1 = 11; /*0x1008f32c5*/
        }
        else
        {
          if ( v69 ) /*0x1008f32d5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v69, 1); /*0x1008f32e0*/
          if ( v71 ) /*0x1008f32ec*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v71, 1); /*0x1008f32f7*/
          v25 = a2; /*0x1008f32fc*/
          v26 = v52; /*0x1008f330a*/
          v62 = (__int64)&v25; /*0x1008f3311*/
          v63 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008f331f*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_1017C7161, &v62); /*0x1008f3335*/
          *a1 = 9; /*0x1008f333a*/
        }
      }
    }
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1008f2f99*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1008f2fa8*/
    if ( !v15 ) /*0x1008f2fb0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x1008f3360*/
    qmemcpy(v15, "Account snapshot has no parent", 30); /*0x1008f2fea*/
    *a1 = 9; /*0x1008f2fed*/
    a1[1] = 30; /*0x1008f2ff4*/
    a1[2] = v15; /*0x1008f2ffc*/
    a1[3] = 30; /*0x1008f3000*/
  }
  return a1; /*0x1008f3344*/
}