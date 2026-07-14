// aimami 1.1.8 windows-x64 — reqwest::Error Display impl (library-internal, NOT app logic)
// va: 0x140C068B0 (sub_140C068B0) — size=509B, basic_blocks=16, cyclomatic_complexity=11,
// callees=2 (sub_1410958B0 — fmt::Formatter::write_str trampoline, sub_141095070).
// decompile: near-full (107 chars truncated at tail — trailing fallthrough case only).
// terminated_reason: error_return — this is the reqwest crate's `impl Display for
// reqwest::Error`, confirmed by the exact library error-message set embedded as string literals
// below (identical wording/ordering to the public reqwest crate source). This is the terminal
// error-formatting point for ANY failed HTTP request made by the core quota dispatcher
// (0x140976010) against ANY of the 11 provider quota endpoints — a shared reqwest-crate internal,
// not quota-specific business logic.

char __fastcall sub_140C068B0(__int64 *a1, _QWORD *a2)
{
  __int64 v3;      // rdi
  const char *v4, *v7; // rdx
  __int64 v5;      // r8
  __int16 v6;      // ax
  char v8;         // cl
  char result;     // al
  __int128 *v10;   // stack BYREF
  __int64 (__fastcall *v11)(); // stack
  __int64 *v12;    // stack
  __int64 (__fastcall *v13)(); // stack
  __int128 *v14;   // stack
  __int64 (__fastcall *v15)(); // stack
  __int64 v16;     // stack BYREF
  _QWORD v17[2];   // stack BYREF
  __int128 v18;    // stack BYREF
  _QWORD v19[4];   // stack BYREF

  v3 = *a1;
  switch ( *(_WORD *)(*a1 + 88) )     // reqwest::error::Kind discriminant
  {
    case 0: v4 = aBuilderError_0;      /* "builder error" */               v5 = 13; goto LABEL_13;
    case 1: v4 = aErrorSendingRe_1;    /* "error sending request" */       v5 = 21; goto LABEL_13;
    case 2: v4 = aErrorFollowing_0;    /* "error following redirect" */    v5 = 24; goto LABEL_13;
    case 3:
      // Kind::Status(code) — formats "HTTP status <client|server> error (nnn <Reason>)"
      v16 = v3 + 90;
      v6 = *(_WORD *)(v3 + 90);   // status code
      v7 = aHttpStatusServ_0;     /* "HTTP status server error" */
      if ( (unsigned __int16)(v6 - 400) < 0x64u )
        v7 = (const char *)&unk_1413D19E3;   /* "HTTP status client error" (400-499) */
      v17[0] = v7; v17[1] = 24;
      if ( *(_QWORD *)(v3 + 96) )
      {
        // has a canonical reason-phrase table entry for this status code
        v19[0] = (char *)&unk_1413D19FB + 3 * (unsigned __int16)(v6 - 100);
        v19[1] = 3;
        v18 = *(_OWORD *)(v3 + 104);
        v10 = (__int128 *)v17; v11 = sub_1405906F0;
        v12 = v19;               v13 = sub_1405906F0;
        v14 = &v18;              v15 = sub_140C813B0;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **))sub_1410958B0)(
                                *a2, a2[1], &unk_1413D2487, &v10) )
          return 1;
      }
      else
      {
        v10 = (__int128 *)v17; v11 = sub_1405906F0;
        v12 = &v16;              v13 = sub_140B76070;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, void *, __int128 **))sub_1410958B0)(
                                *a2, a2[1], &unk_1413D2492, &v10) )
          return 1;
      }
      /* ... trailing "\n for url (<url>)" suffix formatting, common to all Kind variants,
         elided here (compiler drop-glue-adjacent boilerplate, 107 chars) ... */
      result = 0;
      return result;
    case 4: v4 = aRequestOrRespo_0;  /* "request or response body error" */  v5 = 30; goto LABEL_13;
    case 5: v4 = aErrorDecodingR_0;  /* "error decoding response body" */    v5 = 28; goto LABEL_13;
    case 6: v4 = aErrorUpgrading_0;  /* "error upgrading connection" */      v5 = 26;
LABEL_13:
      /* single-literal Kind variants all funnel through the same write_str + "\n for url (" suffix
         formatter — terminal, no further app-level logic beyond fmt::Formatter internals */
      return result;
  }
}

/* strings (confirmed via decompile() — verbatim reqwest crate Display::fmt text, cross-checked
   against the public reqwest source's error.rs message set, byte-for-byte match):
   "builder error", "error sending request", "error following redirect",
   "HTTP status server error", "HTTP status client error",
   "request or response body error", "error decoding response body",
   "error upgrading connection\n for url (" */
