// __ZN13codexmate_lib8platform19voice_trigger_macos29dispatch_binding_event_locked @ 0x1005e4960 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  __int64 v5; // rcx
  _QWORD *v6; // r14
  __int64 v7; // r14
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-88h] BYREF
  __int64 v24; // [rsp+10h] [rbp-80h]
  __int64 v25; // [rsp+18h] [rbp-78h]
  __int64 v26; // [rsp+20h] [rbp-70h] BYREF
  __int64 v27; // [rsp+28h] [rbp-68h]
  __int64 v28; // [rsp+30h] [rbp-60h]
  __int64 v29; // [rsp+38h] [rbp-58h] BYREF
  __int64 v30; // [rsp+40h] [rbp-50h]
  __int64 v31; // [rsp+48h] [rbp-48h]
  __int64 v32; // [rsp+50h] [rbp-40h]
  unsigned __int64 v33; // [rsp+58h] [rbp-38h]
  __int64 v34; // [rsp+60h] [rbp-30h]
  __int64 v35; // [rsp+68h] [rbp-28h]

  v26 = 0; /*0x1005e4972*/
  v27 = 8; /*0x1005e497a*/
  v28 = 0; /*0x1005e4982*/
  v29 = 0; /*0x1005e498a*/
  v30 = 8; /*0x1005e4992*/
  v31 = 0; /*0x1005e499a*/
  if ( a4 >= a3 ) /*0x1005e49a5*/
    goto LABEL_29; /*0x1005e49a5*/
  v5 = a4 << 6; /*0x1005e49ab*/
  v6 = (_QWORD *)(a2 + v5); /*0x1005e49af*/
  if ( *(_BYTE *)(a2 + v5 + 56) ) /*0x1005e49b3*/
  {
    if ( a5 ) /*0x1005e49bd*/
    {
      if ( !*((_BYTE *)v6 + 57) ) /*0x1005e49c3*/
      {
        *((_BYTE *)v6 + 57) = 1; /*0x1005e49ce*/
        if ( __OFSUB__(0, *v6) ) /*0x1005e49d5*/
        {
          v33 = 0x8000000000000000LL; /*0x1005e49e8*/
          v32 = 2; /*0x1005e49ec*/
          v7 = 0; /*0x1005e49f4*/
LABEL_27:
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v26); /*0x1005e4be0*/
          goto LABEL_28; /*0x1005e4be4*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23, a2 + v5); /*0x1005e4ab2*/
        v34 = v24; /*0x1005e4ac2*/
        v35 = v25; /*0x1005e4aca*/
        v7 = v28; /*0x1005e4ace*/
        v33 = v23; /*0x1005e4ad2*/
        v32 = 2; /*0x1005e4ad6*/
        if ( v28 == v26 ) /*0x1005e4ae2*/
          goto LABEL_27; /*0x1005e4ae2*/
        goto LABEL_28; /*0x1005e4ae2*/
      }
    }
    else
    {
      *((_BYTE *)v6 + 57) = 0; /*0x1005e4a52*/
    }
    goto LABEL_29; /*0x1005e49c8*/
  }
  v8 = *((_BYTE *)v6 + 57); /*0x1005e49fc*/
  if ( a5 ) /*0x1005e4a04*/
  {
    if ( v8 ) /*0x1005e4a08*/
      goto LABEL_29; /*0x1005e4a08*/
    *((_BYTE *)v6 + 57) = 1; /*0x1005e4a0e*/
    v9 = -1; /*0x1005e4a1a*/
    if ( v6[5] != -1 ) /*0x1005e4a21*/
      v9 = v6[5] + 1LL; /*0x1005e4a21*/
    v6[5] = v9; /*0x1005e4a25*/
    if ( __OFSUB__(0, *v6) ) /*0x1005e4a2b*/
    {
      v33 = 0x8000000000000000LL; /*0x1005e4a3e*/
      v32 = 0; /*0x1005e4a42*/
      v10 = 0; /*0x1005e4a4a*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23, a2 + v5); /*0x1005e4b00*/
      v34 = v24; /*0x1005e4b10*/
      v35 = v25; /*0x1005e4b18*/
      v10 = v28; /*0x1005e4b1c*/
      v33 = v23; /*0x1005e4b20*/
      v32 = 0; /*0x1005e4b24*/
      if ( v28 != v26 ) /*0x1005e4b30*/
      {
LABEL_23:
        v12 = v27; /*0x1005e4b3b*/
        v13 = 32 * v10; /*0x1005e4b42*/
        *(_QWORD *)(v27 + v13 + 24) = v35; /*0x1005e4b4a*/
        *(_QWORD *)(v12 + v13 + 16) = v34; /*0x1005e4b53*/
        v14 = v32; /*0x1005e4b58*/
        *(_QWORD *)(v12 + v13 + 8) = v33; /*0x1005e4b60*/
        *(_QWORD *)(v12 + v13) = v14; /*0x1005e4b65*/
        v28 = v10 + 1; /*0x1005e4b6c*/
        v15 = v6[3]; /*0x1005e4b70*/
        v16 = v31; /*0x1005e4b74*/
        if ( v31 == v29 ) /*0x1005e4b7c*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he93ed8c161a227be(&v29); /*0x1005e4b82*/
        v17 = v30; /*0x1005e4b87*/
        v18 = 16 * v16; /*0x1005e4b8e*/
        *(_QWORD *)(v30 + v18) = v15; /*0x1005e4b92*/
        *(_QWORD *)(v17 + v18 + 8) = v9; /*0x1005e4b96*/
        v31 = v16 + 1; /*0x1005e4b9e*/
        goto LABEL_29; /*0x1005e4ba2*/
      }
    }
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v26); /*0x1005e4b36*/
    goto LABEL_23; /*0x1005e4b36*/
  }
  if ( v8 ) /*0x1005e4a5e*/
  {
    *((_BYTE *)v6 + 57) = 0; /*0x1005e4a64*/
    v11 = -1; /*0x1005e4a70*/
    if ( v6[5] != -1 ) /*0x1005e4a77*/
      v11 = v6[5] + 1LL; /*0x1005e4a77*/
    v6[5] = v11; /*0x1005e4a7b*/
    if ( __OFSUB__(0, *v6) ) /*0x1005e4a81*/
    {
      v33 = 0x8000000000000000LL; /*0x1005e4a94*/
      v32 = 1; /*0x1005e4a98*/
      v7 = 0; /*0x1005e4aa0*/
      goto LABEL_27; /*0x1005e4aa3*/
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23, v6); /*0x1005e4bae*/
    v34 = v24; /*0x1005e4bbe*/
    v35 = v25; /*0x1005e4bc6*/
    v7 = v28; /*0x1005e4bca*/
    v33 = v23; /*0x1005e4bce*/
    v32 = 1; /*0x1005e4bd2*/
    if ( v28 == v26 ) /*0x1005e4bde*/
      goto LABEL_27; /*0x1005e4bde*/
LABEL_28:
    v19 = v27; /*0x1005e4be9*/
    v20 = 32 * v7; /*0x1005e4bf0*/
    *(_QWORD *)(v27 + v20 + 24) = v35; /*0x1005e4bf8*/
    *(_QWORD *)(v19 + v20 + 16) = v34; /*0x1005e4c01*/
    v21 = v32; /*0x1005e4c06*/
    *(_QWORD *)(v19 + v20 + 8) = v33; /*0x1005e4c0e*/
    *(_QWORD *)(v19 + v20) = v21; /*0x1005e4c13*/
    v28 = v7 + 1; /*0x1005e4c1a*/
  }
LABEL_29:
  a1[5] = v31; /*0x1005e4c1e*/
  a1[4] = v30; /*0x1005e4c2a*/
  a1[3] = v29; /*0x1005e4c32*/
  a1[2] = v28; /*0x1005e4c3a*/
  result = v26; /*0x1005e4c3e*/
  a1[1] = v27; /*0x1005e4c46*/
  *a1 = result; /*0x1005e4c4a*/
  return result; /*0x1005e4c4d*/
}