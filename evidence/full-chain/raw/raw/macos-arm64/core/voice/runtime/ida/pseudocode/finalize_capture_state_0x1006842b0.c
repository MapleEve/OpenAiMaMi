// __ZN13codexmate_lib4core5voice7runtime22finalize_capture_state @ 0x1006842b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::finalize_capture_state::h0bbd40974d9b6c51(
        __int64 a1,
        char a2,
        int a3)
{
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-48h] BYREF
  __int64 v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+28h] [rbp-38h]
  int v20; // [rsp+34h] [rbp-2Ch] BYREF

  v5 = *(_BYTE *)(a1 + 860); /*0x1006842ca*/
  if ( (unsigned __int8)(v5 - 1) > 2u ) /*0x1006842d7*/
  {
    v10 = 0; /*0x10068434c*/
    *(_DWORD *)(a1 + 672) = 1000000000; /*0x10068434f*/
    if ( (a2 & 1) == 0 ) /*0x10068435d*/
      return v10; /*0x10068435d*/
    goto LABEL_15; /*0x10068435d*/
  }
  if ( !*(_QWORD *)(a1 + 296) && *(_QWORD *)(a1 + 272) ) /*0x1006842e3*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v17, a1 + 256); /*0x1006842ff*/
    v6 = *(_QWORD *)(a1 + 280); /*0x100684304*/
    if ( v6 ) /*0x10068430e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 288), v6, 1); /*0x10068431c*/
    *(_QWORD *)(a1 + 296) = v19; /*0x100684325*/
    v7 = v17; /*0x10068432a*/
    *(_QWORD *)(a1 + 288) = v18; /*0x100684332*/
    *(_QWORD *)(a1 + 280) = v7; /*0x100684337*/
  }
  v8 = *(unsigned int *)(a1 + 672); /*0x10068433b*/
  if ( (_DWORD)v8 == 1000000000 ) /*0x100684346*/
  {
    v9 = 0; /*0x100684348*/
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 664); /*0x10068436f*/
    LODWORD(v18) = v8; /*0x100684373*/
    v11 = std::time::Instant::elapsed::h457f209775ed485c(&v17); /*0x10068437a*/
    v8 = 1000 * v11 + v12 / 0xF4240uLL; /*0x100684393*/
    v9 = 1; /*0x100684396*/
  }
  *(_QWORD *)a1 = v9; /*0x10068439b*/
  *(_QWORD *)(a1 + 8) = v8; /*0x10068439e*/
  *(_DWORD *)(a1 + 672) = 1000000000; /*0x1006843a2*/
  v10 = 1; /*0x1006843ac*/
  *(_QWORD *)(a1 + 824) = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1); /*0x1006843c4*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(a1 + 288), *(_QWORD *)(a1 + 296)); /*0x1006843d9*/
  v5 = 4; /*0x1006843de*/
  if ( !v13 ) /*0x1006843e3*/
  {
    *(_QWORD *)(a1 + 832) = 0; /*0x1006843e5*/
    v5 = 0; /*0x1006843f0*/
    v10 = 0; /*0x1006843f2*/
  }
  *(_BYTE *)(a1 + 860) = v5; /*0x1006843f5*/
  *(_DWORD *)(a1 + 672) = 1000000000; /*0x1006843fb*/
  if ( (a2 & 1) != 0 ) /*0x100684409*/
  {
LABEL_15:
    v20 = a3; /*0x10068440b*/
    if ( a3 && v5 != 4 && __OFSUB__(-*(_QWORD *)(a1 + 616), 1) ) /*0x10068441f*/
    {
      v16[0] = &v20; /*0x10068442f*/
      v16[1] = _$LT$std..process..ExitStatus$u20$as$u20$core..fmt..Display$GT$::fmt::h71cb3ff623e8f0f8; /*0x10068443a*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v17, &unk_1017C3007, v16); /*0x10068444d*/
      *(_QWORD *)(a1 + 632) = v19; /*0x100684456*/
      v14 = v17; /*0x10068445a*/
      *(_QWORD *)(a1 + 624) = v18; /*0x100684462*/
      *(_QWORD *)(a1 + 616) = v14; /*0x100684466*/
      *(_QWORD *)(a1 + 832) = 0; /*0x100684469*/
      *(_BYTE *)(a1 + 860) = 5; /*0x100684474*/
      return 0; /*0x10068447b*/
    }
  }
  return v10; /*0x100684484*/
}