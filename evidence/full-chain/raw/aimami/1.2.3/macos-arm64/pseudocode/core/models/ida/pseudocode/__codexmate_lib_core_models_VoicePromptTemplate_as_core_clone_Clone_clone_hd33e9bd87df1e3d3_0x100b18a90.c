// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::VoicePromptTemplate as core::clone::Clone>::clone::hd33e9bd87df1e3d3 @ 0x100b18a90 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models..VoicePromptTemplate$u20$as$u20$core..clone..Clone$GT$::clone::hd33e9bd87df1e3d3(
        __int64 a1,
        __int64 a2)
{
  char v2; // r15
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v10[3]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v12[6]; // [rsp+50h] [rbp-30h] BYREF

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v12, a2);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v11, a2 + 24);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v10, a2 + 48);
  v2 = *(_BYTE *)(a2 + 105);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v9, a2 + 72);
  result = *(unsigned __int8 *)(a2 + 104);
  v4 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 16) = v12[2];
  v5 = v12[0];
  *(_QWORD *)(a1 + 8) = v12[1];
  *(_QWORD *)a1 = v5;
  v6 = v11[1];
  *(_QWORD *)(a1 + 24) = v11[0];
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = v11[2];
  *(_QWORD *)(a1 + 64) = v10[2];
  v7 = v10[0];
  *(_QWORD *)(a1 + 56) = v10[1];
  *(_QWORD *)(a1 + 48) = v7;
  *(_BYTE *)(a1 + 105) = v2;
  *(_QWORD *)(a1 + 88) = v9[2];
  v8 = v9[0];
  *(_QWORD *)(a1 + 80) = v9[1];
  *(_QWORD *)(a1 + 72) = v8;
  *(_BYTE *)(a1 + 104) = result;
  *(_QWORD *)(a1 + 96) = v4;
  return result;
}
