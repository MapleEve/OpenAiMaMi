// __ZN13codexmate_lib4core10repository10Repository30make_account_summary_from_item @ 0x100a6fe90 | 基线 same-set
double __fastcall codexmate_lib::core::repository::Repository::make_account_summary_from_item::hf4d00394602808d2(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        int a4,
        __int64 a5)
{
  _DWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(); // rbx
  __int64 *v12; // rsi
  unsigned __int64 *v13; // rdi
  int v14; // edx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  bool v20; // al
  __int64 v21; // rbx
  int v22; // edx
  __int64 (__fastcall *v23)(); // rax
  bool v24; // al
  int v25; // edx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(); // rcx
  __int64 v28; // rbx
  char v29; // dl
  int v30; // eax
  char v31; // cl
  __int64 v32; // r9
  bool v33; // zf
  _QWORD *v34; // rbx
  char v35; // r10
  __int128 v36; // xmm2
  char v37; // r11
  __int64 v38; // rdi
  char v39; // r8
  char v40; // si
  __int128 v41; // xmm1
  __int64 v42; // rdx
  __int128 v43; // xmm0
  __int64 v44; // rax
  double result; // xmm0_8
  _QWORD v46[3]; // [rsp+8h] [rbp-168h] BYREF
  _QWORD v47[3]; // [rsp+20h] [rbp-150h] BYREF
  __int64 v48; // [rsp+38h] [rbp-138h]
  __int64 v49; // [rsp+40h] [rbp-130h]
  __int64 v50; // [rsp+48h] [rbp-128h]
  __int64 v51; // [rsp+50h] [rbp-120h]
  __int64 v52; // [rsp+58h] [rbp-118h]
  double v53; // [rsp+60h] [rbp-110h]
  __int64 v54; // [rsp+68h] [rbp-108h] BYREF
  unsigned __int64 *v55; // [rsp+70h] [rbp-100h]
  __int64 *v56; // [rsp+78h] [rbp-F8h]
  __int64 (__fastcall *v57)(); // [rsp+80h] [rbp-F0h]
  __int64 v58; // [rsp+88h] [rbp-E8h]
  __int64 v59; // [rsp+90h] [rbp-E0h]
  __int64 v60; // [rsp+98h] [rbp-D8h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+A8h] [rbp-C8h]
  __int64 v63; // [rsp+B0h] [rbp-C0h]
  int v64; // [rsp+BCh] [rbp-B4h]
  int v65; // [rsp+C0h] [rbp-B0h]
  int v66; // [rsp+C4h] [rbp-ACh]
  __int64 v67; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+D0h] [rbp-A0h]
  int v69; // [rsp+DCh] [rbp-94h]
  int v70; // [rsp+E0h] [rbp-90h]
  int v71; // [rsp+E4h] [rbp-8Ch]
  _QWORD *v72; // [rsp+E8h] [rbp-88h]
  __int64 v73; // [rsp+F0h] [rbp-80h] BYREF
  __int64 (__fastcall *v74)(); // [rsp+F8h] [rbp-78h]
  __int64 v75; // [rsp+100h] [rbp-70h]
  __int64 v76; // [rsp+108h] [rbp-68h]
  __int64 v77; // [rsp+110h] [rbp-60h]
  int v78; // [rsp+11Ch] [rbp-54h]
  unsigned int v79; // [rsp+120h] [rbp-50h]
  int v80; // [rsp+124h] [rbp-4Ch]
  unsigned __int64 v81; // [rsp+128h] [rbp-48h] BYREF
  __int64 (__fastcall *v82)(); // [rsp+130h] [rbp-40h]
  __int64 v83; // [rsp+138h] [rbp-38h]
  char v84; // [rsp+147h] [rbp-29h]

  v64 = a4; /*0x100a6fea7*/
  v72 = a3; /*0x100a6fead*/
  v8 = *((_DWORD **)a2 + 37); /*0x100a6feba*/
  v9 = *((_QWORD *)a2 + 38); /*0x100a6fec1*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v8, v9); /*0x100a6fece*/
  if ( v10 && (v9 != 7 || *v8 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v8 + 3) ^ 0x6E776F6E) ) /*0x100a6feed*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v54, a2 + 18); /*0x100a6feff*/
  }
  else
  {
    v73 = (__int64)v72 + 146; /*0x100a6ff13*/
    v74 = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::h71fbfa2e86e65c01; /*0x100a6ff1e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v81, &unk_1017B9036, &v73); /*0x100a6ff31*/
    v11 = v82; /*0x100a6ff36*/
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v73, v82, v83); /*0x100a6ff45*/
    if ( v81 ) /*0x100a6ff51*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v81, 1); /*0x100a6ff5b*/
    v54 = v73; /*0x100a6ff68*/
    v55 = (unsigned __int64 *)v74; /*0x100a6ff6f*/
    v56 = (__int64 *)v75; /*0x100a6ff7a*/
  }
  v12 = v56; /*0x100a6ff88*/
  v13 = v55; /*0x100a6ff8f*/
  v58 = (__int64)v55; /*0x100a6ff92*/
  v84 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69((__int64)v55, (__int64)v56); /*0x100a6ff9e*/
  v15 = (__int64 *)(a5 + 144); /*0x100a6ffa1*/
  if ( !a5 ) /*0x100a6ffb0*/
    v15 = (__int64 *)a2 + 13; /*0x100a6ffb0*/
  v16 = 1; /*0x100a6ffb4*/
  if ( !a5 ) /*0x100a6ffb9*/
    v16 = *((_QWORD *)a2 + 12); /*0x100a6ffb9*/
  v48 = v16; /*0x100a6ffbe*/
  v49 = *v15; /*0x100a6ffc8*/
  if ( !a5 ) /*0x100a6ffcf*/
  {
    v69 = 0; /*0x100a70018*/
    v77 = 2; /*0x100a70027*/
    v76 = 2; /*0x100a7002b*/
    v67 = 2; /*0x100a70034*/
    goto LABEL_42; /*0x100a7003b*/
  }
  v69 = *(unsigned __int8 *)(a5 + 152); /*0x100a6ffda*/
  v17 = *(_QWORD *)(a5 + 16); /*0x100a6ffe0*/
  v67 = 2; /*0x100a6ffea*/
  if ( v17 == 2 ) /*0x100a6fff5*/
  {
    v77 = 2; /*0x100a6fffc*/
    v76 = 2; /*0x100a70000*/
    v18 = *(_QWORD *)(a5 + 56); /*0x100a70004*/
    if ( v18 == 2 ) /*0x100a7000d*/
      goto LABEL_42; /*0x100a7000d*/
    goto LABEL_31; /*0x100a7000d*/
  }
  if ( *(_DWORD *)(a5 + 32) == 1 ) /*0x100a70046*/
  {
    v76 = *(unsigned int *)(a5 + 36); /*0x100a7004d*/
    v80 = 1; /*0x100a70051*/
    if ( (v17 & 1) == 0 ) /*0x100a7005a*/
    {
LABEL_19:
      v77 = 0; /*0x100a7005c*/
      goto LABEL_22; /*0x100a70064*/
    }
  }
  else
  {
    v80 = 0; /*0x100a70066*/
    v76 = 2; /*0x100a7006d*/
    if ( (v17 & 1) == 0 ) /*0x100a70073*/
      goto LABEL_19; /*0x100a70073*/
  }
  v59 = *(_QWORD *)(a5 + 24); /*0x100a7007a*/
  v77 = 1; /*0x100a70086*/
LABEL_22:
  v52 = *(_QWORD *)(a5 + 40); /*0x100a7008a*/
  v65 = *(_DWORD *)(a5 + 48); /*0x100a7009e*/
  v73 = std::time::SystemTime::now::h1fe79e41f9d5677f(v13, v12); /*0x100a700a9*/
  LODWORD(v74) = v19; /*0x100a700ad*/
  v13 = &v81; /*0x100a700b0*/
  v12 = &v73; /*0x100a700b4*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v81, &v73, 0, 0); /*0x100a700bc*/
  if ( (_BYTE)v81 ) /*0x100a700c5*/
  {
    v20 = v59 <= 0; /*0x100a700e6*/
    if ( !v80 ) /*0x100a700ed*/
      goto LABEL_30; /*0x100a700ed*/
  }
  else
  {
    v20 = v59 <= (__int64)v82; /*0x100a700d2*/
    if ( !v80 ) /*0x100a700d9*/
      goto LABEL_30; /*0x100a700d9*/
  }
  if ( (unsigned int)(v76 - 361) >= 0xFFFFFE98 && ((unsigned __int8)v77 & v20) == 0 ) /*0x100a70104*/
  {
    v80 = 1; /*0x100a70106*/
    v18 = *(_QWORD *)(a5 + 56); /*0x100a7010d*/
    if ( v18 == 2 ) /*0x100a70116*/
      goto LABEL_42; /*0x100a70116*/
    goto LABEL_31; /*0x100a70116*/
  }
LABEL_30:
  v77 = 2; /*0x100a7011e*/
  v76 = 2; /*0x100a70127*/
  v18 = *(_QWORD *)(a5 + 56); /*0x100a7012b*/
  if ( v18 == 2 ) /*0x100a70134*/
    goto LABEL_42; /*0x100a70134*/
LABEL_31:
  if ( *(_DWORD *)(a5 + 72) == 1 ) /*0x100a70140*/
  {
    v71 = *(_DWORD *)(a5 + 76); /*0x100a7014c*/
    v70 = 1; /*0x100a70152*/
    if ( (v18 & 1) == 0 ) /*0x100a7015a*/
    {
LABEL_33:
      v21 = 0; /*0x100a7015c*/
      goto LABEL_36; /*0x100a7015e*/
    }
  }
  else
  {
    v71 = v14; /*0x100a70162*/
    v70 = 0; /*0x100a70168*/
    if ( (v18 & 1) == 0 ) /*0x100a70170*/
      goto LABEL_33; /*0x100a70170*/
  }
  v60 = *(_QWORD *)(a5 + 64); /*0x100a70177*/
  v21 = 1; /*0x100a7017e*/
LABEL_36:
  v53 = *(double *)(a5 + 80); /*0x100a70183*/
  v66 = *(_DWORD *)(a5 + 88); /*0x100a70197*/
  v73 = std::time::SystemTime::now::h1fe79e41f9d5677f(v13, v12); /*0x100a701a2*/
  LODWORD(v74) = v22; /*0x100a701a6*/
  v13 = &v81; /*0x100a701a9*/
  v12 = &v73; /*0x100a701ad*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v81, &v73, 0, 0); /*0x100a701b5*/
  if ( (_BYTE)v81 ) /*0x100a701be*/
    v23 = nullptr; /*0x100a701c6*/
  else
    v23 = v82; /*0x100a701c0*/
  v24 = v60 <= (__int64)v23; /*0x100a701dc*/
  if ( ((v71 < 8640) & (unsigned __int8)v70) == 0 && ((unsigned __int8)v21 & v24) == 0 ) /*0x100a701ed*/
    v67 = v21; /*0x100a701f3*/
LABEL_42:
  v73 = std::time::SystemTime::now::h1fe79e41f9d5677f(v13, v12); /*0x100a701fa*/
  LODWORD(v74) = v25; /*0x100a70203*/
  v26 = std::time::SystemTime::duration_since::had059553cab94f96(&v81, &v73, 0, 0); /*0x100a70212*/
  v28 = *((_QWORD *)a2 + 2); /*0x100a70217*/
  if ( v28 != 1 ) /*0x100a7021f*/
  {
    LODWORD(v26) = *((unsigned __int8 *)a2 + 416); /*0x100a70257*/
    LOBYTE(v27) = 2; /*0x100a7025f*/
    if ( (_DWORD)v26 != 2 ) /*0x100a70264*/
    {
      v30 = v26 ^ 1; /*0x100a70266*/
      v79 = 0x2020001u >> (8 * v30); /*0x100a70275*/
      v78 = v30; /*0x100a70278*/
      goto LABEL_52; /*0x100a7027b*/
    }
    goto LABEL_51; /*0x100a70264*/
  }
  v27 = nullptr; /*0x100a70221*/
  if ( !v81 ) /*0x100a70228*/
    v27 = v82; /*0x100a70228*/
  v29 = *((_BYTE *)a2 + 416); /*0x100a7022d*/
  if ( *((_QWORD *)a2 + 3) <= (__int64)v27 ) /*0x100a70241*/
  {
    LOBYTE(v27) = 3; /*0x100a7027d*/
    if ( !(v29 & 1 | (v29 == 2)) ) /*0x100a70281*/
    {
      LOBYTE(v26) = 1; /*0x100a706ea*/
      v78 = v26; /*0x100a706ec*/
      v79 = 0; /*0x100a706ef*/
      goto LABEL_52; /*0x100a706f6*/
    }
    goto LABEL_51; /*0x100a70281*/
  }
  LOBYTE(v27) = 3; /*0x100a70243*/
  if ( !(v29 & 1 | (v29 == 2)) ) /*0x100a70247*/
  {
LABEL_51:
    v78 = (int)v27; /*0x100a70287*/
    LOBYTE(v26) = 2; /*0x100a7028a*/
    v79 = v26; /*0x100a7028c*/
    goto LABEL_52; /*0x100a7028c*/
  }
  LOBYTE(v26) = 1; /*0x100a70249*/
  v79 = v26; /*0x100a7024b*/
  v78 = 0; /*0x100a7024e*/
LABEL_52:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v47, a2 + 12); /*0x100a7028f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v81, v72 + 5); /*0x100a702b1*/
  v68 = v81; /*0x100a702ba*/
  v57 = v82; /*0x100a702c5*/
  v50 = v83; /*0x100a702d0*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v46, (char *)a2 + 264); /*0x100a702e5*/
  if ( __OFSUB__(0, *((_QWORD *)a2 + 42)) /*0x100a70313*/
    || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v81, a2 + 21),
        v81 == 0x8000000000000000LL) )
  {
    if ( v72[8] == 0x8000000000000000LL ) /*0x100a70320*/
    {
      v61 = 0x8000000000000000LL; /*0x100a70322*/
      if ( *((_QWORD *)a2 + 45) == 0x8000000000000000LL ) /*0x100a70330*/
        goto LABEL_61; /*0x100a70330*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v61, v72 + 8); /*0x100a7033f*/
      if ( *((_QWORD *)a2 + 45) == 0x8000000000000000LL ) /*0x100a7034b*/
        goto LABEL_61; /*0x100a7034b*/
    }
  }
  else
  {
    v63 = v83; /*0x100a70380*/
    v31 = (char)v82; /*0x100a7038b*/
    v62 = v82; /*0x100a7038f*/
    v61 = v81; /*0x100a70396*/
    if ( *((_QWORD *)a2 + 45) == 0x8000000000000000LL ) /*0x100a703a4*/
      goto LABEL_61; /*0x100a703a4*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v81, (char *)a2 + 360); /*0x100a70358*/
  if ( v81 != 0x8000000000000000LL ) /*0x100a70364*/
  {
    v31 = (char)v82; /*0x100a70366*/
    v73 = v81; /*0x100a7036e*/
    v74 = v82; /*0x100a70372*/
    v75 = v83; /*0x100a70376*/
    goto LABEL_64; /*0x100a7037a*/
  }
LABEL_61:
  if ( v72[11] == 0x8000000000000000LL ) /*0x100a703b1*/
    v73 = 0x8000000000000000LL; /*0x100a703b3*/
  else
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v73, v72 + 11); /*0x100a703c1*/
LABEL_64:
  v33 = *((_QWORD *)a2 + 48) == 0x8000000000000000LL; /*0x100a703c6*/
  v51 = v28; /*0x100a703cd*/
  if ( v33 /*0x100a703ed*/
    || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v81, a2 + 24),
        v81 == 0x8000000000000000LL) )
  {
    v34 = v72; /*0x100a703ef*/
    if ( v72[14] == 0x8000000000000000LL ) /*0x100a703fa*/
      v81 = 0x8000000000000000LL; /*0x100a703fc*/
    else
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v81, v72 + 14); /*0x100a7040a*/
  }
  else
  {
    v31 = (char)v82; /*0x100a70411*/
    v34 = v72; /*0x100a70425*/
  }
  v35 = *((_BYTE *)a2 + 418); /*0x100a7042c*/
  v36 = *a2; /*0x100a70434*/
  v37 = *((_BYTE *)v34 + 144); /*0x100a70439*/
  v38 = *((_QWORD *)a2 + 3); /*0x100a70441*/
  v39 = *((_BYTE *)a2 + 417); /*0x100a70445*/
  v40 = *((_BYTE *)a2 + 419); /*0x100a7044d*/
  v41 = a2[4]; /*0x100a70455*/
  v42 = *((_QWORD *)a2 + 51); /*0x100a7045a*/
  v43 = a2[5]; /*0x100a70461*/
  v44 = 2; /*0x100a70466*/
  if ( a5 ) /*0x100a7046e*/
  {
    v32 = *(_QWORD *)(a5 + 96); /*0x100a70470*/
    if ( v32 != 2 ) /*0x100a70479*/
    {
      v31 = *(_BYTE *)(a5 + 112); /*0x100a706c8*/
      if ( (v32 & 1) != 0 ) /*0x100a706d2*/
      {
        v32 = *(_QWORD *)(a5 + 104); /*0x100a706d4*/
        v44 = 1; /*0x100a706d9*/
      }
      else
      {
        v44 = 0; /*0x100a706e3*/
      }
    }
  }
  *(_QWORD *)(a1 + 200) = v47[2]; /*0x100a70486*/
  *(_QWORD *)(a1 + 192) = v47[1]; /*0x100a70494*/
  *(_QWORD *)(a1 + 184) = v47[0]; /*0x100a704a2*/
  *(_QWORD *)(a1 + 208) = v68; /*0x100a704b0*/
  *(_QWORD *)(a1 + 216) = v57; /*0x100a704be*/
  *(_QWORD *)(a1 + 224) = v50; /*0x100a704cc*/
  *(_QWORD *)(a1 + 248) = v46[2]; /*0x100a704da*/
  *(_QWORD *)(a1 + 240) = v46[1]; /*0x100a704e8*/
  *(_QWORD *)(a1 + 232) = v46[0]; /*0x100a704f6*/
  *(_QWORD *)(a1 + 272) = v63; /*0x100a70504*/
  *(_QWORD *)(a1 + 264) = v62; /*0x100a70512*/
  *(_QWORD *)(a1 + 256) = v61; /*0x100a70520*/
  *(_QWORD *)(a1 + 296) = v75; /*0x100a7052b*/
  *(_QWORD *)(a1 + 288) = v74; /*0x100a70536*/
  *(_QWORD *)(a1 + 280) = v73; /*0x100a70541*/
  *(_QWORD *)(a1 + 320) = v83; /*0x100a7054c*/
  *(_QWORD *)(a1 + 312) = v82; /*0x100a70557*/
  *(_QWORD *)(a1 + 304) = v81; /*0x100a70562*/
  *(_BYTE *)(a1 + 344) = v84; /*0x100a7056d*/
  *(_BYTE *)(a1 + 341) = v35; /*0x100a70574*/
  *(_OWORD *)a1 = v36; /*0x100a7057b*/
  *(_BYTE *)(a1 + 336) = v37; /*0x100a7057f*/
  *(_BYTE *)(a1 + 339) = v79; /*0x100a7058a*/
  *(_QWORD *)(a1 + 16) = v51; /*0x100a70598*/
  *(_QWORD *)(a1 + 24) = v38; /*0x100a7059c*/
  *(_BYTE *)(a1 + 340) = v39; /*0x100a705a0*/
  *(_BYTE *)(a1 + 342) = v78; /*0x100a705aa*/
  *(_BYTE *)(a1 + 343) = v40; /*0x100a705b1*/
  *(_OWORD *)(a1 + 32) = v41; /*0x100a705b8*/
  *(_BYTE *)(a1 + 337) = v64; /*0x100a705c3*/
  *(_QWORD *)(a1 + 328) = v42; /*0x100a705ca*/
  *(_OWORD *)(a1 + 48) = v43; /*0x100a705d1*/
  *(_QWORD *)(a1 + 64) = v48; /*0x100a705dd*/
  *(_QWORD *)(a1 + 72) = v49; /*0x100a705e8*/
  *(_BYTE *)(a1 + 338) = v69; /*0x100a705f2*/
  *(_QWORD *)(a1 + 80) = v77; /*0x100a705fd*/
  *(_QWORD *)(a1 + 88) = v59; /*0x100a70608*/
  *(_DWORD *)(a1 + 96) = v80; /*0x100a7060f*/
  *(_DWORD *)(a1 + 100) = v76; /*0x100a70617*/
  *(_QWORD *)(a1 + 104) = v52; /*0x100a70623*/
  *(_DWORD *)(a1 + 112) = v65; /*0x100a7062f*/
  *(_QWORD *)(a1 + 120) = v67; /*0x100a7063a*/
  *(_QWORD *)(a1 + 128) = v60; /*0x100a70645*/
  *(_DWORD *)(a1 + 136) = v70; /*0x100a70652*/
  *(_DWORD *)(a1 + 140) = v71; /*0x100a7065f*/
  result = v53; /*0x100a70666*/
  *(double *)(a1 + 144) = v53; /*0x100a7066e*/
  *(_DWORD *)(a1 + 152) = v66; /*0x100a7067d*/
  *(_QWORD *)(a1 + 160) = v44; /*0x100a70684*/
  *(_QWORD *)(a1 + 168) = v32; /*0x100a7068b*/
  *(_BYTE *)(a1 + 176) = v31; /*0x100a70692*/
  if ( v54 ) /*0x100a706a3*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v54, 1); /*0x100a706b1*/
  return result; /*0x100a706b6*/
}