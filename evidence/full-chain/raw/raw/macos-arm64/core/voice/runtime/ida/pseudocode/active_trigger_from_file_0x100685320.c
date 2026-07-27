// __ZN13codexmate_lib4core5voice7runtime24active_trigger_from_file @ 0x100685320 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::active_trigger_from_file::h358f7a2569fbbfb7(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+8h] [rbp-48h]
  __int64 v11; // [rsp+10h] [rbp-40h]
  __int64 v12; // [rsp+18h] [rbp-38h] BYREF
  __int64 v13; // [rsp+20h] [rbp-30h]
  __int64 v14; // [rsp+28h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 391) == 1 ) /*0x100685340*/
  {
    v2 = *(_QWORD *)(a2 + 368); /*0x100685342*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v12, a2 + 120); /*0x100685351*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v9, a2 + 144); /*0x100685361*/
    result = *(_QWORD *)(a2 + 376); /*0x100685366*/
    *(_QWORD *)(a1 + 48) = v2; /*0x10068536d*/
    v4 = v13; /*0x100685375*/
    *(_QWORD *)a1 = v12; /*0x100685379*/
    *(_QWORD *)(a1 + 8) = v4; /*0x10068537c*/
    *(_QWORD *)(a1 + 16) = v14; /*0x100685384*/
    v5 = v10; /*0x10068538c*/
    *(_QWORD *)(a1 + 24) = v9; /*0x100685390*/
    *(_QWORD *)(a1 + 32) = v5; /*0x100685394*/
    *(_QWORD *)(a1 + 40) = v11; /*0x10068539c*/
    *(_BYTE *)(a1 + 64) = 1; /*0x1006853a0*/
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 352); /*0x1006853a6*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v12, a2 + 72); /*0x1006853b5*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v9, a2 + 96); /*0x1006853c2*/
    result = *(_QWORD *)(a2 + 360); /*0x1006853c7*/
    *(_QWORD *)(a1 + 48) = v6; /*0x1006853ce*/
    v7 = v13; /*0x1006853d6*/
    *(_QWORD *)a1 = v12; /*0x1006853da*/
    *(_QWORD *)(a1 + 8) = v7; /*0x1006853dd*/
    *(_QWORD *)(a1 + 16) = v14; /*0x1006853e5*/
    v8 = v10; /*0x1006853ed*/
    *(_QWORD *)(a1 + 24) = v9; /*0x1006853f1*/
    *(_QWORD *)(a1 + 32) = v8; /*0x1006853f5*/
    *(_QWORD *)(a1 + 40) = v11; /*0x1006853fd*/
    *(_BYTE *)(a1 + 64) = 0; /*0x100685401*/
  }
  *(_QWORD *)(a1 + 56) = result; /*0x100685405*/
  return result; /*0x100685409*/
}