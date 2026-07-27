// addr: 0x140694f20
// size: 0x114
// module (owner-map): core::relay::fetch_models
// evidence: panic-location-2hop
// win 1.2.1 | module src/core/relay/fetch_models.rs | attributed via panic-Location xref (win-native)
// source: IDA Pro decompile via idacall.py, target AiMaMi.1.2.3 win64.exe (imagebase 0x140000000), <host>
// no destructive side effects observed (Drop/timeout-config/error-path helper; no remove/DELETE/truncate/kill)

__int64 __fastcall sub_140694F20(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE v4[912]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v5[114]; // [rsp+3C0h] [rbp+340h] BYREF
  _BYTE v6[680]; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v7; // [rsp+9F8h] [rbp+978h]
  int v8; // [rsp+A00h] [rbp+980h]
  __int64 v9; // [rsp+A18h] [rbp+998h]
  int v10; // [rsp+A20h] [rbp+9A0h]
  __int64 v11; // [rsp+A48h] [rbp+9C8h]
  int v12; // [rsp+A50h] [rbp+9D0h]
  __int64 v13; // [rsp+A88h] [rbp+A08h]
  __int64 v14; // [rsp+AE0h] [rbp+A60h]

  v14 = -2; /*0x140694f33*/
  v1 = (_QWORD *)**a1; /*0x140694f41*/
  **a1 = 0; /*0x140694f44*/
  if ( !v1 ) /*0x140694f4e*/
    sub_1416C3040(&off_141781120); /*0x140694ff8*/
  sub_14104B490(v6); /*0x140694f5e*/
  v11 = 30; /*0x140694f63*/
  v12 = 0; /*0x140694f6e*/
  v7 = 30; /*0x140694f78*/
  v8 = 0; /*0x140694f83*/
  v13 = 10; /*0x140694f8d*/
  v9 = 60; /*0x140694f98*/
  v10 = 0; /*0x140694fa3*/
  sub_141684120(v4, v6, 912); /*0x140694fbd*/
  sub_1410484B0(v5, v4); /*0x140694fcf*/
  result = sub_141042BD0(v5); /*0x140694fd7*/
  if ( result == 1 ) /*0x140694fe0*/
  {
    v5[0] = v3; /*0x140694fff*/
    sub_1416C3060( /*0x14069502c*/
      (unsigned int)"failed to build async direct fetch_models client",
      48,
      (unsigned int)v5,
      (unsigned int)&off_1417826E0,
      (__int64)&off_141782238);
  }
  *v1 = v3; /*0x140694fe2*/
  return result; /*0x140694fe5*/
}

// refs:
//   0x1416c3040 sub_1416C3040             - panic/unwrap-on-null helper (called when v1 == NULL, i.e. Option::None taken as Some)
//   0x141781120 off_141781120             - vtable/typeinfo passed to sub_1416C3040 (panic payload descriptor)
//   0x14104b490 sub_14104B490(v6)         - builder-init: constructs a base client-builder value in-place at v6 (680 bytes) — identical init helper to sub_140694E00's v4
//   0x141684120 sub_141684120(v4,v6,912)  - copy/transform step: builds an extended 912-byte builder value at v4 from the 680-byte base at v6 (likely applies "direct"/no-proxy or connector override on top of the base builder, matching the "direct" naming difference vs sub_140694E00)
//   0x1410484b0 sub_1410484B0(v5,v4)      - wraps/converts v4 into a 912-byte (v5, 114 qwords) builder/handle used for the final build call
//   0x141042bd0 sub_141042BD0(v5)         - build()-style call consuming builder at v5; returns discriminant in `result` (1 == Err arm), payload in edx/v3
//   0x1416c3060 sub_1416C3060(...)        - panic!()/expect() formatter — invoked on Err with message "failed to build async direct fetch_models client" (len 48)
//   0x1417826e0 off_1417826E0             - panic location/typeinfo pointer (shared with sub_140694E00's build failure path)
//   0x141782238 off_141782238             - panic location/typeinfo pointer (second arg to sub_1416C3060, distinct from sub_140694E00's off_1417821F0)
//   0x141782208 aFailedToBuildA_1         - string literal "failed to build async direct fetch_models client"
//
// behavior summary:
//   Builds the *direct* (non-proxied / bypass-relay-pool) variant of the async HTTP client used
//   for the relay's fetch_models path — sibling/counterpart to sub_140694E00's plain async client.
//   Same out-param double-pointer unwrap-on-null pattern as sub_140694E00 (reads **a1 into v1,
//   zeroes **a1, panics via sub_1416C3040 if v1 was NULL).
//   Initializes a base client-builder at v6 (via sub_14104B490, 680 bytes — same init routine and
//   same struct size as sub_140694E00's v4), then sets the same three timeout tuple pairs:
//     v11/v12 = (30, 0)   -> connect timeout: 30s
//     v7/v8   = (30, 0)   -> request timeout: 30s
//     v13/v9  = (10, 60)  -> pool_idle_timeout: 10s / pool tuning constant 60
//     v10     = 0
//   Unlike sub_140694E00, does NOT build directly off the base builder. Instead:
//     1. sub_141684120(v4, v6, 912) expands/transforms the 680-byte base builder at v6 into a
//        larger 912-byte builder value at v4 — the extra size and the "direct" naming strongly
//        suggest this step disables the shared connection pool / proxy and installs a dedicated
//        connector (consistent with a "direct" client bypassing whatever pooling/proxy config
//        the plain async client in sub_140694E00 relies on).
//     2. sub_1410484B0(v5, v4) wraps/finalizes that 912-byte value into v5 (114 qwords) for the
//        actual build call.
//   Calls sub_141042BD0(v5) to finalize/build the client (Result<Client, Error>-shaped return).
//   On Err (result == 1): formats and raises a panic/expect with the literal message
//   "failed to build async direct fetch_models client" (48 bytes) via sub_1416C3060, passing the
//   error payload (v5[0] = v3) and two location/typeinfo descriptors (off_1417826E0, off_141782238).
//   On success/either path, writes the resulting client pointer/value back through *v1 (moving it
//   into the caller-owned OnceCell/Lazy slot) and returns `result`.
//   Net effect: lazy-init a second, separately-pooled/"direct" shared async fetch_models HTTP
//   client with the same 30s connect/request timeout and 10s idle-pool timeout as the plain
//   client, but built via an extra transform step that differentiates its connector/pooling
//   behavior, expect()-panicking on build failure.
