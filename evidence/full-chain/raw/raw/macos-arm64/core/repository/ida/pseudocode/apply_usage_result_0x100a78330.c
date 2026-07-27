// __ZN13codexmate_lib4core10repository18apply_usage_result @ 0x100a78330 | 基线 same-set
int __fastcall codexmate_lib::core::repository::apply_usage_result::h8817d9c50b687ed7(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        double a6,
        double a7)
{
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r14
  bool v20; // zf
  __int64 v21; // rbx
  __int64 v22; // r13
  char v23; // r10
  char v24; // r15
  char v25; // al
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r15
  __int64 *v32; // r12
  int v33; // edx
  __int64 (__fastcall *v34)(); // rax
  __int64 (__fastcall *v35)(); // r12
  _QWORD *v36; // r15
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r12
  _QWORD *v43; // r15
  int v44; // edx
  int v45; // ecx
  unsigned int v46; // ecx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // r13
  const void *v51; // r14
  size_t v52; // r15
  __int64 v53; // rcx
  int v54; // edx
  int v55; // ecx
  unsigned int v56; // ecx
  _QWORD v58[12]; // [rsp+10h] [rbp-1F0h] BYREF
  _QWORD v59[3]; // [rsp+70h] [rbp-190h] BYREF
  _QWORD *v60; // [rsp+88h] [rbp-178h]
  __int64 v61; // [rsp+90h] [rbp-170h]
  signed __int64 v62; // [rsp+98h] [rbp-168h]
  _QWORD v63[12]; // [rsp+A0h] [rbp-160h] BYREF
  _QWORD v64[2]; // [rsp+100h] [rbp-100h] BYREF
  char v65; // [rsp+110h] [rbp-F0h]
  __int64 v66; // [rsp+118h] [rbp-E8h]
  __int64 v67; // [rsp+120h] [rbp-E0h]
  __int64 v68; // [rsp+128h] [rbp-D8h]
  __int64 v69; // [rsp+130h] [rbp-D0h]
  char v70; // [rsp+138h] [rbp-C8h]
  __int64 v71; // [rsp+140h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+148h] [rbp-B8h]
  unsigned __int64 v73; // [rsp+150h] [rbp-B0h]
  double v74; // [rsp+158h] [rbp-A8h]
  __int64 v75; // [rsp+160h] [rbp-A0h]
  __int64 v76; // [rsp+168h] [rbp-98h] BYREF
  __int64 v77; // [rsp+170h] [rbp-90h]
  __int64 v78; // [rsp+178h] [rbp-88h]
  double v79; // [rsp+180h] [rbp-80h]
  __int64 v80; // [rsp+188h] [rbp-78h]
  __int64 v81; // [rsp+190h] [rbp-70h] BYREF
  __int64 (__fastcall *v82)(); // [rsp+198h] [rbp-68h]
  __int64 v83; // [rsp+1A0h] [rbp-60h]
  __int64 (__fastcall *v84)(_QWORD, _QWORD); // [rsp+1A8h] [rbp-58h]
  __int64 v85; // [rsp+1B0h] [rbp-50h]
  __int64 v86; // [rsp+1B8h] [rbp-48h]
  _QWORD *v87; // [rsp+1C0h] [rbp-40h]
  __int64 v88; // [rsp+1C8h] [rbp-38h]
  _QWORD *v89; // [rsp+1D0h] [rbp-30h]

  v87 = a4; /*0x100a78347*/
  v60 = a2; /*0x100a7834e*/
  v58[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(a1, a2); /*0x100a7835d*/
  LODWORD(v58[1]) = v10; /*0x100a78364*/
  v88 = 0; /*0x100a7836a*/
  std::time::SystemTime::duration_since::had059553cab94f96(v63, v58, 0, 0); /*0x100a78384*/
  if ( !LOBYTE(v63[0]) ) /*0x100a78390*/
    v88 = v63[1]; /*0x100a78399*/
  v15 = (__int64)v87; /*0x100a7839d*/
  v16 = v87[35]; /*0x100a783a1*/
  v17 = a1[103]; /*0x100a783a8*/
  if ( v16 >= v17 ) /*0x100a783b2*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v16, v17, &off_101973ED8, v12); /*0x100a78b6c*/
  v18 = 352 * v16; /*0x100a783b8*/
  v19 = *(_QWORD *)a5; /*0x100a783bf*/
  v20 = *(_QWORD *)a5 == 2; /*0x100a783c3*/
  v61 = a3; /*0x100a783c7*/
  if ( v20 /*0x100a7840f*/
    || (v17 = *(unsigned int *)(a5 + 16), v15 = *(_QWORD *)(a5 + 8), LOBYTE(v11) = v15 <= v88, (_DWORD)v17 != 1)
    || (LODWORD(v12) = *(_DWORD *)(a5 + 20), v16 = (unsigned int)(v12 - 361), (unsigned int)v16 < 0xFFFFFE98)
    || (LOBYTE(v11) = v19 & v11, (_BYTE)v11) )
  {
    v76 = 2; /*0x100a783d0*/
    v19 = 2; /*0x100a783db*/
  }
  else
  {
    a6 = *(double *)(a5 + 24); /*0x100a78411*/
    v11 = *(_DWORD *)(a5 + 32); /*0x100a78418*/
    v79 = a6; /*0x100a7841d*/
    LODWORD(v80) = v11; /*0x100a78422*/
    v76 = v19; /*0x100a78425*/
    v77 = v15; /*0x100a7842c*/
    LODWORD(v78) = 1; /*0x100a78433*/
    HIDWORD(v78) = v12; /*0x100a78439*/
  }
  v21 = a1[102] + v18; /*0x100a7843f*/
  v22 = *(_QWORD *)(a5 + 40); /*0x100a78446*/
  v89 = a1; /*0x100a7844f*/
  if ( v22 == 2 /*0x100a78494*/
    || (v13 = *(_DWORD *)(a5 + 56),
        v17 = *(unsigned int *)(a5 + 60),
        v16 = *(_QWORD *)(a5 + 48),
        LOBYTE(v14) = v16 <= v88,
        (((int)v17 < 8640) & (unsigned __int8)v13) != 0)
    || (LOBYTE(v14) = v22 & v14, (_BYTE)v14) )
  {
    v71 = 2; /*0x100a78455*/
    v22 = 2; /*0x100a78460*/
    v23 = 0; /*0x100a78466*/
  }
  else
  {
    a7 = *(double *)(a5 + 64); /*0x100a78496*/
    v14 = *(_DWORD *)(a5 + 72); /*0x100a7849d*/
    v74 = a7; /*0x100a784a2*/
    LODWORD(v75) = v14; /*0x100a784aa*/
    v71 = v22; /*0x100a784b1*/
    v72 = v16; /*0x100a784b8*/
    v73 = __PAIR64__(v17, v13); /*0x100a784bf*/
    v23 = 1; /*0x100a784cc*/
  }
  v24 = v23 | (v19 != 2); /*0x100a784d7*/
  *(_QWORD *)(v21 + 80) = v19; /*0x100a784da*/
  *(_QWORD *)(v21 + 88) = v15; /*0x100a784de*/
  *(_DWORD *)(v21 + 96) = 1; /*0x100a784e2*/
  *(_DWORD *)(v21 + 100) = v12; /*0x100a784e9*/
  *(double *)(v21 + 104) = a6; /*0x100a784ec*/
  *(_DWORD *)(v21 + 112) = v11; /*0x100a784f1*/
  *(_QWORD *)(v21 + 120) = v22; /*0x100a784f4*/
  *(_QWORD *)(v21 + 128) = v16; /*0x100a784f8*/
  *(_DWORD *)(v21 + 136) = v13; /*0x100a784ff*/
  *(_DWORD *)(v21 + 140) = v17; /*0x100a78506*/
  *(double *)(v21 + 144) = a7; /*0x100a7850c*/
  *(_DWORD *)(v21 + 152) = v14; /*0x100a78514*/
  *(_BYTE *)(v21 + 338) = 1; /*0x100a7851b*/
  *(_QWORD *)(v21 + 64) = 1; /*0x100a78522*/
  *(_QWORD *)(v21 + 72) = v88; /*0x100a7852e*/
  v25 = *(_BYTE *)(a5 + 80); /*0x100a78532*/
  if ( v25 != 8 ) /*0x100a7853a*/
  {
    *(_BYTE *)(v21 + 344) = v25; /*0x100a78540*/
    *(_BYTE *)(v21 + 341) = 2; /*0x100a78546*/
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v63); /*0x100a78554*/
    v26 = (SLODWORD(v63[0]) >> 13) - 1; /*0x100a78564*/
    v27 = 0; /*0x100a78567*/
    if ( SLODWORD(v63[0]) >> 13 <= 0 ) /*0x100a7856b*/
    {
      v28 = (1 - (SLODWORD(v63[0]) >> 13)) / 0x190u + 1; /*0x100a7857f*/
      v26 += 400 * v28; /*0x100a78587*/
      v27 = -146097 * v28; /*0x100a78589*/
    }
    v17 = (unsigned int)((1461 * v26) >> 2); /*0x100a785ac*/
    v16 = LODWORD(v63[1]); /*0x100a785bf*/
    v29 = 1000 /*0x100a785df*/
        * (HIDWORD(v63[0])
         + 86400LL * (int)(((v26 / 100) >> 2) + v17 + v27 + ((LODWORD(v63[0]) >> 4) & 0x1FF) - v26 / 100 - 719163));
    v30 = LODWORD(v63[1]) / 0xF4240uLL; /*0x100a785ed*/
    *(_QWORD *)v21 = 1; /*0x100a785f4*/
    *(_QWORD *)(v21 + 8) = v29 + v30; /*0x100a785fb*/
  }
  if ( v24 ) /*0x100a78602*/
  {
    v31 = 0; /*0x100a78608*/
    v32 = &v76; /*0x100a7860f*/
    if ( (_DWORD)v19 == 2 ) /*0x100a78616*/
      v32 = nullptr; /*0x100a78616*/
    v20 = (_DWORD)v22 == 2; /*0x100a7861a*/
    v22 = v87[5]; /*0x100a78622*/
    v62 = v87[6]; /*0x100a7862a*/
    v19 = (__int64)&v71; /*0x100a78631*/
    if ( v20 ) /*0x100a78638*/
      v19 = 0; /*0x100a78638*/
    v58[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v16, v17); /*0x100a78641*/
    LODWORD(v58[1]) = v33; /*0x100a78648*/
    std::time::SystemTime::duration_since::had059553cab94f96(v63, v58, 0, 0); /*0x100a78660*/
    if ( !LOBYTE(v63[0]) ) /*0x100a7866c*/
      v31 = v63[1]; /*0x100a7866e*/
    codexmate_lib::core::quota_history::append_snapshot_at::h0d1a448605ea92c6( /*0x100a786a0*/
      v58,
      v60,
      v61,
      (const void *)v22,
      v62,
      (__int64)v32,
      a6,
      a7,
      v19,
      v31);
    if ( LODWORD(v58[0]) != 11 ) /*0x100a786ac*/
    {
      qmemcpy(v63, v58, sizeof(v63)); /*0x100a786c8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64, v59); /*0x100a786cb*/
      v34 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x100a786da*/
      if ( !v34 ) /*0x100a786e2*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x100a78b7b*/
      v35 = v34; /*0x100a786e8*/
      qmemcpy(v34, "QUOTA_HISTORY_APPEND_FAILED", 27); /*0x100a78713*/
      v81 = (__int64)(v87 + 7); /*0x100a78728*/
      v82 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a78733*/
      v83 = (__int64)v63; /*0x100a78737*/
      v84 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a78742*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, &unk_1017C9B36, &v81); /*0x100a78758*/
      v36 = v89; /*0x100a7875d*/
      v81 = 27; /*0x100a78761*/
      v82 = v35; /*0x100a78769*/
      v83 = 27; /*0x100a7876d*/
      v86 = v59[2]; /*0x100a7877c*/
      v85 = v59[1]; /*0x100a7878e*/
      v84 = (__int64 (__fastcall *)(_QWORD, _QWORD))v59[0]; /*0x100a78792*/
      v37 = v89[106]; /*0x100a78796*/
      if ( v37 == v89[104] ) /*0x100a787a4*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(v89 + 104); /*0x100a787ad*/
      v38 = v36[105]; /*0x100a787b2*/
      v39 = 48 * v37; /*0x100a787bd*/
      *(_QWORD *)(v38 + v39 + 40) = v86; /*0x100a787c5*/
      *(_QWORD *)(v38 + v39 + 32) = v85; /*0x100a787ce*/
      *(_QWORD *)(v38 + v39 + 24) = v84; /*0x100a787d7*/
      *(_QWORD *)(v38 + v39 + 16) = v83; /*0x100a787e0*/
      v40 = v81; /*0x100a787e5*/
      *(_QWORD *)(v38 + v39 + 8) = v82; /*0x100a787ed*/
      *(_QWORD *)(v38 + v39) = v40; /*0x100a787f2*/
      v19 = v37 + 1; /*0x100a787f6*/
      v36[106] = v19; /*0x100a787f9*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v63); /*0x100a78807*/
    }
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v58, v87 + 4); /*0x100a7881b*/
  v41 = *(_QWORD *)(v21 + 160); /*0x100a78820*/
  if ( v41 == 2 ) /*0x100a7882b*/
  {
    v42 = 2; /*0x100a7882d*/
  }
  else
  {
    LOBYTE(v19) = *(_BYTE *)(v21 + 176); /*0x100a78835*/
    if ( (v41 & 1) != 0 ) /*0x100a7883f*/
    {
      v22 = *(_QWORD *)(v21 + 168); /*0x100a78841*/
      v42 = 1; /*0x100a78848*/
    }
    else
    {
      v42 = 0; /*0x100a78850*/
    }
  }
  v43 = v89; /*0x100a78853*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v63); /*0x100a7885e*/
  v44 = (SLODWORD(v63[0]) >> 13) - 1; /*0x100a78875*/
  v45 = 0; /*0x100a78878*/
  if ( SLODWORD(v63[0]) >> 13 <= 0 ) /*0x100a7887c*/
  {
    v46 = (1 - (SLODWORD(v63[0]) >> 13)) / 0x190u + 1; /*0x100a78890*/
    v44 += 400 * v46; /*0x100a78898*/
    v45 = -146097 * v46; /*0x100a7889a*/
  }
  v47 = 1000 /*0x100a78904*/
      * (HIDWORD(v63[0])
       + 86400LL
       * (((v44 / 100) >> 2) + ((1461 * v44) >> 2) + v45 + ((LODWORD(v63[0]) >> 4) & 0x1FF) - v44 / 100 - 719163))
      + LODWORD(v63[1]) / 0xF4240uLL;
  v66 = v58[0]; /*0x100a78915*/
  v67 = v58[1]; /*0x100a7891c*/
  v68 = v58[2]; /*0x100a7892a*/
  v69 = v88; /*0x100a78935*/
  v70 = 1; /*0x100a7893c*/
  v63[2] = v76; /*0x100a78951*/
  v63[3] = v77; /*0x100a78958*/
  v63[4] = v78; /*0x100a78966*/
  *(double *)&v63[5] = v79; /*0x100a78971*/
  v63[6] = v80; /*0x100a7897c*/
  v63[11] = v75; /*0x100a7898a*/
  *(double *)&v63[10] = v74; /*0x100a78998*/
  v63[9] = v73; /*0x100a789a6*/
  v63[8] = v72; /*0x100a789bb*/
  v63[7] = v71; /*0x100a789c2*/
  v64[0] = v42; /*0x100a789c9*/
  v64[1] = v22; /*0x100a789d0*/
  v65 = v19; /*0x100a789d7*/
  v63[0] = 1; /*0x100a789de*/
  v63[1] = v47; /*0x100a789e9*/
  codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(v43 + 96, v63, v88); /*0x100a789f7*/
  v48 = v43[87]; /*0x100a789fc*/
  if ( v48 ) /*0x100a78a06*/
  {
    v49 = v89[86]; /*0x100a78a10*/
    v50 = 424 * v48; /*0x100a78a17*/
    LODWORD(v48) = (_DWORD)v87; /*0x100a78a1e*/
    v51 = (const void *)v87[5]; /*0x100a78a22*/
    v52 = v87[6]; /*0x100a78a26*/
    while ( 1 ) /*0x100a78a44*/
    {
      if ( *(_QWORD *)(v49 + 208) == v52 ) /*0x100a78a4c*/
      {
        LODWORD(v48) = memcmp(*(const void **)(v49 + 200), v51, v52); /*0x100a78a5c*/
        if ( !(_DWORD)v48 ) /*0x100a78a63*/
          break; /*0x100a78a63*/
      }
      v49 += 424; /*0x100a78a30*/
      v50 -= 424; /*0x100a78a37*/
      if ( !v50 ) /*0x100a78a3e*/
        return v48; /*0x100a78a3e*/
    }
    LODWORD(v48) = *(unsigned __int8 *)(v21 + 344); /*0x100a78a65*/
    if ( (_BYTE)v48 != 8 ) /*0x100a78a6e*/
    {
      if ( *(_DWORD *)v21 == 1 ) /*0x100a78a77*/
      {
        v53 = *(_QWORD *)(v21 + 8); /*0x100a78a79*/
      }
      else
      {
        chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v63); /*0x100a78a89*/
        v54 = (SLODWORD(v63[0]) >> 13) - 1; /*0x100a78a99*/
        v55 = 0; /*0x100a78a9c*/
        if ( SLODWORD(v63[0]) >> 13 <= 0 ) /*0x100a78aa0*/
        {
          v56 = (1 - (SLODWORD(v63[0]) >> 13)) / 0x190u + 1; /*0x100a78ab4*/
          v54 += 400 * v56; /*0x100a78abc*/
          v55 = -146097 * v56; /*0x100a78abe*/
        }
        v53 = 1000 /*0x100a78b26*/
            * (HIDWORD(v63[0])
             + 86400LL
             * (((v54 / 100) >> 2) + ((1461 * v54) >> 2) + v55 + ((LODWORD(v63[0]) >> 4) & 0x1FF) - v54 / 100 - 719163))
            + LODWORD(v63[1]) / 0xF4240uLL;
        LOBYTE(v48) = *(_BYTE *)(v21 + 344); /*0x100a78b29*/
      }
      LODWORD(v48) = codexmate_lib::core::repository::apply_plan_state::h33911d6dab757bc8( /*0x100a78b3b*/
                       (unsigned __int8 *)v49,
                       v48,
                       2u,
                       v53);
      if ( (_BYTE)v48 ) /*0x100a78b42*/
      {
        LODWORD(v48) = (_DWORD)v89; /*0x100a78b44*/
        v89[94] = v88; /*0x100a78b4c*/
      }
    }
  }
  return v48; /*0x100a78b53*/
}