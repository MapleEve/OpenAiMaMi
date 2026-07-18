// mac 1.2.2 NEW write_client_debug_log 0x1013a70b0 d=3
__int64 __fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  bool v5; // cf
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  int v10; // [rsp+8h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-20h]

  if ( !a5 || (v5 = __CFADD__(a2, a3), v6 = a2 + a3, v5) ) /*0x1013a70cd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0); /*0x1013a70c5*/
  v7 = 2 * *a1; /*0x1013a70d5*/
  if ( v6 > v7 ) /*0x1013a70dc*/
    v7 = v6; /*0x1013a70dc*/
  v8 = 8; /*0x1013a70f5*/
  if ( a5 != 1 ) /*0x1013a70fa*/
    v8 = 3LL * (a5 < 0x401) + 1; /*0x1013a70fa*/
  if ( v7 > v8 ) /*0x1013a7101*/
    v8 = v7; /*0x1013a7101*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::he615ae145ac364e6(&v10, *a1, a1[1], v8, a4); /*0x1013a7113*/
  if ( v10 == 1 ) /*0x1013a711c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11); /*0x1013a713a*/
  result = v11; /*0x1013a711e*/
  a1[1] = v11; /*0x1013a7122*/
  *a1 = v8; /*0x1013a7126*/
  return result; /*0x1013a7129*/
}