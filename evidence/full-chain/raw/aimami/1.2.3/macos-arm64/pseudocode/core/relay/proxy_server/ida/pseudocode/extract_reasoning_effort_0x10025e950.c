// __ZN13codexmate_lib4core5relay12proxy_server24extract_reasoning_effort @ 0x10025e950 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::extract_reasoning_effort::hdd2dd3291d079fa0(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *result; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // r14
  __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rax
  signed __int64 v14; // rdx
  __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rdx
  __int64 v18; // r15
  void *v19; // rax
  unsigned __int64 v20; // r12
  void *__src; // [rsp+0h] [rbp-30h]

  v4 = *a1; /*0x10025e964*/
  v5 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a2, &unk_1015DD6C0, 17); /*0x10025e976*/
  if ( v5 ) /*0x10025e97e*/
  {
    if ( *(_BYTE *)v5 == 3 ) /*0x10025e983*/
    {
      v6 = *(_QWORD *)(v5 + 16); /*0x10025e985*/
      v7 = *(_QWORD *)(v5 + 24); /*0x10025e989*/
      result = (_QWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x10025e98d*/
      v10 = v9; /*0x10025e992*/
      if ( result != nullptr && v9 != 0 ) /*0x10025e99e*/
        goto LABEL_16; /*0x10025e9a1*/
    }
  }
  v4 = 0x8000000000000000LL; /*0x10025e9a9*/
  v11 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a2, &unk_1015DD6D1, 17); /*0x10025e9c2*/
  if ( v11 ) /*0x10025e9ca*/
  {
    if ( *(_BYTE *)v11 == 3 ) /*0x10025e9cf*/
    {
      v6 = *(_QWORD *)(v11 + 16); /*0x10025e9d1*/
      v7 = *(_QWORD *)(v11 + 24); /*0x10025e9d5*/
      result = (_QWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x10025e9d9*/
      v10 = v12; /*0x10025e9de*/
      if ( result != nullptr && v12 != 0 ) /*0x10025e9ea*/
        goto LABEL_16; /*0x10025e9ed*/
    }
  }
  v13 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a2, &unk_1015DD6E2, 7); /*0x10025ea04*/
  if ( v13 ) /*0x10025ea0c*/
  {
    if ( *(_BYTE *)v13 == 3 ) /*0x10025ea11*/
    {
      v6 = *(_QWORD *)(v13 + 16); /*0x10025ea13*/
      v7 = *(_QWORD *)(v13 + 24); /*0x10025ea17*/
      result = (_QWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x10025ea1b*/
      v10 = v14; /*0x10025ea20*/
      if ( result != nullptr && v14 != 0 ) /*0x10025ea2c*/
        goto LABEL_16; /*0x10025ea2f*/
    }
  }
  v15 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a2, &unk_1015DD6E9, 45); /*0x10025ea42*/
  if ( v15 ) /*0x10025ea4a*/
  {
    if ( *(_BYTE *)v15 == 3 ) /*0x10025ea4f*/
    {
      v6 = *(_QWORD *)(v15 + 16); /*0x10025ea51*/
      v7 = *(_QWORD *)(v15 + 24); /*0x10025ea55*/
      result = (_QWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x10025ea59*/
      v10 = v16; /*0x10025ea5e*/
      if ( result != nullptr && v16 != 0 ) /*0x10025ea6a*/
        goto LABEL_16; /*0x10025ea6d*/
    }
  }
  result = (_QWORD *)serde_json::value::Value::pointer::hda2ad138ba9a0c27(a2, &unk_1015DD716, 26); /*0x10025ea80*/
  if ( result ) /*0x10025ea88*/
  {
    if ( *(_BYTE *)result == 3 ) /*0x10025ea8d*/
    {
      v6 = result[2]; /*0x10025ea8f*/
      v7 = result[3]; /*0x10025ea93*/
      result = (_QWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x10025ea97*/
      v10 = v17; /*0x10025ea9c*/
      if ( result != nullptr && v17 != 0 ) /*0x10025eaa8*/
      {
LABEL_16:
        if ( v10 < 0 ) /*0x10025eab2*/
        {
          v18 = 0; /*0x10025eab4*/
          goto LABEL_18; /*0x10025eab4*/
        }
        __src = result; /*0x10025eac5*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x10025eac9*/
        v18 = 1; /*0x10025eace*/
        v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x10025eadc*/
        if ( !v19 ) /*0x10025eae4*/
        {
LABEL_18:
          *a1 = v4; /*0x10025eab7*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v10); /*0x10025eac0*/
        }
        v20 = (unsigned __int64)v19; /*0x10025eae6*/
        result = memcpy(v19, __src, v10); /*0x10025eaf3*/
        a1[1] = v20; /*0x10025eaf8*/
        a1[2] = v10; /*0x10025eafc*/
        v4 = v10; /*0x10025eb00*/
      }
    }
  }
  *a1 = v4; /*0x10025eb03*/
  return result; /*0x10025eb0a*/
}