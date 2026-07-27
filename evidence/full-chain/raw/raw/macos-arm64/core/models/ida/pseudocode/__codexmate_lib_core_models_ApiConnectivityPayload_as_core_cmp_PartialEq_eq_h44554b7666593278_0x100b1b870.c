// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::ApiConnectivityPayload as core::cmp::PartialEq>::eq::h44554b7666593278 @ 0x100b1b870 | full-body via IDA Python(IDA decompiler.decompile direct write)
bool __fastcall _$LT$codexmate_lib..core..models..ApiConnectivityPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h44554b7666593278(
        __int64 a1,
        __int64 a2)
{
  bool v2; // al
  bool v3; // cl
  size_t v5; // rdx

  if ( *(_BYTE *)(a1 + 24) != *(_BYTE *)(a2 + 24) )
    return 0;
  v2 = __OFSUB__(0, *(_QWORD *)a1);
  v3 = __OFSUB__(0, *(_QWORD *)a2);
  if ( v3 || v2 )
    return v3 && v2;
  v5 = *(_QWORD *)(a1 + 16);
  return v5 == *(_QWORD *)(a2 + 16) && memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v5) == 0;
}
