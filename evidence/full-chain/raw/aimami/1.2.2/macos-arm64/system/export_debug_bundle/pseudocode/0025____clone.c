// mac 1.2.2 NEW export_debug_bundle 0x100486960 d=1
__int64 __fastcall _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h7943b7bbe3bd7225(
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

  v2 = *(_DWORD *)(a2 + 288); /*0x10048697a*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5b8c4b096f6c0c4a(v14); /*0x100486988*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hae17e51243c075c3(v26, a2 + 24); /*0x100486999*/
  v29 = v26[2]; /*0x1004869a5*/
  v28 = v26[1]; /*0x1004869ba*/
  v27 = v26[0]; /*0x1004869c1*/
  v3 = *(_BYTE *)(a2 + 122); /*0x1004869cd*/
  v4 = *(_WORD *)(a2 + 120); /*0x1004869d3*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v37, a2 + 48); /*0x1004869dd*/
  v36 = v2; /*0x1004869e2*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 72); /*0x1004869ef*/
  v7 = 0x8000000000000000LL; /*0x1004869f4*/
  v8 = 0x8000000000000000LL; /*0x100486a05*/
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 96)) ) /*0x100486a08*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, a2 + 96); /*0x100486a16*/
    v8 = v26[0]; /*0x100486a1b*/
    v33 = v26[1]; /*0x100486a29*/
    v34 = v26[2]; /*0x100486a37*/
  }
  BYTE2(v26[9]) = v3; /*0x100486a3e*/
  LOWORD(v26[9]) = v4; /*0x100486a45*/
  v26[0] = v37; /*0x100486a55*/
  v26[1] = v38; /*0x100486a5c*/
  v26[2] = v39; /*0x100486a67*/
  v9 = v44; /*0x100486a72*/
  v26[3] = v43; /*0x100486a76*/
  v26[4] = v44; /*0x100486a7d*/
  v26[5] = v45; /*0x100486a88*/
  v26[6] = v8; /*0x100486a8f*/
  v10 = v33; /*0x100486a96*/
  v26[7] = v33; /*0x100486aa4*/
  v26[8] = v34; /*0x100486aab*/
  v11 = *(_BYTE *)(a2 + 292); /*0x100486ab2*/
  v12 = *(_BYTE *)(a2 + 293); /*0x100486abb*/
  if ( *(_QWORD *)(a2 + 128) != 0x8000000000000000LL ) /*0x100486acc*/
  {
    v25 = *(_QWORD *)(a2 + 272); /*0x100486ae3*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v33, a2 + 128); /*0x100486af1*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v37, a2 + 152); /*0x100486b02*/
    if ( *(_QWORD *)(a2 + 176) == 0x8000000000000000LL ) /*0x100486b0f*/
    {
      v40 = 0x8000000000000000LL; /*0x100486b11*/
      if ( *(_QWORD *)(a2 + 200) == 0x8000000000000000LL ) /*0x100486b1d*/
        goto LABEL_6; /*0x100486b1d*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 176); /*0x100486b42*/
      v40 = v43; /*0x100486b4b*/
      v30 = v44; /*0x100486b53*/
      v22 = v45; /*0x100486b5e*/
      if ( *(_QWORD *)(a2 + 200) == 0x8000000000000000LL ) /*0x100486b6d*/
      {
LABEL_6:
        v41 = 0x8000000000000000LL; /*0x100486b1f*/
        if ( *(_QWORD *)(a2 + 224) == 0x8000000000000000LL ) /*0x100486b2b*/
        {
LABEL_7:
          v42 = 0x8000000000000000LL; /*0x100486b2d*/
LABEL_11:
          v46 = *(_WORD *)(a2 + 280); /*0x100486bd7*/
          v47 = *(_WORD *)(a2 + 282); /*0x100486bed*/
          if ( *(_QWORD *)(a2 + 248) != 0x8000000000000000LL ) /*0x100486bf9*/
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 248); /*0x100486c09*/
            v7 = v43; /*0x100486c0e*/
            v15 = v44; /*0x100486c16*/
            v16 = v45; /*0x100486c21*/
          }
          v10 = v7; /*0x100486c28*/
          v7 = v33; /*0x100486c2b*/
          v17 = v34; /*0x100486c39*/
          v18 = v35; /*0x100486c47*/
          v19 = v37; /*0x100486c56*/
          v20 = v38; /*0x100486c5d*/
          v21 = v39; /*0x100486c68*/
          v9 = v25; /*0x100486c6f*/
          v5 = v46; /*0x100486c76*/
          v6 = v47; /*0x100486c7b*/
          goto LABEL_14; /*0x100486c7b*/
        }
LABEL_10:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 224); /*0x100486ba8*/
        v42 = v43; /*0x100486bbd*/
        v32 = v44; /*0x100486bc5*/
        v24 = v45; /*0x100486bd0*/
        goto LABEL_11; /*0x100486bd0*/
      }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v43, a2 + 200); /*0x100486b7b*/
    v41 = v43; /*0x100486b84*/
    v31 = v44; /*0x100486b8c*/
    v23 = v45; /*0x100486b97*/
    if ( *(_QWORD *)(a2 + 224) == 0x8000000000000000LL ) /*0x100486ba6*/
      goto LABEL_7; /*0x100486ba6*/
    goto LABEL_10; /*0x100486ba6*/
  }
LABEL_14:
  *(_DWORD *)(a1 + 288) = v36; /*0x100486c80*/
  *(_QWORD *)a1 = v14[0]; /*0x100486c90*/
  *(_QWORD *)(a1 + 8) = v14[1]; /*0x100486c9a*/
  *(_QWORD *)(a1 + 16) = v14[2]; /*0x100486ca5*/
  *(_QWORD *)(a1 + 24) = v27; /*0x100486cb0*/
  *(_QWORD *)(a1 + 32) = v28; /*0x100486cbb*/
  *(_QWORD *)(a1 + 40) = v29; /*0x100486cc6*/
  qmemcpy((void *)(a1 + 48), v26, 0x50u); /*0x100486cda*/
  *(_BYTE *)(a1 + 292) = v11; /*0x100486cdd*/
  *(_BYTE *)(a1 + 293) = v12; /*0x100486ce4*/
  *(_QWORD *)(a1 + 128) = v7; /*0x100486ceb*/
  *(_QWORD *)(a1 + 136) = v17; /*0x100486cf9*/
  *(_QWORD *)(a1 + 144) = v18; /*0x100486d07*/
  *(_QWORD *)(a1 + 152) = v19; /*0x100486d15*/
  *(_QWORD *)(a1 + 160) = v20; /*0x100486d23*/
  *(_QWORD *)(a1 + 168) = v21; /*0x100486d31*/
  *(_QWORD *)(a1 + 176) = v40; /*0x100486d3c*/
  *(_QWORD *)(a1 + 184) = v30; /*0x100486d4a*/
  *(_QWORD *)(a1 + 192) = v22; /*0x100486d58*/
  *(_QWORD *)(a1 + 200) = v41; /*0x100486d63*/
  *(_QWORD *)(a1 + 208) = v31; /*0x100486d71*/
  *(_QWORD *)(a1 + 216) = v23; /*0x100486d7f*/
  *(_QWORD *)(a1 + 224) = v42; /*0x100486d8a*/
  *(_QWORD *)(a1 + 232) = v32; /*0x100486d98*/
  *(_QWORD *)(a1 + 240) = v24; /*0x100486da6*/
  *(_QWORD *)(a1 + 248) = v10; /*0x100486dad*/
  *(_QWORD *)(a1 + 256) = v15; /*0x100486dbb*/
  result = v16; /*0x100486dc2*/
  *(_QWORD *)(a1 + 264) = v16; /*0x100486dc9*/
  *(_QWORD *)(a1 + 272) = v9; /*0x100486dd0*/
  *(_WORD *)(a1 + 280) = v5; /*0x100486dd7*/
  *(_WORD *)(a1 + 282) = v6; /*0x100486ddf*/
  return result; /*0x100486de7*/
}