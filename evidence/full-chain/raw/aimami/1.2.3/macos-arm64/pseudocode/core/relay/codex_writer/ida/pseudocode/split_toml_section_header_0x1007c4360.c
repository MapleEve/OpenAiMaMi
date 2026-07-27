// __ZN13codexmate_lib4core5relay12codex_writer25split_toml_section_header @ 0x1007c4360 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_writer::split_toml_section_header::hb60c247d95bb914b(
        __int64 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r14
  char v11; // si
  unsigned int v12; // r15d
  unsigned __int64 v13; // rbx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  unsigned __int8 v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // rbx
  char v20; // cl
  unsigned int v21; // edx
  char v22; // dl
  unsigned int v23; // esi
  char v24; // cl
  unsigned int v25; // edx
  char v26; // dl
  unsigned int v27; // esi
  unsigned int v28; // r15d
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  unsigned __int8 v32; // r15
  unsigned __int64 v33; // r14
  char v34; // r13
  char v35; // cl
  unsigned int v36; // edx
  char v37; // dl
  unsigned int v38; // esi
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rsi
  const void *v42; // rax
  __int64 v43; // rdx
  size_t v44; // r15
  size_t v45; // r14
  const void *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rsi
  const void *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdi
  const void *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 result; // rax
  size_t v63; // [rsp+8h] [rbp-78h]
  unsigned __int8 *v64; // [rsp+10h] [rbp-70h]
  __int64 v65; // [rsp+18h] [rbp-68h] BYREF
  __int64 v66; // [rsp+20h] [rbp-60h]
  __int64 v67; // [rsp+28h] [rbp-58h]
  __int64 v68; // [rsp+30h] [rbp-50h]
  __int64 v69; // [rsp+38h] [rbp-48h] BYREF
  __int64 v70; // [rsp+40h] [rbp-40h]
  __int64 v71; // [rsp+48h] [rbp-38h]
  __int64 v72; // [rsp+50h] [rbp-30h]

  v65 = 0; /*0x1007c4375*/
  v66 = 8; /*0x1007c437d*/
  v67 = 0; /*0x1007c4385*/
  v69 = 0; /*0x1007c438d*/
  v70 = 1; /*0x1007c4395*/
  v71 = 0; /*0x1007c439d*/
  if ( !a3 ) /*0x1007c43a8*/
  {
    v9 = 1; /*0x1007c49d9*/
    v19 = 0; /*0x1007c49de*/
    goto LABEL_96; /*0x1007c49e0*/
  }
  v7 = a2; /*0x1007c43b1*/
  v8 = &a2[a3]; /*0x1007c43b4*/
  v9 = 1; /*0x1007c43b7*/
  v10 = 0; /*0x1007c43bc*/
  v72 = 0; /*0x1007c43bf*/
  v11 = 0; /*0x1007c43c7*/
  v64 = v8; /*0x1007c43c9*/
LABEL_5:
  v12 = *v7; /*0x1007c43df*/
  if ( (v12 & 0x80u) == 0 ) /*0x1007c43e7*/
  {
    ++v7; /*0x1007c43e9*/
    if ( (v11 & 1) != 0 ) /*0x1007c43f0*/
      goto LABEL_7; /*0x1007c43f0*/
    goto LABEL_18; /*0x1007c43f0*/
  }
  v14 = v12 & 0x1F; /*0x1007c4453*/
  v15 = v7[1] & 0x3F; /*0x1007c445c*/
  if ( (unsigned __int8)v12 >= 0xE0u ) /*0x1007c4463*/
  {
    v16 = (v15 << 6) | v7[2] & 0x3F; /*0x1007c4471*/
    if ( (unsigned __int8)v12 >= 0xF0u ) /*0x1007c4477*/
    {
      v17 = v7[3]; /*0x1007c4479*/
      v7 += 4; /*0x1007c447f*/
      v6 = (unsigned __int8)(v14 & 7) << 18; /*0x1007c4486*/
      v12 = v6 | (v16 << 6) | v17 & 0x3F; /*0x1007c4493*/
      if ( (v11 & 1) != 0 ) /*0x1007c449a*/
        goto LABEL_7; /*0x1007c449a*/
      goto LABEL_18; /*0x1007c449a*/
    }
    v7 += 3; /*0x1007c44ee*/
    v6 = (unsigned int)(v14 << 12); /*0x1007c44f2*/
    v12 = v6 | v16; /*0x1007c44f7*/
    if ( (v11 & 1) == 0 ) /*0x1007c44fe*/
      goto LABEL_18; /*0x1007c44fe*/
LABEL_7:
    v13 = 1; /*0x1007c43f6*/
    if ( v12 >= 0x80 ) /*0x1007c4402*/
    {
      v13 = 2; /*0x1007c4404*/
      if ( v12 >= 0x800 ) /*0x1007c4410*/
        v13 = 4LL - (v12 < 0x10000); /*0x1007c441e*/
    }
    v6 = v10; /*0x1007c4429*/
    if ( v13 > v69 - v10 ) /*0x1007c442f*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v69, v10, v13, 1, 1, a6); /*0x1007c458d*/
      v6 = v71; /*0x1007c4592*/
      v9 = v70; /*0x1007c4596*/
      if ( v12 < 0x80 ) /*0x1007c45a1*/
        goto LABEL_12; /*0x1007c45a1*/
    }
    else
    {
      v9 = v70; /*0x1007c4435*/
      if ( v12 < 0x80 ) /*0x1007c4440*/
      {
LABEL_12:
        *(_BYTE *)(v9 + v6) = v12; /*0x1007c4446*/
LABEL_41:
        v10 += v13; /*0x1007c4620*/
        v71 = v10; /*0x1007c4623*/
        v11 = 0; /*0x1007c4627*/
        goto LABEL_4; /*0x1007c4629*/
      }
    }
    v20 = v12 & 0x3F | 0x80; /*0x1007c45b6*/
    v21 = v12 >> 6; /*0x1007c45bc*/
    if ( v12 >= 0x800 ) /*0x1007c45c6*/
    {
      v22 = v21 & 0x3F | 0x80; /*0x1007c45d7*/
      v23 = v12 >> 12; /*0x1007c45dd*/
      if ( v12 > 0xFFFF ) /*0x1007c45e7*/
      {
        *(_BYTE *)(v9 + v6) = (v12 >> 18) | 0xF0; /*0x1007c460b*/
        *(_BYTE *)(v9 + v6 + 1) = v23 & 0x3F | 0x80; /*0x1007c460f*/
        *(_BYTE *)(v9 + v6 + 2) = v22; /*0x1007c4614*/
        *(_BYTE *)(v9 + v6 + 3) = v20; /*0x1007c4618*/
      }
      else
      {
        *(_BYTE *)(v9 + v6) = v23 | 0xE0; /*0x1007c45ed*/
        *(_BYTE *)(v9 + v6 + 1) = v22; /*0x1007c45f1*/
        *(_BYTE *)(v9 + v6 + 2) = v20; /*0x1007c45f5*/
      }
    }
    else
    {
      *(_BYTE *)(v9 + v6) = v21 | 0xC0; /*0x1007c45cb*/
      *(_BYTE *)(v9 + v6 + 1) = v20; /*0x1007c45ce*/
    }
    goto LABEL_41; /*0x1007c45d2*/
  }
  v7 += 2; /*0x1007c44a2*/
  v6 = v15 | (unsigned int)(v14 << 6); /*0x1007c44a9*/
  v12 = v6; /*0x1007c44ab*/
  if ( (v11 & 1) != 0 ) /*0x1007c44b2*/
    goto LABEL_7; /*0x1007c44b2*/
LABEL_18:
  v11 = 1; /*0x1007c44c0*/
  if ( ((v12 == 92) & (unsigned __int8)v72) != 0 ) /*0x1007c44cd*/
  {
    LOBYTE(v6) = 1; /*0x1007c43d0*/
    v72 = v6; /*0x1007c43d2*/
    goto LABEL_4; /*0x1007c43d2*/
  }
  if ( v12 == 34 ) /*0x1007c44d7*/
    goto LABEL_83; /*0x1007c44d7*/
  if ( v12 == 46 ) /*0x1007c44e1*/
  {
    if ( (v72 & 1) == 0 ) /*0x1007c44e7*/
    {
LABEL_85:
      v39 = v70; /*0x1007c4928*/
      v40 = v70; /*0x1007c492c*/
      v41 = v10; /*0x1007c492f*/
      v42 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v70, v10); /*0x1007c4932*/
      v44 = v63; /*0x1007c493a*/
      if ( v43 >= 0 ) /*0x1007c493e*/
      {
        v45 = v43; /*0x1007c4944*/
        v68 = v39; /*0x1007c4947*/
        if ( !v43 ) /*0x1007c494b*/
        {
          v48 = 1; /*0x1007c4973*/
          goto LABEL_90; /*0x1007c4973*/
        }
        v46 = v42; /*0x1007c494d*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v41); /*0x1007c4950*/
        v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v45, 1); /*0x1007c495d*/
        if ( v47 ) /*0x1007c4965*/
        {
          v48 = v47; /*0x1007c496b*/
          v42 = v46; /*0x1007c496e*/
LABEL_90:
          memcpy((void *)v48, v42, v45); /*0x1007c4979*/
          v49 = v67; /*0x1007c4987*/
          if ( v67 == v65 ) /*0x1007c498f*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v65); /*0x1007c4995*/
          v6 = v66; /*0x1007c499a*/
          v50 = 3 * v49; /*0x1007c499e*/
          *(_QWORD *)(v66 + 8 * v50) = v45; /*0x1007c49a2*/
          v63 = v48; /*0x1007c49a6*/
          *(_QWORD *)(v6 + 8 * v50 + 8) = v48; /*0x1007c49aa*/
          *(_QWORD *)(v6 + 8 * v50 + 16) = v45; /*0x1007c49af*/
          v67 = v49 + 1; /*0x1007c49b7*/
          v71 = 0; /*0x1007c49bb*/
          v10 = 0; /*0x1007c49c3*/
          v11 = 0; /*0x1007c49c6*/
          v72 = 0; /*0x1007c49c8*/
          v9 = v68; /*0x1007c49d0*/
          goto LABEL_4; /*0x1007c49d4*/
        }
        v44 = v45; /*0x1007c4ab3*/
        goto LABEL_109; /*0x1007c4ab3*/
      }
LABEL_97:
      v54 = 0; /*0x1007c49ff*/
      goto LABEL_98; /*0x1007c49ff*/
    }
    goto LABEL_26; /*0x1007c44e7*/
  }
  if ( v12 < 0x80 ) /*0x1007c450d*/
  {
LABEL_26:
    v18 = 1; /*0x1007c450f*/
    LOBYTE(v6) = 1; /*0x1007c4514*/
    LODWORD(v68) = v6; /*0x1007c4516*/
    goto LABEL_31; /*0x1007c4519*/
  }
  if ( v12 >= 0x800 ) /*0x1007c4522*/
    v18 = 4LL - (v12 < 0x10000); /*0x1007c4537*/
  else
    v18 = 2; /*0x1007c4524*/
  LODWORD(v68) = 0; /*0x1007c453b*/
LABEL_31:
  v6 = v10; /*0x1007c4542*/
  if ( v18 <= v69 - v10 ) /*0x1007c454f*/
  {
    if ( (_BYTE)v68 ) /*0x1007c4559*/
      goto LABEL_33; /*0x1007c4559*/
    goto LABEL_43; /*0x1007c4559*/
  }
  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v69, v10, v18, 1, 1, a6); /*0x1007c4643*/
  v9 = v70; /*0x1007c4648*/
  v6 = v71; /*0x1007c464c*/
  if ( !(_BYTE)v68 ) /*0x1007c4654*/
  {
LABEL_43:
    v24 = v12 & 0x3F | 0x80; /*0x1007c465a*/
    v25 = v12 >> 6; /*0x1007c4666*/
    if ( v12 < 0x800 ) /*0x1007c4670*/
    {
      *(_BYTE *)(v9 + v6) = v25 | 0xC0; /*0x1007c4675*/
      *(_BYTE *)(v9 + v6 + 1) = v24; /*0x1007c4678*/
      v19 = v10 + v18; /*0x1007c467c*/
      v71 = v19; /*0x1007c467f*/
      if ( v7 != v8 ) /*0x1007c4686*/
        goto LABEL_53; /*0x1007c4686*/
      goto LABEL_94; /*0x1007c4686*/
    }
    v26 = v25 & 0x3F | 0x80; /*0x1007c4694*/
    v27 = v12 >> 12; /*0x1007c469a*/
    if ( v12 < 0x10000 ) /*0x1007c46a4*/
    {
      *(_BYTE *)(v9 + v6) = v27 | 0xE0; /*0x1007c46aa*/
      *(_BYTE *)(v9 + v6 + 1) = v26; /*0x1007c46ae*/
      *(_BYTE *)(v9 + v6 + 2) = v24; /*0x1007c46b2*/
      v19 = v10 + v18; /*0x1007c46b6*/
      v71 = v19; /*0x1007c46b9*/
      if ( v7 != v8 ) /*0x1007c46c0*/
        goto LABEL_53; /*0x1007c46c0*/
      goto LABEL_94; /*0x1007c46c0*/
    }
    *(_BYTE *)(v9 + v6) = (v12 >> 18) | 0xF0; /*0x1007c46d7*/
    *(_BYTE *)(v9 + v6 + 1) = v27 & 0x3F | 0x80; /*0x1007c46db*/
    *(_BYTE *)(v9 + v6 + 2) = v26; /*0x1007c46e0*/
    *(_BYTE *)(v9 + v6 + 3) = v24; /*0x1007c46e4*/
    v19 = v10 + v18; /*0x1007c46e8*/
    v71 = v19; /*0x1007c46eb*/
    if ( v7 == v8 ) /*0x1007c46f2*/
      goto LABEL_94; /*0x1007c46f2*/
    while ( 1 ) /*0x1007c4718*/
    {
LABEL_53:
      v28 = *v7; /*0x1007c4718*/
      if ( (v28 & 0x80u) != 0 ) /*0x1007c4720*/
      {
        v29 = v28 & 0x1F; /*0x1007c4743*/
        v30 = v7[1] & 0x3F; /*0x1007c474c*/
        if ( (unsigned __int8)v28 <= 0xDFu ) /*0x1007c4753*/
        {
          v7 += 2; /*0x1007c4797*/
          v6 = v30 | (unsigned int)(v29 << 6); /*0x1007c479e*/
          v28 = v6; /*0x1007c47a0*/
          if ( (((_DWORD)v6 == 92) & (unsigned __int8)v72) != 0 ) /*0x1007c47ad*/
            goto LABEL_81; /*0x1007c47ad*/
        }
        else
        {
          v31 = (v30 << 6) | v7[2] & 0x3F; /*0x1007c4761*/
          if ( (unsigned __int8)v28 < 0xF0u ) /*0x1007c4767*/
          {
            v7 += 3; /*0x1007c47b4*/
            v6 = (unsigned int)(v29 << 12); /*0x1007c47b8*/
            v28 = v6 | v31; /*0x1007c47bd*/
            if ( ((((unsigned int)v6 | v31) == 92) & (unsigned __int8)v72) != 0 ) /*0x1007c47ca*/
            {
LABEL_81:
              v10 = v19; /*0x1007c4900*/
              LOBYTE(v6) = 1; /*0x1007c4903*/
              v72 = v6; /*0x1007c4905*/
              v11 = 1; /*0x1007c4909*/
              goto LABEL_4; /*0x1007c490c*/
            }
          }
          else
          {
            v32 = v7[3]; /*0x1007c4769*/
            v7 += 4; /*0x1007c476f*/
            v6 = (unsigned __int8)(v29 & 7) << 18; /*0x1007c4776*/
            v28 = v6 | (v31 << 6) | v32 & 0x3F; /*0x1007c4783*/
            if ( ((v28 == 92) & (unsigned __int8)v72) != 0 ) /*0x1007c4790*/
              goto LABEL_81; /*0x1007c4790*/
          }
        }
      }
      else
      {
        ++v7; /*0x1007c4722*/
        if ( ((v28 == 92) & (unsigned __int8)v72) != 0 ) /*0x1007c472f*/
          goto LABEL_81; /*0x1007c472f*/
      }
      if ( v28 == 46 ) /*0x1007c47d4*/
        break; /*0x1007c47d4*/
      if ( v28 == 34 ) /*0x1007c47da*/
      {
        v10 = v19; /*0x1007c4911*/
LABEL_83:
        v6 = v72; /*0x1007c4914*/
        LOBYTE(v6) = v72 ^ 1; /*0x1007c4918*/
        v72 = v6; /*0x1007c491a*/
        v11 = 0; /*0x1007c491e*/
LABEL_4:
        if ( v7 == v8 ) /*0x1007c43d9*/
          goto LABEL_95; /*0x1007c43d9*/
        goto LABEL_5; /*0x1007c43d9*/
      }
      if ( v28 < 0x80 ) /*0x1007c47e7*/
        goto LABEL_69; /*0x1007c47e7*/
      if ( v28 >= 0x800 ) /*0x1007c47f0*/
        v33 = 4LL - (v28 < 0x10000); /*0x1007c4822*/
      else
        v33 = 2; /*0x1007c47f2*/
      v34 = 0; /*0x1007c4826*/
LABEL_72:
      v6 = v19; /*0x1007c4829*/
      if ( v33 > v69 - v19 ) /*0x1007c4836*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c48e5*/
          &v69,
          v19,
          v33,
          1,
          1,
          a6);
        v6 = v71; /*0x1007c48ea*/
        v9 = v70; /*0x1007c48ee*/
        if ( !v34 ) /*0x1007c48f5*/
        {
LABEL_74:
          v35 = v28 & 0x3F | 0x80; /*0x1007c4849*/
          v36 = v28 >> 6; /*0x1007c4855*/
          v8 = v64; /*0x1007c485f*/
          if ( v28 >= 0x800 ) /*0x1007c4863*/
          {
            v37 = v36 & 0x3F | 0x80; /*0x1007c4883*/
            v38 = v28 >> 12; /*0x1007c4889*/
            if ( v28 > 0xFFFF ) /*0x1007c4893*/
            {
              *(_BYTE *)(v9 + v6) = (v28 >> 18) | 0xF0; /*0x1007c48ba*/
              *(_BYTE *)(v9 + v6 + 1) = v38 & 0x3F | 0x80; /*0x1007c48be*/
              *(_BYTE *)(v9 + v6 + 2) = v37; /*0x1007c48c3*/
              *(_BYTE *)(v9 + v6 + 3) = v35; /*0x1007c48c7*/
            }
            else
            {
              *(_BYTE *)(v9 + v6) = v38 | 0xE0; /*0x1007c4899*/
              *(_BYTE *)(v9 + v6 + 1) = v37; /*0x1007c489d*/
              *(_BYTE *)(v9 + v6 + 2) = v35; /*0x1007c48a1*/
            }
          }
          else
          {
            *(_BYTE *)(v9 + v6) = v36 | 0xC0; /*0x1007c4868*/
            *(_BYTE *)(v9 + v6 + 1) = v35; /*0x1007c486b*/
          }
          goto LABEL_52; /*0x1007c486f*/
        }
      }
      else
      {
        v9 = v70; /*0x1007c483c*/
        if ( !v34 ) /*0x1007c4843*/
          goto LABEL_74; /*0x1007c4843*/
      }
      *(_BYTE *)(v9 + v6) = v28; /*0x1007c4700*/
      v8 = v64; /*0x1007c4704*/
LABEL_52:
      v19 += v33; /*0x1007c4708*/
      v71 = v19; /*0x1007c470b*/
      if ( v7 == v8 ) /*0x1007c4712*/
        goto LABEL_96; /*0x1007c4712*/
    }
    if ( (v72 & 1) == 0 ) /*0x1007c4804*/
    {
      v10 = v19; /*0x1007c4925*/
      goto LABEL_85; /*0x1007c4925*/
    }
LABEL_69:
    v33 = 1; /*0x1007c480a*/
    v34 = 1; /*0x1007c4810*/
    goto LABEL_72; /*0x1007c4813*/
  }
LABEL_33:
  *(_BYTE *)(v9 + v6) = v12; /*0x1007c455f*/
  v19 = v10 + v18; /*0x1007c4563*/
  v71 = v19; /*0x1007c4566*/
  if ( v7 != v8 ) /*0x1007c456d*/
    goto LABEL_53; /*0x1007c456d*/
LABEL_94:
  v10 = v19; /*0x1007c49e2*/
LABEL_95:
  v9 = v70; /*0x1007c49e5*/
  v19 = v10; /*0x1007c49e9*/
LABEL_96:
  v51 = v19; /*0x1007c49ec*/
  v52 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v9, v19); /*0x1007c49f2*/
  v44 = v53; /*0x1007c49f7*/
  if ( v53 < 0 ) /*0x1007c49fd*/
    goto LABEL_97; /*0x1007c49fd*/
  if ( v53 ) /*0x1007c4a0b*/
  {
    v55 = v52; /*0x1007c4a0d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v51); /*0x1007c4a10*/
    v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v44, 1); /*0x1007c4a1d*/
    if ( !v56 ) /*0x1007c4a25*/
    {
LABEL_109:
      v54 = 1; /*0x1007c4ab6*/
LABEL_98:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v54, v44); /*0x1007c4a01*/
    }
    v57 = v56; /*0x1007c4a2b*/
    v52 = v55; /*0x1007c4a2e*/
  }
  else
  {
    v57 = 1; /*0x1007c4a33*/
  }
  memcpy((void *)v57, v52, v44); /*0x1007c4a42*/
  v58 = v67; /*0x1007c4a47*/
  if ( v67 == v65 ) /*0x1007c4a4f*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v65); /*0x1007c4a55*/
  v59 = v66; /*0x1007c4a5a*/
  v60 = 3 * v58; /*0x1007c4a5e*/
  *(_QWORD *)(v66 + 8 * v60) = v44; /*0x1007c4a62*/
  *(_QWORD *)(v59 + 8 * v60 + 8) = v57; /*0x1007c4a66*/
  *(_QWORD *)(v59 + 8 * v60 + 16) = v44; /*0x1007c4a6b*/
  v67 = v58 + 1; /*0x1007c4a73*/
  a1[2] = v58 + 1; /*0x1007c4a7b*/
  result = v65; /*0x1007c4a7f*/
  a1[1] = v66; /*0x1007c4a87*/
  *a1 = result; /*0x1007c4a8b*/
  if ( v69 ) /*0x1007c4a95*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v69, 1); /*0x1007c4a9f*/
  return result; /*0x1007c4aa4*/
}