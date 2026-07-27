// __ZN13codexmate_lib4core5relay10translator24unwrap_custom_tool_input @ 0x100852a60
// 1.2.3 NEW-delta | codexmate_lib::core::relay::translator::unwrap_custom_tool_input | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 *__fastcall codexmate_lib::core::relay::translator::unwrap_custom_tool_input::hb49644dd7117d44c(
        __int64 *a1,
        const void *a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  const char *v8; // rdi
  __int64 *v9; // rsi
  bool v10; // zf
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 i; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r15
  size_t v20; // rdx
  size_t v21; // r12
  __int64 v22; // r12
  int v23; // eax
  char v24; // cl
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 j; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // r15
  size_t v34; // rdx
  size_t v35; // r12
  __int64 v36; // r12
  int v37; // eax
  char v38; // cl
  __int64 v39; // r14
  const void *v40; // r15
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rdi
  __int64 v44; // rax
  const void *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+10h] [rbp-D0h]
  __int64 v51; // [rsp+18h] [rbp-C8h]
  __int64 v52; // [rsp+20h] [rbp-C0h]
  __int64 v53; // [rsp+28h] [rbp-B8h]
  __int64 v54; // [rsp+30h] [rbp-B0h]
  __int64 v55; // [rsp+38h] [rbp-A8h]
  __int64 v56; // [rsp+40h] [rbp-A0h]
  __int64 v57; // [rsp+48h] [rbp-98h]
  __int64 v58; // [rsp+50h] [rbp-90h]
  char v59[8]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v60; // [rsp+60h] [rbp-80h]
  __int64 v61; // [rsp+68h] [rbp-78h]
  __int64 v62; // [rsp+70h] [rbp-70h]
  size_t __n; // [rsp+78h] [rbp-68h]
  const void *v64; // [rsp+80h] [rbp-60h]
  __int64 v65; // [rsp+88h] [rbp-58h]
  __int64 v66; // [rsp+90h] [rbp-50h]
  __int64 v67; // [rsp+98h] [rbp-48h]
  __int64 v68; // [rsp+A0h] [rbp-40h]
  __int64 *v69; // [rsp+A8h] [rbp-38h]
  __int64 v70; // [rsp+B0h] [rbp-30h]

  v3 = a3; /*0x100852a74*/
  v5 = a1; /*0x100852a7a*/
  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100852a83*/
  if ( !v7 ) /*0x100852a8b*/
  {
    *a1 = 0; /*0x100852afe*/
    a1[1] = 1; /*0x100852b05*/
    a1[2] = 0; /*0x100852b0d*/
    return v5; /*0x100852b15*/
  }
  v49 = v6; /*0x100852a8d*/
  v50 = v7; /*0x100852a94*/
  v51 = 0; /*0x100852a9b*/
  v52 = 0; /*0x100852aa6*/
  v53 = v6; /*0x100852ab1*/
  v54 = v7; /*0x100852ab8*/
  v8 = v59; /*0x100852abf*/
  v9 = &v49; /*0x100852ac6*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v59, &v49); /*0x100852acd*/
  if ( v59[0] != 6 ) /*0x100852ad9*/
  {
    __n = v3; /*0x100852b1a*/
    if ( v59[0] != 5 ) /*0x100852b28*/
    {
      if ( v59[0] == 3 ) /*0x100852b2d*/
      {
        v5[2] = v62; /*0x100852b37*/
        v12 = v60; /*0x100852b3b*/
        v5[1] = v61; /*0x100852b43*/
        *v5 = v12; /*0x100852b47*/
        return v5; /*0x100852b4a*/
      }
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v59); /*0x100852c50*/
      v3 = __n; /*0x100852c55*/
      v10 = __n == 0; /*0x100852c59*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100852c5c*/
        goto LABEL_4; /*0x100852c5c*/
      goto LABEL_25; /*0x100852c5c*/
    }
    v64 = a2; /*0x100852b4f*/
    v69 = v5; /*0x100852b53*/
    v68 = v61; /*0x100852b5f*/
    v58 = v62; /*0x100852b67*/
    v67 = v60; /*0x100852b6e*/
    if ( !v60 ) /*0x100852b75*/
      goto LABEL_49; /*0x100852b75*/
    v70 = v68; /*0x100852b7f*/
    for ( i = v67; ; i = *(_QWORD *)(v65 + 8 * v18 + 632) ) /*0x100852b83*/
    {
      v14 = i + 360; /*0x100852b87*/
      v15 = *(unsigned __int16 *)(i + 626); /*0x100852b8e*/
      v65 = i; /*0x100852b95*/
      v16 = i - 32; /*0x100852b99*/
      v66 = v15; /*0x100852b9d*/
      v17 = 3LL * (unsigned int)(8 * v15); /*0x100852ba8*/
      v18 = -1; /*0x100852bac*/
      do /*0x100852c14*/
      {
        if ( !v17 ) /*0x100852bc3*/
        {
          v18 = v66; /*0x100852c22*/
          goto LABEL_22; /*0x100852c22*/
        }
        v19 = v14 + 24; /*0x100852bc5*/
        v9 = *(__int64 **)(v14 + 8); /*0x100852bc9*/
        v20 = *(_QWORD *)(v14 + 16); /*0x100852bcd*/
        v21 = v20 - 5; /*0x100852bd4*/
        if ( v20 >= 5 ) /*0x100852bdd*/
          v20 = 5; /*0x100852bdd*/
        v22 = -(__int64)v21; /*0x100852be1*/
        v8 = (const char *)&anon_10420c9971c21f44d230d15b39fb3fec_146; /*0x100852be4*/
        v23 = memcmp(&anon_10420c9971c21f44d230d15b39fb3fec_146, v9, v20); /*0x100852beb*/
        if ( v23 ) /*0x100852bf4*/
          v22 = v23; /*0x100852bf4*/
        v24 = (v22 > 0) - (v22 < 0); /*0x100852c01*/
        v16 += 32; /*0x100852c03*/
        ++v18; /*0x100852c07*/
        v17 -= 24; /*0x100852c0a*/
        v14 = v19; /*0x100852c0e*/
      }
      while ( v24 == 1 ); /*0x100852c14*/
      if ( !v24 ) /*0x100852c1b*/
        goto LABEL_44; /*0x100852c1b*/
LABEL_22:
      if ( !v70 ) /*0x100852c2e*/
        break; /*0x100852c2e*/
      --v70; /*0x100852c34*/
    }
    v70 = v68; /*0x100852cc2*/
    for ( j = v67; ; j = *(_QWORD *)(v65 + 8 * v32 + 632) ) /*0x100852cc6*/
    {
      v29 = j + 360; /*0x100852cca*/
      v30 = *(unsigned __int16 *)(j + 626); /*0x100852cd1*/
      v65 = j; /*0x100852cd8*/
      v16 = j - 32; /*0x100852cdc*/
      v66 = v30; /*0x100852ce0*/
      v31 = 3LL * (unsigned int)(8 * v30); /*0x100852ceb*/
      v32 = -1; /*0x100852cef*/
      do /*0x100852d4a*/
      {
        if ( !v31 ) /*0x100852cf9*/
        {
          v32 = v66; /*0x100852d55*/
          goto LABEL_42; /*0x100852d55*/
        }
        v33 = v29 + 24; /*0x100852cfb*/
        v9 = *(__int64 **)(v29 + 8); /*0x100852cff*/
        v34 = *(_QWORD *)(v29 + 16); /*0x100852d03*/
        v35 = v34 - 5; /*0x100852d0a*/
        if ( v34 >= 5 ) /*0x100852d13*/
          v34 = 5; /*0x100852d13*/
        v36 = -(__int64)v35; /*0x100852d17*/
        v8 = "patchminimallowmediumxhighmaxultrasysteminstructions"; /*0x100852d1a*/
        v37 = memcmp("patchminimallowmediumxhighmaxultrasysteminstructions", v9, v34); /*0x100852d21*/
        if ( v37 ) /*0x100852d2a*/
          v36 = v37; /*0x100852d2a*/
        v38 = (v36 > 0) - (v36 < 0); /*0x100852d37*/
        v16 += 32; /*0x100852d39*/
        ++v32; /*0x100852d3d*/
        v31 -= 24; /*0x100852d40*/
        v29 = v33; /*0x100852d44*/
      }
      while ( v38 == 1 ); /*0x100852d4a*/
      if ( !v38 ) /*0x100852d51*/
        break; /*0x100852d51*/
LABEL_42:
      if ( !v70 ) /*0x100852d61*/
        goto LABEL_49; /*0x100852d61*/
      --v70; /*0x100852d63*/
    }
LABEL_44:
    if ( *(_BYTE *)v16 == 3 ) /*0x100852d7d*/
    {
      v39 = *(_QWORD *)(v16 + 24); /*0x100852d7f*/
      if ( v39 >= 0 ) /*0x100852d86*/
      {
        v40 = *(const void **)(v16 + 16); /*0x100852d88*/
        if ( !v39 ) /*0x100852d8c*/
        {
          v42 = 1; /*0x100852e0b*/
          v5 = v69; /*0x100852e11*/
          goto LABEL_57; /*0x100852e11*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9); /*0x100852d8e*/
        v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v39, 1); /*0x100852d9b*/
        v5 = v69; /*0x100852da3*/
        if ( v41 ) /*0x100852da7*/
        {
          v42 = v41; /*0x100852dad*/
LABEL_57:
          v46 = v42; /*0x100852e15*/
          v45 = v40; /*0x100852e18*/
          goto LABEL_58; /*0x100852e18*/
        }
        goto LABEL_62; /*0x100852da7*/
      }
    }
    else
    {
LABEL_49:
      v39 = __n; /*0x100852db2*/
      if ( (__n & 0x8000000000000000LL) == 0LL ) /*0x100852db9*/
      {
        if ( __n ) /*0x100852dcb*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9); /*0x100852dcd*/
          v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v39, 1); /*0x100852dda*/
          v5 = v69; /*0x100852de2*/
          v45 = v64; /*0x100852de6*/
          if ( !v44 ) /*0x100852dea*/
          {
LABEL_62:
            v43 = 1; /*0x100852ea5*/
LABEL_51:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v43, v39); /*0x100852dbd*/
          }
          v42 = v44; /*0x100852df0*/
          v46 = v44; /*0x100852df3*/
        }
        else
        {
          v42 = 1; /*0x100852df8*/
          v5 = v69; /*0x100852dfe*/
          v45 = v64; /*0x100852e02*/
          v46 = 1; /*0x100852e06*/
        }
LABEL_58:
        memcpy((void *)v46, v45, v39); /*0x100852e1b*/
        *v5 = v39; /*0x100852e23*/
        v5[1] = v42; /*0x100852e26*/
        v5[2] = v39; /*0x100852e2a*/
        if ( v67 ) /*0x100852e35*/
        {
          v50 = 0; /*0x100852e37*/
          v51 = v67; /*0x100852e42*/
          v52 = v68; /*0x100852e4d*/
          v54 = 0; /*0x100852e54*/
          v55 = v67; /*0x100852e5f*/
          v56 = v68; /*0x100852e66*/
          v47 = 1; /*0x100852e6d*/
          v48 = v58; /*0x100852e72*/
        }
        else
        {
          v47 = 0; /*0x100852e7b*/
          v48 = 0; /*0x100852e7d*/
        }
        v49 = v47; /*0x100852e7f*/
        v53 = v47; /*0x100852e86*/
        v57 = v48; /*0x100852e8d*/
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::haaf504ab9dab7670(&v49); /*0x100852e9b*/
        return v5; /*0x100852ea0*/
      }
    }
    v43 = 0; /*0x100852dbb*/
    goto LABEL_51; /*0x100852dbb*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v59); /*0x100852ae2*/
  v10 = v3 == 0; /*0x100852ae7*/
  if ( v3 < 0 ) /*0x100852aea*/
  {
LABEL_4:
    v11 = 0; /*0x100852af0*/
    goto LABEL_5; /*0x100852af0*/
  }
LABEL_25:
  if ( v10 ) /*0x100852c62*/
  {
    v26 = 1; /*0x100852c8a*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, &v49); /*0x100852c64*/
    v11 = 1; /*0x100852c69*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1); /*0x100852c77*/
    if ( !v25 ) /*0x100852c7f*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v3); /*0x100852af3*/
    v26 = v25; /*0x100852c85*/
  }
  memcpy((void *)v26, a2, v3); /*0x100852c99*/
  *v5 = v3; /*0x100852c9e*/
  v5[1] = v26; /*0x100852ca1*/
  v5[2] = v3; /*0x100852ca5*/
  return v5; /*0x100852cac*/
}