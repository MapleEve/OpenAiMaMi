// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18hide_voi 0x100670290 d=1
_QWORD *__fastcall std::thread::lifecycle::spawn_unchecked::hc97fe21e8247f6ff(
        _QWORD *a1,
        __int64 a2,
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
  _QWORD v37[25]; // [rsp+0h] [rbp-200h] BYREF
  _QWORD v38[25]; // [rsp+C8h] [rbp-138h] BYREF
  __int64 v39; // [rsp+190h] [rbp-70h] BYREF
  __int64 v40; // [rsp+198h] [rbp-68h]
  __int64 v41; // [rsp+1A0h] [rbp-60h]
  __int64 v42; // [rsp+1A8h] [rbp-58h]
  __int64 v43; // [rsp+1B0h] [rbp-50h]
  int v44; // [rsp+1BCh] [rbp-44h]
  __int64 v45; // [rsp+1C0h] [rbp-40h]
  volatile signed __int64 *v46; // [rsp+1C8h] [rbp-38h] BYREF
  volatile signed __int64 *v47[6]; // [rsp+1D0h] [rbp-30h] BYREF

  v44 = a5; /*0x1006702a7*/
  v45 = a2; /*0x1006702ae*/
  v43 = a6; /*0x1006702b5*/
  if ( (a3 & 1) != 0 ) /*0x1006702bc*/
    goto LABEL_31; /*0x1006702bc*/
  if ( std::thread::lifecycle::spawn_unchecked::_$u7b$$u7b$closure$u7d$$u7d$::MIN::h6b7e772c7f111bef ) /*0x1006702cf*/
  {
    a4 = std::thread::lifecycle::spawn_unchecked::_$u7b$$u7b$closure$u7d$$u7d$::MIN::h6b7e772c7f111bef - 1LL; /*0x1006702d1*/
    goto LABEL_31; /*0x1006702d4*/
  }
  std::env::_var_os::h174f31a71fef3df9(v37, &unk_10159171A, 14); /*0x1006702f1*/
  v10 = v37[0]; /*0x1006702f6*/
  a4 = 0x200000; /*0x1006702fd*/
  if ( __OFSUB__(-v37[0], 1) ) /*0x100670309*/
    goto LABEL_30; /*0x100670309*/
  core::str::converts::from_utf8::hb32deb9559450f6e((__int64)v38, v37[1], v37[2]); /*0x100670327*/
  if ( LODWORD(v38[0]) != 1 && v38[2] ) /*0x100670343*/
  {
    if ( v38[2] != 1 ) /*0x100670354*/
    {
      LOBYTE(v11) = *(_BYTE *)v38[1]; /*0x10067036d*/
      goto LABEL_12; /*0x10067036d*/
    }
    v11 = *(unsigned __int8 *)v38[1]; /*0x100670356*/
    if ( v11 != 43 && v11 != 45 ) /*0x100670365*/
    {
LABEL_12:
      v12 = (_BYTE)v11 == 43; /*0x100670370*/
      v13 = v12 + v38[1]; /*0x10067037e*/
      if ( (unsigned __int64)(v38[2] - v12) >= 0x11 ) /*0x10067038b*/
      {
        v16 = 0; /*0x1006703c6*/
        a4 = 0; /*0x1006703cf*/
        while ( v16 + v12 - v38[2] ) /*0x1006703d8*/
        {
          v17 = 10 * a4; /*0x1006703dd*/
          if ( is_mul_ok(0xAu, a4) ) /*0x1006703dd*/
          {
            v18 = (unsigned int)*(unsigned __int8 *)(v13 + v16) - 48; /*0x1006703ea*/
            a4 = v18 + v17; /*0x1006703ed*/
            v19 = __CFADD__(v18, v17); /*0x1006703f0*/
            if ( (unsigned int)v18 <= 9 ) /*0x1006703f6*/
            {
              ++v16; /*0x1006703f8*/
              if ( !v19 ) /*0x1006703fd*/
                continue; /*0x1006703fd*/
            }
          }
          a4 = 0x200000; /*0x1006703ff*/
          if ( v10 ) /*0x100670408*/
            goto LABEL_29; /*0x100670408*/
          goto LABEL_30; /*0x100670408*/
        }
      }
      else
      {
        if ( v38[2] == v12 ) /*0x10067037b*/
        {
          a4 = 0; /*0x10067040c*/
          if ( !v10 ) /*0x100670412*/
            goto LABEL_30; /*0x100670412*/
          goto LABEL_29; /*0x100670412*/
        }
        v14 = 0; /*0x100670398*/
        a4 = 0; /*0x10067039a*/
        while ( 1 ) /*0x1006703a1*/
        {
          v15 = *(unsigned __int8 *)(v13 + v14) - 48; /*0x1006703a1*/
          if ( v15 > 9 ) /*0x1006703a7*/
            break; /*0x1006703a7*/
          a4 = v15 + 10 * a4; /*0x1006703af*/
          if ( !(++v14 + v12 - v38[2]) ) /*0x1006703b9*/
            goto LABEL_28; /*0x1006703bc*/
        }
        a4 = 0x200000; /*0x100670416*/
      }
    }
  }
LABEL_28:
  if ( v10 ) /*0x10067041f*/
LABEL_29:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100670421*/
LABEL_30:
  std::thread::lifecycle::spawn_unchecked::_$u7b$$u7b$closure$u7d$$u7d$::MIN::h6b7e772c7f111bef = a4 + 1; /*0x100670431*/
LABEL_31:
  v20 = std::thread::id::ThreadId::new::h915fa47e758550ba(); /*0x100670440*/
  v47[0] = (volatile signed __int64 *)std::thread::thread::Thread::new::ha0b48c7a72ef1813(v20, v45); /*0x10067045b*/
  if ( (_BYTE)v44 ) /*0x100670463*/
  {
    v42 = 0; /*0x100670465*/
    v39 = 0; /*0x10067046d*/
    v40 = 8; /*0x100670475*/
    v41 = 0; /*0x10067047d*/
  }
  else
  {
    std::thread::spawnhook::run_spawn_hooks::h2d89372a946f036c(&v39, v47); /*0x10067048f*/
  }
  v38[0] = 1; /*0x100670494*/
  v38[1] = 1; /*0x10067049f*/
  v38[2] = a6; /*0x1006704aa*/
  v38[3] = 0; /*0x1006704b1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006704bc*/
  v21 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x30u, 8u); /*0x1006704cb*/
  if ( !v21 ) /*0x1006704d3*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1006706b5*/
  v22 = v21; /*0x1006704d9*/
  *((_QWORD *)v21 + 5) = v38[5]; /*0x1006704e3*/
  *((_QWORD *)v21 + 4) = v38[4]; /*0x1006704ee*/
  *((_QWORD *)v21 + 3) = v38[3]; /*0x1006704f9*/
  *((_QWORD *)v21 + 2) = v38[2]; /*0x100670504*/
  v23 = v38[0]; /*0x100670508*/
  *((_QWORD *)v22 + 1) = v38[1]; /*0x100670516*/
  *v22 = v23; /*0x10067051a*/
  v46 = v22; /*0x10067051d*/
  if ( _InterlockedIncrement64(v22) <= 0 ) /*0x100670525*/
    goto LABEL_51; /*0x100670525*/
  memcpy(&v37[5], __src, 0xA0u); /*0x10067053b*/
  v37[3] = v42; /*0x100670544*/
  v37[2] = v41; /*0x10067054f*/
  v37[1] = v40; /*0x10067055e*/
  v37[0] = v39; /*0x100670565*/
  v37[4] = v22; /*0x10067056c*/
  v27 = *((_QWORD *)v22 + 2); /*0x100670573*/
  if ( v27 ) /*0x10067057a*/
    std::thread::scoped::ScopeData::increment_num_running_threads::hdb6cf601e92f2af7( /*0x100670580*/
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
  memcpy(v38, v37, sizeof(v38)); /*0x100670598*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10067059d*/
  v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xC8u, 8u); /*0x1006705ac*/
  if ( !v28 ) /*0x1006705b4*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 200); /*0x1006706c6*/
  v29 = v28; /*0x1006705ba*/
  memcpy(v28, v37, 0xC8u); /*0x1006705cc*/
  v30 = _InterlockedIncrement64(v47[0]); /*0x1006705d5*/
  if ( (v30 < 0) ^ v31 | (v30 == 0) ) /*0x1006705d9*/
LABEL_51:
    BUG(); /*0x1006706dc*/
  v38[0] = v47[0]; /*0x1006705e3*/
  v38[1] = v29; /*0x1006705ea*/
  v38[2] = &off_101896098; /*0x1006705f8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006705ff*/
  v32 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x10067060e*/
  if ( !v32 ) /*0x100670616*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1006706d7*/
  v32[2] = v38[2]; /*0x100670623*/
  v33 = v38[0]; /*0x100670627*/
  v32[1] = v38[1]; /*0x100670635*/
  *v32 = v33; /*0x100670639*/
  if ( (std::sys::thread::unix::Thread::new::he3759e27441a4c88(a4, v32) & 1) != 0 ) /*0x100670649*/
  {
    a1[1] = v34; /*0x10067064b*/
    *a1 = 0; /*0x10067064f*/
    if ( !_InterlockedDecrement64(v46) ) /*0x10067065a*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h1f2fb17b5a781f19(&v46); /*0x100670664*/
    if ( !_InterlockedDecrement64(v47[0]) ) /*0x10067066d*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939((__int64 *)v47); /*0x10067067c*/
  }
  else
  {
    v35 = v46; /*0x100670687*/
    *a1 = v47[0]; /*0x10067068b*/
    a1[1] = v35; /*0x10067068e*/
    a1[2] = v34; /*0x100670692*/
  }
  return a1; /*0x100670699*/
}