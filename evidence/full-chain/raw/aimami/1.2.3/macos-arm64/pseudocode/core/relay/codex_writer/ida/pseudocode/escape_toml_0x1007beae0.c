// __ZN13codexmate_lib4core5relay12codex_writer11escape_toml @ 0x1007beae0 | 基线 same-set
unsigned __int8 *__fastcall codexmate_lib::core::relay::codex_writer::escape_toml::ha83802857195c924(
        _QWORD *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v6; // rbx
  __int64 v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // rdx
  unsigned __int8 *result; // rax
  __int64 v14; // r12
  unsigned int v15; // r14d
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned __int8 v20; // r14
  __int64 v21; // r9
  const void *v22; // r14
  size_t v23; // rbx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  char v26; // cl
  unsigned int v27; // edx
  char v28; // dl
  unsigned int v29; // esi
  _QWORD v30[2]; // [rsp+8h] [rbp-88h] BYREF
  size_t __n; // [rsp+18h] [rbp-78h]
  _QWORD v32[2]; // [rsp+20h] [rbp-70h] BYREF
  _QWORD *v33; // [rsp+30h] [rbp-60h]
  unsigned __int8 *v34; // [rsp+38h] [rbp-58h]
  unsigned int v35; // [rsp+44h] [rbp-4Ch] BYREF
  __int64 v36; // [rsp+48h] [rbp-48h]
  unsigned __int8 *v37; // [rsp+50h] [rbp-40h] BYREF
  __int64 v38; // [rsp+58h] [rbp-38h]
  __int64 v39; // [rsp+60h] [rbp-30h]

  v6 = a3 + 2; /*0x1007beaf4*/
  if ( (__int64)(a3 + 2) < 0 ) /*0x1007beaf8*/
  {
    v7 = 0; /*0x1007beafa*/
    goto LABEL_3; /*0x1007beafa*/
  }
  v8 = a2; /*0x1007beb08*/
  v33 = a1; /*0x1007beb0b*/
  v34 = a3; /*0x1007beb0f*/
  if ( a3 == (unsigned __int8 *)-2LL ) /*0x1007beb13*/
  {
    v37 = nullptr; /*0x1007beb77*/
    v38 = 1; /*0x1007beb7f*/
    v39 = 0; /*0x1007beb87*/
    v11 = 1; /*0x1007beb8f*/
LABEL_9:
    v34 = &v34[(_QWORD)a2]; /*0x1007beb95*/
    v14 = 0; /*0x1007beb99*/
    while ( 1 ) /*0x1007beba0*/
    {
      v15 = *v8; /*0x1007beba0*/
      if ( (v15 & 0x80u) != 0 ) /*0x1007beba7*/
      {
        v17 = v15 & 0x1F; /*0x1007bebc3*/
        v18 = v8[1] & 0x3F; /*0x1007bebcb*/
        if ( (unsigned __int8)v15 <= 0xDFu ) /*0x1007bebd2*/
        {
          v8 += 2; /*0x1007bec15*/
          v15 = v18 | (v17 << 6); /*0x1007bec1e*/
          v16 = v15 - 8; /*0x1007bec21*/
LABEL_18:
          switch ( v16 ) /*0x1007bec3e*/
          {
            case 0LL: /*0x1007bec3e*/
              if ( (unsigned __int64)&v37[-v14] <= 1 ) /*0x1007bec4b*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007beed3*/
                  &v37,
                  v14,
                  2,
                  1,
                  1,
                  a6);
                v14 = v39; /*0x1007beed8*/
              }
              v11 = v38; /*0x1007bec51*/
              *(_WORD *)(v38 + v14) = 25180; /*0x1007bec55*/
              goto LABEL_42; /*0x1007bec5d*/
            case 1LL: /*0x1007bec3e*/
              if ( (unsigned __int64)&v37[-v14] <= 1 ) /*0x1007beccc*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007beef8*/
                  &v37,
                  v14,
                  2,
                  1,
                  1,
                  a6);
                v14 = v39; /*0x1007beefd*/
              }
              v11 = v38; /*0x1007becd2*/
              *(_WORD *)(v38 + v14) = 29788; /*0x1007becd6*/
              goto LABEL_42; /*0x1007becde*/
            case 2LL: /*0x1007bec3e*/
              if ( (unsigned __int64)&v37[-v14] <= 1 ) /*0x1007bec6d*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007bee60*/
                  &v37,
                  v14,
                  2,
                  1,
                  1,
                  a6);
                v14 = v39; /*0x1007bee65*/
              }
              v11 = v38; /*0x1007bec73*/
              *(_WORD *)(v38 + v14) = 28252; /*0x1007bec77*/
              goto LABEL_42; /*0x1007bec7f*/
            case 3LL: /*0x1007bec3e*/
            case 6LL: /*0x1007bec3e*/
            case 7LL: /*0x1007bec3e*/
            case 8LL: /*0x1007bec3e*/
            case 9LL: /*0x1007bec3e*/
            case 10LL: /*0x1007bec3e*/
            case 11LL: /*0x1007bec3e*/
            case 12LL: /*0x1007bec3e*/
            case 13LL: /*0x1007bec3e*/
            case 14LL: /*0x1007bec3e*/
            case 15LL: /*0x1007bec3e*/
            case 16LL: /*0x1007bec3e*/
            case 17LL: /*0x1007bec3e*/
            case 18LL: /*0x1007bec3e*/
            case 19LL: /*0x1007bec3e*/
            case 20LL: /*0x1007bec3e*/
            case 21LL: /*0x1007bec3e*/
            case 22LL: /*0x1007bec3e*/
            case 23LL: /*0x1007bec3e*/
            case 24LL: /*0x1007bec3e*/
            case 25LL: /*0x1007bec3e*/
              goto LABEL_46;
            case 4LL: /*0x1007bec3e*/
              if ( (unsigned __int64)&v37[-v14] <= 1 ) /*0x1007becb1*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007beeaa*/
                  &v37,
                  v14,
                  2,
                  1,
                  1,
                  a6);
                v11 = v38; /*0x1007beeaf*/
                v14 = v39; /*0x1007beeb3*/
              }
              *(_WORD *)(v11 + v14) = 26204; /*0x1007becb7*/
              goto LABEL_42; /*0x1007becbf*/
            case 5LL: /*0x1007bec3e*/
              if ( (unsigned __int64)&v37[-v14] <= 1 ) /*0x1007beceb*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007bef1d*/
                  &v37,
                  v14,
                  2,
                  1,
                  1,
                  a6);
                v14 = v39; /*0x1007bef22*/
              }
              v11 = v38; /*0x1007becf1*/
              *(_WORD *)(v38 + v14) = 29276; /*0x1007becf5*/
              goto LABEL_42; /*0x1007becfd*/
            case 26LL: /*0x1007bec3e*/
              if ( (unsigned __int64)&v37[-v14] <= 1 ) /*0x1007bec8f*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007bee85*/
                  &v37,
                  v14,
                  2,
                  1,
                  1,
                  a6);
                v14 = v39; /*0x1007bee8a*/
              }
              v11 = v38; /*0x1007bec95*/
              *(_WORD *)(v38 + v14) = 8796; /*0x1007bec99*/
              goto LABEL_42; /*0x1007beca1*/
            default:
              goto LABEL_38;
          }
        }
        v19 = (v18 << 6) | v8[2] & 0x3F; /*0x1007bebdf*/
        if ( (unsigned __int8)v15 < 0xF0u ) /*0x1007bebe5*/
        {
          v8 += 3; /*0x1007becff*/
          v15 = (v17 << 12) | v19; /*0x1007bed08*/
          v16 = v15 - 8; /*0x1007bed0b*/
          if ( (unsigned int)v16 <= 0x1A ) /*0x1007bed12*/
            goto LABEL_18; /*0x1007bed12*/
        }
        else
        {
          v20 = v8[3]; /*0x1007bebeb*/
          v8 += 4; /*0x1007bebf0*/
          v15 = ((v17 & 7) << 18) | (v19 << 6) | v20 & 0x3F; /*0x1007bec04*/
          v16 = v15 - 8; /*0x1007bec07*/
          if ( (unsigned int)v16 <= 0x1A ) /*0x1007bec0e*/
            goto LABEL_18; /*0x1007bec0e*/
        }
      }
      else
      {
        ++v8; /*0x1007beba9*/
        v16 = v15 - 8; /*0x1007bebac*/
        if ( (unsigned int)v16 <= 0x1A ) /*0x1007bebb3*/
          goto LABEL_18; /*0x1007bebb3*/
      }
LABEL_38:
      if ( v15 == 92 ) /*0x1007bed1c*/
      {
        if ( (unsigned __int64)&v37[-v14] <= 1 ) /*0x1007bed29*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007bef42*/
            &v37,
            v14,
            2,
            1,
            1,
            a6);
          v14 = v39; /*0x1007bef47*/
        }
        v11 = v38; /*0x1007bed2f*/
        *(_WORD *)(v38 + v14) = 23644; /*0x1007bed33*/
LABEL_42:
        v14 += 2; /*0x1007bed40*/
        goto LABEL_43; /*0x1007bed40*/
      }
LABEL_46:
      if ( v15 < 0x20 ) /*0x1007bed5b*/
      {
        v35 = v15; /*0x1007bed61*/
        v32[0] = &v35; /*0x1007bed69*/
        v32[1] = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$u32$GT$::fmt::h094a2c922f2b7813; /*0x1007bed74*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v30, &unk_101673A79, v32); /*0x1007bed8a*/
        v36 = v30[0]; /*0x1007bed96*/
        v22 = (const void *)v30[1]; /*0x1007bed9a*/
        v23 = __n; /*0x1007bed9e*/
        if ( __n > (unsigned __int64)&v37[-v14] ) /*0x1007bedac*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007bf01d*/
            &v37,
            v14,
            __n,
            1,
            1,
            v21);
          v14 = v39; /*0x1007bf022*/
        }
        v11 = v38; /*0x1007bedb2*/
        memcpy((void *)(v38 + v14), v22, v23); /*0x1007bedc1*/
        v14 += v23; /*0x1007bedc6*/
        v39 = v14; /*0x1007bedc9*/
        if ( v36 ) /*0x1007bedd4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v36, 1); /*0x1007bede2*/
        goto LABEL_44; /*0x1007bede7*/
      }
      v24 = 1; /*0x1007bedec*/
      if ( v15 >= 0x80 ) /*0x1007bedf8*/
      {
        v24 = 2; /*0x1007bedfa*/
        if ( v15 >= 0x800 ) /*0x1007bee06*/
          v24 = 4LL - (v15 < 0x10000); /*0x1007bee14*/
      }
      v25 = v14; /*0x1007bee1f*/
      if ( v24 > (unsigned __int64)&v37[-v14] ) /*0x1007bee25*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007bef65*/
          &v37,
          v14,
          v24,
          1,
          1,
          a6);
        v25 = v39; /*0x1007bef6a*/
        v11 = v38; /*0x1007bef6e*/
        if ( v15 >= 0x80 ) /*0x1007bef79*/
        {
LABEL_58:
          v26 = v15 & 0x3F | 0x80; /*0x1007bef7f*/
          v27 = v15 >> 6; /*0x1007bef8b*/
          if ( v15 >= 0x800 ) /*0x1007bef95*/
          {
            v28 = v27 & 0x3F | 0x80; /*0x1007befaf*/
            v29 = v15 >> 12; /*0x1007befb5*/
            if ( v15 > 0xFFFF ) /*0x1007befbf*/
            {
              *(_BYTE *)(v11 + v25) = (v15 >> 18) | 0xF0; /*0x1007befec*/
              *(_BYTE *)(v11 + v25 + 1) = v29 & 0x3F | 0x80; /*0x1007beff1*/
              *(_BYTE *)(v11 + v25 + 2) = v28; /*0x1007beff6*/
              *(_BYTE *)(v11 + v25 + 3) = v26; /*0x1007beffb*/
            }
            else
            {
              *(_BYTE *)(v11 + v25) = v29 | 0xE0; /*0x1007befc5*/
              *(_BYTE *)(v11 + v25 + 1) = v28; /*0x1007befca*/
              *(_BYTE *)(v11 + v25 + 2) = v26; /*0x1007befcf*/
            }
            v14 += v24; /*0x1007befd4*/
          }
          else
          {
            *(_BYTE *)(v11 + v25) = v27 | 0xC0; /*0x1007bef9a*/
            *(_BYTE *)(v11 + v25 + 1) = v26; /*0x1007bef9f*/
            v14 += v24; /*0x1007befa4*/
          }
          goto LABEL_43; /*0x1007befa7*/
        }
      }
      else
      {
        v11 = v38; /*0x1007bee2b*/
        if ( v15 >= 0x80 ) /*0x1007bee36*/
          goto LABEL_58; /*0x1007bee36*/
      }
      *(_BYTE *)(v11 + v25) = v15; /*0x1007bee3c*/
      v14 += v24; /*0x1007bee41*/
LABEL_43:
      v39 = v14; /*0x1007bed44*/
LABEL_44:
      if ( v8 == v34 ) /*0x1007bed4c*/
        goto LABEL_7; /*0x1007bed4c*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1007beb18*/
  v7 = 1; /*0x1007beb1d*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1007beb2b*/
  if ( !v10 ) /*0x1007beb33*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1007beafd*/
  v11 = v10; /*0x1007beb35*/
  v37 = v6; /*0x1007beb38*/
  v38 = v10; /*0x1007beb3c*/
  v39 = 0; /*0x1007beb40*/
  if ( a3 ) /*0x1007beb4b*/
    goto LABEL_9; /*0x1007beb4b*/
LABEL_7:
  v12 = v33; /*0x1007beb4d*/
  v33[2] = v39; /*0x1007beb55*/
  result = v37; /*0x1007beb59*/
  v12[1] = v38; /*0x1007beb61*/
  *v12 = result; /*0x1007beb65*/
  return result; /*0x1007beb68*/
}