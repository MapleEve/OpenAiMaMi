// aimami 1.1.8 windows-x64 -- SHARED runtime helper reached from has_notch's call-tree (depth 3)
// addr=0x14007d500 (renamed tokio_coop_budget_check_sys), size=327B, basic_blocks=19, cyclomatic_complexity=6
// callers (49 total, confirmed via analyze_function -- NOT has_notch-specific):
//   sub_14005A100, sub_14005A640, sub_14005A9E0, sub_14005ADB0, sub_14005B2B0, sub_14005B650, sub_14005B9F0,
//   sub_14005BEF0, sub_1400668E0, sub_140066B00, sub_140066D10, sub_140066F20, sub_140067130, sub_140067350,
//   sub_140067560, sub_140067770, sub_140067980, sub_140067B90, sub_140067DA0, sub_140067FB0, sub_1400681C0,
//   sub_140068440, sub_140068680, sub_140068890, sub_140068AA0, sub_140068CE0, sub_1400691D0, sub_140069480,
//   sub_140069690, sub_140069910, sub_140069C40, sub_140069E50, sub_14006A090, sub_14006A310, sub_14006A510,
//   sub_14006AA30, sub_14006AC10, sub_14006ADB0, sub_14006AF50, sub_14006B0F0, sub_14006B640, sub_14006B7E0,
//   sub_14006B980, sub_14006BED0, sub_14006C300, sub_14006C500, sub_14006C6E0, sub_14007CEC0, sub_1400CD8D0,
//   sub_1400DF080, has_notch_async_body_sys@0x140848a50
// callees: sub_1400B0470, sub_141075440, sub_14007E1E0, sub_1400D8AC0, sub_14107A760, sub_1412762D0
//
// Classification: this is a std::task/tokio-runtime-generic "current task-local context match + cooperative
// scheduling budget" check (compares a thread-local task pointer at a2+32 against the current task id from
// sub_14107A760(), atomically increments 2 budget counters via _InterlockedIncrement64, BUG()-panics on
// overflow). Returns discriminant 18 (same-context/fast-path) or 3 (cross-context/differently-handled path)
// into *a1. Shared identically by ~49 different command owner-wrappers -- genuine library internal, not
// has_notch business logic (satisfies red line 13 exclusion: not library_internal-vs-config-callsite confusion,
// confirmed via direct caller-count enumeration, not string-pool heuristics).

__int64 *__fastcall tokio_coop_budget_check_sys(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v5, v6; bool v7; char v8; __int64 v9, v10, v11;
  __m128i v13[11]; __m128i v14[11]; const __m128i *v15; char v16; __int64 v17;

  v17 = -2; /*0x14007d513*/
  v15 = a3; /*0x14007d51e*/
  v16 = 1; /*0x14007d52b*/
  v14[0].m128i_i64[0] = sub_14107A760(); /*0x14007d538*/           // current task-id ptr
  v5 = *(_QWORD *)(v14[0].m128i_i64[0] + 16); /*0x14007d53c*/
  v6 = *(_QWORD *)(a2 + 32); /*0x14007d540*/                       // future's captured task-id ptr
  v7 = _InterlockedDecrement64((volatile signed __int64 *)v14[0].m128i_i64[0]) == 0; /*0x14007d548*/
  if ( v5 == v6 ) /*0x14007d54e*/                                  // same-context fast path
  {
    if ( v7 ) { v16 = 1; sub_141075440(v14); }                     /*0x14007d552,0x14007d55f*/
    sub_1412762D0(v14, v15, 0xB0u); /*0x14007d576*/
    v9 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 24)); /*0x14007d57f*/  // coop budget A
    if ( (v9 < 0) ^ v8 | (v9 == 0)
      || (v10 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 80)), (v10 < 0) ^ v8 | (v10 == 0)) )  // coop budget B
      BUG(); /*0x14007d645*/
    v16 = 0; /*0x14007d59b*/
    sub_14007E1E0(a2 + 40, v14); /*0x14007d5a9*/
    *a1 = 18; /*0x14007d5af*/                                      // discriminant 18 = same-context
  }
  else
  {
    if ( v7 ) { v16 = 1; sub_141075440(v14); }                     /*0x14007d5ba,0x14007d5c7*/
    sub_1412762D0(v14, v15, 0xB0u); /*0x14007d5e1*/
    v16 = 0; /*0x14007d5e6*/
    sub_1400B0470(v13, a2, v14); /*0x14007d5f7*/
    v11 = 18; /*0x14007d5fd*/
    if ( v13[0].m128i_i8[0] != 38 ) /*0x14007d606*/
    {
      sub_1412762D0(v14, v13, 0xB0u); /*0x14007d619*/
      v16 = 0; /*0x14007d61e*/
      sub_1400D8AC0(v14); /*0x14007d628*/
      v11 = 3; /*0x14007d62e*/                                     // discriminant 3 = cross-context
    }
    *a1 = v11; /*0x14007d633*/
  }
  return a1; /*0x14007d639*/
}
