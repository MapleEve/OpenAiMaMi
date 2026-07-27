// __ZN13codexmate_lib4core5relay16codex_diagnostic18extract_toml_value @ 0x1004e7910 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // [rsp+8h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-70h]
  __int64 v11; // [rsp+18h] [rbp-68h]
  __int64 v12; // [rsp+20h] [rbp-60h]
  __int64 v13; // [rsp+28h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-50h]
  _QWORD v15[5]; // [rsp+38h] [rbp-48h] BYREF
  char v16; // [rsp+60h] [rbp-20h]
  __int16 v17; // [rsp+68h] [rbp-18h]

  v13 = 0; /*0x1004e791b*/
  v14 = a2; /*0x1004e7923*/
  v15[0] = a1; /*0x1004e792b*/
  v15[1] = a2; /*0x1004e792f*/
  v15[2] = 0; /*0x1004e7933*/
  v15[3] = a2; /*0x1004e793b*/
  v15[4] = 0x3D0000003DLL; /*0x1004e7949*/
  v16 = 1; /*0x1004e794d*/
  v17 = 1; /*0x1004e7951*/
  v12 = 1; /*0x1004e7957*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004e7966*/
    &v9,
    v15);
  if ( v9 == 1 ) /*0x1004e796f*/
  {
    v2 = v11; /*0x1004e7971*/
    v13 = v11; /*0x1004e7975*/
  }
  else
  {
    if ( HIBYTE(v17) ) /*0x1004e79aa*/
      return 0; /*0x1004e79aa*/
    HIBYTE(v17) = 1; /*0x1004e79ac*/
    v2 = v13; /*0x1004e79b0*/
    if ( !(_BYTE)v17 && v14 == v13 ) /*0x1004e79be*/
      return 0; /*0x1004e79be*/
  }
  if ( !v12 ) /*0x1004e7980*/
    return 0; /*0x1004e79d9*/
  if ( v12 == 1 ) /*0x1004e7986*/
  {
    if ( !HIBYTE(v17) && ((_BYTE)v17 || v14 != v2) ) /*0x1004e799b*/
    {
      v3 = v14 - v2; /*0x1004e799d*/
      goto LABEL_9; /*0x1004e799d*/
    }
    return 0; /*0x1004e799b*/
  }
  --v12; /*0x1004e79c5*/
  if ( HIBYTE(v17) ) /*0x1004e79cd*/
    return 0; /*0x1004e79cd*/
  v6 = v15[0]; /*0x1004e79da*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004e79e5*/
    &v9,
    v15);
  if ( v9 == 1 ) /*0x1004e79ee*/
  {
    v3 = v10 - v13; /*0x1004e79f8*/
    v4 = v13 + v6; /*0x1004e79fb*/
    goto LABEL_18; /*0x1004e79fb*/
  }
  if ( HIBYTE(v17) ) /*0x1004e7a1c*/
    return 0; /*0x1004e7a1c*/
  v2 = v13; /*0x1004e7a1e*/
  v3 = v14 - v13; /*0x1004e7a26*/
  if ( ((unsigned __int8)v17 | (v14 != v13)) != 1 ) /*0x1004e7a31*/
    return 0; /*0x1004e7a31*/
LABEL_9:
  v4 = v15[0] + v2; /*0x1004e79a0*/
LABEL_18:
  v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v3); /*0x1004e79fe*/
  return core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v7, v8, 34); /*0x1004e79d1*/
}