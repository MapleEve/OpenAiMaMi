// __ZN13codexmate_lib4core13oauth_refresh18decode_jwt_payload @ 0x1007ba230
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::decode_jwt_payload | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
char __fastcall codexmate_lib::core::oauth_refresh::decode_jwt_payload::hd78a97a7113bd755(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  signed __int64 v6; // r15
  char *v7; // r14
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  char *v10; // rax
  int v11; // edx
  char v12; // si
  char v13; // di
  char v14; // r8
  char *v15; // rax
  int v16; // edi
  int v17; // esi
  signed __int64 v18; // r12
  __int64 v19; // r13
  _QWORD *v20; // r14
  signed __int64 v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r12
  signed __int64 v26; // r14
  __int64 v27; // r15
  signed __int64 v29; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD *v30; // [rsp+10h] [rbp-B0h]
  signed __int64 v31; // [rsp+18h] [rbp-A8h]
  __int64 v32; // [rsp+20h] [rbp-A0h]
  __int64 v33; // [rsp+28h] [rbp-98h]
  signed __int64 v34; // [rsp+30h] [rbp-90h]
  __int64 v35; // [rsp+38h] [rbp-88h]
  _QWORD v36[5]; // [rsp+40h] [rbp-80h] BYREF
  char v37; // [rsp+68h] [rbp-58h]
  __int16 v38; // [rsp+70h] [rbp-50h]
  signed __int64 v39; // [rsp+78h] [rbp-48h] BYREF
  __int64 v40; // [rsp+80h] [rbp-40h]
  signed __int64 v41; // [rsp+88h] [rbp-38h]
  __int64 v42; // [rsp+90h] [rbp-30h]

  v34 = 0; /*0x1007ba247*/
  v35 = a3; /*0x1007ba252*/
  v36[0] = a2; /*0x1007ba25d*/
  v36[1] = a3; /*0x1007ba261*/
  v36[2] = 0; /*0x1007ba265*/
  v36[3] = a3; /*0x1007ba26d*/
  v36[4] = 0x2E0000002ELL; /*0x1007ba27b*/
  v37 = 1; /*0x1007ba27f*/
  v38 = 1; /*0x1007ba283*/
  v33 = 2; /*0x1007ba289*/
  LOBYTE(v4) = _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007ba29b*/
                 &v39,
                 v36);
  if ( (_DWORD)v39 == 1 ) /*0x1007ba2a4*/
  {
    v34 = v41; /*0x1007ba2aa*/
  }
  else
  {
    if ( HIBYTE(v38) ) /*0x1007ba31b*/
      goto LABEL_47; /*0x1007ba31b*/
    HIBYTE(v38) = 1; /*0x1007ba321*/
    if ( !(_BYTE)v38 && v35 == v34 ) /*0x1007ba33d*/
      goto LABEL_47; /*0x1007ba33d*/
  }
  LOBYTE(v4) = --v33; /*0x1007ba2cb*/
  if ( HIBYTE(v38) ) /*0x1007ba2d9*/
  {
LABEL_47:
    *(_BYTE *)a1 = 6; /*0x1007ba5fb*/
    return v4; /*0x1007ba5fb*/
  }
  v5 = v36[0]; /*0x1007ba2df*/
  LOBYTE(v4) = _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007ba2ea*/
                 &v39,
                 v36);
  if ( (_DWORD)v39 != 1 ) /*0x1007ba2f3*/
  {
    if ( !HIBYTE(v38) ) /*0x1007ba4b7*/
    {
      HIBYTE(v38) = 1; /*0x1007ba4bd*/
      v6 = v35 - v34; /*0x1007ba4cf*/
      LOBYTE(v4) = v38 | (v35 != v34); /*0x1007ba4d5*/
      if ( (_BYTE)v4 == 1 ) /*0x1007ba4da*/
      {
        v7 = (char *)(v36[0] + v34); /*0x1007ba37a*/
        goto LABEL_11; /*0x1007ba37a*/
      }
    }
    goto LABEL_47; /*0x1007ba4da*/
  }
  v6 = v40 - v34; /*0x1007ba308*/
  v7 = (char *)(v34 + v5); /*0x1007ba30b*/
  v34 = v41; /*0x1007ba30e*/
LABEL_11:
  v8 = v6; /*0x1007ba37e*/
  while ( 1 ) /*0x1007ba39b*/
  {
    v9 = v8; /*0x1007ba39b*/
    if ( !v8 ) /*0x1007ba3a1*/
      break; /*0x1007ba3a1*/
    v10 = &v7[v8]; /*0x1007ba3a3*/
    v11 = v7[v9 - 1]; /*0x1007ba3a7*/
    if ( v11 >= 0 ) /*0x1007ba3ad*/
    {
      v8 = v9 - 1; /*0x1007ba393*/
      if ( v11 != 61 ) /*0x1007ba399*/
        break; /*0x1007ba399*/
    }
    else
    {
      v12 = *(v10 - 2); /*0x1007ba3af*/
      if ( v12 >= -64 ) /*0x1007ba3b7*/
      {
        v15 = v10 - 2; /*0x1007ba3dc*/
        v17 = v12 & 0x1F; /*0x1007ba3e0*/
      }
      else
      {
        v13 = *(v10 - 3); /*0x1007ba3b9*/
        if ( v13 >= -64 ) /*0x1007ba3c1*/
        {
          v15 = v10 - 3; /*0x1007ba3e5*/
          v16 = v13 & 0xF; /*0x1007ba3e9*/
        }
        else
        {
          v14 = *(v10 - 4); /*0x1007ba3c3*/
          v15 = v10 - 4; /*0x1007ba3c8*/
          v16 = ((v14 & 7) << 6) | v13 & 0x3F; /*0x1007ba3d7*/
        }
        v17 = (v16 << 6) | v12 & 0x3F; /*0x1007ba3f2*/
      }
      v8 = v15 - v7; /*0x1007ba3fc*/
      if ( ((v17 << 6) | v11 & 0x3F) != 0x3D ) /*0x1007ba402*/
        break; /*0x1007ba402*/
    }
  }
  base64::engine::Engine::decode::inner::h0ef0f283e408ae41(&v39, &unk_1016736F3, v7, v9); /*0x1007ba404*/
  v18 = v39; /*0x1007ba417*/
  if ( __OFSUB__(-v39, 1) ) /*0x1007ba41e*/
  {
    if ( v6 < 0 ) /*0x1007ba426*/
    {
      v19 = 0; /*0x1007ba42c*/
      goto LABEL_25; /*0x1007ba42c*/
    }
    if ( v6 ) /*0x1007ba512*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v39, &unk_1016736F3); /*0x1007ba514*/
      v19 = 1; /*0x1007ba519*/
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1007ba527*/
      if ( !v24 ) /*0x1007ba52f*/
LABEL_25:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v6); /*0x1007ba42f*/
      v25 = v24; /*0x1007ba535*/
    }
    else
    {
      v25 = 1; /*0x1007ba573*/
    }
    memcpy((void *)v25, v7, v6); /*0x1007ba58c*/
    v39 = v6; /*0x1007ba591*/
    v40 = v25; /*0x1007ba595*/
    v41 = v6; /*0x1007ba599*/
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h1677e2b780057c48( /*0x1007ba5a9*/
      &v39,
      -(int)v6 & 3,
      61);
    v26 = v39; /*0x1007ba5ae*/
    v27 = v40; /*0x1007ba5b2*/
    LOBYTE(v4) = base64::engine::Engine::decode::inner::h0ef0f283e408ae41(&v29, &unk_1016736F3, v40, v41); /*0x1007ba5cb*/
    if ( v26 ) /*0x1007ba5dd*/
      LOBYTE(v4) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 1); /*0x1007ba5ea*/
    v18 = v29; /*0x1007ba5ef*/
    if ( v29 == 0x8000000000000000LL ) /*0x1007ba5f9*/
      goto LABEL_47; /*0x1007ba5f9*/
    v20 = v30; /*0x1007ba610*/
    v21 = v31; /*0x1007ba617*/
  }
  else
  {
    v20 = (_QWORD *)v40; /*0x1007ba43a*/
    v21 = v41; /*0x1007ba43e*/
  }
  v39 = (signed __int64)v20; /*0x1007ba442*/
  v40 = v21; /*0x1007ba446*/
  v41 = 0; /*0x1007ba44a*/
  v42 = 0; /*0x1007ba452*/
  serde_json::de::from_trait::ha73f8db442141d1f(&v29, &v39); /*0x1007ba465*/
  if ( (_BYTE)v29 == 6 ) /*0x1007ba471*/
  {
    *(_BYTE *)a1 = 6; /*0x1007ba473*/
    v22 = v30; /*0x1007ba476*/
    if ( *v30 == 1 ) /*0x1007ba484*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v30 + 1); /*0x1007ba53e*/
    }
    else if ( !*v30 ) /*0x1007ba47d*/
    {
      v23 = v30[2]; /*0x1007ba493*/
      if ( v23 ) /*0x1007ba49a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30[1], v23, 1); /*0x1007ba4a9*/
    }
    LOBYTE(v4) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 40, 8); /*0x1007ba550*/
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v32; /*0x1007ba4ec*/
    *(_QWORD *)(a1 + 16) = v31; /*0x1007ba4f7*/
    v4 = v29; /*0x1007ba4fb*/
    *(_QWORD *)(a1 + 8) = v30; /*0x1007ba509*/
    *(_QWORD *)a1 = v4; /*0x1007ba50d*/
  }
  if ( v18 ) /*0x1007ba558*/
    LOBYTE(v4) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, 1); /*0x1007ba569*/
  return v4; /*0x1007ba5fe*/
}