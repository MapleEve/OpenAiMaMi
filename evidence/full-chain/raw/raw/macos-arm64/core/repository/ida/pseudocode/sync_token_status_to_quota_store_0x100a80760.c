// __ZN13codexmate_lib4core10repository32sync_token_status_to_quota_store @ 0x100a80760 | 基线 same-set
double __fastcall codexmate_lib::core::repository::sync_token_status_to_quota_store::h945cce6b53563565(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double result,
        double a5)
{
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // r13d
  unsigned int v9; // eax
  _QWORD *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r14
  _QWORD *v14; // r12
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // r15
  size_t v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 *v23; // rdi
  int v24; // esi
  int v25; // r9d
  int v26; // r10d
  int v27; // r11d
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r15
  char v31; // r12
  unsigned __int64 v32; // rbx
  _QWORD *v33; // r14
  __int64 v34; // rsi
  _BYTE v35[15]; // [rsp+0h] [rbp-1C0h] BYREF
  void *v36; // [rsp+Fh] [rbp-1B1h]
  size_t v37; // [rsp+17h] [rbp-1A9h]
  _QWORD v38[4]; // [rsp+20h] [rbp-1A0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-180h] BYREF
  void *v40; // [rsp+48h] [rbp-178h]
  size_t v41; // [rsp+50h] [rbp-170h]
  __int64 v42; // [rsp+58h] [rbp-168h] BYREF
  __int64 v43; // [rsp+60h] [rbp-160h]
  __int64 v44; // [rsp+68h] [rbp-158h]
  __int64 v45; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-148h]
  __int64 v47; // [rsp+80h] [rbp-140h]
  __int64 *v48; // [rsp+88h] [rbp-138h]
  int v49; // [rsp+90h] [rbp-130h]
  int v50; // [rsp+94h] [rbp-12Ch]
  double v51; // [rsp+98h] [rbp-128h]
  int v52; // [rsp+A0h] [rbp-120h]
  __int64 v53; // [rsp+A8h] [rbp-118h]
  size_t v54; // [rsp+B0h] [rbp-110h]
  int v55; // [rsp+B8h] [rbp-108h]
  int v56; // [rsp+BCh] [rbp-104h]
  double v57; // [rsp+C0h] [rbp-100h]
  int v58; // [rsp+C8h] [rbp-F8h]
  __int64 v59; // [rsp+D0h] [rbp-F0h]
  __int64 v60; // [rsp+D8h] [rbp-E8h]
  __int64 v61; // [rsp+E0h] [rbp-E0h]
  __int64 v62; // [rsp+E8h] [rbp-D8h]
  void *v63; // [rsp+F0h] [rbp-D0h]
  size_t v64; // [rsp+F8h] [rbp-C8h]
  __int64 v65; // [rsp+100h] [rbp-C0h]
  char v66; // [rsp+108h] [rbp-B8h]
  __int64 v67; // [rsp+110h] [rbp-B0h]
  __int64 v68; // [rsp+118h] [rbp-A8h]
  __int64 v69; // [rsp+120h] [rbp-A0h]
  __int64 v70; // [rsp+128h] [rbp-98h]
  unsigned __int64 v71; // [rsp+130h] [rbp-90h]
  _QWORD *v72; // [rsp+138h] [rbp-88h]
  __int64 v73; // [rsp+140h] [rbp-80h] BYREF
  __int64 v74; // [rsp+148h] [rbp-78h]
  __int64 v75; // [rsp+150h] [rbp-70h]
  __int64 v76; // [rsp+158h] [rbp-68h]
  int v77; // [rsp+160h] [rbp-60h]
  int v78; // [rsp+164h] [rbp-5Ch]
  __int64 v79; // [rsp+168h] [rbp-58h]
  __int64 v80; // [rsp+170h] [rbp-50h]
  __int64 v81; // [rsp+178h] [rbp-48h]
  _QWORD *v82; // [rsp+180h] [rbp-40h]
  __int64 v83; // [rsp+188h] [rbp-38h]
  void *__s2; // [rsp+190h] [rbp-30h]

  v82 = a1; /*0x100a8077a*/
  *(_QWORD *)v35 = std::time::SystemTime::now::h1fe79e41f9d5677f(a1, a2); /*0x100a80783*/
  *(_DWORD *)&v35[8] = v6; /*0x100a8078a*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v73, v35, 0, 0); /*0x100a8079f*/
  v80 = 0; /*0x100a807ad*/
  if ( !(_BYTE)v73 ) /*0x100a807b1*/
    v80 = v74; /*0x100a807b7*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v73); /*0x100a807bf*/
  v7 = v73; /*0x100a807c4*/
  v8 = ((int)v73 >> 13) - 1; /*0x100a807cc*/
  if ( (int)v73 >> 13 <= 0 ) /*0x100a807d2*/
  {
    v9 = (1 - ((int)v73 >> 13)) / 0x190u + 1; /*0x100a807f0*/
    v8 += 400 * v9; /*0x100a807f8*/
    __s2 = (void *)(-146097 * v9); /*0x100a80801*/
  }
  else
  {
    __s2 = nullptr; /*0x100a807d4*/
  }
  v81 = HIDWORD(v73); /*0x100a80808*/
  v83 = (unsigned int)v74; /*0x100a8080f*/
  v10 = v82; /*0x100a80813*/
  v11 = v82[102] + 352LL * v82[103]; /*0x100a80829*/
  v38[0] = v82[102]; /*0x100a8082c*/
  v38[1] = v11; /*0x100a80833*/
  v38[2] = a2; /*0x100a8083a*/
  v38[3] = a3; /*0x100a80841*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h122238f69388b861( /*0x100a80856*/
    &v42,
    v38);
  v12 = v43; /*0x100a80862*/
  v73 = v43; /*0x100a8087b*/
  v74 = v43; /*0x100a8087f*/
  v69 = v42; /*0x100a80883*/
  v75 = v42; /*0x100a8088a*/
  v79 = v43 + 48 * v44; /*0x100a8088e*/
  v76 = v79; /*0x100a80892*/
  v13 = v43; /*0x100a80896*/
  if ( v44 ) /*0x100a8089c*/
  {
    v71 = 1000 /*0x100a808ff*/
        * (v81
         + 86400LL
         * (int)(((v8 / 100) >> 2) + ((1461 * v8) >> 2) + (_DWORD)__s2 + ((v7 >> 4) & 0x1FF) - v8 / 100 - 719163))
        + ((unsigned __int64)(1125899907 * v83) >> 50);
    v72 = v10 + 96; /*0x100a8090d*/
    v70 = v43; /*0x100a80914*/
    v13 = v43; /*0x100a8091b*/
    v14 = v10; /*0x100a8091e*/
    while ( 1 ) /*0x100a809d4*/
    {
      v17 = v13; /*0x100a809d4*/
      v13 += 48; /*0x100a809d7*/
      if ( *(_QWORD *)(v17 + 24) == 2 ) /*0x100a809e3*/
        break; /*0x100a809e3*/
      v81 = *(_QWORD *)(v17 + 24); /*0x100a809e9*/
      v83 = *(_QWORD *)v17; /*0x100a809f0*/
      __s2 = *(void **)(v17 + 8); /*0x100a809f8*/
      v18 = *(_QWORD *)(v17 + 16); /*0x100a809fc*/
      v19 = *(_QWORD *)(v17 + 32); /*0x100a80a00*/
      v68 = *(_QWORD *)(v17 + 40); /*0x100a80a08*/
      v67 = v19; /*0x100a80a0f*/
      v20 = v14[98]; /*0x100a80a16*/
      if ( v20 ) /*0x100a80a21*/
      {
        v21 = 160 * v20; /*0x100a80a36*/
        v22 = v82[97] + 120LL; /*0x100a80a3a*/
        while ( *(_QWORD *)(v22 + 16) != v18 || memcmp(*(const void **)(v22 + 8), __s2, v18) ) /*0x100a80a6e*/
        {
          v22 += 160; /*0x100a80a40*/
          v21 -= 160; /*0x100a80a47*/
          if ( !v21 ) /*0x100a80a4e*/
            goto LABEL_8; /*0x100a80a4e*/
        }
        v23 = &v39; /*0x100a80a70*/
        v24 = v22; /*0x100a80a77*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, v22); /*0x100a80a7a*/
        v28 = *(_QWORD *)(v22 - 104); /*0x100a80a7f*/
        if ( v28 != 2 ) /*0x100a80a88*/
        {
          result = *(double *)(v22 - 80); /*0x100a80a8a*/
          v77 = *(_DWORD *)(v22 - 72); /*0x100a80a96*/
          v24 = *(_DWORD *)(v22 - 88); /*0x100a80a99*/
          v78 = *(_DWORD *)(v22 - 84); /*0x100a80aa3*/
          v23 = *(__int64 **)(v22 - 96); /*0x100a80aa6*/
        }
        v29 = *(_QWORD *)(v22 - 64); /*0x100a80aab*/
        if ( v29 != 2 ) /*0x100a80ab4*/
        {
          a5 = *(double *)(v22 - 40); /*0x100a80ab6*/
          v25 = *(_DWORD *)(v22 - 32); /*0x100a80abd*/
          v26 = *(_DWORD *)(v22 - 48); /*0x100a80ac2*/
          v27 = *(_DWORD *)(v22 - 44); /*0x100a80ac7*/
          v18 = *(_QWORD *)(v22 - 56); /*0x100a80acc*/
        }
        v30 = *(_QWORD *)(v22 + 24); /*0x100a80ad1*/
        v31 = *(_BYTE *)(v22 + 32); /*0x100a80ad6*/
        v37 = v41; /*0x100a80aea*/
        v36 = v40; /*0x100a80af5*/
        *(_QWORD *)&v35[7] = v39; /*0x100a80b00*/
        v64 = v41; /*0x100a80b0e*/
        v63 = v40; /*0x100a80b16*/
        v62 = v39; /*0x100a80b1d*/
        v61 = v68; /*0x100a80b27*/
        v60 = v67; /*0x100a80b32*/
        v65 = v30; /*0x100a80b36*/
        v66 = v31; /*0x100a80b3d*/
        v47 = v28; /*0x100a80b44*/
        v48 = v23; /*0x100a80b4b*/
        v49 = v24; /*0x100a80b52*/
        v50 = v78; /*0x100a80b5b*/
        v51 = result; /*0x100a80b61*/
        v52 = v77; /*0x100a80b6c*/
        v53 = v29; /*0x100a80b72*/
        v54 = v18; /*0x100a80b79*/
        v55 = v26; /*0x100a80b80*/
        v56 = v27; /*0x100a80b87*/
        v57 = a5; /*0x100a80b8e*/
        v58 = v25; /*0x100a80b96*/
        v59 = v81; /*0x100a80ba1*/
        v45 = 1; /*0x100a80ba8*/
        v46 = v71; /*0x100a80bba*/
        codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(v72, &v45, v80); /*0x100a80bd3*/
        v14 = v82; /*0x100a80bdf*/
        if ( v83 ) /*0x100a80be3*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v83, 1); /*0x100a80bf2*/
      }
      else
      {
LABEL_8:
        v15 = (__int64 *)(v17 + 32); /*0x100a80930*/
        v62 = v83; /*0x100a80938*/
        v63 = __s2; /*0x100a80943*/
        v64 = v18; /*0x100a8094a*/
        v16 = *v15; /*0x100a80951*/
        v61 = v15[1]; /*0x100a8095f*/
        v60 = v16; /*0x100a80963*/
        v65 = v80; /*0x100a8096b*/
        v66 = 1; /*0x100a80972*/
        v47 = 2; /*0x100a80979*/
        v53 = 2; /*0x100a80984*/
        v59 = v81; /*0x100a80993*/
        v45 = 1; /*0x100a8099a*/
        v46 = v71; /*0x100a809ac*/
        codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(v72, &v45, v80); /*0x100a809c1*/
        v14 = v82; /*0x100a809c6*/
      }
      if ( v13 == v79 ) /*0x100a809ce*/
      {
        v13 = v79; /*0x100a80bfc*/
        break; /*0x100a80bfc*/
      }
    }
    v74 = v13; /*0x100a80c00*/
    v12 = v70; /*0x100a80c04*/
  }
  if ( v79 != v13 ) /*0x100a80c25*/
  {
    v32 = (v79 - v13) / 0x30uLL; /*0x100a80c2a*/
    v33 = (_QWORD *)(v13 + 8); /*0x100a80c2e*/
    do /*0x100a80c47*/
    {
      v34 = *(v33 - 1); /*0x100a80c49*/
      if ( v34 ) /*0x100a80c50*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v34, 1); /*0x100a80c5a*/
      v33 += 6; /*0x100a80c40*/
      --v32; /*0x100a80c44*/
    }
    while ( v32 ); /*0x100a80c47*/
  }
  if ( v69 ) /*0x100a80c6b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 48 * v69, 8); /*0x100a80c7d*/
  return result; /*0x100a80c82*/
}