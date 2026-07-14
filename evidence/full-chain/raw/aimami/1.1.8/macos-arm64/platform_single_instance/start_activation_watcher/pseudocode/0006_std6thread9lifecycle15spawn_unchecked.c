// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x10047a8b0 depth=1
// std6thread9lifecycle15spawn_unchecked
_QWORD *__fastcall std::thread::lifecycle::spawn_unchecked::h44c9f123aef0529a(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        void *__src)
{
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // al
  __int64 v20; // rax
  volatile signed __int64 *v21; // rax
  volatile signed __int64 *v22; // r14
  volatile signed __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  void *v28; // rax
  void *v29; // r14
  __int64 v30; // rt0
  char v31; // of
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  volatile signed __int64 *v35; // rcx
  _QWORD v37[28]; // [rsp+0h] [rbp-230h] BYREF
  _QWORD v38[28]; // [rsp+E0h] [rbp-150h] BYREF
  __int64 v39; // [rsp+1C0h] [rbp-70h] BYREF
  __int64 v40; // [rsp+1C8h] [rbp-68h]
  __int64 v41; // [rsp+1D0h] [rbp-60h]
  __int64 v42; // [rsp+1D8h] [rbp-58h]
  __int64 v43; // [rsp+1E0h] [rbp-50h]
  int v44; // [rsp+1ECh] [rbp-44h]
  _QWORD *v45; // [rsp+1F0h] [rbp-40h]
  volatile signed __int64 *v46; // [rsp+1F8h] [rbp-38h] BYREF
  volatile signed __int64 *v47[6]; // [rsp+200h] [rbp-30h] BYREF

  v44 = a5; /*0x10047a8c7*/
  v45 = a2; /*0x10047a8ce*/
  v43 = a6; /*0x10047a8d5*/
  if ( (a3 & 1) != 0 ) /*0x10047a8dc*/
    goto LABEL_31; /*0x10047a8dc*/
  if ( std::thread::lifecycle::spawn_unchecked::_$u7b$$u7b$closure$u7d$$u7d$::MIN::h6b7e772c7f111bef ) /*0x10047a8ef*/
  {
    a4 = std::thread::lifecycle::spawn_unchecked::_$u7b$$u7b$closure$u7d$$u7d$::MIN::h6b7e772c7f111bef - 1LL; /*0x10047a8f1*/
    goto LABEL_31; /*0x10047a8f4*/
  }
  std::env::_var_os::h174f31a71fef3df9(v37, &unk_1012C505E, 14); /*0x10047a911*/
  v10 = v37[0]; /*0x10047a916*/
  a4 = 0x200000; /*0x10047a91d*/
  if ( __OFSUB__(-v37[0], 1) ) /*0x10047a929*/
    goto LABEL_30; /*0x10047a929*/
  core::str::converts::from_utf8::hb32deb9559450f6e((__int64)v38, v37[1], v37[2]); /*0x10047a947*/
  if ( LODWORD(v38[0]) != 1 && v38[2] ) /*0x10047a963*/
  {
    if ( v38[2] != 1 ) /*0x10047a974*/
    {
      LOBYTE(v11) = *(_BYTE *)v38[1]; /*0x10047a98d*/
      goto LABEL_12; /*0x10047a98d*/
    }
    v11 = *(unsigned __int8 *)v38[1]; /*0x10047a976*/
    if ( v11 != 43 && v11 != 45 ) /*0x10047a985*/
    {
LABEL_12:
      v12 = (_BYTE)v11 == 43; /*0x10047a990*/
      v13 = v12 + v38[1]; /*0x10047a99e*/
      if ( (unsigned __int64)(v38[2] - v12) >= 0x11 ) /*0x10047a9ab*/
      {
        v16 = 0; /*0x10047a9e6*/
        a4 = 0; /*0x10047a9ef*/
        while ( v16 + v12 - v38[2] ) /*0x10047a9f8*/
        {
          v17 = 10 * a4; /*0x10047a9fd*/
          if ( is_mul_ok(0xAu, a4) ) /*0x10047a9fd*/
          {
            v18 = (unsigned int)*(unsigned __int8 *)(v13 + v16) - 48; /*0x10047aa0a*/
            a4 = v18 + v17; /*0x10047aa0d*/
            v19 = __CFADD__(v18, v17); /*0x10047aa10*/
            if ( (unsigned int)v18 <= 9 ) /*0x10047aa16*/
            {
              ++v16; /*0x10047aa18*/
              if ( !v19 ) /*0x10047aa1d*/
                continue; /*0x10047aa1d*/
            }
          }
          a4 = 0x200000; /*0x10047aa1f*/
          if ( v10 ) /*0x10047aa28*/
            goto LABEL_29; /*0x10047aa28*/
          goto LABEL_30; /*0x10047aa28*/
        }
      }
      else
      {
        if ( v38[2] == v12 ) /*0x10047a99b*/
        {
          a4 = 0; /*0x10047aa2c*/
          if ( !v10 ) /*0x10047aa32*/
            goto LABEL_30; /*0x10047aa32*/
          goto LABEL_29; /*0x10047aa32*/
        }
        v14 = 0; /*0x10047a9b8*/
        a4 = 0; /*0x10047a9ba*/
        while ( 1 ) /*0x10047a9c1*/
        {
          v15 = *(unsigned __int8 *)(v13 + v14) - 48; /*0x10047a9c1*/
          if ( v15 > 9 ) /*0x10047a9c7*/
            break; /*0x10047a9c7*/
          a4 = v15 + 10 * a4; /*0x10047a9cf*/
          if ( !(++v14 + v12 - v38[2]) ) /*0x10047a9d9*/
            goto LABEL_28; /*0x10047a9dc*/
        }
        a4 = 0x200000; /*0x10047aa36*/
      }
    }
  }
LABEL_28:
  if ( v10 ) /*0x10047aa3f*/
LABEL_29:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10047aa41*/
LABEL_30:
  std::thread::lifecycle::spawn_unchecked::_$u7b$$u7b$closure$u7d$$u7d$::MIN::h6b7e772c7f111bef = a4 + 1; /*0x10047aa51*/
LABEL_31:
  v20 = std::thread::id::ThreadId::new::h915fa47e758550ba(); /*0x10047aa60*/
  v47[0] = std::thread::thread::Thread::new::ha0b48c7a72ef1813(v20, v45); /*0x10047aa7b*/
  if ( (_BYTE)v44 ) /*0x10047aa83*/
  {
    v42 = 0; /*0x10047aa85*/
    v39 = 0; /*0x10047aa8d*/
    v40 = 8; /*0x10047aa95*/
    v41 = 0; /*0x10047aa9d*/
  }
  else
  {
    std::thread::spawnhook::run_spawn_hooks::h2d89372a946f036c(&v39, v47); /*0x10047aaaf*/
  }
  v38[0] = 1; /*0x10047aab4*/
  v38[1] = 1; /*0x10047aabf*/
  v38[2] = a6; /*0x10047aaca*/
  v38[3] = 0; /*0x10047aad1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10047aadc*/
  v21 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x30u, 8u); /*0x10047aaeb*/
  if ( !v21 ) /*0x10047aaf3*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x10047acd5*/
  v22 = v21; /*0x10047aaf9*/
  *((_QWORD *)v21 + 5) = v38[5]; /*0x10047ab03*/
  *((_QWORD *)v21 + 4) = v38[4]; /*0x10047ab0e*/
  *((_QWORD *)v21 + 3) = v38[3]; /*0x10047ab19*/
  *((_QWORD *)v21 + 2) = v38[2]; /*0x10047ab24*/
  v23 = v38[0]; /*0x10047ab28*/
  *((_QWORD *)v22 + 1) = v38[1]; /*0x10047ab36*/
  *v22 = v23; /*0x10047ab3a*/
  v46 = v22; /*0x10047ab3d*/
  if ( _InterlockedIncrement64(v22) <= 0 ) /*0x10047ab45*/
    goto LABEL_51; /*0x10047ab45*/
  memcpy(&v37[5], __src, 0xB8u); /*0x10047ab5b*/
  v37[3] = v42; /*0x10047ab64*/
  v37[2] = v41; /*0x10047ab6f*/
  v37[1] = v40; /*0x10047ab7e*/
  v37[0] = v39; /*0x10047ab85*/
  v37[4] = v22; /*0x10047ab8c*/
  v27 = *((_QWORD *)v22 + 2); /*0x10047ab93*/
  if ( v27 ) /*0x10047ab9a*/
    std::thread::scoped::ScopeData::increment_num_running_threads::hdb6cf601e92f2af7( /*0x10047aba0*/
      v27 + 16,
      __src,
      v24,
      v40,
      v25,
      v26,
      v37[0],
      v37[1],
      v37[2],
      v37[3],
      v37[4]);
  memcpy(v38, v37, sizeof(v38)); /*0x10047abb8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10047abbd*/
  v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xE0u, 8u); /*0x10047abcc*/
  if ( !v28 ) /*0x10047abd4*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 224); /*0x10047ace6*/
  v29 = v28; /*0x10047abda*/
  memcpy(v28, v37, 0xE0u); /*0x10047abec*/
  v30 = _InterlockedIncrement64(v47[0]); /*0x10047abf5*/
  if ( (v30 < 0) ^ v31 | (v30 == 0) ) /*0x10047abf9*/
LABEL_51:
    BUG(); /*0x10047acfc*/
  v38[0] = v47[0]; /*0x10047ac03*/
  v38[1] = v29; /*0x10047ac0a*/
  v38[2] = &off_101530390; /*0x10047ac18*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10047ac1f*/
  v32 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x10047ac2e*/
  if ( !v32 ) /*0x10047ac36*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10047acf7*/
  v32[2] = v38[2]; /*0x10047ac43*/
  v33 = v38[0]; /*0x10047ac47*/
  v32[1] = v38[1]; /*0x10047ac55*/
  *v32 = v33; /*0x10047ac59*/
  if ( (std::sys::thread::unix::Thread::new::he3759e27441a4c88(a4, v32) & 1) != 0 ) /*0x10047ac69*/
  {
    a1[1] = v34; /*0x10047ac6b*/
    *a1 = 0; /*0x10047ac6f*/
    if ( !_InterlockedDecrement64(v46) ) /*0x10047ac7a*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h4316fdb44971ee38(&v46); /*0x10047ac84*/
    if ( !_InterlockedDecrement64(v47[0]) ) /*0x10047ac8d*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939((__int64 *)v47); /*0x10047ac9c*/
  }
  else
  {
    v35 = v46; /*0x10047aca7*/
    *a1 = v47[0]; /*0x10047acab*/
    a1[1] = v35; /*0x10047acae*/
    a1[2] = v34; /*0x10047acb2*/
  }
  return a1; /*0x10047acb9*/
}