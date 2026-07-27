// __ZN13codexmate_lib1_94_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..RouterExitGuardPayload$GT$9serialize @ 0x1006f4310
__int64 __fastcall codexmate_lib::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..RouterExitGuardPayload$GT$::serialize::hacf55c6d89d0dbea(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int16 v13; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-20h]

  v6 = a1; /*0x1006f431d*/
  v7 = *a2; /*0x1006f4320*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x1006f4323*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x1006f432a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1006f43b1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v6 = a1; /*0x1006f43b9*/
    v8 = *(_QWORD *)(v7 + 16); /*0x1006f43bc*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x1006f4330*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x1006f4337*/
  v13 = 256; /*0x1006f433b*/
  v14 = a2; /*0x1006f4341*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x1006f4355*/
             &v13,
             &anon_b756970ae374bf3e9e8d782d8f9d3f8c_34,
             20,
             v6);
  if ( !result && (v13 & 1) == 0 && HIBYTE(v13) ) /*0x1006f4369*/
  {
    v11 = *v14; /*0x1006f436f*/
    v12 = *(_QWORD *)(*v14 + 16LL); /*0x1006f4372*/
    if ( *(_QWORD *)*v14 == v12 ) /*0x1006f4379*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(*v14, v12, 1, 1, 1, v10); /*0x1006f43db*/
      result = 0; /*0x1006f43e0*/
      v12 = *(_QWORD *)(v11 + 16); /*0x1006f43e3*/
    }
    *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 125; /*0x1006f437f*/
    *(_QWORD *)(v11 + 16) = v12 + 1; /*0x1006f4386*/
  }
  return result; /*0x1006f438a*/
}