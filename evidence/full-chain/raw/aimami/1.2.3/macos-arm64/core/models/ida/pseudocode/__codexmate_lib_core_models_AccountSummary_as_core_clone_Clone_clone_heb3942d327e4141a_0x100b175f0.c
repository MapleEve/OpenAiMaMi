// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::AccountSummary as core::clone::Clone>::clone::heb3942d327e4141a @ 0x100b175f0 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a(
        __int64 a1,
        double *a2,
        double a3,
        double a4)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  char v9; // r10
  double v10; // r11
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r9
  __m128 v17; // xmm2
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // [rsp+0h] [rbp-110h]
  __int64 v21; // [rsp+8h] [rbp-108h]
  _QWORD v22[3]; // [rsp+10h] [rbp-100h] BYREF
  _QWORD v23[3]; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v24[3]; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-B8h]
  __int64 v26; // [rsp+60h] [rbp-B0h]
  __int64 v27; // [rsp+68h] [rbp-A8h]
  __int64 v28; // [rsp+70h] [rbp-A0h]
  __int64 v29; // [rsp+78h] [rbp-98h]
  __int64 v30; // [rsp+80h] [rbp-90h]
  __int64 v31; // [rsp+88h] [rbp-88h]
  __int64 v32; // [rsp+90h] [rbp-80h]
  __int64 v33; // [rsp+98h] [rbp-78h]
  __int64 v34; // [rsp+A0h] [rbp-70h]
  __int64 v35; // [rsp+A8h] [rbp-68h]
  int v36; // [rsp+B0h] [rbp-60h]
  int v37; // [rsp+B4h] [rbp-5Ch]
  int v38; // [rsp+B8h] [rbp-58h]
  int v39; // [rsp+BCh] [rbp-54h]
  int v40; // [rsp+C0h] [rbp-50h]
  int v41; // [rsp+C4h] [rbp-4Ch]
  unsigned __int64 v42; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-40h]
  __int64 v44; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v45; // [rsp+E0h] [rbp-30h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, a2 + 23);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, a2 + 26);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 29);
  v6 = 0x8000000000000000LL;
  if ( __OFSUB__(0, *((_QWORD *)a2 + 32)) )
  {
    v45 = 0x8000000000000000LL;
    if ( *((_QWORD *)a2 + 35) == 0x8000000000000000LL )
      goto LABEL_3;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v42, a2 + 32);
    v45 = v42;
    v34 = v43;
    v30 = v44;
    if ( *((_QWORD *)a2 + 35) == 0x8000000000000000LL )
    {
LABEL_3:
      v7 = 0x8000000000000000LL;
      if ( *((_QWORD *)a2 + 38) == 0x8000000000000000LL )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v42, a2 + 35);
  v7 = v42;
  v35 = v43;
  v31 = v44;
  if ( *((_QWORD *)a2 + 38) == 0x8000000000000000LL )
  {
LABEL_4:
    v8 = *((_QWORD *)a2 + 10);
    v25 = v7;
    if ( v8 == 2 )
      goto LABEL_10;
LABEL_9:
    a3 = a2[13];
    v36 = *((_DWORD *)a2 + 28);
    v38 = *((_DWORD *)a2 + 24);
    v37 = *((_DWORD *)a2 + 25);
    v32 = *((_QWORD *)a2 + 11);
    goto LABEL_10;
  }
LABEL_8:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v42, a2 + 38);
  v6 = v42;
  v20 = v43;
  v21 = v44;
  v8 = *((_QWORD *)a2 + 10);
  v25 = v7;
  if ( v8 != 2 )
    goto LABEL_9;
LABEL_10:
  v9 = *((_BYTE *)a2 + 344);
  v10 = *a2;
  v11 = *((_QWORD *)a2 + 1);
  v26 = *((_QWORD *)a2 + 2);
  v12 = *((_QWORD *)a2 + 3);
  v13 = *((_QWORD *)a2 + 4);
  v14 = *((_QWORD *)a2 + 5);
  v15 = *((_QWORD *)a2 + 41);
  v16 = *((_QWORD *)a2 + 6);
  v27 = *((_QWORD *)a2 + 7);
  v28 = *((_QWORD *)a2 + 8);
  v29 = *((_QWORD *)a2 + 9);
  v17 = (__m128)*((unsigned __int64 *)a2 + 42);
  v18 = *((_QWORD *)a2 + 15);
  if ( v18 != 2 )
  {
    a4 = a2[18];
    v39 = *((_DWORD *)a2 + 38);
    v40 = *((_DWORD *)a2 + 34);
    v41 = *((_DWORD *)a2 + 35);
    v33 = *((_QWORD *)a2 + 16);
  }
  *(_QWORD *)(a1 + 200) = v24[2];
  *(_QWORD *)(a1 + 192) = v24[1];
  *(_QWORD *)(a1 + 184) = v24[0];
  *(_QWORD *)(a1 + 224) = v23[2];
  *(_QWORD *)(a1 + 216) = v23[1];
  *(_QWORD *)(a1 + 208) = v23[0];
  *(_QWORD *)(a1 + 248) = v22[2];
  *(_QWORD *)(a1 + 240) = v22[1];
  *(_QWORD *)(a1 + 232) = v22[0];
  *(_QWORD *)(a1 + 256) = v45;
  *(_QWORD *)(a1 + 264) = v34;
  *(_QWORD *)(a1 + 272) = v30;
  *(_QWORD *)(a1 + 280) = v25;
  *(_QWORD *)(a1 + 288) = v35;
  *(_QWORD *)(a1 + 296) = v31;
  *(_QWORD *)(a1 + 304) = v6;
  *(_QWORD *)(a1 + 312) = v20;
  *(_QWORD *)(a1 + 320) = v21;
  *(_BYTE *)(a1 + 344) = v9;
  *(double *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 16) = v26;
  *(_QWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 32) = v13;
  *(_QWORD *)(a1 + 40) = v14;
  *(_QWORD *)(a1 + 328) = v15;
  *(_QWORD *)(a1 + 48) = v16;
  *(_QWORD *)(a1 + 56) = v27;
  *(_QWORD *)(a1 + 64) = v28;
  *(_QWORD *)(a1 + 72) = v29;
  _mm_storel_ps((double *)(a1 + 336), v17);
  *(_QWORD *)(a1 + 80) = v8;
  *(_QWORD *)(a1 + 88) = v32;
  *(_DWORD *)(a1 + 96) = v38;
  *(_DWORD *)(a1 + 100) = v37;
  *(double *)(a1 + 104) = a3;
  *(_DWORD *)(a1 + 112) = v36;
  *(_QWORD *)(a1 + 120) = v18;
  *(_QWORD *)(a1 + 128) = v33;
  *(_DWORD *)(a1 + 136) = v40;
  *(_DWORD *)(a1 + 140) = v41;
  *(double *)(a1 + 144) = a4;
  *(_DWORD *)(a1 + 152) = v39;
  *(double *)(a1 + 160) = a2[20];
  *(double *)(a1 + 168) = a2[21];
  result = *((unsigned __int8 *)a2 + 176);
  *(_BYTE *)(a1 + 176) = result;
  return result;
}
