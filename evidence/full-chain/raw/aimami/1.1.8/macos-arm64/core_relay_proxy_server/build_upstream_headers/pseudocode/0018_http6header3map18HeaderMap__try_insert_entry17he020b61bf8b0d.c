// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1005f46b0 depth=2
bool __fastcall http::header::map::HeaderMap$LT$T$GT$::try_insert_entry::he020b61bf8b0dc5e(
        _QWORD *a1,
        __int16 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v9[13]; // [rsp+0h] [rbp-80h] BYREF

  v5 = a1[5]; /*0x1005f46c0*/
  if ( v5 <= 0x7FFF ) /*0x1005f46cb*/
  {
    v9[11] = a3[3]; /*0x1005f4709*/
    v9[10] = a3[2]; /*0x1005f4711*/
    v6 = *a3; /*0x1005f4715*/
    v9[9] = a3[1]; /*0x1005f471c*/
    v9[8] = v6; /*0x1005f4720*/
    v7 = a4[1]; /*0x1005f4727*/
    v9[3] = *a4; /*0x1005f472b*/
    v9[4] = v7; /*0x1005f472f*/
    v9[5] = a4[2]; /*0x1005f4737*/
    v9[6] = a4[3]; /*0x1005f473f*/
    v9[7] = a4[4]; /*0x1005f4747*/
    LOWORD(v9[12]) = a2; /*0x1005f474b*/
    v9[0] = 0; /*0x1005f474f*/
    if ( v5 == a1[3] ) /*0x1005f475b*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h3e05c107d734a01e(a1 + 3); /*0x1005f4761*/
    qmemcpy((void *)(a1[4] + 104 * v5), v9, 0x68u); /*0x1005f4777*/
    a1[5] = v5 + 1; /*0x1005f477e*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a4 + 32LL))(a4 + 3, a4[1], a4[2]); /*0x1005f46df*/
    if ( *a3 ) /*0x1005f46e2*/
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a3 + 32LL))(a3 + 3, a3[1], a3[2]); /*0x1005f46fa*/
  }
  return v5 >= 0x8000; /*0x1005f478c*/
}