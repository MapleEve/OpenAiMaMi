// __ZN13codexmate_lib4core10repository21finish_refresh_report @ 0x100a79d30
// 1.2.3 NEW-delta | codexmate_lib::core::repository::finish_refresh_report | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        int *a5)
{
  int v9; // r10d
  unsigned int v10; // r14d
  int v11; // edx
  int v12; // esi
  unsigned int v13; // eax
  int v14; // edi
  int v15; // r11d
  int v16; // r13d
  int v17; // ecx
  int v18; // r9d
  int v19; // r8d
  int v20; // r15d
  unsigned int v21; // r8d
  __int64 v22; // rsi
  unsigned int v23; // r15d
  __int64 v24; // rsi
  unsigned int v25; // r15d
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 result; // rax
  _BYTE v29[16]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-C8h]
  __int64 v31; // [rsp+20h] [rbp-C0h]
  _QWORD *v32; // [rsp+28h] [rbp-B8h]
  __int64 v33; // [rsp+30h] [rbp-B0h]
  __int64 *v34; // [rsp+38h] [rbp-A8h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+40h] [rbp-A0h]
  __int64 v36; // [rsp+48h] [rbp-98h]
  __int64 v37; // [rsp+50h] [rbp-90h] BYREF
  __int64 v38; // [rsp+58h] [rbp-88h]
  __int64 v39; // [rsp+60h] [rbp-80h]
  __int64 v40; // [rsp+68h] [rbp-78h]
  unsigned int v41; // [rsp+70h] [rbp-70h]
  int v42; // [rsp+74h] [rbp-6Ch]
  int v43; // [rsp+78h] [rbp-68h]
  int v44; // [rsp+7Ch] [rbp-64h]
  int v45; // [rsp+80h] [rbp-60h]
  int v46; // [rsp+84h] [rbp-5Ch]
  __int64 v47; // [rsp+88h] [rbp-58h]
  int v48; // [rsp+94h] [rbp-4Ch]
  int v49; // [rsp+98h] [rbp-48h]
  int v50; // [rsp+9Ch] [rbp-44h]
  int v51; // [rsp+A0h] [rbp-40h]
  int v52; // [rsp+A4h] [rbp-3Ch]
  int v53; // [rsp+A8h] [rbp-38h]
  int v54; // [rsp+ACh] [rbp-34h]
  char v55; // [rsp+B3h] [rbp-2Dh] BYREF
  int v56; // [rsp+B4h] [rbp-2Ch]

  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v29); /*0x100a79d5a*/
  v37 = 0; /*0x100a79d5f*/
  v38 = 1; /*0x100a79d6a*/
  v39 = 0; /*0x100a79d75*/
  v36 = 1610612768; /*0x100a79d7d*/
  v34 = &v37; /*0x100a79d8f*/
  v35 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a79d9d*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100a79db2*/
                          v29,
                          &v34) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a7a11b*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      &v55,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v30 = a4; /*0x100a79dbf*/
  v41 = a2; /*0x100a79dc6*/
  v47 = v37; /*0x100a79dd1*/
  v40 = v38; /*0x100a79ddc*/
  v31 = v39; /*0x100a79de4*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v34); /*0x100a79df9*/
  v10 = (unsigned int)v34; /*0x100a79dfe*/
  v11 = ((int)v34 >> 13) - 1; /*0x100a79e0b*/
  v12 = 0; /*0x100a79e0e*/
  if ( (int)v34 >> 13 <= 0 ) /*0x100a79e12*/
  {
    v13 = (1 - ((int)v34 >> 13)) / 0x190u + 1; /*0x100a79e26*/
    v11 += 400 * v13; /*0x100a79e2e*/
    v12 = -146097 * v13; /*0x100a79e30*/
  }
  v14 = *a5; /*0x100a79e36*/
  v56 = a5[1]; /*0x100a79e3d*/
  v48 = a5[2]; /*0x100a79e44*/
  if ( v14 ) /*0x100a79e49*/
  {
    LOBYTE(v9) = 1; /*0x100a79e50*/
    if ( v48 | v14 ^ v56 ) /*0x100a79e53*/
      LOBYTE(v9) = (v56 == 0) | 2; /*0x100a79e60*/
  }
  else
  {
    v9 = 0; /*0x100a79e66*/
  }
  v15 = a5[3]; /*0x100a79e69*/
  v16 = a5[4]; /*0x100a79e6d*/
  v17 = a5[5]; /*0x100a79e71*/
  v32 = a3; /*0x100a79e78*/
  if ( v15 ) /*0x100a79e7f*/
  {
    LOBYTE(a3) = 1; /*0x100a79e87*/
    if ( v17 | v15 ^ v16 ) /*0x100a79e89*/
      LOBYTE(a3) = (v16 == 0) | 2; /*0x100a79e93*/
  }
  else
  {
    LODWORD(a3) = 0; /*0x100a79e98*/
  }
  v33 = HIDWORD(v34); /*0x100a79ea0*/
  v18 = a5[7]; /*0x100a79eab*/
  v19 = a5[8]; /*0x100a79eaf*/
  v20 = a5[6]; /*0x100a79eb3*/
  v42 = v17; /*0x100a79eb8*/
  v43 = v12; /*0x100a79ebb*/
  if ( v20 ) /*0x100a79ebe*/
  {
    LOBYTE(v17) = 1; /*0x100a79ec6*/
    if ( v19 | v20 ^ v18 ) /*0x100a79ec8*/
      LOBYTE(v17) = (v18 == 0) | 2; /*0x100a79ed3*/
  }
  else
  {
    v17 = 0; /*0x100a79ed8*/
  }
  v46 = v17; /*0x100a79eda*/
  v45 = v19; /*0x100a79edd*/
  v44 = v18; /*0x100a79ee1*/
  v21 = (unsigned int)v35; /*0x100a79ee5*/
  v22 = *(_QWORD *)(a1 + 936); /*0x100a79eec*/
  if ( !__OFSUB__(-v22, 1) ) /*0x100a79efa*/
  {
    v49 = v14; /*0x100a79f0a*/
    v50 = v11; /*0x100a79f0d*/
    v51 = v9; /*0x100a79f10*/
    v52 = v16; /*0x100a79f14*/
    v53 = (int)a3; /*0x100a79f18*/
    v54 = v20; /*0x100a79f1b*/
    if ( v22 ) /*0x100a79f1f*/
    {
      LODWORD(a3) = v15; /*0x100a79f2e*/
      v23 = (unsigned int)v35; /*0x100a79f31*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 944), v22, 1); /*0x100a79f37*/
      v21 = v23; /*0x100a79f3f*/
      v15 = (int)a3; /*0x100a79f42*/
      LOBYTE(a3) = v53; /*0x100a79f45*/
      v11 = v50; /*0x100a79f48*/
      LOBYTE(v9) = v51; /*0x100a79f4b*/
      v16 = v52; /*0x100a79f4f*/
      v20 = v54; /*0x100a79f53*/
      v14 = v49; /*0x100a79f57*/
    }
    v24 = *(_QWORD *)(a1 + 960); /*0x100a79f5a*/
    if ( v24 != 0x8000000000000000LL && v24 ) /*0x100a79f6a*/
    {
      LODWORD(a3) = v15; /*0x100a79f79*/
      v25 = v21; /*0x100a79f7c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 968), v24, 1); /*0x100a79f7f*/
      v21 = v25; /*0x100a79f84*/
      v15 = (int)a3; /*0x100a79f87*/
      LOBYTE(a3) = v53; /*0x100a79f8a*/
      v11 = v50; /*0x100a79f8d*/
      LOBYTE(v9) = v51; /*0x100a79f90*/
      v16 = v52; /*0x100a79f94*/
      v20 = v54; /*0x100a79f98*/
      v14 = v49; /*0x100a79f9c*/
    }
  }
  v26 = 1000 /*0x100a79fee*/
      * (v33
       + 86400LL * (int)(((v11 / 100) >> 2) + v43 + ((v10 >> 4) & 0x1FF) - v11 / 100 + ((1461 * v11) >> 2) - 719163));
  *(_QWORD *)(a1 + 936) = v47; /*0x100a7a00a*/
  *(_QWORD *)(a1 + 944) = v40; /*0x100a7a016*/
  *(_QWORD *)(a1 + 952) = v31; /*0x100a7a025*/
  v27 = v32; /*0x100a7a02d*/
  *(_QWORD *)(a1 + 960) = *v32; /*0x100a7a037*/
  *(_QWORD *)(a1 + 968) = v27[1]; /*0x100a7a043*/
  *(_QWORD *)(a1 + 976) = v27[2]; /*0x100a7a04f*/
  *(_DWORD *)(a1 + 984) = v14; /*0x100a7a057*/
  *(_DWORD *)(a1 + 988) = v56; /*0x100a7a062*/
  *(_DWORD *)(a1 + 992) = v48; /*0x100a7a06d*/
  *(_BYTE *)(a1 + 996) = v9; /*0x100a7a075*/
  *(_DWORD *)(a1 + 1000) = v15; /*0x100a7a07d*/
  *(_DWORD *)(a1 + 1004) = v16; /*0x100a7a085*/
  *(_DWORD *)(a1 + 1008) = v42; /*0x100a7a090*/
  *(_BYTE *)(a1 + 1012) = (_BYTE)a3; /*0x100a7a098*/
  *(_DWORD *)(a1 + 1016) = v20; /*0x100a7a0a0*/
  *(_DWORD *)(a1 + 1020) = v44; /*0x100a7a0ab*/
  *(_DWORD *)(a1 + 1024) = v45; /*0x100a7a0b6*/
  *(_BYTE *)(a1 + 1028) = v46; /*0x100a7a0c1*/
  *(_QWORD *)(a1 + 1032) = v30; /*0x100a7a0d0*/
  *(_QWORD *)(a1 + 1040) = v26 + v21 / 0xF4240uLL; /*0x100a7a0d8*/
  result = v41; /*0x100a7a0e0*/
  *(_BYTE *)(a1 + 1048) = v41; /*0x100a7a0e3*/
  return result; /*0x100a7a0eb*/
}