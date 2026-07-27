// __ZN13codexmate_lib4core10repository9prev_item @ 0x100a84ea0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::prev_item | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::prev_item::h5592e2df22272c5e(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // r12

  if ( !a1 ) /*0x100a84eae*/
    return 0; /*0x100a84eae*/
  v3 = *(_QWORD *)(a1 + 16); /*0x100a84eb0*/
  if ( !v3 ) /*0x100a84eb7*/
    return 0; /*0x100a84f01*/
  v5 = *(_QWORD *)(a1 + 8); /*0x100a84ebf*/
  v6 = 424 * v3; /*0x100a84ec3*/
  while ( *(_QWORD *)(v5 + 208) != a3 || memcmp(*(const void **)(v5 + 200), a2, a3) ) /*0x100a84efd*/
  {
    v5 += 424; /*0x100a84ed0*/
    v6 -= 424; /*0x100a84ed7*/
    if ( !v6 ) /*0x100a84ede*/
      return 0; /*0x100a84ede*/
  }
  return v5; /*0x100a84f06*/
}