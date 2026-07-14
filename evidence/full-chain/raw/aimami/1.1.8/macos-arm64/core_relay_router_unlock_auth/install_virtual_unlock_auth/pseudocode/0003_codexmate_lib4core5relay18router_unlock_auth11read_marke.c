// mac 1.1.8 behavioral install_virtual_unlock_auth 0x1006899e0 d=1
void __fastcall codexmate_lib::core::relay::router_unlock_auth::read_marker::h1f857b739e1ec08a(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-90h] BYREF
  __int64 v8; // [rsp+8h] [rbp-88h]
  __int64 v9; // [rsp+10h] [rbp-80h]
  __int64 v10; // [rsp+18h] [rbp-78h]
  __int64 v11; // [rsp+20h] [rbp-70h]
  __int64 v12; // [rsp+28h] [rbp-68h]
  __int64 v13; // [rsp+30h] [rbp-60h] BYREF
  __int64 v14; // [rsp+38h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-50h]
  __int64 v16; // [rsp+48h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-40h]
  __int64 v18; // [rsp+58h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp-30h]
  __int64 v20; // [rsp+68h] [rbp-28h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v13, a2, a3, "router-unlock-auth-marker.jsonaimami_router_unlock_auth", 30); /*0x100689a03*/
  v3 = v14; /*0x100689a08*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v7, v14, v15); /*0x100689a1a*/
  if ( v13 ) /*0x100689a26*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v13, 1); /*0x100689a30*/
  v4 = v7; /*0x100689a3f*/
  v5 = v8; /*0x100689a46*/
  if ( __OFSUB__(-v7, 1) ) /*0x100689a50*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9( /*0x100689a5b*/
      0x8000000000000000LL,
      v8);
    *a1 = 0x8000000000000000LL; /*0x100689a60*/
    return; /*0x100689a63*/
  }
  v7 = v8; /*0x100689a69*/
  v8 = v9; /*0x100689a70*/
  v9 = 0; /*0x100689a77*/
  v10 = 0; /*0x100689a7f*/
  v11 = v5; /*0x100689a87*/
  v12 = v8; /*0x100689a8b*/
  ((void (__fastcall *)(__int64 *, __int64 *))serde_json::de::from_trait::h45547de1a6d0185b)(&v13, &v7); /*0x100689a9a*/
  if ( v13 == 0x8000000000000000LL ) /*0x100689aa3*/
  {
    *a1 = 0x8000000000000000LL; /*0x100689aa5*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(&v14); /*0x100689aac*/
    if ( !v4 ) /*0x100689ab4*/
      return; /*0x100689ab4*/
  }
  else
  {
    a1[7] = v20; /*0x100689ad7*/
    a1[6] = v19; /*0x100689adf*/
    a1[5] = v18; /*0x100689ae7*/
    a1[4] = v17; /*0x100689aef*/
    a1[3] = v16; /*0x100689af7*/
    a1[2] = v15; /*0x100689aff*/
    v6 = v13; /*0x100689b03*/
    a1[1] = v14; /*0x100689b0b*/
    *a1 = v6; /*0x100689b0f*/
    if ( !v4 ) /*0x100689b15*/
      return; /*0x100689b15*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x100689ac1*/
}