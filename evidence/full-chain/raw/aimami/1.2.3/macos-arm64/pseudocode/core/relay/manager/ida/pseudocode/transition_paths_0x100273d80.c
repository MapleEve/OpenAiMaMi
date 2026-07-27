// __ZN13codexmate_lib4core5relay7manager12RelayManager16transition_paths @ 0x100273d80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::transition_paths::h8ef4521bfd1dad53(
        _QWORD *__dst)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _BYTE v3[776]; // [rsp+8h] [rbp-6A8h] BYREF
  __int64 v4; // [rsp+310h] [rbp-3A0h] BYREF
  _BYTE v5[96]; // [rsp+318h] [rbp-398h] BYREF
  _QWORD __dsta[84]; // [rsp+378h] [rbp-338h] BYREF
  _QWORD v7[12]; // [rsp+618h] [rbp-98h] BYREF
  _BYTE v8[24]; // [rsp+678h] [rbp-38h] BYREF
  _QWORD v9[4]; // [rsp+690h] [rbp-20h] BYREF

  codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::resolve_inner::h0014a02535f56cc8(v3); /*0x100273da1*/
  qmemcpy(v7, &v3[8], sizeof(v7)); /*0x100273dc6*/
  if ( __OFSUB__(-*(_QWORD *)v3, 1) ) /*0x100273db0*/
  {
    qmemcpy(__dst + 1, v7, 0x60u); /*0x100273de5*/
    *__dst = 0x8000000000000000LL; /*0x100273de8*/
    return 0x8000000000000000LL; /*0x100273dcb*/
  }
  else
  {
    memcpy(__dsta, &v3[104], sizeof(__dsta)); /*0x100273e03*/
    qmemcpy(v5, v7, sizeof(v5)); /*0x100273e1e*/
    v4 = *(_QWORD *)v3; /*0x100273e21*/
    v2 = qword_1015E3038[LOBYTE(__dsta[83])]; /*0x100273e36*/
    v9[0] = (char *)dword_1015E3058 + dword_1015E3058[LOBYTE(__dsta[83])]; /*0x100273e48*/
    v9[1] = v2; /*0x100273e4c*/
    v7[0] = __dsta[81]; /*0x100273e5e*/
    v7[1] = __dsta[82]; /*0x100273e65*/
    *(_QWORD *)v3 = v9; /*0x100273e70*/
    *(_QWORD *)&v3[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100273e7e*/
    *(_QWORD *)&v3[16] = v7; /*0x100273e85*/
    *(_QWORD *)&v3[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100273e93*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017BA060, v3); /*0x100273eac*/
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100273ecd*/
      "router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
      17,
      "state_db_selectedcodexmate_lib::core::relay::manager",
      17,
      v8);
    _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(v3, &v4); /*0x100273ee0*/
    memcpy(__dst, v3, 0x2E8u); /*0x100273ef4*/
    result = core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v4); /*0x100273f00*/
    if ( __dsta[80] ) /*0x100273f0f*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[81], __dsta[80], 1); /*0x100273f1d*/
  }
  return result; /*0x100273f22*/
}