// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x10106d760 depth=2
bool __fastcall _$LT$bytes..bytes..Bytes$u20$as$u20$core..cmp..PartialEq$GT$::eq::hc013bcb6963d9103(
        __int64 a1,
        __int64 a2)
{
  size_t v2; // rdx

  v2 = *(_QWORD *)(a1 + 16); /*0x10106d760*/
  return v2 == *(_QWORD *)(a2 + 16) && memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v2) == 0; /*0x10106d781*/
}