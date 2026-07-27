// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::repository::RegistryItem as core::clone::Clone>::clone::h21461c0ea2b82fea @ 0x100b17f00 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..repository..RegistryItem$u20$as$u20$core..clone..Clone$GT$::clone::h21461c0ea2b82fea(
        __int64 a1,
        const __m128i *a2,
        double a3,
        double a4)
{
  unsigned __int64 v6; // r12
  unsigned __int8 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __m128i v12; // xmm2
  unsigned __int8 v13; // dl
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // r8
  __m128i inserted; // xmm2
  __int64 result; // rax
  _QWORD v23[3]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v24[3]; // [rsp+18h] [rbp-148h] BYREF
  _QWORD v25[3]; // [rsp+30h] [rbp-130h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-118h] BYREF
  _QWORD v27[3]; // [rsp+60h] [rbp-100h] BYREF
  __int64 v28; // [rsp+78h] [rbp-E8h]
  __int64 v29; // [rsp+80h] [rbp-E0h]
  __int64 v30; // [rsp+88h] [rbp-D8h]
  __int64 v31; // [rsp+90h] [rbp-D0h]
  __int64 v32; // [rsp+98h] [rbp-C8h]
  __int64 v33; // [rsp+A0h] [rbp-C0h]
  __int64 v34; // [rsp+A8h] [rbp-B8h]
  __int64 v35; // [rsp+B0h] [rbp-B0h]
  __int64 v36; // [rsp+B8h] [rbp-A8h]
  __int64 v37; // [rsp+C0h] [rbp-A0h]
  __int64 v38; // [rsp+C8h] [rbp-98h]
  __int64 v39; // [rsp+D0h] [rbp-90h]
  __int64 v40; // [rsp+D8h] [rbp-88h]
  __int64 v41; // [rsp+E0h] [rbp-80h]
  __int64 v42; // [rsp+E8h] [rbp-78h]
  int v43; // [rsp+F0h] [rbp-70h]
  int v44; // [rsp+F4h] [rbp-6Ch]
  int v45; // [rsp+F8h] [rbp-68h]
  unsigned int v46; // [rsp+FCh] [rbp-64h]
  int v47; // [rsp+100h] [rbp-60h]
  int v48; // [rsp+104h] [rbp-5Ch]
  unsigned __int64 v49; // [rsp+108h] [rbp-58h]
  unsigned __int64 v50; // [rsp+110h] [rbp-50h]
  unsigned __int64 v51; // [rsp+118h] [rbp-48h] BYREF
  __int64 v52; // [rsp+120h] [rbp-40h]
  __int64 v53; // [rsp+128h] [rbp-38h]
  unsigned __int8 v54; // [rsp+137h] [rbp-29h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v27, &a2[12]);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, &a2[13].u64[1]);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v25, &a2[15]);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, &a2[16].u64[1]);
  v6 = 0x8000000000000000LL;
  if ( __OFSUB__(0, a2[21].i64[0]) )
  {
    v49 = 0x8000000000000000LL;
    if ( a2[22].i64[1] == 0x8000000000000000LL )
      goto LABEL_3;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v51, &a2[21]);
    v49 = v51;
    v40 = v52;
    v36 = v53;
    if ( a2[22].i64[1] == 0x8000000000000000LL )
    {
LABEL_3:
      v50 = 0x8000000000000000LL;
      if ( a2[24].i64[0] == 0x8000000000000000LL )
        goto LABEL_8;
LABEL_7:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v51, &a2[24]);
      v6 = v51;
      v42 = v52;
      v38 = v53;
      goto LABEL_8;
    }
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v51, &a2[22].u64[1]);
  v50 = v51;
  v41 = v52;
  v37 = v53;
  if ( a2[24].i64[0] != 0x8000000000000000LL )
    goto LABEL_7;
LABEL_8:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, &a2[18]);
  v7 = a2[26].u8[2];
  v8 = a2->i64[0];
  v28 = a2->i64[1];
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v51, &a2[19].u64[1]);
  v9 = a2[7].i64[0];
  v54 = v7;
  v29 = v8;
  if ( v9 != 2 )
  {
    a3 = *(double *)&a2[8].i64[1];
    v43 = a2[9].i32[0];
    v45 = a2[8].i32[0];
    v44 = a2[8].i32[1];
    v39 = a2[7].i64[1];
  }
  v10 = a2[1].i64[0];
  v11 = a2[1].i64[1];
  v12 = _mm_loadl_epi64(a2 + 26);
  v13 = a2[26].u8[3];
  v14 = a2[2].i64[0];
  v15 = a2[2].i64[1];
  v30 = a2[3].i64[0];
  v31 = a2[3].i64[1];
  v32 = a2[4].i64[0];
  v33 = a2[4].i64[1];
  v16 = a2[25].i64[1];
  v17 = a2[5].i64[0];
  v18 = a2[5].i64[1];
  v34 = a2[6].i64[0];
  v19 = a2[6].i64[1];
  v35 = v19;
  v20 = a2[9].i64[1];
  if ( v20 != 2 )
  {
    a4 = *(double *)a2[11].i64;
    v46 = a2[11].u32[2];
    v48 = a2[10].i32[2];
    v47 = a2[10].i32[3];
    v19 = a2[10].i64[0];
  }
  *(_QWORD *)(a1 + 208) = v27[2];
  *(_QWORD *)(a1 + 200) = v27[1];
  *(_QWORD *)(a1 + 192) = v27[0];
  *(_QWORD *)(a1 + 232) = v26[2];
  *(_QWORD *)(a1 + 224) = v26[1];
  *(_QWORD *)(a1 + 216) = v26[0];
  *(_QWORD *)(a1 + 256) = v25[2];
  *(_QWORD *)(a1 + 248) = v25[1];
  *(_QWORD *)(a1 + 240) = v25[0];
  *(_QWORD *)(a1 + 280) = v24[2];
  *(_QWORD *)(a1 + 272) = v24[1];
  *(_QWORD *)(a1 + 264) = v24[0];
  *(_QWORD *)(a1 + 336) = v49;
  *(_QWORD *)(a1 + 344) = v40;
  *(_QWORD *)(a1 + 352) = v36;
  *(_QWORD *)(a1 + 360) = v50;
  *(_QWORD *)(a1 + 368) = v41;
  *(_QWORD *)(a1 + 376) = v37;
  *(_QWORD *)(a1 + 384) = v6;
  *(_QWORD *)(a1 + 392) = v42;
  *(_QWORD *)(a1 + 400) = v38;
  *(_QWORD *)(a1 + 304) = v23[2];
  *(_QWORD *)(a1 + 296) = v23[1];
  *(_QWORD *)(a1 + 288) = v23[0];
  *(_QWORD *)a1 = v29;
  *(_QWORD *)(a1 + 8) = v28;
  *(_QWORD *)(a1 + 328) = v53;
  *(_QWORD *)(a1 + 320) = v52;
  *(_QWORD *)(a1 + 312) = v51;
  *(_QWORD *)(a1 + 16) = v10;
  inserted = _mm_insert_epi8(v12, v54, 2);
  *(_QWORD *)(a1 + 24) = v11;
  *(_DWORD *)(a1 + 416) = _mm_cvtsi128_si32(_mm_insert_epi8(inserted, v13, 3));
  *(_QWORD *)(a1 + 32) = v14;
  *(_QWORD *)(a1 + 40) = v15;
  *(_QWORD *)(a1 + 48) = v30;
  *(_QWORD *)(a1 + 56) = v31;
  *(_QWORD *)(a1 + 64) = v32;
  *(_QWORD *)(a1 + 72) = v33;
  *(_QWORD *)(a1 + 408) = v16;
  *(_QWORD *)(a1 + 80) = v17;
  *(_QWORD *)(a1 + 88) = v18;
  *(_QWORD *)(a1 + 96) = v34;
  *(_QWORD *)(a1 + 104) = v35;
  *(_QWORD *)(a1 + 112) = v9;
  *(_QWORD *)(a1 + 120) = v39;
  *(_DWORD *)(a1 + 128) = v45;
  *(_DWORD *)(a1 + 132) = v44;
  *(double *)(a1 + 136) = a3;
  *(_DWORD *)(a1 + 144) = v43;
  *(_QWORD *)(a1 + 152) = v20;
  *(_QWORD *)(a1 + 160) = v19;
  *(_DWORD *)(a1 + 168) = v48;
  *(_DWORD *)(a1 + 172) = v47;
  *(double *)(a1 + 176) = a4;
  result = v46;
  *(_DWORD *)(a1 + 184) = v46;
  return result;
}
