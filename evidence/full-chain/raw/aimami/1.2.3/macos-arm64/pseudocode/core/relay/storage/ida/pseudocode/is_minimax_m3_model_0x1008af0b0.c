// __ZN13codexmate_lib4core5relay7storage19is_minimax_m3_model @ 0x1008af0b0
// 1.2.3 NEW-delta | codexmate_lib::core::relay::storage::is_minimax_m3_model | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
bool __fastcall codexmate_lib::core::relay::storage::is_minimax_m3_model::hf48f4c7d1559f18b(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rax
  __int64 v5; // rdx
  _QWORD v7[7]; // [rsp+8h] [rbp-48h] BYREF
  char v8; // [rsp+40h] [rbp-10h]
  __int16 v9; // [rsp+48h] [rbp-8h]

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x1008af0b8*/
  v7[0] = 0; /*0x1008af0bd*/
  v7[1] = v3; /*0x1008af0c5*/
  v7[2] = v2; /*0x1008af0c9*/
  v7[3] = v3; /*0x1008af0cd*/
  v7[4] = 0; /*0x1008af0d1*/
  v7[5] = v3; /*0x1008af0d9*/
  v7[6] = 0x2F0000002FLL; /*0x1008af0e7*/
  v8 = 1; /*0x1008af0eb*/
  v9 = 1; /*0x1008af0ef*/
  v4 = (_BYTE *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(v7); /*0x1008af0f9*/
  return v4 != nullptr /*0x1008af20c*/
      && v5 == 10
      && (*v4 | (unsigned __int8)(32 * ((unsigned __int8)(*v4 - 65) < 0x1Au))) == 109
      && (v4[1] | (unsigned __int8)(32 * ((unsigned __int8)(v4[1] - 65) < 0x1Au))) == 105
      && (v4[2] | (unsigned __int8)(32 * ((unsigned __int8)(v4[2] - 65) < 0x1Au))) == 110
      && (v4[3] | (unsigned __int8)(32 * ((unsigned __int8)(v4[3] - 65) < 0x1Au))) == 105
      && (v4[4] | (unsigned __int8)(32 * ((unsigned __int8)(v4[4] - 65) < 0x1Au))) == 109
      && (v4[5] | (unsigned __int8)(32 * ((unsigned __int8)(v4[5] - 65) < 0x1Au))) == 97
      && (v4[6] | (unsigned __int8)(32 * ((unsigned __int8)(v4[6] - 65) < 0x1Au))) == 120
      && (v4[7] | (unsigned __int8)(32 * ((unsigned __int8)(v4[7] - 65) < 0x1Au))) == 45
      && (v4[8] | (unsigned __int8)(32 * ((unsigned __int8)(v4[8] - 65) < 0x1Au))) == 109
      && (v4[9] | (unsigned __int8)(32 * ((unsigned __int8)(v4[9] - 65) < 0x1Au))) == 51;
}