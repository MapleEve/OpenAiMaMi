// __ZN13codexmate_lib4core10repository33canonical_managed_child_directory @ 0x100a80ce0 | 基线 same-set
double __fastcall codexmate_lib::core::repository::canonical_managed_child_directory::h69ff115c8b001ccc(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5,
        int a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rsi
  double result; // xmm0_8
  __int64 v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  void *v22; // rdi
  size_t v23; // r15
  _QWORD *v24; // rsi
  __int64 (__fastcall *v25)(_QWORD, _QWORD); // r12
  int v26; // eax
  __int64 v27; // rax
  _QWORD v28[3]; // [rsp+0h] [rbp-220h] BYREF
  void *__s2; // [rsp+18h] [rbp-208h] BYREF
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // [rsp+20h] [rbp-200h]
  char v31; // [rsp+28h] [rbp-1F8h]
  __int64 v32; // [rsp+29h] [rbp-1F7h]
  __int64 v33; // [rsp+31h] [rbp-1EFh]
  __int64 v34; // [rsp+39h] [rbp-1E7h]
  _BYTE v35[15]; // [rsp+41h] [rbp-1DFh]
  __int16 v36; // [rsp+50h] [rbp-1D0h]
  char v37; // [rsp+52h] [rbp-1CEh]
  void *v38; // [rsp+58h] [rbp-1C8h] BYREF
  size_t __n; // [rsp+60h] [rbp-1C0h]
  char v40; // [rsp+68h] [rbp-1B8h]
  __int64 v41; // [rsp+69h] [rbp-1B7h]
  __int64 v42; // [rsp+71h] [rbp-1AFh]
  __int64 v43; // [rsp+79h] [rbp-1A7h]
  _BYTE v44[15]; // [rsp+81h] [rbp-19Fh]
  __int16 v45; // [rsp+90h] [rbp-190h]
  char v46; // [rsp+92h] [rbp-18Eh]
  __int64 v47; // [rsp+98h] [rbp-188h] BYREF
  unsigned __int64 v48; // [rsp+A0h] [rbp-180h]
  _BYTE v49[25]; // [rsp+A8h] [rbp-178h]
  _BYTE v50[15]; // [rsp+C1h] [rbp-15Fh]
  __int16 v51; // [rsp+D0h] [rbp-150h]
  char v52; // [rsp+D2h] [rbp-14Eh]
  __int64 v53; // [rsp+130h] [rbp-F0h]
  _QWORD *v54; // [rsp+138h] [rbp-E8h]
  __int64 v55; // [rsp+140h] [rbp-E0h]
  __int64 v56; // [rsp+148h] [rbp-D8h]
  __int64 v57; // [rsp+150h] [rbp-D0h]
  _BYTE v58[15]; // [rsp+158h] [rbp-C8h]
  __int64 v59; // [rsp+168h] [rbp-B8h]
  __int64 v60; // [rsp+170h] [rbp-B0h]
  __int64 v61; // [rsp+178h] [rbp-A8h]
  _BYTE v62[15]; // [rsp+180h] [rbp-A0h]
  void *v63; // [rsp+190h] [rbp-90h] BYREF
  size_t v64; // [rsp+198h] [rbp-88h]
  char v65; // [rsp+1A0h] [rbp-80h]
  __int64 v66; // [rsp+1A1h] [rbp-7Fh]
  __int64 v67; // [rsp+1A9h] [rbp-77h]
  __int64 v68; // [rsp+1B1h] [rbp-6Fh]
  _BYTE v69[15]; // [rsp+1B9h] [rbp-67h]
  __int16 v70; // [rsp+1C8h] [rbp-58h]
  char v71; // [rsp+1CAh] [rbp-56h]
  unsigned __int64 v72; // [rsp+1D0h] [rbp-50h]
  void *__s1; // [rsp+1D8h] [rbp-48h]
  size_t v74; // [rsp+1E0h] [rbp-40h]
  unsigned __int64 v75; // [rsp+1E8h] [rbp-38h]
  __int64 v76; // [rsp+1F0h] [rbp-30h]

  if ( a6 ) /*0x100a80d06*/
  {
    LOWORD(v47) = 511; /*0x100a80d08*/
    BYTE2(v47) = 1; /*0x100a80d11*/
    v10 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v47, a2, a3); /*0x100a80d25*/
    if ( v10 /*0x100a80d54*/
      || (LOWORD(v47) = 511, BYTE2(v47) = 1, (v10 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v47, a4, a5)) != 0) )
    {
      *a1 = 2; /*0x100a80d56*/
      a1[1] = v10; /*0x100a80d5d*/
      return result; /*0x100a80d61*/
    }
  }
  v74 = a5; /*0x100a80d70*/
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v47, a4, a5); /*0x100a80d77*/
  v11 = v48; /*0x100a80d7c*/
  if ( (_BYTE)v47 ) /*0x100a80d8a*/
  {
    if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v48) ) /*0x100a80d93*/
    {
      a1[1] = 0x8000000000000000LL; /*0x100a80daa*/
      *a1 = 11; /*0x100a80dae*/
      if ( (v11 & 3) == 1 ) /*0x100a80dbe*/
      {
        v12 = v11 - 1; /*0x100a80dc4*/
        v13 = *(_QWORD *)(v11 - 1); /*0x100a80dc9*/
        v14 = *(_QWORD *)(v11 + 7); /*0x100a80dce*/
        if ( *(_QWORD *)v14 ) /*0x100a80dd3*/
          (*(void (__fastcall **)(__int64))v14)(v13); /*0x100a80ddf*/
        v15 = *(_QWORD *)(v14 + 8); /*0x100a80de1*/
        if ( v15 ) /*0x100a80de9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x100a80df3*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 24, 8); /*0x100a80e16*/
      }
      return result; /*0x100a80e16*/
    }
LABEL_15:
    *a1 = 2; /*0x100a80e5f*/
    a1[1] = v11; /*0x100a80e66*/
    return result; /*0x100a80e6a*/
  }
  if ( (v48 & 0xF00000000000LL) != 0x400000000000LL ) /*0x100a80e35*/
  {
    v63 = a4; /*0x100a80e6f*/
    v64 = v74; /*0x100a80e7a*/
    v47 = (__int64)&v63; /*0x100a80e88*/
    v48 = (unsigned __int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a80e96*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_1017C9E4F, &v47); /*0x100a80eaf*/
    *a1 = 9; /*0x100a80eb4*/
    return result; /*0x100a80ebb*/
  }
  std::sys::fs::canonicalize::h06efd38dcb2724a4(&v47, a2, a3); /*0x100a80e44*/
  v17 = v47; /*0x100a80e49*/
  v11 = v48; /*0x100a80e50*/
  if ( __OFSUB__(-v47, 1) ) /*0x100a80e5a*/
    goto LABEL_15; /*0x100a80e5d*/
  v18 = *(_QWORD *)v49; /*0x100a80ec0*/
  std::sys::fs::canonicalize::h06efd38dcb2724a4(&v47, a4, v74); /*0x100a80ed5*/
  v19 = v48; /*0x100a80eeb*/
  v76 = v47; /*0x100a80ef2*/
  if ( v47 == 0x8000000000000000LL ) /*0x100a80ef9*/
  {
    *a1 = 2; /*0x100a80efb*/
    a1[1] = v19; /*0x100a80f02*/
    goto LABEL_33; /*0x100a80f06*/
  }
  v75 = v48; /*0x100a80f12*/
  v53 = *(_QWORD *)v49; /*0x100a80f16*/
  v20 = std::path::Path::parent::h4c3ac26770731fbb(v48, *(_QWORD *)v49); /*0x100a80f1d*/
  if ( !v20 ) /*0x100a80f25*/
    goto LABEL_31; /*0x100a80f25*/
  std::path::Path::components::he8b0f71a48373be5(&v38, v20, v21); /*0x100a80f35*/
  std::path::Path::components::he8b0f71a48373be5(&__s2, v11, v18); /*0x100a80f47*/
  v72 = v11; /*0x100a80f4c*/
  v22 = v38; /*0x100a80f50*/
  v23 = __n; /*0x100a80f57*/
  v24 = __s2; /*0x100a80f5e*/
  v25 = v30; /*0x100a80f65*/
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD))__n != v30 /*0x100a80fb6*/
    || (_BYTE)v45 != (_BYTE)v36
    || HIBYTE(v45) != 2
    || HIBYTE(v36) != 2
    || (__s1 = v38, v54 = __s2, v26 = memcmp(v38, __s2, __n), v22 = __s1, v24 = v54, v26) )
  {
    if ( v40 != 6 ) /*0x100a80fc5*/
    {
      *(_QWORD *)&v62[7] = *(_QWORD *)&v44[7]; /*0x100a80fce*/
      *(_QWORD *)v62 = *(_QWORD *)v44; /*0x100a80fdc*/
      v61 = v43; /*0x100a80fea*/
      v60 = v42; /*0x100a80fff*/
      v59 = v41; /*0x100a81006*/
    }
    v63 = v22; /*0x100a8101b*/
    v64 = v23; /*0x100a81022*/
    v65 = v40; /*0x100a81029*/
    v66 = v59; /*0x100a8103a*/
    v67 = v60; /*0x100a8103e*/
    v68 = v61; /*0x100a81049*/
    *(_QWORD *)v69 = *(_QWORD *)v62; /*0x100a81054*/
    *(_QWORD *)&v69[7] = *(_QWORD *)&v62[7]; /*0x100a8105f*/
    v70 = v45; /*0x100a81063*/
    v71 = v46; /*0x100a81067*/
    if ( v31 != 6 ) /*0x100a81073*/
    {
      *(_QWORD *)&v58[7] = *(_QWORD *)&v35[7]; /*0x100a8107c*/
      *(_QWORD *)v58 = *(_QWORD *)v35; /*0x100a8108a*/
      v57 = v34; /*0x100a81098*/
      v56 = v33; /*0x100a810ad*/
      v55 = v32; /*0x100a810b4*/
    }
    v47 = (__int64)v24; /*0x100a810c9*/
    v48 = (unsigned __int64)v25; /*0x100a810d0*/
    v49[0] = v31; /*0x100a810d7*/
    *(_QWORD *)&v49[1] = v55; /*0x100a810eb*/
    *(_QWORD *)&v49[9] = v56; /*0x100a810f2*/
    *(_QWORD *)&v49[17] = v57; /*0x100a81100*/
    *(_QWORD *)v50 = *(_QWORD *)v58; /*0x100a8110e*/
    *(_QWORD *)&v50[7] = *(_QWORD *)&v58[7]; /*0x100a8111c*/
    v51 = v36; /*0x100a81123*/
    v52 = v37; /*0x100a8112a*/
    v11 = v72; /*0x100a8113e*/
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(&v63, &v47) ) /*0x100a81142*/
      goto LABEL_30; /*0x100a81149*/
LABEL_31:
    v63 = a4; /*0x100a81172*/
    v64 = v74; /*0x100a8117d*/
    v47 = (__int64)&v63; /*0x100a8118b*/
    v48 = (unsigned __int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a81199*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v28, &unk_1017C9E26, &v47); /*0x100a811b5*/
    a1[3] = v28[2]; /*0x100a811c1*/
    v27 = v28[0]; /*0x100a811c5*/
    a1[2] = v28[1]; /*0x100a811d3*/
    a1[1] = v27; /*0x100a811d7*/
    *a1 = 9; /*0x100a811db*/
    if ( v76 ) /*0x100a811e9*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v76, 1); /*0x100a811f4*/
    goto LABEL_33; /*0x100a811f4*/
  }
  v11 = v72; /*0x100a81220*/
LABEL_30:
  a1[1] = v76; /*0x100a8114b*/
  a1[2] = v75; /*0x100a81157*/
  a1[3] = v53; /*0x100a81162*/
  *a1 = 11; /*0x100a81166*/
LABEL_33:
  if ( v17 ) /*0x100a811fc*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v17, 1); /*0x100a81209*/
  return result; /*0x100a80e05*/
}