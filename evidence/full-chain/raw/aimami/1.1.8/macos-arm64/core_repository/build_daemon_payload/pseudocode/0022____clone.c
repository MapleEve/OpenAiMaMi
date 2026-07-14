// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x100570680 depth=2
// _::clone
__int64 __fastcall _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::hf7194f57f3e2a274(
        __int64 a1,
        __int64 *a2)
{
  char v2; // dl
  size_t v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v8; // [rsp+0h] [rbp-170h]
  __int64 v9; // [rsp+10h] [rbp-160h]
  __int64 v10; // [rsp+18h] [rbp-158h]
  size_t v11[3]; // [rsp+20h] [rbp-150h] BYREF
  size_t v12[3]; // [rsp+38h] [rbp-138h] BYREF
  size_t v13[3]; // [rsp+50h] [rbp-120h] BYREF
  __int64 v14; // [rsp+68h] [rbp-108h]
  __int64 v15; // [rsp+70h] [rbp-100h]
  __int64 v16; // [rsp+78h] [rbp-F8h]
  __int64 v17; // [rsp+80h] [rbp-F0h]
  __int64 v18; // [rsp+88h] [rbp-E8h]
  __int64 v19; // [rsp+90h] [rbp-E0h]
  __int64 v20; // [rsp+98h] [rbp-D8h]
  __int64 v21; // [rsp+A0h] [rbp-D0h]
  __int64 v22; // [rsp+A8h] [rbp-C8h]
  __int64 v23; // [rsp+B0h] [rbp-C0h]
  __int64 v24; // [rsp+B8h] [rbp-B8h]
  __int64 v25; // [rsp+C0h] [rbp-B0h]
  __int64 v26; // [rsp+C8h] [rbp-A8h]
  __int64 v27; // [rsp+D0h] [rbp-A0h]
  __int64 v28; // [rsp+D8h] [rbp-98h]
  __int64 v29; // [rsp+E0h] [rbp-90h]
  __int64 v30; // [rsp+E8h] [rbp-88h]
  __int64 v31; // [rsp+F0h] [rbp-80h]
  int v32; // [rsp+F8h] [rbp-78h]
  int v33; // [rsp+FCh] [rbp-74h]
  int v34; // [rsp+100h] [rbp-70h]
  int v35; // [rsp+104h] [rbp-6Ch]
  int v36; // [rsp+108h] [rbp-68h]
  int v37; // [rsp+10Ch] [rbp-64h]
  size_t v38; // [rsp+110h] [rbp-60h]
  size_t v39; // [rsp+118h] [rbp-58h]
  size_t v40; // [rsp+120h] [rbp-50h]
  size_t v41; // [rsp+128h] [rbp-48h] BYREF
  __int64 v42; // [rsp+130h] [rbp-40h]
  __int64 v43; // [rsp+138h] [rbp-38h]
  char v44; // [rsp+145h] [rbp-2Bh]
  char v45; // [rsp+146h] [rbp-2Ah]
  char v46; // [rsp+147h] [rbp-29h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v13, (__int64)(a2 + 22)); /*0x1005706a8*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v12, (__int64)(a2 + 25)); /*0x1005706bc*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v11, (__int64)(a2 + 28)); /*0x1005706d0*/
  v3 = 0x8000000000000000LL; /*0x1005706d5*/
  if ( __OFSUB__(0, a2[31]) ) /*0x1005706e1*/
  {
    v38 = 0x8000000000000000LL; /*0x1005706ef*/
    if ( a2[34] == 0x8000000000000000LL ) /*0x1005706fb*/
      goto LABEL_3; /*0x1005706fb*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v41, (__int64)(a2 + 31)); /*0x100570780*/
    v38 = v41; /*0x100570789*/
    v29 = v42; /*0x100570791*/
    v22 = v43; /*0x10057079c*/
    if ( a2[34] == 0x8000000000000000LL ) /*0x1005707ab*/
    {
LABEL_3:
      v39 = 0x8000000000000000LL; /*0x100570701*/
      if ( a2[37] == 0x8000000000000000LL ) /*0x10057070d*/
        goto LABEL_4; /*0x10057070d*/
      goto LABEL_9; /*0x10057070d*/
    }
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v41, (__int64)(a2 + 34)); /*0x1005707bd*/
  v39 = v41; /*0x1005707c6*/
  v30 = v42; /*0x1005707ce*/
  v23 = v43; /*0x1005707d9*/
  if ( a2[37] == 0x8000000000000000LL ) /*0x1005707e8*/
  {
LABEL_4:
    v40 = 0x8000000000000000LL; /*0x100570713*/
    v14 = a2[6]; /*0x100570720*/
    if ( v14 == 2 ) /*0x100570727*/
      goto LABEL_5; /*0x100570727*/
    goto LABEL_10; /*0x100570727*/
  }
LABEL_9:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v41, (__int64)(a2 + 37)); /*0x1005707ee*/
  v40 = v41; /*0x100570803*/
  v31 = v42; /*0x10057080b*/
  v28 = v43; /*0x100570813*/
  v14 = a2[6]; /*0x100570823*/
  if ( v14 == 2 ) /*0x10057082a*/
  {
LABEL_5:
    v4 = a2[11]; /*0x10057072d*/
    if ( v4 == 2 ) /*0x100570736*/
      goto LABEL_11; /*0x100570736*/
    goto LABEL_6; /*0x100570736*/
  }
LABEL_10:
  v24 = a2[9]; /*0x100570830*/
  v32 = *((_DWORD *)a2 + 20); /*0x100570844*/
  v34 = *((_DWORD *)a2 + 16); /*0x10057084c*/
  v33 = *((_DWORD *)a2 + 17); /*0x100570854*/
  v25 = a2[7]; /*0x10057085c*/
  v4 = a2[11]; /*0x100570863*/
  if ( v4 != 2 ) /*0x10057086c*/
  {
LABEL_6:
    v26 = a2[14]; /*0x10057073c*/
    v36 = *((_DWORD *)a2 + 30); /*0x100570750*/
    v37 = *((_DWORD *)a2 + 26); /*0x100570758*/
    v35 = *((_DWORD *)a2 + 27); /*0x100570760*/
    v27 = a2[12]; /*0x100570768*/
  }
LABEL_11:
  v44 = *((_BYTE *)a2 + 333); /*0x100570872*/
  v15 = *a2; /*0x100570882*/
  v16 = a2[1]; /*0x10057088e*/
  v45 = *((_BYTE *)a2 + 332); /*0x10057089e*/
  v17 = a2[40]; /*0x1005708a9*/
  v18 = a2[2]; /*0x1005708b5*/
  v19 = a2[3]; /*0x1005708c1*/
  v20 = a2[4]; /*0x1005708cd*/
  v5 = a2[5]; /*0x1005708d4*/
  v21 = v5; /*0x1005708d9*/
  v8 = a2[41]; /*0x1005708ea*/
  v6 = a2[16]; /*0x1005708f1*/
  if ( v6 != 2 ) /*0x1005708fd*/
  {
    v46 = *((_BYTE *)a2 + 168); /*0x10057090a*/
    if ( a2[18] != 0x8000000000000000LL ) /*0x100570915*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v41, (__int64)(a2 + 18)); /*0x100570923*/
      v3 = v41; /*0x100570928*/
      v9 = v42; /*0x100570930*/
      v10 = v43; /*0x10057093b*/
    }
    v5 = a2[17]; /*0x100570942*/
    v2 = v46; /*0x10057094a*/
  }
  *(_QWORD *)(a1 + 192) = v13[2]; /*0x100570955*/
  *(_QWORD *)(a1 + 184) = v13[1]; /*0x100570963*/
  *(_QWORD *)(a1 + 176) = v13[0]; /*0x100570971*/
  *(_QWORD *)(a1 + 200) = v12[0]; /*0x10057097f*/
  *(_QWORD *)(a1 + 208) = v12[1]; /*0x10057098d*/
  *(_QWORD *)(a1 + 216) = v12[2]; /*0x10057099b*/
  *(_QWORD *)(a1 + 240) = v11[2]; /*0x1005709a9*/
  *(_QWORD *)(a1 + 232) = v11[1]; /*0x1005709b7*/
  *(_QWORD *)(a1 + 224) = v11[0]; /*0x1005709c5*/
  *(_QWORD *)(a1 + 248) = v38; /*0x1005709d0*/
  *(_QWORD *)(a1 + 256) = v29; /*0x1005709de*/
  *(_QWORD *)(a1 + 264) = v22; /*0x1005709ec*/
  *(_QWORD *)(a1 + 272) = v39; /*0x1005709f7*/
  *(_QWORD *)(a1 + 280) = v30; /*0x100570a05*/
  *(_QWORD *)(a1 + 288) = v23; /*0x100570a13*/
  *(_QWORD *)(a1 + 296) = v40; /*0x100570a1e*/
  *(_QWORD *)(a1 + 304) = v31; /*0x100570a29*/
  *(_QWORD *)(a1 + 312) = v28; /*0x100570a37*/
  *(_BYTE *)(a1 + 333) = v44; /*0x100570a42*/
  *(_QWORD *)a1 = v15; /*0x100570a4f*/
  *(_QWORD *)(a1 + 8) = v16; /*0x100570a59*/
  *(_BYTE *)(a1 + 332) = v45; /*0x100570a61*/
  *(_QWORD *)(a1 + 320) = v17; /*0x100570a6e*/
  *(_QWORD *)(a1 + 16) = v18; /*0x100570a7c*/
  *(_QWORD *)(a1 + 24) = v19; /*0x100570a87*/
  *(_QWORD *)(a1 + 32) = v20; /*0x100570a92*/
  *(_QWORD *)(a1 + 40) = v21; /*0x100570a9d*/
  *(_DWORD *)(a1 + 328) = v8; /*0x100570aa8*/
  *(_QWORD *)(a1 + 48) = v14; /*0x100570ab7*/
  *(_QWORD *)(a1 + 56) = v25; /*0x100570ac2*/
  *(_DWORD *)(a1 + 64) = v34; /*0x100570ac9*/
  *(_DWORD *)(a1 + 68) = v33; /*0x100570acf*/
  *(_QWORD *)(a1 + 72) = v24; /*0x100570ada*/
  *(_DWORD *)(a1 + 80) = v32; /*0x100570ae2*/
  *(_QWORD *)(a1 + 88) = v4; /*0x100570ae5*/
  *(_QWORD *)(a1 + 96) = v27; /*0x100570af0*/
  *(_DWORD *)(a1 + 104) = v37; /*0x100570af7*/
  *(_DWORD *)(a1 + 108) = v35; /*0x100570afd*/
  *(_QWORD *)(a1 + 112) = v26; /*0x100570b08*/
  *(_DWORD *)(a1 + 120) = v36; /*0x100570b10*/
  *(_QWORD *)(a1 + 128) = v6; /*0x100570b13*/
  *(_QWORD *)(a1 + 136) = v5; /*0x100570b1a*/
  *(_QWORD *)(a1 + 144) = v3; /*0x100570b21*/
  *(_QWORD *)(a1 + 160) = v10; /*0x100570b2f*/
  *(_QWORD *)(a1 + 152) = v9; /*0x100570b3d*/
  *(_BYTE *)(a1 + 168) = v2; /*0x100570b44*/
  return v9; /*0x100570b4a*/
}