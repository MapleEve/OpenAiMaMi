// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::auth::AuthFile as core::clone::Clone>::clone::h7f753630bb677f25 @ 0x100810060 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h7f753630bb677f25(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // r15
  char v3; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-120h]
  __int64 v8; // [rsp+8h] [rbp-118h]
  __int64 v9; // [rsp+10h] [rbp-110h]
  __int64 v10; // [rsp+18h] [rbp-108h]
  __int64 v11; // [rsp+20h] [rbp-100h]
  __int64 v12; // [rsp+28h] [rbp-F8h]
  __int64 v13; // [rsp+30h] [rbp-F0h]
  unsigned __int64 v14; // [rsp+38h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-E0h]
  __int64 v16; // [rsp+48h] [rbp-D8h]
  __int64 v17; // [rsp+50h] [rbp-D0h]
  __int64 v18; // [rsp+58h] [rbp-C8h]
  __int64 v19; // [rsp+60h] [rbp-C0h]
  __int64 v20; // [rsp+68h] [rbp-B8h]
  __int64 v21; // [rsp+70h] [rbp-B0h]
  _QWORD v22[12]; // [rsp+78h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v24; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v25; // [rsp+E8h] [rbp-38h]
  unsigned __int64 v26; // [rsp+F0h] [rbp-30h]

  v2 = 0x8000000000000000LL;
  if ( __OFSUB__(0, *(_QWORD *)a2) )
  {
    v23 = 0x8000000000000000LL;
    if ( *(_QWORD *)(a2 + 24) != 0x8000000000000000LL )
      goto LABEL_3;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2);
    v23 = v22[0];
    v17 = v22[1];
    v9 = v22[2];
    if ( *(_QWORD *)(a2 + 24) != 0x8000000000000000LL )
    {
LABEL_3:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 24);
      v24 = v22[0];
      v18 = v22[1];
      v11 = v22[2];
      v3 = *(_BYTE *)(a2 + 168);
      if ( *(_QWORD *)(a2 + 48) != 0x8000000000000000LL )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  v24 = 0x8000000000000000LL;
  v3 = *(_BYTE *)(a2 + 168);
  if ( *(_QWORD *)(a2 + 48) != 0x8000000000000000LL )
  {
LABEL_4:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 48);
    v25 = v22[0];
    v19 = v22[1];
    v10 = v22[2];
    if ( *(_QWORD *)(a2 + 72) != 0x8000000000000000LL )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  v25 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a2 + 72) != 0x8000000000000000LL )
  {
LABEL_5:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 72);
    v26 = v22[0];
    v20 = v22[1];
    v12 = v22[2];
    if ( *(_QWORD *)(a2 + 96) != 0x8000000000000000LL )
      goto LABEL_6;
LABEL_12:
    v4 = 0x8000000000000000LL;
    v5 = 0x8000000000000000LL;
    if ( *(_QWORD *)(a2 + 120) == 0x8000000000000000LL )
      goto LABEL_14;
    goto LABEL_13;
  }
LABEL_11:
  v26 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a2 + 96) == 0x8000000000000000LL )
    goto LABEL_12;
LABEL_6:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 96);
  v4 = v22[0];
  v21 = v22[1];
  v13 = v22[2];
  v5 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a2 + 120) != 0x8000000000000000LL )
  {
LABEL_13:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 120);
    v5 = v22[0];
    v14 = v22[1];
    v15 = v22[2];
  }
LABEL_14:
  v22[0] = v25;
  v22[1] = v19;
  v22[2] = v10;
  v22[3] = v26;
  v22[4] = v20;
  v22[5] = v12;
  v22[6] = v4;
  v22[7] = v21;
  v22[8] = v13;
  v22[9] = v5;
  v22[10] = v14;
  v22[11] = v15;
  if ( *(_QWORD *)(a2 + 144) != 0x8000000000000000LL )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v14, a2 + 144);
    v2 = v14;
    v7 = v15;
    v8 = v16;
  }
  *(_QWORD *)a1 = v23;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 24) = v24;
  *(_QWORD *)(a1 + 32) = v18;
  *(_QWORD *)(a1 + 40) = v11;
  *(_BYTE *)(a1 + 168) = v3;
  qmemcpy((void *)(a1 + 48), v22, 0x60u);
  *(_QWORD *)(a1 + 144) = v2;
  *(_QWORD *)(a1 + 152) = v7;
  *(_QWORD *)(a1 + 160) = v8;
  return v7;
}
