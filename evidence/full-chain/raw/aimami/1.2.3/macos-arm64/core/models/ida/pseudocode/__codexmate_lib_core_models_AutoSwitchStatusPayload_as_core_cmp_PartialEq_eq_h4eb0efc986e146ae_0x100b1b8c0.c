// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::AutoSwitchStatusPayload as core::cmp::PartialEq>::eq::h4eb0efc986e146ae @ 0x100b1b8c0 | full-body via py_exec_file(ida_hexrays.decompile direct write)
bool __fastcall _$LT$codexmate_lib..core..models..AutoSwitchStatusPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4eb0efc986e146ae(
        __int64 a1,
        __int64 a2)
{
  size_t v2; // rdx
  bool result; // al

  result = *(_BYTE *)(a1 + 32) == *(_BYTE *)(a2 + 32)
        && *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24)
        && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28)
        && *(_BYTE *)(a1 + 33) == *(_BYTE *)(a2 + 33)
        && (v2 = *(_QWORD *)(a1 + 16), v2 == *(_QWORD *)(a2 + 16))
        && memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v2) == 0;
  return result;
}
