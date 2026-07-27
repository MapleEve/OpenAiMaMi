// __ZN13codexmate_lib4core5relay7storage19sanitize_for_export @ 0x1008af220 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(__int64 a1, __int64 a2)
{
  int v3; // r14d
  char v4; // r15
  __int16 v5; // r13
  __int16 v6; // r8
  __int16 v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  char v12; // r15
  char v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD v22[3]; // [rsp+0h] [rbp-170h] BYREF
  __int64 v23; // [rsp+18h] [rbp-158h]
  __int64 v24; // [rsp+20h] [rbp-150h]
  __int64 v25; // [rsp+28h] [rbp-148h]
  __int64 v26; // [rsp+30h] [rbp-140h]
  __int64 v27; // [rsp+38h] [rbp-138h]
  __int64 v28; // [rsp+40h] [rbp-130h]
  _QWORD v29[10]; // [rsp+48h] [rbp-128h] BYREF
  __int64 v30; // [rsp+98h] [rbp-D8h]
  __int64 v31; // [rsp+A0h] [rbp-D0h]
  __int64 v32; // [rsp+A8h] [rbp-C8h]
  __int64 v33; // [rsp+B0h] [rbp-C0h]
  __int64 v34; // [rsp+B8h] [rbp-B8h]
  __int64 v35; // [rsp+C0h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+D0h] [rbp-A0h]
  __int64 v38; // [rsp+D8h] [rbp-98h]
  int v39; // [rsp+E4h] [rbp-8Ch]
  __int64 v40; // [rsp+E8h] [rbp-88h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-80h]
  __int64 v42; // [rsp+F8h] [rbp-78h]
  unsigned __int64 v43; // [rsp+100h] [rbp-70h]
  unsigned __int64 v44; // [rsp+108h] [rbp-68h]
  unsigned __int64 v45; // [rsp+110h] [rbp-60h]
  unsigned __int64 v46; // [rsp+118h] [rbp-58h] BYREF
  __int64 v47; // [rsp+120h] [rbp-50h]
  __int64 v48; // [rsp+128h] [rbp-48h]
  __int64 v49; // [rsp+130h] [rbp-40h]
  __int64 v50; // [rsp+138h] [rbp-38h]
  __int16 v51; // [rsp+144h] [rbp-2Ch]
  __int16 v52; // [rsp+146h] [rbp-2Ah]

  v3 = *(_DWORD *)(a2 + 288); /*0x1008af23a*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc6c7bbf489308b98(v22); /*0x1008af248*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(v29, a2 + 24); /*0x1008af259*/
  v32 = v29[2]; /*0x1008af265*/
  v31 = v29[1]; /*0x1008af27a*/
  v30 = v29[0]; /*0x1008af281*/
  v4 = *(_BYTE *)(a2 + 122); /*0x1008af28d*/
  v5 = *(_WORD *)(a2 + 120); /*0x1008af293*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v40, a2 + 48); /*0x1008af2a0*/
  v39 = v3; /*0x1008af2a5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v46, a2 + 72); /*0x1008af2b5*/
  v8 = 0x8000000000000000LL; /*0x1008af2ba*/
  v9 = 0x8000000000000000LL; /*0x1008af2cb*/
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 96)) ) /*0x1008af2ce*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v29, a2 + 96); /*0x1008af2dc*/
    v9 = v29[0]; /*0x1008af2e1*/
    v36 = v29[1]; /*0x1008af2ef*/
    v37 = v29[2]; /*0x1008af2fd*/
  }
  BYTE2(v29[9]) = v4; /*0x1008af304*/
  LOWORD(v29[9]) = v5; /*0x1008af30b*/
  v29[0] = v40; /*0x1008af31e*/
  v29[1] = v41; /*0x1008af325*/
  v29[2] = v42; /*0x1008af330*/
  v10 = v47; /*0x1008af33b*/
  v29[3] = v46; /*0x1008af33f*/
  v29[4] = v47; /*0x1008af346*/
  v29[5] = v48; /*0x1008af351*/
  v29[6] = v9; /*0x1008af358*/
  v11 = v36; /*0x1008af35f*/
  v29[7] = v36; /*0x1008af36d*/
  v29[8] = v37; /*0x1008af374*/
  v12 = *(_BYTE *)(a2 + 292); /*0x1008af37b*/
  v13 = *(_BYTE *)(a2 + 293); /*0x1008af384*/
  if ( *(_QWORD *)(a2 + 128) != 0x8000000000000000LL ) /*0x1008af395*/
  {
    v28 = *(_QWORD *)(a2 + 272); /*0x1008af3ac*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v36, a2 + 128); /*0x1008af3ba*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v40, a2 + 152); /*0x1008af3ce*/
    if ( *(_QWORD *)(a2 + 176) == 0x8000000000000000LL ) /*0x1008af3db*/
    {
      v43 = 0x8000000000000000LL; /*0x1008af3dd*/
      if ( *(_QWORD *)(a2 + 200) == 0x8000000000000000LL ) /*0x1008af3e9*/
        goto LABEL_6; /*0x1008af3e9*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v46, a2 + 176); /*0x1008af40e*/
      v43 = v46; /*0x1008af417*/
      v33 = v47; /*0x1008af41f*/
      v25 = v48; /*0x1008af42a*/
      if ( *(_QWORD *)(a2 + 200) == 0x8000000000000000LL ) /*0x1008af439*/
      {
LABEL_6:
        v44 = 0x8000000000000000LL; /*0x1008af3eb*/
        if ( *(_QWORD *)(a2 + 224) == 0x8000000000000000LL ) /*0x1008af3f7*/
        {
LABEL_7:
          v45 = 0x8000000000000000LL; /*0x1008af3f9*/
LABEL_11:
          v51 = *(_WORD *)(a2 + 280); /*0x1008af4a3*/
          v52 = *(_WORD *)(a2 + 282); /*0x1008af4b9*/
          if ( *(_QWORD *)(a2 + 248) != 0x8000000000000000LL ) /*0x1008af4c5*/
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v46, a2 + 248); /*0x1008af4d5*/
            v8 = v46; /*0x1008af4da*/
            v23 = v47; /*0x1008af4e2*/
            v24 = v48; /*0x1008af4ed*/
          }
          v11 = v8; /*0x1008af4f4*/
          v8 = v36; /*0x1008af4f7*/
          v46 = v37; /*0x1008af505*/
          v47 = v38; /*0x1008af510*/
          v48 = v40; /*0x1008af51f*/
          v49 = v41; /*0x1008af523*/
          v50 = v42; /*0x1008af52b*/
          v10 = v28; /*0x1008af52f*/
          v6 = v51; /*0x1008af536*/
          v7 = v52; /*0x1008af53b*/
          goto LABEL_14; /*0x1008af53b*/
        }
LABEL_10:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v46, a2 + 224); /*0x1008af474*/
        v45 = v46; /*0x1008af489*/
        v35 = v47; /*0x1008af491*/
        v27 = v48; /*0x1008af49c*/
        goto LABEL_11; /*0x1008af49c*/
      }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v46, a2 + 200); /*0x1008af447*/
    v44 = v46; /*0x1008af450*/
    v34 = v47; /*0x1008af458*/
    v26 = v48; /*0x1008af463*/
    if ( *(_QWORD *)(a2 + 224) == 0x8000000000000000LL ) /*0x1008af472*/
      goto LABEL_7; /*0x1008af472*/
    goto LABEL_10; /*0x1008af472*/
  }
LABEL_14:
  *(_DWORD *)(a1 + 288) = v39; /*0x1008af540*/
  *(_QWORD *)a1 = v22[0]; /*0x1008af553*/
  *(_QWORD *)(a1 + 8) = v22[1]; /*0x1008af55d*/
  *(_QWORD *)(a1 + 16) = v22[2]; /*0x1008af568*/
  *(_QWORD *)(a1 + 24) = v30; /*0x1008af573*/
  *(_QWORD *)(a1 + 32) = v31; /*0x1008af57e*/
  *(_QWORD *)(a1 + 40) = v32; /*0x1008af589*/
  qmemcpy((void *)(a1 + 48), v29, 0x50u); /*0x1008af59d*/
  *(_BYTE *)(a1 + 292) = v12; /*0x1008af5a0*/
  *(_BYTE *)(a1 + 293) = v13; /*0x1008af5a7*/
  *(_QWORD *)(a1 + 128) = v8; /*0x1008af5ae*/
  *(_QWORD *)(a1 + 136) = v46; /*0x1008af5b9*/
  *(_QWORD *)(a1 + 144) = v47; /*0x1008af5c4*/
  *(_QWORD *)(a1 + 152) = v48; /*0x1008af5cf*/
  *(_QWORD *)(a1 + 160) = v49; /*0x1008af5da*/
  *(_QWORD *)(a1 + 168) = v50; /*0x1008af5e5*/
  *(_QWORD *)(a1 + 176) = v43; /*0x1008af5f0*/
  *(_QWORD *)(a1 + 184) = v33; /*0x1008af5fe*/
  *(_QWORD *)(a1 + 192) = v25; /*0x1008af60c*/
  *(_QWORD *)(a1 + 200) = v44; /*0x1008af617*/
  *(_QWORD *)(a1 + 208) = v34; /*0x1008af625*/
  *(_QWORD *)(a1 + 216) = v26; /*0x1008af633*/
  *(_QWORD *)(a1 + 224) = v45; /*0x1008af63e*/
  *(_QWORD *)(a1 + 232) = v35; /*0x1008af64c*/
  *(_QWORD *)(a1 + 240) = v27; /*0x1008af65a*/
  *(_QWORD *)(a1 + 248) = v11; /*0x1008af661*/
  *(_QWORD *)(a1 + 256) = v23; /*0x1008af66f*/
  *(_QWORD *)(a1 + 264) = v24; /*0x1008af67d*/
  *(_QWORD *)(a1 + 272) = v10; /*0x1008af684*/
  *(_WORD *)(a1 + 280) = v6; /*0x1008af68b*/
  *(_WORD *)(a1 + 282) = v7; /*0x1008af693*/
  v14 = *(_QWORD *)(a1 + 16); /*0x1008af69b*/
  if ( v14 ) /*0x1008af6a2*/
  {
    v15 = *(_QWORD *)(a1 + 8); /*0x1008af6a8*/
    v16 = 232 * v14; /*0x1008af6ac*/
    v17 = 232 * v14 - 232; /*0x1008af6b3*/
    v18 = *(_QWORD **)(a1 + 8); /*0x1008af6d4*/
    if ( (~(v17 / 0xE8) & 7) != 0 ) /*0x1008af6db*/
    {
      v19 = -(__int64)(((unsigned __int8)(v17 / 0xE8) + 1) & 7); /*0x1008af6e2*/
      v18 = *(_QWORD **)(a1 + 8); /*0x1008af6e5*/
      do /*0x1008af701*/
      {
        v18[11] = 0; /*0x1008af6f0*/
        v18 += 29; /*0x1008af6f8*/
        ++v19; /*0x1008af6fe*/
      }
      while ( v19 ); /*0x1008af701*/
    }
    if ( v17 >= 0x658 ) /*0x1008af70a*/
    {
      v20 = (_QWORD *)(v16 + v15); /*0x1008af70c*/
      do /*0x1008af76e*/
      {
        v18[11] = 0; /*0x1008af710*/
        v18[40] = 0; /*0x1008af718*/
        v18[69] = 0; /*0x1008af723*/
        v18[98] = 0; /*0x1008af72e*/
        v18[127] = 0; /*0x1008af739*/
        v18[156] = 0; /*0x1008af744*/
        v18[185] = 0; /*0x1008af74f*/
        v18[214] = 0; /*0x1008af75a*/
        v18 += 232; /*0x1008af765*/
      }
      while ( v18 != v20 ); /*0x1008af76e*/
    }
  }
  return a1; /*0x1008af773*/
}