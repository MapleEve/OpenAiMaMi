// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::models::RelayProvider as core::clone::Clone>::clone::had89229e14f971ec @ 0x1003155b0 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec(
        __int64 a1,
        __int64 a2)
{
  char v2; // r12
  char v3; // r13
  char v4; // r15
  unsigned __int64 v5; // rax
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 result; // rax
  __int128 v15; // [rsp+0h] [rbp-120h]
  __int128 v16; // [rsp+10h] [rbp-110h]
  _QWORD v17[3]; // [rsp+20h] [rbp-100h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-D0h]
  __int64 v20; // [rsp+58h] [rbp-C8h]
  _QWORD v21[3]; // [rsp+60h] [rbp-C0h] BYREF
  _QWORD v22[3]; // [rsp+78h] [rbp-A8h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp-90h] BYREF
  _QWORD v24[3]; // [rsp+A8h] [rbp-78h] BYREF
  _QWORD v25[3]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v26[3]; // [rsp+D8h] [rbp-48h] BYREF
  int v27; // [rsp+F4h] [rbp-2Ch]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, a2);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v25, a2 + 24);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, a2 + 48);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, a2 + 72);
  v2 = *(_BYTE *)(a2 + 228);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 96);
  v3 = *(_BYTE *)(a2 + 230);
  v4 = *(_BYTE *)(a2 + 231);
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h30f03e4abd722ada(v18, a2 + 120);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v21, a2 + 144);
  v27 = *(_DWORD *)(a2 + 224);
  v15 = *(_OWORD *)(a2 + 192);
  v16 = *(_OWORD *)(a2 + 208);
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 168)) )
  {
    v5 = 0x8000000000000000LL;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, a2 + 168);
    v5 = v17[0];
    v19 = v17[1];
    v20 = v17[2];
  }
  v6 = *(_BYTE *)(a2 + 229);
  *(_QWORD *)(a1 + 16) = v26[2];
  v7 = v26[0];
  *(_QWORD *)(a1 + 8) = v26[1];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 40) = v25[2];
  v8 = v25[0];
  *(_QWORD *)(a1 + 32) = v25[1];
  *(_QWORD *)(a1 + 24) = v8;
  v9 = v24[1];
  *(_QWORD *)(a1 + 48) = v24[0];
  *(_QWORD *)(a1 + 56) = v9;
  *(_QWORD *)(a1 + 64) = v24[2];
  *(_QWORD *)(a1 + 88) = v23[2];
  v10 = v23[0];
  *(_QWORD *)(a1 + 80) = v23[1];
  *(_QWORD *)(a1 + 72) = v10;
  *(_BYTE *)(a1 + 228) = v2;
  v11 = v22[1];
  *(_QWORD *)(a1 + 96) = v22[0];
  *(_QWORD *)(a1 + 104) = v11;
  *(_QWORD *)(a1 + 112) = v22[2];
  *(_BYTE *)(a1 + 230) = v3;
  *(_BYTE *)(a1 + 231) = v4;
  *(_QWORD *)(a1 + 136) = v18[2];
  v12 = v18[0];
  *(_QWORD *)(a1 + 128) = v18[1];
  *(_QWORD *)(a1 + 120) = v12;
  v13 = v21[1];
  *(_QWORD *)(a1 + 144) = v21[0];
  *(_QWORD *)(a1 + 152) = v13;
  *(_QWORD *)(a1 + 160) = v21[2];
  *(_DWORD *)(a1 + 224) = v27;
  *(_OWORD *)(a1 + 192) = v15;
  *(_OWORD *)(a1 + 208) = v16;
  *(_QWORD *)(a1 + 168) = v5;
  result = v19;
  *(_QWORD *)(a1 + 184) = v20;
  *(_QWORD *)(a1 + 176) = result;
  *(_BYTE *)(a1 + 229) = v6;
  return result;
}
