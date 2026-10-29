// win 1.2.7 | module src/core/debug_report_upload.rs | ea 0x141259060 | name sub_141259060
// win 1.2.7 | module src/core/debug_report_upload.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141259060(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // xmm1

  *(_OWORD *)(a1 + 144) = 0;
  v5 = a2[1];
  *(_OWORD *)(a1 + 224) = *a2;
  *(_OWORD *)(a1 + 240) = v5;
  *(_QWORD *)(a1 + 16) = 2;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 8;
  *(_QWORD *)(a1 + 160) = 8;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 2;
  *(_QWORD *)(a1 + 184) = 0;
  *(_WORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = -2;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a4;
  return a1;
}
