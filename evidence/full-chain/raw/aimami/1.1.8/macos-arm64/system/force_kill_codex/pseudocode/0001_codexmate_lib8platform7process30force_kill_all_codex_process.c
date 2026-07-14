// mac 1.1.8 force_kill_codex node va=0x1001c1960 depth=1
// codexmate_lib8platform7process30force_kill_all_codex_processes
__int64 __fastcall codexmate_lib::platform::process::force_kill_all_codex_processes::hdd3d3240bcead249(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // rsi
  _QWORD *v13; // r15
  __int64 v14; // rsi
  _OWORD v15[6]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-60h]
  __int128 v17; // [rsp+68h] [rbp-58h]
  __int64 v18; // [rsp+78h] [rbp-48h]
  __int64 v19; // [rsp+80h] [rbp-40h] BYREF
  __int128 v20; // [rsp+88h] [rbp-38h]

  codexmate_lib::platform::process::collect_codex_kill_targets::h9e99c6072be19f0b(v15); /*0x1001c197e*/
  v19 = *((_QWORD *)&v15[0] + 1); /*0x1001c1991*/
  v1 = *(_QWORD *)&v15[0]; /*0x1001c1991*/
  v20 = v15[1]; /*0x1001c199c*/
  if ( *(_QWORD *)&v15[0] == 10 ) /*0x1001c19af*/
  {
    v16 = v19; /*0x1001c19bd*/
    v2 = *((_QWORD *)&v20 + 1); /*0x1001c19c5*/
    v17 = v20; /*0x1001c19c5*/
    if ( *((_QWORD *)&v20 + 1) ) /*0x1001c19d0*/
    {
      v3 = v17; /*0x1001c19d6*/
      v4 = 32LL * *((_QWORD *)&v20 + 1); /*0x1001c19dd*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hbba4a9ef9e47ac24( /*0x1001c19ec*/
        &v19,
        v17,
        v17 + 32LL * *((_QWORD *)&v20 + 1));
      codexmate_lib::platform::process::kill_codex_processes_until_clear::h163807c1665f0c95(v15); /*0x1001c19f8*/
      if ( LODWORD(v15[0]) == 10 ) /*0x1001c1a04*/
      {
        *(_OWORD *)((char *)v15 + 12) = v20; /*0x1001c1a1d*/
        *(_QWORD *)((char *)v15 + 4) = v19; /*0x1001c1a24*/
        *(_DWORD *)(a1 + 8) = v2; /*0x1001c1a2b*/
        v5 = *((_QWORD *)&v15[0] + 1); /*0x1001c1a36*/
        *(_QWORD *)(a1 + 12) = *(_QWORD *)&v15[0]; /*0x1001c1a3d*/
        *(_QWORD *)(a1 + 20) = v5; /*0x1001c1a41*/
        *(_QWORD *)(a1 + 28) = *(_QWORD *)&v15[1]; /*0x1001c1a4c*/
        *(_DWORD *)(a1 + 36) = DWORD2(v15[1]); /*0x1001c1a56*/
        *(_QWORD *)a1 = 10; /*0x1001c1a59*/
        v6 = 0; /*0x1001c1a60*/
        do /*0x1001c1a77*/
        {
          v7 = *(_QWORD *)(v3 + v6 + 8); /*0x1001c1a7d*/
          if ( v7 ) /*0x1001c1a85*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v3 + v6 + 16), v7, 1); /*0x1001c1a91*/
          v6 += 32; /*0x1001c1a70*/
        }
        while ( v4 != v6 ); /*0x1001c1a77*/
      }
      else
      {
        qmemcpy((void *)a1, v15, 0x60u); /*0x1001c1b69*/
        v10 = *((_QWORD *)&v20 + 1); /*0x1001c1b74*/
        v18 = v20; /*0x1001c1b74*/
        if ( *((_QWORD *)&v20 + 1) ) /*0x1001c1b7b*/
        {
          v11 = (_QWORD *)(v18 + 8); /*0x1001c1b81*/
          do /*0x1001c1b97*/
          {
            v12 = *(v11 - 1); /*0x1001c1b99*/
            if ( v12 ) /*0x1001c1ba0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1); /*0x1001c1baa*/
            v11 += 3; /*0x1001c1b90*/
            --v10; /*0x1001c1b94*/
          }
          while ( v10 ); /*0x1001c1b97*/
        }
        if ( v19 ) /*0x1001c1bb8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24 * v19, 8); /*0x1001c1bcb*/
        v13 = (_QWORD *)(v3 + 16); /*0x1001c1bd0*/
        do /*0x1001c1be7*/
        {
          v14 = *(v13 - 1); /*0x1001c1bed*/
          if ( v14 ) /*0x1001c1bf4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x1001c1bfe*/
          v13 += 4; /*0x1001c1be0*/
          --v2; /*0x1001c1be4*/
        }
        while ( v2 ); /*0x1001c1be7*/
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0; /*0x1001c1b01*/
      *(_QWORD *)(a1 + 16) = 0; /*0x1001c1b08*/
      *(_QWORD *)(a1 + 24) = 8; /*0x1001c1b10*/
      *(_QWORD *)(a1 + 32) = 0; /*0x1001c1b18*/
      *(_QWORD *)a1 = 10; /*0x1001c1b20*/
      v3 = v17; /*0x1001c1b27*/
    }
    if ( v16 ) /*0x1001c1b32*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 32 * v16, 8); /*0x1001c1b40*/
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v15[5]; /*0x1001c1aa4*/
    *(_OWORD *)(a1 + 64) = v15[4]; /*0x1001c1ab4*/
    *(_OWORD *)(a1 + 48) = v15[3]; /*0x1001c1aca*/
    *(_OWORD *)(a1 + 32) = v15[2]; /*0x1001c1ae0*/
    *(_QWORD *)(a1 + 24) = *((_QWORD *)&v20 + 1); /*0x1001c1ae8*/
    v8 = v19; /*0x1001c1aec*/
    *(_QWORD *)(a1 + 16) = v20; /*0x1001c1af4*/
    *(_QWORD *)(a1 + 8) = v8; /*0x1001c1af8*/
    *(_QWORD *)a1 = v1; /*0x1001c1afc*/
  }
  return a1; /*0x1001c1b48*/
}