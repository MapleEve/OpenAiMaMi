// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::CoreError as core::fmt::Display>::fmt::hc0e7b2c6dc6b29f2 @ 0x1003a80a0 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  void *v5; // rdx
  _QWORD *v7; // [rsp+0h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+8h] [rbp-28h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-20h]
  _QWORD *v10; // [rsp+18h] [rbp-18h]
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-10h]
  _QWORD *v12; // [rsp+28h] [rbp-8h] BYREF

  v2 = 2;
  if ( *a1 >= 2u )
    v2 = *a1 - 2LL;
  switch ( v2 )
  {
    case 0LL:
      v12 = a1 + 1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hda92e7eeab656c83;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD8FC;
      break;
    case 1LL:
      v12 = a1 + 1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf77e482456819156;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD909;
      break;
    case 2LL:
      v12 = a1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h253070ca8f1949d4;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD918;
      break;
    case 3LL:
      v12 = a1 + 1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc51a49bd14674867;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD92D;
      break;
    case 4LL:
      v12 = a1 + 1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd3bc0d111418ea34;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD946;
      break;
    case 5LL:
      v7 = a1 + 1;
      v12 = a1 + 4;
      v8 = &v7;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
      v10 = &v12;
      v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd492899dc40ca8b8;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD955;
      break;
    case 6LL:
      v12 = a1 + 1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD968;
      break;
    case 7LL:
      v12 = a1 + 1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD976;
      break;
    case 8LL:
      v12 = a1 + 1;
      v8 = &v12;
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
      v3 = *a2;
      v4 = a2[1];
      v5 = &unk_1017BD987;
      break;
  }
  return core::fmt::write::h2e5a8157a38fb62d(v3, v4, v5, &v8);
}
