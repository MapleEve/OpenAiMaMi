// __ZN13codexmate_lib4core13oauth_refresh13auth_is_newer @ 0x1007ba000
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::auth_is_newer | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
bool __fastcall codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  bool v14; // sf
  bool v15; // of
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+10h] [rbp-60h]
  __int64 v27; // [rsp+18h] [rbp-58h]
  __int64 v28; // [rsp+20h] [rbp-50h]
  __int64 v29; // [rsp+28h] [rbp-48h] BYREF
  __int64 v30; // [rsp+30h] [rbp-40h]
  __int64 v31; // [rsp+38h] [rbp-38h]
  __int64 v32; // [rsp+40h] [rbp-30h]

  v4 = 0; /*0x1007ba017*/
  v15 = __OFSUB__(0, a1[18]); /*0x1007ba01a*/
  v5 = a1[20]; /*0x1007ba021*/
  v6 = 0; /*0x1007ba028*/
  if ( !v15 ) /*0x1007ba02d*/
    v6 = a1[19]; /*0x1007ba02f*/
  v7 = codexmate_lib::core::auth::parse_iso_timestamp::hc89d5b79338e23d0(v6, v5); /*0x1007ba03b*/
  v9 = v8; /*0x1007ba03e*/
  if ( !__OFSUB__(0, a2[18]) ) /*0x1007ba04f*/
    v4 = a2[19]; /*0x1007ba051*/
  v10 = codexmate_lib::core::auth::parse_iso_timestamp::hc89d5b79338e23d0(v4, a2[20]); /*0x1007ba05b*/
  if ( (v7 & 1) != 0 ) /*0x1007ba064*/
  {
    if ( (v10 & 1) == 0 || v9 != v11 ) /*0x1007ba06d*/
    {
      v12 = 0; /*0x1007ba06f*/
      if ( (v10 & 1) != 0 ) /*0x1007ba073*/
        v12 = v11; /*0x1007ba073*/
      goto LABEL_13; /*0x1007ba073*/
    }
LABEL_14:
    if ( a1[9] == 0x8000000000000000LL /*0x1007ba0b1*/
      || (codexmate_lib::core::oauth_refresh::decode_jwt_payload::hd78a97a7113bd755(&v29, a1[10], a1[11]),
          (_BYTE)v29 == 6) )
    {
      v16 = 0; /*0x1007ba0b3*/
      if ( a2[9] == 0x8000000000000000LL ) /*0x1007ba0ba*/
        goto LABEL_26; /*0x1007ba0ba*/
      goto LABEL_25; /*0x1007ba0ba*/
    }
    v28 = v32; /*0x1007ba0c5*/
    v27 = v31; /*0x1007ba0cd*/
    v26 = v30; /*0x1007ba0d9*/
    v25 = v29; /*0x1007ba0dd*/
    v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007ba0f1*/
            &anon_3ce6d1417794db0febde534c64082f90_92,
            3,
            &v25);
    if ( v17 && *(_BYTE *)v17 == 2 ) /*0x1007ba0fe*/
    {
      v18 = *(_QWORD *)(v17 + 8); /*0x1007ba100*/
      if ( !v18 ) /*0x1007ba107*/
      {
        v23 = *(_QWORD *)(v17 + 16); /*0x1007ba1c8*/
        v16 = 0; /*0x1007ba1cc*/
        if ( v23 > 0 ) /*0x1007ba1d2*/
          v16 = v23; /*0x1007ba1d2*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v29); /*0x1007ba1da*/
        if ( a2[9] == 0x8000000000000000LL ) /*0x1007ba1e3*/
          goto LABEL_26; /*0x1007ba1e3*/
LABEL_25:
        codexmate_lib::core::oauth_refresh::decode_jwt_payload::hd78a97a7113bd755(&v29, a2[10], a2[11]); /*0x1007ba139*/
        if ( (_BYTE)v29 != 6 ) /*0x1007ba14e*/
        {
          v28 = v32; /*0x1007ba158*/
          v27 = v31; /*0x1007ba160*/
          v26 = v30; /*0x1007ba16c*/
          v25 = v29; /*0x1007ba170*/
          v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007ba184*/
                  &anon_3ce6d1417794db0febde534c64082f90_92,
                  3,
                  &v25);
          if ( v20 && *(_BYTE *)v20 == 2 && (v21 = *(_QWORD *)(v20 + 8), v21 != 2) ) /*0x1007ba19b*/
          {
            if ( (_DWORD)v21 == 1 ) /*0x1007ba1a0*/
            {
              v19 = *(_QWORD *)(v20 + 16); /*0x1007ba1a2*/
            }
            else
            {
              v24 = *(_QWORD *)(v20 + 16); /*0x1007ba1ee*/
              v19 = 0; /*0x1007ba1f2*/
              if ( v24 > 0 ) /*0x1007ba1f7*/
                v19 = v24; /*0x1007ba1f7*/
            }
          }
          else
          {
            v19 = 0; /*0x1007ba1a8*/
          }
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v29); /*0x1007ba1ae*/
          goto LABEL_34; /*0x1007ba1ae*/
        }
LABEL_26:
        v19 = 0; /*0x1007ba150*/
LABEL_34:
        v15 = __OFSUB__(v16, v19); /*0x1007ba1b3*/
        v13 = v16 == v19; /*0x1007ba1b3*/
        v14 = v16 - v19 < 0; /*0x1007ba1b3*/
        return !(v14 ^ v15 | v13); /*0x1007ba1b3*/
      }
      if ( (_DWORD)v18 == 1 ) /*0x1007ba110*/
      {
        v16 = *(_QWORD *)(v17 + 16); /*0x1007ba112*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v29); /*0x1007ba11a*/
        if ( a2[9] == 0x8000000000000000LL ) /*0x1007ba123*/
          goto LABEL_26; /*0x1007ba123*/
        goto LABEL_25; /*0x1007ba123*/
      }
    }
    v16 = 0; /*0x1007ba127*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v29); /*0x1007ba12e*/
    if ( a2[9] == 0x8000000000000000LL ) /*0x1007ba137*/
      goto LABEL_26; /*0x1007ba137*/
    goto LABEL_25; /*0x1007ba137*/
  }
  if ( !v10 ) /*0x1007ba07c*/
    goto LABEL_14; /*0x1007ba07c*/
  v9 = 0; /*0x1007ba07e*/
  v12 = v11; /*0x1007ba081*/
LABEL_13:
  v15 = __OFSUB__(v9, v12); /*0x1007ba084*/
  v13 = v9 == v12; /*0x1007ba084*/
  v14 = v9 - v12 < 0; /*0x1007ba084*/
  return !(v14 ^ v15 | v13); /*0x1007ba1b9*/
}