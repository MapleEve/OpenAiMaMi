// __ZN13codexmate_lib4core5relay13codex_catalog19read_bundled_models @ 0x10021ac70 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::read_bundled_models::h152c00ceae399d4b(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  __int128 v10; // kr00_16
  __int128 v11; // [rsp+0h] [rbp-180h] BYREF
  __int64 v12; // [rsp+10h] [rbp-170h]
  __int64 v13; // [rsp+18h] [rbp-168h]
  __m256i v14; // [rsp+C8h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-98h]
  __int64 v16; // [rsp+F0h] [rbp-90h]
  __int64 v17; // [rsp+F8h] [rbp-88h]
  __m256i v18; // [rsp+100h] [rbp-80h] BYREF
  __m256i v19; // [rsp+120h] [rbp-60h]
  __int64 v20; // [rsp+140h] [rbp-40h]
  __int64 v21; // [rsp+148h] [rbp-38h]
  __int64 v22; // [rsp+150h] [rbp-30h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v11); /*0x10021ac91*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v11, "debug--bundled", 5); /*0x10021aca5*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v11, &unk_1015E09C8, 6); /*0x10021acbd*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v11, "--bundled", 9); /*0x10021acd5*/
  std::process::Command::output::h737eedd4de2ee22e(&v14, &v11); /*0x10021ace8*/
  v1 = v14.i64[0]; /*0x10021acf7*/
  if ( __OFSUB__(-v14.i64[0], 1) ) /*0x10021ad01*/
  {
    if ( (v14.i8[8] & 3) == 1 ) /*0x10021ad15*/
    {
      v2 = v14.i64[1] - 1; /*0x10021ad17*/
      v3 = *(_QWORD *)(v14.i64[1] - 1); /*0x10021ad1b*/
      v4 = *(_QWORD *)(v14.i64[1] + 7); /*0x10021ad1f*/
      if ( *(_QWORD *)v4 ) /*0x10021ad23*/
        (*(void (__fastcall **)(__int64))v4)(v3); /*0x10021ad2f*/
      v5 = *(_QWORD *)(v4 + 8); /*0x10021ad31*/
      if ( v5 ) /*0x10021ad38*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x10021ad41*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x10021ad53*/
    }
    *a1 = 0x8000000000000000LL; /*0x10021ad58*/
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::h2ddfc08274e88933(&v11); /*0x10021ad67*/
  }
  v22 = v17; /*0x10021ad77*/
  v21 = v16; /*0x10021ad7f*/
  v20 = v15; /*0x10021ad87*/
  v19 = v14; /*0x10021ad9a*/
  result = core::ptr::drop_in_place$LT$std..process..Command$GT$::h2ddfc08274e88933(&v11); /*0x10021adad*/
  if ( !(_DWORD)v22 ) /*0x10021adb6*/
  {
    result = v19.i64[2]; /*0x10021adb8*/
    if ( v19.i64[2] <= 0x800000uLL ) /*0x10021adc2*/
    {
      v7 = v19.i64[1]; /*0x10021adc4*/
      v11 = *(__int128 *)((char *)v19.i128 + 8); /*0x10021adc8*/
      v12 = 0; /*0x10021add6*/
      v13 = 0; /*0x10021ade1*/
      serde_json::de::from_trait::h5591ef24cdf9d157(&v14, &v11); /*0x10021adfa*/
      if ( v14.i8[0] != 6 ) /*0x10021ae08*/
      {
        v18 = v14; /*0x10021ae5f*/
        v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10021ae97*/
               &unk_1015E09C8,
               6,
               &v18);
        if ( v9 && *(_BYTE *)v9 == 4 ) /*0x10021aea4*/
        {
          _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h052fd23693ef7657( /*0x10021aeb5*/
            &v11,
            *(_QWORD *)(v9 + 16),
            *(_QWORD *)(v9 + 24));
          if ( v12 ) /*0x10021aec2*/
          {
            a1[2] = v12; /*0x10021aecb*/
            *(_OWORD *)a1 = v11; /*0x10021aee1*/
          }
          else
          {
            v10 = v11; /*0x10021af0f*/
            *a1 = 0x8000000000000000LL; /*0x10021af16*/
            if ( (_QWORD)v10 ) /*0x10021af1c*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v10 + 1), 32 * v10, 8); /*0x10021af27*/
          }
        }
        else
        {
          *a1 = 0x8000000000000000LL; /*0x10021aee6*/
        }
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v18); /*0x10021aeed*/
        if ( !v1 ) /*0x10021aef5*/
          goto LABEL_16; /*0x10021aef5*/
        v8 = v7; /*0x10021af00*/
        goto LABEL_15; /*0x10021af03*/
      }
      result = core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h3f127bb4bf6ccfe3(&v14); /*0x10021ae11*/
    }
  }
  *a1 = 0x8000000000000000LL; /*0x10021ae16*/
  if ( !v1 ) /*0x10021ae1c*/
    goto LABEL_16; /*0x10021ae1c*/
  v8 = v19.i64[1]; /*0x10021ae1e*/
LABEL_15:
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v1, 1); /*0x10021ae27*/
LABEL_16:
  if ( v19.i64[3] ) /*0x10021ae36*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19.i64[3], 1); /*0x10021ae41*/
  return result; /*0x10021ae46*/
}