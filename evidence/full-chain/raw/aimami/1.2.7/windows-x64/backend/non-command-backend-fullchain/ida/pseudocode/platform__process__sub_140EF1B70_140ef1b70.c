// win 1.2.7 | module src/platform/process.rs | ea 0x140ef1b70 | name sub_140EF1B70
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
bool __fastcall sub_140EF1B70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  bool result; // al
  int v5; // [rsp+20h] [rbp-18h] BYREF
  _BYTE *v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+30h] [rbp-8h]

  v2 = sub_141682C30(a1, a2);
  result = v2
        && (sub_1416B3AE0(&v5, v2, v3), v5 != 1)
        && v7 == 11
        && (*v6 | (unsigned __int8)(32 * ((unsigned __int8)(*v6 - 65) < 0x1Au))) == 99
        && (v6[1] | (unsigned __int8)(32 * ((unsigned __int8)(v6[1] - 65) < 0x1Au))) == 104
        && (v6[2] | (unsigned __int8)(32 * ((unsigned __int8)(v6[2] - 65) < 0x1Au))) == 97
        && (v6[3] | (unsigned __int8)(32 * ((unsigned __int8)(v6[3] - 65) < 0x1Au))) == 116
        && (v6[4] | (unsigned __int8)(32 * ((unsigned __int8)(v6[4] - 65) < 0x1Au))) == 103
        && (v6[5] | (unsigned __int8)(32 * ((unsigned __int8)(v6[5] - 65) < 0x1Au))) == 112
        && (v6[6] | (unsigned __int8)(32 * ((unsigned __int8)(v6[6] - 65) < 0x1Au))) == 116
        && (v6[7] | (unsigned __int8)(32 * ((unsigned __int8)(v6[7] - 65) < 0x1Au))) == 46
        && (v6[8] | (unsigned __int8)(32 * ((unsigned __int8)(v6[8] - 65) < 0x1Au))) == 101
        && (v6[9] | (unsigned __int8)(32 * ((unsigned __int8)(v6[9] - 65) < 0x1Au))) == 120
        && (v6[10] | (unsigned __int8)(32 * ((unsigned __int8)(v6[10] - 65) < 0x1Au))) == 101;
  return result;
}
