// mac 1.1.8 behavioral install_virtual_unlock_auth 0x1003c9f50 d=1
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::he4543b245da1c5f6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // r12
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  const void *v10; // r14
  size_t v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v22; // [rsp+10h] [rbp-40h]
  _QWORD *v23; // [rsp+20h] [rbp-30h]

  if ( *(_BYTE *)a1 == 1 ) /*0x1003c9f64*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003ca0ba*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v4 = *(_QWORD *)(a1 + 8); /*0x1003c9f6a*/
  v5 = *(unsigned __int64 **)v4; /*0x1003c9f72*/
  v22 = a2; /*0x1003c9f7d*/
  if ( *(_BYTE *)(a1 + 1) == 1 ) /*0x1003c9f85*/
  {
    v6 = v5[2]; /*0x1003c9f87*/
    if ( *v5 == v6 ) /*0x1003c9f8e*/
    {
      a2 = v5[2]; /*0x1003ca0fc*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v5, a2, 1, 1, 1u); /*0x1003ca0ff*/
      v6 = v5[2]; /*0x1003ca104*/
    }
    *(_BYTE *)(v5[1] + v6) = 10; /*0x1003c9f98*/
    v7 = v6 + 1; /*0x1003c9f9d*/
  }
  else
  {
    v8 = v5[2]; /*0x1003c9fa5*/
    if ( *v5 - v8 <= 1 ) /*0x1003c9fb0*/
    {
      a2 = v5[2]; /*0x1003ca120*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v5, a2, 2, 1, 1u); /*0x1003ca123*/
      v8 = v5[2]; /*0x1003ca128*/
    }
    *(_WORD *)(v5[1] + v8) = 2604; /*0x1003c9fba*/
    v7 = v8 + 2; /*0x1003c9fc1*/
  }
  v5[2] = v7; /*0x1003c9fc5*/
  v23 = (_QWORD *)v4; /*0x1003c9fc9*/
  v9 = *(_QWORD *)(v4 + 24); /*0x1003c9fcd*/
  if ( v9 ) /*0x1003c9fd4*/
  {
    v10 = (const void *)v23[1]; /*0x1003c9fda*/
    v11 = v23[2]; /*0x1003c9fde*/
    do /*0x1003ca017*/
    {
      if ( v11 > *v5 - v7 ) /*0x1003c9ff9*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v5, v7, v11, 1, 1u); /*0x1003ca02f*/
        v7 = v5[2]; /*0x1003ca034*/
      }
      a2 = (__int64)v10; /*0x1003ca002*/
      memcpy((void *)(v7 + v5[1]), v10, v11); /*0x1003ca008*/
      v7 += v11; /*0x1003ca00d*/
      v5[2] = v7; /*0x1003ca010*/
      --v9; /*0x1003ca014*/
    }
    while ( v9 ); /*0x1003ca017*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003ca03e*/
  serde_json::ser::format_escaped_str::hf263ee7e7d5ab05a(v23, a2, v22, a3); /*0x1003ca051*/
  v12 = *(_QWORD *)(a4 + 8); /*0x1003ca05a*/
  v13 = *(_QWORD *)(a4 + 16); /*0x1003ca05e*/
  v14 = *v23; /*0x1003ca062*/
  v15 = *(_QWORD *)(*v23 + 16LL); /*0x1003ca069*/
  if ( (unsigned __int64)(*(_QWORD *)*v23 - v15) <= 1 ) /*0x1003ca074*/
  {
    v18 = *(_QWORD *)(a4 + 8); /*0x1003ca0bf*/
    v19 = *(_QWORD *)(a4 + 16); /*0x1003ca0c7*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003ca0d8*/
      (unsigned __int64 *)*v23,
      v15,
      2,
      1,
      1u);
    v13 = v19; /*0x1003ca0dd*/
    v12 = v18; /*0x1003ca0e0*/
    v15 = *(_QWORD *)(v14 + 16); /*0x1003ca0e3*/
  }
  *(_WORD *)(*(_QWORD *)(v14 + 8) + v15) = 8250; /*0x1003ca07a*/
  v16 = v15 + 2; /*0x1003ca080*/
  *(_QWORD *)(v14 + 16) = v16; /*0x1003ca084*/
  serde_json::ser::format_escaped_str::hf263ee7e7d5ab05a(v23, v16, v12, v13); /*0x1003ca08b*/
  *((_BYTE *)v23 + 32) = 1; /*0x1003ca090*/
  return 0; /*0x1003ca098*/
}