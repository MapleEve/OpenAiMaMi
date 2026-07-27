// __ZN13codexmate_lib4core5relay2io17parse_import_file @ 0x100524e30 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::io::parse_import_file::h437f3aa1b6ff2b67(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  _QWORD *v10; // r15
  unsigned __int64 *v11; // r12
  __int64 (__fastcall *v12)(); // r13
  int *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(); // rcx
  _QWORD *v17; // rdx
  __int64 (__fastcall *v18)(); // rsi
  int *v19; // rdi
  unsigned __int64 *v20; // r8
  __int64 (__fastcall *v21)(); // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  _QWORD v25[3]; // [rsp+8h] [rbp-208h] BYREF
  _QWORD v26[3]; // [rsp+20h] [rbp-1F0h] BYREF
  unsigned __int64 *v27; // [rsp+38h] [rbp-1D8h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+40h] [rbp-1D0h]
  int *v29; // [rsp+48h] [rbp-1C8h]
  __int64 (__fastcall *v30)(); // [rsp+50h] [rbp-1C0h]
  _QWORD *v31; // [rsp+58h] [rbp-1B8h]
  __int64 (__fastcall *v32)(); // [rsp+60h] [rbp-1B0h]
  __int64 v33; // [rsp+68h] [rbp-1A8h]
  __int64 v34; // [rsp+70h] [rbp-1A0h]
  unsigned __int64 v35; // [rsp+A0h] [rbp-170h]
  unsigned __int64 v36; // [rsp+D0h] [rbp-140h] BYREF
  _QWORD *v37; // [rsp+D8h] [rbp-138h]
  __int64 (__fastcall *v38)(); // [rsp+E0h] [rbp-130h]
  __int64 (__fastcall *v39)(); // [rsp+E8h] [rbp-128h]
  _QWORD *v40; // [rsp+F0h] [rbp-120h]
  __int64 (__fastcall *v41)(); // [rsp+F8h] [rbp-118h]
  __int64 v42; // [rsp+100h] [rbp-110h]
  __int64 v43; // [rsp+108h] [rbp-108h]
  unsigned __int64 *v44; // [rsp+110h] [rbp-100h] BYREF
  __int64 (__fastcall *v45)(_QWORD, _QWORD); // [rsp+118h] [rbp-F8h]
  int *v46; // [rsp+120h] [rbp-F0h]
  __int64 (__fastcall *v47)(); // [rsp+128h] [rbp-E8h]
  _QWORD *v48; // [rsp+130h] [rbp-E0h]
  __int64 (__fastcall *v49)(); // [rsp+138h] [rbp-D8h]
  __int64 v50; // [rsp+140h] [rbp-D0h]
  __int64 v51; // [rsp+148h] [rbp-C8h]
  unsigned __int64 v52; // [rsp+150h] [rbp-C0h]
  _QWORD *v53; // [rsp+158h] [rbp-B8h]
  __int64 (__fastcall *v54)(); // [rsp+160h] [rbp-B0h]
  __int64 (__fastcall *v55)(); // [rsp+168h] [rbp-A8h] BYREF
  _QWORD *v56; // [rsp+170h] [rbp-A0h]
  __int64 (__fastcall *v57)(); // [rsp+178h] [rbp-98h]
  __int64 v58; // [rsp+180h] [rbp-90h]
  __int64 v59; // [rsp+188h] [rbp-88h] BYREF
  char *v60; // [rsp+190h] [rbp-80h]
  _QWORD *v61; // [rsp+198h] [rbp-78h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+1A0h] [rbp-70h]
  int *v63; // [rsp+1A8h] [rbp-68h]
  __int64 (__fastcall *v64)(); // [rsp+1B0h] [rbp-60h]
  _QWORD *v65; // [rsp+1B8h] [rbp-58h]
  __int64 (__fastcall *v66)(); // [rsp+1C0h] [rbp-50h]
  __int64 v67; // [rsp+1C8h] [rbp-48h]
  __int64 v68; // [rsp+1D0h] [rbp-40h]
  _QWORD *v69; // [rsp+1D8h] [rbp-38h] BYREF
  char *v70; // [rsp+1E0h] [rbp-30h]

  std::sys::fs::metadata::h32fa16d3052ea535(&v27, a2, a3); /*0x100524e54*/
  if ( (_BYTE)v27 ) /*0x100524e60*/
  {
    if ( ((unsigned __int8)v28 & 3) == 1 ) /*0x100524e71*/
    {
      v70 = (char *)v28 - 1; /*0x100524e7b*/
      v6 = *(_QWORD *)((char *)v28 - 1); /*0x100524e7f*/
      v7 = *(_QWORD *)((char *)v28 + 7); /*0x100524e83*/
      if ( *(_QWORD *)v7 ) /*0x100524e87*/
        (*(void (__fastcall **)(__int64))v7)(v6); /*0x100524e93*/
      v8 = *(_QWORD *)(v7 + 8); /*0x100524e95*/
      if ( v8 ) /*0x100524e9d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x100524ea7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, 24, 8); /*0x100524eba*/
    }
  }
  else if ( v35 >= 0xA00001 ) /*0x100524ece*/
  {
    v36 = v35; /*0x100524ed0*/
    v27 = &v36; /*0x100524ede*/
    v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100524eec*/
    v29 = (int *)""; /*0x100524efa*/
    v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100524f01*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_1017C1532, &v27); /*0x100524f1a*/
    *a1 = 9; /*0x100524f1f*/
    return a1; /*0x100524f26*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v36, a2, a3); /*0x100524f38*/
  v9 = v36; /*0x100524f3d*/
  v10 = v37; /*0x100524f44*/
  if ( __OFSUB__(-(__int64)v36, 1) ) /*0x100524f4e*/
  {
    v61 = v37; /*0x100524f57*/
    v44 = (unsigned __int64 *)&v61; /*0x100524f5f*/
    v45 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100524f6d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v27, &unk_1017C15CD, &v44); /*0x100524f89*/
    v11 = v27; /*0x100524f8e*/
    v12 = v28; /*0x100524f95*/
    v13 = v29; /*0x100524f9c*/
    if ( ((unsigned __int8)v61 & 3) == 1 ) /*0x100524faf*/
    {
      v60 = (char *)v61 - 1; /*0x100524fb5*/
      v70 = *(char **)((char *)v61 - 1); /*0x100524fbd*/
      v14 = *(_QWORD *)((char *)v61 + 7); /*0x100524fc1*/
      if ( *(_QWORD *)v14 ) /*0x100524fc5*/
        (*(void (__fastcall **)(char *))v14)(v70); /*0x100524fd1*/
      v15 = *(_QWORD *)(v14 + 8); /*0x100524fd7*/
      if ( v15 ) /*0x100524fde*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v15, *(_QWORD *)(v14 + 16)); /*0x100524fe4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 24, 8); /*0x100524ff7*/
    }
    a1[1] = v11; /*0x100524ffc*/
    a1[2] = v12; /*0x100525000*/
    a1[3] = v13; /*0x100525004*/
    *a1 = 10; /*0x100525008*/
  }
  else
  {
    v27 = v37; /*0x10052501b*/
    v28 = v38; /*0x100525022*/
    v29 = nullptr; /*0x100525029*/
    v30 = nullptr; /*0x100525034*/
    v31 = v37; /*0x10052503f*/
    v32 = v38; /*0x100525046*/
    serde_json::de::from_trait::hdab1a280cb8424ec(&v36, &v27); /*0x10052505b*/
    if ( v36 == 0x8000000000000000LL ) /*0x100525071*/
    {
      v69 = v37; /*0x10052507e*/
      v27 = (unsigned __int64 *)&v69; /*0x100525086*/
      v28 = (__int64 (__fastcall *)())_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100525094*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017C15E9, &v27); /*0x1005250b0*/
      v27 = (unsigned __int64 *)v25[0]; /*0x1005250c3*/
      v28 = (__int64 (__fastcall *)())v25[1]; /*0x1005250ca*/
      v29 = (int *)v25[2]; /*0x1005250d8*/
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v69); /*0x1005250e3*/
      v44 = v27; /*0x1005250f6*/
      v45 = (__int64 (__fastcall *)(_QWORD, _QWORD))v28; /*0x1005250fd*/
      v46 = v29; /*0x10052510b*/
      v47 = v30; /*0x100525119*/
      v48 = v31; /*0x100525127*/
      v49 = v32; /*0x100525135*/
      v50 = v33; /*0x100525143*/
      v51 = v34; /*0x100525151*/
      v68 = v34; /*0x10052515f*/
      v67 = v33; /*0x10052516a*/
      v16 = v32; /*0x10052516e*/
      v66 = v32; /*0x100525175*/
      v17 = v31; /*0x100525179*/
      v65 = v31; /*0x100525180*/
      v18 = v30; /*0x100525184*/
      v64 = v30; /*0x10052518b*/
      v19 = v29; /*0x10052518f*/
      v63 = v29; /*0x100525196*/
      v20 = v27; /*0x10052519a*/
      v21 = v28; /*0x1005251a1*/
      v62 = v28; /*0x1005251a8*/
      v61 = v27; /*0x1005251ac*/
      a1[7] = v33; /*0x1005251b0*/
      a1[6] = v16; /*0x1005251b4*/
      a1[5] = v17; /*0x1005251b8*/
      a1[4] = v18; /*0x1005251bc*/
      a1[3] = v19; /*0x1005251c0*/
      a1[2] = v21; /*0x1005251c4*/
      a1[1] = v20; /*0x1005251c8*/
      a1[8] = v68; /*0x1005251d0*/
      *a1 = 9; /*0x1005251d4*/
    }
    else
    {
      v51 = v43; /*0x1005251e7*/
      v50 = v42; /*0x1005251f5*/
      v49 = v41; /*0x100525203*/
      v48 = v40; /*0x100525211*/
      v61 = (_QWORD *)v36; /*0x100525234*/
      v62 = (__int64 (__fastcall *)())v37; /*0x100525238*/
      v63 = (int *)v38; /*0x10052523c*/
      v64 = v39; /*0x100525240*/
      v65 = v40; /*0x100525244*/
      v66 = v41; /*0x100525248*/
      v67 = v42; /*0x10052524c*/
      v68 = v43; /*0x100525250*/
      v59 = v43; /*0x100525258*/
      v58 = v42; /*0x100525263*/
      v57 = v41; /*0x10052526e*/
      v56 = v40; /*0x100525279*/
      v55 = v39; /*0x100525284*/
      v54 = v38; /*0x10052528f*/
      v53 = v37; /*0x10052529e*/
      v52 = v36; /*0x1005252a5*/
      if ( (int)v43 <= 1 ) /*0x1005252b3*/
      {
        a1[8] = v59; /*0x100525382*/
        a1[7] = v58; /*0x10052538d*/
        a1[6] = v57; /*0x100525398*/
        a1[5] = v56; /*0x1005253a3*/
        a1[4] = v55; /*0x1005253ae*/
        a1[3] = v54; /*0x1005253b9*/
        v23 = v52; /*0x1005253bd*/
        a1[2] = v53; /*0x1005253cb*/
        a1[1] = v23; /*0x1005253cf*/
        *a1 = 11; /*0x1005253d3*/
      }
      else
      {
        v27 = (unsigned __int64 *)&v59; /*0x1005252c0*/
        v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1005252ce*/
        v29 = &dword_1015FFB3C; /*0x1005252dc*/
        v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1005252e3*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, &unk_1017C1582, &v27); /*0x1005252ff*/
        a1[3] = v26[2]; /*0x10052530b*/
        v22 = v26[0]; /*0x10052530f*/
        a1[2] = v26[1]; /*0x10052531d*/
        a1[1] = v22; /*0x100525321*/
        *a1 = 9; /*0x100525325*/
        if ( v52 ) /*0x100525336*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v52, 1); /*0x100525344*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7c83e3d83281f011(&v55); /*0x100525350*/
        if ( v55 ) /*0x10052535f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, 176LL * (_QWORD)v55, 8); /*0x100525374*/
      }
    }
    if ( v9 ) /*0x1005253dd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x1005253ea*/
  }
  return a1; /*0x1005253f2*/
}