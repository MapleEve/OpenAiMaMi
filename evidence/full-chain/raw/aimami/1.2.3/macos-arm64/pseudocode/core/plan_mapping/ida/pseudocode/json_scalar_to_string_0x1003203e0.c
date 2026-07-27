// __ZN13codexmate_lib4core12plan_mapping21json_scalar_to_string @ 0x1003203e0 | 基线 same-set
void *__fastcall codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(
        size_t *a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  void *result; // rax
  unsigned __int8 v4; // r12
  size_t v5; // r14
  void *v6; // rax
  size_t v7; // r15
  char *v8; // rsi
  _QWORD v9[3]; // [rsp+8h] [rbp-58h] BYREF
  void *v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  size_t v12; // [rsp+30h] [rbp-30h]
  char v13[33]; // [rsp+3Fh] [rbp-21h] BYREF

  v2 = *a2; /*0x1003203f2*/
  if ( v2 == 1 ) /*0x1003203f8*/
  {
    v4 = a2[1]; /*0x100320488*/
    v5 = v4 ^ 5LL; /*0x100320490*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100320494*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1003204a1*/
    if ( !v6 ) /*0x1003204a9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x100320522*/
    v7 = (size_t)v6; /*0x1003204ab*/
    v8 = "falseprolitechatgptprolitepro"; /*0x1003204b5*/
    if ( v4 ) /*0x1003204bf*/
      v8 = "trueuuidemitshowhide"; /*0x1003204bf*/
    result = memcpy(v6, v8, v5); /*0x1003204c9*/
    *a1 = v5; /*0x1003204ce*/
    a1[1] = v7; /*0x1003204d1*/
    a1[2] = v5; /*0x1003204d5*/
  }
  else
  {
    if ( v2 == 2 ) /*0x100320401*/
    {
      v10 = nullptr; /*0x100320428*/
      v11 = 1; /*0x100320430*/
      v12 = 0; /*0x100320438*/
      v9[2] = 1610612768; /*0x100320440*/
      v9[0] = &v10; /*0x10032044c*/
      v9[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100320457*/
      if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x100320465*/
                              a2 + 8,
                              v9) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100320513*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          v13,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      a1[2] = v12; /*0x100320476*/
      result = v10; /*0x10032047a*/
      a1[1] = v11; /*0x100320482*/
    }
    else
    {
      if ( v2 == 3 ) /*0x100320406*/
        return (void *)_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10032041f*/
                         a1,
                         a2 + 8);
      result = (void *)0x8000000000000000LL; /*0x1003204db*/
    }
    *a1 = (size_t)result; /*0x1003204e5*/
  }
  return result; /*0x100320413*/
}