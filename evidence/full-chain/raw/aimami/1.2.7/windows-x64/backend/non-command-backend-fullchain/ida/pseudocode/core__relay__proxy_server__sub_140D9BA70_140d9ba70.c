// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d9ba70 | name sub_140D9BA70
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D9BA70(__m128i *a1, const __m128i *a2, __int16 a3, __int64 *a4)
{
  __int64 m128i_i64; // r14
  int v9; // [rsp+20h] [rbp-50h]
  int v10; // [rsp+20h] [rbp-50h]
  int v11; // [rsp+20h] [rbp-50h]
  int v12; // [rsp+20h] [rbp-50h]
  int v13; // [rsp+20h] [rbp-50h]
  int v14; // [rsp+20h] [rbp-50h]
  int v15; // [rsp+20h] [rbp-50h]
  int v16; // [rsp+20h] [rbp-50h]

  m128i_i64 = (__int64)a2[20].m128i_i64;
  sub_140D25BC0(
    (unsigned int)aGet_1,
    3,
    (_DWORD)a2,
    (_DWORD)a4,
    a3,
    4,
    (__int64)a2[20].m128i_i64,
    (__int64)&off_141A4BC28,
    2);
  LOWORD(v9) = a3;
  sub_140D25BC0((unsigned int)aHead_0, 4, (_DWORD)a2 + 32, (_DWORD)a4, v9, 8, m128i_i64, (__int64)&off_141A4BC48, 1);
  LOWORD(v10) = a3;
  sub_140D25BC0((unsigned int)"TRACE", 5, (_DWORD)a2 + 224, (_DWORD)a4, v10, 256, m128i_i64, (__int64)&off_141A4BC60, 1);
  LOWORD(v11) = a3;
  sub_140D25BC0(
    (unsigned int)&unk_141A4BC70,
    3,
    (_DWORD)a2 + 192,
    (_DWORD)a4,
    v11,
    128,
    m128i_i64,
    (__int64)&off_141A4BC78,
    1);
  LOWORD(v12) = a3;
  sub_140D25BC0((unsigned int)"POST", 4, (_DWORD)a2 + 160, (_DWORD)a4, v12, 64, m128i_i64, (__int64)&off_141A4BC90, 1);
  LOWORD(v13) = a3;
  sub_140D25BC0((unsigned int)"PATCH", 5, (_DWORD)a2 + 128, (_DWORD)a4, v13, 32, m128i_i64, (__int64)&off_141A4BCA8, 1);
  LOWORD(v14) = a3;
  sub_140D25BC0((unsigned int)"OPTIONS", 7, (_DWORD)a2 + 96, (_DWORD)a4, v14, 16, m128i_i64, (__int64)&off_141A4BCC0, 1);
  LOWORD(v15) = a3;
  sub_140D25BC0((unsigned int)"DELETE", 6, (_DWORD)a2 + 64, (_DWORD)a4, v15, 2, m128i_i64, (__int64)&off_141A4BCD8, 1);
  LOWORD(v16) = a3;
  sub_140D25BC0((unsigned int)"CONNECT", 7, (_DWORD)a2 + 96, (_DWORD)a4, v16, 1, m128i_i64, (__int64)&off_141A4BCF0, 1);
  sub_1418F44E0(a1, a2, 0x168u);
  return sub_140299EE0(a4);
}
