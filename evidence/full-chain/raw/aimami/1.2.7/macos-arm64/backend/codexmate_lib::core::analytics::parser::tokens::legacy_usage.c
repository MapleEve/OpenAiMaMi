// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tokens::legacy_usage::hed37a410262435cf; addr: 0x10039a970; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:20Z
void __fastcall codexmate_lib::core::analytics::parser::tokens::legacy_usage::hed37a410262435cf(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v10; // r14
  _BYTE *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // al
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  bool v21; // al
  __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // al
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r8
  bool v32; // al
  __int64 v33; // rcx
  _BYTE *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  bool v37; // al
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 v46; // r11
  void *v47; // rax
  void *v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdi
  bool v51; // bl
  bool v52; // zf
  __int64 v53; // rax
  void *v54; // r9
  __int64 v55; // rax
  __int64 v56; // rcx
  bool v57; // al
  __int64 v58; // rax
  __int64 v59; // rcx
  bool v60; // al
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // al
  __int64 v64; // rax
  __int64 v65; // rcx
  bool v66; // al
  char v67; // al
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // r10
  char v72; // al
  __int64 v73; // r9
  __int64 v74; // r8
  _QWORD *v75; // r15
  __int64 v76; // rax
  _QWORD *v77; // r15
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // r14
  __int64 v81; // rax
  _QWORD *v82; // r15
  __int64 v83; // [rsp+38h] [rbp-368h] BYREF
  __int64 v84; // [rsp+40h] [rbp-360h]
  __int64 v85; // [rsp+48h] [rbp-358h]
  __int64 v86; // [rsp+50h] [rbp-350h]
  _QWORD v87[10]; // [rsp+C8h] [rbp-2D8h] BYREF
  _QWORD v88[10]; // [rsp+118h] [rbp-288h] BYREF
  _QWORD v89[10]; // [rsp+168h] [rbp-238h] BYREF
  _QWORD v90[3]; // [rsp+1B8h] [rbp-1E8h] BYREF
  __int64 v91; // [rsp+1D0h] [rbp-1D0h]
  _QWORD v92[18]; // [rsp+1D8h] [rbp-1C8h] BYREF
  _QWORD v93[4]; // [rsp+268h] [rbp-138h] BYREF
  __int64 v94; // [rsp+288h] [rbp-118h]
  __int64 v95; // [rsp+290h] [rbp-110h]
  __int64 v96; // [rsp+298h] [rbp-108h]
  __int64 v97; // [rsp+2A0h] [rbp-100h]
  __int128 v98; // [rsp+2A8h] [rbp-F8h]
  __int64 v99; // [rsp+2B8h] [rbp-E8h]
  __int64 v100; // [rsp+2C0h] [rbp-E0h] BYREF
  __int64 v101; // [rsp+2C8h] [rbp-D8h]
  __int64 v102; // [rsp+2D0h] [rbp-D0h]
  __int64 v103; // [rsp+2D8h] [rbp-C8h]
  __int64 v104; // [rsp+2E0h] [rbp-C0h]
  __int64 v105; // [rsp+2E8h] [rbp-B8h]
  __int64 v106; // [rsp+2F0h] [rbp-B0h]
  __int64 v107; // [rsp+2F8h] [rbp-A8h] BYREF
  __int64 v108; // [rsp+300h] [rbp-A0h]
  __int64 v109; // [rsp+308h] [rbp-98h]
  __int64 v110; // [rsp+310h] [rbp-90h]
  __int64 v111; // [rsp+318h] [rbp-88h]
  __int64 v112; // [rsp+320h] [rbp-80h]
  __int64 v113; // [rsp+328h] [rbp-78h]
  __int64 v114; // [rsp+330h] [rbp-70h]
  __int64 v115; // [rsp+338h] [rbp-68h]
  __int64 v116; // [rsp+340h] [rbp-60h]
  __int64 v117; // [rsp+348h] [rbp-58h]
  int v118; // [rsp+354h] [rbp-4Ch]
  __int64 v119; // [rsp+358h] [rbp-48h]
  __int64 v120; // [rsp+360h] [rbp-40h]
  int v121; // [rsp+36Ch] [rbp-34h]
  __int64 v122; // [rsp+370h] [rbp-30h]

  v91 = a6; /*0x10039a984*/
  v111 = a5; /*0x10039a98b*/
  v103 = a7; /*0x10039a9a2*/
  v10 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039a9bd*/
                   "infoweek_up_",
                   4,
                   a2);
  if ( !v10 ) /*0x10039a9c3*/
    v10 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x10039a9c5*/
  if ( *v10 != 5 ) /*0x10039a9d3*/
  {
    if ( *v10 ) /*0x10039a9cc*/
    {
      *(_BYTE *)(a1 + 505) = 1; /*0x10039a9dd*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(a1 + 400, 5); /*0x10039aa06*/
    }
    return; /*0x10039aa06*/
  }
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(v92, a2, &unk_1016F1546, 7); /*0x10039aa21*/
  v115 = a4; /*0x10039aa2f*/
  v116 = a3; /*0x10039aa33*/
  if ( __OFSUB__(0, v92[0]) ) /*0x10039aa28*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v100, a1 + 208); /*0x10039aa48*/
  }
  else
  {
    v102 = v92[2]; /*0x10039aa56*/
    v101 = v92[1]; /*0x10039aa6b*/
    v100 = v92[0]; /*0x10039aa72*/
  }
  v11 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039aa8d*/
                   (char *)&loc_1016F154B + 2,
                   17,
                   v10);
  if ( !v11 ) /*0x10039aa93*/
    v11 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x10039aa95*/
  if ( *v11 != 5 ) /*0x10039aaa0*/
  {
    v15 = 2; /*0x10039aada*/
    goto LABEL_60; /*0x10039aae0*/
  }
  v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039aab1*/
          (char *)&loc_1016F15D0 + 2,
          12,
          v11);
  if ( !v12 ) /*0x10039aab9*/
  {
    v15 = 0; /*0x10039aaf9*/
    goto LABEL_21; /*0x10039aaf9*/
  }
  if ( *(_BYTE *)v12 != 2 ) /*0x10039aabe*/
    goto LABEL_18; /*0x10039aabe*/
  v13 = *(_QWORD *)(v12 + 8); /*0x10039aac0*/
  if ( !v13 ) /*0x10039aac7*/
  {
    v13 = *(_QWORD *)(v12 + 16); /*0x10039ac7d*/
    v14 = v13 >= 0; /*0x10039ac84*/
    goto LABEL_19; /*0x10039ac87*/
  }
  if ( (_DWORD)v13 == 1 ) /*0x10039aad0*/
  {
    v13 = *(_QWORD *)(v12 + 16); /*0x10039aad2*/
    v14 = 1; /*0x10039aad6*/
  }
  else
  {
LABEL_18:
    v14 = 0; /*0x10039aae5*/
  }
LABEL_19:
  v120 = v13; /*0x10039aae7*/
  v15 = v14 & (unsigned __int8)(v13 >= 0); /*0x10039aaf3*/
LABEL_21:
  v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&loc_1016F15DE, 13, v11); /*0x10039aafc*/
  if ( v16 ) /*0x10039ab13*/
  {
    if ( *(_BYTE *)v16 != 2 || (v17 = *(_QWORD *)(v16 + 8), v17 == 2) ) /*0x10039ab22*/
    {
      v18 = 0; /*0x10039ab35*/
    }
    else if ( (_DWORD)v17 == 1 ) /*0x10039ab27*/
    {
      v17 = *(_QWORD *)(v16 + 16); /*0x10039ab2d*/
      v18 = 1; /*0x10039ab31*/
    }
    else
    {
      v17 = *(_QWORD *)(v16 + 16); /*0x10039ac8c*/
      v18 = v17 >= 0; /*0x10039ac93*/
    }
    v119 = v17; /*0x10039ab37*/
    v122 = v18 & (unsigned __int8)(v17 >= 0); /*0x10039ab46*/
  }
  else
  {
    v122 = 0; /*0x10039ab4c*/
  }
  v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&loc_1016F15EB, 23, v11); /*0x10039ab63*/
  if ( v19 ) /*0x10039ab6b*/
  {
    if ( *(_BYTE *)v19 != 2 || (v20 = *(_QWORD *)(v19 + 8), v20 == 2) ) /*0x10039ab7a*/
    {
      v21 = 0; /*0x10039ab8d*/
    }
    else if ( (_DWORD)v20 == 1 ) /*0x10039ab7f*/
    {
      v20 = *(_QWORD *)(v19 + 16); /*0x10039ab85*/
      v21 = 1; /*0x10039ab89*/
    }
    else
    {
      v20 = *(_QWORD *)(v19 + 16); /*0x10039ac9b*/
      v21 = v20 >= 0; /*0x10039aca2*/
    }
    v113 = v20; /*0x10039ab8f*/
    v105 = v21 & (unsigned __int8)(v20 >= 0); /*0x10039ab9e*/
  }
  else
  {
    v105 = 0; /*0x10039aba7*/
  }
  v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1016F1602, 19, v11); /*0x10039abc1*/
  if ( v22 ) /*0x10039abc9*/
  {
    if ( *(_BYTE *)v22 != 2 || (v23 = *(_QWORD *)(v22 + 8), v23 == 2) ) /*0x10039abd8*/
    {
      v24 = 0; /*0x10039abeb*/
    }
    else if ( (_DWORD)v23 == 1 ) /*0x10039abdd*/
    {
      v23 = *(_QWORD *)(v22 + 16); /*0x10039abe3*/
      v24 = 1; /*0x10039abe7*/
    }
    else
    {
      v23 = *(_QWORD *)(v22 + 16); /*0x10039acaa*/
      v24 = v23 >= 0; /*0x10039acb1*/
    }
    v112 = v23; /*0x10039abed*/
    v104 = v24 & (unsigned __int8)(v23 >= 0); /*0x10039abfc*/
  }
  else
  {
    v104 = 0; /*0x10039ac05*/
  }
  v25 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1016F1615, 12, v11); /*0x10039ac1f*/
  if ( v25 ) /*0x10039ac27*/
  {
    if ( *(_BYTE *)v25 == 2 ) /*0x10039ac2c*/
    {
      v27 = *(_QWORD *)(v25 + 8); /*0x10039ac2e*/
      v28 = v120; /*0x10039ac36*/
      v29 = v119; /*0x10039ac3a*/
      v30 = v113; /*0x10039ac3e*/
      v31 = v112; /*0x10039ac42*/
      if ( v27 == 2 ) /*0x10039ac46*/
      {
        v32 = 0; /*0x10039acb9*/
      }
      else
      {
        v26 = *(_QWORD *)(v25 + 16); /*0x10039ac4d*/
        v32 = (_DWORD)v27 == 1 || v26 >= 0; /*0x10039ac51*/
      }
    }
    else
    {
      v32 = 0; /*0x10039ac69*/
      v28 = v120; /*0x10039ac6b*/
      v29 = v119; /*0x10039ac6f*/
      v30 = v113; /*0x10039ac73*/
      v31 = v112; /*0x10039ac77*/
    }
    v33 = v32 & (unsigned __int8)(v26 >= 0); /*0x10039accf*/
  }
  else
  {
    v33 = 0; /*0x10039ac55*/
    v28 = v120; /*0x10039ac57*/
    v29 = v119; /*0x10039ac5b*/
    v30 = v113; /*0x10039ac5f*/
    v31 = v112; /*0x10039ac63*/
  }
  v89[1] = v28; /*0x10039acd2*/
  v89[2] = v122; /*0x10039acdd*/
  v89[3] = v29; /*0x10039ace4*/
  v89[4] = v105; /*0x10039acf2*/
  v89[5] = v30; /*0x10039acf9*/
  v89[6] = v104; /*0x10039ad07*/
  v89[7] = v31; /*0x10039ad0e*/
  v97 = v33; /*0x10039ad15*/
  v89[8] = v33; /*0x10039ad1c*/
  v96 = v26; /*0x10039ad23*/
  v89[9] = v26; /*0x10039ad2a*/
LABEL_60:
  v89[0] = v15; /*0x10039ad31*/
  v34 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039ad4c*/
                   &unk_1016F1170,
                   16,
                   v10);
  if ( !v34 ) /*0x10039ad52*/
    v34 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x10039ad54*/
  if ( *v34 != 5 ) /*0x10039ad5f*/
  {
    v114 = 2; /*0x10039adae*/
    v118 = 2; /*0x10039adb2*/
    v121 = 2; /*0x10039adb5*/
    v38 = *(_QWORD *)(a1 + 80); /*0x10039adb8*/
    if ( v38 == 2 ) /*0x10039adc1*/
      goto LABEL_70; /*0x10039adc1*/
    goto LABEL_69; /*0x10039adc1*/
  }
  v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039ad70*/
          (char *)&loc_1016F15D0 + 2,
          12,
          v34);
  if ( v35 ) /*0x10039ad78*/
  {
    if ( *(_BYTE *)v35 != 2 || (v36 = *(_QWORD *)(v35 + 8), v36 == 2) ) /*0x10039ad8f*/
    {
      v37 = 0; /*0x10039b059*/
    }
    else if ( (_DWORD)v36 == 1 ) /*0x10039ad98*/
    {
      v36 = *(_QWORD *)(v35 + 16); /*0x10039ad9e*/
      v37 = 1; /*0x10039ada2*/
    }
    else
    {
      v36 = *(_QWORD *)(v35 + 16); /*0x10039b1ff*/
      v37 = v36 >= 0; /*0x10039b206*/
    }
    *((_QWORD *)&v98 + 1) = v36; /*0x10039b05b*/
    v114 = v37 & (unsigned __int8)(v36 >= 0); /*0x10039b06d*/
  }
  else
  {
    v114 = 0; /*0x10039b073*/
  }
  v55 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&loc_1016F15DE, 13, v34); /*0x10039b08a*/
  if ( v55 ) /*0x10039b092*/
  {
    if ( *(_BYTE *)v55 != 2 || (v56 = *(_QWORD *)(v55 + 8), v56 == 2) ) /*0x10039b0a1*/
    {
      v57 = 0; /*0x10039b0b4*/
    }
    else if ( (_DWORD)v56 == 1 ) /*0x10039b0a6*/
    {
      v56 = *(_QWORD *)(v55 + 16); /*0x10039b0ac*/
      v57 = 1; /*0x10039b0b0*/
    }
    else
    {
      v56 = *(_QWORD *)(v55 + 16); /*0x10039b20e*/
      v57 = v56 >= 0; /*0x10039b215*/
    }
    *(_QWORD *)&v98 = v56; /*0x10039b0b6*/
    LOBYTE(v56) = v57 && v56 >= 0; /*0x10039b0c3*/
    v121 = v56; /*0x10039b0c5*/
  }
  else
  {
    v121 = 0; /*0x10039b0ca*/
  }
  v58 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&loc_1016F15EB, 23, v34); /*0x10039b0e0*/
  if ( v58 ) /*0x10039b0e8*/
  {
    if ( *(_BYTE *)v58 != 2 || (v59 = *(_QWORD *)(v58 + 8), v59 == 2) ) /*0x10039b0f7*/
    {
      v60 = 0; /*0x10039b10a*/
    }
    else if ( (_DWORD)v59 == 1 ) /*0x10039b0fc*/
    {
      v59 = *(_QWORD *)(v58 + 16); /*0x10039b102*/
      v60 = 1; /*0x10039b106*/
    }
    else
    {
      v59 = *(_QWORD *)(v58 + 16); /*0x10039b21d*/
      v60 = v59 >= 0; /*0x10039b224*/
    }
    v95 = v59; /*0x10039b10c*/
    v99 = v60 & (unsigned __int8)(v59 >= 0); /*0x10039b11e*/
  }
  else
  {
    v99 = 0; /*0x10039b127*/
  }
  v61 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1016F1602, 19, v34); /*0x10039b141*/
  if ( v61 ) /*0x10039b149*/
  {
    if ( *(_BYTE *)v61 != 2 || (v62 = *(_QWORD *)(v61 + 8), v62 == 2) ) /*0x10039b158*/
    {
      v63 = 0; /*0x10039b16b*/
    }
    else if ( (_DWORD)v62 == 1 ) /*0x10039b15d*/
    {
      v62 = *(_QWORD *)(v61 + 16); /*0x10039b163*/
      v63 = 1; /*0x10039b167*/
    }
    else
    {
      v62 = *(_QWORD *)(v61 + 16); /*0x10039b22c*/
      v63 = v62 >= 0; /*0x10039b233*/
    }
    v94 = v62; /*0x10039b16d*/
    LOBYTE(v62) = v63 && v62 >= 0; /*0x10039b17a*/
    v118 = v62; /*0x10039b17c*/
  }
  else
  {
    v118 = 0; /*0x10039b181*/
  }
  v64 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1016F1615, 12, v34); /*0x10039b197*/
  if ( v64 ) /*0x10039b19f*/
  {
    if ( *(_BYTE *)v64 != 2 || (v65 = *(_QWORD *)(v64 + 8), v65 == 2) ) /*0x10039b1ae*/
    {
      v66 = 0; /*0x10039b1c1*/
    }
    else if ( (_DWORD)v65 == 1 ) /*0x10039b1b3*/
    {
      v65 = *(_QWORD *)(v64 + 16); /*0x10039b1b9*/
      v66 = 1; /*0x10039b1bd*/
    }
    else
    {
      v65 = *(_QWORD *)(v64 + 16); /*0x10039b23b*/
      v66 = v65 >= 0; /*0x10039b242*/
    }
    v106 = v65; /*0x10039b1c3*/
    LOBYTE(v34) = v66 && v65 >= 0; /*0x10039b1d1*/
    v38 = *(_QWORD *)(a1 + 80); /*0x10039b1d4*/
    if ( v38 != 2 ) /*0x10039b1dd*/
      goto LABEL_69; /*0x10039b1dd*/
  }
  else
  {
    LOBYTE(v34) = 0; /*0x10039b1e8*/
    v38 = *(_QWORD *)(a1 + 80); /*0x10039b1eb*/
    if ( v38 != 2 ) /*0x10039b1f4*/
    {
LABEL_69:
      v39 = *(_QWORD *)(a1 + 96); /*0x10039adc3*/
      v40 = *(_QWORD *)(a1 + 104); /*0x10039adcd*/
      v41 = *(_QWORD *)(a1 + 112); /*0x10039add2*/
      v42 = *(_QWORD *)(a1 + 120); /*0x10039add7*/
      v43 = *(_QWORD *)(a1 + 128); /*0x10039addc*/
      v44 = *(_QWORD *)(a1 + 136); /*0x10039ade4*/
      v45 = *(_QWORD *)(a1 + 144); /*0x10039adec*/
      v46 = *(_QWORD *)(a1 + 152); /*0x10039adf4*/
      v88[1] = *(_QWORD *)(a1 + 88); /*0x10039adfc*/
      v88[2] = v39; /*0x10039ae03*/
      v88[3] = v40; /*0x10039ae0a*/
      v88[4] = v41; /*0x10039ae11*/
      v88[5] = v42; /*0x10039ae18*/
      v88[6] = v43; /*0x10039ae1f*/
      v88[7] = v44; /*0x10039ae26*/
      v88[8] = v45; /*0x10039ae2d*/
      v88[9] = v46; /*0x10039ae34*/
    }
  }
LABEL_70:
  v88[0] = v38; /*0x10039ae3b*/
  *(_QWORD *)(a1 + 80) = v15; /*0x10039ae42*/
  *(_QWORD *)(a1 + 88) = v120; /*0x10039ae4b*/
  *(_QWORD *)(a1 + 96) = v122; /*0x10039ae54*/
  *(_QWORD *)(a1 + 104) = v119; /*0x10039ae5d*/
  *(_QWORD *)(a1 + 112) = v105; /*0x10039ae69*/
  *(_QWORD *)(a1 + 120) = v113; /*0x10039ae72*/
  *(_QWORD *)(a1 + 128) = v104; /*0x10039ae7e*/
  *(_QWORD *)(a1 + 136) = v112; /*0x10039ae8a*/
  *(_QWORD *)(a1 + 144) = v97; /*0x10039ae99*/
  *(_QWORD *)(a1 + 152) = v96; /*0x10039aea8*/
  v47 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039aebf*/
                  &unk_1016F1170,
                  16,
                  v10);
  if ( !v47 ) /*0x10039aec7*/
    v47 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x10039aec9*/
  if ( (unsigned __int8)codexmate_lib::core::analytics::parser::tokens::usage_has_invalid_fields::hf412e1651615efe6(v47) ) /*0x10039aed3*/
    goto LABEL_76; /*0x10039aed3*/
  v48 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039aeeb*/
                  (char *)&loc_1016F154B + 2,
                  17,
                  v10);
  if ( !v48 ) /*0x10039aef3*/
    v48 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x10039aef5*/
  if ( (unsigned __int8)codexmate_lib::core::analytics::parser::tokens::usage_has_invalid_fields::hf412e1651615efe6(v48) ) /*0x10039aeff*/
  {
LABEL_76:
    *(_BYTE *)(a1 + 505) = 1; /*0x10039af08*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(a1 + 400, 5); /*0x10039af1e*/
LABEL_77:
    *(_QWORD *)(a1 + 80) = 2; /*0x10039af23*/
LABEL_78:
    v49 = v100; /*0x10039af2c*/
    if ( !v100 ) /*0x10039af36*/
      return; /*0x10039af36*/
    v50 = v101; /*0x10039af38*/
    goto LABEL_80; /*0x10039af38*/
  }
  if ( ((unsigned __int8)v114 & (v98 == 0) & (unsigned __int8)v121 & (v106 > 0) & (unsigned __int8)v34) != 0 /*0x10039afbb*/
    || (_DWORD)v114 == 2
    && v96 > 0
    && !v119
    && !v120
    && (_DWORD)v15 != 2
    && (v15 & 1) != 0
    && (v122 & 1) != 0
    && (v97 & 1) != 0 )
  {
    goto LABEL_77; /*0x10039afbb*/
  }
  v51 = (_DWORD)v15 == 2 || (_DWORD)v38 == 2; /*0x10039afce*/
  if ( !v51 /*0x10039afe0*/
    && (unsigned __int8)_$LT$codexmate_lib..core..analytics..parser..tokens..Usage$u20$as$u20$core..cmp..PartialEq$GT$::eq::h9284f989bd0f39a5(
                          v89,
                          v88) )
  {
    goto LABEL_78; /*0x10039afe7*/
  }
  if ( !v102 ) /*0x10039aff7*/
  {
    *(_BYTE *)(a1 + 505) = 1; /*0x10039b24a*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(a1 + 400, 5); /*0x10039b262*/
    goto LABEL_78; /*0x10039b267*/
  }
  v52 = *(_BYTE *)(a1 + 507) == 1; /*0x10039affd*/
  v117 = v102; /*0x10039b006*/
  if ( v52 ) /*0x10039b00a*/
  {
    *(_BYTE *)(a1 + 507) = 0; /*0x10039b010*/
    v53 = 15; /*0x10039b019*/
    v54 = &unk_1016F155E; /*0x10039b01e*/
LABEL_96:
    codexmate_lib::core::analytics::parser::tokens::coverage::h6624a011b0ef3dd5( /*0x10039b025*/
      v116,
      v115,
      v101,
      v117,
      v111,
      v54,
      v53,
      v103);
    goto LABEL_78; /*0x10039b054*/
  }
  if ( v51 ) /*0x10039b26e*/
  {
    v67 = v114; /*0x10039b270*/
    v68 = v120; /*0x10039b277*/
    v69 = v119; /*0x10039b27b*/
    v70 = v113; /*0x10039b27f*/
    v71 = v106; /*0x10039b283*/
    if ( (_DWORD)v114 == 2 ) /*0x10039b28a*/
    {
LABEL_142:
      codexmate_lib::core::analytics::parser::tokens::coverage::h6624a011b0ef3dd5( /*0x10039b290*/
        v116,
        v115,
        v101,
        v117,
        v111,
        &unk_1016F155E,
        15,
        v103);
      goto LABEL_78; /*0x10039b2ca*/
    }
  }
  else
  {
    v72 = codexmate_lib::core::analytics::parser::tokens::legacy_usage::_$u7b$$u7b$closure$u7d$$u7d$::h32374e7387c8fa40( /*0x10039b2dd*/
            v89,
            v88);
    v68 = v120; /*0x10039b2e4*/
    v69 = v119; /*0x10039b2e8*/
    v70 = v113; /*0x10039b2ec*/
    v71 = v106; /*0x10039b2f0*/
    if ( v72 ) /*0x10039b2f7*/
    {
      v53 = 20; /*0x10039b2f9*/
      v54 = &unk_1016F159A; /*0x10039b2fe*/
      goto LABEL_96; /*0x10039b305*/
    }
    v67 = v114; /*0x10039b30a*/
    if ( (_DWORD)v114 == 2 ) /*0x10039b311*/
    {
      codexmate_lib::core::analytics::parser::tokens::Usage::delta::h8c35667bcfb85353(v92, v89, v88); /*0x10039b32c*/
      if ( LODWORD(v92[0]) == 2 ) /*0x10039b338*/
        goto LABEL_142; /*0x10039b338*/
      if ( LODWORD(v92[8]) == 1 && !v92[9] ) /*0x10039b34f*/
        goto LABEL_78; /*0x10039b34f*/
      qmemcpy(v87, v92, sizeof(v87)); /*0x10039b368*/
      v73 = *(_QWORD *)(a1 + 360); /*0x10039b375*/
      if ( *(_QWORD *)(a1 + 344) == 0x8000000000000000LL ) /*0x10039b385*/
        goto LABEL_169; /*0x10039b385*/
LABEL_150:
      v74 = *(_QWORD *)(a1 + 352); /*0x10039b38b*/
      goto LABEL_170; /*0x10039b393*/
    }
  }
  if ( ((unsigned __int8)(v67 & v121) & (unsigned __int8)v34 & 1) == 0 /*0x10039b481*/
    || v94 > *((__int64 *)&v98 + 1)
    || (((_QWORD)v98 + *((_QWORD *)&v98 + 1) == v71)
      & !__OFADD__((_QWORD)v98, *((_QWORD *)&v98 + 1))
      & (unsigned __int8)v118) == 0
    || v15 == 2
    || v95 > (__int64)v98
    || (v99 & 1) == 0
    || (v15 & 1) == 0
    || (v122 & 1) == 0
    || (v97 & 1) == 0
    || v70 > v69
    || v112 > v68
    || v69 + v68 != v96
    || __OFADD__(v69, v68)
    || (v104 & 1) == 0
    || (v105 & 1) == 0 )
  {
    codexmate_lib::core::analytics::parser::tokens::coverage::h6624a011b0ef3dd5( /*0x10039b40d*/
      v116,
      v115,
      v101,
      v117,
      v111,
      &unk_1016F156D,
      20,
      v103);
    goto LABEL_77; /*0x10039b412*/
  }
  if ( !v71 ) /*0x10039b48a*/
    goto LABEL_78; /*0x10039b48a*/
  v87[0] = 1; /*0x10039b490*/
  v87[1] = *((_QWORD *)&v98 + 1); /*0x10039b4a2*/
  v87[2] = 1; /*0x10039b4a9*/
  v87[3] = v98; /*0x10039b4bb*/
  v87[4] = v99; /*0x10039b4c9*/
  v87[5] = v95; /*0x10039b4d7*/
  v87[6] = 1; /*0x10039b4de*/
  v87[7] = v94; /*0x10039b4f0*/
  v87[8] = 1; /*0x10039b4f7*/
  v87[9] = v106; /*0x10039b509*/
  v73 = *(_QWORD *)(a1 + 360); /*0x10039b51a*/
  if ( *(_QWORD *)(a1 + 344) != 0x8000000000000000LL ) /*0x10039b52a*/
    goto LABEL_150; /*0x10039b52a*/
LABEL_169:
  v74 = 0; /*0x10039b530*/
LABEL_170:
  codexmate_lib::core::analytics::parser::tokens::token_data::hb557ea2d1e4212b5( /*0x10039b533*/
    v93,
    v87,
    (char *)&loc_1016F157F + 2,
    1,
    v74,
    v73);
  v92[0] = v116; /*0x10039b560*/
  v92[1] = v115; /*0x10039b56b*/
  v122 = v101; /*0x10039b572*/
  v92[2] = v101; /*0x10039b576*/
  v92[3] = v117; /*0x10039b581*/
  codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db((__int64)v90, (__int64)v92, 2); /*0x10039b59b*/
  serde_json::value::to_value::h27d37099ce5b26c1(&v83, v90); /*0x10039b5ae*/
  if ( (_BYTE)v83 == 6 ) /*0x10039b5ba*/
  {
    v107 = v84; /*0x10039b8ea*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016F210E, 43, &v107, &off_101AA7910, &off_101AA73C0); /*0x10039b912*/
  }
  v110 = v86; /*0x10039b5c7*/
  v109 = v85; /*0x10039b5d5*/
  v108 = v84; /*0x10039b5ea*/
  v107 = v83; /*0x10039b5f1*/
  v75 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10039b610*/
                    &unk_1016F1587,
                    0xEu);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v75); /*0x10039b616*/
  v75[3] = v110; /*0x10039b622*/
  v75[2] = v109; /*0x10039b62d*/
  v76 = v107; /*0x10039b631*/
  v75[1] = v108; /*0x10039b63f*/
  *v75 = v76; /*0x10039b643*/
  if ( v90[0] ) /*0x10039b650*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90[1], v90[0], 1); /*0x10039b65e*/
  LOWORD(v92[0]) = 257; /*0x10039b663*/
  v77 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10039b684*/
                    &unk_1016F1190,
                    8u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v77); /*0x10039b68a*/
  v77[3] = v92[3]; /*0x10039b696*/
  v77[2] = v92[2]; /*0x10039b6a1*/
  v78 = v92[0]; /*0x10039b6a5*/
  v77[1] = v92[1]; /*0x10039b6b3*/
  *v77 = v78; /*0x10039b6b7*/
  codexmate_lib::core::analytics::parser::record_fingerprint::hd606e2d8abd2f122(v92, v91, v10); /*0x10039b6cb*/
  v79 = v92[0]; /*0x10039b6d3*/
  if ( v92[0] == 0x8000000000000000LL ) /*0x10039b6dd*/
  {
    *(_BYTE *)(a1 + 505) = 1; /*0x10039b6df*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(a1 + 400, 5); /*0x10039b6f7*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v93); /*0x10039b703*/
    goto LABEL_78; /*0x10039b708*/
  }
  v80 = v92[1]; /*0x10039b70d*/
  v81 = v92[2]; /*0x10039b714*/
  v92[0] = (char *)&loc_1016F157F + 2; /*0x10039b71b*/
  v92[1] = 6; /*0x10039b722*/
  v92[2] = v116; /*0x10039b731*/
  v92[3] = v115; /*0x10039b73c*/
  v92[4] = v122; /*0x10039b747*/
  v92[5] = v117; /*0x10039b752*/
  v92[6] = v80; /*0x10039b759*/
  v92[7] = v81; /*0x10039b760*/
  v110 = v93[3]; /*0x10039b76e*/
  v109 = v93[2]; /*0x10039b77c*/
  v108 = v93[1]; /*0x10039b791*/
  v107 = v93[0]; /*0x10039b798*/
  codexmate_lib::core::analytics::parser::fact::ha64429e32170a0de( /*0x10039b7ed*/
    &v83,
    &anon_7534e791983e23e0bbee4dd7c8383343_216,
    5,
    v92,
    4,
    v116,
    v115,
    v122,
    v117,
    v111,
    &v107,
    10);
  if ( *(_BYTE *)(a1 + 508) ) /*0x10039b7f2*/
  {
    if ( *(_QWORD *)(a1 + 280) > 0x7FFu ) /*0x10039b809*/
    {
      *(_BYTE *)(a1 + 505) = 1; /*0x10039b80b*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(a1 + 400, 10); /*0x10039b823*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..Fact$GT$::h1809a14a2e62f7d1(&v83); /*0x10039b82f*/
      if ( v79 ) /*0x10039b837*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x10039b848*/
      goto LABEL_78; /*0x10039b84d*/
    }
    _$LT$codexmate_lib..core..analytics..parser..Fact$u20$as$u20$core..clone..Clone$GT$::clone::hb216dfdb45c65373( /*0x10039b860*/
      v92,
      &v83);
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h43ba1f9950fcdb19(a1 + 264, v92); /*0x10039b876*/
  }
  v82 = (_QWORD *)v103; /*0x10039b882*/
  alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h43ba1f9950fcdb19(v103, &v83); /*0x10039b88c*/
  codexmate_lib::core::analytics::parser::activity::h5533b66eb59dc9f2(v116, v115, v122, v117, v111, v82); /*0x10039b8ab*/
  if ( v79 ) /*0x10039b8b3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x10039b8c0*/
  v49 = v100; /*0x10039b8c5*/
  if ( v100 ) /*0x10039b8cf*/
  {
    v50 = v122; /*0x10039b8da*/
LABEL_80:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x10039af44*/
  }
}