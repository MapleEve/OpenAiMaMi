// __ZN13codexmate_lib4core12plan_mapping23plan_type_json_to_label @ 0x1003208d0 | 基线 same-set
size_t *__fastcall codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(
        size_t *a1,
        __int64 a2)
{
  size_t *v2; // rbx
  _DWORD *v3; // rax
  unsigned __int8 v5; // r12
  size_t v6; // r14
  void *v7; // rax
  size_t v8; // r15
  char *v9; // rsi
  size_t v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int8 *v15; // r14
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r15
  size_t v19; // rdx
  size_t v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  char v23; // cl
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // r15
  size_t v30; // rdx
  size_t v31; // rbx
  __int64 v32; // rbx
  int v33; // eax
  char v34; // cl
  size_t *v35; // r15
  __int64 v36; // rax
  int *v37; // rsi
  size_t *v38; // rdi
  __int64 v39; // [rsp+8h] [rbp-98h]
  __int64 v40; // [rsp+10h] [rbp-90h]
  size_t *v41; // [rsp+18h] [rbp-88h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+20h] [rbp-80h]
  __int64 v43; // [rsp+28h] [rbp-78h]
  size_t v44; // [rsp+30h] [rbp-70h] BYREF
  __int64 v45; // [rsp+38h] [rbp-68h]
  size_t v46; // [rsp+40h] [rbp-60h]
  size_t *v47; // [rsp+48h] [rbp-58h]
  __int64 v48; // [rsp+50h] [rbp-50h]
  __int64 v49; // [rsp+58h] [rbp-48h]
  __int64 v50; // [rsp+60h] [rbp-40h]
  __int64 v51; // [rsp+68h] [rbp-38h]
  char v52[41]; // [rsp+77h] [rbp-29h] BYREF

  v2 = a1; /*0x1003208e1*/
  if ( !a2 ) /*0x1003208e7*/
  {
LABEL_3:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003208fc*/
    v3 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10032090b*/
    if ( v3 ) /*0x100320913*/
    {
      *(_DWORD *)((char *)v3 + 3) = 1853321070; /*0x100320919*/
      *v3 = 1852534389; /*0x100320920*/
LABEL_5:
      *v2 = 7; /*0x100320926*/
      v2[1] = (size_t)v3; /*0x10032092d*/
      v2[2] = 7; /*0x100320931*/
      return v2; /*0x100320931*/
    }
LABEL_52:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100320cd0*/
  }
  switch ( *(_BYTE *)a2 ) /*0x1003208fa*/
  {
    case 0: /*0x1003208fa*/
    case 4: /*0x1003208fa*/
      goto LABEL_3;
    case 1: /*0x1003208fa*/
      v5 = *(_BYTE *)(a2 + 1); /*0x100320959*/
      v6 = v5 ^ 5LL; /*0x100320961*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100320965*/
      v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100320972*/
      if ( !v7 ) /*0x10032097a*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x100320ce7*/
      v8 = (size_t)v7; /*0x100320980*/
      v9 = "falseprolitechatgptprolitepro"; /*0x10032098a*/
      if ( v5 ) /*0x100320994*/
        v9 = "trueuuidemitshowhide"; /*0x100320994*/
      memcpy(v7, v9, v6); /*0x10032099e*/
      *a1 = v6; /*0x1003209a3*/
      a1[1] = v8; /*0x1003209a6*/
      a1[2] = v6; /*0x1003209aa*/
      return v2; /*0x1003209ae*/
    case 2: /*0x1003208fa*/
      v44 = 0; /*0x1003209b4*/
      v45 = 1; /*0x1003209bc*/
      v46 = 0; /*0x1003209c4*/
      v43 = 1610612768; /*0x1003209cc*/
      v41 = &v44; /*0x1003209d8*/
      v42 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003209e6*/
      if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x1003209f7*/
                              a2 + 8,
                              &v41) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100320cc9*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          v52,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      a1[2] = v46; /*0x100320a08*/
      v10 = v44; /*0x100320a0c*/
      v11 = v45; /*0x100320a10*/
      goto LABEL_50; /*0x100320a14*/
    case 3: /*0x1003208fa*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(a1, a2 + 8); /*0x100320952*/
      return v2; /*0x100320957*/
    case 5: /*0x1003208fa*/
      v12 = *(_QWORD *)(a2 + 8); /*0x100320a19*/
      v47 = a1; /*0x100320a20*/
      if ( !v12 ) /*0x100320a24*/
        goto LABEL_41; /*0x100320a24*/
      v49 = a2; /*0x100320a2a*/
      v48 = *(_QWORD *)(a2 + 16); /*0x100320a32*/
      v51 = v48; /*0x100320a36*/
      v50 = v12; /*0x100320a3a*/
      v13 = v12; /*0x100320a3e*/
      break; /*0x100320a3e*/
  }
  while ( 1 ) /*0x100320a41*/
  {
    v14 = v13 + 360; /*0x100320a41*/
    v39 = v13; /*0x100320a4f*/
    v15 = (unsigned __int8 *)(v13 - 32); /*0x100320a56*/
    v40 = *(unsigned __int16 *)(v13 + 626); /*0x100320a5a*/
    v16 = 3LL * (unsigned int)(8 * v40); /*0x100320a68*/
    v17 = -1; /*0x100320a6c*/
    do /*0x100320ad4*/
    {
      if ( !v16 ) /*0x100320a83*/
      {
        v17 = v40; /*0x100320ae3*/
        goto LABEL_26; /*0x100320ae3*/
      }
      v18 = v14 + 24; /*0x100320a85*/
      v19 = *(_QWORD *)(v14 + 16); /*0x100320a8d*/
      v20 = v19 - 4; /*0x100320a94*/
      if ( v19 >= 4 ) /*0x100320a9d*/
        v19 = 4; /*0x100320a9d*/
      v21 = -(__int64)v20; /*0x100320aa1*/
      v22 = memcmp("typefullargsopenwithkindsavetrueuuidemitshowhide", *(const void **)(v14 + 8), v19); /*0x100320aab*/
      if ( v22 ) /*0x100320ab4*/
        v21 = v22; /*0x100320ab4*/
      v23 = (v21 > 0) - (v21 < 0); /*0x100320ac1*/
      v15 += 32; /*0x100320ac3*/
      ++v17; /*0x100320ac7*/
      v16 -= 24; /*0x100320aca*/
      v14 = v18; /*0x100320ace*/
    }
    while ( v23 == 1 ); /*0x100320ad4*/
    if ( !v23 ) /*0x100320adb*/
      goto LABEL_46; /*0x100320adb*/
LABEL_26:
    a2 = v49; /*0x100320af2*/
    if ( !v51 ) /*0x100320af6*/
      break; /*0x100320af6*/
    --v51; /*0x100320af8*/
    v13 = *(_QWORD *)(v39 + 8 * v17 + 632); /*0x100320b03*/
  }
  v24 = v50; /*0x100320b10*/
LABEL_29:
  v25 = v24 + 360; /*0x100320b14*/
  v26 = *(unsigned __int16 *)(v24 + 626); /*0x100320b1b*/
  v50 = v24; /*0x100320b22*/
  v15 = (unsigned __int8 *)(v24 - 32); /*0x100320b26*/
  v51 = v26; /*0x100320b2a*/
  v27 = 3LL * (unsigned int)(8 * v26); /*0x100320b35*/
  v28 = -1; /*0x100320b39*/
  do /*0x100320b98*/
  {
    if ( !v27 ) /*0x100320b43*/
    {
      v28 = v51; /*0x100320bab*/
LABEL_39:
      if ( !v48 ) /*0x100320bbb*/
      {
LABEL_41:
        v35 = (size_t *)(a2 + 8); /*0x100320bce*/
        v36 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100320be7*/
                a2 + 8,
                &unk_1015E3C96,
                9);
        if ( v36 /*0x100320c3a*/
          || (v36 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf(
                      v35,
                      &unk_1015E3B40,
                      4)) != 0
          || (v36 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf(
                      v35,
                      &unk_1015E3B3C,
                      4)) != 0
          || (v37 = &anon_b0ee9adff4519c22b647af231a5a39fa_54,
              v38 = v35,
              (v36 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf(
                       v35,
                       &anon_b0ee9adff4519c22b647af231a5a39fa_54,
                       4)) != 0) )
        {
          v15 = (unsigned __int8 *)v36; /*0x100320c3c*/
          goto LABEL_46; /*0x100320c3c*/
        }
LABEL_47:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v37); /*0x100320c59*/
        v3 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100320c68*/
        if ( v3 ) /*0x100320c70*/
        {
          *(_DWORD *)((char *)v3 + 3) = 1853321070; /*0x100320c72*/
          *v3 = 1852534389; /*0x100320c79*/
          v2 = v47; /*0x100320c7f*/
          goto LABEL_5; /*0x100320c83*/
        }
        goto LABEL_52; /*0x100320c70*/
      }
      --v48; /*0x100320bbd*/
      v24 = *(_QWORD *)(v50 + 8 * v28 + 632); /*0x100320bc1*/
      goto LABEL_29; /*0x100320bc9*/
    }
    v29 = v25 + 24; /*0x100320b45*/
    v30 = *(_QWORD *)(v25 + 16); /*0x100320b4d*/
    v31 = v30 - 4; /*0x100320b54*/
    if ( v30 >= 4 ) /*0x100320b5d*/
      v30 = 4; /*0x100320b5d*/
    v32 = -(__int64)v31; /*0x100320b61*/
    v33 = memcmp(&anon_b0ee9adff4519c22b647af231a5a39fa_55, *(const void **)(v25 + 8), v30); /*0x100320b6b*/
    a2 = v49; /*0x100320b70*/
    if ( v33 ) /*0x100320b78*/
      v32 = v33; /*0x100320b78*/
    v34 = (v32 > 0) - (v32 < 0); /*0x100320b85*/
    v15 += 32; /*0x100320b87*/
    ++v28; /*0x100320b8b*/
    v27 -= 24; /*0x100320b8e*/
    v25 = v29; /*0x100320b92*/
  }
  while ( v34 == 1 ); /*0x100320b98*/
  if ( v34 ) /*0x100320b9f*/
  {
    a2 = v49; /*0x100320ba5*/
    goto LABEL_39; /*0x100320ba9*/
  }
LABEL_46:
  v38 = (size_t *)&v41; /*0x100320c3f*/
  v37 = (int *)v15; /*0x100320c46*/
  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a((size_t *)&v41, v15); /*0x100320c49*/
  if ( __OFSUB__(0, v41) ) /*0x100320c50*/
    goto LABEL_47; /*0x100320c57*/
  v2 = v47; /*0x100320c8c*/
  v47[2] = v43; /*0x100320c90*/
  v10 = (size_t)v41; /*0x100320c94*/
  v11 = (__int64)v42; /*0x100320c9b*/
LABEL_50:
  v2[1] = v11; /*0x100320c9f*/
  *v2 = v10; /*0x100320ca3*/
  return v2; /*0x10032093c*/
}