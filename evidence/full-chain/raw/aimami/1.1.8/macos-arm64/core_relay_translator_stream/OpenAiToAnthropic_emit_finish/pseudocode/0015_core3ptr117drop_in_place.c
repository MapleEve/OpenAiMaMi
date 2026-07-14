// mac 1.1.8 behavioral OpenAiToAnthropic_emit_finish 0x1001c5480 d=2
__int64 __fastcall core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f(
        __int64 a1)
{
  __int64 result; // rax
  __int64 i; // r13
  __int64 v4; // r15
  _QWORD *v5; // r13
  unsigned int v6; // eax
  _QWORD *v7; // rdi
  __int64 j; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD v13[9]; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-48h] BYREF
  __int64 v15; // [rsp+58h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-30h]

  result = alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hed56a2ca4e213cdb(v14, a1); /*0x1001c549b*/
  for ( i = v14[0]; v14[0]; i = v14[0] ) /*0x1001c54a7*/
  {
    v4 = v15; /*0x1001c54e2*/
    v16 = a1; /*0x1001c54e6*/
    if ( *(_QWORD *)(i + 24 * v15 + 360) ) /*0x1001c54ee*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c550c*/
    v5 = (_QWORD *)(32 * v4 + i); /*0x1001c5515*/
    v6 = *(unsigned __int8 *)v5; /*0x1001c5518*/
    if ( v6 < 3 ) /*0x1001c5520*/
      goto LABEL_5; /*0x1001c5520*/
    if ( v6 == 3 ) /*0x1001c5522*/
    {
      if ( v5[1] ) /*0x1001c54b3*/
        goto LABEL_4; /*0x1001c54ba*/
    }
    else
    {
      if ( v6 != 4 ) /*0x1001c5527*/
      {
        v9 = v5[1]; /*0x1001c5557*/
        if ( v9 ) /*0x1001c555e*/
        {
          v10 = v5[2]; /*0x1001c5560*/
          v11 = v5[3]; /*0x1001c5564*/
          v13[1] = 0; /*0x1001c5568*/
          v13[2] = v9; /*0x1001c5573*/
          v13[3] = v10; /*0x1001c5577*/
          v13[5] = 0; /*0x1001c557b*/
          v13[6] = v9; /*0x1001c5583*/
          v13[7] = v10; /*0x1001c5587*/
          v12 = 1; /*0x1001c558b*/
        }
        else
        {
          v12 = 0; /*0x1001c55b1*/
          v11 = 0; /*0x1001c55b3*/
        }
        v13[0] = v12; /*0x1001c55b5*/
        v13[4] = v12; /*0x1001c55bc*/
        v13[8] = v11; /*0x1001c55c0*/
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f(v13); /*0x1001c55cb*/
        goto LABEL_5; /*0x1001c55d0*/
      }
      v7 = (_QWORD *)v5[2]; /*0x1001c5529*/
      for ( j = v5[3] + 1LL; j != 1; --j ) /*0x1001c5531*/
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v7); /*0x1001c554d*/
        v7 += 4; /*0x1001c5552*/
      }
      if ( v5[1] ) /*0x1001c5592*/
LABEL_4:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c54c5*/
    }
LABEL_5:
    result = alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hed56a2ca4e213cdb(v14, a1); /*0x1001c54ca*/
  }
  return result; /*0x1001c55d5*/
}