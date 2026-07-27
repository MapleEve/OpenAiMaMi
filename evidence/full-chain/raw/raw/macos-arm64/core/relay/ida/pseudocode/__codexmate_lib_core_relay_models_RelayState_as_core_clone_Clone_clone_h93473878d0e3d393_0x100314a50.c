// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::models::RelayState as core::clone::Clone>::clone::h93473878d0e3d393 @ 0x100314a50 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393(
        __int64 a1,
        __int64 a2)
{
  int v2; // r14d
  char v3; // r15
  __int16 v4; // r13
  __int16 v5; // r8
  __int16 v6; // r9
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  char v11; // r15
  char v12; // r13
  __int64 result; // rax
  _QWORD v14[3]; // [rsp+8h] [rbp-188h] BYREF
  __int64 v15; // [rsp+20h] [rbp-170h]
  __int64 v16; // [rsp+28h] [rbp-168h]
  __int64 v17; // [rsp+30h] [rbp-160h]
  __int64 v18; // [rsp+38h] [rbp-158h]
  __int64 v19; // [rsp+40h] [rbp-150h]
  __int64 v20; // [rsp+48h] [rbp-148h]
  __int64 v21; // [rsp+50h] [rbp-140h]
  __int64 v22; // [rsp+58h] [rbp-138h]
  __int64 v23; // [rsp+60h] [rbp-130h]
  __int64 v24; // [rsp+68h] [rbp-128h]
  __int64 v25; // [rsp+70h] [rbp-120h]
  _QWORD v26[10]; // [rsp+78h] [rbp-118h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-C8h]
  __int64 v28; // [rsp+D0h] [rbp-C0h]
  __int64 v29; // [rsp+D8h] [rbp-B8h]
  __int64 v30; // [rsp+E0h] [rbp-B0h]
  __int64 v31; // [rsp+E8h] [rbp-A8h]
  __int64 v32; // [rsp+F0h] [rbp-A0h]
  unsigned __int64 v33; // [rsp+F8h] [rbp-98h] BYREF
  __int64 v34; // [rsp+100h] [rbp-90h]
  __int64 v35; // [rsp+108h] [rbp-88h]
  int v36; // [rsp+114h] [rbp-7Ch]
  __int64 v37; // [rsp+118h] [rbp-78h] BYREF
  __int64 v38; // [rsp+120h] [rbp-70h]
  __int64 v39; // [rsp+128h] [rbp-68h]
  unsigned __int64 v40; // [rsp+130h] [rbp-60h]
  unsigned __int64 v41; // [rsp+138h] [rbp-58h]
  unsigned __int64 v42; // [rsp+140h] [rbp-50h]
  unsigned __int64 v43; // [rsp+148h] [rbp-48h] BYREF
  __int64 v44; // [rsp+150h] [rbp-40h]
  __int64 v45; // [rsp+158h] [rbp-38h]
  __int16 v46; // [rsp+164h] [rbp-2Ch]
  __int16 v47; // [rsp+166h] [rbp-2Ah]

  v2 = *(_DWORD *)(a2 + 288);
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc6c7bbf489308b98(v14);
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(v26, a2 + 24);
  v29 = v26[2];
  v28 = v26[1];
  v27 = v26[0];
  v3 = *(_BYTE *)(a2 + 122);
  v4 = *(_WORD *)(a2 + 120);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v37, a2 + 48);
  v36 = v2;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 72);
  v7 = 0x8000000000000000LL;
  v8 = 0x8000000000000000LL;
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 96)) )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, a2 + 96);
    v8 = v26[0];
    v33 = v26[1];
    v34 = v26[2];
  }
  BYTE2(v26[9]) = v3;
  LOWORD(v26[9]) = v4;
  v26[0] = v37;
  v26[1] = v38;
  v26[2] = v39;
  v9 = v44;
  v26[3] = v43;
  v26[4] = v44;
  v26[5] = v45;
  v26[6] = v8;
  v10 = v33;
  v26[7] = v33;
  v26[8] = v34;
  v11 = *(_BYTE *)(a2 + 292);
  v12 = *(_BYTE *)(a2 + 293);
  if ( *(_QWORD *)(a2 + 128) != 0x8000000000000000LL )
  {
    v25 = *(_QWORD *)(a2 + 272);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v33, a2 + 128);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v37, a2 + 152);
    if ( *(_QWORD *)(a2 + 176) == 0x8000000000000000LL )
    {
      v40 = 0x8000000000000000LL;
      if ( *(_QWORD *)(a2 + 200) == 0x8000000000000000LL )
        goto LABEL_6;
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 176);
      v40 = v43;
      v30 = v44;
      v22 = v45;
      if ( *(_QWORD *)(a2 + 200) == 0x8000000000000000LL )
      {
LABEL_6:
        v41 = 0x8000000000000000LL;
        if ( *(_QWORD *)(a2 + 224) == 0x8000000000000000LL )
        {
LABEL_7:
          v42 = 0x8000000000000000LL;
LABEL_11:
          v46 = *(_WORD *)(a2 + 280);
          v47 = *(_WORD *)(a2 + 282);
          if ( *(_QWORD *)(a2 + 248) != 0x8000000000000000LL )
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 248);
            v7 = v43;
            v15 = v44;
            v16 = v45;
          }
          v10 = v7;
          v7 = v33;
          v17 = v34;
          v18 = v35;
          v19 = v37;
          v20 = v38;
          v21 = v39;
          v9 = v25;
          v5 = v46;
          v6 = v47;
          goto LABEL_14;
        }
LABEL_10:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 224);
        v42 = v43;
        v32 = v44;
        v24 = v45;
        goto LABEL_11;
      }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 200);
    v41 = v43;
    v31 = v44;
    v23 = v45;
    if ( *(_QWORD *)(a2 + 224) == 0x8000000000000000LL )
      goto LABEL_7;
    goto LABEL_10;
  }
LABEL_14:
  *(_DWORD *)(a1 + 288) = v36;
  *(_QWORD *)a1 = v14[0];
  *(_QWORD *)(a1 + 8) = v14[1];
  *(_QWORD *)(a1 + 16) = v14[2];
  *(_QWORD *)(a1 + 24) = v27;
  *(_QWORD *)(a1 + 32) = v28;
  *(_QWORD *)(a1 + 40) = v29;
  qmemcpy((void *)(a1 + 48), v26, 0x50u);
  *(_BYTE *)(a1 + 292) = v11;
  *(_BYTE *)(a1 + 293) = v12;
  *(_QWORD *)(a1 + 128) = v7;
  *(_QWORD *)(a1 + 136) = v17;
  *(_QWORD *)(a1 + 144) = v18;
  *(_QWORD *)(a1 + 152) = v19;
  *(_QWORD *)(a1 + 160) = v20;
  *(_QWORD *)(a1 + 168) = v21;
  *(_QWORD *)(a1 + 176) = v40;
  *(_QWORD *)(a1 + 184) = v30;
  *(_QWORD *)(a1 + 192) = v22;
  *(_QWORD *)(a1 + 200) = v41;
  *(_QWORD *)(a1 + 208) = v31;
  *(_QWORD *)(a1 + 216) = v23;
  *(_QWORD *)(a1 + 224) = v42;
  *(_QWORD *)(a1 + 232) = v32;
  *(_QWORD *)(a1 + 240) = v24;
  *(_QWORD *)(a1 + 248) = v10;
  *(_QWORD *)(a1 + 256) = v15;
  result = v16;
  *(_QWORD *)(a1 + 264) = v16;
  *(_QWORD *)(a1 + 272) = v9;
  *(_WORD *)(a1 + 280) = v5;
  *(_WORD *)(a1 + 282) = v6;
  return result;
}
