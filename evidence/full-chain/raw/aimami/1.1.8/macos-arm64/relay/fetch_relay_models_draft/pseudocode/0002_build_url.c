// callee: codexmate_lib::core::relay::fetch_models::build_url::h146da00e8993363e
// VA: 0x10059d200 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>
// role: URL construction — trims trailing "/" from base_url, strips trailing "/v1" if
//       present, then formats "{base}{suffix}" where suffix is the caller-supplied
//       literal (this owner passes "/v1/models", 10 bytes, byte-confirmed via get_bytes
//       at 0x10125a4dd). Functionally IDENTICAL logic to the 1.1.1 build_url callee
//       (same trim + suffix-strip + format_inner pattern) — CONFIRMED UNCHANGED vs 1.1.1.

__int64 __fastcall codexmate_lib::core::relay::fetch_models::build_url::h146da00e8993363e(
        __int64 a1,   // out: *mut String (result buffer)
        __int64 a2,   // base_url ptr
        unsigned __int64 a3,  // base_url len
        __int64 a4,   // suffix ptr ("/v1/models" from owner call site)
        unsigned __int64 a5)  // suffix len (10)
{
  unsigned __int64 v6, v14; __int64 v7, v11; int v8, v12, v13; char v9, v10;
  __int64 *v15;
  _QWORD v17[2], v18[2], v19[4];
  __int64 v20; unsigned __int64 v21;

  v18[0] = a4; v18[1] = a5;                              /*0x10059d20e-212*/
  do {
    while (1) {
      if (!a3) { v20 = a2; v21 = 0; goto LABEL_19; }      /* empty base_url -> no-trim path */
      v6 = a3; v7 = a2 + a3; v8 = *(char *)(a2 + a3 - 1); /*0x10059d236-23d*/
      if (v8 < 0) break;                                  /* multi-byte UTF-8 tail, handle below */
      --a3;
      if (v8 != 47 /* '/' */) goto LABEL_12;               /* not trailing slash -> stop trimming */
    }
    /* UTF-8 continuation-byte walk-back (handles multi-byte trailing chars, not just ASCII '/') */
    v9 = *(_BYTE *)(v7 - 2);
    if (v9 >= -64) { v11 = v7 - 2; v13 = v9 & 0x1F; }
    else {
      v10 = *(_BYTE *)(v7 - 3);
      if (v10 >= -64) { v11 = v7 - 3; v12 = v10 & 0xF; }
      else { v11 = v7 - 4; v12 = ((*(_BYTE *)(v7 - 4) & 7) << 6) | (v10 & 0x3F); }
      v13 = (v12 << 6) | (v9 & 0x3F);
    }
    a3 = v11 - a2;
  } while (((v13 << 6) | (v8 & 0x3F)) == 0x2F);            /* keep trimming while decoded cp == '/' */
LABEL_12:
  v20 = a2; v21 = v6;                                       /*0x10059d2a8-2ac*/
  /* strip trailing "/v1" suffix if base_url (after trailing-slash trim) ends with it */
  if (v6 < 3
      || (*(_WORD *)(v7 - 3) ^ 0x762F | *(unsigned __int8 *)(v7 - 1) ^ 0x31) != 0
      || a5 < 3
      || (*(_WORD *)a4 ^ 0x762F | *(unsigned __int8 *)(a4 + 2) ^ 0x31))
  {
    goto LABEL_19;                                          /* base doesn't end with "/v1" -> no strip */
  }
  v14 = v6 - 3;
  if (v6 != 3 && *(char *)(a2 + v14) <= -65)
    core::str::slice_error_fail::h480e51fbd8b15eba(a2, v6, 0, v14, &anon_1f22c03b288e649fafb3d21192ed4cff_187);
  v17[0] = a2; v17[1] = v6 - 3; v15 = v17;                  /* trimmed = base_url[0 .. len-3] ("/v1" removed) */
LABEL_19:
  v15 = &v20;
LABEL_20:
  v19[0] = v15; v19[1] = (Display::fmt for &str);
  v19[2] = v18; v19[3] = (Display::fmt for &str);
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_1f22c03b288e649fafb3d21192ed4cff_185, v19);
  /* format_inner builds "{trimmed_base}{suffix}" e.g. "https://api.openai.com" + "/v1/models" */
  return a1;
}
