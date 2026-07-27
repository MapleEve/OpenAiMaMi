// __ZN13codexmate_lib8commands5relay16load_relay_state @ 0x10053cff0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::load_relay_state::he8c597c73daa0a99(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD v6[4]; // [rsp+0h] [rbp-500h] BYREF
  _BYTE v7[264]; // [rsp+20h] [rbp-4E0h] BYREF
  __int64 *v8; // [rsp+128h] [rbp-3D8h] BYREF
  _QWORD __src[36]; // [rsp+130h] [rbp-3D0h] BYREF
  _QWORD v10[37]; // [rsp+250h] [rbp-2B0h] BYREF
  _QWORD __dst[36]; // [rsp+378h] [rbp-188h] BYREF
  __int64 v12; // [rsp+498h] [rbp-68h]
  __int64 v13; // [rsp+4A0h] [rbp-60h]
  __int64 v14; // [rsp+4A8h] [rbp-58h]
  __int64 v15; // [rsp+4B0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+4B8h] [rbp-48h]
  __int64 v17; // [rsp+4C0h] [rbp-40h]
  __int64 v18; // [rsp+4C8h] [rbp-38h]
  __int64 v19; // [rsp+4D0h] [rbp-30h]
  __int64 v20; // [rsp+4D8h] [rbp-28h]
  char v21[25]; // [rsp+4E7h] [rbp-19h] BYREF

  v2 = *(_QWORD *)(a2 + 16); /*0x10053d00d*/
  if ( __OFSUB__(0, *(_QWORD *)(v2 + 16)) ) /*0x10053d013*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)v10, a2); /*0x10053d027*/
    codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(&v8, v10); /*0x10053d036*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v10); /*0x10053d042*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x10053d061*/
    if ( v8 != (__int64 *)0x8000000000000000LL ) /*0x10053d069*/
    {
      v20 = __dst[2]; /*0x10053d076*/
      v19 = __dst[1]; /*0x10053d088*/
      v18 = __dst[0]; /*0x10053d08c*/
      memcpy(v7, &__dst[3], sizeof(v7)); /*0x10053d0a3*/
      v12 = __dst[0]; /*0x10053d0b0*/
      v6[0] = v8; /*0x10053d0b8*/
      v6[1] = __dst[0]; /*0x10053d0bf*/
      v6[2] = __dst[1]; /*0x10053d0c6*/
      v6[3] = __dst[2]; /*0x10053d0cd*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6c74eb133b70c3e2((__int64)a1, v6); /*0x10053d0de*/
      return a1; /*0x10053d0e3*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v10[1], v2 + 16); /*0x10053d0f6*/
    v10[0] = 9; /*0x10053d0fb*/
    qmemcpy(__dst, v10, 0x60u); /*0x10053d119*/
  }
  qmemcpy(v10, __dst, 0x60u); /*0x10053d132*/
  v15 = 0; /*0x10053d135*/
  v16 = 1; /*0x10053d13d*/
  v17 = 0; /*0x10053d145*/
  __src[1] = 1610612768; /*0x10053d14d*/
  v8 = &v15; /*0x10053d15c*/
  __src[0] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053d16a*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053d17b*/
                          v10,
                          &v8) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053d1fe*/
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      v21,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v18 = v15; /*0x10053d18c*/
  v19 = v16; /*0x10053d190*/
  v20 = v17; /*0x10053d198*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x10053d1a3*/
  v14 = v20; /*0x10053d1ac*/
  v3 = v18; /*0x10053d1b0*/
  v4 = v19; /*0x10053d1b4*/
  v13 = v19; /*0x10053d1b8*/
  v12 = v18; /*0x10053d1bc*/
  a1[3] = v20; /*0x10053d1c0*/
  a1[2] = v4; /*0x10053d1c4*/
  a1[1] = v3; /*0x10053d1c8*/
  *a1 = 0x8000000000000000LL; /*0x10053d1cc*/
  return a1; /*0x10053d1d2*/
}