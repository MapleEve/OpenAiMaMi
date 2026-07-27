// __ZN13codexmate_lib4core8sessions17patch_rollout_cwd28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100535b00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::patch_rollout_cwd::_$u7b$$u7b$closure$u7d$$u7d$::h1a70da12796aabef(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF

  v6[0] = a2; /*0x100535b0c*/
  v5[0] = v6; /*0x100535b14*/
  v5[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100535b1f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017C1A65, v5); /*0x100535b32*/
  a1[3] = v4[2]; /*0x100535b3b*/
  v2 = v4[0]; /*0x100535b3f*/
  a1[2] = v4[1]; /*0x100535b47*/
  a1[1] = v2; /*0x100535b4b*/
  *a1 = 10; /*0x100535b4f*/
  return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v6); /*0x100535b5f*/
}