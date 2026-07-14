// SOURCE: AiMaMi 1.1.8 macOS universal (x86_64 slice decompiled; app-level facts arch-independent)
// SHA256 (AiMaMi app Mach-O): 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
// FUNCTION: codexmate_lib::core::repository::Repository::load_pending_auto_switch
// SYMBOL: __ZN13codexmate_lib4core10repository10Repository24load_pending_auto_switch17he8817545a8701b54E
// VA: 0x10052b920   CALLER: confirm_pending_auto_switch (depth1 callee of root)
// STATUS: accepted pseudocode — UNCHANGED vs 1.0.9 (same fs::read_to_string + serde_json struct parse
//   into PendingAutoSwitchPayload; VA differs only due to relinking, not behavior).
// terminated_reason: persistence read (std::fs::read_to_string) + response_serialize (serde_json
//   deserialize_struct) — this is a leaf edge (fs boundary + serde boundary), no further app logic below.

_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_pending_auto_switch::he8817545a8701b54(
        _QWORD *__dst, __int64 a2)
{
  // reads pending_auto_switch.json from disk:
  std::fs::read_to_string::inner::hcce2334f4117b5b3(/*dsta*/0, *(long*)(a2+488), *(long*)(a2+496)); /*0x10052b94d*/
  // on IO error: drop temp buffers, set discriminant=2 (None-equivalent for caller), return
  // on IO ok: deserialize JSON via serde_json into PendingAutoSwitchPayload:
  //   _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$..deserialize_struct::h2f9de4e6b40928af(...); /*0x10052ba16*/
  // on parse error: peek_error -> drop AccountSummary fields, propagate parse error as discriminant=2
  // on parse ok: memcpy 0x2B0 bytes into __dst (PendingAutoSwitchPayload DTO), return
  return __dst;
}
