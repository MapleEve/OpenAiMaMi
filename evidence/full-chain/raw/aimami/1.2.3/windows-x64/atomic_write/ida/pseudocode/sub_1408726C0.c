// module: core::relay::atomic_write (codexmate_lib::core::relay::atomic_write)
// source (embedded panic Location): src\core\relay\atomic_write.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1408726c0  size: 0x4a0  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// ⚠ DESTRUCTIVE / SIDE-EFFECTING: this is the top-level "atomic write file"
//   entry point. It creates/opens a temp file in the destination's parent
//   directory (via sub_1414740B0 / sub_141473FA0 / sub_1414734D0 helpers
//   building the temp path), writes the caller-supplied buffer to it in a
//   loop (sub_141491C00 write-loop over (a3=buf_ptr, a4=buf_len), handling
//   WouldBlock/Interrupted-style retry via the switch on BYTE8(v22)&3), then
//   fsyncs/closes the handle (sub_141474A80 likely File::sync_all, then
//   CloseHandle), and on success calls sub_140872290 (the MoveFileExW-based
//   atomic rename function documented separately) to REPLACE the destination
//   file. On any failure path it calls sub_1404A3310 + sub_1407DB070
//   (best-effort cleanup / remove-temp-file-on-error helper) so a failed
//   write does NOT leave the destination modified, but DOES perform local
//   filesystem writes/removes of the temp file.
//
// Behavior summary:
//   sub_1408726C0(a1, a2, a3, a4)
//     a1/a2 = destination path (ptr, len) UTF-8 slice
//     a3/a4 = data buffer (ptr, len) to write
//
//   1. sub_1414740B0(a1, a2) -> computes/validates the parent directory of
//      the destination path. If it returns 0 (null/None, i.e. path has no
//      parent, e.g. root or malformed), immediately bails out via
//      sub_14146B840(20, "atomic write: missing parent", 28) — this looks
//      like this crate's error-construction helper (kind=20, message,
//      message_len=28) and the function returns that error value directly.
//      => "atomic write: missing parent" is a hard precondition: the
//         destination MUST have a parent directory or the call fails fast
//         without touching the filesystem.
//
//   2. v13 = sub_14147B9A0(&v41, parent_dir_ptr, parent_dir_len) — looks like
//      an existence/metadata check on the parent dir (LOBYTE(v41)=1 sentinel
//      passed in). If this returns non-null (some error/Option::Some), the
//      function returns that value immediately (parent-dir check failed,
//      e.g. parent doesn't exist or isn't a directory).
//
//   3. sub_1414742C0(a1, a2) -> attempts to extract the file extension /
//      file stem info from the destination path (used to build the temp
//      file name, e.g. "<name>.<ext>.tmpXXXX" or similar pattern). Falls
//      back to a default (&unk_141798B1F, 6 bytes) if extraction fails.
//
//   4. Builds a random/process-scoped temp filename suffix: calls
//      GetCurrentProcessId() and sub_141356270 (likely a fast RNG / thread-
//      local counter for generating unique suffixes), then formats via
//      sub_14149C0F0 (Rust core::fmt::Write-style formatter, format args
//      built from v41/v42/v43/v44/v45 which chain the process id, a "-"-like
//      separator (sub_1414AB780), the extracted extension (sub_140421AE0
//      format shim), producing something like "<stem>.<pid>-<rand>.<ext>.tmp"
//      or the crate's own convention) into buffer v30 (a String, len v31,
//      cap v32).
//
//   5. sub_141473FA0(&v26, dest_dir_ptr, dest_dir_len, name_ptr, name_len) —
//      joins parent dir + generated temp filename into a full temp path
//      (String, stored at v26/v27/v28 — ptr/len/cap style Rust String repr).
//      Frees the intermediate formatted-name buffer (sub_140001660) once
//      copied.
//
//   6. sub_1414734D0(v38, temp_path_ptr, temp_path_len) — converts the temp
//      path string into a CString-like / OsString UTF-16 or similar
//      representation for the Windows file API (stored into v38, a 32-byte
//      OWORD pair — likely a Cow<OsStr> or PathBuf-like buffer). v39 acts
//      as a "temp path is valid UTF-8 that needs freeing" flag, initialized
//      to 0 then set to 1 once v38 is populated (drives the cleanup at the
//      bottom: sub_1407DB070(v38) on the failure path).
//
//   7. sub_141481480(&v34, temp_path_repr, len) — this is the actual
//      CreateFile-equivalent (Rust std::fs::File::create/open-with-options)
//      call on the generated temp path; v34/v35/v36/v37 form a packed
//      OpenOptions-like struct (v36=7 looks like access/share flags,
//      v37 trailing bytes = 0/0x100000001 = disposition/attribute flags).
//      Returns a bool-like (v20 & 1) success flag plus a Result<File, Error>
//      pair in v21/v13. On failure (bit0 clear) jumps to LABEL_29 which
//      tears down (calls sub_140892BD0 to log/inspect the error, frees
//      buffers) and returns the error without ever writing.
//
//   8. On successful open, hObject = the file HANDLE-wrapping Rust File
//      value (v21). Loop (LABEL_15) while a4 (remaining bytes to write) > 0:
//        - sub_141491C00(&hObject, a3, a4) — a File::write_all-style single
//          write call (WriteFile wrapper) on the current remaining slice.
//          Returns a Result-like tagged value in v22 (low qword = tag/small
//          value, high qword = pointer/len depending on tag).
//        - if the write reports "wrote 1 byte tag" special-case (== 1)
//          handled via inner switch — likely distinguishing Ok(n) success
//          counts vs io::ErrorKind (WouldBlock=case with retry via
//          sub_140018650 + loop back to LABEL_15; Interrupted similarly
//          swallowed) vs fatal error (goto LABEL_28 -> CloseHandle ->
//          LABEL_29 cleanup+return).
//        - advances a3/a4 by bytes actually written each successful
//          partial-write iteration (a3 += n; a4 -= n;) — a manual
//          write_all loop tolerating short writes.
//        - if all bytes written and a4 == 0 -> LABEL_27: calls
//          sub_141474A80(&hObject) — likely File::sync_all()/FlushFileBuffers
//          equivalent (fsync-before-rename, core of atomic-write durability
//          guarantee). If that errors, falls to LABEL_28 cleanup+return
//          error; else falls through.
//
//   9. LABEL_28: CloseHandle(hObject); goto LABEL_29 (shared cleanup/return
//      path used both for early-open-failure and post-write-failure cases).
//      LABEL_29: calls sub_140892BD0((__int64)v38) — a small helper
//      (documented separately: it conditionally logs a tracing warn/debug
//      event about the temp path IF a passed-in flag byte at offset+32 is
//      1) then frees the temp-path OsString/CString buffer (v38) and the
//      original destination-path-derived buffer (v26) via sub_140001660,
//      and returns v13 (the outcome from whichever step failed/short-
//      circuited, propagated as this function's __int64 result).
//
//   10. Success-with-flush path (after CloseHandle succeeds implicitly via
//       the fsync branch, NOT shown as explicit CloseHandle before rename —
//       actual close happens through sub_141474A80/File drop semantics):
//       v23 = sub_140872290(temp_path_ptr, temp_path_len, a1, a2) — calls
//       the MoveFileExW-based atomic-rename function (sub_140872290,
//       documented separately) to move temp_path -> destination path
//       (a1/a2), i.e. THE ATOMIC COMMIT STEP. If that returns non-zero
//       (error), logs a structured tracing event (sub_140985BA0, gated by
//       the same off_141EC8D80 >= 2 trace-level check) carrying the
//       destination path and the rename error, then propagates the rename
//       error as this function's result (goto LABEL_29).
//       If the rename succeeds (v23 == 0 -> falsy path, i.e. success
//       sentinel), falls through to LABEL_29 as well but v13 stays
//       whatever it was set to.
//
//   11. Full-failure fallback branch (v23 handling / temp file leaked?):
//       on the branch where v39=0; v48=0; calls sub_1404A3310(v11, v12)
//       (write-error cleanup, likely frees a Vec<u8> data buffer or similar
//       intermediate), then sub_1407DB070(v38) (frees/drops the temp-path
//       OsString explicitly since v39 was cleared so the shared cleanup
//       at LABEL_29 won't double-free it), and finally frees v26
//       (destination-derived buffer) before returning 0. NOTE: this branch
//       does NOT delete the temp file from disk on error — cleanup of the
//       leftover temp file on the filesystem is NOT visible in this
//       function's disassembly (may be handled by a Drop impl / RAII guard
//       not inlined here, or may be a known leak-on-error characteristic
//       of this atomic-write implementation — worth flagging for the
//       compatibility implementation).
//
// Return value: __int64, 0 = success (per typical Result<(), E> convention
// used across this module — matches sub_140872290's own 0=success sentinel).
// Non-zero = boxed/tagged error pointer or encoded error value from
// whichever failing step short-circuited.
//
// Referenced strings/symbols:
//   "atomic write: missing parent" (aAtomicWriteMis) — hard precondition
//     error message, this crate's own text (not a Windows message), key
//     evidence this function IS the module's public write_atomic()/
//     atomic_write() entry point.
//   "codexmate_lib::core::relay::atomic_write" (module path)
//   calls sub_140872290 (MoveFileExW rename-with-retry, documented sibling)
//   calls sub_140892BD0 (small conditional-log helper, documented sibling)

__int64 __fastcall sub_1408726C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  char **v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // r13
  char v20; // al
  char **v21; // rdx
  __int128 v22; // rax
  __int64 v23; // rax
  _QWORD v24[4]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  _QWORD v29[2]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v30; // [rsp+88h] [rbp+8h] BYREF
  __int64 v31; // [rsp+90h] [rbp+10h]
  __int64 v32; // [rsp+98h] [rbp+18h]
  __int64 v33; // [rsp+A0h] [rbp+20h]
  DWORD v34[2]; // [rsp+ACh] [rbp+2Ch] BYREF
  __int64 v35; // [rsp+B4h] [rbp+34h]
  int v36; // [rsp+BCh] [rbp+3Ch]
  _BYTE v37[13]; // [rsp+C0h] [rbp+40h]
  _OWORD v38[2]; // [rsp+D0h] [rbp+50h] BYREF
  char v39; // [rsp+F0h] [rbp+70h]
  char **v40; // [rsp+100h] [rbp+80h] BYREF
  __int128 v41; // [rsp+108h] [rbp+88h] BYREF
  DWORD *v42; // [rsp+118h] [rbp+98h]
  __int64 v43; // [rsp+120h] [rbp+A0h]
  char **v44; // [rsp+128h] [rbp+A8h]
  __int64 (__fastcall *v45)(); // [rsp+130h] [rbp+B0h]
  HANDLE hObject; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v47; // [rsp+140h] [rbp+C0h]
  char v48; // [rsp+14Fh] [rbp+CFh]
  __int64 v49; // [rsp+150h] [rbp+D0h]

  v49 = -2; /*0x1408726db*/
  v8 = sub_1414740B0(a1, a2); /*0x1408726f2*/
  if ( !v8 ) /*0x1408726fa*/
  {
    LOBYTE(v10) = 20; /*0x14087277b*/
    return sub_14146B840(v10, aAtomicWriteMis, 28); /*0x140872790*/
  }
  v11 = v8; /*0x1408726fc*/
  v12 = v9; /*0x1408726ff*/
  LOBYTE(v41) = 1; /*0x140872702*/
  v13 = (char **)sub_14147B9A0(&v41, v8, v9); /*0x14087271b*/
  if ( v13 ) /*0x140872721*/
    return (__int64)v13; /*0x140872721*/
  v14 = sub_1414742C0(a1, a2); /*0x14087272d*/
  if ( v14 ) /*0x140872735*/
  {
    sub_1414A3C90(&v41, v14, v15); /*0x140872744*/
    v16 = &unk_141798B1F; /*0x140872750*/
    if ( !(_BYTE)v41 ) /*0x140872757*/
      v16 = *((void **)&v41 + 1); /*0x140872757*/
    v17 = 6; /*0x14087275f*/
    if ( !(_BYTE)v41 ) /*0x140872764*/
      v17 = (__int64)v42; /*0x140872764*/
  }
  else
  {
    v17 = 6; /*0x140872795*/
    v16 = &unk_141798B1F; /*0x14087279a*/
  }
  v29[0] = v16; /*0x1408727a1*/
  v29[1] = v17; /*0x1408727a5*/
  v34[0] = GetCurrentProcessId(); /*0x1408727ae*/
  sub_141356270(&v41); /*0x1408727b8*/
  v38[0] = v41; /*0x1408727c4*/
  *(_QWORD *)&v41 = v29; /*0x1408727cc*/
  *((_QWORD *)&v41 + 1) = sub_14041F680; /*0x1408727da*/
  v42 = v34; /*0x1408727e5*/
  v43 = (__int64)sub_1414AB780; /*0x1408727f3*/
  v44 = (char **)v38; /*0x1408727fe*/
  v45 = sub_140421AE0; /*0x14087280c*/
  sub_14149C0F0(&v30, &unk_141798B25, &v41); /*0x140872825*/
  v47 = v31; /*0x140872841*/
  sub_141473FA0((unsigned int)&v26, v11, v12, v31, v32); /*0x140872848*/
  if ( v30 ) /*0x140872855*/
    sub_140001660(v47, v30, 1); /*0x140872864*/
  v19 = v28; /*0x14087286d*/
  v47 = v27; /*0x140872875*/
  sub_1414734D0(v38, v27, v28); /*0x14087287f*/
  v39 = 0; /*0x140872885*/
  v34[0] = 0; /*0x140872889*/
  v35 = 0; /*0x140872890*/
  v36 = 7; /*0x140872898*/
  *(_QWORD *)v37 = 0; /*0x14087289f*/
  *(_QWORD *)&v37[5] = 0x100000001LL; /*0x1408728a7*/
  v33 = v19; /*0x1408728c2*/
  v20 = sub_141481480(v34, v47, v19); /*0x1408728c9*/
  v13 = v21; /*0x1408728cf*/
  if ( (v20 & 1) != 0 ) /*0x1408728d4*/
  {
LABEL_29:
    sub_140892BD0((__int64)v38); /*0x1408729b7*/
    if ( *(_QWORD *)&v38[0] ) /*0x1408729c8*/
      sub_140001660(*((_QWORD *)&v38[0] + 1), *(_QWORD *)&v38[0], 1); /*0x1408729d4*/
    if ( v26 ) /*0x1408729e7*/
      sub_140001660(v47, v26, 1); /*0x1408729ef*/
    return (__int64)v13; /*0x1408729ef*/
  }
  hObject = v21; /*0x1408728da*/
  v39 = 1; /*0x1408728e1*/
  while ( 1 ) /*0x1408728e5*/
  {
LABEL_15:
    if ( !a4 ) /*0x1408728e8*/
      goto LABEL_27; /*0x1408728e8*/
    v48 = 1; /*0x1408728ee*/
    *(_QWORD *)&v22 = sub_141491C00(&hObject, a3, a4); /*0x140872902*/
    v13 = *((char ***)&v22 + 1); /*0x140872908*/
    v41 = v22; /*0x14087290b*/
    if ( (_QWORD)v22 == 1 ) /*0x14087291d*/
      break; /*0x14087291d*/
    if ( !*((_QWORD *)&v22 + 1) ) /*0x140872943*/
    {
      v13 = &off_141785228; /*0x140872b35*/
      goto LABEL_28; /*0x140872b3c*/
    }
    if ( a4 < *((_QWORD *)&v22 + 1) ) /*0x14087294f*/
    {
      v48 = 1; /*0x140872b41*/
      sub_1416C32F0(*((_QWORD *)&v22 + 1), a4, a4, &off_141785290); /*0x140872b58*/
    }
    a3 += *((_QWORD *)&v22 + 1); /*0x140872955*/
    a4 -= *((_QWORD *)&v22 + 1); /*0x140872958*/
  }
  switch ( BYTE8(v22) & 3 ) /*0x140872933*/
  {
    case 0: /*0x140872933*/
      LOBYTE(v22) = *(_BYTE *)(*((_QWORD *)&v22 + 1) + 16LL); /*0x140872935*/
      goto LABEL_24; /*0x14087293a*/
    case 1: /*0x140872933*/
      LOBYTE(v22) = *(_BYTE *)(*((_QWORD *)&v22 + 1) + 15LL); /*0x14087295d*/
      goto LABEL_24; /*0x140872962*/
    case 2: /*0x140872933*/
      goto LABEL_26;
    case 3: /*0x140872933*/
      *(_QWORD *)&v22 = HIDWORD(*((_QWORD *)&v22 + 1)); /*0x140872967*/
LABEL_24:
      if ( (_BYTE)v22 == 35 ) /*0x14087296d*/
      {
        v48 = 1; /*0x14087296f*/
        sub_140018650((char *)&v41 + 8); /*0x14087297d*/
        goto LABEL_15; /*0x140872983*/
      }
LABEL_26:
      if ( *((_QWORD *)&v22 + 1) ) /*0x14087298b*/
        goto LABEL_28; /*0x14087298b*/
LABEL_27:
      v48 = 1; /*0x14087298d*/
      v13 = (char **)sub_141474A80(&hObject); /*0x1408729a1*/
      if ( v13 ) /*0x1408729a7*/
      {
LABEL_28:
        CloseHandle(hObject); /*0x1408729a9*/
        goto LABEL_29; /*0x1408729b0*/
      }
      CloseHandle(hObject); /*0x140872a12*/
      v48 = 0; /*0x140872a18*/
      v23 = sub_140872290(v47, v33, a1, a2); /*0x140872a30*/  // atomic rename: temp -> destination
      v13 = (char **)v23; /*0x140872a36*/
      if ( v23 ) /*0x140872a3c*/
      {
        v40 = (char **)v23; /*0x140872a42*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140872a57*/
        {
          v25[0] = a1; /*0x140872a5d*/
          v25[1] = a2; /*0x140872a61*/
          v24[0] = v25; /*0x140872a69*/
          v24[1] = sub_14148F3A0; /*0x140872a74*/
          v24[2] = &v40; /*0x140872a7f*/
          v24[3] = sub_141490720; /*0x140872a8a*/
          *(_QWORD *)&v41 = aCodexmateLibCo_33; /*0x140872a95*/
          *((_QWORD *)&v41 + 1) = 40; /*0x140872a9c*/
          v42 = (DWORD *)aCodexmateLibCo_33; /*0x140872aa7*/
          v43 = 40; /*0x140872aae*/
          v44 = &off_141798B98; /*0x140872ac0*/
          sub_140985BA0(&unk_141798B33, v24, 2, &v41); /*0x140872adf*/
          v13 = v40; /*0x140872ae5*/
        }
        goto LABEL_29; /*0x140872aec*/
      }
      v39 = 0; /*0x140872af1*/
      v48 = 0; /*0x140872af5*/
      sub_1404A3310(v11, v12); /*0x140872b02*/
      sub_1407DB070(v38); /*0x140872b0c*/
      if ( v26 ) /*0x140872b19*/
        sub_140001660(v47, v26, 1); /*0x140872b28*/
      return 0;
  }
}

/* xrefs / helper table
0x1414740b0  sub_1414740B0        get parent directory of a path (Path::parent equivalent)
0x14146b840  sub_14146B840        construct/return this crate's error type (kind, msg, msg_len)
0x141798b03  aAtomicWriteMis      "atomic write: missing parent"
0x14147b9a0  sub_14147B9A0        parent-dir existence/metadata check
0x1414742c0  sub_1414742C0        extract file extension from path
0x1414a3c90  sub_1414A3C90        Option<&str> unwrap/convert helper for extension
0x141798b1f  unk_141798B1F        default extension fallback bytes (len 6)
0x141485020  GetCurrentProcessId  kernel32
0x141356270  sub_141356270        RNG / unique-suffix generator for temp filenames
0x14041f680  sub_14041F680        fmt::Display shim (used in format_args! chain)
0x1414ab780  sub_1414AB780        fmt::Display shim (separator/literal)
0x140421ae0  sub_140421AE0        fmt::Display shim (extension)
0x14149c0f0  sub_14149C0F0        core::fmt::Write formatter driver (builds temp filename string)
0x141798b25  unk_141798B25        format string template (temp filename pattern)
0x141473fa0  sub_141473FA0        join(parent_dir, filename) -> PathBuf/String
0x140001660  sub_140001660        Vec/Box dealloc helper
0x1414734d0  sub_1414734D0        path string -> OS path representation (UTF-16 or CString-like)
0x141481480  sub_141481480        File::create/open-with-options equivalent (CreateFileW wrapper)
0x140892bd0  sub_140892BD0        conditional trace-log + cleanup helper (documented sibling file)
0x141491c00  sub_141491C00        File::write (single WriteFile call) wrapper, Result<usize,io::Error>-like
0x141785228  off_141785228        static "write returned 0 / UnexpectedEof"-style error value
0x1416c32f0  sub_1416C32F0        error-kind classification helper (interrupted/wouldblock check)
0x141785290  off_141785290        static error-kind table/lookup
0x140018650  sub_140018650        drop/deallocate temporary
0x141474a80  sub_141474A80        File::sync_all / flush equivalent (fsync before rename)
0x1416c48c8  __imp_CloseHandle    kernel32 (import thunk)
0x140872290  sub_140872290        atomic rename via MoveFileExW+retry (documented sibling file)
0x14148f3a0  sub_14148F3A0        tracing field formatter
0x141490720  sub_141490720        tracing field formatter
0x141798adb  aCodexmateLibCo_33   "codexmate_lib::core::relay::atomic_write"
0x141798b98  off_141798B98        static tracing field name table
0x140985ba0  sub_140985BA0        tracing event emit (rename-failure log)
0x141798b33  unk_141798B33        static tracing Metadata/Callsite for rename-failure event
0x141ec8d80  off_141EC8D80        global trace-level filter gate
0x1404a3310  sub_1404A3310        cleanup helper on write-failure path
0x1407db070  sub_1407DB070        drop/deallocate temp-path OsString/CString buffer
*/
