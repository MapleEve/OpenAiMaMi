// module: codexmate_lib/core/debug_report_upload
// addr: 0x140403ba0
// name: sub_140403BA0
// win 1.2.1 | module src/core/debug_report_upload.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140403BA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( dword_141EC2450 )
  {
    v4 = 0;
  }
  else
  {
    v4 = qword_141EC2438;
    v6 = qword_141EC2440;
  }
  sub_140403D70(a1, a2, a3, v4, v6);
  return a1;
}