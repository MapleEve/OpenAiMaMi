// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18hide_voi 0x101362070 d=2
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

  v2 = a1; /*0x101362085*/
  std::thread::spawnhook::SPAWN_HOOKS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hfd98df1304d36b20(); /*0x10136208f*/
  v4 = *(unsigned __int8 *)(v3 + 8); /*0x101362091*/
  if ( v4 != 1 ) /*0x101362098*/
  {
    if ( v4 == 2 ) /*0x10136209d*/
    {
      a1[3] = 0; /*0x10136209f*/
      *a1 = 0; /*0x1013620a7*/
      a1[1] = 8; /*0x1013620ae*/
      a1[2] = 0; /*0x1013620b6*/
      return v2; /*0x1013620be*/
    }
    v5 = v3; /*0x1013620cd*/
    std::sys::thread_local::destructors::list::register::haf51cfcb91ad50b1( /*0x1013620d0*/
      v3,
      std::sys::thread_local::native::eager::destroy::h2dab98b992c9c778);
    v3 = v5; /*0x1013620d5*/
    *(_BYTE *)(v5 + 8) = 1; /*0x1013620d8*/
  }
  v28 = *(volatile signed __int64 **)v3; /*0x1013620df*/
  v6 = v28; /*0x1013620dc*/
  *(_QWORD *)v3 = 0; /*0x1013620e3*/
  if ( v6 ) /*0x1013620ed*/
  {
    if ( _InterlockedIncrement64(v6) <= 0 ) /*0x1013620f3*/
      BUG(); /*0x101362296*/
    v7 = *(volatile signed __int64 **)v3; /*0x1013620f9*/
  }
  else
  {
    v7 = nullptr; /*0x1013620fe*/
  }
  v25 = (__int64)v7; /*0x101362100*/
  *(_QWORD *)v3 = v6; /*0x101362104*/
  _$LT$std..thread..spawnhook..SpawnHooks$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9361f56d442e8f62(&v25); /*0x10136210b*/
  if ( v25 && !_InterlockedDecrement64((volatile signed __int64 *)v25) ) /*0x101362119*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h486189aab142d9dd(&v25); /*0x101362123*/
  v8 = v28; /*0x101362128*/
  v9 = 8; /*0x101362130*/
  if ( v28 ) /*0x101362138*/
  {
    v10 = *((_QWORD **)v28 + 4); /*0x10136213e*/
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*((_QWORD *)v28 + 3) + 40LL))(*((_QWORD *)v28 + 2), a2); /*0x101362151*/
    if ( v12 ) /*0x101362157*/
    {
      v13 = v11; /*0x10136215d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101362164*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x40u, 8u); /*0x101362173*/
      if ( !v9 ) /*0x10136217b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8); /*0x101362291*/
      *(_QWORD *)v9 = v12; /*0x101362181*/
      *(_QWORD *)(v9 + 8) = v13; /*0x101362184*/
      v25 = 4; /*0x101362188*/
      v26 = v9; /*0x101362190*/
      v27 = 1; /*0x101362194*/
      if ( v10 ) /*0x10136219f*/
      {
        v14 = 1; /*0x1013621a5*/
        v15 = 24; /*0x1013621ab*/
        while ( 1 ) /*0x1013621d9*/
        {
          v16 = v9; /*0x1013621d9*/
          v17 = v10[2]; /*0x1013621dc*/
          v18 = v10[3]; /*0x1013621e0*/
          v10 = (_QWORD *)v10[4]; /*0x1013621e4*/
          v20 = (*(__int64 (__fastcall **)(__int64, __int64))(v18 + 40))(v17, a2); /*0x1013621ef*/
          v21 = v25; /*0x1013621f2*/
          if ( !v20 ) /*0x1013621f9*/
            break; /*0x1013621f9*/
          v9 = v16; /*0x1013621fe*/
          if ( v14 == v25 ) /*0x101362201*/
          {
            v22 = v19; /*0x101362203*/
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01( /*0x101362225*/
              (unsigned __int64 *)&v25,
              v14,
              (__PAIR128__(2, (unsigned __int64)v10) - 1) >> 64,
              8,
              16);
            v9 = v26; /*0x10136222a*/
            v19 = v22; /*0x10136222e*/
          }
          ++v14; /*0x1013621c0*/
          *(_QWORD *)(v9 + v15 - 8) = v20; /*0x1013621c3*/
          *(_QWORD *)(v9 + v15) = v19; /*0x1013621c8*/
          v15 += 16; /*0x1013621cc*/
          v27 = v14; /*0x1013621d0*/
          if ( !v10 ) /*0x1013621d7*/
          {
            v21 = v25; /*0x101362256*/
            break; /*0x101362256*/
          }
        }
        v9 = v26; /*0x10136225a*/
        v8 = v28; /*0x10136225e*/
      }
      else
      {
        v21 = 4; /*0x101362249*/
        v14 = 1; /*0x10136224e*/
      }
      v2 = a1; /*0x101362262*/
    }
    else
    {
      v14 = 0; /*0x10136223d*/
      v21 = 0; /*0x101362240*/
      v9 = 8; /*0x101362242*/
    }
  }
  else
  {
    v8 = nullptr; /*0x101362233*/
    v14 = 0; /*0x101362236*/
    v21 = 0; /*0x101362239*/
  }
  v2[3] = (__int64)v8; /*0x101362266*/
  *v2 = v21; /*0x10136226a*/
  v2[1] = v9; /*0x10136226d*/
  v2[2] = v14; /*0x101362271*/
  return v2; /*0x101362278*/
}