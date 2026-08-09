// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::auth::AuthFile as core::clone::Clone>::clone::h7f753630bb677f25 @ 0x100b14f90 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h7f753630bb677f25(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r14
  bool v4; // zf
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-108h]
  __int64 v12; // [rsp+10h] [rbp-100h]
  _QWORD v13[3]; // [rsp+18h] [rbp-F8h] BYREF
  _QWORD v14[12]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+90h] [rbp-80h]
  __int64 v16; // [rsp+98h] [rbp-78h]
  __int64 v17; // [rsp+A0h] [rbp-70h]
  unsigned __int64 v18; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-60h]
  __int64 v20; // [rsp+B8h] [rbp-58h]
  __int64 v21; // [rsp+C0h] [rbp-50h]
  __int64 v22; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v23; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v24; // [rsp+D8h] [rbp-38h]
  char v25; // [rsp+E7h] [rbp-29h]

  v2 = 0x8000000000000000LL;
  if ( __OFSUB__(0, *(_QWORD *)a2) )
  {
    v13[0] = 0x8000000000000000LL;
    if ( *(_QWORD *)(a2 + 24) != 0x8000000000000000LL )
      goto LABEL_3;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v13, a2);
    if ( *(_QWORD *)(a2 + 24) != 0x8000000000000000LL )
    {
LABEL_3:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, a2 + 24);
      v23 = v14[0];
      v15 = v14[1];
      v11 = v14[2];
      v3 = *(unsigned __int8 *)(a2 + 168);
      if ( *(_QWORD *)(a2 + 48) != 0x8000000000000000LL )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  v23 = 0x8000000000000000LL;
  v3 = *(unsigned __int8 *)(a2 + 168);
  if ( *(_QWORD *)(a2 + 48) != 0x8000000000000000LL )
  {
LABEL_4:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v18, a2 + 48);
    if ( *(_QWORD *)(a2 + 72) == 0x8000000000000000LL )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  v18 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a2 + 72) == 0x8000000000000000LL )
  {
LABEL_5:
    v24 = 0x8000000000000000LL;
    v4 = *(_QWORD *)(a2 + 96) == 0x8000000000000000LL;
    v25 = v3;
    if ( v4 )
      goto LABEL_6;
LABEL_12:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, a2 + 96);
    v5 = v14[0];
    v17 = v14[1];
    v3 = v14[2];
    v6 = 0x8000000000000000LL;
    if ( *(_QWORD *)(a2 + 120) == 0x8000000000000000LL )
      goto LABEL_14;
    goto LABEL_13;
  }
LABEL_11:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, a2 + 72);
  v24 = v14[0];
  v16 = v14[1];
  v12 = v14[2];
  v4 = *(_QWORD *)(a2 + 96) == 0x8000000000000000LL;
  v25 = v3;
  if ( !v4 )
    goto LABEL_12;
LABEL_6:
  v5 = 0x8000000000000000LL;
  v6 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a2 + 120) != 0x8000000000000000LL )
  {
LABEL_13:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, a2 + 120);
    v6 = v14[0];
    v21 = v14[1];
    v22 = v14[2];
  }
LABEL_14:
  v14[2] = v20;
  v14[1] = v19;
  v14[0] = v18;
  v14[3] = v24;
  v14[4] = v16;
  v14[5] = v12;
  v14[6] = v5;
  v14[7] = v17;
  v14[8] = v3;
  v14[9] = v6;
  v14[10] = v21;
  v14[11] = v22;
  if ( *(_QWORD *)(a2 + 144) == 0x8000000000000000LL )
  {
    v7 = v25;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v18, a2 + 144);
    v7 = v25;
    v2 = v18;
    v21 = v19;
    v22 = v20;
  }
  *(_QWORD *)(a1 + 16) = v13[2];
  v8 = v13[0];
  *(_QWORD *)(a1 + 8) = v13[1];
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 24) = v23;
  *(_QWORD *)(a1 + 32) = v15;
  *(_QWORD *)(a1 + 40) = v11;
  *(_BYTE *)(a1 + 168) = v7;
  qmemcpy((void *)(a1 + 48), v14, 0x60u);
  *(_QWORD *)(a1 + 144) = v2;
  result = v21;
  v10 = v22;
  *(_QWORD *)(a1 + 152) = v21;
  *(_QWORD *)(a1 + 160) = v10;
  return result;
}
