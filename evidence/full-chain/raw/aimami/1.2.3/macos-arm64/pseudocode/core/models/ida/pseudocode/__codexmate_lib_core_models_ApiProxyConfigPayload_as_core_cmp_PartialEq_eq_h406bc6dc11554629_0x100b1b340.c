// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::ApiProxyConfigPayload as core::cmp::PartialEq>::eq::h406bc6dc11554629 @ 0x100b1b340 | full-body via IDA decompiler
bool __fastcall _$LT$codexmate_lib..core..models..ApiProxyConfigPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h406bc6dc11554629(
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
