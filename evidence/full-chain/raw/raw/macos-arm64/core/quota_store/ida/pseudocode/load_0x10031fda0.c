// __ZN13codexmate_lib4core11quota_store4load @ 0x10031fda0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::quota_store::load::h655f425e55903b24(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  int v10; // edx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 *v20; // rbx
  __int64 v21; // r11
  int v22; // r9d
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rsi
  _QWORD *v28; // r10
  int v29; // ebx
  int v30; // r9d
  __int64 v31; // rax
  __int64 v33; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+8h] [rbp-C8h]
  __int64 v35; // [rsp+10h] [rbp-C0h]
  __int64 v36; // [rsp+18h] [rbp-B8h]
  __int64 v37; // [rsp+20h] [rbp-B0h]
  __int64 v38; // [rsp+28h] [rbp-A8h]
  __int64 v39; // [rsp+30h] [rbp-A0h]
  __int64 v40; // [rsp+38h] [rbp-98h]
  _QWORD *v41; // [rsp+40h] [rbp-90h]
  __int64 v42; // [rsp+48h] [rbp-88h]
  __int64 v43; // [rsp+50h] [rbp-80h]
  __int64 v44; // [rsp+58h] [rbp-78h]
  __int64 v45; // [rsp+60h] [rbp-70h]
  __int64 v46; // [rsp+68h] [rbp-68h]
  __int64 v47; // [rsp+70h] [rbp-60h] BYREF
  __int64 v48; // [rsp+78h] [rbp-58h]
  __int64 v49; // [rsp+80h] [rbp-50h]
  __int64 v50; // [rsp+88h] [rbp-48h]
  __int64 v51; // [rsp+90h] [rbp-40h]
  __int64 v52; // [rsp+98h] [rbp-38h]
  int v53; // [rsp+A4h] [rbp-2Ch]

  v3 = a1; /*0x10031fdb4*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v47, a2, a3); /*0x10031fdbb*/
  v4 = v47; /*0x10031fdc0*/
  v5 = v48; /*0x10031fdc4*/
  if ( !__OFSUB__(-v47, 1) ) /*0x10031fdce*/
  {
    v47 = v48; /*0x10031fde4*/
    v48 = v49; /*0x10031fde8*/
    v49 = 0; /*0x10031fdec*/
    v50 = 0; /*0x10031fdf4*/
    v51 = v5; /*0x10031fdfc*/
    v52 = v48; /*0x10031fe00*/
    serde_json::de::from_trait::hbf7085ea3cdc0364(&v33, &v47); /*0x10031fe0f*/
    v6 = v34; /*0x10031fe25*/
    if ( v33 == 0x8000000000000000LL ) /*0x10031fe2f*/
    {
      *a1 = 3; /*0x10031fe31*/
      a1[1] = v6; /*0x10031fe38*/
      if ( !v4 ) /*0x10031fe3f*/
        return v3; /*0x10031fe3f*/
      v7 = v5; /*0x10031fe4a*/
      v8 = v4; /*0x10031fe4d*/
LABEL_25:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v8, 1); /*0x100320096*/
      return v3; /*0x100320096*/
    }
    v46 = v37; /*0x10031fe5c*/
    v45 = v36; /*0x10031fe6e*/
    v44 = v35; /*0x10031fe72*/
    v42 = v33; /*0x10031fe76*/
    v43 = v34; /*0x10031fe7d*/
    v9 = 3; /*0x10031fe84*/
    if ( (int)v37 >= 4 ) /*0x10031fe89*/
      v9 = v37; /*0x10031fe89*/
    LODWORD(v46) = v9; /*0x10031fe8c*/
    v33 = std::time::SystemTime::now::h1fe79e41f9d5677f(&v33, v36); /*0x10031fe94*/
    LODWORD(v34) = v10; /*0x10031fe9b*/
    v11 = &v47; /*0x10031fea1*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v47, &v33, 0, 0); /*0x10031feb0*/
    v41 = v3; /*0x10031feb5*/
    v40 = v5; /*0x10031febc*/
    v39 = v4; /*0x10031fec7*/
    if ( (_BYTE)v47 ) /*0x10031fece*/
    {
      v12 = 0; /*0x10031fee2*/
      v13 = v44; /*0x10031fee4*/
      if ( !v44 ) /*0x10031feeb*/
        goto LABEL_24; /*0x10031feeb*/
    }
    else
    {
      v12 = v48; /*0x10031fed0*/
      v13 = v44; /*0x10031fed4*/
      if ( !v44 ) /*0x10031fedb*/
        goto LABEL_24; /*0x10031fedb*/
    }
    v14 = 160 * v13; /*0x10031fef5*/
    v38 = v14; /*0x10031fef9*/
    v15 = v6 + 80; /*0x10031ff00*/
    v16 = 0; /*0x10031ff04*/
    do /*0x10031ff42*/
    {
      v18 = *(_QWORD *)(v15 + v16 - 64); /*0x10031ff48*/
      v19 = *(_QWORD *)(v15 + v16 - 56); /*0x10031ff4d*/
      v20 = (__int64 *)(v15 + v16 - 40); /*0x10031ff52*/
      v21 = 2; /*0x10031ff5e*/
      if ( v18 == 2 || ((unsigned __int8)v18 & (v19 <= v12)) != 0 || (*(_BYTE *)(v15 + v16 - 48) & 1) == 0 ) /*0x10031ff75*/
      {
        v23 = 2; /*0x10031ffb0*/
      }
      else
      {
        v22 = *(_DWORD *)(v15 + v16 - 44); /*0x10031ff77*/
        v23 = 2; /*0x10031ff80*/
        if ( (unsigned int)(v22 - 1) <= 0x167 ) /*0x10031ff8d*/
        {
          v24 = *v20; /*0x10031ff8f*/
          v48 = v20[1]; /*0x10031ff96*/
          v47 = v24; /*0x10031ff9a*/
          v53 = v22; /*0x10031ff9e*/
          v5 = v19; /*0x10031ffa2*/
          v23 = v18; /*0x10031ffa5*/
        }
      }
      v25 = (__int64 *)(v15 + v16); /*0x10031ffb6*/
      *(_QWORD *)(v15 + v16 - 64) = v23; /*0x10031ffba*/
      *(_QWORD *)(v15 + v16 - 56) = v5; /*0x10031ffbf*/
      *(_DWORD *)(v15 + v16 - 48) = 1; /*0x10031ffc4*/
      *(_DWORD *)(v15 + v16 - 44) = v53; /*0x10031ffd0*/
      v26 = v47; /*0x10031ffd5*/
      v20[1] = v48; /*0x10031ffdd*/
      *v20 = v26; /*0x10031ffe1*/
      v27 = *(_QWORD *)(v15 + v16 - 24); /*0x10031ffe4*/
      if ( v27 != 2 ) /*0x10031ffed*/
      {
        v28 = *(_QWORD **)(v15 + v16 - 16); /*0x10031fff3*/
        v29 = *(_DWORD *)(v15 + v16 - 4); /*0x10031fff8*/
        if ( (((__int64)v28 <= v12) & (unsigned __int8)v27) == 0 ) /*0x100320011*/
        {
          v30 = *(_DWORD *)(v15 + v16 - 8); /*0x100320017*/
          if ( ((unsigned __int8)v30 & (v29 < 8640)) == 0 ) /*0x10032001f*/
          {
            v14 = *v25; /*0x100320025*/
            v48 = v25[1]; /*0x10032002d*/
            v47 = v14; /*0x100320031*/
            v21 = v27; /*0x100320035*/
            v3 = v28; /*0x100320038*/
            LODWORD(v14) = v30; /*0x10032003b*/
            LODWORD(v11) = v29; /*0x10032003e*/
          }
        }
      }
      *(_QWORD *)(v15 + v16 - 24) = v21; /*0x10031ff10*/
      *(_QWORD *)(v15 + v16 - 16) = v3; /*0x10031ff15*/
      *(_DWORD *)(v15 + v16 - 8) = v14; /*0x10031ff1a*/
      *(_DWORD *)(v15 + v16 - 4) = (_DWORD)v11; /*0x10031ff1f*/
      v17 = v47; /*0x10031ff24*/
      v25[1] = v48; /*0x10031ff2c*/
      *v25 = v17; /*0x10031ff30*/
      v16 += 160; /*0x10031ff34*/
    }
    while ( v38 != v16 ); /*0x10031ff42*/
LABEL_24:
    v3 = v41; /*0x100320045*/
    v41[5] = v46; /*0x100320050*/
    v3[4] = v45; /*0x100320058*/
    v3[3] = v44; /*0x100320060*/
    v31 = v42; /*0x100320064*/
    v3[2] = v43; /*0x10032006f*/
    v3[1] = v31; /*0x100320073*/
    *v3 = 11; /*0x100320077*/
    v8 = v39; /*0x10032007e*/
    v7 = v40; /*0x100320088*/
    if ( !v39 ) /*0x10032008f*/
      return v3; /*0x10032008f*/
    goto LABEL_25; /*0x10032008f*/
  }
  *a1 = 2; /*0x10031fdd0*/
  a1[1] = v5; /*0x10031fdd7*/
  return v3; /*0x10032009e*/
}