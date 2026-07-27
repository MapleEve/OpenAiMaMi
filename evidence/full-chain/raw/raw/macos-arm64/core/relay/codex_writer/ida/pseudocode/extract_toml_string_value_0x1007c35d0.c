// __ZN13codexmate_lib4core5relay12codex_writer25extract_toml_string_value @ 0x1007c35d0 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_writer::extract_toml_string_value::h9ef7877f06eef4d8(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 *v9; // rdx
  __int64 *v10; // r15
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int8 *v14; // rax
  __int64 v15; // rdx
  unsigned __int8 *v16; // r15
  __int64 v17; // r14
  __int64 v18; // r12
  unsigned __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int8 *v22; // r14
  __int64 *v23; // r12
  unsigned int v24; // ebx
  int v25; // ecx
  int v26; // esi
  int v27; // edx
  unsigned __int8 v28; // bl
  unsigned int v29; // ebx
  __int64 v30; // rax
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  unsigned __int8 v34; // bl
  unsigned __int64 v35; // r13
  __int64 *v36; // rcx
  char v37; // dl
  unsigned int v38; // esi
  char v39; // si
  unsigned int v40; // r8d
  __int64 *v41; // rcx
  __int64 *v42; // rcx
  __int64 *v43; // rcx
  __int64 *v44; // rcx
  char v45; // r8
  __int64 *v46; // rcx
  __int64 *v47; // rcx
  __int64 *v48; // rax
  unsigned __int64 *v49; // rdx
  int v50; // [rsp+8h] [rbp-98h] BYREF
  __int64 v51; // [rsp+10h] [rbp-90h]
  __int64 v52; // [rsp+18h] [rbp-88h]
  unsigned __int64 *v53; // [rsp+20h] [rbp-80h]
  __int64 v54; // [rsp+28h] [rbp-78h] BYREF
  __int64 v55; // [rsp+30h] [rbp-70h]
  __int64 *v56; // [rsp+38h] [rbp-68h]
  __int64 v57; // [rsp+40h] [rbp-60h] BYREF
  __int64 *v58; // [rsp+48h] [rbp-58h]
  __int64 v59; // [rsp+50h] [rbp-50h]
  __int64 *v60; // [rsp+58h] [rbp-48h]
  __int64 v61; // [rsp+60h] [rbp-40h]
  char v62; // [rsp+68h] [rbp-38h]
  __int16 v63; // [rsp+70h] [rbp-30h]

  v55 = 0; /*0x1007c35e4*/
  v56 = a3; /*0x1007c35ec*/
  v57 = a2; /*0x1007c35f4*/
  v58 = a3; /*0x1007c35f8*/
  v59 = 0; /*0x1007c35fc*/
  v60 = a3; /*0x1007c3604*/
  v61 = 0x3D0000003DLL; /*0x1007c3612*/
  v62 = 1; /*0x1007c3616*/
  v63 = 1; /*0x1007c361a*/
  v54 = 1; /*0x1007c3620*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c3632*/
    &v50,
    &v57);
  if ( v50 == 1 ) /*0x1007c363e*/
  {
    v4 = v52; /*0x1007c3640*/
    v55 = v52; /*0x1007c3647*/
  }
  else
  {
    if ( HIBYTE(v63) ) /*0x1007c3688*/
      goto LABEL_39; /*0x1007c3688*/
    HIBYTE(v63) = 1; /*0x1007c368e*/
    v4 = v55; /*0x1007c3692*/
    if ( !(_BYTE)v63 && v56 == (__int64 *)v55 ) /*0x1007c36a0*/
      goto LABEL_39; /*0x1007c36a0*/
  }
  if ( !v54 ) /*0x1007c3652*/
  {
LABEL_39:
    *a1 = 0x8000000000000000LL; /*0x1007c3802*/
    return 0x8000000000000000LL; /*0x1007c381d*/
  }
  if ( v54 == 1 ) /*0x1007c365c*/
  {
    if ( HIBYTE(v63) || !(_BYTE)v63 && v56 == (__int64 *)v4 ) /*0x1007c3675*/
      goto LABEL_39; /*0x1007c3675*/
    v5 = (__int64)v56 - v4; /*0x1007c367b*/
    goto LABEL_9; /*0x1007c367b*/
  }
  --v54; /*0x1007c36ab*/
  if ( HIBYTE(v63) ) /*0x1007c36b3*/
    goto LABEL_39; /*0x1007c36b3*/
  v7 = v57; /*0x1007c36b9*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c36c7*/
    &v50,
    &v57);
  if ( v50 != 1 ) /*0x1007c36d3*/
  {
    if ( HIBYTE(v63) ) /*0x1007c378a*/
      goto LABEL_39; /*0x1007c378a*/
    v4 = v55; /*0x1007c378c*/
    v5 = (__int64)v56 - v55; /*0x1007c3794*/
    if ( ((unsigned __int8)v63 | (v56 != (__int64 *)v55)) != 1 ) /*0x1007c379f*/
      goto LABEL_39; /*0x1007c379f*/
LABEL_9:
    v6 = v57 + v4; /*0x1007c367e*/
    goto LABEL_17; /*0x1007c3682*/
  }
  v5 = v51 - v55; /*0x1007c36e4*/
  v6 = v55 + v7; /*0x1007c36e7*/
LABEL_17:
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v5); /*0x1007c36ea*/
  v10 = v9; /*0x1007c36f5*/
  v55 = 0; /*0x1007c36f8*/
  v56 = v9; /*0x1007c3700*/
  v11 = &v57; /*0x1007c3704*/
  v57 = v8; /*0x1007c3708*/
  v58 = v9; /*0x1007c370c*/
  v59 = 0; /*0x1007c3710*/
  v60 = v9; /*0x1007c3718*/
  v61 = 0x2300000023LL; /*0x1007c3726*/
  v62 = 1; /*0x1007c372a*/
  v63 = 1; /*0x1007c372e*/
  v54 = 1; /*0x1007c3734*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c3743*/
    &v50,
    &v57);
  if ( v50 == 1 ) /*0x1007c374f*/
  {
    v11 = (__int64 *)(v51 - v55); /*0x1007c375c*/
    v12 = v8 + v55; /*0x1007c375f*/
  }
  else if ( HIBYTE(v63) || (v11 = (__int64 *)((char *)v56 - v55), ((unsigned __int8)v63 | (v56 != (__int64 *)v55)) != 1) ) /*0x1007c377e*/
  {
    v12 = 0; /*0x1007c37a7*/
  }
  else
  {
    v12 = v57 + v55; /*0x1007c3780*/
  }
  if ( v12 ) /*0x1007c37ac*/
    v8 = v12; /*0x1007c37b0*/
  else
    v11 = v10; /*0x1007c37ac*/
  v13 = v8; /*0x1007c37b4*/
  v14 = (unsigned __int8 *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v8, v11); /*0x1007c37b7*/
  if ( !v15 ) /*0x1007c37bf*/
    goto LABEL_39; /*0x1007c37bf*/
  v16 = v14; /*0x1007c37c1*/
  v17 = v15; /*0x1007c37c4*/
  if ( *v14 == 34 ) /*0x1007c37ca*/
  {
    if ( v15 == 1 ) /*0x1007c37d0*/
    {
      v53 = a1; /*0x1007c37d2*/
      v17 = 1; /*0x1007c37d6*/
      goto LABEL_41; /*0x1007c37dc*/
    }
    if ( v14[v15 - 1] == 34 ) /*0x1007c37e4*/
    {
      v17 = v15 - 2; /*0x1007c37e6*/
      if ( v15 != 2 ) /*0x1007c37ea*/
      {
        v16 = v14 + 1; /*0x1007c37ec*/
        goto LABEL_36; /*0x1007c37ec*/
      }
      goto LABEL_39; /*0x1007c37ea*/
    }
  }
LABEL_36:
  if ( v17 < 0 ) /*0x1007c37f2*/
  {
    v18 = 0; /*0x1007c37f4*/
    goto LABEL_38; /*0x1007c37f4*/
  }
  v53 = a1; /*0x1007c381e*/
LABEL_41:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v11); /*0x1007c3822*/
  v18 = 1; /*0x1007c3827*/
  v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x1007c3835*/
  if ( !v20 ) /*0x1007c383d*/
LABEL_38:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v17); /*0x1007c37f7*/
  v54 = v17; /*0x1007c383f*/
  v55 = v20; /*0x1007c3843*/
  v56 = nullptr; /*0x1007c3847*/
  v22 = &v16[v17]; /*0x1007c384f*/
  v23 = nullptr; /*0x1007c3852*/
  while ( 1 ) /*0x1007c3873*/
  {
    v24 = *v16; /*0x1007c3873*/
    if ( (v24 & 0x80u) == 0 ) /*0x1007c3879*/
    {
      ++v16; /*0x1007c387b*/
      if ( v24 == 92 ) /*0x1007c3881*/
        goto LABEL_54; /*0x1007c3881*/
      goto LABEL_63; /*0x1007c3881*/
    }
    v25 = v24 & 0x1F; /*0x1007c3892*/
    v26 = v16[1] & 0x3F; /*0x1007c389a*/
    if ( (unsigned __int8)v24 > 0xDFu ) /*0x1007c38a0*/
      break; /*0x1007c38a0*/
    v16 += 2; /*0x1007c38db*/
    v24 = v26 | (v25 << 6); /*0x1007c38e4*/
    if ( v24 == 92 ) /*0x1007c38e9*/
      goto LABEL_54; /*0x1007c38e9*/
LABEL_63:
    v35 = 1; /*0x1007c3980*/
    if ( v24 >= 0x80 ) /*0x1007c398c*/
    {
      v35 = 2; /*0x1007c398e*/
      if ( v24 >= 0x800 ) /*0x1007c399a*/
        v35 = 4LL - (v24 < 0x10000); /*0x1007c39a8*/
    }
    v36 = v23; /*0x1007c39b3*/
    if ( v35 > v54 - (__int64)v23 ) /*0x1007c39b9*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v54, v23, v35, 1, 1, v21); /*0x1007c3b9d*/
      v20 = v55; /*0x1007c3ba2*/
      v36 = v56; /*0x1007c3ba6*/
      if ( v24 >= 0x80 ) /*0x1007c3bb4*/
      {
LABEL_68:
        v37 = v24 & 0x3F | 0x80; /*0x1007c39cb*/
        v38 = v24 >> 6; /*0x1007c39d5*/
        if ( v24 >= 0x800 ) /*0x1007c39de*/
        {
          v39 = v38 & 0x3F | 0x80; /*0x1007c39f5*/
          v40 = v24 >> 12; /*0x1007c39fc*/
          if ( v24 > 0xFFFF ) /*0x1007c3a06*/
          {
            v45 = v40 & 0x3F | 0x80; /*0x1007c3ac8*/
            *((_BYTE *)v36 + v20) = (v24 >> 18) | 0xF0; /*0x1007c3ad2*/
LABEL_87:
            *((_BYTE *)v36 + v20 + 1) = v45; /*0x1007c3ad5*/
            *((_BYTE *)v36 + v20 + 2) = v39; /*0x1007c3ada*/
            *((_BYTE *)v36 + v20 + 3) = v37; /*0x1007c3adf*/
            goto LABEL_44; /*0x1007c3ae3*/
          }
LABEL_71:
          *((_BYTE *)v36 + v20) = v40 | 0xE0; /*0x1007c3a0c*/
          *((_BYTE *)v36 + v20 + 1) = v39; /*0x1007c3a14*/
          *((_BYTE *)v36 + v20 + 2) = v37; /*0x1007c3a19*/
          goto LABEL_44; /*0x1007c3a1d*/
        }
LABEL_69:
        *((_BYTE *)v36 + v20) = v38 | 0xC0; /*0x1007c39e0*/
        *((_BYTE *)v36 + v20 + 1) = v37; /*0x1007c39e8*/
        goto LABEL_44; /*0x1007c39ec*/
      }
    }
    else if ( v24 >= 0x80 ) /*0x1007c39c5*/
    {
      goto LABEL_68; /*0x1007c39c5*/
    }
    *((_BYTE *)v36 + v20) = v24; /*0x1007c3860*/
LABEL_44:
    v23 = (__int64 *)((char *)v23 + v35); /*0x1007c3863*/
LABEL_45:
    v56 = v23; /*0x1007c3866*/
    if ( v16 == v22 ) /*0x1007c386d*/
      goto LABEL_110; /*0x1007c386d*/
  }
  v27 = (v26 << 6) | v16[2] & 0x3F; /*0x1007c38ad*/
  if ( (unsigned __int8)v24 >= 0xF0u ) /*0x1007c38b2*/
  {
    v28 = v16[3]; /*0x1007c38b8*/
    v16 += 4; /*0x1007c38bd*/
    v24 = ((v25 & 7) << 18) | (v27 << 6) | v28 & 0x3F; /*0x1007c38cf*/
    if ( v24 == 92 ) /*0x1007c38d4*/
      goto LABEL_54; /*0x1007c38d4*/
    goto LABEL_63; /*0x1007c38d4*/
  }
  v16 += 3; /*0x1007c396b*/
  v24 = (v25 << 12) | v27; /*0x1007c3974*/
  if ( v24 != 92 ) /*0x1007c3979*/
    goto LABEL_63; /*0x1007c3979*/
LABEL_54:
  if ( v16 != v22 ) /*0x1007c38f3*/
  {
    v29 = *v16; /*0x1007c38f9*/
    if ( (v29 & 0x80u) != 0 ) /*0x1007c38ff*/
    {
      v31 = v29 & 0x1F; /*0x1007c3917*/
      v32 = v16[1] & 0x3F; /*0x1007c391f*/
      if ( (unsigned __int8)v29 <= 0xDFu ) /*0x1007c3925*/
      {
        v16 += 2; /*0x1007c3a22*/
        v29 = v32 | (v31 << 6); /*0x1007c3a2b*/
        v30 = v29 - 92; /*0x1007c3a2d*/
LABEL_73:
        switch ( v30 ) /*0x1007c3a4e*/
        {
          case 0LL: /*0x1007c3a4e*/
            v41 = v23; /*0x1007c3a50*/
            if ( (__int64 *)v54 == v23 ) /*0x1007c3a57*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c3c9b*/
                &v54,
                v23,
                1,
                1,
                1,
                v21);
              v41 = v56; /*0x1007c3ca0*/
            }
            v20 = v55; /*0x1007c3a5d*/
            *((_BYTE *)v41 + v55) = 92; /*0x1007c3a61*/
            v23 = (__int64 *)((char *)v23 + 1); /*0x1007c3a65*/
            break; /*0x1007c3a68*/
          case 1LL: /*0x1007c3a4e*/
          case 2LL: /*0x1007c3a4e*/
          case 3LL: /*0x1007c3a4e*/
          case 4LL: /*0x1007c3a4e*/
          case 5LL: /*0x1007c3a4e*/
          case 6LL: /*0x1007c3a4e*/
          case 7LL: /*0x1007c3a4e*/
          case 8LL: /*0x1007c3a4e*/
          case 9LL: /*0x1007c3a4e*/
          case 10LL: /*0x1007c3a4e*/
          case 11LL: /*0x1007c3a4e*/
          case 12LL: /*0x1007c3a4e*/
          case 13LL: /*0x1007c3a4e*/
          case 14LL: /*0x1007c3a4e*/
          case 15LL: /*0x1007c3a4e*/
          case 16LL: /*0x1007c3a4e*/
          case 17LL: /*0x1007c3a4e*/
          case 19LL: /*0x1007c3a4e*/
          case 20LL: /*0x1007c3a4e*/
          case 21LL: /*0x1007c3a4e*/
          case 23LL: /*0x1007c3a4e*/
            goto LABEL_93;
          case 18LL: /*0x1007c3a4e*/
            v44 = v23; /*0x1007c3aa7*/
            if ( (__int64 *)v54 == v23 ) /*0x1007c3aae*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c3ce9*/
                &v54,
                v23,
                1,
                1,
                1,
                v21);
              v44 = v56; /*0x1007c3cee*/
            }
            v20 = v55; /*0x1007c3ab4*/
            *((_BYTE *)v44 + v55) = 10; /*0x1007c3ab8*/
            v23 = (__int64 *)((char *)v23 + 1); /*0x1007c3abc*/
            break; /*0x1007c3abf*/
          case 22LL: /*0x1007c3a4e*/
            v42 = v23; /*0x1007c3a6d*/
            if ( (__int64 *)v54 == v23 ) /*0x1007c3a74*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c3c74*/
                &v54,
                v23,
                1,
                1,
                1,
                v21);
              v42 = v56; /*0x1007c3c79*/
            }
            v20 = v55; /*0x1007c3a7a*/
            *((_BYTE *)v42 + v55) = 13; /*0x1007c3a7e*/
            v23 = (__int64 *)((char *)v23 + 1); /*0x1007c3a82*/
            break; /*0x1007c3a85*/
          case 24LL: /*0x1007c3a4e*/
            v43 = v23; /*0x1007c3a8a*/
            if ( (__int64 *)v54 == v23 ) /*0x1007c3a91*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c3cc2*/
                &v54,
                v23,
                1,
                1,
                1,
                v21);
              v43 = v56; /*0x1007c3cc7*/
            }
            v20 = v55; /*0x1007c3a97*/
            *((_BYTE *)v43 + v55) = 9; /*0x1007c3a9b*/
            v23 = (__int64 *)((char *)v23 + 1); /*0x1007c3a9f*/
            break; /*0x1007c3aa2*/
          default:
            goto LABEL_89;
        }
        goto LABEL_45; /*0x1007c3aa2*/
      }
      v33 = (v32 << 6) | v16[2] & 0x3F; /*0x1007c3936*/
      if ( (unsigned __int8)v29 < 0xF0u ) /*0x1007c393b*/
      {
        v16 += 3; /*0x1007c3ae8*/
        v29 = (v31 << 12) | v33; /*0x1007c3af1*/
        v30 = v29 - 92; /*0x1007c3af3*/
        if ( (unsigned int)v30 <= 0x18 ) /*0x1007c3af9*/
          goto LABEL_73; /*0x1007c3af9*/
      }
      else
      {
        v34 = v16[3]; /*0x1007c3941*/
        v16 += 4; /*0x1007c3946*/
        v29 = ((v31 & 7) << 18) | (v33 << 6) | v34 & 0x3F; /*0x1007c3958*/
        v30 = v29 - 92; /*0x1007c395a*/
        if ( (unsigned int)v30 <= 0x18 ) /*0x1007c3960*/
          goto LABEL_73; /*0x1007c3960*/
      }
    }
    else
    {
      ++v16; /*0x1007c3901*/
      v30 = v29 - 92; /*0x1007c3904*/
      if ( (unsigned int)v30 <= 0x18 ) /*0x1007c390a*/
        goto LABEL_73; /*0x1007c390a*/
    }
LABEL_89:
    if ( v29 == 34 ) /*0x1007c3b02*/
    {
      v46 = v23; /*0x1007c3b04*/
      if ( (__int64 *)v54 == v23 ) /*0x1007c3b0b*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v54, v23, 1, 1, 1, v21); /*0x1007c3d10*/
        v46 = v56; /*0x1007c3d15*/
      }
      v20 = v55; /*0x1007c3b11*/
      *((_BYTE *)v46 + v55) = 34; /*0x1007c3b15*/
      v23 = (__int64 *)((char *)v23 + 1); /*0x1007c3b19*/
      goto LABEL_45; /*0x1007c3b1c*/
    }
LABEL_93:
    v47 = v23; /*0x1007c3b21*/
    if ( (__int64 *)v54 == v23 ) /*0x1007c3b28*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v54, v23, 1, 1, 1, v21); /*0x1007c3bd5*/
      v47 = v56; /*0x1007c3bda*/
    }
    v20 = v55; /*0x1007c3b2e*/
    *((_BYTE *)v47 + v55) = 92; /*0x1007c3b32*/
    v23 = (__int64 *)((char *)v23 + 1); /*0x1007c3b36*/
    v56 = v23; /*0x1007c3b39*/
    v35 = 1; /*0x1007c3b3d*/
    if ( v29 >= 0x80 ) /*0x1007c3b49*/
    {
      v35 = 2; /*0x1007c3b4b*/
      if ( v29 >= 0x800 ) /*0x1007c3b57*/
        v35 = 4LL - (v29 < 0x10000); /*0x1007c3b65*/
    }
    v36 = v23; /*0x1007c3b70*/
    if ( v35 > v54 - (__int64)v23 ) /*0x1007c3b76*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v54, v23, v35, 1, 1, v21); /*0x1007c3bf7*/
      v20 = v55; /*0x1007c3bfc*/
      v36 = v56; /*0x1007c3c00*/
      if ( v29 < 0x80 ) /*0x1007c3c0e*/
      {
LABEL_100:
        *((_BYTE *)v36 + v20) = v29; /*0x1007c3b84*/
        goto LABEL_44; /*0x1007c3b87*/
      }
    }
    else if ( v29 < 0x80 ) /*0x1007c3b7e*/
    {
      goto LABEL_100; /*0x1007c3b7e*/
    }
    v37 = v29 & 0x3F | 0x80; /*0x1007c3c19*/
    v38 = v29 >> 6; /*0x1007c3c1e*/
    if ( v29 >= 0x800 ) /*0x1007c3c27*/
    {
      v39 = v38 & 0x3F | 0x80; /*0x1007c3c31*/
      v40 = v29 >> 12; /*0x1007c3c38*/
      if ( v29 > 0xFFFF ) /*0x1007c3c42*/
      {
        v45 = v40 & 0x3F | 0x80; /*0x1007c3c4c*/
        *((_BYTE *)v36 + v20) = (v29 >> 18) | 0xF0; /*0x1007c3c56*/
        goto LABEL_87; /*0x1007c3c59*/
      }
      goto LABEL_71; /*0x1007c3c42*/
    }
    goto LABEL_69; /*0x1007c3c27*/
  }
  v48 = v23; /*0x1007c3d21*/
  if ( (__int64 *)v54 == v23 ) /*0x1007c3d28*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v54, v23, 1, 1, 1, v21); /*0x1007c3d70*/
    v48 = v56; /*0x1007c3d75*/
  }
  *((_BYTE *)v48 + v55) = 92; /*0x1007c3d2e*/
  v56 = (__int64 *)((char *)v23 + 1); /*0x1007c3d35*/
LABEL_110:
  v49 = v53; /*0x1007c3d39*/
  v53[2] = (unsigned __int64)v56; /*0x1007c3d41*/
  result = v54; /*0x1007c3d45*/
  v49[1] = v55; /*0x1007c3d4d*/
  *v49 = result; /*0x1007c3d51*/
  return result; /*0x1007c380f*/
}