// __ZN13codexmate_lib4core5relay12codex_writer24top_level_assignment_key @ 0x1007c3330 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::codex_writer::top_level_assignment_key::h4b08cede7acc5496(
        signed __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  void *result; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  _BYTE *v8; // rdi
  __int64 v9; // rax
  signed __int64 v10; // rdx
  signed __int64 *v11; // rcx
  signed __int64 v12; // rbx
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // rsi
  int v15; // r8d
  int v16; // r10d
  int v17; // r9d
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  __int64 v20; // r15
  const void *v21; // r14
  void *v22; // rax
  signed __int64 v23; // r12
  int v24; // [rsp+0h] [rbp-90h] BYREF
  __int64 v25; // [rsp+8h] [rbp-88h]
  __int64 v26; // [rsp+18h] [rbp-78h]
  __int64 v27; // [rsp+20h] [rbp-70h]
  unsigned __int64 v28; // [rsp+28h] [rbp-68h]
  _QWORD v29[5]; // [rsp+30h] [rbp-60h] BYREF
  char v30; // [rsp+58h] [rbp-38h]
  __int16 v31; // [rsp+60h] [rbp-30h]

  if ( !a3 || *a2 == 35 ) /*0x1007c3349*/
    goto LABEL_3; /*0x1007c3349*/
  if ( a3 > 0xF ) /*0x1007c336b*/
  {
    v5 = a3; /*0x1007c338b*/
    v6 = core::slice::memchr::memchr_aligned::hda948616f04379f9(61, a2, a3); /*0x1007c338e*/
    a3 = v5; /*0x1007c3393*/
    if ( v6 != 1 ) /*0x1007c33a0*/
    {
LABEL_3:
      *a1 = 0x8000000000000000LL; /*0x1007c334b*/
      return (void *)0x8000000000000000LL; /*0x1007c3366*/
    }
  }
  else
  {
    v4 = 0; /*0x1007c336d*/
    while ( a2[v4] != 61 ) /*0x1007c3374*/
    {
      if ( a3 == ++v4 ) /*0x1007c337c*/
        goto LABEL_3; /*0x1007c337c*/
    }
  }
  v27 = 0; /*0x1007c33a5*/
  v28 = a3; /*0x1007c33ad*/
  v29[0] = a2; /*0x1007c33b8*/
  v29[1] = a3; /*0x1007c33bc*/
  v29[2] = 0; /*0x1007c33c0*/
  v29[3] = a3; /*0x1007c33c8*/
  v29[4] = 0x3D0000003DLL; /*0x1007c33d6*/
  v30 = 1; /*0x1007c33da*/
  v31 = 1; /*0x1007c33de*/
  v26 = 1; /*0x1007c33e4*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c33f6*/
    &v24,
    v29);
  if ( v24 != 1 ) /*0x1007c3402*/
  {
    if ( HIBYTE(v31) || ((unsigned __int8)v31 | (v28 != v27)) != 1 ) /*0x1007c3531*/
    {
      *a1 = 0x8000000000000000LL; /*0x1007c3564*/
      return (void *)0x8000000000000000LL; /*0x1007c3568*/
    }
    v8 = (_BYTE *)(v29[0] + v27); /*0x1007c3533*/
    v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v29[0] + v27, v28 - v27); /*0x1007c3537*/
    v11 = a1; /*0x1007c353f*/
    if ( v10 ) /*0x1007c3542*/
      goto LABEL_12; /*0x1007c3542*/
LABEL_32:
    *v11 = 0x8000000000000000LL; /*0x1007c3548*/
    return (void *)0x8000000000000000LL; /*0x1007c3555*/
  }
  v8 = &a2[v27]; /*0x1007c3419*/
  v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(&a2[v27], v25 - v27); /*0x1007c341c*/
  v11 = a1; /*0x1007c3424*/
  if ( !v10 ) /*0x1007c3427*/
    goto LABEL_32; /*0x1007c3427*/
LABEL_12:
  v12 = v10; /*0x1007c342d*/
  v13 = (unsigned __int8 *)(v10 + v9); /*0x1007c3433*/
  v14 = (unsigned __int8 *)v9; /*0x1007c3436*/
  while ( v14 != v13 ) /*0x1007c3443*/
  {
    v8 = (_BYTE *)*v14; /*0x1007c3449*/
    if ( (char)v8 < 0 ) /*0x1007c344f*/
    {
      v15 = (unsigned __int8)v8 & 0x1F; /*0x1007c3463*/
      v16 = v14[1] & 0x3F; /*0x1007c346c*/
      if ( (unsigned __int8)v8 <= 0xDFu ) /*0x1007c3474*/
      {
        v14 += 2; /*0x1007c34bc*/
        v18 = v16 | (v15 << 6); /*0x1007c34c4*/
        v8 = (_BYTE *)v18; /*0x1007c34c7*/
        if ( v18 != 45 ) /*0x1007c34cd*/
          goto LABEL_25; /*0x1007c34cd*/
      }
      else
      {
        v17 = (v16 << 6) | v14[2] & 0x3F; /*0x1007c3483*/
        if ( (unsigned __int8)v8 < 0xF0u ) /*0x1007c348a*/
        {
          v14 += 3; /*0x1007c34d4*/
          v19 = (v15 << 12) | v17; /*0x1007c34dc*/
          v8 = (_BYTE *)v19; /*0x1007c34df*/
          if ( v19 != 45 ) /*0x1007c34e5*/
          {
LABEL_25:
            if ( (_DWORD)v8 != 95 && (unsigned int)((_DWORD)v8 - 58) <= 0xFFFFFFF5 ) /*0x1007c3501*/
            {
              v8 = (_BYTE *)(((unsigned int)v8 & 0xFFFFFFDF) - 91); /*0x1007c350a*/
              if ( (unsigned int)v8 < 0xFFFFFFE6 ) /*0x1007c3510*/
                goto LABEL_32; /*0x1007c3510*/
            }
          }
        }
        else
        {
          v8 = (_BYTE *)((((unsigned __int8)v8 & 7) << 18) | (v17 << 6) | v14[3] & 0x3Fu); /*0x1007c34a2*/
          if ( (_DWORD)v8 == 1114112 ) /*0x1007c34ab*/
            break; /*0x1007c34ab*/
          v14 += 4; /*0x1007c34b1*/
          if ( (_DWORD)v8 != 45 ) /*0x1007c34b8*/
            goto LABEL_25; /*0x1007c34b8*/
        }
      }
    }
    else
    {
      ++v14; /*0x1007c3451*/
      if ( (_DWORD)v8 != 45 ) /*0x1007c3457*/
        goto LABEL_25; /*0x1007c3457*/
    }
  }
  if ( v12 < 0 ) /*0x1007c3570*/
  {
    v20 = 0; /*0x1007c3572*/
    goto LABEL_36; /*0x1007c3572*/
  }
  v21 = (const void *)v9; /*0x1007c3580*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v14); /*0x1007c3583*/
  v20 = 1; /*0x1007c3588*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1007c3596*/
  if ( !v22 ) /*0x1007c359e*/
LABEL_36:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v12); /*0x1007c3575*/
  v23 = (signed __int64)v22; /*0x1007c35a0*/
  result = memcpy(v22, v21, v12); /*0x1007c35ac*/
  *a1 = v12; /*0x1007c35b1*/
  a1[1] = v23; /*0x1007c35b5*/
  a1[2] = v12; /*0x1007c35b9*/
  return result; /*0x1007c3358*/
}