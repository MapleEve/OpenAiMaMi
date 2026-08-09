// 1.2.3 baseline same-set | __ZN86_$LT$codexmate_lib..core..skills..StagedDirectory$u20$as$u20$core..ops..drop..Drop$GT$4drop17h2f1fafacce2d5901E @ 0x1003a9090 | full-body via py_exec_file(ida_hexrays.decompile direct write)
double __fastcall _$LT$codexmate_lib..core..skills..StagedDirectory$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2f1fafacce2d5901(
        __int64 a1)
{
  void *v1; // rbx
  size_t v2; // r14
  const char *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rsi
  double result; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-F8h] BYREF
  const char *v14; // [rsp+10h] [rbp-F0h]
  __int64 v15; // [rsp+18h] [rbp-E8h]
  __int64 v16; // [rsp+20h] [rbp-E0h]
  const char *v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  const char *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  void *v23; // [rsp+58h] [rbp-A8h]
  _QWORD *v24; // [rsp+60h] [rbp-A0h]
  _QWORD v25[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v26[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v28[33]; // [rsp+DFh] [rbp-21h] BYREF

  if ( !*(_BYTE *)(a1 + 24) )
  {
    v1 = *(void **)(a1 + 8);
    v2 = *(_QWORD *)(a1 + 16);
    std::sys::fs::metadata::h32fa16d3052ea535(&v13, v1, v2);
    if ( (_DWORD)v13 == 1 )
    {
      if ( ((unsigned __int8)v14 & 3) == 1 )
      {
        v3 = v14 - 1;
        v4 = *(_QWORD *)(v14 - 1);
        v5 = *(_QWORD *)(v14 + 7);
        if ( *(_QWORD *)v5 )
          (*(void (__fastcall **)(__int64))v5)(v4);
        v6 = *(_QWORD *)(v5 + 8);
        if ( v6 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16));
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8);
      }
    }
    else
    {
      v8 = std::sys::fs::remove_dir_all::h50b3bc76069a86c9(v1, v2);
      if ( v8 )
      {
        v27 = v8;
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          v26[0] = v1;
          v26[1] = v2;
          v25[0] = v26;
          v25[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          v25[2] = &v27;
          v25[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          v19 = 2;
          v20 = "codexmate_lib::core::skills";
          v21 = 27;
          v23 = &unk_1017BD99C;
          v24 = v25;
          v13 = 0;
          v14 = "codexmate_lib::core::skills";
          v15 = 27;
          v16 = 0;
          v17 = "src/core/skills.rs";
          v18 = 18;
          v22 = 0x2F00000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v28, &v13);
          v8 = v27;
        }
        if ( (v8 & 3) == 1 )
        {
          v9 = v8 - 1;
          v10 = *(_QWORD *)(v8 - 1);
          v11 = *(_QWORD *)(v8 + 7);
          if ( *(_QWORD *)v11 )
            (*(void (__fastcall **)(__int64))v11)(v10);
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16));
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8);
        }
      }
    }
  }
  return result;
}
