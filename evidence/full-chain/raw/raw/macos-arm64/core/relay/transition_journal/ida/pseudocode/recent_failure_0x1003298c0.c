// __ZN13codexmate_lib4core5relay18transition_journal14recent_failure @ 0x1003298c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::recent_failure::h7f63e7555f5a7638(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  bool v12; // of
  __int64 v13; // r13
  __int64 v14; // r14
  _QWORD *v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rcx
  __int128 v31; // xmm0
  char v32; // al
  __int64 v33; // rsi
  _QWORD v35[6]; // [rsp+8h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  __int128 v41; // [rsp+60h] [rbp-A0h]
  char v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  char v50; // [rsp+B0h] [rbp-50h]
  __int16 v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  _QWORD *v53; // [rsp+C8h] [rbp-38h]
  __int64 v54; // [rsp+D0h] [rbp-30h]

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v43); /*0x1003298e7*/
  v6 = ((int)v43 >> 13) - 1; /*0x1003298f7*/
  v7 = 0; /*0x1003298fa*/
  v53 = a1; /*0x1003298fe*/
  if ( (int)v43 >> 13 <= 0 ) /*0x100329902*/
  {
    v8 = (1 - ((int)v43 >> 13)) / 0x190u + 1; /*0x100329916*/
    v6 += 400 * v8; /*0x10032991e*/
    v7 = -146097 * v8; /*0x100329920*/
  }
  v9 = 1000 /*0x100329985*/
     * (HIDWORD(v43)
      + 86400LL
      * (int)(((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + (((unsigned int)v43 >> 4) & 0x1FF) - v6 / 100 - 719163))
     + (unsigned int)v44 / 0xF4240uLL;
  v10 = 1000 * a3 + a4 / 0xF4240uLL; /*0x1003299a1*/
  if ( v10 >= 0x7FFFFFFFFFFFFFFFLL ) /*0x1003299b5*/
    v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x1003299b5*/
  if ( (0x3E8 * (unsigned __int128)a3 + a4 / 0xF4240uLL) >> 64 ) /*0x1003299a1*/
    v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x1003299bc*/
  v11 = ((__int64)(v9 - v10) >= 0) + 0x7FFFFFFFFFFFFFFFLL; /*0x1003299c8*/
  v12 = __OFSUB__(v9, v10); /*0x1003299cb*/
  v13 = v9 - v10; /*0x1003299cb*/
  if ( v12 ) /*0x1003299ce*/
    v13 = v11; /*0x1003299ce*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1003299f4*/
    &v43,
    *(_QWORD *)(a2 + 584),
    *(_QWORD *)(a2 + 592),
    &anon_b0ee9adff4519c22b647af231a5a39fa_246,
    19);
  v14 = v44; /*0x1003299f9*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v36, v44, v45); /*0x100329a0b*/
  if ( v43 ) /*0x100329a1a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v43, 1); /*0x100329a24*/
  if ( !__OFSUB__(-v36, 1) ) /*0x100329a36*/
  {
    v54 = v36; /*0x100329aa3*/
    v43 = 0; /*0x100329ab5*/
    v44 = v38; /*0x100329ac0*/
    v52 = v37; /*0x100329ac4*/
    v45 = v37; /*0x100329ac8*/
    v46 = v38; /*0x100329acc*/
    v47 = 0; /*0x100329ad0*/
    v48 = v38; /*0x100329ad8*/
    v49 = 0xA0000000ALL; /*0x100329ae6*/
    v50 = 1; /*0x100329aea*/
    v51 = 0; /*0x100329aee*/
    while ( 1 ) /*0x100329b22*/
    {
      v20 = core::str::iter::SplitInternal$LT$P$GT$::next_back_inclusive::hf4efa7ea52376453(&v43); /*0x100329b22*/
      if ( !v20 ) /*0x100329b2a*/
      {
        v15 = v53; /*0x100329cc5*/
        *v53 = 0x8000000000000000LL; /*0x100329cd3*/
        v33 = v54; /*0x100329cd7*/
        if ( !v54 ) /*0x100329cde*/
          return v15; /*0x100329cde*/
        goto LABEL_46; /*0x100329cde*/
      }
      if ( !v21 ) /*0x100329b33*/
        goto LABEL_29; /*0x100329b33*/
      if ( *(_BYTE *)(v20 + v21 - 1) == 10 ) /*0x100329b3a*/
        break; /*0x100329b3a*/
LABEL_30:
      v35[0] = v20; /*0x100329b62*/
      v35[1] = v21; /*0x100329b69*/
      v35[3] = 0; /*0x100329b70*/
      v35[2] = 0; /*0x100329b78*/
      v35[4] = v20; /*0x100329b7f*/
      v35[5] = v21; /*0x100329b86*/
      serde_json::de::from_trait::h8d50858336b283d3(&v36, v35); /*0x100329b9b*/
      v25 = v36; /*0x100329ba0*/
      if ( v36 == 0x8000000000000000LL ) /*0x100329bb4*/
      {
        v26 = v37; /*0x100329bb6*/
        if ( *(_QWORD *)v37 == 1 ) /*0x100329bc4*/
        {
          core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v37 + 8); /*0x100329b08*/
        }
        else if ( !*(_QWORD *)v37 ) /*0x100329bbd*/
        {
          v27 = *(_QWORD *)(v37 + 16); /*0x100329bd3*/
          if ( v27 ) /*0x100329bda*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v37 + 8), v27, 1); /*0x100329be9*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 40, 8); /*0x100329b1a*/
      }
      else
      {
        v28 = v39; /*0x100329c07*/
        v29 = v40; /*0x100329c0e*/
        if ( *((__int64 *)&v41 + 1) >= v13 ) /*0x100329c1c*/
        {
          v30 = v38; /*0x100329c1e*/
          v31 = v41; /*0x100329c25*/
          v32 = v42; /*0x100329c2c*/
          if ( v38 == 6 ) /*0x100329c37*/
          {
            if ( !(*(_DWORD *)v37 ^ 0x6C696166 | *(unsigned __int16 *)(v37 + 4) ^ 0x6465) ) /*0x100329c84*/
              goto LABEL_48; /*0x100329c84*/
          }
          else if ( v38 == 13 && !(*(_QWORD *)v37 ^ 0x665F74696D6D6F63LL | *(_QWORD *)(v37 + 5) ^ 0x64656C6961665F74LL) ) /*0x100329c60*/
          {
LABEL_48:
            v15 = v53; /*0x100329d03*/
            v53[1] = v37; /*0x100329d09*/
            v15[2] = v30; /*0x100329d0d*/
            v15[3] = v28; /*0x100329d11*/
            v15[4] = v29; /*0x100329d15*/
            *v15 = v25; /*0x100329d19*/
            *(_OWORD *)(v15 + 5) = v31; /*0x100329d1d*/
            *((_BYTE *)v15 + 56) = v32 & 1; /*0x100329d22*/
            v33 = v54; /*0x100329d26*/
            if ( !v54 ) /*0x100329d2d*/
              return v15; /*0x100329d2d*/
LABEL_46:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v33, 1); /*0x100329ce0*/
            return v15; /*0x100329ce9*/
          }
        }
        if ( v36 ) /*0x100329c93*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x100329c9a*/
        if ( 2 * v28 ) /*0x100329c9f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x100329cbb*/
      }
    }
    v22 = v21 - 1; /*0x100329b3f*/
    if ( v21 != 1 ) /*0x100329b42*/
    {
      v23 = *(_BYTE *)(v20 + v21 - 2) == 13; /*0x100329b44*/
      v24 = v21 - 2; /*0x100329b49*/
      if ( v23 ) /*0x100329b4d*/
        v22 = v24; /*0x100329b4d*/
      v21 = v22; /*0x100329b51*/
      goto LABEL_30; /*0x100329b54*/
    }
LABEL_29:
    v21 = 0; /*0x100329b60*/
    goto LABEL_30; /*0x100329b60*/
  }
  v15 = v53; /*0x100329a47*/
  if ( (v37 & 3) == 1 ) /*0x100329a4b*/
  {
    v16 = v37 - 1; /*0x100329a4d*/
    v17 = *(_QWORD *)(v37 - 1); /*0x100329a51*/
    v18 = *(_QWORD *)(v37 + 7); /*0x100329a55*/
    if ( *(_QWORD *)v18 ) /*0x100329a59*/
      (*(void (__fastcall **)(__int64))v18)(v17); /*0x100329a65*/
    v19 = *(_QWORD *)(v18 + 8); /*0x100329a67*/
    if ( v19 ) /*0x100329a6f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x100329a79*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24, 8); /*0x100329a8b*/
  }
  *v15 = 0x8000000000000000LL; /*0x100329a9a*/
  return v15; /*0x100329cf1*/
}