// __ZN13codexmate_lib4core10repository10Repository44clear_pending_auto_switch_request_if_current @ 0x100a744e0
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // r15
  int v8; // r13d
  _DWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 i; // rcx
  __int64 v12; // rsi
  __int64 v13; // r15
  _DWORD *v14; // rdi
  _DWORD *v15; // rsi
  __int64 j; // rcx
  _QWORD __dst[44]; // [rsp+8h] [rbp-378h] BYREF
  _BYTE v18[352]; // [rsp+168h] [rbp-218h] BYREF
  __int64 v19; // [rsp+2C8h] [rbp-B8h]
  __int64 v20; // [rsp+2D0h] [rbp-B0h]
  int v21; // [rsp+2D8h] [rbp-A8h]
  int v22; // [rsp+2DCh] [rbp-A4h]
  _DWORD v23[21]; // [rsp+2E4h] [rbp-9Ch] BYREF
  __int64 v24; // [rsp+338h] [rbp-48h] BYREF
  __int64 v25; // [rsp+340h] [rbp-40h]
  __int64 v26; // [rsp+348h] [rbp-38h]
  __int64 v27; // [rsp+350h] [rbp-30h]

  v27 = a3; /*0x100a744f4*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100a7451d*/
    &v24,
    *(_QWORD *)(a2 + 200),
    *(_QWORD *)(a2 + 208),
    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51,
    20);
  v5 = v25; /*0x100a74522*/
  result = codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a74541*/
             (__int64)__dst,
             v25,
             v26,
             (__int64)"account state.oauth-refresh.lock",
             13);
  v7 = __dst[0]; /*0x100a74546*/
  v8 = __dst[1]; /*0x100a7454d*/
  if ( __dst[0] != 11 ) /*0x100a74558*/
  {
    v9 = (_DWORD *)&__dst[1] + 1; /*0x100a7455a*/
    v10 = v23; /*0x100a74561*/
    for ( i = 21; i; --i ) /*0x100a74568*/
      *v10++ = *v9++; /*0x100a7456d*/
  }
  if ( v24 ) /*0x100a74576*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v24, 1); /*0x100a74580*/
  if ( (_DWORD)v7 == 11 ) /*0x100a74589*/
  {
    v23[0] = v8; /*0x100a7458f*/
    v12 = a2; /*0x100a7459d*/
    codexmate_lib::core::repository::Repository::load_pending_auto_switch::h6842d236c81b2905(__dst); /*0x100a745a0*/
    v13 = v27; /*0x100a745ac*/
    if ( LODWORD(__dst[0]) != 2 ) /*0x100a745b0*/
    {
      if ( v19 == *(_QWORD *)(v27 + 704) /*0x100a745fe*/
        && v20 == *(_QWORD *)(v27 + 712)
        && v21 == *(_DWORD *)(v27 + 720)
        && v22 == *(_DWORD *)(v27 + 724) )
      {
        v12 = v27; /*0x100a7460b*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..cmp..PartialEq$GT$::eq::hda5febdef9901cf9( /*0x100a7460e*/
                                __dst,
                                v27) )
        {
          v12 = v13 + 352; /*0x100a7462c*/
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..cmp..PartialEq$GT$::eq::hda5febdef9901cf9( /*0x100a7462f*/
                                  v18,
                                  v13 + 352) )
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(__dst, v12); /*0x100a7463f*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v18, v12); /*0x100a74647*/
            codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request::heb8bdf3af6a6b862( /*0x100a74661*/
              __dst,
              *(void **)(a2 + 488),
              *(_QWORD *)(a2 + 496));
            if ( LODWORD(__dst[0]) == 11 ) /*0x100a7466d*/
            {
              a1[8] = 1; /*0x100a74673*/
              *(_QWORD *)a1 = 11; /*0x100a74677*/
              _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v23); /*0x100a74685*/
              return close_NOCANCEL(v23[0]); /*0x100a746f2*/
            }
            qmemcpy(a1, __dst, 0x60u); /*0x100a74702*/
LABEL_23:
            _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v23); /*0x100a746ca*/
            return close_NOCANCEL(v23[0]); /*0x100a746d1*/
          }
        }
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(__dst, v12); /*0x100a746ae*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v18, v12); /*0x100a746ba*/
    }
    a1[8] = 0; /*0x100a746bf*/
    *(_QWORD *)a1 = 11; /*0x100a746c3*/
    goto LABEL_23; /*0x100a746c3*/
  }
  v14 = a1 + 12; /*0x100a7468c*/
  v15 = v23; /*0x100a74690*/
  for ( j = 21; j; --j ) /*0x100a74697*/
    *v14++ = *v15++; /*0x100a7469c*/
  *(_QWORD *)a1 = v7; /*0x100a7469e*/
  *((_DWORD *)a1 + 2) = v8; /*0x100a746a1*/
  return result; /*0x100a746e1*/
}