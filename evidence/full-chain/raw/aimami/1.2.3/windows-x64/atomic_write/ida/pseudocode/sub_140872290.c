// module: core::relay::atomic_write (codexmate_lib::core::relay::atomic_write)
// source (embedded panic Location): src\core\relay\atomic_write.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140872290  size: 0x283  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// ⚠ DESTRUCTIVE SIDE EFFECT: calls MoveFileExW(src, dst, flags=9)
//   flags 9 = MOVEFILE_REPLACE_EXISTING(1) | MOVEFILE_WRITE_THROUGH(8)
//   This OVERWRITES/REPLACES the destination file if it already exists.
//   This is the final "commit" rename step of the atomic-write pattern:
//   write to temp file, fsync, then MoveFileExW(temp -> final, REPLACE_EXISTING).
//
// Behavior summary:
//   sub_140872290(a1,a2,a3,a4) takes two (ptr,len) UTF-8 string pairs (source path
//   at a1/a2, destination path at a3/a4). It converts both to UTF-16 (sub_14031FB40,
//   likely a UTF8->UTF16 / OsStr conversion helper) and then retries
//   MoveFileExW(src_w, dst_w, MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)
//   in a loop up to 10 attempts (v7 counter, 0..9 inclusive => 10 tries).
//   On failure it inspects GetLastError():
//     - if error > 0x21 (33) OR error not in {0x20(32,SHARING_VIOLATION),
//       0x21(33,LOCK_VIOLATION)} bitmask test, AND error != 1224
//       (ERROR_UNRECOGNIZED_VOLUME? actually 1224 = ERROR_ACCOUNT_LOCKED_OUT is
//       not it; more likely context-specific transient-Windows-file-lock retry
//       list) -> treated as fatal, breaks to LABEL_11.
//     - error == 1224 is explicitly retried like the bitmask set (this is
//       Windows error 1224 = ERROR_USER_MAPPED_FILE per WinError.h — a common
//       transient condition when the destination is memory-mapped, e.g. AV
//       scanners or another process still has the file mapped).
//     - if retry budget (10 attempts) exhausted -> fatal, breaks to LABEL_11.
//   Each retry: if a global trace/log verbosity gate (off_141EC8D80 >= 2, i.e.
//   a log-level check for "trace"/level>=2) is enabled, emits a structured
//   trace/log record via sub_1412C36A0 (a tracing-style event builder) carrying
//   the retry attempt count, the destination path fields, and a static Location
//   record pointing at "codexmate_lib::core::relay::atomic_write" /
//   "src\core\relay\atomic_write.rs" line 30-ish (v20/v21 encode line=30, col=2).
//   Then sleeps via sub_141487490(0, 500000000) — i.e. a 0.5 second sleep
//   (nanosleep-style helper, 0 sec + 500,000,000 ns) before the next retry,
//   and drops the constructed trace-record temporary (sub_140018650).
//   On final success (v9=0) or after exhausting fatal/retry paths, falls
//   through to LABEL_11: frees the destination/source UTF-16 buffers
//   (sub_140001660 — a Vec<u16>/Box<[u16]> deallocation helper, called with
//   byte length = 2*char_count and alignment 2) and returns v9
//   (0 = success sentinel, or (error<<32)|2 = tagged error code on failure).
//
// Return value encoding: `__int64` result looks like a tagged Result<(), E>
// where 0 = Ok, and non-zero encodes (win32_error << 32) | 2 (2 = discriminant
// for a specific error variant, likely `io::Error` wrapped in this crate's
// error enum, matching the retry/log context above).
//
// Referenced strings/symbols:
//   "codexmate_lib::core::relay::atomic_write" (module path, aCodexmateLibCo_33)
//   "src\core\relay\atomic_write.rs" (aSrcCoreRelayAt, Rust panic::Location file)
//   MoveFileExW (kernel32)
//   GetLastError (kernel32)

__int64 __fastcall sub_140872290(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const WCHAR *v6; // rsi
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  _QWORD v12[10]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+78h] [rbp-8h] BYREF
  _QWORD v14[2]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v15[3]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF
  const char *v17; // [rsp+C0h] [rbp+40h]
  __int64 v18; // [rsp+C8h] [rbp+48h]
  __int64 v19; // [rsp+D0h] [rbp+50h]
  const char *v20; // [rsp+D8h] [rbp+58h]
  __int64 v21; // [rsp+E0h] [rbp+60h]
  __int64 v22; // [rsp+E8h] [rbp+68h]
  const char *v23; // [rsp+F0h] [rbp+70h]
  __int64 v24; // [rsp+F8h] [rbp+78h]
  __int64 v25; // [rsp+100h] [rbp+80h]
  void *v26; // [rsp+108h] [rbp+88h]
  _QWORD *v27; // [rsp+110h] [rbp+90h]
  __int64 v28; // [rsp+118h] [rbp+98h]
  __int64 v29; // [rsp+120h] [rbp+A0h] BYREF
  int v30; // [rsp+12Ch] [rbp+ACh] BYREF
  LPCWSTR lpNewFileName; // [rsp+130h] [rbp+B0h]
  char v32; // [rsp+13Fh] [rbp+BFh] BYREF
  __int64 v33; // [rsp+140h] [rbp+C0h]

  v33 = -2; /*0x1408722ab*/
  v16 = a1; /*0x1408722bf*/
  v17 = (const char *)(a1 + a2); /*0x1408722c3*/
  LOWORD(v18) = 0; /*0x1408722c7*/
  LODWORD(v19) = 1; /*0x1408722cd*/
  sub_14031FB40(v15, &v16); /*0x1408722dc*/
  v28 = a4; /*0x1408722e1*/
  v16 = a3; /*0x1408722ec*/
  v17 = (const char *)(a3 + a4); /*0x1408722f0*/
  LOWORD(v18) = 0; /*0x1408722f4*/
  LODWORD(v19) = 1; /*0x1408722fa*/
  sub_14031FB40(v13, &v16); /*0x140872309*/
  v6 = (const WCHAR *)v15[1]; /*0x14087230f*/
  lpNewFileName = (LPCWSTR)v13[1]; /*0x140872317*/
  v7 = 0; /*0x140872333*/
  while ( !MoveFileExW(v6, lpNewFileName, 9u) ) /*0x140872357*/
  {
    LODWORD(v8) = GetLastError(); /*0x14087235d*/
    v9 = (v8 << 32) | 2; /*0x14087236a*/
    v29 = v9; /*0x14087236e*/
    if ( (unsigned int)v8 > 0x21 || (v10 = 0x300000020LL, !_bittest64(&v10, (unsigned int)v8)) ) /*0x14087238a*/
    {
      if ( (_DWORD)v8 != 1224 ) /*0x140872395*/
        goto LABEL_11; /*0x140872395*/
    }
    if ( v7 == 9 ) /*0x14087239f*/
      goto LABEL_11; /*0x14087239f*/
    ++v7; /*0x1408723a5*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1408723b6*/
    {
      v30 = v7; /*0x1408723bc*/
      v14[0] = a3; /*0x1408723c3*/
      v14[1] = v28; /*0x1408723ce*/
      v12[0] = &v30; /*0x1408723d9*/
      v12[1] = sub_1414AB780; /*0x1408723dd*/
      v12[2] = "\n"; /*0x1408723e8*/
      v12[3] = sub_1414AB780; /*0x1408723ec*/
      v12[4] = v14; /*0x1408723f4*/
      v12[5] = sub_14148F3A0; /*0x1408723ff*/
      v12[6] = &v29; /*0x140872403*/
      v12[7] = sub_141490720; /*0x14087240e*/
      v12[8] = &unk_1417983B0; /*0x140872419*/
      v12[9] = sub_1414AC520; /*0x140872424*/
      v16 = 0; /*0x140872428*/
      v17 = aCodexmateLibCo_33; /*0x140872430*/
      v18 = 40; /*0x140872434*/
      v19 = 0; /*0x14087243c*/
      v20 = aSrcCoreRelayAt; /*0x14087244b*/
      v21 = 30; /*0x14087244f*/
      v22 = 2; /*0x140872457*/
      v23 = aCodexmateLibCo_33; /*0x14087245f*/
      v24 = 40; /*0x140872463*/
      v25 = 0xA700000001LL; /*0x140872475*/
      v26 = &unk_141798A68; /*0x140872483*/
      v27 = v12; /*0x14087248e*/
      sub_1412C36A0(&v32, &v16); /*0x1408724a0*/
    }
    sub_141487490(0, 500000000); /*0x1408724ad*/  // sleep(0s, 500,000,000ns) = 500ms backoff
    sub_140018650(&v29); /*0x1408724b6*/
  }
  v9 = 0; /*0x1408724c1*/
LABEL_11:
  if ( v13[0] ) /*0x1408724cb*/
    sub_140001660(lpNewFileName, 2LL * v13[0], 2); /*0x1408724dd*/
  if ( v15[0] ) /*0x1408724e9*/
    sub_140001660(v6, 2LL * v15[0], 2); /*0x1408724f7*/
  return v9; /*0x1408724ff*/
}

/* xrefs / helper table
0x14031fb40  sub_14031FB40        UTF-8 -> UTF-16 (Vec<u16>) path conversion helper
0x14148c4e0  GetLastError         kernel32
0x1414ab780  sub_1414AB780        tracing field-value formatter (fmt::Display shim)
0x141798a64  asc_141798A64        "\n" literal (used as tracing macro fmt terminator)
0x14148f3a0  sub_14148F3A0        tracing field-value formatter (Debug shim, for path Display)
0x141490720  sub_141490720        tracing field-value formatter (Display shim, for error code)
0x1417983b0  unk_1417983B0        static tracing Metadata/Callsite record
0x1414ac520  sub_1414AC520        tracing dispatch (event emit)
0x141798adb  aCodexmateLibCo_33   "codexmate_lib::core::relay::atomic_write"
0x141798abc  aSrcCoreRelayAt      "src\core\relay\atomic_write.rs"
0x141798a68  unk_141798A68        static tracing Metadata (fields descriptor)
0x1412c36a0  sub_1412C36A0        tracing event constructor
0x141ec8d80  off_141EC8D80        global max tracing level filter (compared >= 2 i.e. TRACE/DEBUG gate)
0x141487490  sub_141487490        thread sleep (duration secs, nanos)
0x140018650  sub_140018650        drop/deallocate a temporary struct (tracing event builder)
0x14167db8c  MoveFileExW          kernel32
0x140001660  sub_140001660        Vec<u16>/Box<[u16]> deallocation (RawVec::dealloc style: ptr, size, align)
*/
