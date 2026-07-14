// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x100529ba0 depth=0
_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_snapshot_local::h8bfc1cd191dce90a(_QWORD *__dst)
{
  __int64 v1; // r15
  _QWORD *v2; // r12
  __int64 v3; // rsi
  __int64 v4; // rsi
  _BYTE v6[656]; // [rsp+0h] [rbp-CB0h] BYREF
  _BYTE v7[928]; // [rsp+290h] [rbp-A20h] BYREF
  _BYTE v8[656]; // [rsp+630h] [rbp-680h] BYREF
  __int64 v9; // [rsp+8C0h] [rbp-3F0h]
  __int64 v10; // [rsp+8C8h] [rbp-3E8h]
  __int64 v11; // [rsp+8D0h] [rbp-3E0h]
  __int64 v12; // [rsp+8D8h] [rbp-3D8h] BYREF
  _BYTE v13[96]; // [rsp+8E0h] [rbp-3D0h] BYREF
  _QWORD __dsta[110]; // [rsp+940h] [rbp-370h] BYREF

  codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(v7); /*0x100529bbf*/
  qmemcpy(v8, &v7[8], 0x60u); /*0x100529bde*/
  if ( *(_QWORD *)v7 == 2 ) /*0x100529be5*/
  {
    qmemcpy(__dst + 1, v8, 0x60u); /*0x100529bf7*/
    *__dst = 3; /*0x100529bfa*/
  }
  else
  {
    memcpy(__dsta, &v7[104], 0x338u); /*0x100529c19*/
    qmemcpy(v13, v8, sizeof(v13)); /*0x100529c31*/
    v12 = *(_QWORD *)v7; /*0x100529c34*/
    codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h18db59bf6472a78a(v6); /*0x100529c54*/
    v11 = __dsta[87]; /*0x100529c60*/
    v10 = __dsta[86]; /*0x100529c75*/
    v9 = __dsta[85]; /*0x100529c7c*/
    memcpy(v8, v6, sizeof(v8)); /*0x100529c99*/
    __dsta[105] = __dsta[90]; /*0x100529ca5*/
    __dsta[104] = __dsta[89]; /*0x100529cb7*/
    __dsta[103] = __dsta[88]; /*0x100529cbb*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h15c73cdffbf317c8(v7, v8); /*0x100529cd0*/
    memcpy(__dst, v7, 0x2F8u); /*0x100529ce4*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb772a699ef9b33a6(&__dsta[48]); /*0x100529cf0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(&v12); /*0x100529cfc*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(&__dsta[70]); /*0x100529d08*/
    v1 = __dsta[82]; /*0x100529d17*/
    if ( __dsta[82] ) /*0x100529d21*/
    {
      v2 = (_QWORD *)(__dsta[81] + 136LL); /*0x100529d2a*/
      do /*0x100529d4a*/
      {
        v3 = *(v2 - 1); /*0x100529d4c*/
        if ( v3 ) /*0x100529d54*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v2, v3, 1); /*0x100529d5f*/
        if ( *((_DWORD *)v2 - 14) != 2 ) /*0x100529d6a*/
        {
          v4 = *(v2 - 5); /*0x100529d6c*/
          if ( v4 != 0x8000000000000000LL ) /*0x100529d74*/
          {
            if ( v4 ) /*0x100529d79*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v2 - 4), v4, 1); /*0x100529d85*/
          }
        }
        v2 += 21; /*0x100529d40*/
        --v1; /*0x100529d47*/
      }
      while ( v1 ); /*0x100529d4a*/
    }
    if ( __dsta[80] ) /*0x100529d96*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[81], 168LL * __dsta[80], 8); /*0x100529dab*/
    if ( LODWORD(__dsta[6]) != 2 ) /*0x100529db7*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&__dsta[6]); /*0x100529dc0*/
    if ( __dsta[91] != 0x8000000000000000LL && __dsta[91] ) /*0x100529dd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[92], __dsta[91], 1); /*0x100529de2*/
    if ( __dsta[94] != 0x8000000000000000LL && __dsta[94] ) /*0x100529df3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[95], __dsta[94], 1); /*0x100529dfe*/
    if ( __dsta[98] != 0x8000000000000000LL && __dsta[98] ) /*0x100529e0f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dsta[99], __dsta[98], 1); /*0x100529e1a*/
  }
  return __dst; /*0x100529e22*/
}