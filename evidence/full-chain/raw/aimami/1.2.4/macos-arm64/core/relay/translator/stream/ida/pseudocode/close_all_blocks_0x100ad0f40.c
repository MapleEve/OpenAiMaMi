// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream16close_all_blocks @ 0x100ad0f40 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_all_blocks::h0dfc12af4bed1de0(
        _QWORD *a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-108h] BYREF
  _BYTE v9[120]; // [rsp+10h] [rbp-100h] BYREF
  _QWORD v10[9]; // [rsp+88h] [rbp-88h] BYREF
  _QWORD v11[2]; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-30h]

  v4 = a1[25]; /*0x100ad0f5a*/
  v5 = a1[26]; /*0x100ad0f61*/
  a1[25] = 0; /*0x100ad0f68*/
  v6 = v4; /*0x100ad0f73*/
  if ( v4 ) /*0x100ad0f79*/
    v6 = a1[27]; /*0x100ad0f7b*/
  a1[27] = 0; /*0x100ad0f82*/
  v10[0] = v4 != 0; /*0x100ad0f95*/
  v10[1] = 0; /*0x100ad0f9c*/
  v10[2] = v4; /*0x100ad0fa4*/
  v10[3] = v5; /*0x100ad0fa8*/
  v10[4] = v10[0]; /*0x100ad0fac*/
  v10[5] = 0; /*0x100ad0fb0*/
  v10[6] = v4; /*0x100ad0fb8*/
  v10[7] = v5; /*0x100ad0fbc*/
  v10[8] = v6; /*0x100ad0fc0*/
  while ( 1 ) /*0x100ad0fe7*/
  {
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h324557fdd7837b48(v11, v10); /*0x100ad0fe7*/
    if ( !v11[0] || *(_QWORD *)(v11[0] + (v12 << 7)) == 0x8000000000000002LL ) /*0x100ad100e*/
      break; /*0x100ad100e*/
    v8 = *(_QWORD *)(v11[0] + (v12 << 7)); /*0x100ad1017*/
    qmemcpy(v9, (const void *)((v12 << 7) + v11[0] + 8), sizeof(v9)); /*0x100ad102a*/
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_block::heb965d1ad629e36b( /*0x100ad1039*/
      a1,
      &v8,
      a2,
      a3);
  }
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h324557fdd7837b48(v11, v10); /*0x100ad104b*/
  for ( result = v11[0]; v11[0]; result = v11[0] ) /*0x100ad1057*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..AnthropicBlockState$GT$::h3c20d1551c4694a0(result + (v12 << 7)); /*0x100ad107b*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h324557fdd7837b48(v11, v10); /*0x100ad1086*/
  }
  return result; /*0x100ad1094*/
}