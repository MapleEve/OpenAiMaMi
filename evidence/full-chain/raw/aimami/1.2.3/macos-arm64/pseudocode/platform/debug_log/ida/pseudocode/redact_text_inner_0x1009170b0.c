// __ZN13codexmate_lib8platform9debug_log17redact_text_inner @ 0x1009170b0 | 基线 same-set
// [FULL decompile]

double __fastcall codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(
        __int64 *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  size_t v5; // r12
  size_t v6; // r13
  __int64 v7; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  double result; // xmm0_8
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbx
  size_t v16; // r13
  void *v17; // r12
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r13
  char *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // r12
  unsigned int v27; // r13d
  int v28; // ecx
  int v29; // eax
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  char v32; // cl
  unsigned int v33; // edx
  __int64 v34; // rax
  char *v35; // rdi
  char *v36; // r15
  char *v37; // r8
  char *v38; // rdi
  int v39; // r10d
  int v40; // r14d
  int v41; // r11d
  char v42; // r9
  int v43; // r14d
  int v44; // r11d
  int v45; // edi
  unsigned __int64 v46; // r15
  char v47; // r8
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned int v50; // r8d
  int *v51; // rdi
  unsigned __int64 v52; // rsi
  char v53; // dl
  unsigned int v54; // esi
  char v55; // cl
  unsigned int v56; // ecx
  unsigned int v57; // edx
  __int64 v58; // rax
  int *v59; // r14
  int v60; // eax
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rcx
  unsigned int v64; // r13d
  unsigned __int64 v65; // rbx
  __int64 v66; // r14
  char v67; // cl
  unsigned int v68; // edx
  char v69; // dl
  unsigned int v70; // esi
  void *v71; // rax
  __int64 v72; // r9
  size_t v73; // rdx
  int v74; // ebx
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rcx
  _QWORD *v78; // rdi
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // r13
  size_t v81; // rdx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rax
  int *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r14
  size_t v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rcx
  int v91; // r14d
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // r8
  int v94; // r10d
  _DWORD *v95; // r11
  __int64 v96; // r10
  __int64 v97; // rcx
  int v98; // edi
  unsigned __int64 v99; // r8
  __int64 v100; // r10
  int v101; // r11d
  _DWORD *v102; // r13
  __int64 v103; // r11
  __int64 v104; // r14
  size_t v105; // rbx
  __int64 v106; // r14
  unsigned __int64 v107; // rax
  __int64 v108; // rcx
  unsigned int v109; // ecx
  char v110; // cl
  unsigned __int64 v111; // rcx
  __int64 v112; // rsi
  void *v113; // r8
  void *v114; // rax
  __int64 v115; // r14
  size_t v116; // rbx
  __int64 v117; // rbx
  unsigned __int64 v118; // rcx
  __int64 v119; // rdx
  unsigned int v120; // edx
  char v121; // dl
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rsi
  __int64 v126; // rax
  size_t v127; // rbx
  size_t v128; // rbx
  size_t v129; // rbx
  __int64 v130; // rsi
  __int64 v131; // rbx
  __int64 v132; // r15
  bool v133; // zf
  __int64 v134; // rbx
  __int64 v135; // r14
  __int64 v136; // rax
  unsigned __int8 *v137; // r15
  __int64 v138; // rbx
  unsigned __int8 *v139; // r12
  unsigned int v140; // r13d
  int v141; // eax
  int v142; // edx
  int v143; // ecx
  unsigned __int8 v144; // r13
  unsigned int v145; // eax
  unsigned __int64 v146; // rbx
  __int64 v147; // r14
  __int64 v148; // rax
  __int64 v149; // rcx
  char v150; // dl
  unsigned int v151; // esi
  char v152; // si
  unsigned int v153; // edi
  unsigned __int64 v154; // r14
  __int64 v155; // rax
  char v156; // cl
  unsigned int v157; // edx
  _BYTE *v158; // rsi
  char v159; // dl
  unsigned int v160; // esi
  _BYTE *v161; // rdi
  __int64 *v162; // rdx
  __int64 v163; // rax
  _QWORD v164[2]; // [rsp+8h] [rbp-108h] BYREF
  __int64 *v165; // [rsp+18h] [rbp-F8h]
  __int64 v166; // [rsp+20h] [rbp-F0h] BYREF
  _QWORD *v167; // [rsp+28h] [rbp-E8h]
  char *v168; // [rsp+30h] [rbp-E0h]
  size_t __n; // [rsp+38h] [rbp-D8h]
  int v170; // [rsp+44h] [rbp-CCh]
  __int64 v171; // [rsp+48h] [rbp-C8h] BYREF
  void *v172; // [rsp+50h] [rbp-C0h]
  __int64 v173; // [rsp+58h] [rbp-B8h]
  int v174[2]; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v175; // [rsp+68h] [rbp-A8h]
  int v176[2]; // [rsp+70h] [rbp-A0h]
  __int64 v177; // [rsp+80h] [rbp-90h] BYREF
  int v178[2]; // [rsp+88h] [rbp-88h]
  int v179[2]; // [rsp+90h] [rbp-80h]
  void *v180; // [rsp+98h] [rbp-78h]
  __int64 v181; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD *v182; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v183; // [rsp+B0h] [rbp-60h]
  int v184[2]; // [rsp+B8h] [rbp-58h]
  __int64 v185; // [rsp+C0h] [rbp-50h]
  size_t v186; // [rsp+C8h] [rbp-48h]
  char v187; // [rsp+D7h] [rbp-39h]
  __int64 v188; // [rsp+D8h] [rbp-38h]
  void *__src; // [rsp+E0h] [rbp-30h]

  v5 = a3;
  if ( a3 < 0 )
  {
    v6 = a3;
    v7 = 0;
    goto LABEL_3;
  }
  v165 = a1;
  if ( a3 )
  {
    __src = a2;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
    v7 = 1;
    v6 = v5;
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1);
    if ( !v10 )
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6);
    v11 = v10;
    a2 = __src;
  }
  else
  {
    v11 = 1;
  }
  *(_QWORD *)v184 = v11;
  memcpy((void *)v11, a2, v5);
  if ( a4 )
  {
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v177, a4, a5);
    if ( *(_QWORD *)v179 )
    {
      alloc::str::_$LT$impl$u20$str$GT$::replace::h0711137c3db96933(
        (int)v174,
        v184[0],
        v5,
        v178[0],
        v179[0],
        (int)"~/.codexsessionsccswitchorphaned",
        8u);
      if ( v5 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v184, v5, 1);
      v5 = *(_QWORD *)v174;
      *(_QWORD *)v184 = v175;
      v13 = *(_QWORD *)v176;
      v14 = v177;
      if ( v177 == 0x8000000000000000LL )
        goto LABEL_18;
      goto LABEL_16;
    }
    v13 = v5;
    v14 = v177;
    if ( v177 != 0x8000000000000000LL )
    {
LABEL_16:
      if ( v14 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v178, v14, 1);
    }
  }
  else
  {
    v13 = v5;
  }
LABEL_18:
  dirs::home_dir::hc82e61f557956e66(&v171);
  v15 = v171;
  if ( v171 != 0x8000000000000000LL )
  {
    v16 = v5;
    v17 = v172;
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v177, v172, v173);
    if ( *(_QWORD *)v179 )
    {
      alloc::str::_$LT$impl$u20$str$GT$::replace::h0711137c3db96933(
        (int)v174,
        v184[0],
        v13,
        v178[0],
        v179[0],
        (int)"~",
        1u);
      if ( v16 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v184, v16, 1);
      v16 = *(_QWORD *)v174;
      *(_QWORD *)v184 = v175;
      v13 = *(_QWORD *)v176;
    }
    if ( v177 != 0x8000000000000000LL && v177 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v178, v177, 1);
    if ( v15 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v15, 1);
    v5 = v16;
  }
  v18 = *(_QWORD *)v184;
  v19 = &v166;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfd9fba14dd894e2f(
    &v166,
    *(_QWORD *)v184,
    *(_QWORD *)v184 + v13);
  if ( v13 < 0 )
  {
    v21 = 0;
    goto LABEL_31;
  }
  if ( v13 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v166, v18);
    v21 = 1;
    v19 = (_QWORD *)v13;
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1);
    if ( !v22 )
LABEL_31:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v13);
    v23 = v22;
  }
  else
  {
    v23 = 1;
  }
  v181 = v13;
  v182 = (_QWORD *)v23;
  v183 = 0;
  v24 = v168;
  v25 = 0;
  v186 = v5;
  if ( v168 )
  {
    __src = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v185 = v23;
        v188 = v25;
        v26 = v167;
        v27 = *((_DWORD *)v167 + (_QWORD)__src);
        v28 = 0;
        if ( v27 == 39 )
          v28 = 39;
        if ( v27 == 34 )
          v28 = 34;
        if ( (char *)__src - (v28 == 0) + 1 < v24 )
        {
          if ( !__src )
            break;
          if ( v28 )
            break;
          v29 = *((_DWORD *)v167 + (_QWORD)__src - 1);
          if ( (unsigned int)(v29 - 48) >= 0xA && (v29 & 0xFFFFFFDF) - 65 >= 0x1A && v29 != 45 && v29 != 95 )
            break;
        }
LABEL_51:
        v30 = 1;
        if ( v27 >= 0x80 )
        {
          v30 = 2;
          if ( v27 >= 0x800 )
            v30 = 4LL - (v27 < 0x10000);
        }
        v31 = v188;
        v5 = v186;
        if ( v30 > v181 - v188 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v181,
            v188,
            v30,
            1,
            1,
            v20);
          v31 = v183;
          v19 = v182;
          if ( v27 >= 0x80 )
          {
LABEL_56:
            v32 = v27 & 0x3F | 0x80;
            v33 = v27 >> 6;
            if ( v27 >= 0x800 )
            {
              v53 = v33 & 0x3F | 0x80;
              v54 = v27 >> 12;
              if ( v27 > 0xFFFF )
              {
                *((_BYTE *)v19 + v31) = (v27 >> 18) | 0xF0;
                v23 = (__int64)v19;
                *((_BYTE *)v19 + v31 + 1) = v54 & 0x3F | 0x80;
                *((_BYTE *)v19 + v31 + 2) = v53;
                *((_BYTE *)v19 + v31 + 3) = v32;
              }
              else
              {
                v23 = (__int64)v19;
                *((_BYTE *)v19 + v31) = v54 | 0xE0;
                *((_BYTE *)v19 + v31 + 1) = v53;
                *((_BYTE *)v19 + v31 + 2) = v32;
              }
            }
            else
            {
              v23 = (__int64)v19;
              *((_BYTE *)v19 + v31) = v33 | 0xC0;
              *((_BYTE *)v19 + v31 + 1) = v32;
            }
            goto LABEL_39;
          }
        }
        else
        {
          v19 = v182;
          if ( v27 >= 0x80 )
            goto LABEL_56;
        }
        *((_BYTE *)v19 + v31) = v27;
        v23 = (__int64)v19;
LABEL_39:
        v25 = v30 + v188;
        v183 = v30 + v188;
        __src = (char *)__src + 1;
        if ( __src >= v24 )
          goto LABEL_313;
      }
      v34 = 0;
      while ( 1 )
      {
        v35 = (&off_10196DC88)[v34 + 1];
        v36 = (char *)__src - (v28 == 0) + 1;
        if ( v35 )
        {
          v37 = (&off_10196DC88)[v34];
          v38 = &v35[(_QWORD)v37];
          v36 = (char *)__src - (v28 == 0) + 1;
          do
          {
            v20 = (unsigned __int8)*v37;
            if ( (v20 & 0x80u) != 0LL )
            {
              v39 = v20 & 0x1F;
              v40 = v37[1] & 0x3F;
              if ( (unsigned __int8)v20 <= 0xDFu )
              {
                v37 += 2;
                v20 = v40 | (unsigned int)(v39 << 6);
                if ( v36 >= v24 )
                  goto LABEL_59;
              }
              else
              {
                v41 = (v40 << 6) | v37[2] & 0x3F;
                if ( (unsigned __int8)v20 < 0xF0u )
                {
                  v37 += 3;
                  v20 = (v39 << 12) | (unsigned int)v41;
                  if ( v36 >= v24 )
                    goto LABEL_59;
                }
                else
                {
                  v42 = v37[3];
                  v37 += 4;
                  v20 = ((v39 & 7) << 18) | (v41 << 6) | v42 & 0x3Fu;
                  if ( v36 >= v24 )
                    goto LABEL_59;
                }
              }
            }
            else
            {
              ++v37;
              if ( v36 >= v24 )
                goto LABEL_59;
            }
            v43 = *((_DWORD *)v167 + (_QWORD)v36) ^ 0x20;
            if ( (unsigned int)(*((_DWORD *)v167 + (_QWORD)v36) - 65) >= 0x1A )
              v43 = *((_DWORD *)v167 + (_QWORD)v36);
            v44 = v20 | 0x20;
            if ( (unsigned int)(v20 - 65) >= 0x1A )
              v44 = v20;
            if ( v43 != v44 )
              goto LABEL_59;
            ++v36;
          }
          while ( v37 != v38 );
        }
        if ( v28 )
        {
          if ( v36 >= v24 || *((_DWORD *)v167 + (_QWORD)v36) != v28 )
            goto LABEL_59;
          ++v36;
        }
        else if ( v36 < v24 )
        {
          v45 = *((_DWORD *)v167 + (_QWORD)v36);
          if ( (unsigned int)(v45 - 48) < 0xA || (v45 & 0xFFFFFFDF) - 65 < 0x1A || v45 == 45 || v45 == 95 )
            goto LABEL_59;
        }
        if ( v36 < v24 )
        {
          v46 = (unsigned __int64)(v36 + 1);
          while ( 1 )
          {
            v49 = *((unsigned int *)v167 + v46 - 1);
            if ( (unsigned int)(v49 - 9) >= 5 && (_DWORD)v49 != 32 )
              break;
LABEL_91:
            v48 = v46 - (_QWORD)v24 + 1;
            ++v46;
            if ( v48 == 1 )
              goto LABEL_59;
          }
          if ( (unsigned int)v49 < 0x80 )
            goto LABEL_103;
          v50 = (unsigned int)v49 >> 8;
          if ( (unsigned int)v49 >> 8 <= 0x1F )
          {
            if ( v50 )
            {
              if ( v50 != 22 )
                goto LABEL_103;
              v47 = (_DWORD)v49 == 5760;
            }
            else
            {
              v20 = (unsigned __int64)core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3;
              v47 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v49];
            }
            goto LABEL_90;
          }
          if ( v50 == 32 )
          {
            v20 = (unsigned __int64)core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3;
            v47 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v49] >> 1;
            goto LABEL_90;
          }
          if ( v50 == 48 )
          {
            v47 = (_DWORD)v49 == 12288;
LABEL_90:
            if ( (v47 & 1) == 0 )
              goto LABEL_103;
            goto LABEL_91;
          }
LABEL_103:
          if ( v49 == 61 || (_DWORD)v49 == 58 )
            break;
        }
LABEL_59:
        v34 += 3;
        if ( v34 == 93 )
          goto LABEL_51;
      }
      if ( v46 >= (unsigned __int64)v24 )
      {
        v51 = (int *)v185;
        v52 = (unsigned __int64)__src;
      }
      else
      {
        v51 = (int *)v185;
        v52 = (unsigned __int64)__src;
        do
        {
          v56 = *((_DWORD *)v167 + v46);
          if ( v56 - 9 >= 5 && v56 != 32 )
          {
            if ( v56 < 0x80 )
              goto LABEL_126;
            v57 = v56 >> 8;
            if ( v56 >> 8 > 0x1F )
            {
              if ( v57 == 32 )
              {
                v55 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v56] >> 1;
              }
              else
              {
                if ( v57 != 48 )
                  goto LABEL_126;
                v55 = v56 == 12288;
              }
            }
            else if ( v57 )
            {
              if ( v57 != 22 )
                goto LABEL_126;
              v55 = v56 == 5760;
            }
            else
            {
              v55 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v56];
            }
            if ( (v55 & 1) == 0 )
              goto LABEL_126;
          }
          ++v46;
        }
        while ( v46 < (unsigned __int64)v24 );
        v46 = (unsigned __int64)v24;
      }
LABEL_126:
      if ( v46 < v52 || v46 > (unsigned __int64)v24 )
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v52, v46, v24, &off_10196DF70);
      v187 = (char)(&off_10196DC88)[v34 + 2];
      if ( v52 != v46 )
      {
        v180 = (void *)(4 * v46);
        v52 *= 4LL;
        v58 = v188;
        while ( 1 )
        {
          __src = (void *)v52;
          v64 = *(_DWORD *)((char *)v26 + v52);
          v65 = 1;
          if ( v64 >= 0x80 )
          {
            v65 = 2;
            if ( v64 >= 0x800 )
              v65 = 4LL - (v64 < 0x10000);
          }
          v66 = v58;
          if ( v65 > v181 - v58 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v181,
              v58,
              v65,
              1,
              1,
              v20);
            v51 = (int *)v182;
            v58 = v183;
            if ( v64 >= 0x80 )
            {
LABEL_145:
              v67 = v64 & 0x3F | 0x80;
              v68 = v64 >> 6;
              if ( v64 >= 0x800 )
              {
                v69 = v68 & 0x3F | 0x80;
                v70 = v64 >> 12;
                if ( v64 > 0xFFFF )
                {
                  *((_BYTE *)v51 + v58) = (v64 >> 18) | 0xF0;
                  *((_BYTE *)v51 + v58 + 1) = v70 & 0x3F | 0x80;
                  *((_BYTE *)v51 + v58 + 2) = v69;
                  *((_BYTE *)v51 + v58 + 3) = v67;
                }
                else
                {
                  *((_BYTE *)v51 + v58) = v70 | 0xE0;
                  *((_BYTE *)v51 + v58 + 1) = v69;
                  *((_BYTE *)v51 + v58 + 2) = v67;
                }
              }
              else
              {
                *((_BYTE *)v51 + v58) = v68 | 0xC0;
                *((_BYTE *)v51 + v58 + 1) = v67;
              }
              goto LABEL_139;
            }
          }
          else if ( v64 >= 0x80 )
          {
            goto LABEL_145;
          }
          *((_BYTE *)v51 + v58) = v64;
LABEL_139:
          v58 = v65 + v66;
          v183 = v65 + v66;
          v52 = (unsigned __int64)__src + 4;
          if ( v180 == (char *)__src + 4 )
            goto LABEL_130;
        }
      }
      v58 = v188;
LABEL_130:
      v59 = (int *)v26 + v46;
      v188 = v58;
      if ( !v187 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v52);
        v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
        if ( v71 )
        {
          qmemcpy(v71, "[REDACTED]", 10);
          v171 = 10;
          v180 = v71;
          v172 = v71;
          v173 = 10;
          v73 = 10;
          __src = v168;
          if ( v46 >= (unsigned __int64)v168 )
            goto LABEL_268;
          goto LABEL_154;
        }
LABEL_388:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10);
      }
      __src = v168;
      if ( v46 >= (unsigned __int64)v168 )
        goto LABEL_265;
      v60 = *v59;
      if ( *v59 <= 90 )
      {
        if ( v60 == 34 || v60 == 39 )
        {
          v61 = v46 + 1;
          v62 = v46 + 1;
          v63 = (unsigned __int64)v26 + 4 * v46;
          if ( v46 + 1 < (unsigned __int64)__src )
          {
            while ( 1 )
            {
              if ( *((_DWORD *)v26 + v62) == v60 )
              {
                v52 = v63;
                v86 = 0;
                while ( *(_DWORD *)v52 == 92 )
                {
                  ++v86;
                  v52 -= 4LL;
                  if ( v62 == v86 )
                  {
                    LOBYTE(v86) = v62;
                    break;
                  }
                }
                if ( (v86 & 1) == 0 )
                  break;
              }
              ++v62;
              v63 += 4LL;
              if ( (void *)v62 == __src )
              {
                v62 = (unsigned __int64)__src;
                goto LABEL_258;
              }
            }
          }
          goto LABEL_258;
        }
LABEL_276:
        v62 = v46;
        while ( 2 )
        {
          v118 = *((unsigned int *)v26 + v62);
          if ( v118 <= 0x20 )
          {
            v119 = 0x100003E00LL;
            if ( _bittest64(&v119, v118) )
              goto LABEL_257;
          }
          if ( (unsigned int)v118 >= 0x80 )
          {
            v120 = (unsigned int)v118 >> 8;
            if ( (unsigned int)v118 >> 8 > 0x1F )
            {
              if ( v120 == 32 )
              {
                v52 = (unsigned __int64)core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3;
                v121 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v118] >> 1;
                goto LABEL_289;
              }
              if ( v120 == 48 )
              {
                v121 = (_DWORD)v118 == 12288;
                goto LABEL_289;
              }
            }
            else
            {
              if ( !v120 )
              {
                v52 = (unsigned __int64)core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3;
                v121 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v118];
                goto LABEL_289;
              }
              if ( v120 == 22 )
              {
                v121 = (_DWORD)v118 == 5760;
LABEL_289:
                if ( (v121 & 1) != 0 )
                  goto LABEL_257;
              }
            }
          }
          v122 = (unsigned int)(v118 - 44);
          if ( (unsigned int)v122 <= 0x31 )
          {
            v52 = 0x2000000008001LL;
            if ( _bittest64((const __int64 *)&v52, v122) )
              goto LABEL_257;
          }
          if ( (_DWORD)v118 == 125 )
            goto LABEL_257;
          if ( __src == (void *)++v62 )
          {
            v62 = (unsigned __int64)__src;
            goto LABEL_257;
          }
          continue;
        }
      }
      if ( v60 != 91 && v60 != 123 )
        goto LABEL_276;
      v97 = (32 * (v60 == 123)) | 0x5Du;
      v98 = 1114112;
      v99 = v46;
      v52 = 0;
      v62 = v46;
      while ( 2 )
      {
        v20 = v99 - 1;
        v100 = (__int64)v26 + 4 * v99 - 4;
        while ( 1 )
        {
          v101 = *((_DWORD *)v26 + v62);
          if ( v98 == 1114112 )
            break;
          if ( v101 == v98 )
          {
            if ( v20 >= (unsigned __int64)__src )
              core::panicking::panic_bounds_check::h56740b1198b22635(v62 - 1, __src, &off_10196DC58, v97);
            v102 = (_DWORD *)v100;
            v103 = 0;
            while ( *v102 == 92 )
            {
              ++v103;
              --v102;
              if ( v62 == v103 )
              {
                LOBYTE(v103) = v62;
                break;
              }
            }
            if ( (v103 & 1) == 0 )
              v98 = 1114112;
          }
          ++v62;
          ++v20;
          v100 += 4;
          if ( v62 >= (unsigned __int64)__src )
          {
            v113 = (void *)(v99 + 1);
            if ( __src > v113 )
              v113 = __src;
            v62 = (unsigned __int64)v113;
            goto LABEL_257;
          }
        }
        if ( v101 == 34 || v101 == 39 )
        {
          v98 = *((_DWORD *)v26 + v62);
        }
        else if ( v101 == v60 )
        {
          ++v52;
          v98 = 1114112;
        }
        else
        {
          v98 = 1114112;
          if ( v101 == (_DWORD)v97 )
          {
            if ( v52 <= 1 )
            {
              ++v62;
              break;
            }
            --v52;
          }
        }
        v99 = ++v62;
        if ( v62 < (unsigned __int64)__src )
          continue;
        break;
      }
LABEL_257:
      v61 = v46 + (v60 == 39);
LABEL_258:
      v51 = v174;
      if ( v62 <= v61 )
      {
LABEL_265:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v52);
        v114 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
        if ( v114 )
        {
          qmemcpy(v114, "[REDACTED]", 10);
          v171 = 10;
          v180 = v114;
          v172 = v114;
          v173 = 10;
          v73 = 10;
          goto LABEL_267;
        }
        goto LABEL_388;
      }
      v185 = v61;
      if ( v62 > (unsigned __int64)__src )
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v185, v62, __src, &off_10196DC70);
      *(_QWORD *)v174 = 0;
      v175 = 1;
      *(_QWORD *)v176 = 0;
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        v174,
        0,
        v62 - v61,
        1,
        1,
        v20);
      _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3f89ec87ebcadec8(
        (char *)v26 + 4 * v185,
        (char *)v26 + 4 * v62,
        v174);
      v185 = *(_QWORD *)v174;
      v180 = (void *)v175;
      _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::hd9c8727c1668b76b(v174, v175, *(_QWORD *)v176);
      _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::h922405f54faf08af(
        &v177,
        v174,
        (char *)&v174[1] + 2);
      v164[0] = &v177;
      v164[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v171, &unk_1017C7AB1, v164);
      if ( v177 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v178, v177, 1);
      if ( v185 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v180, v185, 1);
      v180 = v172;
      v73 = v173;
LABEL_267:
      if ( v46 >= (unsigned __int64)__src )
      {
LABEL_268:
        if ( v73 > v181 - v188 )
        {
          v127 = v73;
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v181,
            v188,
            v73,
            1,
            1,
            v72);
          v188 = v183;
          v5 = v186;
          v73 = v127;
        }
        else
        {
          v5 = v186;
        }
        v23 = (__int64)v182;
        v115 = v188;
        v19 = (_QWORD *)((char *)v182 + v188);
        v116 = v73;
        memcpy((char *)v182 + v188, v180, v73);
        v25 = v116 + v115;
        v183 = v116 + v115;
        goto LABEL_271;
      }
LABEL_154:
      v74 = *v59;
      if ( *v59 > 90 )
      {
        if ( v74 != 91 && v74 != 123 )
          goto LABEL_231;
        v170 = *v59;
        if ( v73 > v181 - v188 )
        {
          v128 = v73;
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v181,
            v188,
            v73,
            1,
            1,
            v72);
          v188 = v183;
          v73 = v128;
        }
        v23 = (__int64)v182;
        v87 = v188;
        v88 = v73;
        memcpy((char *)v182 + v188, v180, v73);
        v89 = v88 + v87;
        v183 = v89;
        v90 = (__int64)v26 - 4;
        v91 = 1114112;
        v92 = 0;
        while ( 2 )
        {
          v19 = (_QWORD *)v46;
          v93 = v46 - 1;
          v20 = v90 + 4 * v46;
          while ( 1 )
          {
            v94 = *((_DWORD *)v26 + v46);
            if ( v91 == 1114112 )
              break;
            if ( v94 == v91 )
            {
              if ( v93 >= (unsigned __int64)__src )
                core::panicking::panic_bounds_check::h56740b1198b22635(v46 - 1, __src, &off_10196DC58, v90);
              v95 = (_DWORD *)v20;
              v96 = 0;
              while ( *v95 == 92 )
              {
                ++v96;
                --v95;
                if ( v46 == v96 )
                {
                  LOBYTE(v96) = v46;
                  break;
                }
              }
              if ( (v96 & 1) == 0 )
                v91 = 1114112;
            }
            ++v46;
            ++v93;
            v20 += 4LL;
            if ( v46 >= (unsigned __int64)__src )
            {
              v19 = (_QWORD *)((char *)v19 + 1);
              if ( __src > v19 )
                v19 = __src;
              v46 = (unsigned __int64)v19;
              goto LABEL_206;
            }
          }
          if ( v94 == 34 || v94 == 39 )
          {
            v91 = *((_DWORD *)v26 + v46);
          }
          else if ( v94 == v170 )
          {
            ++v92;
            v91 = 1114112;
          }
          else
          {
            v91 = 1114112;
            if ( v94 == ((32 * (v170 == 123)) | 0x5D) )
            {
              if ( v92 <= 1 )
              {
                ++v46;
                break;
              }
              --v92;
            }
          }
          if ( ++v46 < (unsigned __int64)__src )
            continue;
          break;
        }
LABEL_206:
        v5 = v186;
        v25 = v89;
      }
      else
      {
        if ( v74 == 34 || v74 == 39 )
        {
          __n = v73;
          v75 = v181;
          v76 = v188;
          v77 = v188;
          if ( v181 == v188 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v181,
              v188,
              1,
              1,
              1,
              v72);
            v75 = v181;
            v77 = v183;
            v76 = v188;
          }
          v78 = v182;
          *((_BYTE *)v182 + v77) = v74;
          v79 = v76 + 1;
          v183 = v79;
          v80 = v79;
          v81 = __n;
          if ( __n > v75 - v79 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v181,
              v79,
              __n,
              1,
              1,
              v72);
            v185 = (__int64)v182;
            v80 = v183;
            v81 = __n;
          }
          else
          {
            v185 = (__int64)v78;
          }
          v19 = (_QWORD *)(v185 + v80);
          memcpy((void *)(v185 + v80), v180, v81);
          v25 = __n + v80;
          v183 = __n + v80;
          v82 = v46 + 1;
          if ( v46 + 1 >= (unsigned __int64)__src )
          {
            ++v46;
            v5 = v186;
            v23 = v185;
          }
          else
          {
            v188 = __n + v80;
            v23 = v185;
            while ( 1 )
            {
              v83 = v82;
              if ( *((_DWORD *)v26 + v82) == v74 )
              {
                v84 = v59;
                v85 = 0;
                while ( *v84 == 92 )
                {
                  ++v85;
                  --v84;
                  if ( v83 == v85 )
                  {
                    LOBYTE(v85) = v83;
                    break;
                  }
                }
                if ( (v85 & 1) == 0 )
                  break;
              }
              v82 = v83 + 1;
              ++v59;
              v46 = v83;
              if ( (void *)(v83 + 1) == __src )
              {
                v46 = (unsigned __int64)__src;
                v5 = v186;
                v25 = v188;
                goto LABEL_271;
              }
            }
            v125 = v188;
            v126 = v188;
            v5 = v186;
            if ( v181 == v188 )
            {
              v19 = &v181;
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v181,
                v188,
                1,
                1,
                1,
                v20);
              v23 = (__int64)v182;
              v126 = v183;
              v5 = v186;
              v125 = v188;
            }
            *(_BYTE *)(v23 + v126) = v74;
            v183 = v125 + 1;
            v46 += 2LL;
            v25 = v125 + 1;
          }
          goto LABEL_271;
        }
LABEL_231:
        if ( v73 > v181 - v188 )
        {
          v129 = v73;
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v181,
            v188,
            v73,
            1,
            1,
            v72);
          v188 = v183;
          v73 = v129;
        }
        v23 = (__int64)v182;
        v104 = v188;
        v19 = (_QWORD *)((char *)v182 + v188);
        v105 = v73;
        memcpy((char *)v182 + v188, v180, v73);
        v106 = v105 + v104;
        v183 = v106;
        if ( v187 )
        {
          v19 = __src;
          while ( 1 )
          {
            v107 = *((unsigned int *)v26 + v46);
            if ( v107 <= 0x20 )
            {
              v108 = 0x100003E00LL;
              if ( _bittest64(&v108, v107) )
                goto LABEL_301;
            }
            if ( (unsigned int)v107 >= 0x80 )
            {
              v109 = (unsigned int)v107 >> 8;
              if ( (unsigned int)v107 >> 8 > 0x1F )
              {
                if ( v109 == 32 )
                {
                  v110 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v107] >> 1;
LABEL_247:
                  if ( (v110 & 1) != 0 )
                    goto LABEL_301;
                  goto LABEL_248;
                }
                if ( v109 == 48 )
                {
                  v110 = (_DWORD)v107 == 12288;
                  goto LABEL_247;
                }
              }
              else
              {
                if ( !v109 )
                {
                  v110 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v107];
                  goto LABEL_247;
                }
                if ( v109 == 22 )
                {
                  v110 = (_DWORD)v107 == 5760;
                  goto LABEL_247;
                }
              }
            }
LABEL_248:
            v111 = (unsigned int)(v107 - 44);
            if ( (unsigned int)v111 <= 0x31 )
            {
              v112 = 0x2000000008001LL;
              if ( _bittest64(&v112, v111) )
                goto LABEL_301;
            }
            if ( (_DWORD)v107 == 125 )
              goto LABEL_301;
            if ( __src == (void *)++v46 )
            {
              v46 = (unsigned __int64)__src;
              goto LABEL_301;
            }
          }
        }
        while ( 1 )
        {
          v123 = *((unsigned int *)v26 + v46);
          if ( v123 <= 0x3B )
          {
            v124 = 0x800100000002400LL;
            if ( _bittest64(&v124, v123) )
              break;
          }
          if ( (_DWORD)v123 == 93 || (_DWORD)v123 == 125 )
            break;
          if ( __src == (void *)++v46 )
          {
            v46 = (unsigned __int64)__src;
            break;
          }
        }
LABEL_301:
        v5 = v186;
        v25 = v106;
      }
LABEL_271:
      if ( v171 )
      {
        v19 = v172;
        v117 = v25;
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v171, 1);
        v25 = v117;
      }
      v24 = v168;
      __src = (void *)v46;
      if ( v46 >= (unsigned __int64)v168 )
      {
LABEL_313:
        v13 = v181;
        v23 = (__int64)v182;
        break;
      }
    }
  }
  v130 = v166;
  if ( v166 )
  {
    v19 = v167;
    v130 = 4 * v166;
    v131 = v25;
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v167, 4 * v166, 4);
    v25 = v131;
  }
  v188 = v13;
  v132 = v25;
  v133 = v25 == 0;
  if ( v25 < 0 )
  {
    v134 = 0;
    goto LABEL_318;
  }
  v135 = 1;
  v136 = 1;
  if ( !v133 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v130);
    v134 = 1;
    v136 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v132, 1);
    if ( !v136 )
LABEL_318:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v134, v132);
  }
  v177 = v132;
  *(_QWORD *)v178 = v136;
  *(_QWORD *)v179 = 0;
  *(_QWORD *)v174 = 0;
  v175 = 1;
  *(_QWORD *)v176 = 0;
  if ( !v132 )
  {
    v138 = 0;
    goto LABEL_377;
  }
  v137 = (unsigned __int8 *)(v23 + v132);
  __src = (void *)1;
  v138 = 0;
  v139 = (unsigned __int8 *)v23;
  v185 = v23;
  while ( 1 )
  {
LABEL_325:
    v140 = *v139;
    if ( (v140 & 0x80u) != 0 )
    {
      v141 = v140 & 0x1F;
      v142 = v139[1] & 0x3F;
      if ( (unsigned __int8)v140 <= 0xDFu )
      {
        v139 += 2;
        v140 = v142 | (v141 << 6);
        if ( v140 - 9 < 5 )
          goto LABEL_350;
      }
      else
      {
        v143 = (v142 << 6) | v139[2] & 0x3F;
        if ( (unsigned __int8)v140 < 0xF0u )
        {
          v139 += 3;
          v140 = (v141 << 12) | v143;
          if ( v140 - 9 < 5 )
            goto LABEL_350;
        }
        else
        {
          v144 = v139[3];
          v139 += 4;
          v140 = ((v141 & 7) << 18) | (v143 << 6) | v144 & 0x3F;
          if ( v140 - 9 < 5 )
            goto LABEL_350;
        }
      }
    }
    else
    {
      ++v139;
      if ( v140 - 9 < 5 )
        goto LABEL_350;
    }
    if ( v140 == 32 )
      goto LABEL_350;
    if ( v140 < 0x80 )
      goto LABEL_349;
    v145 = v140 >> 8;
    if ( v140 >> 8 > 0x1F )
      break;
    if ( v145 )
    {
      if ( v145 != 22 || v140 != 5760 )
        goto LABEL_349;
    }
    else if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v140] & 1) == 0 )
    {
      goto LABEL_349;
    }
LABEL_350:
    codexmate_lib::platform::debug_log::push_redacted_token::h8d53e02b1628054e(&v177, __src, v138);
    *(_QWORD *)v176 = 0;
    v146 = 1;
    if ( v140 >= 0x80 )
    {
      v146 = 2;
      if ( v140 >= 0x800 )
        v146 = 4LL - (v140 < 0x10000);
    }
    v147 = *(_QWORD *)v179;
    v148 = *(_QWORD *)v179;
    if ( v146 > v177 - *(_QWORD *)v179 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v177,
        *(_QWORD *)v179,
        v146,
        1,
        1,
        v20);
      v148 = *(_QWORD *)v179;
      v149 = *(_QWORD *)v178;
      if ( v140 >= 0x80 )
      {
LABEL_355:
        v150 = v140 & 0x3F | 0x80;
        v151 = v140 >> 6;
        if ( v140 >= 0x800 )
        {
          v152 = v151 & 0x3F | 0x80;
          v153 = v140 >> 12;
          if ( v140 > 0xFFFF )
          {
            *(_BYTE *)(v149 + v148) = (v140 >> 18) | 0xF0;
            *(_BYTE *)(v149 + v148 + 1) = v153 & 0x3F | 0x80;
            *(_BYTE *)(v149 + v148 + 2) = v152;
            *(_BYTE *)(v149 + v148 + 3) = v150;
          }
          else
          {
            *(_BYTE *)(v149 + v148) = v153 | 0xE0;
            *(_BYTE *)(v149 + v148 + 1) = v152;
            *(_BYTE *)(v149 + v148 + 2) = v150;
          }
        }
        else
        {
          *(_BYTE *)(v149 + v148) = v151 | 0xC0;
          *(_BYTE *)(v149 + v148 + 1) = v150;
        }
        goto LABEL_324;
      }
    }
    else
    {
      v149 = *(_QWORD *)v178;
      if ( v140 >= 0x80 )
        goto LABEL_355;
    }
    *(_BYTE *)(v149 + v148) = v140;
LABEL_324:
    *(_QWORD *)v179 = v147 + v146;
    v138 = 0;
    v23 = v185;
    if ( v139 == v137 )
      goto LABEL_375;
  }
  if ( v145 == 32 )
  {
    if ( (core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v140] & 2) == 0 )
      goto LABEL_349;
    goto LABEL_350;
  }
  if ( v145 == 48 && v140 == 12288 )
    goto LABEL_350;
LABEL_349:
  switch ( v140 )
  {
    case '"':
    case '&':
    case '\'':
    case '(':
    case ')':
    case ',':
    case '/':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '[':
    case ']':
    case '`':
    case '{':
    case '|':
    case '}':
      goto LABEL_350;
    default:
      v154 = 1;
      if ( v140 >= 0x80 )
      {
        v154 = 2;
        if ( v140 >= 0x800 )
          v154 = 4LL - (v140 < 0x10000);
      }
      v155 = v138;
      if ( v154 > *(_QWORD *)v174 - v138 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          v174,
          v138,
          v154,
          1,
          1,
          v20);
        __src = (void *)v175;
        v155 = *(_QWORD *)v176;
        if ( v140 < 0x80 )
        {
LABEL_365:
          *((_BYTE *)__src + v155) = v140;
          goto LABEL_374;
        }
      }
      else if ( v140 < 0x80 )
      {
        goto LABEL_365;
      }
      v156 = v140 & 0x3F | 0x80;
      v157 = v140 >> 6;
      if ( v140 >= 0x800 )
      {
        v159 = v157 & 0x3F | 0x80;
        v160 = v140 >> 12;
        v161 = __src;
        if ( v140 > 0xFFFF )
        {
          *((_BYTE *)__src + v155) = (v140 >> 18) | 0xF0;
          v161[v155 + 1] = v160 & 0x3F | 0x80;
          v161[v155 + 2] = v159;
          v161[v155 + 3] = v156;
        }
        else
        {
          *((_BYTE *)__src + v155) = v160 | 0xE0;
          v161[v155 + 1] = v159;
          v161[v155 + 2] = v156;
        }
      }
      else
      {
        v158 = __src;
        *((_BYTE *)__src + v155) = v157 | 0xC0;
        v158[v155 + 1] = v156;
      }
LABEL_374:
      v138 += v154;
      *(_QWORD *)v176 = v138;
      v23 = v185;
      if ( v139 != v137 )
        goto LABEL_325;
LABEL_375:
      v135 = v175;
      v5 = v186;
      break;
  }
LABEL_377:
  codexmate_lib::platform::debug_log::push_redacted_token::h8d53e02b1628054e(&v177, v135, v138);
  v162 = v165;
  v165[2] = *(_QWORD *)v179;
  v163 = v177;
  v162[1] = *(_QWORD *)v178;
  *v162 = v163;
  if ( *(_QWORD *)v174 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, *(_QWORD *)v174, 1);
  if ( v188 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v188, 1);
  if ( v5 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v184, v5, 1);
  return result;
}
