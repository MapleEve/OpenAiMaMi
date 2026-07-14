// mac 1.1.8 delete_sessions node va=0x101101d10 depth=1
// alloc7raw_vec20RawVecInner::reserve21do_reserve_and_handle
__int64 __fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(
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
  __int64 v12; // [rsp+18h] [rbp-18h]

  if ( !a5 || (v5 = __CFADD__(a2, a3), v6 = a2 + a3, v5) ) /*0x101101d2d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, a2); /*0x101101d25*/
  v7 = 2 * *a1; /*0x101101d35*/
  if ( v6 > v7 ) /*0x101101d3c*/
    v7 = v6; /*0x101101d3c*/
  v8 = 8; /*0x101101d55*/
  if ( a5 != 1 ) /*0x101101d5a*/
    v8 = 3LL * (a5 < 0x401) + 1; /*0x101101d5a*/
  if ( v7 > v8 ) /*0x101101d61*/
    v8 = v7; /*0x101101d61*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h1ffa785b217faa63(&v10, *a1, a1[1], v8, a4); /*0x101101d73*/
  if ( v10 == 1 ) /*0x101101d7c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v12); /*0x101101d9a*/
  result = v11; /*0x101101d7e*/
  a1[1] = v11; /*0x101101d82*/
  *a1 = v8; /*0x101101d86*/
  return result; /*0x101101d89*/
}