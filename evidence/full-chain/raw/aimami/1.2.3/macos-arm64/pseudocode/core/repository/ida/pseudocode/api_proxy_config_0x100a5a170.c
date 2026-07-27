// __ZN13codexmate_lib4core10repository10Repository16api_proxy_config @ 0x100a5a170 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::api_proxy_config::hda00ad3920525b25(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rsi
  _WORD __dst[8]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-A8h]
  __int64 v10; // [rsp+20h] [rbp-A0h]
  __int64 v11; // [rsp+30h] [rbp-90h]
  __int64 v12; // [rsp+38h] [rbp-88h]
  __int64 v13; // [rsp+40h] [rbp-80h]
  __int64 v14; // [rsp+48h] [rbp-78h]
  __int64 v15; // [rsp+50h] [rbp-70h]
  __int64 v16; // [rsp+60h] [rbp-60h]
  __int64 v17; // [rsp+68h] [rbp-58h]
  __int64 v18; // [rsp+78h] [rbp-48h]
  __int64 v19; // [rsp+80h] [rbp-40h]
  __int64 v20; // [rsp+88h] [rbp-38h]
  __int64 v21; // [rsp+90h] [rbp-30h]

  codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, a2); /*0x100a5a18c*/
  a1[3] = v21; /*0x100a5a195*/
  a1[2] = v20; /*0x100a5a19d*/
  v2 = v18; /*0x100a5a1a1*/
  a1[1] = v19; /*0x100a5a1a9*/
  *a1 = v2; /*0x100a5a1ad*/
  if ( v9 ) /*0x100a5a1ba*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100a5a1c8*/
  if ( !__OFSUB__(-v14, 1) && v14 ) /*0x100a5a1e3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x100a5a1ee*/
  if ( v16 != 0x8000000000000000LL && v16 ) /*0x100a5a1ff*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100a5a20a*/
  v3 = v12; /*0x100a5a20f*/
  v4 = v13; /*0x100a5a216*/
  if ( v13 ) /*0x100a5a21d*/
  {
    v5 = (_QWORD *)(v12 + 24); /*0x100a5a21f*/
    do /*0x100a5a237*/
    {
      v6 = *(v5 - 1); /*0x100a5a239*/
      if ( v6 ) /*0x100a5a241*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v6, 1); /*0x100a5a24c*/
      v5 += 5; /*0x100a5a230*/
      --v4; /*0x100a5a234*/
    }
    while ( v4 ); /*0x100a5a237*/
  }
  if ( v11 ) /*0x100a5a25d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 40 * v11, 8); /*0x100a5a26f*/
  return a1; /*0x100a5a277*/
}