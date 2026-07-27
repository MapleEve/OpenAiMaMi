// addr: 0x140694e00
// size: 0xe4
// module (owner-map): core::relay::fetch_models
// evidence: panic-location-2hop
// win 1.2.1 | module src/core/relay/fetch_models.rs | attributed via panic-Location xref (win-native)
// source: IDA Pro decompile via idacall.py, target AiMaMi.1.2.3 win64.exe (imagebase 0x140000000), <host>
// no destructive side effects observed (Drop/timeout-config/error-path helper; no remove/DELETE/truncate/kill)

__int64 __fastcall sub_140694E00(_QWORD **a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE v4[680]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v5; // [rsp+2D8h] [rbp+258h]
  int v6; // [rsp+2E0h] [rbp+260h]
  __int64 v7; // [rsp+2F8h] [rbp+278h]
  int v8; // [rsp+300h] [rbp+280h]
  __int64 v9; // [rsp+328h] [rbp+2A8h]
  int v10; // [rsp+330h] [rbp+2B0h]
  __int64 v11; // [rsp+368h] [rbp+2E8h]
  _QWORD v12[4]; // [rsp+3C0h] [rbp+340h] BYREF

  v12[1] = -2; /*0x140694e12*/
  v1 = (_QWORD *)**a1; /*0x140694e20*/
  **a1 = 0; /*0x140694e23*/
  if ( !v1 ) /*0x140694e2d*/
    sub_1416C3040(&off_141781120); /*0x140694ea8*/
  sub_14104B490(v4); /*0x140694e36*/
  v9 = 30; /*0x140694e3b*/
  v10 = 0; /*0x140694e46*/
  v5 = 30; /*0x140694e50*/
  v6 = 0; /*0x140694e5b*/
  v11 = 10; /*0x140694e65*/
  v7 = 60; /*0x140694e70*/
  v8 = 0; /*0x140694e7b*/
  result = sub_141042BD0(v4); /*0x140694e88*/
  if ( result == 1 ) /*0x140694e91*/
  {
    v12[0] = v3; /*0x140694eaf*/
    sub_1416C3060( /*0x140694edc*/
      (unsigned int)"failed to build async fetch_models client",
      41,
      (unsigned int)v12,
      (unsigned int)&off_1417826E0,
      (__int64)&off_1417821F0);
  }
  *v1 = v3; /*0x140694e93*/
  return result; /*0x140694e96*/
}

// refs:
//   0x1416c3040 sub_1416C3040          - panic/unwrap-on-null helper (called when v1 == NULL, i.e. Option::None taken as Some)
//   0x141781120 off_141781120          - vtable/typeinfo passed to sub_1416C3040 (panic payload descriptor)
//   0x14104b490 sub_14104B490(v4)      - builder-init: constructs a client-builder value in-place at v4 (680 bytes, likely reqwest::ClientBuilder equivalent)
//   0x141042bd0 sub_141042BD0(v4)      - build()-style call consuming the builder at v4; returns discriminant in `result` (1 == Err arm), payload in edx/v3
//   0x1416c3060 sub_1416C3060(...)     - panic!()/expect() formatter — invoked on Err with message "failed to build async fetch_models client" (len 41)
//   0x1417826e0 off_1417826E0          - panic location/typeinfo pointer (paired with error variant)
//   0x1417821f0 off_1417821F0          - panic location/typeinfo pointer (second arg to sub_1416C3060)
//   0x1417821c7 aFailedToBuildA_0      - string literal "failed to build async fetch_models client"
//
// behavior summary:
//   Builds the *async* (non-direct/pooled) HTTP client used for the relay's fetch_models path.
//   Takes a1 as an out-param double-pointer slot: reads **a1 into v1, zeroes **a1 (moves-out the
//   inner value), and panics via sub_1416C3040 if that inner pointer was NULL (a None/moved-out
//   invariant violation — defensive unwrap-on-Option pattern typical of Rust MaybeUninit/Option
//   handling in compiled panic paths).
//   Initializes a client-builder struct at v4 (via sub_14104B490) then writes six 8/4-byte fields
//   that look like paired (duration_secs, subsec_or_flag) timeout configuration tuples:
//     v9/v10  = (30, 0)   -> connect timeout: 30s
//     v5/v6   = (30, 0)   -> request timeout: 30s
//     v11/v7  = (10, 60)  -> pool_idle_timeout: 10s, pool_max_idle_per_host-ish: 60 (order per
//                            local slot layout; both are literal timeout/pool tuning constants)
//     v8      = 0
//   Calls sub_141042BD0(v4) to finalize/build the client (Result<Client, Error>-shaped return:
//   `result` is the discriminant, `v3`/edx the payload).
//   On Err (result == 1): formats and raises a panic/expect with the literal message
//   "failed to build async fetch_models client" (41 bytes) via sub_1416C3060, passing the error
//   payload (v12[0] = v3) and two location/typeinfo descriptors.
//   On success (or after panic setup momentarily assigns through — same as v3 whichever path),
//   writes the resulting client pointer/value back through *v1 (completing the move into the
//   caller-owned OnceCell/Lazy slot) and returns `result`.
//   Net effect: lazy-init a shared async fetch_models HTTP client with 30s connect/request
//   timeout and 10s idle-pool timeout, expect()-panicking on build failure.
