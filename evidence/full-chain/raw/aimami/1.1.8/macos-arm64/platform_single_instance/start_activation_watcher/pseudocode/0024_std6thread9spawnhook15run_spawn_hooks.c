// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x1010ab9d0 depth=2
// std6thread9spawnhook15run_spawn_hooks
__int64 *__fastcall std::thread::spawnhook::run_spawn_hooks::h2d89372a946f036c(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r15
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rbx
  volatile signed __int64 *v6; // rcx
  volatile signed __int64 *v7; // rdx
  volatile signed __int64 *v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v25; // [rsp+18h] [rbp-48h] BYREF
  __int64 v26; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+28h] [rbp-38h]
  volatile signed __int64 *v28; // [rsp+30h] [rbp-30h]

  v2 = a1; /*0x1010ab9e5*/
  std::thread::spawnhook::SPAWN_HOOKS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hfd98df1304d36b20(); /*0x1010ab9ef*/
  v4 = *(unsigned __int8 *)(v3 + 8); /*0x1010ab9f1*/
  if ( v4 != 1 ) /*0x1010ab9f8*/
  {
    if ( v4 == 2 ) /*0x1010ab9fd*/
    {
      a1[3] = 0; /*0x1010ab9ff*/
      *a1 = 0; /*0x1010aba07*/
      a1[1] = 8; /*0x1010aba0e*/
      a1[2] = 0; /*0x1010aba16*/
      return v2; /*0x1010aba1e*/
    }
    v5 = v3; /*0x1010aba2d*/
    std::sys::thread_local::destructors::list::register::haf51cfcb91ad50b1( /*0x1010aba30*/
      v3,
      std::sys::thread_local::native::eager::destroy::h2dab98b992c9c778);
    v3 = v5; /*0x1010aba35*/
    *(_BYTE *)(v5 + 8) = 1; /*0x1010aba38*/
  }
  v28 = *(volatile signed __int64 **)v3; /*0x1010aba3f*/
  v6 = v28; /*0x1010aba3c*/
  *(_QWORD *)v3 = 0; /*0x1010aba43*/
  if ( v6 ) /*0x1010aba4d*/
  {
    if ( _InterlockedIncrement64(v6) <= 0 ) /*0x1010aba53*/
      BUG(); /*0x1010abbf6*/
    v7 = *(volatile signed __int64 **)v3; /*0x1010aba59*/
  }
  else
  {
    v7 = nullptr; /*0x1010aba5e*/
  }
  v25 = (__int64)v7; /*0x1010aba60*/
  *(_QWORD *)v3 = v6; /*0x1010aba64*/
  _$LT$std..thread..spawnhook..SpawnHooks$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9361f56d442e8f62(&v25); /*0x1010aba6b*/
  if ( v25 && !_InterlockedDecrement64((volatile signed __int64 *)v25) ) /*0x1010aba79*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h486189aab142d9dd(&v25); /*0x1010aba83*/
  v8 = v28; /*0x1010aba88*/
  v9 = 8; /*0x1010aba90*/
  if ( v28 ) /*0x1010aba98*/
  {
    v10 = *((_QWORD **)v28 + 4); /*0x1010aba9e*/
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*((_QWORD *)v28 + 3) + 40LL))(*((_QWORD *)v28 + 2), a2); /*0x1010abab1*/
    if ( v12 ) /*0x1010abab7*/
    {
      v13 = v11; /*0x1010ababd*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010abac4*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x40u, 8u); /*0x1010abad3*/
      if ( !v9 ) /*0x1010abadb*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 64); /*0x1010abbf1*/
      *(_QWORD *)v9 = v12; /*0x1010abae1*/
      *(_QWORD *)(v9 + 8) = v13; /*0x1010abae4*/
      v25 = 4; /*0x1010abae8*/
      v26 = v9; /*0x1010abaf0*/
      v27 = 1; /*0x1010abaf4*/
      if ( v10 ) /*0x1010abaff*/
      {
        v14 = 1; /*0x1010abb05*/
        v15 = 24; /*0x1010abb0b*/
        while ( 1 ) /*0x1010abb39*/
        {
          v16 = v9; /*0x1010abb39*/
          v17 = v10[2]; /*0x1010abb3c*/
          v18 = v10[3]; /*0x1010abb40*/
          v10 = (_QWORD *)v10[4]; /*0x1010abb44*/
          v20 = (*(__int64 (__fastcall **)(__int64, __int64))(v18 + 40))(v17, a2); /*0x1010abb4f*/
          v21 = v25; /*0x1010abb52*/
          if ( !v20 ) /*0x1010abb59*/
            break; /*0x1010abb59*/
          v9 = v16; /*0x1010abb5e*/
          if ( v14 == v25 ) /*0x1010abb61*/
          {
            v22 = v19; /*0x1010abb63*/
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01( /*0x1010abb85*/
              &v25,
              v14,
              (__PAIR128__(2, (unsigned __int64)v10) - 1) >> 64,
              8,
              16);
            v9 = v26; /*0x1010abb8a*/
            v19 = v22; /*0x1010abb8e*/
          }
          ++v14; /*0x1010abb20*/
          *(_QWORD *)(v9 + v15 - 8) = v20; /*0x1010abb23*/
          *(_QWORD *)(v9 + v15) = v19; /*0x1010abb28*/
          v15 += 16; /*0x1010abb2c*/
          v27 = v14; /*0x1010abb30*/
          if ( !v10 ) /*0x1010abb37*/
          {
            v21 = v25; /*0x1010abbb6*/
            break; /*0x1010abbb6*/
          }
        }
        v9 = v26; /*0x1010abbba*/
        v8 = v28; /*0x1010abbbe*/
      }
      else
      {
        v21 = 4; /*0x1010abba9*/
        v14 = 1; /*0x1010abbae*/
      }
      v2 = a1; /*0x1010abbc2*/
    }
    else
    {
      v14 = 0; /*0x1010abb9d*/
      v21 = 0; /*0x1010abba0*/
      v9 = 8; /*0x1010abba2*/
    }
  }
  else
  {
    v8 = nullptr; /*0x1010abb93*/
    v14 = 0; /*0x1010abb96*/
    v21 = 0; /*0x1010abb99*/
  }
  v2[3] = (__int64)v8; /*0x1010abbc6*/
  *v2 = v21; /*0x1010abbca*/
  v2[1] = v9; /*0x1010abbcd*/
  v2[2] = v14; /*0x1010abbd1*/
  return v2; /*0x1010abbd8*/
}