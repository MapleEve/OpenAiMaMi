// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND resolve_relay_route node 0x10061faa0 depth=1
__int64 __fastcall _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7(
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

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, a2); /*0x10061fabe*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v25, a2 + 24); /*0x10061facb*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, a2 + 48); /*0x10061fad8*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, a2 + 72); /*0x10061fae8*/
  v2 = *(_BYTE *)(a2 + 228); /*0x10061faed*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 96); /*0x10061fb00*/
  v3 = *(_BYTE *)(a2 + 230); /*0x10061fb05*/
  v4 = *(_BYTE *)(a2 + 231); /*0x10061fb0d*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3(v18, a2 + 120); /*0x10061fb20*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v21, a2 + 144); /*0x10061fb33*/
  v27 = *(_DWORD *)(a2 + 224); /*0x10061fb3f*/
  v15 = *(_OWORD *)(a2 + 192); /*0x10061fb4a*/
  v16 = *(_OWORD *)(a2 + 208); /*0x10061fb59*/
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 168)) ) /*0x10061fb62*/
  {
    v5 = 0x8000000000000000LL; /*0x10061fb6b*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, a2 + 168); /*0x10061fb85*/
    v5 = v17[0]; /*0x10061fb8a*/
    v19 = v17[1]; /*0x10061fb98*/
    v20 = v17[2]; /*0x10061fba6*/
  }
  v6 = *(_BYTE *)(a2 + 229); /*0x10061fbad*/
  *(_QWORD *)(a1 + 16) = v26[2]; /*0x10061fbb9*/
  v7 = v26[0]; /*0x10061fbbd*/
  *(_QWORD *)(a1 + 8) = v26[1]; /*0x10061fbc5*/
  *(_QWORD *)a1 = v7; /*0x10061fbc9*/
  *(_QWORD *)(a1 + 40) = v25[2]; /*0x10061fbd0*/
  v8 = v25[0]; /*0x10061fbd4*/
  *(_QWORD *)(a1 + 32) = v25[1]; /*0x10061fbdc*/
  *(_QWORD *)(a1 + 24) = v8; /*0x10061fbe0*/
  v9 = v24[1]; /*0x10061fbe8*/
  *(_QWORD *)(a1 + 48) = v24[0]; /*0x10061fbec*/
  *(_QWORD *)(a1 + 56) = v9; /*0x10061fbf0*/
  *(_QWORD *)(a1 + 64) = v24[2]; /*0x10061fbf8*/
  *(_QWORD *)(a1 + 88) = v23[2]; /*0x10061fc00*/
  v10 = v23[0]; /*0x10061fc04*/
  *(_QWORD *)(a1 + 80) = v23[1]; /*0x10061fc12*/
  *(_QWORD *)(a1 + 72) = v10; /*0x10061fc16*/
  *(_BYTE *)(a1 + 228) = v2; /*0x10061fc1a*/
  v11 = v22[1]; /*0x10061fc28*/
  *(_QWORD *)(a1 + 96) = v22[0]; /*0x10061fc2f*/
  *(_QWORD *)(a1 + 104) = v11; /*0x10061fc33*/
  *(_QWORD *)(a1 + 112) = v22[2]; /*0x10061fc3e*/
  *(_BYTE *)(a1 + 230) = v3; /*0x10061fc42*/
  *(_BYTE *)(a1 + 231) = v4; /*0x10061fc49*/
  *(_QWORD *)(a1 + 136) = v18[2]; /*0x10061fc57*/
  v12 = v18[0]; /*0x10061fc5e*/
  *(_QWORD *)(a1 + 128) = v18[1]; /*0x10061fc6c*/
  *(_QWORD *)(a1 + 120) = v12; /*0x10061fc73*/
  v13 = v21[1]; /*0x10061fc7e*/
  *(_QWORD *)(a1 + 144) = v21[0]; /*0x10061fc85*/
  *(_QWORD *)(a1 + 152) = v13; /*0x10061fc8c*/
  *(_QWORD *)(a1 + 160) = v21[2]; /*0x10061fc9a*/
  *(_DWORD *)(a1 + 224) = v27; /*0x10061fca4*/
  *(_OWORD *)(a1 + 192) = v15; /*0x10061fcb1*/
  *(_OWORD *)(a1 + 208) = v16; /*0x10061fcbf*/
  *(_QWORD *)(a1 + 168) = v5; /*0x10061fcc6*/
  result = v19; /*0x10061fccd*/
  *(_QWORD *)(a1 + 184) = v20; /*0x10061fcdb*/
  *(_QWORD *)(a1 + 176) = result; /*0x10061fce2*/
  *(_BYTE *)(a1 + 229) = v6; /*0x10061fce9*/
  return result; /*0x10061fcef*/
}