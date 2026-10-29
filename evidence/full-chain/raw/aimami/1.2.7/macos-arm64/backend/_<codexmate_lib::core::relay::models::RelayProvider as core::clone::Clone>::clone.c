// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h9016453159161c7c; addr: 0x1002b61f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:15Z
__int64 __fastcall _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h9016453159161c7c(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // r13
  char v3; // r14
  unsigned __int64 v4; // rax
  char v5; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // [rsp+0h] [rbp-140h]
  __int128 v16; // [rsp+10h] [rbp-130h]
  _QWORD v17[3]; // [rsp+20h] [rbp-120h] BYREF
  __int64 v18; // [rsp+38h] [rbp-108h]
  __int64 v19; // [rsp+40h] [rbp-100h]
  _QWORD v20[3]; // [rsp+48h] [rbp-F8h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-E0h] BYREF
  _QWORD v22[3]; // [rsp+78h] [rbp-C8h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp-B0h] BYREF
  _QWORD v24[3]; // [rsp+A8h] [rbp-98h] BYREF
  _QWORD v25[3]; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-68h]
  unsigned __int64 v27; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-58h]
  __int64 v29; // [rsp+F0h] [rbp-50h]
  __int64 v30; // [rsp+F8h] [rbp-48h]
  int v31; // [rsp+104h] [rbp-3Ch]
  unsigned __int64 v32; // [rsp+108h] [rbp-38h]
  char v33; // [rsp+117h] [rbp-29h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v25, a2); /*0x1002b620e*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, a2 + 24); /*0x1002b621f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, a2 + 48); /*0x1002b6230*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 72); /*0x1002b6241*/
  v2 = 0x8000000000000000LL; /*0x1002b6246*/
  v3 = *(_BYTE *)(a2 + 252); /*0x1002b6250*/
  v4 = 2; /*0x1002b626a*/
  if ( *(__int64 *)(a2 + 192) < 0 ) /*0x1002b626f*/
    v4 = *(_QWORD *)(a2 + 192) ^ 0x8000000000000000LL; /*0x1002b626f*/
  if ( v4 ) /*0x1002b6276*/
  {
    if ( v4 == 1 ) /*0x1002b627c*/
    {
      v32 = 0x8000000000000001LL; /*0x1002b6282*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v27, a2 + 192); /*0x1002b629a*/
      v32 = v27; /*0x1002b62a3*/
      v30 = v28; /*0x1002b62ab*/
      v26 = v29; /*0x1002b62b3*/
    }
  }
  else
  {
    v32 = 0x8000000000000000LL; /*0x1002b6288*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v21, a2 + 96); /*0x1002b62c3*/
  v5 = *(_BYTE *)(a2 + 254); /*0x1002b62c8*/
  v33 = *(_BYTE *)(a2 + 255); /*0x1002b62da*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h48fc670a7dc08785(v17, a2 + 120); /*0x1002b62e9*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v20, a2 + 144); /*0x1002b62fd*/
  v31 = *(_DWORD *)(a2 + 248); /*0x1002b630a*/
  v15 = *(_OWORD *)(a2 + 216); /*0x1002b6316*/
  v16 = *(_OWORD *)(a2 + 232); /*0x1002b6326*/
  if ( *(_QWORD *)(a2 + 168) != 0x8000000000000000LL ) /*0x1002b6335*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v27, a2 + 168); /*0x1002b6343*/
    v2 = v27; /*0x1002b6348*/
    v18 = v28; /*0x1002b6350*/
    v19 = v29; /*0x1002b635b*/
  }
  result = *(unsigned __int8 *)(a2 + 253); /*0x1002b6362*/
  *(_QWORD *)(a1 + 16) = v25[2]; /*0x1002b636f*/
  v7 = v25[0]; /*0x1002b6373*/
  *(_QWORD *)(a1 + 8) = v25[1]; /*0x1002b637b*/
  *(_QWORD *)a1 = v7; /*0x1002b637f*/
  *(_QWORD *)(a1 + 40) = v24[2]; /*0x1002b6389*/
  v8 = v24[0]; /*0x1002b638d*/
  *(_QWORD *)(a1 + 32) = v24[1]; /*0x1002b639b*/
  *(_QWORD *)(a1 + 24) = v8; /*0x1002b639f*/
  v9 = v23[1]; /*0x1002b63aa*/
  *(_QWORD *)(a1 + 48) = v23[0]; /*0x1002b63b1*/
  *(_QWORD *)(a1 + 56) = v9; /*0x1002b63b5*/
  *(_QWORD *)(a1 + 64) = v23[2]; /*0x1002b63c0*/
  *(_QWORD *)(a1 + 88) = v22[2]; /*0x1002b63cb*/
  v10 = v22[0]; /*0x1002b63cf*/
  *(_QWORD *)(a1 + 80) = v22[1]; /*0x1002b63dd*/
  *(_QWORD *)(a1 + 72) = v10; /*0x1002b63e1*/
  *(_BYTE *)(a1 + 252) = v3; /*0x1002b63e5*/
  *(_QWORD *)(a1 + 192) = v32; /*0x1002b63f0*/
  *(_QWORD *)(a1 + 200) = v30; /*0x1002b63fb*/
  *(_QWORD *)(a1 + 208) = v26; /*0x1002b6406*/
  v11 = v21[1]; /*0x1002b6414*/
  *(_QWORD *)(a1 + 96) = v21[0]; /*0x1002b641b*/
  *(_QWORD *)(a1 + 104) = v11; /*0x1002b641f*/
  *(_QWORD *)(a1 + 112) = v21[2]; /*0x1002b642a*/
  *(_BYTE *)(a1 + 254) = v5; /*0x1002b642e*/
  *(_BYTE *)(a1 + 255) = v33; /*0x1002b6439*/
  *(_QWORD *)(a1 + 136) = v17[2]; /*0x1002b6446*/
  v12 = v17[0]; /*0x1002b644d*/
  *(_QWORD *)(a1 + 128) = v17[1]; /*0x1002b645b*/
  *(_QWORD *)(a1 + 120) = v12; /*0x1002b6462*/
  v13 = v20[1]; /*0x1002b646d*/
  *(_QWORD *)(a1 + 144) = v20[0]; /*0x1002b6474*/
  *(_QWORD *)(a1 + 152) = v13; /*0x1002b647b*/
  *(_QWORD *)(a1 + 160) = v20[2]; /*0x1002b6489*/
  *(_DWORD *)(a1 + 248) = v31; /*0x1002b6493*/
  *(_OWORD *)(a1 + 216) = v15; /*0x1002b64a0*/
  *(_OWORD *)(a1 + 232) = v16; /*0x1002b64ae*/
  *(_QWORD *)(a1 + 168) = v2; /*0x1002b64b5*/
  v14 = v18; /*0x1002b64bc*/
  *(_QWORD *)(a1 + 184) = v19; /*0x1002b64ca*/
  *(_QWORD *)(a1 + 176) = v14; /*0x1002b64d1*/
  *(_BYTE *)(a1 + 253) = result; /*0x1002b64d8*/
  return result; /*0x1002b64de*/
}