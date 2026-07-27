// __ZN13codexmate_lib4core5relay16codex_diagnostic26unescape_toml_basic_string @ 0x100500180 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::unescape_toml_basic_string::h71fa7a97db3de3a3(
        __int64 *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  __int64 v4; // r15
  unsigned __int8 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int8 *v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // esi
  int v13; // edx
  unsigned __int8 v14; // bl
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  unsigned __int8 v21; // bl
  unsigned __int64 v22; // r13
  __int64 v23; // rcx
  char v24; // dl
  unsigned int v25; // esi
  char v26; // si
  unsigned int v27; // r8d
  __int64 v28; // rcx
  char v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 result; // rax
  __int64 v39; // [rsp+10h] [rbp-40h] BYREF
  __int64 v40; // [rsp+18h] [rbp-38h]
  __int64 v41; // [rsp+20h] [rbp-30h]

  if ( a3 < 0 ) /*0x100500197*/
  {
    v4 = 0; /*0x100500199*/
    goto LABEL_3; /*0x100500199*/
  }
  if ( !a3 ) /*0x1005001ab*/
  {
    v39 = 0; /*0x100500755*/
    v40 = 1; /*0x10050075d*/
    v41 = 0; /*0x100500765*/
    goto LABEL_81; /*0x10050076d*/
  }
  v5 = a2; /*0x1005001b1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005001b4*/
  v4 = 1; /*0x1005001b9*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1005001c7*/
  if ( !v6 ) /*0x1005001cf*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x10050019c*/
  v39 = a3; /*0x1005001d1*/
  v40 = v6; /*0x1005001d5*/
  v41 = 0; /*0x1005001d9*/
  v8 = &a2[a3]; /*0x1005001e1*/
  v9 = 0; /*0x1005001e4*/
  while ( 1 ) /*0x100500203*/
  {
    v10 = *v5; /*0x100500203*/
    if ( (v10 & 0x80u) == 0 ) /*0x10050020a*/
    {
      ++v5; /*0x10050020c*/
      if ( v10 == 92 ) /*0x100500212*/
        goto LABEL_18; /*0x100500212*/
      goto LABEL_27; /*0x100500212*/
    }
    v11 = v10 & 0x1F; /*0x100500222*/
    v12 = v5[1] & 0x3F; /*0x10050022b*/
    if ( (unsigned __int8)v10 > 0xDFu ) /*0x100500231*/
      break; /*0x100500231*/
    v5 += 2; /*0x10050026e*/
    v10 = v12 | (v11 << 6); /*0x100500277*/
    if ( v10 == 92 ) /*0x10050027c*/
      goto LABEL_18; /*0x10050027c*/
LABEL_27:
    v22 = 1; /*0x100500330*/
    if ( v10 >= 0x80 ) /*0x10050033c*/
    {
      v22 = 2; /*0x10050033e*/
      if ( v10 >= 0x800 ) /*0x10050034a*/
        v22 = 4LL - (v10 < 0x10000); /*0x100500358*/
    }
    v23 = v9; /*0x100500363*/
    if ( v22 > v39 - v9 ) /*0x100500369*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v39, v9, v22, 1, 1, v7); /*0x100500583*/
      v6 = v40; /*0x100500588*/
      v23 = v41; /*0x10050058c*/
      if ( v10 >= 0x80 ) /*0x10050059a*/
      {
LABEL_32:
        v24 = v10 & 0x3F | 0x80; /*0x10050037b*/
        v25 = v10 >> 6; /*0x100500385*/
        if ( v10 >= 0x800 ) /*0x10050038e*/
        {
          v26 = v25 & 0x3F | 0x80; /*0x1005003a5*/
          v27 = v10 >> 12; /*0x1005003ac*/
          if ( v10 > 0xFFFF ) /*0x1005003b6*/
          {
            v29 = v27 & 0x3F | 0x80; /*0x100500420*/
            *(_BYTE *)(v6 + v23) = (v10 >> 18) | 0xF0; /*0x10050042a*/
LABEL_42:
            *(_BYTE *)(v6 + v23 + 1) = v29; /*0x10050042d*/
            *(_BYTE *)(v6 + v23 + 2) = v26; /*0x100500432*/
            *(_BYTE *)(v6 + v23 + 3) = v24; /*0x100500437*/
            goto LABEL_8; /*0x10050043b*/
          }
LABEL_35:
          *(_BYTE *)(v6 + v23) = v27 | 0xE0; /*0x1005003b8*/
          *(_BYTE *)(v6 + v23 + 1) = v26; /*0x1005003c0*/
          *(_BYTE *)(v6 + v23 + 2) = v24; /*0x1005003c5*/
          goto LABEL_8; /*0x1005003c9*/
        }
LABEL_33:
        *(_BYTE *)(v6 + v23) = v25 | 0xC0; /*0x100500390*/
        *(_BYTE *)(v6 + v23 + 1) = v24; /*0x100500398*/
        goto LABEL_8; /*0x10050039c*/
      }
    }
    else if ( v10 >= 0x80 ) /*0x100500375*/
    {
      goto LABEL_32; /*0x100500375*/
    }
    *(_BYTE *)(v6 + v23) = v10; /*0x1005001f0*/
LABEL_8:
    v9 += v22; /*0x1005001f3*/
LABEL_9:
    v41 = v9; /*0x1005001f6*/
    if ( v5 == v8 ) /*0x1005001fd*/
      goto LABEL_81; /*0x1005001fd*/
  }
  v13 = (v12 << 6) | v5[2] & 0x3F; /*0x10050023f*/
  if ( (unsigned __int8)v10 >= 0xF0u ) /*0x100500244*/
  {
    v14 = v5[3]; /*0x10050024a*/
    v5 += 4; /*0x100500250*/
    v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F; /*0x100500262*/
    if ( v10 == 92 ) /*0x100500267*/
      goto LABEL_18; /*0x100500267*/
    goto LABEL_27; /*0x100500267*/
  }
  v5 += 3; /*0x100500317*/
  v10 = (v11 << 12) | v13; /*0x100500320*/
  if ( v10 != 92 ) /*0x100500325*/
    goto LABEL_27; /*0x100500325*/
LABEL_18:
  if ( v5 != v8 ) /*0x100500293*/
  {
    v15 = *v5; /*0x100500299*/
    if ( (v15 & 0x80u) != 0 ) /*0x1005002a0*/
    {
      v18 = v15 & 0x1F; /*0x1005002bc*/
      v19 = v5[1] & 0x3F; /*0x1005002c5*/
      if ( (unsigned __int8)v15 <= 0xDFu ) /*0x1005002cb*/
      {
        v5 += 2; /*0x1005003ce*/
        v15 = v19 | (v18 << 6); /*0x1005003d7*/
        v16 = v39; /*0x1005003d9*/
        v17 = v15 - 92; /*0x1005003dd*/
LABEL_37:
        switch ( v17 ) /*0x1005003fe*/
        {
          case 0LL: /*0x1005003fe*/
            v28 = v9; /*0x100500400*/
            if ( v16 == v9 ) /*0x100500406*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005006cf*/
                &v39,
                v9,
                1,
                1,
                1,
                v7);
              v28 = v41; /*0x1005006d4*/
            }
            v6 = v40; /*0x10050040c*/
            *(_BYTE *)(v40 + v28) = 92; /*0x100500410*/
            ++v9; /*0x100500414*/
            break; /*0x100500417*/
          case 1LL: /*0x1005003fe*/
          case 2LL: /*0x1005003fe*/
          case 3LL: /*0x1005003fe*/
          case 4LL: /*0x1005003fe*/
          case 5LL: /*0x1005003fe*/
          case 7LL: /*0x1005003fe*/
          case 8LL: /*0x1005003fe*/
          case 9LL: /*0x1005003fe*/
          case 11LL: /*0x1005003fe*/
          case 12LL: /*0x1005003fe*/
          case 13LL: /*0x1005003fe*/
          case 14LL: /*0x1005003fe*/
          case 15LL: /*0x1005003fe*/
          case 16LL: /*0x1005003fe*/
          case 17LL: /*0x1005003fe*/
          case 19LL: /*0x1005003fe*/
          case 20LL: /*0x1005003fe*/
          case 21LL: /*0x1005003fe*/
          case 23LL: /*0x1005003fe*/
            goto LABEL_63;
          case 6LL: /*0x1005003fe*/
            v33 = v9; /*0x100500494*/
            if ( v16 == v9 ) /*0x10050049a*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005006f6*/
                &v39,
                v9,
                1,
                1,
                1,
                v7);
              v33 = v41; /*0x1005006fb*/
            }
            v6 = v40; /*0x1005004a0*/
            *(_BYTE *)(v40 + v33) = 8; /*0x1005004a4*/
            ++v9; /*0x1005004a8*/
            break; /*0x1005004ab*/
          case 10LL: /*0x1005003fe*/
            v30 = v9; /*0x100500440*/
            if ( v16 == v9 ) /*0x100500446*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10050065a*/
                &v39,
                v9,
                1,
                1,
                1,
                v7);
              v30 = v41; /*0x10050065f*/
            }
            v6 = v40; /*0x10050044c*/
            *(_BYTE *)(v40 + v30) = 12; /*0x100500450*/
            ++v9; /*0x100500454*/
            break; /*0x100500457*/
          case 18LL: /*0x1005003fe*/
            v32 = v9; /*0x100500478*/
            if ( v16 == v9 ) /*0x10050047e*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005006a8*/
                &v39,
                v9,
                1,
                1,
                1,
                v7);
              v32 = v41; /*0x1005006ad*/
            }
            v6 = v40; /*0x100500484*/
            *(_BYTE *)(v40 + v32) = 10; /*0x100500488*/
            ++v9; /*0x10050048c*/
            break; /*0x10050048f*/
          case 22LL: /*0x1005003fe*/
            v34 = v9; /*0x1005004b0*/
            if ( v16 == v9 ) /*0x1005004b6*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10050071d*/
                &v39,
                v9,
                1,
                1,
                1,
                v7);
              v34 = v41; /*0x100500722*/
            }
            v6 = v40; /*0x1005004bc*/
            *(_BYTE *)(v40 + v34) = 13; /*0x1005004c0*/
            ++v9; /*0x1005004c4*/
            break; /*0x1005004c7*/
          case 24LL: /*0x1005003fe*/
            v31 = v9; /*0x10050045c*/
            if ( v16 == v9 ) /*0x100500462*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100500681*/
                &v39,
                v9,
                1,
                1,
                1,
                v7);
              v31 = v41; /*0x100500686*/
            }
            v6 = v40; /*0x100500468*/
            *(_BYTE *)(v40 + v31) = 9; /*0x10050046c*/
            ++v9; /*0x100500470*/
            break; /*0x100500473*/
          default:
            goto LABEL_59;
        }
        goto LABEL_9; /*0x100500473*/
      }
      v20 = (v19 << 6) | v5[2] & 0x3F; /*0x1005002dd*/
      if ( (unsigned __int8)v15 < 0xF0u ) /*0x1005002e2*/
      {
        v5 += 3; /*0x1005004cc*/
        v15 = (v18 << 12) | v20; /*0x1005004d5*/
        v16 = v39; /*0x1005004d7*/
        v17 = v15 - 92; /*0x1005004db*/
        if ( (unsigned int)v17 <= 0x18 ) /*0x1005004e1*/
          goto LABEL_37; /*0x1005004e1*/
      }
      else
      {
        v21 = v5[3]; /*0x1005002e8*/
        v5 += 4; /*0x1005002ee*/
        v15 = ((v18 & 7) << 18) | (v20 << 6) | v21 & 0x3F; /*0x100500300*/
        v16 = v39; /*0x100500302*/
        v17 = v15 - 92; /*0x100500306*/
        if ( (unsigned int)v17 <= 0x18 ) /*0x10050030c*/
          goto LABEL_37; /*0x10050030c*/
      }
    }
    else
    {
      ++v5; /*0x1005002a2*/
      v16 = v39; /*0x1005002a5*/
      v17 = v15 - 92; /*0x1005002a9*/
      if ( (unsigned int)v17 <= 0x18 ) /*0x1005002af*/
        goto LABEL_37; /*0x1005002af*/
    }
LABEL_59:
    if ( v15 == 34 ) /*0x1005004ea*/
    {
      v35 = v9; /*0x1005004ec*/
      if ( v16 == v9 ) /*0x1005004f2*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v39, v9, 1, 1, 1, v7); /*0x100500744*/
        v35 = v41; /*0x100500749*/
      }
      v6 = v40; /*0x1005004f8*/
      *(_BYTE *)(v40 + v35) = 34; /*0x1005004fc*/
      ++v9; /*0x100500500*/
      goto LABEL_9; /*0x100500503*/
    }
LABEL_63:
    v36 = v9; /*0x100500508*/
    if ( v16 == v9 ) /*0x10050050e*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v39, v9, 1, 1, 1, v7); /*0x1005005bb*/
      v36 = v41; /*0x1005005c0*/
    }
    v6 = v40; /*0x100500514*/
    *(_BYTE *)(v40 + v36) = 92; /*0x100500518*/
    v41 = ++v9; /*0x10050051f*/
    v22 = 1; /*0x100500523*/
    if ( v15 >= 0x80 ) /*0x10050052f*/
    {
      v22 = 2; /*0x100500531*/
      if ( v15 >= 0x800 ) /*0x10050053d*/
        v22 = 4LL - (v15 < 0x10000); /*0x10050054b*/
    }
    v23 = v9; /*0x100500556*/
    if ( v22 > v39 - v9 ) /*0x10050055c*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v39, v9, v22, 1, 1, v7); /*0x1005005dd*/
      v6 = v40; /*0x1005005e2*/
      v23 = v41; /*0x1005005e6*/
      if ( v15 < 0x80 ) /*0x1005005f4*/
      {
LABEL_70:
        *(_BYTE *)(v6 + v23) = v15; /*0x10050056a*/
        goto LABEL_8; /*0x10050056d*/
      }
    }
    else if ( v15 < 0x80 ) /*0x100500564*/
    {
      goto LABEL_70; /*0x100500564*/
    }
    v24 = v15 & 0x3F | 0x80; /*0x1005005ff*/
    v25 = v15 >> 6; /*0x100500604*/
    if ( v15 >= 0x800 ) /*0x10050060d*/
    {
      v26 = v25 & 0x3F | 0x80; /*0x100500617*/
      v27 = v15 >> 12; /*0x10050061e*/
      if ( v15 > 0xFFFF ) /*0x100500628*/
      {
        v29 = v27 & 0x3F | 0x80; /*0x100500632*/
        *(_BYTE *)(v6 + v23) = (v15 >> 18) | 0xF0; /*0x10050063c*/
        goto LABEL_42; /*0x10050063f*/
      }
      goto LABEL_35; /*0x100500628*/
    }
    goto LABEL_33; /*0x10050060d*/
  }
  v37 = v9; /*0x10050076f*/
  if ( v39 == v9 ) /*0x100500776*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v39, v9, 1, 1, 1, v7); /*0x1005007c8*/
    v37 = v41; /*0x1005007cd*/
  }
  *(_BYTE *)(v40 + v37) = 92; /*0x10050077c*/
  v41 = v9 + 1; /*0x100500783*/
LABEL_81:
  a1[2] = v41; /*0x100500787*/
  result = v39; /*0x100500793*/
  a1[1] = v40; /*0x10050079b*/
  *a1 = result; /*0x10050079f*/
  return result; /*0x1005007a2*/
}