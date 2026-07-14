// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100574a60 depth=3
// _::deserialize_string
size_t *__fastcall _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6(
        size_t *a1,
        _QWORD *a2,
        double a3,
        double a4,
        double a5)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  _QWORD *v16; // rax
  void *v17; // r15
  size_t v18; // r14
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-40h] BYREF
  void *__src; // [rsp+8h] [rbp-38h]
  size_t __n; // [rsp+10h] [rbp-30h]

  v7 = a2[4]; /*0x100574a77*/
  v8 = a2[5]; /*0x100574a7b*/
  if ( v8 >= v7 ) /*0x100574a82*/
  {
LABEL_6:
    v24 = 5; /*0x100574ac4*/
    v16 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)a2, &v24); /*0x100574ad3*/
  }
  else
  {
    v9 = a2 + 3; /*0x100574a84*/
    v10 = a2[3]; /*0x100574a88*/
    v11 = v8 + 1; /*0x100574a8c*/
    v12 = -(__int64)v7; /*0x100574a8f*/
    v13 = &loc_100002600; /*0x100574a92*/
    while ( 1 ) /*0x100574a9c*/
    {
      v14 = *(unsigned __int8 *)(v10 + v11 - 1); /*0x100574a9c*/
      if ( v14 > 0x22 ) /*0x100574aa6*/
        goto LABEL_21; /*0x100574aa6*/
      if ( !_bittest64((const __int64 *)&v13, v14) ) /*0x100574aac*/
        break; /*0x100574aac*/
      a2[5] = v11; /*0x100574ab2*/
      v15 = v12 + v11++ + 1; /*0x100574ab6*/
      if ( v15 == 1 ) /*0x100574ac2*/
        goto LABEL_6; /*0x100574ac2*/
    }
    if ( v14 == 34 ) /*0x100574ae2*/
    {
      a2[5] = v11; /*0x100574ae8*/
      a2[2] = 0; /*0x100574aec*/
      _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x100574afb*/
        &v24,
        v9,
        a2,
        a3,
        a4,
        a5);
      v17 = __src; /*0x100574b04*/
      if ( (_DWORD)v24 == 2 ) /*0x100574b08*/
      {
        a1[1] = (size_t)__src; /*0x100574b0a*/
        goto LABEL_11; /*0x100574b0a*/
      }
      v18 = __n; /*0x100574b1d*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100574b24*/
      {
        v19 = 0; /*0x100574b26*/
        goto LABEL_14; /*0x100574b26*/
      }
      if ( __n ) /*0x100574b34*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100574b36*/
        v19 = 1; /*0x100574b3b*/
        v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1u); /*0x100574b49*/
        if ( !v20 ) /*0x100574b51*/
LABEL_14:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v18); /*0x100574b29*/
        v21 = v20; /*0x100574b53*/
      }
      else
      {
        v21 = 1; /*0x100574b58*/
      }
      memcpy((void *)v21, v17, v18); /*0x100574b67*/
      *a1 = v18; /*0x100574b6c*/
      a1[1] = v21; /*0x100574b6f*/
      a1[2] = v18; /*0x100574b73*/
      return a1; /*0x100574b73*/
    }
LABEL_21:
    v23 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f( /*0x100574b89*/
            a2,
            &v24,
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_29);
    v16 = (_QWORD *)serde_json::error::Error::fix_position::hcddea6c8e528a7ec(v23, a2); /*0x100574ba2*/
  }
  a1[1] = (size_t)v16; /*0x100574ad8*/
LABEL_11:
  *a1 = 0x8000000000000000LL; /*0x100574b0e*/
  return a1; /*0x100574b7a*/
}