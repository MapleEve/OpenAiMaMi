// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x1005690c0 depth=2
__int64 __fastcall _$LT$codexmate_lib..core..models..AppPathState$u20$as$u20$core..clone..Clone$GT$::clone::hdafaaf8402976f61(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  char v3; // cl
  size_t v4; // rdx
  size_t v5; // rdx
  size_t v6; // rdx
  size_t v7; // rsi
  size_t v8; // rsi
  size_t v9; // rsi
  size_t v10; // rsi
  size_t v11[3]; // [rsp+8h] [rbp-B8h] BYREF
  size_t v12[3]; // [rsp+20h] [rbp-A0h] BYREF
  size_t v13[3]; // [rsp+38h] [rbp-88h] BYREF
  size_t v14[3]; // [rsp+50h] [rbp-70h] BYREF
  size_t v15[3]; // [rsp+68h] [rbp-58h] BYREF
  size_t v16[3]; // [rsp+80h] [rbp-40h] BYREF
  size_t v17[5]; // [rsp+98h] [rbp-28h] BYREF

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, a2); /*0x1005690d8*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v16, a2 + 24); /*0x1005690e5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v15, a2 + 48); /*0x1005690f2*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, a2 + 72); /*0x1005690ff*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v13, a2 + 96); /*0x10056910f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v12, a2 + 120); /*0x10056911f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v11, a2 + 144); /*0x100569132*/
  result = *(unsigned __int16 *)(a2 + 168); /*0x100569137*/
  v3 = *(_BYTE *)(a2 + 170); /*0x10056913f*/
  *(_QWORD *)(a1 + 16) = v17[2]; /*0x10056914b*/
  v4 = v17[0]; /*0x10056914f*/
  *(_QWORD *)(a1 + 8) = v17[1]; /*0x100569157*/
  *(_QWORD *)a1 = v4; /*0x10056915b*/
  *(_QWORD *)(a1 + 40) = v16[2]; /*0x100569162*/
  v5 = v16[0]; /*0x100569166*/
  *(_QWORD *)(a1 + 32) = v16[1]; /*0x10056916e*/
  *(_QWORD *)(a1 + 24) = v5; /*0x100569172*/
  *(_QWORD *)(a1 + 64) = v15[2]; /*0x10056917a*/
  v6 = v15[0]; /*0x10056917e*/
  *(_QWORD *)(a1 + 56) = v15[1]; /*0x100569186*/
  *(_QWORD *)(a1 + 48) = v6; /*0x10056918a*/
  v7 = v14[1]; /*0x100569192*/
  *(_QWORD *)(a1 + 72) = v14[0]; /*0x100569196*/
  *(_QWORD *)(a1 + 80) = v7; /*0x10056919a*/
  *(_QWORD *)(a1 + 88) = v14[2]; /*0x1005691a2*/
  v8 = v13[1]; /*0x1005691ad*/
  *(_QWORD *)(a1 + 96) = v13[0]; /*0x1005691b1*/
  *(_QWORD *)(a1 + 104) = v8; /*0x1005691b5*/
  *(_QWORD *)(a1 + 112) = v13[2]; /*0x1005691bd*/
  v9 = v12[1]; /*0x1005691c8*/
  *(_QWORD *)(a1 + 120) = v12[0]; /*0x1005691cf*/
  *(_QWORD *)(a1 + 128) = v9; /*0x1005691d3*/
  *(_QWORD *)(a1 + 136) = v12[2]; /*0x1005691e1*/
  v10 = v11[1]; /*0x1005691ef*/
  *(_QWORD *)(a1 + 144) = v11[0]; /*0x1005691f6*/
  *(_QWORD *)(a1 + 152) = v10; /*0x1005691fd*/
  *(_QWORD *)(a1 + 160) = v11[2]; /*0x10056920b*/
  *(_WORD *)(a1 + 168) = result; /*0x100569212*/
  *(_BYTE *)(a1 + 170) = v3; /*0x100569219*/
  return result; /*0x10056921f*/
}