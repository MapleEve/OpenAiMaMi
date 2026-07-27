// __ZN13codexmate_lib8platform7process20CodexTransitionFence6finish @ 0x10035eb10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  void (__fastcall **v5)(__int64); // rdx
  __int64 v6; // r15
  void (__fastcall **v7)(__int64); // r12
  void (__fastcall *v8)(__int64); // rsi
  unsigned __int8 v9; // r15
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // r15
  _QWORD *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  int v20; // ecx
  char v21; // dl
  bool v22; // cf
  int v23; // ecx
  int v24; // eax
  _QWORD v26[12]; // [rsp+0h] [rbp-190h] BYREF
  _QWORD v27[12]; // [rsp+60h] [rbp-130h] BYREF
  _QWORD *v28; // [rsp+C0h] [rbp-D0h] BYREF
  __int64 (__fastcall *v29)(_QWORD, _QWORD); // [rsp+C8h] [rbp-C8h]
  __int64 v30; // [rsp+D0h] [rbp-C0h]
  __int64 v31; // [rsp+D8h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-B0h]
  __int64 v33; // [rsp+E8h] [rbp-A8h]
  __int64 v34; // [rsp+F0h] [rbp-A0h]
  __int64 v35; // [rsp+F8h] [rbp-98h]
  __int64 v36; // [rsp+100h] [rbp-90h]
  _QWORD *v37; // [rsp+108h] [rbp-88h] BYREF
  char *v38; // [rsp+110h] [rbp-80h]
  __int64 v39; // [rsp+118h] [rbp-78h]
  __int64 v40; // [rsp+120h] [rbp-70h]
  const char *v41; // [rsp+128h] [rbp-68h]
  __int64 v42; // [rsp+130h] [rbp-60h]
  __int64 v43; // [rsp+138h] [rbp-58h]
  char *v44; // [rsp+140h] [rbp-50h]
  __int64 v45; // [rsp+148h] [rbp-48h]
  __int64 v46; // [rsp+150h] [rbp-40h]
  void *v47; // [rsp+158h] [rbp-38h]
  _QWORD *v48; // [rsp+160h] [rbp-30h]

  *(_BYTE *)(*(_QWORD *)(a2 + 24) + 16LL) = 1; /*0x10035eb2e*/
  v3 = *(_QWORD *)a2; /*0x10035eb32*/
  *(_QWORD *)a2 = 0; /*0x10035eb35*/
  if ( v3 ) /*0x10035eb3f*/
  {
    v37 = (_QWORD *)v3; /*0x10035eb41*/
    v4 = *(_QWORD *)(a2 + 16); /*0x10035eb4c*/
    v38 = *(char **)(a2 + 8); /*0x10035eb50*/
    v39 = v4; /*0x10035eb54*/
    v6 = std::thread::lifecycle::JoinInner$LT$T$GT$::join::h2132fda28f1e30ec(&v37); /*0x10035eb64*/
    if ( v6 ) /*0x10035eb6a*/
    {
      v7 = v5; /*0x10035eb6c*/
      if ( *v5 ) /*0x10035eb6f*/
        (*v5)(v6); /*0x10035eb7a*/
      v8 = v7[1]; /*0x10035eb7c*/
      if ( v8 ) /*0x10035eb84*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, v7[2]); /*0x10035eb8e*/
      *(_BYTE *)(*(_QWORD *)(a2 + 40) + 16LL) = 1; /*0x10035eb97*/
    }
  }
  v9 = *(_BYTE *)(a2 + 50); /*0x10035eb9b*/
  codexmate_lib::platform::process::collect_codex_kill_targets::hff13fe245335b237((__int64 *)&v37); /*0x10035eba7*/
  v26[0] = v38; /*0x10035ebb7*/
  v26[1] = v39; /*0x10035ebc2*/
  v26[2] = v40; /*0x10035ebcd*/
  if ( v37 != (_QWORD *)11 ) /*0x10035ebd8*/
  {
    v27[11] = v48; /*0x10035ec6c*/
    v27[10] = v47; /*0x10035ec77*/
    v27[9] = v46; /*0x10035ec82*/
    v27[8] = v45; /*0x10035ec8d*/
    v27[7] = v44; /*0x10035ec98*/
    v27[6] = v43; /*0x10035eca3*/
    v27[5] = v42; /*0x10035ecb2*/
    v27[4] = v41; /*0x10035ecb9*/
    v27[1] = v26[0]; /*0x10035ecce*/
    v27[2] = v26[1]; /*0x10035ecd5*/
    v27[3] = v26[2]; /*0x10035ece3*/
    v27[0] = v37; /*0x10035ecea*/
    goto LABEL_31; /*0x10035ecf1*/
  }
  v34 = v26[0]; /*0x10035ebec*/
  v35 = v26[1]; /*0x10035ebf3*/
  v36 = v26[2]; /*0x10035ec01*/
  if ( v26[2] ) /*0x10035ec0b*/
  {
    codexmate_lib::platform::process::enforce_codex_quiet_window_with::hd856baa2e955d006(v27, 4, 1, v9); /*0x10035ec26*/
    v10 = v35; /*0x10035ec2b*/
    v11 = 0; /*0x10035ec36*/
    do /*0x10035ec47*/
    {
      v12 = *(_QWORD *)(v10 + v11 + 8); /*0x10035ec4d*/
      if ( v12 ) /*0x10035ec55*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v10 + v11 + 16), v12, 1); /*0x10035ec61*/
      v11 += 32; /*0x10035ec40*/
    }
    while ( 32LL * v26[2] != v11 ); /*0x10035ec47*/
    if ( v34 ) /*0x10035ed00*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 32 * v34, 8); /*0x10035ed0e*/
    v13 = v27[0]; /*0x10035ed13*/
    goto LABEL_29; /*0x10035ed1a*/
  }
  codexmate_lib::platform::process::protected_codex_db_holders::he3dae47a4922cb14((__int64)&v31); /*0x10035ed26*/
  v14 = v33; /*0x10035ed2b*/
  if ( v33 ) /*0x10035ed35*/
  {
    v15 = v32; /*0x10035ed3b*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v37, v32, v33, " | ps-ocodexmate_lib::platform::process", 3); /*0x10035ed5c*/
    v26[2] = v39; /*0x10035ed65*/
    v26[1] = v38; /*0x10035ed77*/
    v26[0] = v37; /*0x10035ed7e*/
    v37 = v26; /*0x10035ed8c*/
    v38 = (char *)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035ed9a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v28, &unk_1015F8049, &v37); /*0x10035edb3*/
    if ( v26[0] ) /*0x10035edc2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26[1], v26[0], 1); /*0x10035edd0*/
    v27[1] = v28; /*0x10035ede3*/
    v27[2] = v29; /*0x10035edea*/
    v27[3] = v30; /*0x10035edf8*/
    v27[0] = 10; /*0x10035edff*/
    v16 = (_QWORD *)(v15 + 8); /*0x10035ee0a*/
    do /*0x10035ee17*/
    {
      v17 = *(v16 - 1); /*0x10035ee19*/
      if ( v17 ) /*0x10035ee20*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x10035ee2b*/
      v16 += 3; /*0x10035ee10*/
      --v14; /*0x10035ee14*/
    }
    while ( v14 ); /*0x10035ee17*/
    v13 = 10; /*0x10035ee32*/
    v18 = v31; /*0x10035ee38*/
    if ( !v31 ) /*0x10035ee42*/
      goto LABEL_27; /*0x10035ee42*/
    goto LABEL_26; /*0x10035ee42*/
  }
  LODWORD(v27[1]) = 0; /*0x10035efcd*/
  v27[0] = 11; /*0x10035efd7*/
  v13 = 11; /*0x10035efe2*/
  v15 = v32; /*0x10035efe8*/
  v18 = v31; /*0x10035efef*/
  if ( v31 ) /*0x10035eff9*/
LABEL_26:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24 * v18, 8); /*0x10035ee44*/
LABEL_27:
  if ( v34 ) /*0x10035ee63*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 32 * v34, 8); /*0x10035ee75*/
LABEL_29:
  if ( v13 == 11 ) /*0x10035ee7e*/
  {
    v19 = v27[1]; /*0x10035ee80*/
    goto LABEL_35; /*0x10035ee86*/
  }
LABEL_31:
  if ( !*(_BYTE *)(a2 + 49) ) /*0x10035ee8f*/
  {
    qmemcpy(a1, v27, 0x60u); /*0x10035efad*/
    goto LABEL_39; /*0x10035efad*/
  }
  qmemcpy(v26, v27, sizeof(v26)); /*0x10035eeab*/
  *(_BYTE *)(*(_QWORD *)(a2 + 40) + 16LL) = 1; /*0x10035eeb2*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10035eec4*/
  {
    v28 = v26; /*0x10035eeca*/
    v29 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10035eed8*/
    v43 = 2; /*0x10035eedf*/
    v44 = "codexmate_lib::platform::process"; /*0x10035eeee*/
    v45 = 32; /*0x10035eef2*/
    v47 = &unk_1017BCEED; /*0x10035ef01*/
    v48 = &v28; /*0x10035ef0c*/
    v37 = nullptr; /*0x10035ef10*/
    v38 = "codexmate_lib::platform::process"; /*0x10035ef1b*/
    v39 = 32; /*0x10035ef1f*/
    v40 = 0; /*0x10035ef27*/
    v41 = "src/platform/process.rs"; /*0x10035ef36*/
    v42 = 23; /*0x10035ef3a*/
    v46 = 0x6B200000001LL; /*0x10035ef4c*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v31, &v37); /*0x10035ef5e*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v26); /*0x10035ef6a*/
  v19 = 0; /*0x10035ef6f*/
LABEL_35:
  v20 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 16LL); /*0x10035ef71*/
  v21 = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 16LL); /*0x10035ef7c*/
  v22 = __CFADD__(v19, v20); /*0x10035ef80*/
  v23 = v19 + v20; /*0x10035ef80*/
  v24 = -1; /*0x10035ef82*/
  if ( !v22 ) /*0x10035ef87*/
    v24 = v23; /*0x10035ef87*/
  *((_DWORD *)a1 + 2) = v24; /*0x10035ef8c*/
  *((_BYTE *)a1 + 12) = v21 != 0; /*0x10035ef90*/
  *a1 = 11; /*0x10035ef95*/
LABEL_39:
  core::ptr::drop_in_place$LT$codexmate_lib..platform..process..CodexTransitionFence$GT$::he48937f68a7a4f78(a2); /*0x10035efb0*/
  return a1; /*0x10035efbb*/
}