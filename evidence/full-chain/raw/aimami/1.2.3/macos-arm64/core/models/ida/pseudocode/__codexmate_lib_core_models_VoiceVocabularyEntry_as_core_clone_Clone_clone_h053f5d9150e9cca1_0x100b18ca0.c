// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::VoiceVocabularyEntry as core::clone::Clone>::clone::h053f5d9150e9cca1 @ 0x100b18ca0 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models..VoiceVocabularyEntry$u20$as$u20$core..clone..Clone$GT$::clone::h053f5d9150e9cca1(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // r14
  char v3; // r13
  unsigned __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-C0h]
  __int64 v10; // [rsp+8h] [rbp-B8h]
  _QWORD v11[3]; // [rsp+10h] [rbp-B0h] BYREF
  _QWORD v12[3]; // [rsp+28h] [rbp-98h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-80h] BYREF
  __int64 v14; // [rsp+58h] [rbp-68h]
  __int64 v15; // [rsp+60h] [rbp-60h]
  __int64 v16; // [rsp+68h] [rbp-58h]
  __int64 v17; // [rsp+70h] [rbp-50h]
  unsigned __int64 v18; // [rsp+78h] [rbp-48h] BYREF
  __int64 v19; // [rsp+80h] [rbp-40h]
  __int64 v20; // [rsp+88h] [rbp-38h]
  unsigned __int64 v21; // [rsp+90h] [rbp-30h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v13, a2);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v12, a2 + 24);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v11, a2 + 48);
  v2 = 0x8000000000000000LL;
  v3 = *(_BYTE *)(a2 + 152);
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 72)) )
  {
    v21 = 0x8000000000000000LL;
    if ( *(_QWORD *)(a2 + 96) == 0x8000000000000000LL )
      goto LABEL_3;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v18, a2 + 72);
    v21 = v18;
    v16 = v19;
    v14 = v20;
    if ( *(_QWORD *)(a2 + 96) == 0x8000000000000000LL )
    {
LABEL_3:
      v4 = 0x8000000000000000LL;
      if ( *(_QWORD *)(a2 + 120) == 0x8000000000000000LL )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v18, a2 + 96);
  v4 = v18;
  v17 = v19;
  v15 = v20;
  if ( *(_QWORD *)(a2 + 120) != 0x8000000000000000LL )
  {
LABEL_7:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v18, a2 + 120);
    v2 = v18;
    v9 = v19;
    v10 = v20;
  }
LABEL_8:
  result = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 16) = v13[2];
  v6 = v13[0];
  *(_QWORD *)(a1 + 8) = v13[1];
  *(_QWORD *)a1 = v6;
  v7 = v12[0];
  *(_QWORD *)(a1 + 32) = v12[1];
  *(_QWORD *)(a1 + 40) = v12[2];
  *(_QWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 64) = v11[2];
  v8 = v11[0];
  *(_QWORD *)(a1 + 56) = v11[1];
  *(_QWORD *)(a1 + 48) = v8;
  *(_BYTE *)(a1 + 152) = v3;
  *(_QWORD *)(a1 + 72) = v21;
  *(_QWORD *)(a1 + 80) = v16;
  *(_QWORD *)(a1 + 88) = v14;
  *(_QWORD *)(a1 + 96) = v4;
  *(_QWORD *)(a1 + 104) = v17;
  *(_QWORD *)(a1 + 112) = v15;
  *(_QWORD *)(a1 + 120) = v2;
  *(_QWORD *)(a1 + 128) = v9;
  *(_QWORD *)(a1 + 136) = v10;
  *(_QWORD *)(a1 + 144) = result;
  return result;
}
