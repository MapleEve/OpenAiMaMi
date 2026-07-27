// __ZN13codexmate_lib4core10repository22apply_account_metadata @ 0x100a7a1a0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::apply_account_metadata | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::apply_account_metadata::hdbdf600db9360b79(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        size_t a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int128 *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r12
  __int128 *i; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  int v15; // r8d
  unsigned int v16; // r12d
  _QWORD *v17; // r14
  __int64 v18; // r12
  _QWORD *v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  signed __int64 v29; // rsi
  unsigned int v30; // eax
  int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // edx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // r12
  int v42; // eax
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // r13
  unsigned __int8 v48; // r14
  char v49; // bl
  int v50; // edx
  int v51; // ecx
  unsigned int v52; // ecx
  __int64 v53; // rcx
  unsigned __int8 v54; // al
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  int v57; // edx
  int v58; // ecx
  unsigned int v59; // ecx
  char v60; // dl
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  int v65; // edx
  int v66; // ecx
  unsigned int v67; // ecx
  __int64 v68; // rdi
  __int64 v69; // rsi
  char v70; // bl
  int v71; // edx
  __int64 v72; // r14
  signed __int64 v73; // rcx
  char v74; // dl
  char v75; // r13
  unsigned int v76; // ebx
  int v77; // eax
  char v78; // al
  __int16 v79; // ax
  __int64 v80; // rcx
  char v81; // dl
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  unsigned __int64 v86; // r14
  _BYTE v88[16]; // [rsp+8h] [rbp-458h] BYREF
  __int64 v89; // [rsp+18h] [rbp-448h]
  signed __int64 v90; // [rsp+20h] [rbp-440h]
  unsigned __int8 v91; // [rsp+1A8h] [rbp-2B8h]
  unsigned __int8 v92; // [rsp+1A9h] [rbp-2B7h]
  unsigned __int8 v93; // [rsp+1ABh] [rbp-2B5h]
  unsigned __int64 v94; // [rsp+1B0h] [rbp-2B0h] BYREF
  unsigned __int64 v95; // [rsp+1B8h] [rbp-2A8h]
  unsigned __int64 v96; // [rsp+1C0h] [rbp-2A0h]
  __int64 v97; // [rsp+358h] [rbp-108h] BYREF
  int v98; // [rsp+360h] [rbp-100h]
  __int64 v99; // [rsp+368h] [rbp-F8h]
  __int64 v100; // [rsp+370h] [rbp-F0h]
  unsigned __int64 v101; // [rsp+378h] [rbp-E8h]
  unsigned __int64 v102; // [rsp+380h] [rbp-E0h]
  unsigned __int64 v103; // [rsp+388h] [rbp-D8h]
  __int64 v104; // [rsp+390h] [rbp-D0h]
  __int64 v105; // [rsp+398h] [rbp-C8h]
  unsigned __int64 v106; // [rsp+3A0h] [rbp-C0h]
  __int64 v107; // [rsp+3A8h] [rbp-B8h]
  signed __int64 v108; // [rsp+3B0h] [rbp-B0h]
  unsigned __int64 v109; // [rsp+3B8h] [rbp-A8h]
  unsigned __int64 v110; // [rsp+3C0h] [rbp-A0h]
  void *__s2; // [rsp+3C8h] [rbp-98h]
  __int64 v112; // [rsp+3D0h] [rbp-90h]
  unsigned __int64 v113; // [rsp+3D8h] [rbp-88h]
  int v114; // [rsp+3E4h] [rbp-7Ch]
  unsigned __int64 v115; // [rsp+3E8h] [rbp-78h]
  unsigned __int64 v116; // [rsp+3F0h] [rbp-70h]
  unsigned __int64 v117; // [rsp+3F8h] [rbp-68h] BYREF
  unsigned __int64 v118; // [rsp+400h] [rbp-60h]
  unsigned __int64 v119; // [rsp+408h] [rbp-58h]
  int v120; // [rsp+410h] [rbp-50h]
  int v121; // [rsp+414h] [rbp-4Ch]
  __int64 v122; // [rsp+418h] [rbp-48h]
  unsigned __int64 v123; // [rsp+420h] [rbp-40h]
  __int64 v124; // [rsp+428h] [rbp-38h]
  int v125; // [rsp+430h] [rbp-30h]
  unsigned __int8 v126; // [rsp+437h] [rbp-29h]

  __s2 = a3; /*0x100a7a1b4*/
  v5 = *(_QWORD *)(a1 + 696); /*0x100a7a1bb*/
  if ( !v5 ) /*0x100a7a1c5*/
    return 0; /*0x100a7a2bf*/
  v106 = a2; /*0x100a7a1ce*/
  v112 = *(_QWORD *)(a5 + 48); /*0x100a7a1d9*/
  v122 = a5; /*0x100a7a1e0*/
  v104 = *(_QWORD *)(a5 + 72); /*0x100a7a1e8*/
  v107 = a1; /*0x100a7a1ef*/
  v7 = *(__int128 **)(a1 + 688); /*0x100a7a1f6*/
  v8 = 424 * v5; /*0x100a7a1fd*/
  v9 = 424 * v5; /*0x100a7a204*/
  for ( i = v7; *((_QWORD *)i + 26) != a4 || memcmp(*((const void **)i + 25), __s2, a4); i = (__int128 *)((char *)i + 424) ) /*0x100a7a207*/
  {
    v9 -= 424; /*0x100a7a217*/
    if ( !v9 ) /*0x100a7a21e*/
      return 0; /*0x100a7a21e*/
  }
  _$LT$codexmate_lib..core..repository..RegistryItem$u20$as$u20$core..clone..Clone$GT$::clone::h21461c0ea2b82fea(v88, i); /*0x100a7a25b*/
  v126 = v93; /*0x100a7a267*/
  v103 = *(_QWORD *)(v107 + 824); /*0x100a7a278*/
  if ( v106 < v103 ) /*0x100a7a286*/
  {
    if ( (_DWORD)v104 == 2 ) /*0x100a7a293*/
    {
      v12 = v91; /*0x100a7a295*/
      v13 = v89; /*0x100a7a29d*/
      v14 = v90; /*0x100a7a2a4*/
      v15 = v92; /*0x100a7a2ab*/
      v124 = v89; /*0x100a7a2b3*/
LABEL_38:
      v29 = v14; /*0x100a7a58b*/
LABEL_39:
      v30 = v12; /*0x100a7a58e*/
      v31 = v126; /*0x100a7a591*/
      goto LABEL_40; /*0x100a7a591*/
    }
    v17 = (_QWORD *)(*(_QWORD *)(v107 + 816) + 352 * v106); /*0x100a7a2d6*/
    if ( v17[35] == 0x8000000000000000LL && *(_QWORD *)(v122 + 160) != 0x8000000000000000LL ) /*0x100a7a2f5*/
    {
      v18 = v122 + 160; /*0x100a7a2ff*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v94, v122 + 160); /*0x100a7a310*/
      v19 = v17 + 35; /*0x100a7a315*/
      v119 = v96; /*0x100a7a323*/
      v118 = v95; /*0x100a7a335*/
      v117 = v94; /*0x100a7a339*/
      v20 = v17[35]; /*0x100a7a33d*/
      if ( v20 != 0x8000000000000000LL && v20 ) /*0x100a7a352*/
      {
        v21 = v17[36]; /*0x100a7a354*/
        v124 = (__int64)(v17 + 35); /*0x100a7a35b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x100a7a364*/
        v19 = (_QWORD *)v124; /*0x100a7a369*/
      }
      v19[2] = v119; /*0x100a7a371*/
      v22 = v117; /*0x100a7a375*/
      v19[1] = v118; /*0x100a7a37d*/
      *v19 = v22; /*0x100a7a381*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v94, v18); /*0x100a7a38e*/
      v119 = v96; /*0x100a7a39a*/
      v118 = v95; /*0x100a7a3ac*/
      v117 = v94; /*0x100a7a3b0*/
      v23 = v17[32]; /*0x100a7a3bb*/
      if ( v23 != 0x8000000000000000LL && v23 ) /*0x100a7a3d4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[33], v23, 1); /*0x100a7a3e2*/
      v17[34] = v119; /*0x100a7a3eb*/
      v24 = v117; /*0x100a7a3f0*/
      v17[33] = v118; /*0x100a7a3f8*/
      v17[32] = v24; /*0x100a7a3fd*/
    }
    if ( v17[38] == 0x8000000000000000LL ) /*0x100a7a412*/
    {
      v25 = 0x8000000000000000LL; /*0x100a7a418*/
      if ( *(_QWORD *)(v122 + 184) != 0x8000000000000000LL ) /*0x100a7a426*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v94, v122 + 184); /*0x100a7a43a*/
        v25 = v94; /*0x100a7a43f*/
        v117 = v95; /*0x100a7a44d*/
        v118 = v96; /*0x100a7a458*/
        v26 = v17[38]; /*0x100a7a45c*/
        if ( v26 != 0x8000000000000000LL ) /*0x100a7a466*/
        {
          if ( v26 ) /*0x100a7a46b*/
          {
            v27 = v17[39]; /*0x100a7a46d*/
            v124 = v94; /*0x100a7a479*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 1); /*0x100a7a47d*/
            v25 = v124; /*0x100a7a482*/
          }
        }
      }
      v17[38] = v25; /*0x100a7a486*/
      v28 = v118; /*0x100a7a491*/
      v17[39] = v117; /*0x100a7a495*/
      v17[40] = v28; /*0x100a7a49c*/
    }
  }
  v12 = v91; /*0x100a7a4b0*/
  v13 = v89; /*0x100a7a4b8*/
  v14 = v90; /*0x100a7a4bf*/
  v15 = v92; /*0x100a7a4c6*/
  v11 = v126; /*0x100a7a4ce*/
  if ( v126 == 2 || (_DWORD)v104 == 2 ) /*0x100a7a4ad*/
  {
    v124 = v89; /*0x100a7a4dc*/
    v29 = v90; /*0x100a7a4e0*/
    v30 = v91; /*0x100a7a4e3*/
    v31 = v126; /*0x100a7a4e6*/
LABEL_40:
    v125 = v31; /*0x100a7a595*/
    goto LABEL_41; /*0x100a7a595*/
  }
  if ( (v104 & 1) != 0 && (v29 = *(_QWORD *)(v122 + 80), ((unsigned __int8)v89 & (v29 <= v90)) != 1) ) /*0x100a7a506*/
  {
    v30 = *(unsigned __int8 *)(v122 + 217); /*0x100a7a530*/
    v124 = 1; /*0x100a7a53c*/
    if ( (_BYTE)v30 == 2 ) /*0x100a7a542*/
    {
      if ( v91 == 2 ) /*0x100a7a548*/
        goto LABEL_36; /*0x100a7a548*/
      LOBYTE(v30) = 2; /*0x100a7a54a*/
      v124 = 1; /*0x100a7a54c*/
LABEL_64:
      v125 = 0; /*0x100a7a6dc*/
      goto LABEL_41; /*0x100a7a6e3*/
    }
  }
  else
  {
    v30 = *(unsigned __int8 *)(v122 + 217); /*0x100a7a513*/
    v124 = v89; /*0x100a7a521*/
    v29 = v90; /*0x100a7a525*/
    if ( v91 != 2 || (_BYTE)v30 == 2 ) /*0x100a7a51c*/
      goto LABEL_35; /*0x100a7a528*/
  }
  if ( (_BYTE)v30 != v91 ) /*0x100a7a558*/
    goto LABEL_64; /*0x100a7a558*/
LABEL_35:
  if ( !v124 ) /*0x100a7a563*/
  {
    v124 = 0; /*0x100a7a6c2*/
    if ( !(_BYTE)v89 ) /*0x100a7a6cd*/
      goto LABEL_39; /*0x100a7a6cd*/
    v13 = 1; /*0x100a7a6d3*/
    v30 = v91; /*0x100a7a6d9*/
    goto LABEL_64; /*0x100a7a6d9*/
  }
LABEL_36:
  v124 = 1; /*0x100a7a569*/
  v125 = 0; /*0x100a7a572*/
  if ( (_BYTE)v89 && v29 == v90 ) /*0x100a7a585*/
    goto LABEL_38; /*0x100a7a585*/
  v30 = v91; /*0x100a7a71a*/
LABEL_41:
  if ( (_DWORD)v112 == 2 ) /*0x100a7a59f*/
  {
    v108 = v29; /*0x100a7a5a1*/
    v120 = v15; /*0x100a7a5ab*/
    if ( (_BYTE)v30 == 2 ) /*0x100a7a5b0*/
      goto LABEL_43; /*0x100a7a5b0*/
  }
  else
  {
    v115 = v14; /*0x100a7a5c7*/
    v116 = v13; /*0x100a7a5cb*/
    LOBYTE(v123) = v15; /*0x100a7a5cf*/
    if ( !*(_BYTE *)(v122 + 66) ) /*0x100a7a5db*/
    {
      v35 = *(_DWORD *)(v122 + 64); /*0x100a7a66f*/
      v11 = 0; /*0x100a7a672*/
      if ( (_BYTE)v35 == 2 ) /*0x100a7a676*/
        v35 = 0; /*0x100a7a676*/
      v120 = v35; /*0x100a7a679*/
      LOBYTE(v35) = 2; /*0x100a7a67c*/
      v125 = v35; /*0x100a7a67e*/
      v124 = 0; /*0x100a7a681*/
      goto LABEL_71; /*0x100a7a689*/
    }
    v105 = v29; /*0x100a7a5e1*/
    v108 = v29; /*0x100a7a5e8*/
    if ( v112 ) /*0x100a7a5f7*/
    {
      v124 = 1; /*0x100a7a5fe*/
      v108 = *(_QWORD *)(v122 + 56); /*0x100a7a60a*/
    }
    v32 = *(unsigned __int8 *)(v122 + 65); /*0x100a7a615*/
    v33 = *(unsigned int *)(v122 + 64); /*0x100a7a61a*/
    v34 = (unsigned __int8)v123; /*0x100a7a620*/
    if ( (_BYTE)v33 != 2 ) /*0x100a7a624*/
      v34 = *(_DWORD *)(v122 + 64); /*0x100a7a624*/
    v120 = v34; /*0x100a7a627*/
    if ( (_BYTE)v32 != 2 ) /*0x100a7a62e*/
    {
      v36 = (unsigned int)v32; /*0x100a7a69b*/
      if ( (((unsigned __int8)v32 ^ 1) & (v112 == 0)) != 0 ) /*0x100a7a6a3*/
      {
        v11 = 0; /*0x100a7a6a5*/
        v37 = (unsigned __int8)v33; /*0x100a7a6aa*/
        if ( (_BYTE)v33 == 2 ) /*0x100a7a6ad*/
          v37 = 0; /*0x100a7a6ad*/
        v120 = v37; /*0x100a7a6b0*/
        LOBYTE(v37) = 2; /*0x100a7a6b3*/
        v125 = v37; /*0x100a7a6b5*/
        v124 = 0; /*0x100a7a6b8*/
      }
      else
      {
        LOBYTE(v30) = 2; /*0x100a7a6eb*/
        v125 = v30; /*0x100a7a6ed*/
        if ( !v112 && (v32 & 1) != 0 && (_BYTE)v124 ) /*0x100a7a6ff*/
        {
          LOBYTE(v36) = v32 ^ 1; /*0x100a7a69e*/
          v38 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6(v32, 0, v36, v33, v32); /*0x100a7a701*/
          v124 = v105 > v38; /*0x100a7a712*/
          LOBYTE(v11) = 1; /*0x100a7a716*/
        }
        else
        {
          v11 = v32; /*0x100a7a722*/
        }
      }
      goto LABEL_71; /*0x100a7a6c0*/
    }
    v11 = 2; /*0x100a7a63c*/
    if ( !v112 ) /*0x100a7a641*/
      v11 = (unsigned __int8)v125; /*0x100a7a641*/
    v125 = v11; /*0x100a7a644*/
    LOBYTE(v15) = v123; /*0x100a7a647*/
    v13 = v116; /*0x100a7a64c*/
    v14 = v115; /*0x100a7a650*/
    if ( (_BYTE)v30 == 2 ) /*0x100a7a656*/
    {
LABEL_43:
      if ( (_BYTE)v12 != 2 ) /*0x100a7a5ba*/
      {
        LOBYTE(v11) = 2; /*0x100a7a5c0*/
        goto LABEL_78; /*0x100a7a5c2*/
      }
      goto LABEL_73; /*0x100a7a5ba*/
    }
  }
  v115 = v14; /*0x100a7a65c*/
  v116 = v13; /*0x100a7a660*/
  LOBYTE(v123) = v15; /*0x100a7a664*/
  v11 = v30; /*0x100a7a668*/
LABEL_71:
  if ( (_BYTE)v11 != (_BYTE)v12 ) /*0x100a7a728*/
    goto LABEL_78; /*0x100a7a728*/
  LOBYTE(v15) = v123; /*0x100a7a72a*/
  LOBYTE(v13) = v116; /*0x100a7a72f*/
  v14 = v115; /*0x100a7a733*/
LABEL_73:
  if ( !v124 ) /*0x100a7a73c*/
  {
    if ( !(_BYTE)v13 ) /*0x100a7a765*/
      goto LABEL_81; /*0x100a7a765*/
    v124 = 0; /*0x100a7a767*/
    v11 = (unsigned int)v12; /*0x100a7a76f*/
LABEL_78:
    v121 = 0; /*0x100a7a772*/
    v105 = v11; /*0x100a7a779*/
    v39 = v106; /*0x100a7a780*/
    if ( v106 < v103 ) /*0x100a7a78e*/
      goto LABEL_79; /*0x100a7a78e*/
LABEL_92:
    v115 = 0x8000000000000000LL; /*0x100a7a8d8*/
    v123 = 0x8000000000000000LL; /*0x100a7a8dc*/
    v116 = 0x8000000000000000LL; /*0x100a7a8e0*/
    goto LABEL_94; /*0x100a7a8e4*/
  }
  if ( ((v108 == v14) & (unsigned __int8)v13) == 0 ) /*0x100a7a74b*/
  {
    v124 = 1; /*0x100a7a752*/
    v121 = 0; /*0x100a7a756*/
    goto LABEL_91; /*0x100a7a75d*/
  }
LABEL_81:
  v42 = v120; /*0x100a7a7bc*/
  if ( (_BYTE)v120 == 2 ) /*0x100a7a7c1*/
  {
    LOBYTE(v42) = (_BYTE)v15 == 2; /*0x100a7a7cb*/
    v121 = v42; /*0x100a7a7ce*/
    LOBYTE(v42) = 2; /*0x100a7a7d1*/
    v120 = v42; /*0x100a7a7d3*/
  }
  else
  {
    LOBYTE(v42) = (_BYTE)v120 == (unsigned __int8)v15; /*0x100a7a8b4*/
    v121 = v42; /*0x100a7a8b7*/
  }
LABEL_91:
  v105 = (unsigned int)v12; /*0x100a7a8ba*/
  v39 = v106; /*0x100a7a8c4*/
  if ( v106 >= v103 ) /*0x100a7a8d2*/
    goto LABEL_92; /*0x100a7a8d2*/
LABEL_79:
  v40 = *(_QWORD *)(v107 + 816); /*0x100a7a794*/
  v41 = 352 * v39; /*0x100a7a7a5*/
  if ( *(_QWORD *)(v40 + 352 * v39 + 256) == 0x8000000000000000LL ) /*0x100a7a7b4*/
    v117 = 0x8000000000000000LL; /*0x100a7a7b6*/
  else
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v117, v40 + v41 + 256); /*0x100a7a7e7*/
  v43 = v41 + v40; /*0x100a7a7ec*/
  if ( *(_QWORD *)(v43 + 280) != 0x8000000000000000LL ) /*0x100a7a800*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v94, v43 + 280); /*0x100a7a826*/
    v123 = v94; /*0x100a7a832*/
    v113 = v95; /*0x100a7a83d*/
    v101 = v96; /*0x100a7a84b*/
    if ( *(_QWORD *)(v43 + 304) == 0x8000000000000000LL ) /*0x100a7a859*/
      goto LABEL_86; /*0x100a7a859*/
LABEL_88:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v94, v43 + 304); /*0x100a7a85b*/
    v116 = v94; /*0x100a7a878*/
    v110 = v95; /*0x100a7a883*/
    v102 = v96; /*0x100a7a891*/
    goto LABEL_89; /*0x100a7a891*/
  }
  v123 = 0x8000000000000000LL; /*0x100a7a802*/
  if ( *(_QWORD *)(v43 + 304) != 0x8000000000000000LL ) /*0x100a7a80d*/
    goto LABEL_88; /*0x100a7a80d*/
LABEL_86:
  v116 = 0x8000000000000000LL; /*0x100a7a80f*/
LABEL_89:
  v115 = v117; /*0x100a7a898*/
  v109 = v118; /*0x100a7a8a4*/
  v12 = v119; /*0x100a7a8ab*/
  do /*0x100a7a8fe*/
  {
LABEL_94:
    if ( *((_QWORD *)v7 + 26) == a4 && !memcmp(*((const void **)v7 + 25), __s2, a4) ) /*0x100a7a91e*/
    {
      _$LT$codexmate_lib..core..repository..RegistryItem$u20$as$u20$core..clone..Clone$GT$::clone::h21461c0ea2b82fea( /*0x100a7a931*/
        &v94,
        v7);
      v44 = *((_QWORD *)v7 + 42); /*0x100a7a936*/
      v99 = v44; /*0x100a7a93d*/
      LOBYTE(v44) = v44 == 0x8000000000000000LL; /*0x100a7a947*/
      v114 = v44; /*0x100a7a94a*/
      v45 = v122; /*0x100a7a94d*/
      v46 = v112; /*0x100a7a951*/
      v47 = v124; /*0x100a7a958*/
      if ( (_BYTE)v44 ) /*0x100a7a95c*/
      {
        *((_QWORD *)v7 + 42) = v115; /*0x100a7a962*/
        *((_QWORD *)v7 + 43) = v109; /*0x100a7a970*/
        *((_QWORD *)v7 + 44) = v12; /*0x100a7a977*/
      }
      v100 = *((_QWORD *)v7 + 45); /*0x100a7a985*/
      if ( v100 == 0x8000000000000000LL ) /*0x100a7a993*/
      {
        *((_QWORD *)v7 + 45) = v123; /*0x100a7a999*/
        *((_QWORD *)v7 + 46) = v113; /*0x100a7a9a7*/
        *((_QWORD *)v7 + 47) = v101; /*0x100a7a9b5*/
      }
      __s2 = *((void **)v7 + 48); /*0x100a7a9cd*/
      v48 = v126; /*0x100a7a9d7*/
      if ( __s2 == (void *)0x8000000000000000LL ) /*0x100a7a9dc*/
      {
        *((_QWORD *)v7 + 48) = v116; /*0x100a7a9e2*/
        *((_QWORD *)v7 + 49) = v110; /*0x100a7a9f0*/
        *((_QWORD *)v7 + 50) = v102; /*0x100a7a9fe*/
      }
      v49 = *(_BYTE *)(v45 + 66); /*0x100a7aa0e*/
      if ( v46 == 2 || v49 == 8 ) /*0x100a7aa15*/
      {
        v49 = *(_BYTE *)(v45 + 218); /*0x100a7aa2a*/
        if ( (_DWORD)v104 == 2 || v49 == 8 ) /*0x100a7aa34*/
          goto LABEL_121; /*0x100a7aa39*/
        chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v117); /*0x100a7aa43*/
        v50 = ((int)v117 >> 13) - 1; /*0x100a7aa50*/
        v51 = 0; /*0x100a7aa53*/
        if ( (int)v117 >> 13 <= 0 ) /*0x100a7aa57*/
        {
          v52 = (1 - ((int)v117 >> 13)) / 0x190u + 1; /*0x100a7aa6b*/
          v50 += 400 * v52; /*0x100a7aa73*/
          v51 = -146097 * v52; /*0x100a7aa75*/
        }
        v53 = 1000 /*0x100a7aad7*/
            * (HIDWORD(v117)
             + 86400LL
             * (int)(((v50 / 100) >> 2)
                   + ((1461 * v50) >> 2)
                   + v51
                   + (((unsigned int)v117 >> 4) & 0x1FF)
                   - v50 / 100
                   - 719163))
            + (unsigned int)v118 / 0xF4240uLL;
        v54 = 0; /*0x100a7aada*/
      }
      else
      {
        v56 = *(_QWORD *)(v45 + 32); /*0x100a7ab67*/
        if ( v56 | *(_QWORD *)(v45 + 16) ) /*0x100a7ab6f*/
        {
          v53 = *(_QWORD *)((unsigned int)(16 * v56) + v45 + 24); /*0x100a7ab77*/
        }
        else
        {
          chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v117); /*0x100a7ab85*/
          v57 = ((int)v117 >> 13) - 1; /*0x100a7ab92*/
          v58 = 0; /*0x100a7ab95*/
          if ( (int)v117 >> 13 <= 0 ) /*0x100a7ab99*/
          {
            v59 = (1 - ((int)v117 >> 13)) / 0x190u + 1; /*0x100a7abad*/
            v57 += 400 * v59; /*0x100a7abb5*/
            v58 = -146097 * v59; /*0x100a7abb7*/
          }
          v53 = 1000 /*0x100a7ac19*/
              * (HIDWORD(v117)
               + 86400LL
               * (int)(((v57 / 100) >> 2)
                     + ((1461 * v57) >> 2)
                     + v58
                     + (((unsigned int)v117 >> 4) & 0x1FF)
                     - v57 / 100
                     - 719163))
              + (unsigned int)v118 / 0xF4240uLL;
        }
        v54 = 1; /*0x100a7ac1c*/
      }
      codexmate_lib::core::repository::apply_plan_state::h33911d6dab757bc8((unsigned __int8 *)v7, v49, v54, v53); /*0x100a7ac27*/
LABEL_121:
      *((_BYTE *)v7 + 416) = v105; /*0x100a7ac2c*/
      *((_QWORD *)v7 + 2) = v47; /*0x100a7ac3a*/
      *((_QWORD *)v7 + 3) = v108; /*0x100a7ac45*/
      *((_BYTE *)v7 + 417) = v120; /*0x100a7ac4c*/
      v60 = v125; /*0x100a7ac53*/
      *((_BYTE *)v7 + 419) = v125; /*0x100a7ac56*/
      v61 = v122; /*0x100a7ac5d*/
      if ( *(_QWORD *)v122 ) /*0x100a7ac61*/
      {
        v62 = *(_QWORD *)(v122 + 8); /*0x100a7ac67*/
        *((_QWORD *)v7 + 4) = 1; /*0x100a7ac6b*/
        *((_QWORD *)v7 + 5) = v62; /*0x100a7ac73*/
      }
      if ( *(_QWORD *)(v61 + 16) ) /*0x100a7ac77*/
      {
        v63 = *(_QWORD *)(v61 + 24); /*0x100a7ac7e*/
        *((_QWORD *)v7 + 6) = 1; /*0x100a7ac82*/
        *((_QWORD *)v7 + 7) = v63; /*0x100a7ac8a*/
      }
      if ( *(_BYTE *)(v61 + 32) ) /*0x100a7ac8e*/
      {
        v64 = *(_QWORD *)(v61 + 40); /*0x100a7ac94*/
      }
      else
      {
        if ( (_BYTE)v121 ) /*0x100a7aca1*/
        {
          if ( v60 == 3 ) /*0x100a7aca6*/
          {
            if ( v48 == 3 ) /*0x100a7acac*/
            {
LABEL_136:
              v68 = *((_QWORD *)v7 + 37); /*0x100a7ad63*/
              v69 = *((_QWORD *)v7 + 38); /*0x100a7ad6a*/
              v70 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v68, v69); /*0x100a7ad76*/
              v97 = std::time::SystemTime::now::h1fe79e41f9d5677f(v68, v69); /*0x100a7ad7d*/
              v98 = v71; /*0x100a7ad84*/
              std::time::SystemTime::duration_since::had059553cab94f96(&v117, &v97, 0, 0); /*0x100a7ad99*/
              v72 = *((_QWORD *)v7 + 2); /*0x100a7ad9e*/
              LOBYTE(v122) = v70; /*0x100a7ada6*/
              if ( v72 == 1 ) /*0x100a7ada9*/
              {
                v73 = 0; /*0x100a7adab*/
                if ( !v117 ) /*0x100a7adb2*/
                  v73 = v118; /*0x100a7adb2*/
                v74 = *((_BYTE *)v7 + 416); /*0x100a7adb7*/
                if ( *((_QWORD *)v7 + 3) <= v73 ) /*0x100a7adcb*/
                {
                  v75 = 3; /*0x100a7adff*/
                  if ( !(v74 & 1 | (v74 == 2)) ) /*0x100a7ae04*/
                  {
                    v75 = 1; /*0x100a7af63*/
                    LOBYTE(v76) = 0; /*0x100a7af66*/
                    goto LABEL_146; /*0x100a7af68*/
                  }
                }
                else
                {
                  v75 = 3; /*0x100a7adcd*/
                  if ( v74 & 1 | (v74 == 2) ) /*0x100a7add0*/
                  {
                    LOBYTE(v76) = 1; /*0x100a7add4*/
                    v75 = 0; /*0x100a7add6*/
LABEL_146:
                    v16 = _$LT$codexmate_lib..core..repository..RegistryItem$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb142c5935d94a40f( /*0x100a7ae0c*/
                            v7,
                            &v94);
                    if ( v106 < v103 ) /*0x100a7ae2c*/
                    {
                      v79 = *(_WORD *)((char *)v7 + 417); /*0x100a7ae2e*/
                      v80 = *((_QWORD *)v7 + 3); /*0x100a7ae36*/
                      v81 = *((_BYTE *)v7 + 419); /*0x100a7ae3a*/
                      v82 = *(_QWORD *)(v107 + 816); /*0x100a7ae49*/
                      v83 = 352 * v106; /*0x100a7ae50*/
                      v84 = *v7; /*0x100a7ae57*/
                      v85 = v7[4]; /*0x100a7ae5b*/
                      *(_BYTE *)(v82 + v83 + 344) = v122; /*0x100a7ae65*/
                      *(_OWORD *)(v82 + v83) = v84; /*0x100a7ae6d*/
                      *(_BYTE *)(v82 + v83 + 339) = v76; /*0x100a7ae71*/
                      *(_QWORD *)(v82 + v83 + 16) = v72; /*0x100a7ae78*/
                      *(_QWORD *)(v82 + v83 + 24) = v80; /*0x100a7ae7d*/
                      *(_WORD *)(v82 + v83 + 340) = v79; /*0x100a7ae82*/
                      *(_BYTE *)(v82 + v83 + 342) = v75; /*0x100a7ae8a*/
                      *(_BYTE *)(v82 + v83 + 343) = v81; /*0x100a7ae92*/
                      *(_OWORD *)(v82 + v83 + 32) = v85; /*0x100a7ae99*/
                    }
                    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(&v94); /*0x100a7aea5*/
                    if ( __s2 != (void *)0x8000000000000000LL && (v116 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a7aecb*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v116, 1); /*0x100a7aed9*/
                    v86 = v115; /*0x100a7aeef*/
                    if ( v100 != 0x8000000000000000LL && (v123 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a7aeff*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, v123, 1); /*0x100a7af0d*/
                    LOBYTE(v16) = v16 ^ 1; /*0x100a7af12*/
                    if ( v99 != 0x8000000000000000LL && (v86 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a7af2c*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v86, 1); /*0x100a7af3d*/
                    goto LABEL_157; /*0x100a7af3d*/
                  }
                }
              }
              else
              {
                v77 = *((unsigned __int8 *)v7 + 416); /*0x100a7addb*/
                v75 = 2; /*0x100a7ade3*/
                if ( v77 != 2 ) /*0x100a7ade9*/
                {
                  v78 = v77 ^ 1; /*0x100a7adeb*/
                  v76 = 0x2020001u >> (8 * v78); /*0x100a7adf8*/
                  v75 = v78; /*0x100a7adfa*/
                  goto LABEL_146; /*0x100a7adfd*/
                }
              }
              LOBYTE(v76) = 2; /*0x100a7ae0a*/
              goto LABEL_146; /*0x100a7ae0a*/
            }
          }
          else if ( v60 == v48 ) /*0x100a7acb6*/
          {
            goto LABEL_136; /*0x100a7acb6*/
          }
        }
        chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v117); /*0x100a7acc0*/
        v65 = ((int)v117 >> 13) - 1; /*0x100a7accd*/
        v66 = 0; /*0x100a7acd0*/
        if ( (int)v117 >> 13 <= 0 ) /*0x100a7acd4*/
        {
          v67 = (1 - ((int)v117 >> 13)) / 0x190u + 1; /*0x100a7ace8*/
          v65 += 400 * v67; /*0x100a7acf0*/
          v66 = -146097 * v67; /*0x100a7acf2*/
        }
        v64 = 1000 /*0x100a7ad54*/
            * (HIDWORD(v117)
             + 86400LL
             * (int)(((v65 / 100) >> 2)
                   + ((1461 * v65) >> 2)
                   + v66
                   + (((unsigned int)v117 >> 4) & 0x1FF)
                   - v65 / 100
                   - 719163))
            + (unsigned int)v118 / 0xF4240uLL;
      }
      *((_QWORD *)v7 + 8) = 1; /*0x100a7ad57*/
      *((_QWORD *)v7 + 9) = v64; /*0x100a7ad5f*/
      goto LABEL_136; /*0x100a7ad5f*/
    }
    v7 = (__int128 *)((char *)v7 + 424); /*0x100a7a8f0*/
    v8 -= 424; /*0x100a7a8f7*/
  }
  while ( v8 ); /*0x100a7a8fe*/
  if ( 2 * v116 ) /*0x100a7aae5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v116, 1); /*0x100a7aafe*/
  v55 = v115; /*0x100a7ab12*/
  if ( 2 * v123 ) /*0x100a7ab07*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, v123, 1); /*0x100a7ab39*/
    if ( !(2 * v55) ) /*0x100a7ab49*/
      goto LABEL_111; /*0x100a7ab49*/
  }
  else if ( !(2 * v115) ) /*0x100a7ab18*/
  {
LABEL_111:
    v16 = 0; /*0x100a7ab25*/
    goto LABEL_157; /*0x100a7ab28*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v55, 1); /*0x100a7ab5a*/
  v16 = 0; /*0x100a7ab5f*/
LABEL_157:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v88); /*0x100a7af42*/
  return v16; /*0x100a7af51*/
}