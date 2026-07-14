// mac 1.1.8 upsert_relay_provider node va=0x10061f260 depth=2
// _::clone
__int64 __fastcall _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hdc194ad118c67832(
        __int64 a1,
        __int64 a2)
{
  int v2; // r14d
  char v3; // r15
  __int16 v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  char v7; // r13
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int16 v11; // r8
  __int16 v12; // r9
  __int64 result; // rax
  _QWORD v14[3]; // [rsp+8h] [rbp-1B8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-1A0h]
  __int64 v16; // [rsp+28h] [rbp-198h]
  __int64 v17; // [rsp+30h] [rbp-190h]
  __int64 v18; // [rsp+38h] [rbp-188h]
  __int64 v19; // [rsp+40h] [rbp-180h]
  __int64 v20; // [rsp+48h] [rbp-178h]
  __int64 v21; // [rsp+50h] [rbp-170h]
  _QWORD v22[3]; // [rsp+58h] [rbp-168h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-150h] BYREF
  __int64 v24; // [rsp+88h] [rbp-138h]
  __int64 v25; // [rsp+90h] [rbp-130h]
  __int64 v26; // [rsp+98h] [rbp-128h]
  __int64 v27; // [rsp+A0h] [rbp-120h]
  _QWORD v28[10]; // [rsp+A8h] [rbp-118h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-C8h]
  __int64 v30; // [rsp+100h] [rbp-C0h]
  __int64 v31; // [rsp+108h] [rbp-B8h]
  __int64 v32; // [rsp+110h] [rbp-B0h]
  __int64 v33; // [rsp+118h] [rbp-A8h]
  __int64 v34; // [rsp+120h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+128h] [rbp-98h] BYREF
  __int64 v36; // [rsp+130h] [rbp-90h]
  __int64 v37; // [rsp+138h] [rbp-88h]
  int v38; // [rsp+144h] [rbp-7Ch]
  __int64 v39; // [rsp+148h] [rbp-78h] BYREF
  __int64 v40; // [rsp+150h] [rbp-70h]
  __int64 v41; // [rsp+158h] [rbp-68h]
  unsigned __int64 v42; // [rsp+160h] [rbp-60h]
  unsigned __int64 v43; // [rsp+168h] [rbp-58h]
  unsigned __int64 v44; // [rsp+170h] [rbp-50h]
  unsigned __int64 v45; // [rsp+178h] [rbp-48h] BYREF
  __int64 v46; // [rsp+180h] [rbp-40h]
  __int64 v47; // [rsp+188h] [rbp-38h]
  __int16 v48; // [rsp+194h] [rbp-2Ch]
  __int16 v49; // [rsp+196h] [rbp-2Ah]

  v2 = *(_DWORD *)(a2 + 336); /*0x10061f27a*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7af1916271c065d2(v14); /*0x10061f288*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd2fe128b4c6cf4cc(v28, a2 + 24); /*0x10061f299*/
  v31 = v28[2]; /*0x10061f2a5*/
  v30 = v28[1]; /*0x10061f2ba*/
  v29 = v28[0]; /*0x10061f2c1*/
  v3 = *(_BYTE *)(a2 + 122); /*0x10061f2cd*/
  v4 = *(_WORD *)(a2 + 120); /*0x10061f2d3*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, a2 + 48); /*0x10061f2dd*/
  v38 = v2; /*0x10061f2e2*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, a2 + 72); /*0x10061f2ef*/
  v5 = 0x8000000000000000LL; /*0x10061f2f4*/
  v6 = 0x8000000000000000LL; /*0x10061f305*/
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 96)) ) /*0x10061f308*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v28, a2 + 96); /*0x10061f316*/
    v6 = v28[0]; /*0x10061f31b*/
    v35 = v28[1]; /*0x10061f329*/
    v36 = v28[2]; /*0x10061f337*/
  }
  BYTE2(v28[9]) = v3; /*0x10061f33e*/
  LOWORD(v28[9]) = v4; /*0x10061f345*/
  v28[0] = v39; /*0x10061f355*/
  v28[1] = v40; /*0x10061f35c*/
  v28[2] = v41; /*0x10061f367*/
  v28[3] = v45; /*0x10061f376*/
  v28[4] = v46; /*0x10061f37d*/
  v28[5] = v47; /*0x10061f388*/
  v28[6] = v6; /*0x10061f38f*/
  v28[7] = v35; /*0x10061f3a4*/
  v28[8] = v36; /*0x10061f3ab*/
  v7 = *(_BYTE *)(a2 + 340); /*0x10061f3b2*/
  v8 = *(_BYTE *)(a2 + 341); /*0x10061f3bb*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, a2 + 128); /*0x10061f3d3*/
  v9 = _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 152); /*0x10061f3e7*/
  if ( *(_QWORD *)(a2 + 176) != 0x8000000000000000LL ) /*0x10061f3f4*/
  {
    v27 = *(_QWORD *)(a2 + 320); /*0x10061f40b*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v35, a2 + 176); /*0x10061f419*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, a2 + 200); /*0x10061f42a*/
    if ( *(_QWORD *)(a2 + 224) == 0x8000000000000000LL ) /*0x10061f437*/
    {
      v42 = 0x8000000000000000LL; /*0x10061f439*/
      if ( *(_QWORD *)(a2 + 248) == 0x8000000000000000LL ) /*0x10061f445*/
        goto LABEL_6; /*0x10061f445*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, a2 + 224); /*0x10061f46a*/
      v42 = v45; /*0x10061f473*/
      v32 = v46; /*0x10061f47b*/
      v24 = v47; /*0x10061f486*/
      if ( *(_QWORD *)(a2 + 248) == 0x8000000000000000LL ) /*0x10061f495*/
      {
LABEL_6:
        v43 = 0x8000000000000000LL; /*0x10061f447*/
        if ( *(_QWORD *)(a2 + 272) == 0x8000000000000000LL ) /*0x10061f453*/
        {
LABEL_7:
          v44 = 0x8000000000000000LL; /*0x10061f455*/
LABEL_11:
          v48 = *(_WORD *)(a2 + 328); /*0x10061f4ff*/
          v49 = *(_WORD *)(a2 + 330); /*0x10061f515*/
          if ( *(_QWORD *)(a2 + 296) != 0x8000000000000000LL ) /*0x10061f521*/
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, a2 + 296); /*0x10061f531*/
            v5 = v45; /*0x10061f536*/
            v15 = v46; /*0x10061f53e*/
            v16 = v47; /*0x10061f549*/
          }
          v9 = v5; /*0x10061f550*/
          v5 = v35; /*0x10061f553*/
          v17 = v36; /*0x10061f561*/
          v18 = v37; /*0x10061f56f*/
          v19 = v39; /*0x10061f57e*/
          v20 = v40; /*0x10061f585*/
          v21 = v41; /*0x10061f590*/
          v10 = v27; /*0x10061f597*/
          v11 = v48; /*0x10061f59e*/
          v12 = v49; /*0x10061f5a3*/
          goto LABEL_14; /*0x10061f5a3*/
        }
LABEL_10:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, a2 + 272); /*0x10061f4d0*/
        v44 = v45; /*0x10061f4e5*/
        v34 = v46; /*0x10061f4ed*/
        v26 = v47; /*0x10061f4f8*/
        goto LABEL_11; /*0x10061f4f8*/
      }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v45, a2 + 248); /*0x10061f4a3*/
    v43 = v45; /*0x10061f4ac*/
    v33 = v46; /*0x10061f4b4*/
    v25 = v47; /*0x10061f4bf*/
    if ( *(_QWORD *)(a2 + 272) == 0x8000000000000000LL ) /*0x10061f4ce*/
      goto LABEL_7; /*0x10061f4ce*/
    goto LABEL_10; /*0x10061f4ce*/
  }
LABEL_14:
  *(_DWORD *)(a1 + 336) = v38; /*0x10061f5a8*/
  *(_QWORD *)a1 = v14[0]; /*0x10061f5b8*/
  *(_QWORD *)(a1 + 8) = v14[1]; /*0x10061f5c2*/
  *(_QWORD *)(a1 + 16) = v14[2]; /*0x10061f5cd*/
  *(_QWORD *)(a1 + 24) = v29; /*0x10061f5d8*/
  *(_QWORD *)(a1 + 32) = v30; /*0x10061f5e3*/
  *(_QWORD *)(a1 + 40) = v31; /*0x10061f5ee*/
  qmemcpy((void *)(a1 + 48), v28, 0x50u); /*0x10061f602*/
  *(_BYTE *)(a1 + 340) = v7; /*0x10061f605*/
  *(_BYTE *)(a1 + 341) = v8; /*0x10061f60c*/
  *(_QWORD *)(a1 + 128) = v23[0]; /*0x10061f61a*/
  *(_QWORD *)(a1 + 136) = v23[1]; /*0x10061f628*/
  *(_QWORD *)(a1 + 144) = v23[2]; /*0x10061f636*/
  *(_QWORD *)(a1 + 152) = v22[0]; /*0x10061f644*/
  *(_QWORD *)(a1 + 160) = v22[1]; /*0x10061f652*/
  *(_QWORD *)(a1 + 168) = v22[2]; /*0x10061f660*/
  *(_QWORD *)(a1 + 176) = v5; /*0x10061f667*/
  *(_QWORD *)(a1 + 184) = v17; /*0x10061f675*/
  *(_QWORD *)(a1 + 192) = v18; /*0x10061f683*/
  *(_QWORD *)(a1 + 200) = v19; /*0x10061f691*/
  *(_QWORD *)(a1 + 208) = v20; /*0x10061f69f*/
  *(_QWORD *)(a1 + 216) = v21; /*0x10061f6ad*/
  *(_QWORD *)(a1 + 224) = v42; /*0x10061f6b8*/
  *(_QWORD *)(a1 + 232) = v32; /*0x10061f6c6*/
  *(_QWORD *)(a1 + 240) = v24; /*0x10061f6d4*/
  *(_QWORD *)(a1 + 248) = v43; /*0x10061f6df*/
  *(_QWORD *)(a1 + 256) = v33; /*0x10061f6ed*/
  *(_QWORD *)(a1 + 264) = v25; /*0x10061f6fb*/
  *(_QWORD *)(a1 + 272) = v44; /*0x10061f706*/
  *(_QWORD *)(a1 + 280) = v34; /*0x10061f714*/
  *(_QWORD *)(a1 + 288) = v26; /*0x10061f722*/
  *(_QWORD *)(a1 + 296) = v9; /*0x10061f729*/
  *(_QWORD *)(a1 + 304) = v15; /*0x10061f737*/
  result = v16; /*0x10061f73e*/
  *(_QWORD *)(a1 + 312) = v16; /*0x10061f745*/
  *(_QWORD *)(a1 + 320) = v10; /*0x10061f74c*/
  *(_WORD *)(a1 + 328) = v11; /*0x10061f753*/
  *(_WORD *)(a1 + 330) = v12; /*0x10061f75b*/
  return result; /*0x10061f763*/
}