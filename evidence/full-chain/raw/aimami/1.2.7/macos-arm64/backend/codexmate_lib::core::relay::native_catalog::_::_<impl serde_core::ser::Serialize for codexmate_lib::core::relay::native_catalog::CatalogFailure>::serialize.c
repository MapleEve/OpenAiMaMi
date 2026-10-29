// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_catalog::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..native_catalog..CatalogFailure$GT$::serialize::h1aba58834f0bac7c; addr: 0x1005d2d40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::native_catalog::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..native_catalog..CatalogFailure$GT$::serialize::h1aba58834f0bac7c(
        _WORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _UNKNOWN **v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int16 v18; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-20h]

  switch ( *a1 ) /*0x1005d2d5e*/
  {
    case 0: /*0x1005d2d5e*/
      v2 = *a2; /*0x1005d2d60*/
      v3 = *(_QWORD *)(*a2 + 16LL); /*0x1005d2d63*/
      if ( *(_QWORD *)*a2 == v3 ) /*0x1005d2d6a*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1005d3016*/
          *a2,
          *(_QWORD *)(*a2 + 16LL),
          1,
          1,
          1);
        v3 = *(_QWORD *)(v2 + 16); /*0x1005d301e*/
      }
      *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1005d2d74*/
      *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1005d2d7b*/
      v18 = 256; /*0x1005d2d7f*/
      v19 = a2; /*0x1005d2d85*/
      v4 = &off_101AAC550; /*0x1005d2d90*/
      goto LABEL_22; /*0x1005d2d97*/
    case 1: /*0x1005d2d5e*/
      v11 = *a2; /*0x1005d2e50*/
      v12 = *(_QWORD *)(*a2 + 16LL); /*0x1005d2e53*/
      if ( *(_QWORD *)*a2 == v12 ) /*0x1005d2e5a*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1005d3043*/
          *a2,
          *(_QWORD *)(*a2 + 16LL),
          1,
          1,
          1);
        v12 = *(_QWORD *)(v11 + 16); /*0x1005d304b*/
      }
      *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 123; /*0x1005d2e67*/
      *(_QWORD *)(v11 + 16) = v12 + 1; /*0x1005d2e6e*/
      v18 = 256; /*0x1005d2e72*/
      v19 = a2; /*0x1005d2e78*/
      result = serde_core::ser::SerializeMap::serialize_entry::h687b1d950ada8908( /*0x1005d2e93*/
                 &v18,
                 &unk_1016E9914,
                 4,
                 &off_101AAC578);
      if ( result ) /*0x1005d2e9b*/
        return result; /*0x1005d2e9b*/
      if ( (_BYTE)v18 == 1 ) /*0x1005d2ea5*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v18, &unk_1016E9914); /*0x1005d2eab*/
      result = serde_core::ser::SerializeMap::serialize_entry::hb515143f526221ae( /*0x1005d2f4f*/
                 &v18,
                 &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_488,
                 6,
                 a1 + 1);
      if ( !result ) /*0x1005d2f57*/
      {
        if ( (v18 & 1) == 0 && HIBYTE(v18) ) /*0x1005d2f63*/
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcf6b9c01431e505d( /*0x1005d2f78*/
            *v19,
            &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_17,
            1);
        return 0; /*0x1005d2f2b*/
      }
      return result;
    case 2: /*0x1005d2d5e*/
      v7 = *a2; /*0x1005d2dd8*/
      v8 = *(_QWORD *)(*a2 + 16LL); /*0x1005d2ddb*/
      if ( *(_QWORD *)*a2 == v8 ) /*0x1005d2de2*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1005d2fc2*/
          *a2,
          *(_QWORD *)(*a2 + 16LL),
          1,
          1,
          1);
        v8 = *(_QWORD *)(v7 + 16); /*0x1005d2fca*/
      }
      *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x1005d2dec*/
      *(_QWORD *)(v7 + 16) = v8 + 1; /*0x1005d2df3*/
      v18 = 256; /*0x1005d2df7*/
      v19 = a2; /*0x1005d2dfd*/
      v4 = &off_101AAC5A0; /*0x1005d2e08*/
      goto LABEL_22; /*0x1005d2e0f*/
    case 3: /*0x1005d2d5e*/
      v9 = *a2; /*0x1005d2e14*/
      v10 = *(_QWORD *)(*a2 + 16LL); /*0x1005d2e17*/
      if ( *(_QWORD *)*a2 == v10 ) /*0x1005d2e1e*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1005d2fec*/
          *a2,
          *(_QWORD *)(*a2 + 16LL),
          1,
          1,
          1);
        v10 = *(_QWORD *)(v9 + 16); /*0x1005d2ff4*/
      }
      *(_BYTE *)(*(_QWORD *)(v9 + 8) + v10) = 123; /*0x1005d2e28*/
      *(_QWORD *)(v9 + 16) = v10 + 1; /*0x1005d2e2f*/
      v18 = 256; /*0x1005d2e33*/
      v19 = a2; /*0x1005d2e39*/
      v4 = &off_101AAC5C8; /*0x1005d2e44*/
      goto LABEL_22; /*0x1005d2e4b*/
    case 4: /*0x1005d2d5e*/
      v5 = *a2; /*0x1005d2d9c*/
      v6 = *(_QWORD *)(*a2 + 16LL); /*0x1005d2d9f*/
      if ( *(_QWORD *)*a2 == v6 ) /*0x1005d2da6*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1005d2f98*/
          *a2,
          *(_QWORD *)(*a2 + 16LL),
          1,
          1,
          1);
        v6 = *(_QWORD *)(v5 + 16); /*0x1005d2fa0*/
      }
      *(_BYTE *)(*(_QWORD *)(v5 + 8) + v6) = 123; /*0x1005d2db0*/
      *(_QWORD *)(v5 + 16) = v6 + 1; /*0x1005d2db7*/
      v18 = 256; /*0x1005d2dbb*/
      v19 = a2; /*0x1005d2dc1*/
      v4 = &off_101AAC5F0; /*0x1005d2dcc*/
      goto LABEL_22; /*0x1005d2dd3*/
    case 5: /*0x1005d2d5e*/
      v14 = *a2; /*0x1005d2eb2*/
      v15 = *(_QWORD *)(*a2 + 16LL); /*0x1005d2eb5*/
      if ( *(_QWORD *)*a2 == v15 ) /*0x1005d2ebc*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1005d306d*/
          *a2,
          *(_QWORD *)(*a2 + 16LL),
          1,
          1,
          1);
        v15 = *(_QWORD *)(v14 + 16); /*0x1005d3075*/
      }
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + v15) = 123; /*0x1005d2ec6*/
      *(_QWORD *)(v14 + 16) = v15 + 1; /*0x1005d2ecd*/
      v18 = 256; /*0x1005d2ed1*/
      v19 = a2; /*0x1005d2ed7*/
      v4 = &off_101AAC618; /*0x1005d2ee2*/
LABEL_22:
      result = serde_core::ser::SerializeMap::serialize_entry::h687b1d950ada8908(&v18, &unk_1016E9914, 4, v4); /*0x1005d2ee9*/
      if ( result ) /*0x1005d2efa*/
        return result; /*0x1005d2efa*/
      if ( (v18 & 1) == 0 && HIBYTE(v18) ) /*0x1005d2f06*/
      {
        v16 = *v19; /*0x1005d2f0c*/
        v17 = *(_QWORD *)(*v19 + 16LL); /*0x1005d2f0f*/
        if ( *(_QWORD *)*v19 == v17 ) /*0x1005d2f16*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(*v19, v17, 1, 1, 1); /*0x1005d3091*/
          v17 = *(_QWORD *)(v16 + 16); /*0x1005d3096*/
        }
        *(_BYTE *)(*(_QWORD *)(v16 + 8) + v17) = 125; /*0x1005d2f20*/
        *(_QWORD *)(v16 + 16) = v17 + 1; /*0x1005d2f27*/
      }
      return 0; /*0x1005d2f27*/
    case 6: /*0x1005d2d5e*/
      JUMPOUT(0x100E14FAFLL); /*0x100e14faf*/
    case 7: /*0x1005d2d5e*/
      JUMPOUT(0x1005D30A0LL); /*0x1005d30a0*/
  }
}
