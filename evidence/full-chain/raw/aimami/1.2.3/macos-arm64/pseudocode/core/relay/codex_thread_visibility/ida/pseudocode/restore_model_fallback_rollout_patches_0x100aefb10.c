// __ZN13codexmate_lib4core5relay23codex_thread_visibility38restore_model_fallback_rollout_patches @ 0x100aefb10
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::restore_model_fallback_rollout_patches | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_model_fallback_rollout_patches::h2c50efc7f6189325(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  __int64 result; // rax
  _DWORD v16[24]; // [rsp+10h] [rbp-150h] BYREF
  _QWORD v17[12]; // [rsp+70h] [rbp-F0h] BYREF
  _QWORD v18[4]; // [rsp+D0h] [rbp-90h] BYREF
  _QWORD v19[2]; // [rsp+F0h] [rbp-70h] BYREF
  _QWORD v20[3]; // [rsp+100h] [rbp-60h] BYREF
  _QWORD *v21; // [rsp+118h] [rbp-48h]
  __int64 v22; // [rsp+120h] [rbp-40h] BYREF
  __int64 v23; // [rsp+128h] [rbp-38h]
  __int64 v24; // [rsp+130h] [rbp-30h]

  v3 = a1; /*0x100aefb24*/
  v22 = 0; /*0x100aefb27*/
  v23 = 8; /*0x100aefb2f*/
  v24 = 0; /*0x100aefb37*/
  if ( !a3 ) /*0x100aefb42*/
    goto LABEL_14; /*0x100aefb42*/
  v21 = a1; /*0x100aefb4b*/
  v4 = 72 * a3; /*0x100aefb53*/
  do /*0x100aefb95*/
  {
    v8 = *(_QWORD *)(a2 + v4 - 64); /*0x100aefb9b*/
    v9 = *(_QWORD *)(a2 + v4 - 56); /*0x100aefba0*/
    codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h49193b4a14eef084( /*0x100aefbca*/
      v16,
      v8,
      v9,
      *(_QWORD *)(a2 + v4 - 40),
      *(_QWORD *)(a2 + v4 - 32),
      *(_QWORD *)(a2 + v4 - 16),
      *(_QWORD *)(a2 + v4 - 8));
    if ( v16[0] != 11 ) /*0x100aefbd6*/
    {
      qmemcpy(v17, v16, sizeof(v17)); /*0x100aefbe7*/
      v19[0] = v8; /*0x100aefbea*/
      v19[1] = v9; /*0x100aefbee*/
      v18[0] = v19; /*0x100aefbf6*/
      v18[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aefc04*/
      v18[2] = v17; /*0x100aefc0b*/
      v18[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100aefc16*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v20, &unk_1017B9AD3, v18); /*0x100aefc2c*/
      v10 = v24; /*0x100aefc31*/
      if ( v24 == v22 ) /*0x100aefc39*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v22); /*0x100aefc43*/
      v5 = v23; /*0x100aefb60*/
      v6 = 3 * v10; /*0x100aefb64*/
      *(_QWORD *)(v23 + 8 * v6 + 16) = v20[2]; /*0x100aefb6c*/
      v7 = v20[0]; /*0x100aefb71*/
      *(_QWORD *)(v5 + 8 * v6 + 8) = v20[1]; /*0x100aefb79*/
      *(_QWORD *)(v5 + 8 * v6) = v7; /*0x100aefb7e*/
      v24 = v10 + 1; /*0x100aefb85*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v17); /*0x100aefb8c*/
    }
    v4 -= 72; /*0x100aefb91*/
  }
  while ( v4 ); /*0x100aefb95*/
  v3 = v21; /*0x100aefc54*/
  if ( v24 ) /*0x100aefc58*/
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v17, v23, v24, " | ", 3); /*0x100aefc76*/
    v3[3] = v17[2]; /*0x100aefc82*/
    v11 = v17[0]; /*0x100aefc86*/
    v3[2] = v17[1]; /*0x100aefc94*/
    v3[1] = v11; /*0x100aefc98*/
    v12 = v24; /*0x100aefc9c*/
    *v3 = 10; /*0x100aefca0*/
    if ( v12 ) /*0x100aefcaa*/
    {
      v13 = (_QWORD *)(v23 + 8); /*0x100aefcb0*/
      do /*0x100aefcc7*/
      {
        v14 = *(v13 - 1); /*0x100aefcc9*/
        if ( v14 ) /*0x100aefcd0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x100aefcda*/
        v13 += 3; /*0x100aefcc0*/
        --v12; /*0x100aefcc4*/
      }
      while ( v12 ); /*0x100aefcc7*/
    }
  }
  else
  {
LABEL_14:
    *v3 = 11; /*0x100aefce1*/
  }
  result = v22; /*0x100aefce8*/
  if ( v22 ) /*0x100aefcef*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 24 * v22, 8); /*0x100aefd02*/
  return result; /*0x100aefd07*/
}