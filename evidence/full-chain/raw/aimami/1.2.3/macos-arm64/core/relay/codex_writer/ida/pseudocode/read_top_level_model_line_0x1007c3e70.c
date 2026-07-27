// __ZN13codexmate_lib4core5relay12codex_writer25read_top_level_model_line @ 0x1007c3e70
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_writer::read_top_level_model_line | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
signed __int64 *__fastcall codexmate_lib::core::relay::codex_writer::read_top_level_model_line::h03982b0ec3d2b300(
        signed __int64 *a1,
        __int64 a2,
        char *a3)
{
  char v3; // r12
  __int64 v4; // rbx
  signed __int64 v5; // r13
  __int64 v6; // rbx
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rbx
  char *v10; // rsi
  _BYTE *v11; // rax
  unsigned __int64 v12; // rdx
  _BYTE *v13; // r15
  unsigned __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rax
  int *v17; // rdi
  char *v18; // rsi
  char *v19; // r15
  char *v20; // r15
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  char *v26; // rdx
  signed __int64 v27; // rdx
  signed __int64 *v28; // rcx
  signed __int64 *result; // rax
  __int64 v30; // r14
  void *v31; // rax
  signed __int64 v32; // r15
  char *v33; // [rsp+0h] [rbp-E0h]
  _QWORD v35[5]; // [rsp+10h] [rbp-D0h] BYREF
  char v36; // [rsp+38h] [rbp-A8h]
  __int16 v37; // [rsp+40h] [rbp-A0h]
  int v38; // [rsp+48h] [rbp-98h] BYREF
  __int64 v39; // [rsp+50h] [rbp-90h]
  char *v40; // [rsp+58h] [rbp-88h]
  signed __int64 *v41; // [rsp+60h] [rbp-80h]
  __int64 v42; // [rsp+68h] [rbp-78h] BYREF
  char *v43; // [rsp+70h] [rbp-70h]
  char *v44; // [rsp+78h] [rbp-68h]
  _QWORD v45[5]; // [rsp+80h] [rbp-60h] BYREF
  char v46; // [rsp+A8h] [rbp-38h]
  __int16 v47; // [rsp+B0h] [rbp-30h]

  v41 = a1; /*0x1007c3e84*/
  v33 = nullptr; /*0x1007c3e88*/
  v35[0] = a2; /*0x1007c3e9a*/
  v35[1] = a3; /*0x1007c3ea1*/
  v35[2] = 0; /*0x1007c3ea8*/
  v35[3] = a3; /*0x1007c3eb3*/
  v35[4] = 0xA0000000ALL; /*0x1007c3ec4*/
  v36 = 1; /*0x1007c3ecb*/
  v37 = 0; /*0x1007c3ed2*/
  v3 = 0; /*0x1007c3edb*/
  do /*0x1007c3efb*/
  {
    do /*0x1007c414b*/
    {
      while ( 1 ) /*0x1007c4080*/
      {
        do /*0x1007c4080*/
        {
          do /*0x1007c4054*/
          {
            while ( 1 ) /*0x1007c3ffc*/
            {
              while ( 1 ) /*0x1007c3ff4*/
              {
                while ( 1 ) /*0x1007c3fcf*/
                {
                  while ( 1 ) /*0x1007c3fbe*/
                  {
                    do /*0x1007c3fbe*/
                    {
LABEL_5:
                      if ( HIBYTE(v37) ) /*0x1007c3f08*/
                      {
LABEL_63:
                        v28 = v41; /*0x1007c42e8*/
                        *v41 = 0x8000000000000000LL; /*0x1007c42f6*/
                        return v28; /*0x1007c430d*/
                      }
                      v6 = v35[0]; /*0x1007c3f0e*/
                      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c3f20*/
                        &v42,
                        v35);
                      if ( (_DWORD)v42 == 1 ) /*0x1007c3f29*/
                      {
                        v7 = v33; /*0x1007c3f2f*/
                        v33 = v44; /*0x1007c3f36*/
                        v8 = (char *)(v44 - v7); /*0x1007c3f3d*/
                        v9 = &v7[v6]; /*0x1007c3f40*/
                        if ( v44 == v7 ) /*0x1007c3f46*/
                          goto LABEL_16; /*0x1007c3f46*/
                      }
                      else
                      {
                        if ( HIBYTE(v37) ) /*0x1007c3f57*/
                          goto LABEL_63; /*0x1007c3f57*/
                        HIBYTE(v37) = 1; /*0x1007c3f5d*/
                        v8 = (char *)(a3 - v33); /*0x1007c3f72*/
                        if ( ((unsigned __int8)v37 | (a3 != v33)) != 1 ) /*0x1007c3f81*/
                          goto LABEL_63; /*0x1007c3f81*/
                        v9 = &v33[v35[0]]; /*0x1007c3f87*/
                        if ( !v8 ) /*0x1007c3f91*/
                          goto LABEL_16; /*0x1007c3f91*/
                      }
                      v10 = v8; /*0x1007c3f98*/
                      if ( v8[(_QWORD)v9 - 1] == 10 ) /*0x1007c3f9b*/
                      {
                        v10 = v8 - 1; /*0x1007c3fa0*/
                        if ( v8 != (char *)1 && v8[(_QWORD)v9 - 2] == 13 ) /*0x1007c3faa*/
                        {
                          v8 -= 2; /*0x1007c3fac*/
LABEL_16:
                          v10 = v8; /*0x1007c3fb0*/
                        }
                      }
                      v11 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v9, v10); /*0x1007c3fb3*/
                    }
                    while ( !v12 ); /*0x1007c3fbe*/
                    v13 = v11; /*0x1007c3fc4*/
                    v14 = v12; /*0x1007c3fc7*/
                    v15 = *v11; /*0x1007c3fca*/
                    if ( v15 != 91 ) /*0x1007c3fcf*/
                      break; /*0x1007c3fcf*/
                    if ( !(v3 & 1 | (v13[v12 - 1] == 93)) ) /*0x1007c3fdf*/
                      goto LABEL_23; /*0x1007c3fdf*/
                    v3 = 1; /*0x1007c3fe1*/
                  }
                  if ( (v3 & 1) == 0 ) /*0x1007c3ff4*/
                    break; /*0x1007c3ff4*/
                  v3 = 1; /*0x1007c42d8*/
                }
                if ( v15 != 35 ) /*0x1007c3ffc*/
                  break; /*0x1007c3ffc*/
                v3 = 0; /*0x1007c42e0*/
              }
LABEL_23:
              if ( v12 <= 0xF ) /*0x1007c4006*/
                break; /*0x1007c4006*/
              if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v13, v12) == 1 ) /*0x1007c4044*/
                goto LABEL_31; /*0x1007c4044*/
              v3 = 0; /*0x1007c4046*/
            }
            v16 = 0; /*0x1007c4008*/
            while ( v13[v16] != 61 ) /*0x1007c4015*/
            {
              if ( v12 == ++v16 ) /*0x1007c401d*/
                goto LABEL_5; /*0x1007c401d*/
            }
          }
          while ( v12 < 6 ); /*0x1007c4054*/
LABEL_31:
          ; /*0x1007c405a*/
        }
        while ( *(_DWORD *)v13 ^ 0x65646F6D | *((unsigned __int16 *)v13 + 2) ^ 0x206C /*0x1007c4080*/
             && *(_DWORD *)v13 ^ 0x65646F6D | *((unsigned __int16 *)v13 + 2) ^ 0x3D6C );
        if ( v14 >= 0xE ) /*0x1007c408c*/
          break; /*0x1007c408c*/
        if ( v14 != 13 || *(_QWORD *)v13 ^ 0x61635F6C65646F6DLL | *(_QWORD *)(v13 + 5) ^ 0x676F6C617461635FLL ) /*0x1007c40b9*/
          goto LABEL_41; /*0x1007c40bc*/
      }
    }
    while ( !(*(_QWORD *)v13 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v13 + 6) ^ 0x72656469766F7270LL) /*0x1007c414b*/
         || !(*(_QWORD *)v13 ^ 0x61635F6C65646F6DLL | *(_QWORD *)(v13 + 5) ^ 0x676F6C617461635FLL)
         || v14 != 14 && !(*(_QWORD *)v13 ^ 0x65725F6C65646F6DLL | *(_QWORD *)(v13 + 7) ^ 0x676E696E6F736165LL) );
LABEL_41:
    v43 = nullptr; /*0x1007c4154*/
    v44 = (char *)v14; /*0x1007c415c*/
    v45[0] = v13; /*0x1007c4160*/
    v45[1] = v14; /*0x1007c4164*/
    v45[2] = 0; /*0x1007c4168*/
    v45[3] = v14; /*0x1007c4170*/
    v45[4] = 0x3D0000003DLL; /*0x1007c417e*/
    v46 = 1; /*0x1007c4182*/
    v47 = 1; /*0x1007c4186*/
    v42 = 1; /*0x1007c418c*/
    v17 = &v38; /*0x1007c4194*/
    v18 = (char *)v45; /*0x1007c419b*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c419f*/
      &v38,
      v45);
    if ( v38 == 1 ) /*0x1007c41ab*/
    {
      v19 = v40; /*0x1007c41ad*/
      v43 = v40; /*0x1007c41b4*/
    }
    else if ( HIBYTE(v47) || (HIBYTE(v47) = 1, v19 = v43, !(_BYTE)v47) && v44 == v43 ) /*0x1007c421c*/
    {
      v4 = 1; /*0x1007c3ef0*/
LABEL_3:
      v5 = 0; /*0x1007c3ef5*/
      continue; /*0x1007c3ef5*/
    }
    v4 = 1; /*0x1007c41b8*/
    v5 = v42; /*0x1007c41bd*/
    if ( v42 ) /*0x1007c41c4*/
    {
      if ( v42 == 1 ) /*0x1007c41ce*/
      {
        if ( HIBYTE(v47) ) /*0x1007c41d4*/
          goto LABEL_3; /*0x1007c41d4*/
        v18 = v44; /*0x1007c41da*/
        if ( !(_BYTE)v47 && v44 == v19 ) /*0x1007c41e7*/
          goto LABEL_3; /*0x1007c41e7*/
        v18 = (char *)(v44 - v19); /*0x1007c41ed*/
        goto LABEL_49; /*0x1007c41ed*/
      }
      --v42; /*0x1007c4227*/
      if ( HIBYTE(v47) ) /*0x1007c422f*/
        goto LABEL_3; /*0x1007c422f*/
      v21 = v45[0]; /*0x1007c4235*/
      v17 = &v38; /*0x1007c4239*/
      v18 = (char *)v45; /*0x1007c4240*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c4244*/
        &v38,
        v45);
      if ( v38 == 1 ) /*0x1007c4250*/
      {
        v18 = (char *)(v39 - (_QWORD)v43); /*0x1007c4264*/
        v20 = &v43[v21]; /*0x1007c4267*/
        v43 = v40; /*0x1007c426a*/
      }
      else
      {
        if ( HIBYTE(v47) ) /*0x1007c42b0*/
          goto LABEL_3; /*0x1007c42b0*/
        HIBYTE(v47) = 1; /*0x1007c42b6*/
        v19 = v43; /*0x1007c42ba*/
        v18 = (char *)(v44 - v43); /*0x1007c42c2*/
        if ( ((unsigned __int8)v47 | (v44 != v43)) != 1 ) /*0x1007c42cd*/
          goto LABEL_3; /*0x1007c42cd*/
LABEL_49:
        v20 = &v19[v45[0]]; /*0x1007c41f0*/
      }
      v22 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v20, v18); /*0x1007c4271*/
      v24 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v22, v23, 34); /*0x1007c4281*/
      v17 = (int *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v24, v25, 39); /*0x1007c4296*/
      v18 = v26; /*0x1007c4299*/
      v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v17, v26); /*0x1007c42a1*/
      v5 = v27; /*0x1007c42a4*/
    }
  }
  while ( !v5 ); /*0x1007c3efb*/
  if ( v5 < 0 ) /*0x1007c430e*/
  {
    v30 = 0; /*0x1007c4310*/
    goto LABEL_66; /*0x1007c4310*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v18); /*0x1007c431e*/
  v30 = 1; /*0x1007c4323*/
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1007c4331*/
  if ( !v31 ) /*0x1007c4339*/
LABEL_66:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v5); /*0x1007c4313*/
  v32 = (signed __int64)v31; /*0x1007c433b*/
  memcpy(v31, (const void *)v4, v5); /*0x1007c4347*/
  result = v41; /*0x1007c434c*/
  *v41 = v5; /*0x1007c4350*/
  result[1] = v32; /*0x1007c4353*/
  result[2] = v5; /*0x1007c4357*/
  return result; /*0x1007c42fc*/
}