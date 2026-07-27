// __ZN13codexmate_lib4core16account_metadata23subscription_account_id @ 0x10024e990
__int64 __fastcall codexmate_lib::core::account_metadata::subscription_account_id::h5ebd39dd2fc4bd2f(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx

  v1 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015DD0F0, 11); /*0x10024e9a5*/
  if ( !v1 /*0x10024e9ca*/
    || *(_BYTE *)v1 != 3
    || (result = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                   *(_QWORD *)(v1 + 16),
                   *(_QWORD *)(v1 + 24)),
        v3 == 0 || result == 0) )
  {
    v4 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015DD0FB, 10); /*0x10024e9ea*/
    if ( !v4 /*0x10024ea0f*/
      || *(_BYTE *)v4 != 3
      || (result = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                     *(_QWORD *)(v4 + 16),
                     *(_QWORD *)(v4 + 24)),
          v5 == 0 || result == 0) )
    {
      v6 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015DD105, 11); /*0x10024ea2f*/
      if ( !v6 /*0x10024ea54*/
        || *(_BYTE *)v6 != 3
        || (result = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                       *(_QWORD *)(v6 + 16),
                       *(_QWORD *)(v6 + 24)),
            v7 == 0 || result == 0) )
      {
        v8 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015DD110, 19); /*0x10024ea74*/
        if ( !v8 /*0x10024ea99*/
          || *(_BYTE *)v8 != 3
          || (result = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                         *(_QWORD *)(v8 + 16),
                         *(_QWORD *)(v8 + 24)),
              v9 == 0 || result == 0) )
        {
          v10 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015DD123, 24); /*0x10024eab5*/
          if ( !v10 ) /*0x10024eabd*/
            return 0; /*0x10024eabd*/
          if ( *(_BYTE *)v10 != 3 ) /*0x10024eac2*/
            return 0; /*0x10024eac2*/
          result = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x10024eacc*/
                     *(_QWORD *)(v10 + 16),
                     *(_QWORD *)(v10 + 24));
          if ( v11 == 0 || result == 0 ) /*0x10024eada*/
            return 0; /*0x10024eae7*/
        }
      }
    }
  }
  return result; /*0x10024eaed*/
}