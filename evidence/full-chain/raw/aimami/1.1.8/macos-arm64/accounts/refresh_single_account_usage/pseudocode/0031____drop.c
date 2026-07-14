// mac 1.1.8 refresh_single_account_usage node va=0x10049d440 depth=4
// _::drop
char __fastcall _$LT$crossbeam_channel..channel..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h57860ad6dfa1cd43(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  signed __int64 v3; // rax
  __int64 v4; // rcx
  signed __int64 v5; // rtt
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r13
  unsigned int v10; // r15d
  unsigned int v11; // eax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  __int64 *v15; // r14
  unsigned __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v19; // r12
  __int64 *v20; // r15
  __int64 v21; // r15
  unsigned int v22; // r12d
  unsigned int v23; // eax
  unsigned int v25; // r15d
  unsigned int v26; // eax
  __int64 v29; // [rsp+0h] [rbp-30h]

  v1 = *a1; /*0x10049d44e*/
  switch ( *a1 ) /*0x10049d45f*/
  {
    case 0LL: /*0x10049d45f*/
      v2 = a1[1]; /*0x10049d470*/
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 520)) ) /*0x10049d474*/
      {
        v3 = *(_QWORD *)(v2 + 128); /*0x10049d47e*/
        v4 = *(_QWORD *)(v2 + 272); /*0x10049d485*/
        do /*0x10049d49f*/
        {
          v5 = v3; /*0x10049d496*/
          v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 128), v4 | v3, v3); /*0x10049d496*/
        }
        while ( v5 != v3 ); /*0x10049d49f*/
        if ( (v3 & *(_QWORD *)(v2 + 272)) == 0 ) /*0x10049d4a8*/
        {
          crossbeam_channel::waker::SyncWaker::disconnect::h71459179ce7b84f1(v2 + 280); /*0x10049d4b1*/
          crossbeam_channel::waker::SyncWaker::disconnect::h71459179ce7b84f1(v2 + 352); /*0x10049d4bd*/
        }
        LOBYTE(v1) = *(_BYTE *)(v2 + 528); /*0x10049d4c4*/
        *(_BYTE *)(v2 + 528) = 1; /*0x10049d4c4*/
        if ( (_BYTE)v1 ) /*0x10049d4cc*/
          LOBYTE(v1) = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$crossbeam_channel..counter..Counter$LT$crossbeam_channel..flavors..array..Channel$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$$GT$::h51a78fc6e9180c7f(v2); /*0x10049d4df*/
      }
      return v1; /*0x10049d4df*/
    case 1LL: /*0x10049d45f*/
      v7 = a1[1]; /*0x10049d522*/
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v7 + 392)) ) /*0x10049d526*/
        return v1; /*0x10049d52f*/
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 128), 0) ) /*0x10049d540*/
        goto LABEL_63; /*0x10049d540*/
      v8 = (unsigned __int64 *)(v7 + 128); /*0x10049d546*/
      v9 = *(_QWORD *)(v7 + 128); /*0x10049d54e*/
      v10 = 0; /*0x10049d556*/
      if ( (~*(_BYTE *)(v7 + 128) & 0x3E) != 0 ) /*0x10049d55b*/
        goto LABEL_25; /*0x10049d55b*/
      v10 = 0; /*0x10049d55d*/
      break; /*0x10049d560*/
    case 2LL: /*0x10049d45f*/
      v6 = a1[1]; /*0x10049d4e4*/
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v6 + 8)) ) /*0x10049d4e8*/
      {
        crossbeam_channel::flavors::zero::Channel$LT$T$GT$::disconnect::h380411fdcf4c1cc1(v6 + 16); /*0x10049d4f7*/
        LOBYTE(v1) = *(_BYTE *)(v6 + 136); /*0x10049d4fe*/
        *(_BYTE *)(v6 + 136) = 1; /*0x10049d4fe*/
        if ( (_BYTE)v1 ) /*0x10049d506*/
          LOBYTE(v1) = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$crossbeam_channel..counter..Counter$LT$crossbeam_channel..flavors..zero..Channel$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$$GT$::h767c02f9044cd361(v6); /*0x10049d51d*/
      }
      return v1; /*0x10049d51d*/
    case 3LL: /*0x10049d45f*/
    case 4LL: /*0x10049d45f*/
    case 5LL: /*0x10049d45f*/
      return v1;
  }
  do /*0x10049d57d*/
  {
    if ( v10 <= 6 ) /*0x10049d583*/
    {
      v11 = 1; /*0x10049d585*/
      do /*0x10049d59d*/
        _mm_pause(); /*0x10049d590*/
      while ( !(v11++ >> v10) ); /*0x10049d59d*/
LABEL_17:
      ++v10; /*0x10049d570*/
      goto LABEL_18; /*0x10049d570*/
    }
    std::thread::functions::yield_now::hd3ad5505c790d718(a1); /*0x10049d5b0*/
    if ( v10 < 0xB ) /*0x10049d5b9*/
      goto LABEL_17; /*0x10049d5b9*/
LABEL_18:
    v9 = *v8; /*0x10049d573*/
  }
  while ( (~*(_BYTE *)v8 & 0x3E) == 0 ); /*0x10049d57d*/
LABEL_25:
  v13 = v9 >> 1; /*0x10049d5bd*/
  v14 = *(_QWORD *)v7; /*0x10049d5c0*/
  v29 = v7; /*0x10049d5c7*/
  v15 = (__int64 *)_InterlockedExchange64((volatile __int64 *)(v7 + 8), 0); /*0x10049d5cb*/
  v16 = v14 >> 1; /*0x10049d5d3*/
  if ( v14 >> 1 != v13 && v15 == nullptr ) /*0x10049d5df*/
  {
    do /*0x10049d603*/
    {
      if ( v10 > 6 ) /*0x10049d607*/
      {
        std::thread::functions::yield_now::hd3ad5505c790d718(a1); /*0x10049d630*/
        if ( v10 >= 0xB ) /*0x10049d639*/
          goto LABEL_28; /*0x10049d639*/
      }
      else
      {
        v17 = 1; /*0x10049d609*/
        do /*0x10049d61d*/
          _mm_pause(); /*0x10049d610*/
        while ( !(v17++ >> v10) ); /*0x10049d61d*/
      }
      ++v10; /*0x10049d5f0*/
LABEL_28:
      v15 = (__int64 *)_InterlockedExchange64((volatile __int64 *)(v29 + 8), 0); /*0x10049d5f3*/
    }
    while ( !v15 ); /*0x10049d603*/
  }
  while ( 2 ) /*0x10049d655*/
  {
    if ( v16 != v13 ) /*0x10049d655*/
    {
      v19 = v16 & 0x1F; /*0x10049d65b*/
      if ( v19 == 31 ) /*0x10049d663*/
      {
        if ( *v15 ) /*0x10049d665*/
        {
LABEL_40:
          v20 = (__int64 *)*v15; /*0x10049d671*/
          a1 = v15; /*0x10049d67e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049d681*/
          v15 = v20; /*0x10049d686*/
          goto LABEL_36; /*0x10049d689*/
        }
        v25 = 0; /*0x10049d6fd*/
        while ( 2 ) /*0x10049d723*/
        {
          if ( v25 > 6 ) /*0x10049d723*/
          {
            std::thread::functions::yield_now::hd3ad5505c790d718(a1); /*0x10049d750*/
            if ( v25 < 0xB ) /*0x10049d759*/
              goto LABEL_52; /*0x10049d759*/
          }
          else
          {
            v26 = 1; /*0x10049d725*/
            do /*0x10049d73d*/
              _mm_pause(); /*0x10049d730*/
            while ( !(v26++ >> v25) ); /*0x10049d73d*/
LABEL_52:
            ++v25; /*0x10049d710*/
          }
          if ( *v15 ) /*0x10049d713*/
            goto LABEL_40; /*0x10049d719*/
          continue; /*0x10049d719*/
        }
      }
      v21 = (__int64)&v15[23 * v19 + 1]; /*0x10049d697*/
      if ( (v15[23 * v19 + 23] & 1) != 0 ) /*0x10049d6a6*/
      {
LABEL_35:
        a1 = (__int64 *)v21; /*0x10049d640*/
        core::ptr::drop_in_place$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$::h902bc30b45adeba4(v21); /*0x10049d643*/
LABEL_36:
        v14 += 2LL; /*0x10049d648*/
        v16 = v14 >> 1; /*0x10049d64f*/
        continue; /*0x10049d64f*/
      }
      v22 = 0; /*0x10049d6a8*/
      while ( 2 ) /*0x10049d6c2*/
      {
        if ( v22 > 6 ) /*0x10049d6c2*/
        {
          std::thread::functions::yield_now::hd3ad5505c790d718(a1); /*0x10049d6f0*/
          if ( v22 < 0xB ) /*0x10049d6f9*/
            goto LABEL_43; /*0x10049d6f9*/
        }
        else
        {
          v23 = 1; /*0x10049d6c4*/
          do /*0x10049d6dd*/
            _mm_pause(); /*0x10049d6d0*/
          while ( !(v23++ >> v22) ); /*0x10049d6dd*/
LABEL_43:
          ++v22; /*0x10049d6b0*/
        }
        if ( (*(_QWORD *)(v21 + 176) & 1) != 0 ) /*0x10049d6bc*/
          goto LABEL_35; /*0x10049d6bc*/
        continue; /*0x10049d6bc*/
      }
    }
    break;
  }
  if ( v15 ) /*0x10049d760*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049d76f*/
  v7 = v29; /*0x10049d778*/
  *(_QWORD *)v29 = v14 & 0xFFFFFFFFFFFFFFFELL; /*0x10049d77c*/
LABEL_63:
  LOBYTE(v1) = *(_BYTE *)(v7 + 400); /*0x10049d780*/
  *(_BYTE *)(v7 + 400) = 1; /*0x10049d782*/
  if ( (_BYTE)v1 ) /*0x10049d78c*/
  {
    core::ptr::drop_in_place$LT$crossbeam_channel..counter..Counter$LT$crossbeam_channel..flavors..list..Channel$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$::h30b0f49033861a36(v7); /*0x10049d795*/
    LOBYTE(v1) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049d7b5*/
  }
  return v1; /*0x10049d465*/
}